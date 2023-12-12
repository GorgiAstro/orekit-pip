#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "org/hipparchus/ode/ODEState.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/sampling/ODEStepHandler.h"
#include "org/hipparchus/ode/events/ODEStepEndHandler.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "java/lang/String.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ODEIntegrator::class$ = NULL;
      jmethodID *ODEIntegrator::mids$ = NULL;
      bool ODEIntegrator::live$ = false;

      jclass ODEIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ODEIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addEventDetector_a2423f3286456e55] = env->getMethodID(cls, "addEventDetector", "(Lorg/hipparchus/ode/events/ODEEventDetector;)V");
          mids$[mid_addStepEndHandler_b9694d2460b8c773] = env->getMethodID(cls, "addStepEndHandler", "(Lorg/hipparchus/ode/events/ODEStepEndHandler;)V");
          mids$[mid_addStepHandler_2660d523bc4bf5e9] = env->getMethodID(cls, "addStepHandler", "(Lorg/hipparchus/ode/sampling/ODEStepHandler;)V");
          mids$[mid_clearEventDetectors_0640e6acf969ed28] = env->getMethodID(cls, "clearEventDetectors", "()V");
          mids$[mid_clearStepEndHandlers_0640e6acf969ed28] = env->getMethodID(cls, "clearStepEndHandlers", "()V");
          mids$[mid_clearStepHandlers_0640e6acf969ed28] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_getCurrentSignedStepsize_557b8123390d8d0c] = env->getMethodID(cls, "getCurrentSignedStepsize", "()D");
          mids$[mid_getEvaluations_412668abc8d889e9] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getEventDetectors_0d9551367f7ecdef] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/List;");
          mids$[mid_getMaxEvaluations_412668abc8d889e9] = env->getMethodID(cls, "getMaxEvaluations", "()I");
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getStepEndHandlers_0d9551367f7ecdef] = env->getMethodID(cls, "getStepEndHandlers", "()Ljava/util/List;");
          mids$[mid_getStepHandlers_0d9551367f7ecdef] = env->getMethodID(cls, "getStepHandlers", "()Ljava/util/List;");
          mids$[mid_getStepStart_0a798a152cb54887] = env->getMethodID(cls, "getStepStart", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_integrate_7b1e7ccc98e27149] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_integrate_f94c5e4ec5dc77e7] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/OrdinaryDifferentialEquation;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_setMaxEvaluations_a3da1a935cb37f7b] = env->getMethodID(cls, "setMaxEvaluations", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void ODEIntegrator::addEventDetector(const ::org::hipparchus::ode::events::ODEEventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_a2423f3286456e55], a0.this$);
      }

      void ODEIntegrator::addStepEndHandler(const ::org::hipparchus::ode::events::ODEStepEndHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepEndHandler_b9694d2460b8c773], a0.this$);
      }

      void ODEIntegrator::addStepHandler(const ::org::hipparchus::ode::sampling::ODEStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepHandler_2660d523bc4bf5e9], a0.this$);
      }

      void ODEIntegrator::clearEventDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventDetectors_0640e6acf969ed28]);
      }

      void ODEIntegrator::clearStepEndHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepEndHandlers_0640e6acf969ed28]);
      }

      void ODEIntegrator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_0640e6acf969ed28]);
      }

      jdouble ODEIntegrator::getCurrentSignedStepsize() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCurrentSignedStepsize_557b8123390d8d0c]);
      }

      jint ODEIntegrator::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_412668abc8d889e9]);
      }

      ::java::util::List ODEIntegrator::getEventDetectors() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEventDetectors_0d9551367f7ecdef]));
      }

      jint ODEIntegrator::getMaxEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_412668abc8d889e9]);
      }

      ::java::lang::String ODEIntegrator::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      ::java::util::List ODEIntegrator::getStepEndHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepEndHandlers_0d9551367f7ecdef]));
      }

      ::java::util::List ODEIntegrator::getStepHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepHandlers_0d9551367f7ecdef]));
      }

      ::org::hipparchus::ode::ODEStateAndDerivative ODEIntegrator::getStepStart() const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getStepStart_0a798a152cb54887]));
      }

      ::org::hipparchus::ode::ODEStateAndDerivative ODEIntegrator::integrate(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_7b1e7ccc98e27149], a0.this$, a1.this$, a2));
      }

      ::org::hipparchus::ode::ODEStateAndDerivative ODEIntegrator::integrate(const ::org::hipparchus::ode::OrdinaryDifferentialEquation & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_f94c5e4ec5dc77e7], a0.this$, a1.this$, a2));
      }

      void ODEIntegrator::setMaxEvaluations(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxEvaluations_a3da1a935cb37f7b], a0);
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
      static PyObject *t_ODEIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ODEIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ODEIntegrator_addEventDetector(t_ODEIntegrator *self, PyObject *arg);
      static PyObject *t_ODEIntegrator_addStepEndHandler(t_ODEIntegrator *self, PyObject *arg);
      static PyObject *t_ODEIntegrator_addStepHandler(t_ODEIntegrator *self, PyObject *arg);
      static PyObject *t_ODEIntegrator_clearEventDetectors(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_clearStepEndHandlers(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_clearStepHandlers(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getCurrentSignedStepsize(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getEvaluations(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getEventDetectors(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getMaxEvaluations(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getName(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getStepEndHandlers(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getStepHandlers(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getStepStart(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_integrate(t_ODEIntegrator *self, PyObject *args);
      static PyObject *t_ODEIntegrator_setMaxEvaluations(t_ODEIntegrator *self, PyObject *arg);
      static PyObject *t_ODEIntegrator_get__currentSignedStepsize(t_ODEIntegrator *self, void *data);
      static PyObject *t_ODEIntegrator_get__evaluations(t_ODEIntegrator *self, void *data);
      static PyObject *t_ODEIntegrator_get__eventDetectors(t_ODEIntegrator *self, void *data);
      static PyObject *t_ODEIntegrator_get__maxEvaluations(t_ODEIntegrator *self, void *data);
      static int t_ODEIntegrator_set__maxEvaluations(t_ODEIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_ODEIntegrator_get__name(t_ODEIntegrator *self, void *data);
      static PyObject *t_ODEIntegrator_get__stepEndHandlers(t_ODEIntegrator *self, void *data);
      static PyObject *t_ODEIntegrator_get__stepHandlers(t_ODEIntegrator *self, void *data);
      static PyObject *t_ODEIntegrator_get__stepStart(t_ODEIntegrator *self, void *data);
      static PyGetSetDef t_ODEIntegrator__fields_[] = {
        DECLARE_GET_FIELD(t_ODEIntegrator, currentSignedStepsize),
        DECLARE_GET_FIELD(t_ODEIntegrator, evaluations),
        DECLARE_GET_FIELD(t_ODEIntegrator, eventDetectors),
        DECLARE_GETSET_FIELD(t_ODEIntegrator, maxEvaluations),
        DECLARE_GET_FIELD(t_ODEIntegrator, name),
        DECLARE_GET_FIELD(t_ODEIntegrator, stepEndHandlers),
        DECLARE_GET_FIELD(t_ODEIntegrator, stepHandlers),
        DECLARE_GET_FIELD(t_ODEIntegrator, stepStart),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ODEIntegrator__methods_[] = {
        DECLARE_METHOD(t_ODEIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEIntegrator, addEventDetector, METH_O),
        DECLARE_METHOD(t_ODEIntegrator, addStepEndHandler, METH_O),
        DECLARE_METHOD(t_ODEIntegrator, addStepHandler, METH_O),
        DECLARE_METHOD(t_ODEIntegrator, clearEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, clearStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getCurrentSignedStepsize, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getMaxEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getName, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getStepStart, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, integrate, METH_VARARGS),
        DECLARE_METHOD(t_ODEIntegrator, setMaxEvaluations, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ODEIntegrator)[] = {
        { Py_tp_methods, t_ODEIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ODEIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ODEIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ODEIntegrator, t_ODEIntegrator, ODEIntegrator);

      void t_ODEIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(ODEIntegrator), &PY_TYPE_DEF(ODEIntegrator), module, "ODEIntegrator", 0);
      }

      void t_ODEIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEIntegrator), "class_", make_descriptor(ODEIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEIntegrator), "wrapfn_", make_descriptor(t_ODEIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ODEIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ODEIntegrator::initializeClass, 1)))
          return NULL;
        return t_ODEIntegrator::wrap_Object(ODEIntegrator(((t_ODEIntegrator *) arg)->object.this$));
      }
      static PyObject *t_ODEIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ODEIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ODEIntegrator_addEventDetector(t_ODEIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::ODEEventDetector a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addEventDetector(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEventDetector", arg);
        return NULL;
      }

      static PyObject *t_ODEIntegrator_addStepEndHandler(t_ODEIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::ODEStepEndHandler a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::events::ODEStepEndHandler::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addStepEndHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepEndHandler", arg);
        return NULL;
      }

      static PyObject *t_ODEIntegrator_addStepHandler(t_ODEIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::sampling::ODEStepHandler a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStepHandler::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addStepHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepHandler", arg);
        return NULL;
      }

      static PyObject *t_ODEIntegrator_clearEventDetectors(t_ODEIntegrator *self)
      {
        OBJ_CALL(self->object.clearEventDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_ODEIntegrator_clearStepEndHandlers(t_ODEIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepEndHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_ODEIntegrator_clearStepHandlers(t_ODEIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_ODEIntegrator_getCurrentSignedStepsize(t_ODEIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCurrentSignedStepsize());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ODEIntegrator_getEvaluations(t_ODEIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ODEIntegrator_getEventDetectors(t_ODEIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::ode::events::PY_TYPE(ODEEventDetector));
      }

      static PyObject *t_ODEIntegrator_getMaxEvaluations(t_ODEIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ODEIntegrator_getName(t_ODEIntegrator *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_ODEIntegrator_getStepEndHandlers(t_ODEIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::ode::events::PY_TYPE(ODEStepEndHandler));
      }

      static PyObject *t_ODEIntegrator_getStepHandlers(t_ODEIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::ode::sampling::PY_TYPE(ODEStepHandler));
      }

      static PyObject *t_ODEIntegrator_getStepStart(t_ODEIntegrator *self)
      {
        ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepStart());
        return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
      }

      static PyObject *t_ODEIntegrator_integrate(t_ODEIntegrator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
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
          }
          {
            ::org::hipparchus::ode::OrdinaryDifferentialEquation a0((jobject) NULL);
            ::org::hipparchus::ode::ODEState a1((jobject) NULL);
            jdouble a2;
            ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::hipparchus::ode::OrdinaryDifferentialEquation::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.integrate(a0, a1, a2));
              return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "integrate", args);
        return NULL;
      }

      static PyObject *t_ODEIntegrator_setMaxEvaluations(t_ODEIntegrator *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setMaxEvaluations(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxEvaluations", arg);
        return NULL;
      }

      static PyObject *t_ODEIntegrator_get__currentSignedStepsize(t_ODEIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCurrentSignedStepsize());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ODEIntegrator_get__evaluations(t_ODEIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ODEIntegrator_get__eventDetectors(t_ODEIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ODEIntegrator_get__maxEvaluations(t_ODEIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) value);
      }
      static int t_ODEIntegrator_set__maxEvaluations(t_ODEIntegrator *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setMaxEvaluations(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxEvaluations", arg);
        return -1;
      }

      static PyObject *t_ODEIntegrator_get__name(t_ODEIntegrator *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_ODEIntegrator_get__stepEndHandlers(t_ODEIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ODEIntegrator_get__stepHandlers(t_ODEIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ODEIntegrator_get__stepStart(t_ODEIntegrator *self, void *data)
      {
        ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepStart());
        return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *UnivariateIntegrator::class$ = NULL;
        jmethodID *UnivariateIntegrator::mids$ = NULL;
        bool UnivariateIntegrator::live$ = false;

        jclass UnivariateIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/UnivariateIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_412668abc8d889e9] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getIterations_412668abc8d889e9] = env->getMethodID(cls, "getIterations", "()I");
            mids$[mid_getMaximalIterationCount_412668abc8d889e9] = env->getMethodID(cls, "getMaximalIterationCount", "()I");
            mids$[mid_getMinimalIterationCount_412668abc8d889e9] = env->getMethodID(cls, "getMinimalIterationCount", "()I");
            mids$[mid_getRelativeAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_integrate_277b266ef2505d2d] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble UnivariateIntegrator::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_557b8123390d8d0c]);
        }

        jint UnivariateIntegrator::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_412668abc8d889e9]);
        }

        jint UnivariateIntegrator::getIterations() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterations_412668abc8d889e9]);
        }

        jint UnivariateIntegrator::getMaximalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalIterationCount_412668abc8d889e9]);
        }

        jint UnivariateIntegrator::getMinimalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinimalIterationCount_412668abc8d889e9]);
        }

        jdouble UnivariateIntegrator::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_557b8123390d8d0c]);
        }

        jdouble UnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_integrate_277b266ef2505d2d], a0, a1.this$, a2, a3);
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
        static PyObject *t_UnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateIntegrator_getAbsoluteAccuracy(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_getEvaluations(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_getIterations(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_getMaximalIterationCount(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_getMinimalIterationCount(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_getRelativeAccuracy(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_integrate(t_UnivariateIntegrator *self, PyObject *args);
        static PyObject *t_UnivariateIntegrator_get__absoluteAccuracy(t_UnivariateIntegrator *self, void *data);
        static PyObject *t_UnivariateIntegrator_get__evaluations(t_UnivariateIntegrator *self, void *data);
        static PyObject *t_UnivariateIntegrator_get__iterations(t_UnivariateIntegrator *self, void *data);
        static PyObject *t_UnivariateIntegrator_get__maximalIterationCount(t_UnivariateIntegrator *self, void *data);
        static PyObject *t_UnivariateIntegrator_get__minimalIterationCount(t_UnivariateIntegrator *self, void *data);
        static PyObject *t_UnivariateIntegrator_get__relativeAccuracy(t_UnivariateIntegrator *self, void *data);
        static PyGetSetDef t_UnivariateIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateIntegrator, absoluteAccuracy),
          DECLARE_GET_FIELD(t_UnivariateIntegrator, evaluations),
          DECLARE_GET_FIELD(t_UnivariateIntegrator, iterations),
          DECLARE_GET_FIELD(t_UnivariateIntegrator, maximalIterationCount),
          DECLARE_GET_FIELD(t_UnivariateIntegrator, minimalIterationCount),
          DECLARE_GET_FIELD(t_UnivariateIntegrator, relativeAccuracy),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateIntegrator__methods_[] = {
          DECLARE_METHOD(t_UnivariateIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateIntegrator, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, getIterations, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, getMaximalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, getMinimalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, integrate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateIntegrator)[] = {
          { Py_tp_methods, t_UnivariateIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnivariateIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateIntegrator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateIntegrator, t_UnivariateIntegrator, UnivariateIntegrator);

        void t_UnivariateIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateIntegrator), &PY_TYPE_DEF(UnivariateIntegrator), module, "UnivariateIntegrator", 0);
        }

        void t_UnivariateIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateIntegrator), "class_", make_descriptor(UnivariateIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateIntegrator), "wrapfn_", make_descriptor(t_UnivariateIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateIntegrator::initializeClass, 1)))
            return NULL;
          return t_UnivariateIntegrator::wrap_Object(UnivariateIntegrator(((t_UnivariateIntegrator *) arg)->object.this$));
        }
        static PyObject *t_UnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateIntegrator_getAbsoluteAccuracy(t_UnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateIntegrator_getEvaluations(t_UnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnivariateIntegrator_getIterations(t_UnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnivariateIntegrator_getMaximalIterationCount(t_UnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnivariateIntegrator_getMinimalIterationCount(t_UnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnivariateIntegrator_getRelativeAccuracy(t_UnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateIntegrator_integrate(t_UnivariateIntegrator *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble result;

          if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_UnivariateIntegrator_get__absoluteAccuracy(t_UnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateIntegrator_get__evaluations(t_UnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateIntegrator_get__iterations(t_UnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateIntegrator_get__maximalIterationCount(t_UnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateIntegrator_get__minimalIterationCount(t_UnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateIntegrator_get__relativeAccuracy(t_UnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsMoultonIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsMoultonIntegrator::class$ = NULL;
        jmethodID *AdamsMoultonIntegrator::mids$ = NULL;
        bool AdamsMoultonIntegrator::live$ = false;

        jclass AdamsMoultonIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsMoultonIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3d5ce2896eb0273f] = env->getMethodID(cls, "<init>", "(IDD[D[D)V");
            mids$[mid_init$_0d23f64daa74287b] = env->getMethodID(cls, "<init>", "(IDDDD)V");
            mids$[mid_errorEstimation_e7930007697328a4] = env->getMethodID(cls, "errorEstimation", "([DD[D[DLorg/hipparchus/linear/RealMatrix;)D");
            mids$[mid_finalizeStep_04cf5a46fd40d06d] = env->getMethodID(cls, "finalizeStep", "(D[D[DLorg/hipparchus/linear/Array2DRowRealMatrix;ZLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsMoultonIntegrator::AdamsMoultonIntegrator(jint a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::nonstiff::AdamsIntegrator(env->newObject(initializeClass, &mids$, mid_init$_3d5ce2896eb0273f, a0, a1, a2, a3.this$, a4.this$)) {}

        AdamsMoultonIntegrator::AdamsMoultonIntegrator(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::nonstiff::AdamsIntegrator(env->newObject(initializeClass, &mids$, mid_init$_0d23f64daa74287b, a0, a1, a2, a3, a4)) {}
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
        static PyObject *t_AdamsMoultonIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdamsMoultonIntegrator_init_(t_AdamsMoultonIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_AdamsMoultonIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsMoultonIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsMoultonIntegrator)[] = {
          { Py_tp_methods, t_AdamsMoultonIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsMoultonIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsMoultonIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdamsIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsMoultonIntegrator, t_AdamsMoultonIntegrator, AdamsMoultonIntegrator);

        void t_AdamsMoultonIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsMoultonIntegrator), &PY_TYPE_DEF(AdamsMoultonIntegrator), module, "AdamsMoultonIntegrator", 0);
        }

        void t_AdamsMoultonIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegrator), "class_", make_descriptor(AdamsMoultonIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegrator), "wrapfn_", make_descriptor(t_AdamsMoultonIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsMoultonIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsMoultonIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsMoultonIntegrator::wrap_Object(AdamsMoultonIntegrator(((t_AdamsMoultonIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsMoultonIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsMoultonIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdamsMoultonIntegrator_init_(t_AdamsMoultonIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              AdamsMoultonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDD[D[D", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdamsMoultonIntegrator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              AdamsMoultonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDDDD", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdamsMoultonIntegrator(a0, a1, a2, a3, a4));
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Exp.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
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
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Exp::Exp() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Exp::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Exp::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$StringConsumer::class$ = NULL;
            jmethodID *ParseToken$StringConsumer::mids$ = NULL;
            bool ParseToken$StringConsumer::live$ = false;

            jclass ParseToken$StringConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_f5ffdf29129ef90a] = env->getMethodID(cls, "accept", "(Ljava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$StringConsumer::accept(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_f5ffdf29129ef90a], a0.this$);
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
            static PyObject *t_ParseToken$StringConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$StringConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$StringConsumer_accept(t_ParseToken$StringConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$StringConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$StringConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$StringConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$StringConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$StringConsumer)[] = {
              { Py_tp_methods, t_ParseToken$StringConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$StringConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$StringConsumer, t_ParseToken$StringConsumer, ParseToken$StringConsumer);

            void t_ParseToken$StringConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$StringConsumer), &PY_TYPE_DEF(ParseToken$StringConsumer), module, "ParseToken$StringConsumer", 0);
            }

            void t_ParseToken$StringConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringConsumer), "class_", make_descriptor(ParseToken$StringConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringConsumer), "wrapfn_", make_descriptor(t_ParseToken$StringConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$StringConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$StringConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$StringConsumer::wrap_Object(ParseToken$StringConsumer(((t_ParseToken$StringConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$StringConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$StringConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$StringConsumer_accept(t_ParseToken$StringConsumer *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
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
#include "org/orekit/time/TTScale.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TTScale::class$ = NULL;
      jmethodID *TTScale::mids$ = NULL;
      bool TTScale::live$ = false;

      jclass TTScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TTScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_b0b988f941da47d8] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_b884068a2c99f6ca] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_e4171ab80e571373] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TTScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      jdouble TTScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_b0b988f941da47d8], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TTScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_b884068a2c99f6ca], a0.this$));
      }

      jdouble TTScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_e4171ab80e571373], a0.this$, a1.this$);
      }

      ::java::lang::String TTScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
      static PyObject *t_TTScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TTScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TTScale_getName(t_TTScale *self);
      static PyObject *t_TTScale_offsetFromTAI(t_TTScale *self, PyObject *args);
      static PyObject *t_TTScale_offsetToTAI(t_TTScale *self, PyObject *args);
      static PyObject *t_TTScale_toString(t_TTScale *self, PyObject *args);
      static PyObject *t_TTScale_get__name(t_TTScale *self, void *data);
      static PyGetSetDef t_TTScale__fields_[] = {
        DECLARE_GET_FIELD(t_TTScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TTScale__methods_[] = {
        DECLARE_METHOD(t_TTScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TTScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TTScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_TTScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_TTScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_TTScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TTScale)[] = {
        { Py_tp_methods, t_TTScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TTScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TTScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TTScale, t_TTScale, TTScale);

      void t_TTScale::install(PyObject *module)
      {
        installType(&PY_TYPE(TTScale), &PY_TYPE_DEF(TTScale), module, "TTScale", 0);
      }

      void t_TTScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TTScale), "class_", make_descriptor(TTScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TTScale), "wrapfn_", make_descriptor(t_TTScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TTScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TTScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TTScale::initializeClass, 1)))
          return NULL;
        return t_TTScale::wrap_Object(TTScale(((t_TTScale *) arg)->object.this$));
      }
      static PyObject *t_TTScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TTScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TTScale_getName(t_TTScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_TTScale_offsetFromTAI(t_TTScale *self, PyObject *args)
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

      static PyObject *t_TTScale_offsetToTAI(t_TTScale *self, PyObject *args)
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

      static PyObject *t_TTScale_toString(t_TTScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TTScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TTScale_get__name(t_TTScale *self, void *data)
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
#include "org/orekit/propagation/conversion/GraggBulirschStoerIntegratorBuilder.h"
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

        ::java::lang::Class *GraggBulirschStoerIntegratorBuilder::class$ = NULL;
        jmethodID *GraggBulirschStoerIntegratorBuilder::mids$ = NULL;
        bool GraggBulirschStoerIntegratorBuilder::live$ = false;

        jclass GraggBulirschStoerIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/GraggBulirschStoerIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_f50d555477b898d8] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GraggBulirschStoerIntegratorBuilder::GraggBulirschStoerIntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractIntegrator GraggBulirschStoerIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
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
        static PyObject *t_GraggBulirschStoerIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GraggBulirschStoerIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GraggBulirschStoerIntegratorBuilder_init_(t_GraggBulirschStoerIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GraggBulirschStoerIntegratorBuilder_buildIntegrator(t_GraggBulirschStoerIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_GraggBulirschStoerIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_GraggBulirschStoerIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GraggBulirschStoerIntegratorBuilder)[] = {
          { Py_tp_methods, t_GraggBulirschStoerIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_GraggBulirschStoerIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GraggBulirschStoerIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GraggBulirschStoerIntegratorBuilder, t_GraggBulirschStoerIntegratorBuilder, GraggBulirschStoerIntegratorBuilder);

        void t_GraggBulirschStoerIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(GraggBulirschStoerIntegratorBuilder), &PY_TYPE_DEF(GraggBulirschStoerIntegratorBuilder), module, "GraggBulirschStoerIntegratorBuilder", 0);
        }

        void t_GraggBulirschStoerIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GraggBulirschStoerIntegratorBuilder), "class_", make_descriptor(GraggBulirschStoerIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GraggBulirschStoerIntegratorBuilder), "wrapfn_", make_descriptor(t_GraggBulirschStoerIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GraggBulirschStoerIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GraggBulirschStoerIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GraggBulirschStoerIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_GraggBulirschStoerIntegratorBuilder::wrap_Object(GraggBulirschStoerIntegratorBuilder(((t_GraggBulirschStoerIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_GraggBulirschStoerIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GraggBulirschStoerIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GraggBulirschStoerIntegratorBuilder_init_(t_GraggBulirschStoerIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          GraggBulirschStoerIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = GraggBulirschStoerIntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GraggBulirschStoerIntegratorBuilder_buildIntegrator(t_GraggBulirschStoerIntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonAbstractGaussianContribution.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *PythonAbstractGaussianContribution::class$ = NULL;
            jmethodID *PythonAbstractGaussianContribution::mids$ = NULL;
            bool PythonAbstractGaussianContribution::live$ = false;

            jclass PythonAbstractGaussianContribution::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonAbstractGaussianContribution");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_9fd79603d9e48fb7] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLorg/orekit/forces/ForceModel;D)V");
                mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getLLimits_8babb6fb34d6b24d] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)[D");
                mids$[mid_getLLimits_233f032b171b49d2] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getParametersDriversWithoutMu_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDriversWithoutMu", "()Ljava/util/List;");
                mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonAbstractGaussianContribution::PythonAbstractGaussianContribution(const ::java::lang::String & a0, jdouble a1, const ::org::orekit::forces::ForceModel & a2, jdouble a3) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_9fd79603d9e48fb7, a0.this$, a1, a2.this$, a3)) {}

            void PythonAbstractGaussianContribution::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
            }

            jlong PythonAbstractGaussianContribution::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
            }

            void PythonAbstractGaussianContribution::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_PythonAbstractGaussianContribution_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractGaussianContribution_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonAbstractGaussianContribution_init_(t_PythonAbstractGaussianContribution *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonAbstractGaussianContribution_finalize(t_PythonAbstractGaussianContribution *self);
            static PyObject *t_PythonAbstractGaussianContribution_pythonExtension(t_PythonAbstractGaussianContribution *self, PyObject *args);
            static jobject JNICALL t_PythonAbstractGaussianContribution_getLLimits0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonAbstractGaussianContribution_getLLimits1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonAbstractGaussianContribution_getParametersDriversWithoutMu2(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractGaussianContribution_pythonDecRef3(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonAbstractGaussianContribution_get__self(t_PythonAbstractGaussianContribution *self, void *data);
            static PyGetSetDef t_PythonAbstractGaussianContribution__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractGaussianContribution, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractGaussianContribution__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractGaussianContribution, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractGaussianContribution, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractGaussianContribution, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractGaussianContribution, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractGaussianContribution)[] = {
              { Py_tp_methods, t_PythonAbstractGaussianContribution__methods_ },
              { Py_tp_init, (void *) t_PythonAbstractGaussianContribution_init_ },
              { Py_tp_getset, t_PythonAbstractGaussianContribution__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractGaussianContribution)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution),
              NULL
            };

            DEFINE_TYPE(PythonAbstractGaussianContribution, t_PythonAbstractGaussianContribution, PythonAbstractGaussianContribution);

            void t_PythonAbstractGaussianContribution::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractGaussianContribution), &PY_TYPE_DEF(PythonAbstractGaussianContribution), module, "PythonAbstractGaussianContribution", 1);
            }

            void t_PythonAbstractGaussianContribution::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGaussianContribution), "class_", make_descriptor(PythonAbstractGaussianContribution::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGaussianContribution), "wrapfn_", make_descriptor(t_PythonAbstractGaussianContribution::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGaussianContribution), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractGaussianContribution::initializeClass);
              JNINativeMethod methods[] = {
                { "getLLimits", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonAbstractGaussianContribution_getLLimits0 },
                { "getLLimits", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)[D", (void *) t_PythonAbstractGaussianContribution_getLLimits1 },
                { "getParametersDriversWithoutMu", "()Ljava/util/List;", (void *) t_PythonAbstractGaussianContribution_getParametersDriversWithoutMu2 },
                { "pythonDecRef", "()V", (void *) t_PythonAbstractGaussianContribution_pythonDecRef3 },
              };
              env->registerNatives(cls, methods, 4);
            }

            static PyObject *t_PythonAbstractGaussianContribution_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractGaussianContribution::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractGaussianContribution::wrap_Object(PythonAbstractGaussianContribution(((t_PythonAbstractGaussianContribution *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractGaussianContribution_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractGaussianContribution::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonAbstractGaussianContribution_init_(t_PythonAbstractGaussianContribution *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::forces::ForceModel a2((jobject) NULL);
              jdouble a3;
              PythonAbstractGaussianContribution object((jobject) NULL);

              if (!parseArgs(args, "sDkD", ::org::orekit::forces::ForceModel::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = PythonAbstractGaussianContribution(a0, a1, a2, a3));
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

            static PyObject *t_PythonAbstractGaussianContribution_finalize(t_PythonAbstractGaussianContribution *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractGaussianContribution_pythonExtension(t_PythonAbstractGaussianContribution *self, PyObject *args)
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

            static jobject JNICALL t_PythonAbstractGaussianContribution_getLLimits0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGaussianContribution::mids$[PythonAbstractGaussianContribution::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::wrap_Object(::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements(a1));
              PyObject *result = PyObject_CallMethod(obj, "getLLimits", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                throwTypeError("getLLimits", result);
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

            static jobject JNICALL t_PythonAbstractGaussianContribution_getLLimits1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGaussianContribution::mids$[PythonAbstractGaussianContribution::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::semianalytical::dsst::utilities::t_AuxiliaryElements::wrap_Object(::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements(a1));
              PyObject *result = PyObject_CallMethod(obj, "getLLimits", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("getLLimits", result);
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

            static jobject JNICALL t_PythonAbstractGaussianContribution_getParametersDriversWithoutMu2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGaussianContribution::mids$[PythonAbstractGaussianContribution::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::List value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getParametersDriversWithoutMu", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
              {
                throwTypeError("getParametersDriversWithoutMu", result);
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

            static void JNICALL t_PythonAbstractGaussianContribution_pythonDecRef3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGaussianContribution::mids$[PythonAbstractGaussianContribution::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractGaussianContribution::mids$[PythonAbstractGaussianContribution::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonAbstractGaussianContribution_get__self(t_PythonAbstractGaussianContribution *self, void *data)
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
#include "org/hipparchus/util/AbstractUnscentedTransform.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/UnscentedTransformProvider.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *AbstractUnscentedTransform::class$ = NULL;
      jmethodID *AbstractUnscentedTransform::mids$ = NULL;
      bool AbstractUnscentedTransform::live$ = false;

      jclass AbstractUnscentedTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/AbstractUnscentedTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_unscentedTransform_4b6e483760a5840b] = env->getMethodID(cls, "unscentedTransform", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)[Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getMultiplicationFactor_557b8123390d8d0c] = env->getMethodID(cls, "getMultiplicationFactor", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractUnscentedTransform::AbstractUnscentedTransform(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      JArray< ::org::hipparchus::linear::RealVector > AbstractUnscentedTransform::unscentedTransform(const ::org::hipparchus::linear::RealVector & a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_unscentedTransform_4b6e483760a5840b], a0.this$, a1.this$));
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
      static PyObject *t_AbstractUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractUnscentedTransform_init_(t_AbstractUnscentedTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractUnscentedTransform_unscentedTransform(t_AbstractUnscentedTransform *self, PyObject *args);

      static PyMethodDef t_AbstractUnscentedTransform__methods_[] = {
        DECLARE_METHOD(t_AbstractUnscentedTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractUnscentedTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractUnscentedTransform, unscentedTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractUnscentedTransform)[] = {
        { Py_tp_methods, t_AbstractUnscentedTransform__methods_ },
        { Py_tp_init, (void *) t_AbstractUnscentedTransform_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractUnscentedTransform)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractUnscentedTransform, t_AbstractUnscentedTransform, AbstractUnscentedTransform);

      void t_AbstractUnscentedTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractUnscentedTransform), &PY_TYPE_DEF(AbstractUnscentedTransform), module, "AbstractUnscentedTransform", 0);
      }

      void t_AbstractUnscentedTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnscentedTransform), "class_", make_descriptor(AbstractUnscentedTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnscentedTransform), "wrapfn_", make_descriptor(t_AbstractUnscentedTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnscentedTransform), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractUnscentedTransform::initializeClass, 1)))
          return NULL;
        return t_AbstractUnscentedTransform::wrap_Object(AbstractUnscentedTransform(((t_AbstractUnscentedTransform *) arg)->object.this$));
      }
      static PyObject *t_AbstractUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractUnscentedTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractUnscentedTransform_init_(t_AbstractUnscentedTransform *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        AbstractUnscentedTransform object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = AbstractUnscentedTransform(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractUnscentedTransform_unscentedTransform(t_AbstractUnscentedTransform *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        JArray< ::org::hipparchus::linear::RealVector > result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.unscentedTransform(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "unscentedTransform", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/raster/TileUpdater.h"
#include "org/orekit/rugged/raster/UpdatableTile.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *TileUpdater::class$ = NULL;
        jmethodID *TileUpdater::mids$ = NULL;
        bool TileUpdater::live$ = false;

        jclass TileUpdater::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/TileUpdater");

            mids$ = new jmethodID[max_mid];
            mids$[mid_updateTile_1b303eaeecb8087a] = env->getMethodID(cls, "updateTile", "(DDLorg/orekit/rugged/raster/UpdatableTile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void TileUpdater::updateTile(jdouble a0, jdouble a1, const ::org::orekit::rugged::raster::UpdatableTile & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_updateTile_1b303eaeecb8087a], a0, a1, a2.this$);
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
        static PyObject *t_TileUpdater_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TileUpdater_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TileUpdater_updateTile(t_TileUpdater *self, PyObject *args);

        static PyMethodDef t_TileUpdater__methods_[] = {
          DECLARE_METHOD(t_TileUpdater, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TileUpdater, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TileUpdater, updateTile, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TileUpdater)[] = {
          { Py_tp_methods, t_TileUpdater__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TileUpdater)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TileUpdater, t_TileUpdater, TileUpdater);

        void t_TileUpdater::install(PyObject *module)
        {
          installType(&PY_TYPE(TileUpdater), &PY_TYPE_DEF(TileUpdater), module, "TileUpdater", 0);
        }

        void t_TileUpdater::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileUpdater), "class_", make_descriptor(TileUpdater::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileUpdater), "wrapfn_", make_descriptor(t_TileUpdater::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileUpdater), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TileUpdater_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TileUpdater::initializeClass, 1)))
            return NULL;
          return t_TileUpdater::wrap_Object(TileUpdater(((t_TileUpdater *) arg)->object.this$));
        }
        static PyObject *t_TileUpdater_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TileUpdater::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TileUpdater_updateTile(t_TileUpdater *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::rugged::raster::UpdatableTile a2((jobject) NULL);

          if (!parseArgs(args, "DDk", ::org::orekit::rugged::raster::UpdatableTile::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.updateTile(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateTile", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *AlgorithmId::class$ = NULL;
        jmethodID *AlgorithmId::mids$ = NULL;
        bool AlgorithmId::live$ = false;
        AlgorithmId *AlgorithmId::BASIC_SLOW_EXHAUSTIVE_SCAN_FOR_TESTS_ONLY = NULL;
        AlgorithmId *AlgorithmId::CONSTANT_ELEVATION_OVER_ELLIPSOID = NULL;
        AlgorithmId *AlgorithmId::DUVENHAGE = NULL;
        AlgorithmId *AlgorithmId::DUVENHAGE_FLAT_BODY = NULL;
        AlgorithmId *AlgorithmId::IGNORE_DEM_USE_ELLIPSOID = NULL;

        jclass AlgorithmId::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/AlgorithmId");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_4dd032d6be1cc9d4] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_values_739a706506ae4ced] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/api/AlgorithmId;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BASIC_SLOW_EXHAUSTIVE_SCAN_FOR_TESTS_ONLY = new AlgorithmId(env->getStaticObjectField(cls, "BASIC_SLOW_EXHAUSTIVE_SCAN_FOR_TESTS_ONLY", "Lorg/orekit/rugged/api/AlgorithmId;"));
            CONSTANT_ELEVATION_OVER_ELLIPSOID = new AlgorithmId(env->getStaticObjectField(cls, "CONSTANT_ELEVATION_OVER_ELLIPSOID", "Lorg/orekit/rugged/api/AlgorithmId;"));
            DUVENHAGE = new AlgorithmId(env->getStaticObjectField(cls, "DUVENHAGE", "Lorg/orekit/rugged/api/AlgorithmId;"));
            DUVENHAGE_FLAT_BODY = new AlgorithmId(env->getStaticObjectField(cls, "DUVENHAGE_FLAT_BODY", "Lorg/orekit/rugged/api/AlgorithmId;"));
            IGNORE_DEM_USE_ELLIPSOID = new AlgorithmId(env->getStaticObjectField(cls, "IGNORE_DEM_USE_ELLIPSOID", "Lorg/orekit/rugged/api/AlgorithmId;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AlgorithmId AlgorithmId::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return AlgorithmId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4dd032d6be1cc9d4], a0.this$));
        }

        JArray< AlgorithmId > AlgorithmId::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< AlgorithmId >(env->callStaticObjectMethod(cls, mids$[mid_values_739a706506ae4ced]));
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
      namespace api {
        static PyObject *t_AlgorithmId_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlgorithmId_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlgorithmId_of_(t_AlgorithmId *self, PyObject *args);
        static PyObject *t_AlgorithmId_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_AlgorithmId_values(PyTypeObject *type);
        static PyObject *t_AlgorithmId_get__parameters_(t_AlgorithmId *self, void *data);
        static PyGetSetDef t_AlgorithmId__fields_[] = {
          DECLARE_GET_FIELD(t_AlgorithmId, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AlgorithmId__methods_[] = {
          DECLARE_METHOD(t_AlgorithmId, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlgorithmId, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlgorithmId, of_, METH_VARARGS),
          DECLARE_METHOD(t_AlgorithmId, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_AlgorithmId, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AlgorithmId)[] = {
          { Py_tp_methods, t_AlgorithmId__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AlgorithmId__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AlgorithmId)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(AlgorithmId, t_AlgorithmId, AlgorithmId);
        PyObject *t_AlgorithmId::wrap_Object(const AlgorithmId& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlgorithmId::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlgorithmId *self = (t_AlgorithmId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AlgorithmId::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlgorithmId::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlgorithmId *self = (t_AlgorithmId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AlgorithmId::install(PyObject *module)
        {
          installType(&PY_TYPE(AlgorithmId), &PY_TYPE_DEF(AlgorithmId), module, "AlgorithmId", 0);
        }

        void t_AlgorithmId::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "class_", make_descriptor(AlgorithmId::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "wrapfn_", make_descriptor(t_AlgorithmId::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "boxfn_", make_descriptor(boxObject));
          env->getClass(AlgorithmId::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "BASIC_SLOW_EXHAUSTIVE_SCAN_FOR_TESTS_ONLY", make_descriptor(t_AlgorithmId::wrap_Object(*AlgorithmId::BASIC_SLOW_EXHAUSTIVE_SCAN_FOR_TESTS_ONLY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "CONSTANT_ELEVATION_OVER_ELLIPSOID", make_descriptor(t_AlgorithmId::wrap_Object(*AlgorithmId::CONSTANT_ELEVATION_OVER_ELLIPSOID)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "DUVENHAGE", make_descriptor(t_AlgorithmId::wrap_Object(*AlgorithmId::DUVENHAGE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "DUVENHAGE_FLAT_BODY", make_descriptor(t_AlgorithmId::wrap_Object(*AlgorithmId::DUVENHAGE_FLAT_BODY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "IGNORE_DEM_USE_ELLIPSOID", make_descriptor(t_AlgorithmId::wrap_Object(*AlgorithmId::IGNORE_DEM_USE_ELLIPSOID)));
        }

        static PyObject *t_AlgorithmId_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AlgorithmId::initializeClass, 1)))
            return NULL;
          return t_AlgorithmId::wrap_Object(AlgorithmId(((t_AlgorithmId *) arg)->object.this$));
        }
        static PyObject *t_AlgorithmId_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AlgorithmId::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AlgorithmId_of_(t_AlgorithmId *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AlgorithmId_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          AlgorithmId result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::api::AlgorithmId::valueOf(a0));
            return t_AlgorithmId::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_AlgorithmId_values(PyTypeObject *type)
        {
          JArray< AlgorithmId > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::api::AlgorithmId::values());
          return JArray<jobject>(result.this$).wrap(t_AlgorithmId::wrap_jobject);
        }
        static PyObject *t_AlgorithmId_get__parameters_(t_AlgorithmId *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D$NoSubSpaceException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *Sphere1D::class$ = NULL;
          jmethodID *Sphere1D::mids$ = NULL;
          bool Sphere1D::live$ = false;
          jdouble Sphere1D::SMALLEST_TOLERANCE = (jdouble) 0;

          jclass Sphere1D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/Sphere1D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_checkTolerance_10f281d777284cea] = env->getStaticMethodID(cls, "checkTolerance", "(D)V");
              mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getInstance_1c4d3de89e8bc553] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/geometry/spherical/oned/Sphere1D;");
              mids$[mid_getSubSpace_cf9410d213a7cbb9] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/Space;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              SMALLEST_TOLERANCE = env->getStaticDoubleField(cls, "SMALLEST_TOLERANCE");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void Sphere1D::checkTolerance(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_checkTolerance_10f281d777284cea], a0);
          }

          jint Sphere1D::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
          }

          Sphere1D Sphere1D::getInstance()
          {
            jclass cls = env->getClass(initializeClass);
            return Sphere1D(env->callStaticObjectMethod(cls, mids$[mid_getInstance_1c4d3de89e8bc553]));
          }

          ::org::hipparchus::geometry::Space Sphere1D::getSubSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSubSpace_cf9410d213a7cbb9]));
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
      namespace spherical {
        namespace oned {
          static PyObject *t_Sphere1D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere1D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere1D_checkTolerance(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere1D_getDimension(t_Sphere1D *self);
          static PyObject *t_Sphere1D_getInstance(PyTypeObject *type);
          static PyObject *t_Sphere1D_getSubSpace(t_Sphere1D *self);
          static PyObject *t_Sphere1D_get__dimension(t_Sphere1D *self, void *data);
          static PyObject *t_Sphere1D_get__instance(t_Sphere1D *self, void *data);
          static PyObject *t_Sphere1D_get__subSpace(t_Sphere1D *self, void *data);
          static PyGetSetDef t_Sphere1D__fields_[] = {
            DECLARE_GET_FIELD(t_Sphere1D, dimension),
            DECLARE_GET_FIELD(t_Sphere1D, instance),
            DECLARE_GET_FIELD(t_Sphere1D, subSpace),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Sphere1D__methods_[] = {
            DECLARE_METHOD(t_Sphere1D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere1D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere1D, checkTolerance, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere1D, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_Sphere1D, getInstance, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_Sphere1D, getSubSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Sphere1D)[] = {
            { Py_tp_methods, t_Sphere1D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Sphere1D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Sphere1D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Sphere1D, t_Sphere1D, Sphere1D);

          void t_Sphere1D::install(PyObject *module)
          {
            installType(&PY_TYPE(Sphere1D), &PY_TYPE_DEF(Sphere1D), module, "Sphere1D", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D), "NoSubSpaceException", make_descriptor(&PY_TYPE_DEF(Sphere1D$NoSubSpaceException)));
          }

          void t_Sphere1D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D), "class_", make_descriptor(Sphere1D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D), "wrapfn_", make_descriptor(t_Sphere1D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D), "boxfn_", make_descriptor(boxObject));
            env->getClass(Sphere1D::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D), "SMALLEST_TOLERANCE", make_descriptor(Sphere1D::SMALLEST_TOLERANCE));
          }

          static PyObject *t_Sphere1D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Sphere1D::initializeClass, 1)))
              return NULL;
            return t_Sphere1D::wrap_Object(Sphere1D(((t_Sphere1D *) arg)->object.this$));
          }
          static PyObject *t_Sphere1D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Sphere1D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Sphere1D_checkTolerance(PyTypeObject *type, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(::org::hipparchus::geometry::spherical::oned::Sphere1D::checkTolerance(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError(type, "checkTolerance", arg);
            return NULL;
          }

          static PyObject *t_Sphere1D_getDimension(t_Sphere1D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Sphere1D_getInstance(PyTypeObject *type)
          {
            Sphere1D result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::spherical::oned::Sphere1D::getInstance());
            return t_Sphere1D::wrap_Object(result);
          }

          static PyObject *t_Sphere1D_getSubSpace(t_Sphere1D *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSubSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_Sphere1D_get__dimension(t_Sphere1D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Sphere1D_get__instance(t_Sphere1D *self, void *data)
          {
            Sphere1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getInstance());
            return t_Sphere1D::wrap_Object(value);
          }

          static PyObject *t_Sphere1D_get__subSpace(t_Sphere1D *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSubSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/time/Month.h"
#include "java/util/TimeZone.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/Date.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/time/TimeScale.h"
#include "java/lang/Comparable.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldAbsoluteDate::class$ = NULL;
      jmethodID *FieldAbsoluteDate::mids$ = NULL;
      bool FieldAbsoluteDate::live$ = false;

      jclass FieldAbsoluteDate::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldAbsoluteDate");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_979ae7f57a96b096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_1bbee3d06f7c5065] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;D)V");
          mids$[mid_init$_85e0a06462b69ab3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_0d6abe845bacb67a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_init$_7734bfbaeec9a994] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_9921305f8dc21751] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/util/Date;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_c7293f211aab4636] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;DLorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_bb53594075123b8d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_43952f00b38d6ba4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_c7aa3857c260a82c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/time/DateTimeComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_8fd6f9f5473f97b8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_883c886652b7fa93] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;ILorg/orekit/time/Month;ILorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_5751b9b17174efe6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IIILorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_88cabff054342170] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;ILorg/orekit/time/Month;IIIDLorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_2fed7ff381bacd7d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IIIIIDLorg/orekit/time/TimeScale;)V");
          mids$[mid_compareTo_2c4b5d48930cdcbe] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/time/FieldAbsoluteDate;)I");
          mids$[mid_createBesselianEpoch_61a24ec56865ba5a] = env->getStaticMethodID(cls, "createBesselianEpoch", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createBesselianEpoch_3a631661f16b3f92] = env->getStaticMethodID(cls, "createBesselianEpoch", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createGPSDate_eb2b24337ef48f88] = env->getStaticMethodID(cls, "createGPSDate", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createGPSDate_0ae93e4f290d2ec8] = env->getStaticMethodID(cls, "createGPSDate", "(ILorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createJDDate_0ae93e4f290d2ec8] = env->getStaticMethodID(cls, "createJDDate", "(ILorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createJulianEpoch_61a24ec56865ba5a] = env->getStaticMethodID(cls, "createJulianEpoch", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createJulianEpoch_3a631661f16b3f92] = env->getStaticMethodID(cls, "createJulianEpoch", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createMJDDate_0ae93e4f290d2ec8] = env->getStaticMethodID(cls, "createMJDDate", "(ILorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_durationFrom_f26f2b257a5d6bd8] = env->getMethodID(cls, "durationFrom", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_durationFrom_b884068a2c99f6ca] = env->getMethodID(cls, "durationFrom", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getArbitraryEpoch_470a0a4ae1d6b01f] = env->getStaticMethodID(cls, "getArbitraryEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getCCSDSEpoch_470a0a4ae1d6b01f] = env->getStaticMethodID(cls, "getCCSDSEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getComponents_3d17ce9b4bd527d4] = env->getMethodID(cls, "getComponents", "(Ljava/util/TimeZone;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_30c7c22d393efa2f] = env->getMethodID(cls, "getComponents", "(I)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_bec5aa633870750e] = env->getMethodID(cls, "getComponents", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_6a219c20dbc2c5fa] = env->getMethodID(cls, "getComponents", "(Ljava/util/TimeZone;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_86fc1a29a4250881] = env->getMethodID(cls, "getComponents", "(ILorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getDate_f1fe4daf77c66560] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getField_20f98801541dcec1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getFiftiesEpoch_470a0a4ae1d6b01f] = env->getStaticMethodID(cls, "getFiftiesEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getFutureInfinity_470a0a4ae1d6b01f] = env->getStaticMethodID(cls, "getFutureInfinity", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getGPSEpoch_470a0a4ae1d6b01f] = env->getStaticMethodID(cls, "getGPSEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getGalileoEpoch_470a0a4ae1d6b01f] = env->getStaticMethodID(cls, "getGalileoEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getJ2000Epoch_470a0a4ae1d6b01f] = env->getStaticMethodID(cls, "getJ2000Epoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getJavaEpoch_470a0a4ae1d6b01f] = env->getStaticMethodID(cls, "getJavaEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getJulianEpoch_470a0a4ae1d6b01f] = env->getStaticMethodID(cls, "getJulianEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getModifiedJulianEpoch_470a0a4ae1d6b01f] = env->getStaticMethodID(cls, "getModifiedJulianEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getPastInfinity_470a0a4ae1d6b01f] = env->getStaticMethodID(cls, "getPastInfinity", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_hasZeroField_89b302893bdbe1f1] = env->getMethodID(cls, "hasZeroField", "()Z");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isAfter_c65f562a83da9015] = env->getMethodID(cls, "isAfter", "(Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isAfterOrEqualTo_c65f562a83da9015] = env->getMethodID(cls, "isAfterOrEqualTo", "(Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isBefore_c65f562a83da9015] = env->getMethodID(cls, "isBefore", "(Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isBeforeOrEqualTo_c65f562a83da9015] = env->getMethodID(cls, "isBeforeOrEqualTo", "(Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isBetween_07d37590e1896ded] = env->getMethodID(cls, "isBetween", "(Lorg/orekit/time/FieldTimeStamped;Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isBetweenOrEqualTo_07d37590e1896ded] = env->getMethodID(cls, "isBetweenOrEqualTo", "(Lorg/orekit/time/FieldTimeStamped;Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isCloseTo_a25a12b2bf17776e] = env->getMethodID(cls, "isCloseTo", "(Lorg/orekit/time/FieldTimeStamped;D)Z");
          mids$[mid_isEqualTo_c65f562a83da9015] = env->getMethodID(cls, "isEqualTo", "(Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_offsetFrom_1c4dc6e8c897d793] = env->getMethodID(cls, "offsetFrom", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/TimeScale;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_parseCCSDSCalendarSegmentedTimeCode_a0fe40f35e722820] = env->getMethodID(cls, "parseCCSDSCalendarSegmentedTimeCode", "(B[B)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_parseCCSDSCalendarSegmentedTimeCode_487fcc2baf7a29dc] = env->getMethodID(cls, "parseCCSDSCalendarSegmentedTimeCode", "(B[BLorg/orekit/time/TimeScale;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_parseCCSDSDaySegmentedTimeCode_f9ef0697e753cc12] = env->getStaticMethodID(cls, "parseCCSDSDaySegmentedTimeCode", "(Lorg/hipparchus/Field;B[BLorg/orekit/time/DateComponents;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_parseCCSDSDaySegmentedTimeCode_ced6e15e6c897faf] = env->getStaticMethodID(cls, "parseCCSDSDaySegmentedTimeCode", "(Lorg/hipparchus/Field;B[BLorg/orekit/time/DateComponents;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_parseCCSDSUnsegmentedTimeCode_cd870d76f00cab8d] = env->getStaticMethodID(cls, "parseCCSDSUnsegmentedTimeCode", "(Lorg/hipparchus/Field;BB[BLorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_parseCCSDSUnsegmentedTimeCode_5574f2d8dd0b16cd] = env->getStaticMethodID(cls, "parseCCSDSUnsegmentedTimeCode", "(Lorg/hipparchus/Field;BB[BLorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_shiftedBy_187c2c1a72864876] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_shiftedBy_61a24ec56865ba5a] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_timeScalesOffset_b8cb903322b7b4ce] = env->getMethodID(cls, "timeScalesOffset", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScale;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toAbsoluteDate_7a97f7e149e79afb] = env->getMethodID(cls, "toAbsoluteDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_toDate_56cd5dd9fbecaa68] = env->getMethodID(cls, "toDate", "(Lorg/orekit/time/TimeScale;)Ljava/util/Date;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toString_90a03355aeb11bcb] = env->getMethodID(cls, "toString", "(Ljava/util/TimeZone;)Ljava/lang/String;");
          mids$[mid_toString_0f10d4a5e06f61c0] = env->getMethodID(cls, "toString", "(I)Ljava/lang/String;");
          mids$[mid_toString_8873a127a4f312ad] = env->getMethodID(cls, "toString", "(Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toString_d12db31f920e6896] = env->getMethodID(cls, "toString", "(Ljava/util/TimeZone;Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toString_7061b71d91a23f82] = env->getMethodID(cls, "toString", "(ILorg/orekit/time/TimeScale;)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_979ae7f57a96b096, a0.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const FieldAbsoluteDate & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1bbee3d06f7c5065, a0.this$, a1)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_85e0a06462b69ab3, a0.this$, a1.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::org::orekit::time::AbsoluteDate & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0d6abe845bacb67a, a0.this$, a1.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7734bfbaeec9a994, a0.this$, a1.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::java::util::Date & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9921305f8dc21751, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const FieldAbsoluteDate & a0, jdouble a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c7293f211aab4636, a0.this$, a1, a2.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb53594075123b8d, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::org::orekit::time::DateComponents & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_43952f00b38d6ba4, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::org::orekit::time::DateTimeComponents & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c7aa3857c260a82c, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::org::orekit::time::DateComponents & a1, const ::org::orekit::time::TimeComponents & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd6f9f5473f97b8, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, jint a1, const ::org::orekit::time::Month & a2, jint a3, const ::org::orekit::time::TimeScale & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_883c886652b7fa93, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, jint a1, jint a2, jint a3, const ::org::orekit::time::TimeScale & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5751b9b17174efe6, a0.this$, a1, a2, a3, a4.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, jint a1, const ::org::orekit::time::Month & a2, jint a3, jint a4, jint a5, jdouble a6, const ::org::orekit::time::TimeScale & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_88cabff054342170, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, jint a1, jint a2, jint a3, jint a4, jint a5, jdouble a6, const ::org::orekit::time::TimeScale & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2fed7ff381bacd7d, a0.this$, a1, a2, a3, a4, a5, a6, a7.this$)) {}

      jint FieldAbsoluteDate::compareTo(const FieldAbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_2c4b5d48930cdcbe], a0.this$);
      }

      FieldAbsoluteDate FieldAbsoluteDate::createBesselianEpoch(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createBesselianEpoch_61a24ec56865ba5a], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createBesselianEpoch(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::time::TimeScales & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createBesselianEpoch_3a631661f16b3f92], a0.this$, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createGPSDate(jint a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createGPSDate_eb2b24337ef48f88], a0, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createGPSDate(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createGPSDate_0ae93e4f290d2ec8], a0, a1.this$, a2.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createJDDate(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createJDDate_0ae93e4f290d2ec8], a0, a1.this$, a2.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createJulianEpoch(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createJulianEpoch_61a24ec56865ba5a], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createJulianEpoch(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::time::TimeScales & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createJulianEpoch_3a631661f16b3f92], a0.this$, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createMJDDate(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createMJDDate_0ae93e4f290d2ec8], a0, a1.this$, a2.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldAbsoluteDate::durationFrom(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_durationFrom_f26f2b257a5d6bd8], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldAbsoluteDate::durationFrom(const FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_durationFrom_b884068a2c99f6ca], a0.this$));
      }

      jboolean FieldAbsoluteDate::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      FieldAbsoluteDate FieldAbsoluteDate::getArbitraryEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getArbitraryEpoch_470a0a4ae1d6b01f], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getCCSDSEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getCCSDSEpoch_470a0a4ae1d6b01f], a0.this$));
      }

      ::org::orekit::time::DateTimeComponents FieldAbsoluteDate::getComponents(const ::java::util::TimeZone & a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_3d17ce9b4bd527d4], a0.this$));
      }

      ::org::orekit::time::DateTimeComponents FieldAbsoluteDate::getComponents(jint a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_30c7c22d393efa2f], a0));
      }

      ::org::orekit::time::DateTimeComponents FieldAbsoluteDate::getComponents(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_bec5aa633870750e], a0.this$));
      }

      ::org::orekit::time::DateTimeComponents FieldAbsoluteDate::getComponents(const ::java::util::TimeZone & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_6a219c20dbc2c5fa], a0.this$, a1.this$));
      }

      ::org::orekit::time::DateTimeComponents FieldAbsoluteDate::getComponents(jint a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_86fc1a29a4250881], a0, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getDate() const
      {
        return FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_f1fe4daf77c66560]));
      }

      ::org::hipparchus::Field FieldAbsoluteDate::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_20f98801541dcec1]));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getFiftiesEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getFiftiesEpoch_470a0a4ae1d6b01f], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getFutureInfinity(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getFutureInfinity_470a0a4ae1d6b01f], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getGPSEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getGPSEpoch_470a0a4ae1d6b01f], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getGalileoEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getGalileoEpoch_470a0a4ae1d6b01f], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getJ2000Epoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getJ2000Epoch_470a0a4ae1d6b01f], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getJavaEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getJavaEpoch_470a0a4ae1d6b01f], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getJulianEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getJulianEpoch_470a0a4ae1d6b01f], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getModifiedJulianEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getModifiedJulianEpoch_470a0a4ae1d6b01f], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getPastInfinity(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getPastInfinity_470a0a4ae1d6b01f], a0.this$));
      }

      jboolean FieldAbsoluteDate::hasZeroField() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasZeroField_89b302893bdbe1f1]);
      }

      jint FieldAbsoluteDate::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      jboolean FieldAbsoluteDate::isAfter(const ::org::orekit::time::FieldTimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAfter_c65f562a83da9015], a0.this$);
      }

      jboolean FieldAbsoluteDate::isAfterOrEqualTo(const ::org::orekit::time::FieldTimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAfterOrEqualTo_c65f562a83da9015], a0.this$);
      }

      jboolean FieldAbsoluteDate::isBefore(const ::org::orekit::time::FieldTimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBefore_c65f562a83da9015], a0.this$);
      }

      jboolean FieldAbsoluteDate::isBeforeOrEqualTo(const ::org::orekit::time::FieldTimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBeforeOrEqualTo_c65f562a83da9015], a0.this$);
      }

      jboolean FieldAbsoluteDate::isBetween(const ::org::orekit::time::FieldTimeStamped & a0, const ::org::orekit::time::FieldTimeStamped & a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBetween_07d37590e1896ded], a0.this$, a1.this$);
      }

      jboolean FieldAbsoluteDate::isBetweenOrEqualTo(const ::org::orekit::time::FieldTimeStamped & a0, const ::org::orekit::time::FieldTimeStamped & a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBetweenOrEqualTo_07d37590e1896ded], a0.this$, a1.this$);
      }

      jboolean FieldAbsoluteDate::isCloseTo(const ::org::orekit::time::FieldTimeStamped & a0, jdouble a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isCloseTo_a25a12b2bf17776e], a0.this$, a1);
      }

      jboolean FieldAbsoluteDate::isEqualTo(const ::org::orekit::time::FieldTimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isEqualTo_c65f562a83da9015], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldAbsoluteDate::offsetFrom(const FieldAbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFrom_1c4dc6e8c897d793], a0.this$, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1) const
      {
        return FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_parseCCSDSCalendarSegmentedTimeCode_a0fe40f35e722820], a0, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1, const ::org::orekit::time::TimeScale & a2) const
      {
        return FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_parseCCSDSCalendarSegmentedTimeCode_487fcc2baf7a29dc], a0, a1.this$, a2.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSDaySegmentedTimeCode(const ::org::hipparchus::Field & a0, jbyte a1, const JArray< jbyte > & a2, const ::org::orekit::time::DateComponents & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSDaySegmentedTimeCode_f9ef0697e753cc12], a0.this$, a1, a2.this$, a3.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSDaySegmentedTimeCode(const ::org::hipparchus::Field & a0, jbyte a1, const JArray< jbyte > & a2, const ::org::orekit::time::DateComponents & a3, const ::org::orekit::time::TimeScale & a4)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSDaySegmentedTimeCode_ced6e15e6c897faf], a0.this$, a1, a2.this$, a3.this$, a4.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSUnsegmentedTimeCode(const ::org::hipparchus::Field & a0, jbyte a1, jbyte a2, const JArray< jbyte > & a3, const FieldAbsoluteDate & a4)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSUnsegmentedTimeCode_cd870d76f00cab8d], a0.this$, a1, a2, a3.this$, a4.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSUnsegmentedTimeCode(const ::org::hipparchus::Field & a0, jbyte a1, jbyte a2, const JArray< jbyte > & a3, const FieldAbsoluteDate & a4, const FieldAbsoluteDate & a5)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSUnsegmentedTimeCode_5574f2d8dd0b16cd], a0.this$, a1, a2, a3.this$, a4.this$, a5.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::shiftedBy(jdouble a0) const
      {
        return FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_shiftedBy_187c2c1a72864876], a0));
      }

      FieldAbsoluteDate FieldAbsoluteDate::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_shiftedBy_61a24ec56865ba5a], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldAbsoluteDate::timeScalesOffset(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_timeScalesOffset_b8cb903322b7b4ce], a0.this$, a1.this$));
      }

      ::org::orekit::time::AbsoluteDate FieldAbsoluteDate::toAbsoluteDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_toAbsoluteDate_7a97f7e149e79afb]));
      }

      ::java::util::Date FieldAbsoluteDate::toDate(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::util::Date(env->callObjectMethod(this$, mids$[mid_toDate_56cd5dd9fbecaa68], a0.this$));
      }

      ::java::lang::String FieldAbsoluteDate::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }

      ::java::lang::String FieldAbsoluteDate::toString(const ::java::util::TimeZone & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_90a03355aeb11bcb], a0.this$));
      }

      ::java::lang::String FieldAbsoluteDate::toString(jint a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0f10d4a5e06f61c0], a0));
      }

      ::java::lang::String FieldAbsoluteDate::toString(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_8873a127a4f312ad], a0.this$));
      }

      ::java::lang::String FieldAbsoluteDate::toString(const ::java::util::TimeZone & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d12db31f920e6896], a0.this$, a1.this$));
      }

      ::java::lang::String FieldAbsoluteDate::toString(jint a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_7061b71d91a23f82], a0, a1.this$));
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
      static PyObject *t_FieldAbsoluteDate_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_of_(t_FieldAbsoluteDate *self, PyObject *args);
      static int t_FieldAbsoluteDate_init_(t_FieldAbsoluteDate *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAbsoluteDate_compareTo(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_createBesselianEpoch(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_createGPSDate(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_createJDDate(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_createJulianEpoch(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_createMJDDate(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_durationFrom(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_equals(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_getArbitraryEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getCCSDSEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getComponents(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_getDate(t_FieldAbsoluteDate *self);
      static PyObject *t_FieldAbsoluteDate_getField(t_FieldAbsoluteDate *self);
      static PyObject *t_FieldAbsoluteDate_getFiftiesEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getFutureInfinity(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getGPSEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getGalileoEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getJ2000Epoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getJavaEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getJulianEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getModifiedJulianEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getPastInfinity(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_hasZeroField(t_FieldAbsoluteDate *self);
      static PyObject *t_FieldAbsoluteDate_hashCode(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_isAfter(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_isAfterOrEqualTo(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_isBefore(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_isBeforeOrEqualTo(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_isBetween(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_isBetweenOrEqualTo(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_isCloseTo(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_isEqualTo(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_offsetFrom(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_parseCCSDSCalendarSegmentedTimeCode(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_parseCCSDSDaySegmentedTimeCode(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_parseCCSDSUnsegmentedTimeCode(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_shiftedBy(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_timeScalesOffset(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_toAbsoluteDate(t_FieldAbsoluteDate *self);
      static PyObject *t_FieldAbsoluteDate_toDate(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_toString(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_get__date(t_FieldAbsoluteDate *self, void *data);
      static PyObject *t_FieldAbsoluteDate_get__field(t_FieldAbsoluteDate *self, void *data);
      static PyObject *t_FieldAbsoluteDate_get__parameters_(t_FieldAbsoluteDate *self, void *data);
      static PyGetSetDef t_FieldAbsoluteDate__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAbsoluteDate, date),
        DECLARE_GET_FIELD(t_FieldAbsoluteDate, field),
        DECLARE_GET_FIELD(t_FieldAbsoluteDate, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAbsoluteDate__methods_[] = {
        DECLARE_METHOD(t_FieldAbsoluteDate, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, compareTo, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, createBesselianEpoch, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, createGPSDate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, createJDDate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, createJulianEpoch, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, createMJDDate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, durationFrom, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, equals, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getArbitraryEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getCCSDSEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getComponents, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getFiftiesEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getFutureInfinity, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getGPSEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getGalileoEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getJ2000Epoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getJavaEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getJulianEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getModifiedJulianEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getPastInfinity, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, hasZeroField, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, isAfter, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, isAfterOrEqualTo, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, isBefore, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, isBeforeOrEqualTo, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, isBetween, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, isBetweenOrEqualTo, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, isCloseTo, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, isEqualTo, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, offsetFrom, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, parseCCSDSCalendarSegmentedTimeCode, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, parseCCSDSDaySegmentedTimeCode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, parseCCSDSUnsegmentedTimeCode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, timeScalesOffset, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, toAbsoluteDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, toDate, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAbsoluteDate)[] = {
        { Py_tp_methods, t_FieldAbsoluteDate__methods_ },
        { Py_tp_init, (void *) t_FieldAbsoluteDate_init_ },
        { Py_tp_getset, t_FieldAbsoluteDate__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAbsoluteDate)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldAbsoluteDate, t_FieldAbsoluteDate, FieldAbsoluteDate);
      PyObject *t_FieldAbsoluteDate::wrap_Object(const FieldAbsoluteDate& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsoluteDate::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsoluteDate *self = (t_FieldAbsoluteDate *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAbsoluteDate::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsoluteDate::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsoluteDate *self = (t_FieldAbsoluteDate *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAbsoluteDate::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAbsoluteDate), &PY_TYPE_DEF(FieldAbsoluteDate), module, "FieldAbsoluteDate", 0);
      }

      void t_FieldAbsoluteDate::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsoluteDate), "class_", make_descriptor(FieldAbsoluteDate::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsoluteDate), "wrapfn_", make_descriptor(t_FieldAbsoluteDate::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsoluteDate), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAbsoluteDate_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAbsoluteDate::initializeClass, 1)))
          return NULL;
        return t_FieldAbsoluteDate::wrap_Object(FieldAbsoluteDate(((t_FieldAbsoluteDate *) arg)->object.this$));
      }
      static PyObject *t_FieldAbsoluteDate_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAbsoluteDate::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAbsoluteDate_of_(t_FieldAbsoluteDate *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAbsoluteDate_init_(t_FieldAbsoluteDate *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldAbsoluteDate(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KD", FieldAbsoluteDate::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_, &a1))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KK", FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::Date a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::Field::initializeClass, ::java::util::Date::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KDk", FieldAbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_, &a1, &a2))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Ksk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DateComponents a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DateTimeComponents a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::DateTimeComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DateComponents a1((jobject) NULL);
            ::org::orekit::time::TimeComponents a2((jobject) NULL);
            ::org::orekit::time::TimeScale a3((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Kkkk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::time::Month a2((jobject) NULL);
            PyTypeObject **p2;
            jint a3;
            ::org::orekit::time::TimeScale a4((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KIKIk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::Month::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_Month::parameters_, &a3, &a4))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            ::org::orekit::time::TimeScale a4((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KIIIk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 8:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::time::Month a2((jobject) NULL);
            PyTypeObject **p2;
            jint a3;
            jint a4;
            jint a5;
            jdouble a6;
            ::org::orekit::time::TimeScale a7((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KIKIIIDk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::Month::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_Month::parameters_, &a3, &a4, &a5, &a6, &a7))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2, a3, a4, a5, a6, a7));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jint a5;
            jdouble a6;
            ::org::orekit::time::TimeScale a7((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KIIIIIDk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2, a3, a4, a5, a6, a7));
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

      static PyObject *t_FieldAbsoluteDate_compareTo(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        jint result;

        if (!parseArg(arg, "K", FieldAbsoluteDate::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_createBesselianEpoch(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createBesselianEpoch(a0));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createBesselianEpoch(a0, a1));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createBesselianEpoch", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_createGPSDate(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createGPSDate(a0, a1));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            jint a0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "IKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createGPSDate(a0, a1, a2));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createGPSDate", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_createJDDate(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArgs(args, "IKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createJDDate(a0, a1, a2));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createJDDate", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_createJulianEpoch(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createJulianEpoch(a0));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createJulianEpoch(a0, a1));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createJulianEpoch", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_createMJDDate(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArgs(args, "IKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createMJDDate(a0, a1, a2));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createMJDDate", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_durationFrom(t_FieldAbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.durationFrom(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", FieldAbsoluteDate::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.durationFrom(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "durationFrom", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_equals(t_FieldAbsoluteDate *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldAbsoluteDate), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_FieldAbsoluteDate_getArbitraryEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getArbitraryEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getArbitraryEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getCCSDSEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getCCSDSEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getCCSDSEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getComponents(t_FieldAbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::TimeZone::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::util::TimeZone::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getComponents(a0, a1));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getComponents(a0, a1));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getComponents", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getDate(t_FieldAbsoluteDate *self)
      {
        FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAbsoluteDate_getField(t_FieldAbsoluteDate *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAbsoluteDate_getFiftiesEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getFiftiesEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getFiftiesEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getFutureInfinity(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getFutureInfinity(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getFutureInfinity", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getGPSEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getGPSEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getGPSEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getGalileoEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getGalileoEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getGalileoEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getJ2000Epoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getJ2000Epoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getJ2000Epoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getJavaEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getJavaEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getJavaEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getJulianEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getJulianEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getJulianEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getModifiedJulianEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getModifiedJulianEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getModifiedJulianEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getPastInfinity(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getPastInfinity(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getPastInfinity", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_hasZeroField(t_FieldAbsoluteDate *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasZeroField());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldAbsoluteDate_hashCode(t_FieldAbsoluteDate *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FieldAbsoluteDate), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_FieldAbsoluteDate_isAfter(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isAfter(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAfter", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isAfterOrEqualTo(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isAfterOrEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAfterOrEqualTo", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isBefore(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isBefore(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBefore", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isBeforeOrEqualTo(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isBeforeOrEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBeforeOrEqualTo", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isBetween(t_FieldAbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::FieldTimeStamped a1((jobject) NULL);
        PyTypeObject **p1;
        jboolean result;

        if (!parseArgs(args, "KK", ::org::orekit::time::FieldTimeStamped::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isBetween(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBetween", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isBetweenOrEqualTo(t_FieldAbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::FieldTimeStamped a1((jobject) NULL);
        PyTypeObject **p1;
        jboolean result;

        if (!parseArgs(args, "KK", ::org::orekit::time::FieldTimeStamped::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isBetweenOrEqualTo(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBetweenOrEqualTo", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isCloseTo(t_FieldAbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        jboolean result;

        if (!parseArgs(args, "KD", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.isCloseTo(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isCloseTo", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isEqualTo(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isEqualTo", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_offsetFrom(t_FieldAbsoluteDate *self, PyObject *args)
      {
        FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "Kk", FieldAbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.offsetFrom(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFrom", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_parseCCSDSCalendarSegmentedTimeCode(t_FieldAbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[B", &a0, &a1))
            {
              OBJ_CALL(result = self->object.parseCCSDSCalendarSegmentedTimeCode(a0, a1));
              return t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 3:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[Bk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.parseCCSDSCalendarSegmentedTimeCode(a0, a1, a2));
              return t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "parseCCSDSCalendarSegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_parseCCSDSDaySegmentedTimeCode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jbyte a1;
            JArray< jbyte > a2((jobject) NULL);
            ::org::orekit::time::DateComponents a3((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "KB[Bk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::DateComponents::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::parseCCSDSDaySegmentedTimeCode(a0, a1, a2, a3));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jbyte a1;
            JArray< jbyte > a2((jobject) NULL);
            ::org::orekit::time::DateComponents a3((jobject) NULL);
            ::org::orekit::time::TimeScale a4((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "KB[Bkk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::parseCCSDSDaySegmentedTimeCode(a0, a1, a2, a3, a4));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "parseCCSDSDaySegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_parseCCSDSUnsegmentedTimeCode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 5:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jbyte a1;
            jbyte a2;
            JArray< jbyte > a3((jobject) NULL);
            FieldAbsoluteDate a4((jobject) NULL);
            PyTypeObject **p4;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "KBB[BK", ::org::hipparchus::Field::initializeClass, FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &p4, t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::parseCCSDSUnsegmentedTimeCode(a0, a1, a2, a3, a4));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jbyte a1;
            jbyte a2;
            JArray< jbyte > a3((jobject) NULL);
            FieldAbsoluteDate a4((jobject) NULL);
            PyTypeObject **p4;
            FieldAbsoluteDate a5((jobject) NULL);
            PyTypeObject **p5;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "KBB[BKK", ::org::hipparchus::Field::initializeClass, FieldAbsoluteDate::initializeClass, FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &p4, t_FieldAbsoluteDate::parameters_, &a5, &p5, t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::parseCCSDSUnsegmentedTimeCode(a0, a1, a2, a3, a4, a5));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "parseCCSDSUnsegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_shiftedBy(t_FieldAbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_timeScalesOffset(t_FieldAbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.timeScalesOffset(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "timeScalesOffset", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_toAbsoluteDate(t_FieldAbsoluteDate *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.toAbsoluteDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_FieldAbsoluteDate_toDate(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        ::java::util::Date result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toDate(a0));
          return ::java::util::t_Date::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toDate", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_toString(t_FieldAbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::TimeZone::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          {
            jint a0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          break;
         case 2:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::util::TimeZone::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.toString(a0, a1));
              return j2p(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.toString(a0, a1));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(FieldAbsoluteDate), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_FieldAbsoluteDate_get__parameters_(t_FieldAbsoluteDate *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAbsoluteDate_get__date(t_FieldAbsoluteDate *self, void *data)
      {
        FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldAbsoluteDate_get__field(t_FieldAbsoluteDate *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/RtcmDataField.h"
#include "org/orekit/gnss/metric/parser/DataField.h"
#include "org/orekit/gnss/metric/parser/RtcmDataField.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *RtcmDataField::class$ = NULL;
          jmethodID *RtcmDataField::mids$ = NULL;
          bool RtcmDataField::live$ = false;
          RtcmDataField *RtcmDataField::DF002 = NULL;
          RtcmDataField *RtcmDataField::DF009 = NULL;
          RtcmDataField *RtcmDataField::DF038 = NULL;
          RtcmDataField *RtcmDataField::DF040 = NULL;
          RtcmDataField *RtcmDataField::DF068 = NULL;
          RtcmDataField *RtcmDataField::DF071 = NULL;
          RtcmDataField *RtcmDataField::DF076 = NULL;
          RtcmDataField *RtcmDataField::DF077 = NULL;
          RtcmDataField *RtcmDataField::DF078 = NULL;
          RtcmDataField *RtcmDataField::DF079 = NULL;
          RtcmDataField *RtcmDataField::DF081 = NULL;
          RtcmDataField *RtcmDataField::DF082 = NULL;
          RtcmDataField *RtcmDataField::DF083 = NULL;
          RtcmDataField *RtcmDataField::DF084 = NULL;
          RtcmDataField *RtcmDataField::DF085 = NULL;
          RtcmDataField *RtcmDataField::DF086 = NULL;
          RtcmDataField *RtcmDataField::DF087 = NULL;
          RtcmDataField *RtcmDataField::DF088 = NULL;
          RtcmDataField *RtcmDataField::DF089 = NULL;
          RtcmDataField *RtcmDataField::DF090 = NULL;
          RtcmDataField *RtcmDataField::DF091 = NULL;
          RtcmDataField *RtcmDataField::DF092 = NULL;
          RtcmDataField *RtcmDataField::DF093 = NULL;
          RtcmDataField *RtcmDataField::DF094 = NULL;
          RtcmDataField *RtcmDataField::DF095 = NULL;
          RtcmDataField *RtcmDataField::DF096 = NULL;
          RtcmDataField *RtcmDataField::DF097 = NULL;
          RtcmDataField *RtcmDataField::DF098 = NULL;
          RtcmDataField *RtcmDataField::DF099 = NULL;
          RtcmDataField *RtcmDataField::DF100 = NULL;
          RtcmDataField *RtcmDataField::DF101 = NULL;
          RtcmDataField *RtcmDataField::DF102 = NULL;
          RtcmDataField *RtcmDataField::DF103 = NULL;
          RtcmDataField *RtcmDataField::DF104 = NULL;
          RtcmDataField *RtcmDataField::DF105 = NULL;
          RtcmDataField *RtcmDataField::DF106 = NULL;
          RtcmDataField *RtcmDataField::DF107 = NULL;
          RtcmDataField *RtcmDataField::DF108 = NULL;
          RtcmDataField *RtcmDataField::DF109 = NULL;
          RtcmDataField *RtcmDataField::DF110 = NULL;
          RtcmDataField *RtcmDataField::DF111 = NULL;
          RtcmDataField *RtcmDataField::DF112 = NULL;
          RtcmDataField *RtcmDataField::DF113 = NULL;
          RtcmDataField *RtcmDataField::DF114 = NULL;
          RtcmDataField *RtcmDataField::DF115 = NULL;
          RtcmDataField *RtcmDataField::DF116 = NULL;
          RtcmDataField *RtcmDataField::DF117 = NULL;
          RtcmDataField *RtcmDataField::DF118 = NULL;
          RtcmDataField *RtcmDataField::DF119 = NULL;
          RtcmDataField *RtcmDataField::DF120 = NULL;
          RtcmDataField *RtcmDataField::DF121 = NULL;
          RtcmDataField *RtcmDataField::DF122 = NULL;
          RtcmDataField *RtcmDataField::DF123 = NULL;
          RtcmDataField *RtcmDataField::DF124 = NULL;
          RtcmDataField *RtcmDataField::DF125 = NULL;
          RtcmDataField *RtcmDataField::DF126 = NULL;
          RtcmDataField *RtcmDataField::DF127 = NULL;
          RtcmDataField *RtcmDataField::DF128 = NULL;
          RtcmDataField *RtcmDataField::DF129 = NULL;
          RtcmDataField *RtcmDataField::DF130 = NULL;
          RtcmDataField *RtcmDataField::DF131 = NULL;
          RtcmDataField *RtcmDataField::DF132 = NULL;
          RtcmDataField *RtcmDataField::DF133 = NULL;
          RtcmDataField *RtcmDataField::DF134 = NULL;
          RtcmDataField *RtcmDataField::DF135 = NULL;
          RtcmDataField *RtcmDataField::DF136 = NULL;
          RtcmDataField *RtcmDataField::DF137 = NULL;
          RtcmDataField *RtcmDataField::DF252 = NULL;
          RtcmDataField *RtcmDataField::DF289 = NULL;
          RtcmDataField *RtcmDataField::DF290 = NULL;
          RtcmDataField *RtcmDataField::DF291 = NULL;
          RtcmDataField *RtcmDataField::DF292 = NULL;
          RtcmDataField *RtcmDataField::DF293 = NULL;
          RtcmDataField *RtcmDataField::DF294 = NULL;
          RtcmDataField *RtcmDataField::DF295 = NULL;
          RtcmDataField *RtcmDataField::DF296 = NULL;
          RtcmDataField *RtcmDataField::DF297 = NULL;
          RtcmDataField *RtcmDataField::DF298 = NULL;
          RtcmDataField *RtcmDataField::DF299 = NULL;
          RtcmDataField *RtcmDataField::DF300 = NULL;
          RtcmDataField *RtcmDataField::DF301 = NULL;
          RtcmDataField *RtcmDataField::DF302 = NULL;
          RtcmDataField *RtcmDataField::DF303 = NULL;
          RtcmDataField *RtcmDataField::DF304 = NULL;
          RtcmDataField *RtcmDataField::DF305 = NULL;
          RtcmDataField *RtcmDataField::DF306 = NULL;
          RtcmDataField *RtcmDataField::DF307 = NULL;
          RtcmDataField *RtcmDataField::DF308 = NULL;
          RtcmDataField *RtcmDataField::DF309 = NULL;
          RtcmDataField *RtcmDataField::DF310 = NULL;
          RtcmDataField *RtcmDataField::DF311 = NULL;
          RtcmDataField *RtcmDataField::DF312 = NULL;
          RtcmDataField *RtcmDataField::DF313 = NULL;
          RtcmDataField *RtcmDataField::DF314 = NULL;
          RtcmDataField *RtcmDataField::DF315 = NULL;
          RtcmDataField *RtcmDataField::DF316 = NULL;
          RtcmDataField *RtcmDataField::DF317 = NULL;
          RtcmDataField *RtcmDataField::DF365 = NULL;
          RtcmDataField *RtcmDataField::DF366 = NULL;
          RtcmDataField *RtcmDataField::DF367 = NULL;
          RtcmDataField *RtcmDataField::DF368 = NULL;
          RtcmDataField *RtcmDataField::DF369 = NULL;
          RtcmDataField *RtcmDataField::DF370 = NULL;
          RtcmDataField *RtcmDataField::DF375 = NULL;
          RtcmDataField *RtcmDataField::DF376 = NULL;
          RtcmDataField *RtcmDataField::DF377 = NULL;
          RtcmDataField *RtcmDataField::DF378 = NULL;
          RtcmDataField *RtcmDataField::DF384 = NULL;
          RtcmDataField *RtcmDataField::DF385 = NULL;
          RtcmDataField *RtcmDataField::DF386 = NULL;
          RtcmDataField *RtcmDataField::DF387 = NULL;
          RtcmDataField *RtcmDataField::DF388 = NULL;
          RtcmDataField *RtcmDataField::DF391 = NULL;
          RtcmDataField *RtcmDataField::DF392 = NULL;
          RtcmDataField *RtcmDataField::DF413 = NULL;
          RtcmDataField *RtcmDataField::DF414 = NULL;
          RtcmDataField *RtcmDataField::DF415 = NULL;
          RtcmDataField *RtcmDataField::DF429 = NULL;
          RtcmDataField *RtcmDataField::DF430 = NULL;
          RtcmDataField *RtcmDataField::DF431 = NULL;
          RtcmDataField *RtcmDataField::DF432 = NULL;
          RtcmDataField *RtcmDataField::DF433 = NULL;
          RtcmDataField *RtcmDataField::DF434 = NULL;
          RtcmDataField *RtcmDataField::DF435 = NULL;
          RtcmDataField *RtcmDataField::DF436 = NULL;
          RtcmDataField *RtcmDataField::DF437 = NULL;
          RtcmDataField *RtcmDataField::DF438 = NULL;
          RtcmDataField *RtcmDataField::DF439 = NULL;
          RtcmDataField *RtcmDataField::DF440 = NULL;
          RtcmDataField *RtcmDataField::DF441 = NULL;
          RtcmDataField *RtcmDataField::DF442 = NULL;
          RtcmDataField *RtcmDataField::DF443 = NULL;
          RtcmDataField *RtcmDataField::DF444 = NULL;
          RtcmDataField *RtcmDataField::DF445 = NULL;
          RtcmDataField *RtcmDataField::DF446 = NULL;
          RtcmDataField *RtcmDataField::DF447 = NULL;
          RtcmDataField *RtcmDataField::DF448 = NULL;
          RtcmDataField *RtcmDataField::DF449 = NULL;
          RtcmDataField *RtcmDataField::DF450 = NULL;
          RtcmDataField *RtcmDataField::DF451 = NULL;
          RtcmDataField *RtcmDataField::DF452 = NULL;
          RtcmDataField *RtcmDataField::DF453 = NULL;
          RtcmDataField *RtcmDataField::DF454 = NULL;
          RtcmDataField *RtcmDataField::DF455 = NULL;
          RtcmDataField *RtcmDataField::DF456 = NULL;
          RtcmDataField *RtcmDataField::DF457 = NULL;
          RtcmDataField *RtcmDataField::DF458 = NULL;
          RtcmDataField *RtcmDataField::DF488 = NULL;
          RtcmDataField *RtcmDataField::DF489 = NULL;
          RtcmDataField *RtcmDataField::DF490 = NULL;
          RtcmDataField *RtcmDataField::DF491 = NULL;
          RtcmDataField *RtcmDataField::DF492 = NULL;
          RtcmDataField *RtcmDataField::DF493 = NULL;
          RtcmDataField *RtcmDataField::DF494 = NULL;
          RtcmDataField *RtcmDataField::DF495 = NULL;
          RtcmDataField *RtcmDataField::DF496 = NULL;
          RtcmDataField *RtcmDataField::DF497 = NULL;
          RtcmDataField *RtcmDataField::DF498 = NULL;
          RtcmDataField *RtcmDataField::DF499 = NULL;
          RtcmDataField *RtcmDataField::DF500 = NULL;
          RtcmDataField *RtcmDataField::DF501 = NULL;
          RtcmDataField *RtcmDataField::DF502 = NULL;
          RtcmDataField *RtcmDataField::DF503 = NULL;
          RtcmDataField *RtcmDataField::DF504 = NULL;
          RtcmDataField *RtcmDataField::DF505 = NULL;
          RtcmDataField *RtcmDataField::DF506 = NULL;
          RtcmDataField *RtcmDataField::DF507 = NULL;
          RtcmDataField *RtcmDataField::DF508 = NULL;
          RtcmDataField *RtcmDataField::DF509 = NULL;
          RtcmDataField *RtcmDataField::DF510 = NULL;
          RtcmDataField *RtcmDataField::DF511 = NULL;
          RtcmDataField *RtcmDataField::DF512 = NULL;
          RtcmDataField *RtcmDataField::DF513 = NULL;
          RtcmDataField *RtcmDataField::DF514 = NULL;
          RtcmDataField *RtcmDataField::DF515 = NULL;

          jclass RtcmDataField::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/RtcmDataField");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_768971033cb40f34] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/RtcmDataField;");
              mids$[mid_values_1d502341aab7918b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/parser/RtcmDataField;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DF002 = new RtcmDataField(env->getStaticObjectField(cls, "DF002", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF009 = new RtcmDataField(env->getStaticObjectField(cls, "DF009", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF038 = new RtcmDataField(env->getStaticObjectField(cls, "DF038", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF040 = new RtcmDataField(env->getStaticObjectField(cls, "DF040", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF068 = new RtcmDataField(env->getStaticObjectField(cls, "DF068", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF071 = new RtcmDataField(env->getStaticObjectField(cls, "DF071", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF076 = new RtcmDataField(env->getStaticObjectField(cls, "DF076", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF077 = new RtcmDataField(env->getStaticObjectField(cls, "DF077", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF078 = new RtcmDataField(env->getStaticObjectField(cls, "DF078", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF079 = new RtcmDataField(env->getStaticObjectField(cls, "DF079", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF081 = new RtcmDataField(env->getStaticObjectField(cls, "DF081", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF082 = new RtcmDataField(env->getStaticObjectField(cls, "DF082", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF083 = new RtcmDataField(env->getStaticObjectField(cls, "DF083", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF084 = new RtcmDataField(env->getStaticObjectField(cls, "DF084", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF085 = new RtcmDataField(env->getStaticObjectField(cls, "DF085", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF086 = new RtcmDataField(env->getStaticObjectField(cls, "DF086", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF087 = new RtcmDataField(env->getStaticObjectField(cls, "DF087", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF088 = new RtcmDataField(env->getStaticObjectField(cls, "DF088", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF089 = new RtcmDataField(env->getStaticObjectField(cls, "DF089", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF090 = new RtcmDataField(env->getStaticObjectField(cls, "DF090", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF091 = new RtcmDataField(env->getStaticObjectField(cls, "DF091", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF092 = new RtcmDataField(env->getStaticObjectField(cls, "DF092", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF093 = new RtcmDataField(env->getStaticObjectField(cls, "DF093", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF094 = new RtcmDataField(env->getStaticObjectField(cls, "DF094", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF095 = new RtcmDataField(env->getStaticObjectField(cls, "DF095", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF096 = new RtcmDataField(env->getStaticObjectField(cls, "DF096", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF097 = new RtcmDataField(env->getStaticObjectField(cls, "DF097", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF098 = new RtcmDataField(env->getStaticObjectField(cls, "DF098", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF099 = new RtcmDataField(env->getStaticObjectField(cls, "DF099", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF100 = new RtcmDataField(env->getStaticObjectField(cls, "DF100", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF101 = new RtcmDataField(env->getStaticObjectField(cls, "DF101", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF102 = new RtcmDataField(env->getStaticObjectField(cls, "DF102", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF103 = new RtcmDataField(env->getStaticObjectField(cls, "DF103", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF104 = new RtcmDataField(env->getStaticObjectField(cls, "DF104", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF105 = new RtcmDataField(env->getStaticObjectField(cls, "DF105", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF106 = new RtcmDataField(env->getStaticObjectField(cls, "DF106", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF107 = new RtcmDataField(env->getStaticObjectField(cls, "DF107", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF108 = new RtcmDataField(env->getStaticObjectField(cls, "DF108", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF109 = new RtcmDataField(env->getStaticObjectField(cls, "DF109", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF110 = new RtcmDataField(env->getStaticObjectField(cls, "DF110", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF111 = new RtcmDataField(env->getStaticObjectField(cls, "DF111", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF112 = new RtcmDataField(env->getStaticObjectField(cls, "DF112", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF113 = new RtcmDataField(env->getStaticObjectField(cls, "DF113", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF114 = new RtcmDataField(env->getStaticObjectField(cls, "DF114", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF115 = new RtcmDataField(env->getStaticObjectField(cls, "DF115", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF116 = new RtcmDataField(env->getStaticObjectField(cls, "DF116", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF117 = new RtcmDataField(env->getStaticObjectField(cls, "DF117", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF118 = new RtcmDataField(env->getStaticObjectField(cls, "DF118", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF119 = new RtcmDataField(env->getStaticObjectField(cls, "DF119", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF120 = new RtcmDataField(env->getStaticObjectField(cls, "DF120", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF121 = new RtcmDataField(env->getStaticObjectField(cls, "DF121", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF122 = new RtcmDataField(env->getStaticObjectField(cls, "DF122", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF123 = new RtcmDataField(env->getStaticObjectField(cls, "DF123", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF124 = new RtcmDataField(env->getStaticObjectField(cls, "DF124", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF125 = new RtcmDataField(env->getStaticObjectField(cls, "DF125", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF126 = new RtcmDataField(env->getStaticObjectField(cls, "DF126", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF127 = new RtcmDataField(env->getStaticObjectField(cls, "DF127", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF128 = new RtcmDataField(env->getStaticObjectField(cls, "DF128", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF129 = new RtcmDataField(env->getStaticObjectField(cls, "DF129", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF130 = new RtcmDataField(env->getStaticObjectField(cls, "DF130", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF131 = new RtcmDataField(env->getStaticObjectField(cls, "DF131", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF132 = new RtcmDataField(env->getStaticObjectField(cls, "DF132", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF133 = new RtcmDataField(env->getStaticObjectField(cls, "DF133", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF134 = new RtcmDataField(env->getStaticObjectField(cls, "DF134", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF135 = new RtcmDataField(env->getStaticObjectField(cls, "DF135", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF136 = new RtcmDataField(env->getStaticObjectField(cls, "DF136", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF137 = new RtcmDataField(env->getStaticObjectField(cls, "DF137", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF252 = new RtcmDataField(env->getStaticObjectField(cls, "DF252", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF289 = new RtcmDataField(env->getStaticObjectField(cls, "DF289", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF290 = new RtcmDataField(env->getStaticObjectField(cls, "DF290", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF291 = new RtcmDataField(env->getStaticObjectField(cls, "DF291", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF292 = new RtcmDataField(env->getStaticObjectField(cls, "DF292", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF293 = new RtcmDataField(env->getStaticObjectField(cls, "DF293", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF294 = new RtcmDataField(env->getStaticObjectField(cls, "DF294", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF295 = new RtcmDataField(env->getStaticObjectField(cls, "DF295", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF296 = new RtcmDataField(env->getStaticObjectField(cls, "DF296", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF297 = new RtcmDataField(env->getStaticObjectField(cls, "DF297", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF298 = new RtcmDataField(env->getStaticObjectField(cls, "DF298", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF299 = new RtcmDataField(env->getStaticObjectField(cls, "DF299", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF300 = new RtcmDataField(env->getStaticObjectField(cls, "DF300", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF301 = new RtcmDataField(env->getStaticObjectField(cls, "DF301", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF302 = new RtcmDataField(env->getStaticObjectField(cls, "DF302", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF303 = new RtcmDataField(env->getStaticObjectField(cls, "DF303", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF304 = new RtcmDataField(env->getStaticObjectField(cls, "DF304", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF305 = new RtcmDataField(env->getStaticObjectField(cls, "DF305", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF306 = new RtcmDataField(env->getStaticObjectField(cls, "DF306", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF307 = new RtcmDataField(env->getStaticObjectField(cls, "DF307", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF308 = new RtcmDataField(env->getStaticObjectField(cls, "DF308", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF309 = new RtcmDataField(env->getStaticObjectField(cls, "DF309", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF310 = new RtcmDataField(env->getStaticObjectField(cls, "DF310", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF311 = new RtcmDataField(env->getStaticObjectField(cls, "DF311", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF312 = new RtcmDataField(env->getStaticObjectField(cls, "DF312", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF313 = new RtcmDataField(env->getStaticObjectField(cls, "DF313", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF314 = new RtcmDataField(env->getStaticObjectField(cls, "DF314", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF315 = new RtcmDataField(env->getStaticObjectField(cls, "DF315", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF316 = new RtcmDataField(env->getStaticObjectField(cls, "DF316", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF317 = new RtcmDataField(env->getStaticObjectField(cls, "DF317", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF365 = new RtcmDataField(env->getStaticObjectField(cls, "DF365", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF366 = new RtcmDataField(env->getStaticObjectField(cls, "DF366", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF367 = new RtcmDataField(env->getStaticObjectField(cls, "DF367", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF368 = new RtcmDataField(env->getStaticObjectField(cls, "DF368", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF369 = new RtcmDataField(env->getStaticObjectField(cls, "DF369", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF370 = new RtcmDataField(env->getStaticObjectField(cls, "DF370", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF375 = new RtcmDataField(env->getStaticObjectField(cls, "DF375", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF376 = new RtcmDataField(env->getStaticObjectField(cls, "DF376", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF377 = new RtcmDataField(env->getStaticObjectField(cls, "DF377", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF378 = new RtcmDataField(env->getStaticObjectField(cls, "DF378", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF384 = new RtcmDataField(env->getStaticObjectField(cls, "DF384", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF385 = new RtcmDataField(env->getStaticObjectField(cls, "DF385", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF386 = new RtcmDataField(env->getStaticObjectField(cls, "DF386", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF387 = new RtcmDataField(env->getStaticObjectField(cls, "DF387", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF388 = new RtcmDataField(env->getStaticObjectField(cls, "DF388", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF391 = new RtcmDataField(env->getStaticObjectField(cls, "DF391", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF392 = new RtcmDataField(env->getStaticObjectField(cls, "DF392", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF413 = new RtcmDataField(env->getStaticObjectField(cls, "DF413", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF414 = new RtcmDataField(env->getStaticObjectField(cls, "DF414", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF415 = new RtcmDataField(env->getStaticObjectField(cls, "DF415", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF429 = new RtcmDataField(env->getStaticObjectField(cls, "DF429", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF430 = new RtcmDataField(env->getStaticObjectField(cls, "DF430", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF431 = new RtcmDataField(env->getStaticObjectField(cls, "DF431", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF432 = new RtcmDataField(env->getStaticObjectField(cls, "DF432", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF433 = new RtcmDataField(env->getStaticObjectField(cls, "DF433", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF434 = new RtcmDataField(env->getStaticObjectField(cls, "DF434", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF435 = new RtcmDataField(env->getStaticObjectField(cls, "DF435", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF436 = new RtcmDataField(env->getStaticObjectField(cls, "DF436", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF437 = new RtcmDataField(env->getStaticObjectField(cls, "DF437", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF438 = new RtcmDataField(env->getStaticObjectField(cls, "DF438", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF439 = new RtcmDataField(env->getStaticObjectField(cls, "DF439", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF440 = new RtcmDataField(env->getStaticObjectField(cls, "DF440", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF441 = new RtcmDataField(env->getStaticObjectField(cls, "DF441", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF442 = new RtcmDataField(env->getStaticObjectField(cls, "DF442", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF443 = new RtcmDataField(env->getStaticObjectField(cls, "DF443", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF444 = new RtcmDataField(env->getStaticObjectField(cls, "DF444", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF445 = new RtcmDataField(env->getStaticObjectField(cls, "DF445", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF446 = new RtcmDataField(env->getStaticObjectField(cls, "DF446", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF447 = new RtcmDataField(env->getStaticObjectField(cls, "DF447", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF448 = new RtcmDataField(env->getStaticObjectField(cls, "DF448", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF449 = new RtcmDataField(env->getStaticObjectField(cls, "DF449", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF450 = new RtcmDataField(env->getStaticObjectField(cls, "DF450", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF451 = new RtcmDataField(env->getStaticObjectField(cls, "DF451", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF452 = new RtcmDataField(env->getStaticObjectField(cls, "DF452", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF453 = new RtcmDataField(env->getStaticObjectField(cls, "DF453", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF454 = new RtcmDataField(env->getStaticObjectField(cls, "DF454", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF455 = new RtcmDataField(env->getStaticObjectField(cls, "DF455", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF456 = new RtcmDataField(env->getStaticObjectField(cls, "DF456", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF457 = new RtcmDataField(env->getStaticObjectField(cls, "DF457", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF458 = new RtcmDataField(env->getStaticObjectField(cls, "DF458", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF488 = new RtcmDataField(env->getStaticObjectField(cls, "DF488", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF489 = new RtcmDataField(env->getStaticObjectField(cls, "DF489", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF490 = new RtcmDataField(env->getStaticObjectField(cls, "DF490", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF491 = new RtcmDataField(env->getStaticObjectField(cls, "DF491", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF492 = new RtcmDataField(env->getStaticObjectField(cls, "DF492", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF493 = new RtcmDataField(env->getStaticObjectField(cls, "DF493", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF494 = new RtcmDataField(env->getStaticObjectField(cls, "DF494", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF495 = new RtcmDataField(env->getStaticObjectField(cls, "DF495", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF496 = new RtcmDataField(env->getStaticObjectField(cls, "DF496", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF497 = new RtcmDataField(env->getStaticObjectField(cls, "DF497", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF498 = new RtcmDataField(env->getStaticObjectField(cls, "DF498", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF499 = new RtcmDataField(env->getStaticObjectField(cls, "DF499", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF500 = new RtcmDataField(env->getStaticObjectField(cls, "DF500", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF501 = new RtcmDataField(env->getStaticObjectField(cls, "DF501", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF502 = new RtcmDataField(env->getStaticObjectField(cls, "DF502", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF503 = new RtcmDataField(env->getStaticObjectField(cls, "DF503", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF504 = new RtcmDataField(env->getStaticObjectField(cls, "DF504", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF505 = new RtcmDataField(env->getStaticObjectField(cls, "DF505", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF506 = new RtcmDataField(env->getStaticObjectField(cls, "DF506", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF507 = new RtcmDataField(env->getStaticObjectField(cls, "DF507", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF508 = new RtcmDataField(env->getStaticObjectField(cls, "DF508", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF509 = new RtcmDataField(env->getStaticObjectField(cls, "DF509", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF510 = new RtcmDataField(env->getStaticObjectField(cls, "DF510", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF511 = new RtcmDataField(env->getStaticObjectField(cls, "DF511", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF512 = new RtcmDataField(env->getStaticObjectField(cls, "DF512", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF513 = new RtcmDataField(env->getStaticObjectField(cls, "DF513", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF514 = new RtcmDataField(env->getStaticObjectField(cls, "DF514", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF515 = new RtcmDataField(env->getStaticObjectField(cls, "DF515", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RtcmDataField RtcmDataField::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RtcmDataField(env->callStaticObjectMethod(cls, mids$[mid_valueOf_768971033cb40f34], a0.this$));
          }

          JArray< RtcmDataField > RtcmDataField::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RtcmDataField >(env->callStaticObjectMethod(cls, mids$[mid_values_1d502341aab7918b]));
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
        namespace parser {
          static PyObject *t_RtcmDataField_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmDataField_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmDataField_of_(t_RtcmDataField *self, PyObject *args);
          static PyObject *t_RtcmDataField_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RtcmDataField_values(PyTypeObject *type);
          static PyObject *t_RtcmDataField_get__parameters_(t_RtcmDataField *self, void *data);
          static PyGetSetDef t_RtcmDataField__fields_[] = {
            DECLARE_GET_FIELD(t_RtcmDataField, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RtcmDataField__methods_[] = {
            DECLARE_METHOD(t_RtcmDataField, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmDataField, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmDataField, of_, METH_VARARGS),
            DECLARE_METHOD(t_RtcmDataField, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RtcmDataField, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RtcmDataField)[] = {
            { Py_tp_methods, t_RtcmDataField__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RtcmDataField__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RtcmDataField)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RtcmDataField, t_RtcmDataField, RtcmDataField);
          PyObject *t_RtcmDataField::wrap_Object(const RtcmDataField& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RtcmDataField::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RtcmDataField *self = (t_RtcmDataField *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RtcmDataField::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RtcmDataField::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RtcmDataField *self = (t_RtcmDataField *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RtcmDataField::install(PyObject *module)
          {
            installType(&PY_TYPE(RtcmDataField), &PY_TYPE_DEF(RtcmDataField), module, "RtcmDataField", 0);
          }

          void t_RtcmDataField::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "class_", make_descriptor(RtcmDataField::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "wrapfn_", make_descriptor(t_RtcmDataField::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "boxfn_", make_descriptor(boxObject));
            env->getClass(RtcmDataField::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF002", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF002)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF009", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF009)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF038", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF038)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF040", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF040)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF068", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF068)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF071", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF071)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF076", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF076)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF077", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF077)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF078", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF078)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF079", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF079)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF081", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF081)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF082", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF082)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF083", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF083)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF084", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF084)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF085", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF085)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF086", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF086)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF087", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF087)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF088", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF088)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF089", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF089)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF090", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF090)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF091", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF091)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF092", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF092)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF093", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF093)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF094", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF094)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF095", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF095)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF096", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF096)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF097", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF097)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF098", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF098)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF099", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF099)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF100", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF100)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF101", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF101)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF102", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF102)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF103", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF103)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF104", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF104)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF105", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF105)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF106", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF106)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF107", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF107)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF108", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF108)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF109", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF109)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF110", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF110)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF111", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF111)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF112", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF112)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF113", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF113)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF114", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF114)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF115", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF115)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF116", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF116)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF117", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF117)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF118", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF118)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF119", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF119)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF120", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF120)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF121", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF121)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF122", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF122)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF123", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF123)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF124", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF124)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF125", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF125)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF126", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF126)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF127", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF127)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF128", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF128)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF129", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF129)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF130", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF130)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF131", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF131)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF132", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF132)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF133", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF133)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF134", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF134)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF135", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF135)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF136", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF136)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF137", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF137)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF252", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF252)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF289", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF289)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF290", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF290)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF291", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF291)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF292", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF292)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF293", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF293)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF294", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF294)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF295", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF295)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF296", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF296)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF297", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF297)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF298", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF298)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF299", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF299)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF300", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF300)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF301", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF301)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF302", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF302)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF303", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF303)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF304", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF304)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF305", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF305)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF306", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF306)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF307", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF307)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF308", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF308)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF309", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF309)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF310", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF310)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF311", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF311)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF312", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF312)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF313", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF313)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF314", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF314)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF315", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF315)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF316", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF316)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF317", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF317)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF365", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF365)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF366", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF366)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF367", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF367)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF368", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF368)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF369", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF369)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF370", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF370)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF375", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF375)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF376", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF376)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF377", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF377)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF378", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF378)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF384", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF384)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF385", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF385)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF386", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF386)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF387", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF387)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF388", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF388)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF391", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF391)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF392", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF392)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF413", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF413)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF414", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF414)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF415", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF415)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF429", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF429)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF430", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF430)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF431", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF431)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF432", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF432)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF433", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF433)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF434", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF434)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF435", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF435)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF436", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF436)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF437", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF437)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF438", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF438)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF439", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF439)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF440", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF440)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF441", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF441)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF442", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF442)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF443", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF443)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF444", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF444)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF445", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF445)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF446", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF446)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF447", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF447)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF448", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF448)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF449", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF449)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF450", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF450)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF451", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF451)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF452", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF452)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF453", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF453)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF454", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF454)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF455", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF455)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF456", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF456)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF457", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF457)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF458", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF458)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF488", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF488)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF489", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF489)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF490", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF490)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF491", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF491)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF492", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF492)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF493", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF493)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF494", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF494)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF495", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF495)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF496", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF496)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF497", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF497)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF498", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF498)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF499", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF499)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF500", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF500)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF501", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF501)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF502", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF502)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF503", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF503)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF504", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF504)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF505", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF505)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF506", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF506)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF507", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF507)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF508", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF508)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF509", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF509)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF510", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF510)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF511", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF511)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF512", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF512)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF513", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF513)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF514", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF514)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF515", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF515)));
          }

          static PyObject *t_RtcmDataField_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RtcmDataField::initializeClass, 1)))
              return NULL;
            return t_RtcmDataField::wrap_Object(RtcmDataField(((t_RtcmDataField *) arg)->object.this$));
          }
          static PyObject *t_RtcmDataField_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RtcmDataField::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RtcmDataField_of_(t_RtcmDataField *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RtcmDataField_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RtcmDataField result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::RtcmDataField::valueOf(a0));
              return t_RtcmDataField::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RtcmDataField_values(PyTypeObject *type)
          {
            JArray< RtcmDataField > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::parser::RtcmDataField::values());
            return JArray<jobject>(result.this$).wrap(t_RtcmDataField::wrap_jobject);
          }
          static PyObject *t_RtcmDataField_get__parameters_(t_RtcmDataField *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D$NoSubSpaceException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *Euclidean1D$NoSubSpaceException::class$ = NULL;
          jmethodID *Euclidean1D$NoSubSpaceException::mids$ = NULL;
          bool Euclidean1D$NoSubSpaceException::live$ = false;

          jclass Euclidean1D$NoSubSpaceException::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/Euclidean1D$NoSubSpaceException");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Euclidean1D$NoSubSpaceException::Euclidean1D$NoSubSpaceException() : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}
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
        namespace oned {
          static PyObject *t_Euclidean1D$NoSubSpaceException_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean1D$NoSubSpaceException_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Euclidean1D$NoSubSpaceException_init_(t_Euclidean1D$NoSubSpaceException *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_Euclidean1D$NoSubSpaceException__methods_[] = {
            DECLARE_METHOD(t_Euclidean1D$NoSubSpaceException, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean1D$NoSubSpaceException, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Euclidean1D$NoSubSpaceException)[] = {
            { Py_tp_methods, t_Euclidean1D$NoSubSpaceException__methods_ },
            { Py_tp_init, (void *) t_Euclidean1D$NoSubSpaceException_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Euclidean1D$NoSubSpaceException)[] = {
            &PY_TYPE_DEF(::org::hipparchus::exception::MathRuntimeException),
            NULL
          };

          DEFINE_TYPE(Euclidean1D$NoSubSpaceException, t_Euclidean1D$NoSubSpaceException, Euclidean1D$NoSubSpaceException);

          void t_Euclidean1D$NoSubSpaceException::install(PyObject *module)
          {
            installType(&PY_TYPE(Euclidean1D$NoSubSpaceException), &PY_TYPE_DEF(Euclidean1D$NoSubSpaceException), module, "Euclidean1D$NoSubSpaceException", 0);
          }

          void t_Euclidean1D$NoSubSpaceException::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D$NoSubSpaceException), "class_", make_descriptor(Euclidean1D$NoSubSpaceException::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D$NoSubSpaceException), "wrapfn_", make_descriptor(t_Euclidean1D$NoSubSpaceException::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D$NoSubSpaceException), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Euclidean1D$NoSubSpaceException_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Euclidean1D$NoSubSpaceException::initializeClass, 1)))
              return NULL;
            return t_Euclidean1D$NoSubSpaceException::wrap_Object(Euclidean1D$NoSubSpaceException(((t_Euclidean1D$NoSubSpaceException *) arg)->object.this$));
          }
          static PyObject *t_Euclidean1D$NoSubSpaceException_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Euclidean1D$NoSubSpaceException::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Euclidean1D$NoSubSpaceException_init_(t_Euclidean1D$NoSubSpaceException *self, PyObject *args, PyObject *kwds)
          {
            Euclidean1D$NoSubSpaceException object((jobject) NULL);

            INT_CALL(object = Euclidean1D$NoSubSpaceException());
            self->object = object;

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadataKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmMetadataKey::class$ = NULL;
            jmethodID *TdmMetadataKey::mids$ = NULL;
            bool TdmMetadataKey::live$ = false;
            TdmMetadataKey *TdmMetadataKey::ANGLE_TYPE = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTIONS_APPLIED = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_ABERRATION_DIURNAL = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_ABERRATION_YEARLY = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_ANGLE_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_ANGLE_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_DOPPLER = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_MAG = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_RANGE = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_RCS = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_RECEIVE = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_TRANSMIT = NULL;
            TdmMetadataKey *TdmMetadataKey::DATA_QUALITY = NULL;
            TdmMetadataKey *TdmMetadataKey::DATA_TYPES = NULL;
            TdmMetadataKey *TdmMetadataKey::DOPPLER_COUNT_BIAS = NULL;
            TdmMetadataKey *TdmMetadataKey::DOPPLER_COUNT_ROLLOVER = NULL;
            TdmMetadataKey *TdmMetadataKey::DOPPLER_COUNT_SCALE = NULL;
            TdmMetadataKey *TdmMetadataKey::EPHEMERIS_NAME_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::EPHEMERIS_NAME_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::EPHEMERIS_NAME_3 = NULL;
            TdmMetadataKey *TdmMetadataKey::EPHEMERIS_NAME_4 = NULL;
            TdmMetadataKey *TdmMetadataKey::EPHEMERIS_NAME_5 = NULL;
            TdmMetadataKey *TdmMetadataKey::FREQ_OFFSET = NULL;
            TdmMetadataKey *TdmMetadataKey::INTEGRATION_INTERVAL = NULL;
            TdmMetadataKey *TdmMetadataKey::INTEGRATION_REF = NULL;
            TdmMetadataKey *TdmMetadataKey::INTERPOLATION = NULL;
            TdmMetadataKey *TdmMetadataKey::INTERPOLATION_DEGREE = NULL;
            TdmMetadataKey *TdmMetadataKey::MODE = NULL;
            TdmMetadataKey *TdmMetadataKey::PARTICIPANT_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::PARTICIPANT_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::PARTICIPANT_3 = NULL;
            TdmMetadataKey *TdmMetadataKey::PARTICIPANT_4 = NULL;
            TdmMetadataKey *TdmMetadataKey::PARTICIPANT_5 = NULL;
            TdmMetadataKey *TdmMetadataKey::PATH = NULL;
            TdmMetadataKey *TdmMetadataKey::PATH_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::PATH_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::RANGE_MODE = NULL;
            TdmMetadataKey *TdmMetadataKey::RANGE_MODULUS = NULL;
            TdmMetadataKey *TdmMetadataKey::RANGE_UNITS = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_BAND = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_DELAY_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_DELAY_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_DELAY_3 = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_DELAY_4 = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_DELAY_5 = NULL;
            TdmMetadataKey *TdmMetadataKey::REFERENCE_FRAME = NULL;
            TdmMetadataKey *TdmMetadataKey::START_TIME = NULL;
            TdmMetadataKey *TdmMetadataKey::STOP_TIME = NULL;
            TdmMetadataKey *TdmMetadataKey::TIMETAG_REF = NULL;
            TdmMetadataKey *TdmMetadataKey::TRACK_ID = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_BAND = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_DELAY_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_DELAY_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_DELAY_3 = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_DELAY_4 = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_DELAY_5 = NULL;
            TdmMetadataKey *TdmMetadataKey::TURNAROUND_DENOMINATOR = NULL;
            TdmMetadataKey *TdmMetadataKey::TURNAROUND_NUMERATOR = NULL;

            jclass TdmMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_36d86541cb0b3d8d] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;)Z");
                mids$[mid_valueOf_014ea1cf2a658290] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;");
                mids$[mid_values_dc44ff15d1e5ff1d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ANGLE_TYPE = new TdmMetadataKey(env->getStaticObjectField(cls, "ANGLE_TYPE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTIONS_APPLIED = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTIONS_APPLIED", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_ABERRATION_DIURNAL = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_ABERRATION_DIURNAL", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_ABERRATION_YEARLY = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_ABERRATION_YEARLY", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_ANGLE_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_ANGLE_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_ANGLE_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_ANGLE_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_DOPPLER = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_DOPPLER", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_MAG = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_MAG", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_RANGE = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_RANGE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_RCS = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_RCS", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_RECEIVE = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_RECEIVE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_TRANSMIT = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_TRANSMIT", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                DATA_QUALITY = new TdmMetadataKey(env->getStaticObjectField(cls, "DATA_QUALITY", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                DATA_TYPES = new TdmMetadataKey(env->getStaticObjectField(cls, "DATA_TYPES", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                DOPPLER_COUNT_BIAS = new TdmMetadataKey(env->getStaticObjectField(cls, "DOPPLER_COUNT_BIAS", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                DOPPLER_COUNT_ROLLOVER = new TdmMetadataKey(env->getStaticObjectField(cls, "DOPPLER_COUNT_ROLLOVER", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                DOPPLER_COUNT_SCALE = new TdmMetadataKey(env->getStaticObjectField(cls, "DOPPLER_COUNT_SCALE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                EPHEMERIS_NAME_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                EPHEMERIS_NAME_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                EPHEMERIS_NAME_3 = new TdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME_3", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                EPHEMERIS_NAME_4 = new TdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME_4", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                EPHEMERIS_NAME_5 = new TdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME_5", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                FREQ_OFFSET = new TdmMetadataKey(env->getStaticObjectField(cls, "FREQ_OFFSET", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                INTEGRATION_INTERVAL = new TdmMetadataKey(env->getStaticObjectField(cls, "INTEGRATION_INTERVAL", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                INTEGRATION_REF = new TdmMetadataKey(env->getStaticObjectField(cls, "INTEGRATION_REF", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                INTERPOLATION = new TdmMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                INTERPOLATION_DEGREE = new TdmMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION_DEGREE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                MODE = new TdmMetadataKey(env->getStaticObjectField(cls, "MODE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PARTICIPANT_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "PARTICIPANT_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PARTICIPANT_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "PARTICIPANT_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PARTICIPANT_3 = new TdmMetadataKey(env->getStaticObjectField(cls, "PARTICIPANT_3", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PARTICIPANT_4 = new TdmMetadataKey(env->getStaticObjectField(cls, "PARTICIPANT_4", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PARTICIPANT_5 = new TdmMetadataKey(env->getStaticObjectField(cls, "PARTICIPANT_5", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PATH = new TdmMetadataKey(env->getStaticObjectField(cls, "PATH", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PATH_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "PATH_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PATH_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "PATH_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RANGE_MODE = new TdmMetadataKey(env->getStaticObjectField(cls, "RANGE_MODE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RANGE_MODULUS = new TdmMetadataKey(env->getStaticObjectField(cls, "RANGE_MODULUS", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RANGE_UNITS = new TdmMetadataKey(env->getStaticObjectField(cls, "RANGE_UNITS", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_BAND = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_BAND", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_DELAY_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_DELAY_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_DELAY_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_DELAY_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_DELAY_3 = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_DELAY_3", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_DELAY_4 = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_DELAY_4", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_DELAY_5 = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_DELAY_5", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                REFERENCE_FRAME = new TdmMetadataKey(env->getStaticObjectField(cls, "REFERENCE_FRAME", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                START_TIME = new TdmMetadataKey(env->getStaticObjectField(cls, "START_TIME", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                STOP_TIME = new TdmMetadataKey(env->getStaticObjectField(cls, "STOP_TIME", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TIMETAG_REF = new TdmMetadataKey(env->getStaticObjectField(cls, "TIMETAG_REF", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRACK_ID = new TdmMetadataKey(env->getStaticObjectField(cls, "TRACK_ID", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_BAND = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_BAND", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_DELAY_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_DELAY_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_DELAY_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_DELAY_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_DELAY_3 = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_DELAY_3", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_DELAY_4 = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_DELAY_4", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_DELAY_5 = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_DELAY_5", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TURNAROUND_DENOMINATOR = new TdmMetadataKey(env->getStaticObjectField(cls, "TURNAROUND_DENOMINATOR", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TURNAROUND_NUMERATOR = new TdmMetadataKey(env->getStaticObjectField(cls, "TURNAROUND_NUMERATOR", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean TdmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_36d86541cb0b3d8d], a0.this$, a1.this$, a2.this$);
            }

            TdmMetadataKey TdmMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return TdmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_014ea1cf2a658290], a0.this$));
            }

            JArray< TdmMetadataKey > TdmMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< TdmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_dc44ff15d1e5ff1d]));
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
          namespace tdm {
            static PyObject *t_TdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmMetadataKey_of_(t_TdmMetadataKey *self, PyObject *args);
            static PyObject *t_TdmMetadataKey_process(t_TdmMetadataKey *self, PyObject *args);
            static PyObject *t_TdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_TdmMetadataKey_values(PyTypeObject *type);
            static PyObject *t_TdmMetadataKey_get__parameters_(t_TdmMetadataKey *self, void *data);
            static PyGetSetDef t_TdmMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_TdmMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TdmMetadataKey__methods_[] = {
              DECLARE_METHOD(t_TdmMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_TdmMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmMetadataKey)[] = {
              { Py_tp_methods, t_TdmMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TdmMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(TdmMetadataKey, t_TdmMetadataKey, TdmMetadataKey);
            PyObject *t_TdmMetadataKey::wrap_Object(const TdmMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TdmMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmMetadataKey *self = (t_TdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_TdmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TdmMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmMetadataKey *self = (t_TdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_TdmMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmMetadataKey), &PY_TYPE_DEF(TdmMetadataKey), module, "TdmMetadataKey", 0);
            }

            void t_TdmMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "class_", make_descriptor(TdmMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "wrapfn_", make_descriptor(t_TdmMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(TdmMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "ANGLE_TYPE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::ANGLE_TYPE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTIONS_APPLIED", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTIONS_APPLIED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_ABERRATION_DIURNAL", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_ABERRATION_DIURNAL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_ABERRATION_YEARLY", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_ABERRATION_YEARLY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_ANGLE_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_ANGLE_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_ANGLE_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_ANGLE_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_DOPPLER", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_DOPPLER)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_MAG", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_MAG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_RANGE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_RANGE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_RCS", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_RCS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_RECEIVE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_RECEIVE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_TRANSMIT", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_TRANSMIT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "DATA_QUALITY", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::DATA_QUALITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "DATA_TYPES", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::DATA_TYPES)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "DOPPLER_COUNT_BIAS", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::DOPPLER_COUNT_BIAS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "DOPPLER_COUNT_ROLLOVER", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::DOPPLER_COUNT_ROLLOVER)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "DOPPLER_COUNT_SCALE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::DOPPLER_COUNT_SCALE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "EPHEMERIS_NAME_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::EPHEMERIS_NAME_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "EPHEMERIS_NAME_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::EPHEMERIS_NAME_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "EPHEMERIS_NAME_3", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::EPHEMERIS_NAME_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "EPHEMERIS_NAME_4", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::EPHEMERIS_NAME_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "EPHEMERIS_NAME_5", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::EPHEMERIS_NAME_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "FREQ_OFFSET", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::FREQ_OFFSET)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "INTEGRATION_INTERVAL", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::INTEGRATION_INTERVAL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "INTEGRATION_REF", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::INTEGRATION_REF)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "INTERPOLATION", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::INTERPOLATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "INTERPOLATION_DEGREE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::INTERPOLATION_DEGREE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "MODE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::MODE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PARTICIPANT_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PARTICIPANT_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PARTICIPANT_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PARTICIPANT_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PARTICIPANT_3", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PARTICIPANT_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PARTICIPANT_4", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PARTICIPANT_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PARTICIPANT_5", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PARTICIPANT_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PATH", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PATH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PATH_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PATH_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PATH_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PATH_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RANGE_MODE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RANGE_MODE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RANGE_MODULUS", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RANGE_MODULUS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RANGE_UNITS", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RANGE_UNITS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_BAND", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_BAND)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_DELAY_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_DELAY_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_DELAY_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_DELAY_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_DELAY_3", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_DELAY_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_DELAY_4", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_DELAY_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_DELAY_5", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_DELAY_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "REFERENCE_FRAME", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::REFERENCE_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "START_TIME", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::START_TIME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "STOP_TIME", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::STOP_TIME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TIMETAG_REF", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TIMETAG_REF)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRACK_ID", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRACK_ID)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_BAND", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_BAND)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_DELAY_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_DELAY_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_DELAY_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_DELAY_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_DELAY_3", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_DELAY_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_DELAY_4", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_DELAY_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_DELAY_5", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_DELAY_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TURNAROUND_DENOMINATOR", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TURNAROUND_DENOMINATOR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TURNAROUND_NUMERATOR", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TURNAROUND_NUMERATOR)));
            }

            static PyObject *t_TdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmMetadataKey::initializeClass, 1)))
                return NULL;
              return t_TdmMetadataKey::wrap_Object(TdmMetadataKey(((t_TdmMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_TdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TdmMetadataKey_of_(t_TdmMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TdmMetadataKey_process(t_TdmMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_TdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              TdmMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TdmMetadataKey::valueOf(a0));
                return t_TdmMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_TdmMetadataKey_values(PyTypeObject *type)
            {
              JArray< TdmMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TdmMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_TdmMetadataKey::wrap_jobject);
            }
            static PyObject *t_TdmMetadataKey_get__parameters_(t_TdmMetadataKey *self, void *data)
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
#include "org/hipparchus/analysis/FieldUnivariateMatrixFunction.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateMatrixFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldUnivariateMatrixFunction::class$ = NULL;
      jmethodID *FieldUnivariateMatrixFunction::mids$ = NULL;
      bool FieldUnivariateMatrixFunction::live$ = false;

      jclass FieldUnivariateMatrixFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldUnivariateMatrixFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldUnivariateMatrixFunction_7cfd4f0fd17cc97a] = env->getMethodID(cls, "toCalculusFieldUnivariateMatrixFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldUnivariateMatrixFunction;");
          mids$[mid_value_37731553c578c485] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldUnivariateMatrixFunction FieldUnivariateMatrixFunction::toCalculusFieldUnivariateMatrixFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldUnivariateMatrixFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldUnivariateMatrixFunction_7cfd4f0fd17cc97a], a0.this$));
      }

      JArray< JArray< ::org::hipparchus::CalculusFieldElement > > FieldUnivariateMatrixFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_value_37731553c578c485], a0.this$));
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
      static PyObject *t_FieldUnivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateMatrixFunction_toCalculusFieldUnivariateMatrixFunction(t_FieldUnivariateMatrixFunction *self, PyObject *arg);
      static PyObject *t_FieldUnivariateMatrixFunction_value(t_FieldUnivariateMatrixFunction *self, PyObject *arg);

      static PyMethodDef t_FieldUnivariateMatrixFunction__methods_[] = {
        DECLARE_METHOD(t_FieldUnivariateMatrixFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateMatrixFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateMatrixFunction, toCalculusFieldUnivariateMatrixFunction, METH_O),
        DECLARE_METHOD(t_FieldUnivariateMatrixFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateMatrixFunction)[] = {
        { Py_tp_methods, t_FieldUnivariateMatrixFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldUnivariateMatrixFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldUnivariateMatrixFunction, t_FieldUnivariateMatrixFunction, FieldUnivariateMatrixFunction);

      void t_FieldUnivariateMatrixFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldUnivariateMatrixFunction), &PY_TYPE_DEF(FieldUnivariateMatrixFunction), module, "FieldUnivariateMatrixFunction", 0);
      }

      void t_FieldUnivariateMatrixFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateMatrixFunction), "class_", make_descriptor(FieldUnivariateMatrixFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateMatrixFunction), "wrapfn_", make_descriptor(t_FieldUnivariateMatrixFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateMatrixFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldUnivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldUnivariateMatrixFunction::initializeClass, 1)))
          return NULL;
        return t_FieldUnivariateMatrixFunction::wrap_Object(FieldUnivariateMatrixFunction(((t_FieldUnivariateMatrixFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldUnivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldUnivariateMatrixFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldUnivariateMatrixFunction_toCalculusFieldUnivariateMatrixFunction(t_FieldUnivariateMatrixFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldUnivariateMatrixFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldUnivariateMatrixFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldUnivariateMatrixFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldUnivariateMatrixFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldUnivariateMatrixFunction_value(t_FieldUnivariateMatrixFunction *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {

          ::java::lang::Class *DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::class$ = NULL;
          jmethodID *DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::mids$ = NULL;
          bool DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::live$ = false;

          jclass DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_partialsComputed_deea883a52231bef] = env->getMethodID(cls, "partialsComputed", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/linear/RealMatrix;[D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::partialsComputed(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::linear::RealMatrix & a1, const JArray< jdouble > & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_partialsComputed_deea883a52231bef], a0.this$, a1.this$, a2.this$);
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
          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_partialsComputed(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver *self, PyObject *args);

          static PyMethodDef t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver__methods_[] = {
            DECLARE_METHOD(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver, partialsComputed, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver)[] = {
            { Py_tp_methods, t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver, t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver, DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver);

          void t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::install(PyObject *module)
          {
            installType(&PY_TYPE(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver), &PY_TYPE_DEF(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver), module, "DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver", 0);
          }

          void t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver), "class_", make_descriptor(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver), "wrapfn_", make_descriptor(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::initializeClass, 1)))
              return NULL;
            return t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::wrap_Object(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver(((t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver *) arg)->object.this$));
          }
          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_partialsComputed(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);

            if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.partialsComputed(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "partialsComputed", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "java/lang/String.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *AttitudeEphemerisFile::class$ = NULL;
        jmethodID *AttitudeEphemerisFile::mids$ = NULL;
        bool AttitudeEphemerisFile::live$ = false;

        jclass AttitudeEphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/AttitudeEphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getSatellites_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::Map AttitudeEphemerisFile::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_1e62c2f73fbdd1c4]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        static PyObject *t_AttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFile_of_(t_AttitudeEphemerisFile *self, PyObject *args);
        static PyObject *t_AttitudeEphemerisFile_getSatellites(t_AttitudeEphemerisFile *self);
        static PyObject *t_AttitudeEphemerisFile_get__satellites(t_AttitudeEphemerisFile *self, void *data);
        static PyObject *t_AttitudeEphemerisFile_get__parameters_(t_AttitudeEphemerisFile *self, void *data);
        static PyGetSetDef t_AttitudeEphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile, satellites),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AttitudeEphemerisFile__methods_[] = {
          DECLARE_METHOD(t_AttitudeEphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFile, of_, METH_VARARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile, getSatellites, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AttitudeEphemerisFile)[] = {
          { Py_tp_methods, t_AttitudeEphemerisFile__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AttitudeEphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AttitudeEphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AttitudeEphemerisFile, t_AttitudeEphemerisFile, AttitudeEphemerisFile);
        PyObject *t_AttitudeEphemerisFile::wrap_Object(const AttitudeEphemerisFile& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AttitudeEphemerisFile::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFile *self = (t_AttitudeEphemerisFile *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_AttitudeEphemerisFile::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AttitudeEphemerisFile::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFile *self = (t_AttitudeEphemerisFile *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_AttitudeEphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(AttitudeEphemerisFile), &PY_TYPE_DEF(AttitudeEphemerisFile), module, "AttitudeEphemerisFile", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile), "AttitudeEphemerisSegment", make_descriptor(&PY_TYPE_DEF(AttitudeEphemerisFile$AttitudeEphemerisSegment)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile), "SatelliteAttitudeEphemeris", make_descriptor(&PY_TYPE_DEF(AttitudeEphemerisFile$SatelliteAttitudeEphemeris)));
        }

        void t_AttitudeEphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile), "class_", make_descriptor(AttitudeEphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile), "wrapfn_", make_descriptor(t_AttitudeEphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AttitudeEphemerisFile::initializeClass, 1)))
            return NULL;
          return t_AttitudeEphemerisFile::wrap_Object(AttitudeEphemerisFile(((t_AttitudeEphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_AttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AttitudeEphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AttitudeEphemerisFile_of_(t_AttitudeEphemerisFile *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AttitudeEphemerisFile_getSatellites(t_AttitudeEphemerisFile *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result);
        }
        static PyObject *t_AttitudeEphemerisFile_get__parameters_(t_AttitudeEphemerisFile *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AttitudeEphemerisFile_get__satellites(t_AttitudeEphemerisFile *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/GLONASSDate.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *GLONASSDate::class$ = NULL;
      jmethodID *GLONASSDate::mids$ = NULL;
      bool GLONASSDate::live$ = false;

      jclass GLONASSDate::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/GLONASSDate");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_20affcbd28542333] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_init$_9d31fbd7d3d72cec] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_754312f3734d6e2f] = env->getMethodID(cls, "<init>", "(IID)V");
          mids$[mid_init$_8b3ae84c27acbc02] = env->getMethodID(cls, "<init>", "(IIDLorg/orekit/time/TimeScale;)V");
          mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getDayNumber_412668abc8d889e9] = env->getMethodID(cls, "getDayNumber", "()I");
          mids$[mid_getGMST_557b8123390d8d0c] = env->getMethodID(cls, "getGMST", "()D");
          mids$[mid_getIntervalNumber_412668abc8d889e9] = env->getMethodID(cls, "getIntervalNumber", "()I");
          mids$[mid_getJD0_557b8123390d8d0c] = env->getMethodID(cls, "getJD0", "()D");
          mids$[mid_getSecInDay_557b8123390d8d0c] = env->getMethodID(cls, "getSecInDay", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GLONASSDate::GLONASSDate(const ::org::orekit::time::AbsoluteDate & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_20affcbd28542333, a0.this$)) {}

      GLONASSDate::GLONASSDate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9d31fbd7d3d72cec, a0.this$, a1.this$)) {}

      GLONASSDate::GLONASSDate(jint a0, jint a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_754312f3734d6e2f, a0, a1, a2)) {}

      GLONASSDate::GLONASSDate(jint a0, jint a1, jdouble a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8b3ae84c27acbc02, a0, a1, a2, a3.this$)) {}

      ::org::orekit::time::AbsoluteDate GLONASSDate::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
      }

      jint GLONASSDate::getDayNumber() const
      {
        return env->callIntMethod(this$, mids$[mid_getDayNumber_412668abc8d889e9]);
      }

      jdouble GLONASSDate::getGMST() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGMST_557b8123390d8d0c]);
      }

      jint GLONASSDate::getIntervalNumber() const
      {
        return env->callIntMethod(this$, mids$[mid_getIntervalNumber_412668abc8d889e9]);
      }

      jdouble GLONASSDate::getJD0() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getJD0_557b8123390d8d0c]);
      }

      jdouble GLONASSDate::getSecInDay() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSecInDay_557b8123390d8d0c]);
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
      static PyObject *t_GLONASSDate_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GLONASSDate_instance_(PyTypeObject *type, PyObject *arg);
      static int t_GLONASSDate_init_(t_GLONASSDate *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GLONASSDate_getDate(t_GLONASSDate *self);
      static PyObject *t_GLONASSDate_getDayNumber(t_GLONASSDate *self);
      static PyObject *t_GLONASSDate_getGMST(t_GLONASSDate *self);
      static PyObject *t_GLONASSDate_getIntervalNumber(t_GLONASSDate *self);
      static PyObject *t_GLONASSDate_getJD0(t_GLONASSDate *self);
      static PyObject *t_GLONASSDate_getSecInDay(t_GLONASSDate *self);
      static PyObject *t_GLONASSDate_get__date(t_GLONASSDate *self, void *data);
      static PyObject *t_GLONASSDate_get__dayNumber(t_GLONASSDate *self, void *data);
      static PyObject *t_GLONASSDate_get__gMST(t_GLONASSDate *self, void *data);
      static PyObject *t_GLONASSDate_get__intervalNumber(t_GLONASSDate *self, void *data);
      static PyObject *t_GLONASSDate_get__jD0(t_GLONASSDate *self, void *data);
      static PyObject *t_GLONASSDate_get__secInDay(t_GLONASSDate *self, void *data);
      static PyGetSetDef t_GLONASSDate__fields_[] = {
        DECLARE_GET_FIELD(t_GLONASSDate, date),
        DECLARE_GET_FIELD(t_GLONASSDate, dayNumber),
        DECLARE_GET_FIELD(t_GLONASSDate, gMST),
        DECLARE_GET_FIELD(t_GLONASSDate, intervalNumber),
        DECLARE_GET_FIELD(t_GLONASSDate, jD0),
        DECLARE_GET_FIELD(t_GLONASSDate, secInDay),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GLONASSDate__methods_[] = {
        DECLARE_METHOD(t_GLONASSDate, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GLONASSDate, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GLONASSDate, getDate, METH_NOARGS),
        DECLARE_METHOD(t_GLONASSDate, getDayNumber, METH_NOARGS),
        DECLARE_METHOD(t_GLONASSDate, getGMST, METH_NOARGS),
        DECLARE_METHOD(t_GLONASSDate, getIntervalNumber, METH_NOARGS),
        DECLARE_METHOD(t_GLONASSDate, getJD0, METH_NOARGS),
        DECLARE_METHOD(t_GLONASSDate, getSecInDay, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GLONASSDate)[] = {
        { Py_tp_methods, t_GLONASSDate__methods_ },
        { Py_tp_init, (void *) t_GLONASSDate_init_ },
        { Py_tp_getset, t_GLONASSDate__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GLONASSDate)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GLONASSDate, t_GLONASSDate, GLONASSDate);

      void t_GLONASSDate::install(PyObject *module)
      {
        installType(&PY_TYPE(GLONASSDate), &PY_TYPE_DEF(GLONASSDate), module, "GLONASSDate", 0);
      }

      void t_GLONASSDate::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSDate), "class_", make_descriptor(GLONASSDate::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSDate), "wrapfn_", make_descriptor(t_GLONASSDate::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSDate), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GLONASSDate_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GLONASSDate::initializeClass, 1)))
          return NULL;
        return t_GLONASSDate::wrap_Object(GLONASSDate(((t_GLONASSDate *) arg)->object.this$));
      }
      static PyObject *t_GLONASSDate_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GLONASSDate::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_GLONASSDate_init_(t_GLONASSDate *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            GLONASSDate object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              INT_CALL(object = GLONASSDate(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            GLONASSDate object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = GLONASSDate(a0, a1));
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
            GLONASSDate object((jobject) NULL);

            if (!parseArgs(args, "IID", &a0, &a1, &a2))
            {
              INT_CALL(object = GLONASSDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jint a1;
            jdouble a2;
            ::org::orekit::time::TimeScale a3((jobject) NULL);
            GLONASSDate object((jobject) NULL);

            if (!parseArgs(args, "IIDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = GLONASSDate(a0, a1, a2, a3));
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

      static PyObject *t_GLONASSDate_getDate(t_GLONASSDate *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_GLONASSDate_getDayNumber(t_GLONASSDate *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDayNumber());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GLONASSDate_getGMST(t_GLONASSDate *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getGMST());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GLONASSDate_getIntervalNumber(t_GLONASSDate *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIntervalNumber());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GLONASSDate_getJD0(t_GLONASSDate *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getJD0());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GLONASSDate_getSecInDay(t_GLONASSDate *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSecInDay());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GLONASSDate_get__date(t_GLONASSDate *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_GLONASSDate_get__dayNumber(t_GLONASSDate *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDayNumber());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GLONASSDate_get__gMST(t_GLONASSDate *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getGMST());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GLONASSDate_get__intervalNumber(t_GLONASSDate *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIntervalNumber());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GLONASSDate_get__jD0(t_GLONASSDate *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getJD0());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GLONASSDate_get__secInDay(t_GLONASSDate *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSecInDay());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/partitioning/BSPTreeVisitor.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/BSPTree$LeafMerger.h"
#include "org/hipparchus/geometry/partitioning/BSPTree$VanishingCutHandler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BSPTree::class$ = NULL;
        jmethodID *BSPTree::mids$ = NULL;
        bool BSPTree::live$ = false;

        jclass BSPTree::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BSPTree");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_009757f2c0fd9090] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;)V");
            mids$[mid_init$_ca658f887988cc98] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/partitioning/BSPTree;Ljava/lang/Object;)V");
            mids$[mid_copySelf_80c5968462f40d4e] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_getAttribute_e661fe3ba2fafb22] = env->getMethodID(cls, "getAttribute", "()Ljava/lang/Object;");
            mids$[mid_getCell_f1bb6a3a109dcba3] = env->getMethodID(cls, "getCell", "(Lorg/hipparchus/geometry/Point;D)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_getCloseCuts_48ab7d97da8be63c] = env->getMethodID(cls, "getCloseCuts", "(Lorg/hipparchus/geometry/Point;D)Ljava/util/List;");
            mids$[mid_getCut_0629297ff6ae927a] = env->getMethodID(cls, "getCut", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getMinus_80c5968462f40d4e] = env->getMethodID(cls, "getMinus", "()Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_getParent_80c5968462f40d4e] = env->getMethodID(cls, "getParent", "()Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_getPlus_80c5968462f40d4e] = env->getMethodID(cls, "getPlus", "()Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_insertCut_cb9274a363000a77] = env->getMethodID(cls, "insertCut", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
            mids$[mid_insertInTree_fbfc4449abd27745] = env->getMethodID(cls, "insertInTree", "(Lorg/hipparchus/geometry/partitioning/BSPTree;ZLorg/hipparchus/geometry/partitioning/BSPTree$VanishingCutHandler;)V");
            mids$[mid_merge_c231cd42a59a0e84] = env->getMethodID(cls, "merge", "(Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/partitioning/BSPTree$LeafMerger;)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_pruneAroundConvexCell_1638395f54ad96d6] = env->getMethodID(cls, "pruneAroundConvexCell", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_setAttribute_009757f2c0fd9090] = env->getMethodID(cls, "setAttribute", "(Ljava/lang/Object;)V");
            mids$[mid_split_481a2a5f24f43c3d] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_visit_c71a0d90adbebbd5] = env->getMethodID(cls, "visit", "(Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BSPTree::BSPTree() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        BSPTree::BSPTree(const ::java::lang::Object & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_009757f2c0fd9090, a0.this$)) {}

        BSPTree::BSPTree(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0, const BSPTree & a1, const BSPTree & a2, const ::java::lang::Object & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ca658f887988cc98, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        BSPTree BSPTree::copySelf() const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_copySelf_80c5968462f40d4e]));
        }

        ::java::lang::Object BSPTree::getAttribute() const
        {
          return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getAttribute_e661fe3ba2fafb22]));
        }

        BSPTree BSPTree::getCell(const ::org::hipparchus::geometry::Point & a0, jdouble a1) const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_getCell_f1bb6a3a109dcba3], a0.this$, a1));
        }

        ::java::util::List BSPTree::getCloseCuts(const ::org::hipparchus::geometry::Point & a0, jdouble a1) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCloseCuts_48ab7d97da8be63c], a0.this$, a1));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane BSPTree::getCut() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_getCut_0629297ff6ae927a]));
        }

        BSPTree BSPTree::getMinus() const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_getMinus_80c5968462f40d4e]));
        }

        BSPTree BSPTree::getParent() const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_getParent_80c5968462f40d4e]));
        }

        BSPTree BSPTree::getPlus() const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_getPlus_80c5968462f40d4e]));
        }

        jboolean BSPTree::insertCut(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_insertCut_cb9274a363000a77], a0.this$);
        }

        void BSPTree::insertInTree(const BSPTree & a0, jboolean a1, const ::org::hipparchus::geometry::partitioning::BSPTree$VanishingCutHandler & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_insertInTree_fbfc4449abd27745], a0.this$, a1, a2.this$);
        }

        BSPTree BSPTree::merge(const BSPTree & a0, const ::org::hipparchus::geometry::partitioning::BSPTree$LeafMerger & a1) const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_merge_c231cd42a59a0e84], a0.this$, a1.this$));
        }

        BSPTree BSPTree::pruneAroundConvexCell(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_pruneAroundConvexCell_1638395f54ad96d6], a0.this$, a1.this$, a2.this$));
        }

        void BSPTree::setAttribute(const ::java::lang::Object & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttribute_009757f2c0fd9090], a0.this$);
        }

        BSPTree BSPTree::split(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0) const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_split_481a2a5f24f43c3d], a0.this$));
        }

        void BSPTree::visit(const ::org::hipparchus::geometry::partitioning::BSPTreeVisitor & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_visit_c71a0d90adbebbd5], a0.this$);
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
        static PyObject *t_BSPTree_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree_of_(t_BSPTree *self, PyObject *args);
        static int t_BSPTree_init_(t_BSPTree *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BSPTree_copySelf(t_BSPTree *self);
        static PyObject *t_BSPTree_getAttribute(t_BSPTree *self);
        static PyObject *t_BSPTree_getCell(t_BSPTree *self, PyObject *args);
        static PyObject *t_BSPTree_getCloseCuts(t_BSPTree *self, PyObject *args);
        static PyObject *t_BSPTree_getCut(t_BSPTree *self);
        static PyObject *t_BSPTree_getMinus(t_BSPTree *self);
        static PyObject *t_BSPTree_getParent(t_BSPTree *self);
        static PyObject *t_BSPTree_getPlus(t_BSPTree *self);
        static PyObject *t_BSPTree_insertCut(t_BSPTree *self, PyObject *arg);
        static PyObject *t_BSPTree_insertInTree(t_BSPTree *self, PyObject *args);
        static PyObject *t_BSPTree_merge(t_BSPTree *self, PyObject *args);
        static PyObject *t_BSPTree_pruneAroundConvexCell(t_BSPTree *self, PyObject *args);
        static PyObject *t_BSPTree_setAttribute(t_BSPTree *self, PyObject *arg);
        static PyObject *t_BSPTree_split(t_BSPTree *self, PyObject *arg);
        static PyObject *t_BSPTree_visit(t_BSPTree *self, PyObject *arg);
        static PyObject *t_BSPTree_get__attribute(t_BSPTree *self, void *data);
        static int t_BSPTree_set__attribute(t_BSPTree *self, PyObject *arg, void *data);
        static PyObject *t_BSPTree_get__cut(t_BSPTree *self, void *data);
        static PyObject *t_BSPTree_get__minus(t_BSPTree *self, void *data);
        static PyObject *t_BSPTree_get__parent(t_BSPTree *self, void *data);
        static PyObject *t_BSPTree_get__plus(t_BSPTree *self, void *data);
        static PyObject *t_BSPTree_get__parameters_(t_BSPTree *self, void *data);
        static PyGetSetDef t_BSPTree__fields_[] = {
          DECLARE_GETSET_FIELD(t_BSPTree, attribute),
          DECLARE_GET_FIELD(t_BSPTree, cut),
          DECLARE_GET_FIELD(t_BSPTree, minus),
          DECLARE_GET_FIELD(t_BSPTree, parent),
          DECLARE_GET_FIELD(t_BSPTree, plus),
          DECLARE_GET_FIELD(t_BSPTree, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BSPTree__methods_[] = {
          DECLARE_METHOD(t_BSPTree, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree, of_, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, getAttribute, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, getCell, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, getCloseCuts, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, getCut, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, getMinus, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, getParent, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, getPlus, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, insertCut, METH_O),
          DECLARE_METHOD(t_BSPTree, insertInTree, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, merge, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, pruneAroundConvexCell, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, setAttribute, METH_O),
          DECLARE_METHOD(t_BSPTree, split, METH_O),
          DECLARE_METHOD(t_BSPTree, visit, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BSPTree)[] = {
          { Py_tp_methods, t_BSPTree__methods_ },
          { Py_tp_init, (void *) t_BSPTree_init_ },
          { Py_tp_getset, t_BSPTree__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BSPTree)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BSPTree, t_BSPTree, BSPTree);
        PyObject *t_BSPTree::wrap_Object(const BSPTree& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree *self = (t_BSPTree *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BSPTree::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree *self = (t_BSPTree *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BSPTree::install(PyObject *module)
        {
          installType(&PY_TYPE(BSPTree), &PY_TYPE_DEF(BSPTree), module, "BSPTree", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree), "VanishingCutHandler", make_descriptor(&PY_TYPE_DEF(BSPTree$VanishingCutHandler)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree), "LeafMerger", make_descriptor(&PY_TYPE_DEF(BSPTree$LeafMerger)));
        }

        void t_BSPTree::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree), "class_", make_descriptor(BSPTree::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree), "wrapfn_", make_descriptor(t_BSPTree::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BSPTree_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BSPTree::initializeClass, 1)))
            return NULL;
          return t_BSPTree::wrap_Object(BSPTree(((t_BSPTree *) arg)->object.this$));
        }
        static PyObject *t_BSPTree_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BSPTree::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BSPTree_of_(t_BSPTree *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BSPTree_init_(t_BSPTree *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              BSPTree object((jobject) NULL);

              INT_CALL(object = BSPTree());
              self->object = object;
              break;
            }
           case 1:
            {
              ::java::lang::Object a0((jobject) NULL);
              BSPTree object((jobject) NULL);

              if (!parseArgs(args, "o", &a0))
              {
                INT_CALL(object = BSPTree(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
              PyTypeObject **p0;
              BSPTree a1((jobject) NULL);
              PyTypeObject **p1;
              BSPTree a2((jobject) NULL);
              PyTypeObject **p2;
              ::java::lang::Object a3((jobject) NULL);
              BSPTree object((jobject) NULL);

              if (!parseArgs(args, "KKKo", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, BSPTree::initializeClass, BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_, &a1, &p1, t_BSPTree::parameters_, &a2, &p2, t_BSPTree::parameters_, &a3))
              {
                INT_CALL(object = BSPTree(a0, a1, a2, a3));
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

        static PyObject *t_BSPTree_copySelf(t_BSPTree *self)
        {
          BSPTree result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_BSPTree::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BSPTree_getAttribute(t_BSPTree *self)
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttribute());
          return ::java::lang::t_Object::wrap_Object(result);
        }

        static PyObject *t_BSPTree_getCell(t_BSPTree *self, PyObject *args)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          BSPTree result((jobject) NULL);

          if (!parseArgs(args, "KD", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getCell(a0, a1));
            return t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getCell", args);
          return NULL;
        }

        static PyObject *t_BSPTree_getCloseCuts(t_BSPTree *self, PyObject *args)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "KD", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getCloseCuts(a0, a1));
            return ::java::util::t_List::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getCloseCuts", args);
          return NULL;
        }

        static PyObject *t_BSPTree_getCut(t_BSPTree *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getCut());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BSPTree_getMinus(t_BSPTree *self)
        {
          BSPTree result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinus());
          return t_BSPTree::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BSPTree_getParent(t_BSPTree *self)
        {
          BSPTree result((jobject) NULL);
          OBJ_CALL(result = self->object.getParent());
          return t_BSPTree::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BSPTree_getPlus(t_BSPTree *self)
        {
          BSPTree result((jobject) NULL);
          OBJ_CALL(result = self->object.getPlus());
          return t_BSPTree::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BSPTree_insertCut(t_BSPTree *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.insertCut(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "insertCut", arg);
          return NULL;
        }

        static PyObject *t_BSPTree_insertInTree(t_BSPTree *self, PyObject *args)
        {
          BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean a1;
          ::org::hipparchus::geometry::partitioning::BSPTree$VanishingCutHandler a2((jobject) NULL);
          PyTypeObject **p2;

          if (!parseArgs(args, "KZK", BSPTree::initializeClass, ::org::hipparchus::geometry::partitioning::BSPTree$VanishingCutHandler::initializeClass, &a0, &p0, t_BSPTree::parameters_, &a1, &a2, &p2, ::org::hipparchus::geometry::partitioning::t_BSPTree$VanishingCutHandler::parameters_))
          {
            OBJ_CALL(self->object.insertInTree(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "insertInTree", args);
          return NULL;
        }

        static PyObject *t_BSPTree_merge(t_BSPTree *self, PyObject *args)
        {
          BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BSPTree$LeafMerger a1((jobject) NULL);
          PyTypeObject **p1;
          BSPTree result((jobject) NULL);

          if (!parseArgs(args, "KK", BSPTree::initializeClass, ::org::hipparchus::geometry::partitioning::BSPTree$LeafMerger::initializeClass, &a0, &p0, t_BSPTree::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_BSPTree$LeafMerger::parameters_))
          {
            OBJ_CALL(result = self->object.merge(a0, a1));
            return t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "merge", args);
          return NULL;
        }

        static PyObject *t_BSPTree_pruneAroundConvexCell(t_BSPTree *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          BSPTree result((jobject) NULL);

          if (!parseArgs(args, "ooo", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.pruneAroundConvexCell(a0, a1, a2));
            return t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "pruneAroundConvexCell", args);
          return NULL;
        }

        static PyObject *t_BSPTree_setAttribute(t_BSPTree *self, PyObject *arg)
        {
          ::java::lang::Object a0((jobject) NULL);

          if (!parseArg(arg, "o", &a0))
          {
            OBJ_CALL(self->object.setAttribute(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAttribute", arg);
          return NULL;
        }

        static PyObject *t_BSPTree_split(t_BSPTree *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          BSPTree result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.split(a0));
            return t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "split", arg);
          return NULL;
        }

        static PyObject *t_BSPTree_visit(t_BSPTree *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTreeVisitor a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTreeVisitor::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTreeVisitor::parameters_))
          {
            OBJ_CALL(self->object.visit(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "visit", arg);
          return NULL;
        }
        static PyObject *t_BSPTree_get__parameters_(t_BSPTree *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BSPTree_get__attribute(t_BSPTree *self, void *data)
        {
          ::java::lang::Object value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttribute());
          return ::java::lang::t_Object::wrap_Object(value);
        }
        static int t_BSPTree_set__attribute(t_BSPTree *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::Object value((jobject) NULL);
            if (!parseArg(arg, "o", &value))
            {
              INT_CALL(self->object.setAttribute(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "attribute", arg);
          return -1;
        }

        static PyObject *t_BSPTree_get__cut(t_BSPTree *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getCut());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(value);
        }

        static PyObject *t_BSPTree_get__minus(t_BSPTree *self, void *data)
        {
          BSPTree value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinus());
          return t_BSPTree::wrap_Object(value);
        }

        static PyObject *t_BSPTree_get__parent(t_BSPTree *self, void *data)
        {
          BSPTree value((jobject) NULL);
          OBJ_CALL(value = self->object.getParent());
          return t_BSPTree::wrap_Object(value);
        }

        static PyObject *t_BSPTree_get__plus(t_BSPTree *self, void *data)
        {
          BSPTree value((jobject) NULL);
          OBJ_CALL(value = self->object.getPlus());
          return t_BSPTree::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/CholeskyDecomposer.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
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
          mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_decompose_3f89101650640015] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CholeskyDecomposer::CholeskyDecomposer(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

      ::org::hipparchus::linear::DecompositionSolver CholeskyDecomposer::decompose(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_3f89101650640015], a0.this$));
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
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/text/NumberFormat.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/util/Blendable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {

      ::java::lang::Class *Vector::class$ = NULL;
      jmethodID *Vector::mids$ = NULL;
      bool Vector::live$ = false;

      jclass Vector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/geometry/Vector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_f7a4efaba53779c7] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_add_6b34b40fdcec0c86] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_blendArithmeticallyWith_5c22e92d5e6381f9] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/hipparchus/geometry/Vector;D)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_distance1_b540ea36818b5810] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/Vector;)D");
          mids$[mid_distanceInf_b540ea36818b5810] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/Vector;)D");
          mids$[mid_distanceSq_b540ea36818b5810] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/Vector;)D");
          mids$[mid_dotProduct_b540ea36818b5810] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/Vector;)D");
          mids$[mid_getNorm_557b8123390d8d0c] = env->getMethodID(cls, "getNorm", "()D");
          mids$[mid_getNorm1_557b8123390d8d0c] = env->getMethodID(cls, "getNorm1", "()D");
          mids$[mid_getNormInf_557b8123390d8d0c] = env->getMethodID(cls, "getNormInf", "()D");
          mids$[mid_getNormSq_557b8123390d8d0c] = env->getMethodID(cls, "getNormSq", "()D");
          mids$[mid_getZero_4a9532ebbfbd85bb] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/geometry/Vector;");
          mids$[mid_isInfinite_89b302893bdbe1f1] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_negate_4a9532ebbfbd85bb] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/Vector;");
          mids$[mid_normalize_4a9532ebbfbd85bb] = env->getMethodID(cls, "normalize", "()Lorg/hipparchus/geometry/Vector;");
          mids$[mid_scalarMultiply_ec102594070df17d] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_subtract_f7a4efaba53779c7] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_subtract_6b34b40fdcec0c86] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_toString_8d9667e91d8ffa97] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Vector Vector::add(const Vector & a0) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_add_f7a4efaba53779c7], a0.this$));
      }

      Vector Vector::add(jdouble a0, const Vector & a1) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_add_6b34b40fdcec0c86], a0, a1.this$));
      }

      Vector Vector::blendArithmeticallyWith(const Vector & a0, jdouble a1) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_5c22e92d5e6381f9], a0.this$, a1));
      }

      jdouble Vector::distance1(const Vector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_distance1_b540ea36818b5810], a0.this$);
      }

      jdouble Vector::distanceInf(const Vector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_distanceInf_b540ea36818b5810], a0.this$);
      }

      jdouble Vector::distanceSq(const Vector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_distanceSq_b540ea36818b5810], a0.this$);
      }

      jdouble Vector::dotProduct(const Vector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_dotProduct_b540ea36818b5810], a0.this$);
      }

      jdouble Vector::getNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm_557b8123390d8d0c]);
      }

      jdouble Vector::getNorm1() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm1_557b8123390d8d0c]);
      }

      jdouble Vector::getNormInf() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormInf_557b8123390d8d0c]);
      }

      jdouble Vector::getNormSq() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormSq_557b8123390d8d0c]);
      }

      Vector Vector::getZero() const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_getZero_4a9532ebbfbd85bb]));
      }

      jboolean Vector::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_89b302893bdbe1f1]);
      }

      Vector Vector::negate() const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_negate_4a9532ebbfbd85bb]));
      }

      Vector Vector::normalize() const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_normalize_4a9532ebbfbd85bb]));
      }

      Vector Vector::scalarMultiply(jdouble a0) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_scalarMultiply_ec102594070df17d], a0));
      }

      Vector Vector::subtract(const Vector & a0) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_subtract_f7a4efaba53779c7], a0.this$));
      }

      Vector Vector::subtract(jdouble a0, const Vector & a1) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_subtract_6b34b40fdcec0c86], a0, a1.this$));
      }

      ::java::lang::String Vector::toString(const ::java::text::NumberFormat & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_8d9667e91d8ffa97], a0.this$));
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
      static PyObject *t_Vector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Vector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Vector_of_(t_Vector *self, PyObject *args);
      static PyObject *t_Vector_add(t_Vector *self, PyObject *args);
      static PyObject *t_Vector_blendArithmeticallyWith(t_Vector *self, PyObject *args);
      static PyObject *t_Vector_distance1(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_distanceInf(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_distanceSq(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_dotProduct(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_getNorm(t_Vector *self);
      static PyObject *t_Vector_getNorm1(t_Vector *self);
      static PyObject *t_Vector_getNormInf(t_Vector *self);
      static PyObject *t_Vector_getNormSq(t_Vector *self);
      static PyObject *t_Vector_getZero(t_Vector *self);
      static PyObject *t_Vector_isInfinite(t_Vector *self);
      static PyObject *t_Vector_negate(t_Vector *self);
      static PyObject *t_Vector_normalize(t_Vector *self);
      static PyObject *t_Vector_scalarMultiply(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_subtract(t_Vector *self, PyObject *args);
      static PyObject *t_Vector_toString(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_get__infinite(t_Vector *self, void *data);
      static PyObject *t_Vector_get__norm(t_Vector *self, void *data);
      static PyObject *t_Vector_get__norm1(t_Vector *self, void *data);
      static PyObject *t_Vector_get__normInf(t_Vector *self, void *data);
      static PyObject *t_Vector_get__normSq(t_Vector *self, void *data);
      static PyObject *t_Vector_get__zero(t_Vector *self, void *data);
      static PyObject *t_Vector_get__parameters_(t_Vector *self, void *data);
      static PyGetSetDef t_Vector__fields_[] = {
        DECLARE_GET_FIELD(t_Vector, infinite),
        DECLARE_GET_FIELD(t_Vector, norm),
        DECLARE_GET_FIELD(t_Vector, norm1),
        DECLARE_GET_FIELD(t_Vector, normInf),
        DECLARE_GET_FIELD(t_Vector, normSq),
        DECLARE_GET_FIELD(t_Vector, zero),
        DECLARE_GET_FIELD(t_Vector, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Vector__methods_[] = {
        DECLARE_METHOD(t_Vector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Vector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Vector, of_, METH_VARARGS),
        DECLARE_METHOD(t_Vector, add, METH_VARARGS),
        DECLARE_METHOD(t_Vector, blendArithmeticallyWith, METH_VARARGS),
        DECLARE_METHOD(t_Vector, distance1, METH_O),
        DECLARE_METHOD(t_Vector, distanceInf, METH_O),
        DECLARE_METHOD(t_Vector, distanceSq, METH_O),
        DECLARE_METHOD(t_Vector, dotProduct, METH_O),
        DECLARE_METHOD(t_Vector, getNorm, METH_NOARGS),
        DECLARE_METHOD(t_Vector, getNorm1, METH_NOARGS),
        DECLARE_METHOD(t_Vector, getNormInf, METH_NOARGS),
        DECLARE_METHOD(t_Vector, getNormSq, METH_NOARGS),
        DECLARE_METHOD(t_Vector, getZero, METH_NOARGS),
        DECLARE_METHOD(t_Vector, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_Vector, negate, METH_NOARGS),
        DECLARE_METHOD(t_Vector, normalize, METH_NOARGS),
        DECLARE_METHOD(t_Vector, scalarMultiply, METH_O),
        DECLARE_METHOD(t_Vector, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Vector, toString, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Vector)[] = {
        { Py_tp_methods, t_Vector__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Vector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Vector)[] = {
        &PY_TYPE_DEF(::org::hipparchus::geometry::Point),
        NULL
      };

      DEFINE_TYPE(Vector, t_Vector, Vector);
      PyObject *t_Vector::wrap_Object(const Vector& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_Vector::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Vector *self = (t_Vector *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_Vector::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_Vector::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Vector *self = (t_Vector *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_Vector::install(PyObject *module)
      {
        installType(&PY_TYPE(Vector), &PY_TYPE_DEF(Vector), module, "Vector", 0);
      }

      void t_Vector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Vector), "class_", make_descriptor(Vector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Vector), "wrapfn_", make_descriptor(t_Vector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Vector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Vector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Vector::initializeClass, 1)))
          return NULL;
        return t_Vector::wrap_Object(Vector(((t_Vector *) arg)->object.this$));
      }
      static PyObject *t_Vector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Vector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Vector_of_(t_Vector *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Vector_add(t_Vector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Vector a0((jobject) NULL);
            PyTypeObject **p0;
            Vector result((jobject) NULL);

            if (!parseArgs(args, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            Vector a1((jobject) NULL);
            PyTypeObject **p1;
            Vector result((jobject) NULL);

            if (!parseArgs(args, "DK", Vector::initializeClass, &a0, &a1, &p1, t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0, a1));
              return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Vector_blendArithmeticallyWith(t_Vector *self, PyObject *args)
      {
        Vector a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        Vector result((jobject) NULL);

        if (!parseArgs(args, "KD", Vector::initializeClass, &a0, &p0, t_Vector::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }

      static PyObject *t_Vector_distance1(t_Vector *self, PyObject *arg)
      {
        Vector a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
        {
          OBJ_CALL(result = self->object.distance1(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "distance1", arg);
        return NULL;
      }

      static PyObject *t_Vector_distanceInf(t_Vector *self, PyObject *arg)
      {
        Vector a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
        {
          OBJ_CALL(result = self->object.distanceInf(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "distanceInf", arg);
        return NULL;
      }

      static PyObject *t_Vector_distanceSq(t_Vector *self, PyObject *arg)
      {
        Vector a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
        {
          OBJ_CALL(result = self->object.distanceSq(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "distanceSq", arg);
        return NULL;
      }

      static PyObject *t_Vector_dotProduct(t_Vector *self, PyObject *arg)
      {
        Vector a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
        return NULL;
      }

      static PyObject *t_Vector_getNorm(t_Vector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Vector_getNorm1(t_Vector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm1());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Vector_getNormInf(t_Vector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNormInf());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Vector_getNormSq(t_Vector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNormSq());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Vector_getZero(t_Vector *self)
      {
        Vector result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
      }

      static PyObject *t_Vector_isInfinite(t_Vector *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Vector_negate(t_Vector *self)
      {
        Vector result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
      }

      static PyObject *t_Vector_normalize(t_Vector *self)
      {
        Vector result((jobject) NULL);
        OBJ_CALL(result = self->object.normalize());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
      }

      static PyObject *t_Vector_scalarMultiply(t_Vector *self, PyObject *arg)
      {
        jdouble a0;
        Vector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
        return NULL;
      }

      static PyObject *t_Vector_subtract(t_Vector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Vector a0((jobject) NULL);
            PyTypeObject **p0;
            Vector result((jobject) NULL);

            if (!parseArgs(args, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            Vector a1((jobject) NULL);
            PyTypeObject **p1;
            Vector result((jobject) NULL);

            if (!parseArgs(args, "DK", Vector::initializeClass, &a0, &a1, &p1, t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0, a1));
              return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Vector_toString(t_Vector *self, PyObject *arg)
      {
        ::java::text::NumberFormat a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::text::NumberFormat::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toString", arg);
        return NULL;
      }
      static PyObject *t_Vector_get__parameters_(t_Vector *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Vector_get__infinite(t_Vector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Vector_get__norm(t_Vector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Vector_get__norm1(t_Vector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm1());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Vector_get__normInf(t_Vector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormInf());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Vector_get__normSq(t_Vector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormSq());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Vector_get__zero(t_Vector *self, void *data)
      {
        Vector value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return t_Vector::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/rank/RandomPercentile.h"
#include "org/hipparchus/stat/descriptive/rank/RandomPercentile.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/util/Collection.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *RandomPercentile::class$ = NULL;
          jmethodID *RandomPercentile::mids$ = NULL;
          bool RandomPercentile::live$ = false;
          jdouble RandomPercentile::DEFAULT_EPSILON = (jdouble) 0;

          jclass RandomPercentile::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/RandomPercentile");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_19e7f6e95a4dc08e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
              mids$[mid_init$_fb29db45daae1732] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/random/RandomGenerator;)V");
              mids$[mid_aggregate_9cb79a90fac63186] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/rank/RandomPercentile;)V");
              mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_29eb99ad640257e5] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/RandomPercentile;");
              mids$[mid_evaluate_1bc40469b56f2c3c] = env->getMethodID(cls, "evaluate", "(D[D)D");
              mids$[mid_evaluate_9eeeb1ae977f525d] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_a6ce01f236d2d451] = env->getMethodID(cls, "evaluate", "(D[DII)D");
              mids$[mid_getAggregateN_1ab1799bb5ae5130] = env->getMethodID(cls, "getAggregateN", "(Ljava/util/Collection;)D");
              mids$[mid_getAggregateQuantileRank_8b8f547a5368aa42] = env->getMethodID(cls, "getAggregateQuantileRank", "(DLjava/util/Collection;)D");
              mids$[mid_getAggregateRank_8b8f547a5368aa42] = env->getMethodID(cls, "getAggregateRank", "(DLjava/util/Collection;)D");
              mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getQuantileRank_7e960cd6eee376d8] = env->getMethodID(cls, "getQuantileRank", "(D)D");
              mids$[mid_getRank_7e960cd6eee376d8] = env->getMethodID(cls, "getRank", "(D)D");
              mids$[mid_getResult_557b8123390d8d0c] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_getResult_7e960cd6eee376d8] = env->getMethodID(cls, "getResult", "(D)D");
              mids$[mid_increment_10f281d777284cea] = env->getMethodID(cls, "increment", "(D)V");
              mids$[mid_maxValuesRetained_9d550dd06216a860] = env->getStaticMethodID(cls, "maxValuesRetained", "(D)J");
              mids$[mid_reduce_8b8f547a5368aa42] = env->getMethodID(cls, "reduce", "(DLjava/util/Collection;)D");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_EPSILON = env->getStaticDoubleField(cls, "DEFAULT_EPSILON");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RandomPercentile::RandomPercentile() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          RandomPercentile::RandomPercentile(jdouble a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

          RandomPercentile::RandomPercentile(const ::org::hipparchus::random::RandomGenerator & a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_19e7f6e95a4dc08e, a0.this$)) {}

          RandomPercentile::RandomPercentile(jdouble a0, const ::org::hipparchus::random::RandomGenerator & a1) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_fb29db45daae1732, a0, a1.this$)) {}

          void RandomPercentile::aggregate(const RandomPercentile & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_9cb79a90fac63186], a0.this$);
          }

          void RandomPercentile::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
          }

          RandomPercentile RandomPercentile::copy() const
          {
            return RandomPercentile(env->callObjectMethod(this$, mids$[mid_copy_29eb99ad640257e5]));
          }

          jdouble RandomPercentile::evaluate(jdouble a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_1bc40469b56f2c3c], a0, a1.this$);
          }

          jdouble RandomPercentile::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_9eeeb1ae977f525d], a0.this$, a1, a2);
          }

          jdouble RandomPercentile::evaluate(jdouble a0, const JArray< jdouble > & a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_a6ce01f236d2d451], a0, a1.this$, a2, a3);
          }

          jdouble RandomPercentile::getAggregateN(const ::java::util::Collection & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAggregateN_1ab1799bb5ae5130], a0.this$);
          }

          jdouble RandomPercentile::getAggregateQuantileRank(jdouble a0, const ::java::util::Collection & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAggregateQuantileRank_8b8f547a5368aa42], a0, a1.this$);
          }

          jdouble RandomPercentile::getAggregateRank(jdouble a0, const ::java::util::Collection & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAggregateRank_8b8f547a5368aa42], a0, a1.this$);
          }

          jlong RandomPercentile::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
          }

          jdouble RandomPercentile::getQuantileRank(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQuantileRank_7e960cd6eee376d8], a0);
          }

          jdouble RandomPercentile::getRank(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRank_7e960cd6eee376d8], a0);
          }

          jdouble RandomPercentile::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_557b8123390d8d0c]);
          }

          jdouble RandomPercentile::getResult(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_7e960cd6eee376d8], a0);
          }

          void RandomPercentile::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_10f281d777284cea], a0);
          }

          jlong RandomPercentile::maxValuesRetained(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticLongMethod(cls, mids$[mid_maxValuesRetained_9d550dd06216a860], a0);
          }

          jdouble RandomPercentile::reduce(jdouble a0, const ::java::util::Collection & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_reduce_8b8f547a5368aa42], a0, a1.this$);
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
        namespace rank {
          static PyObject *t_RandomPercentile_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RandomPercentile_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RandomPercentile_init_(t_RandomPercentile *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RandomPercentile_aggregate(t_RandomPercentile *self, PyObject *arg);
          static PyObject *t_RandomPercentile_clear(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_copy(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_evaluate(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_getAggregateN(t_RandomPercentile *self, PyObject *arg);
          static PyObject *t_RandomPercentile_getAggregateQuantileRank(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_getAggregateRank(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_getN(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_getQuantileRank(t_RandomPercentile *self, PyObject *arg);
          static PyObject *t_RandomPercentile_getRank(t_RandomPercentile *self, PyObject *arg);
          static PyObject *t_RandomPercentile_getResult(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_increment(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_maxValuesRetained(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RandomPercentile_reduce(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_get__n(t_RandomPercentile *self, void *data);
          static PyObject *t_RandomPercentile_get__result(t_RandomPercentile *self, void *data);
          static PyGetSetDef t_RandomPercentile__fields_[] = {
            DECLARE_GET_FIELD(t_RandomPercentile, n),
            DECLARE_GET_FIELD(t_RandomPercentile, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RandomPercentile__methods_[] = {
            DECLARE_METHOD(t_RandomPercentile, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RandomPercentile, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RandomPercentile, aggregate, METH_O),
            DECLARE_METHOD(t_RandomPercentile, clear, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, copy, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, getAggregateN, METH_O),
            DECLARE_METHOD(t_RandomPercentile, getAggregateQuantileRank, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, getAggregateRank, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, getN, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, getQuantileRank, METH_O),
            DECLARE_METHOD(t_RandomPercentile, getRank, METH_O),
            DECLARE_METHOD(t_RandomPercentile, getResult, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, increment, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, maxValuesRetained, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RandomPercentile, reduce, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RandomPercentile)[] = {
            { Py_tp_methods, t_RandomPercentile__methods_ },
            { Py_tp_init, (void *) t_RandomPercentile_init_ },
            { Py_tp_getset, t_RandomPercentile__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RandomPercentile)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(RandomPercentile, t_RandomPercentile, RandomPercentile);

          void t_RandomPercentile::install(PyObject *module)
          {
            installType(&PY_TYPE(RandomPercentile), &PY_TYPE_DEF(RandomPercentile), module, "RandomPercentile", 0);
          }

          void t_RandomPercentile::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RandomPercentile), "class_", make_descriptor(RandomPercentile::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RandomPercentile), "wrapfn_", make_descriptor(t_RandomPercentile::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RandomPercentile), "boxfn_", make_descriptor(boxObject));
            env->getClass(RandomPercentile::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RandomPercentile), "DEFAULT_EPSILON", make_descriptor(RandomPercentile::DEFAULT_EPSILON));
          }

          static PyObject *t_RandomPercentile_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RandomPercentile::initializeClass, 1)))
              return NULL;
            return t_RandomPercentile::wrap_Object(RandomPercentile(((t_RandomPercentile *) arg)->object.this$));
          }
          static PyObject *t_RandomPercentile_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RandomPercentile::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RandomPercentile_init_(t_RandomPercentile *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                RandomPercentile object((jobject) NULL);

                INT_CALL(object = RandomPercentile());
                self->object = object;
                break;
              }
             case 1:
              {
                jdouble a0;
                RandomPercentile object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = RandomPercentile(a0));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
                RandomPercentile object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
                {
                  INT_CALL(object = RandomPercentile(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
                RandomPercentile object((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = RandomPercentile(a0, a1));
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

          static PyObject *t_RandomPercentile_aggregate(t_RandomPercentile *self, PyObject *arg)
          {
            RandomPercentile a0((jobject) NULL);

            if (!parseArg(arg, "k", RandomPercentile::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_RandomPercentile_clear(t_RandomPercentile *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_RandomPercentile_copy(t_RandomPercentile *self, PyObject *args)
          {
            RandomPercentile result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_RandomPercentile::wrap_Object(result);
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_RandomPercentile_evaluate(t_RandomPercentile *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                jdouble a0;
                JArray< jdouble > a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "D[D", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
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
                jdouble a0;
                JArray< jdouble > a1((jobject) NULL);
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "D[DII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_RandomPercentile_getAggregateN(t_RandomPercentile *self, PyObject *arg)
          {
            ::java::util::Collection a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.getAggregateN(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAggregateN", arg);
            return NULL;
          }

          static PyObject *t_RandomPercentile_getAggregateQuantileRank(t_RandomPercentile *self, PyObject *args)
          {
            jdouble a0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble result;

            if (!parseArgs(args, "DK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.getAggregateQuantileRank(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAggregateQuantileRank", args);
            return NULL;
          }

          static PyObject *t_RandomPercentile_getAggregateRank(t_RandomPercentile *self, PyObject *args)
          {
            jdouble a0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble result;

            if (!parseArgs(args, "DK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.getAggregateRank(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAggregateRank", args);
            return NULL;
          }

          static PyObject *t_RandomPercentile_getN(t_RandomPercentile *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_RandomPercentile_getQuantileRank(t_RandomPercentile *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.getQuantileRank(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getQuantileRank", arg);
            return NULL;
          }

          static PyObject *t_RandomPercentile_getRank(t_RandomPercentile *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.getRank(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getRank", arg);
            return NULL;
          }

          static PyObject *t_RandomPercentile_getResult(t_RandomPercentile *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getResult());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.getResult(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_RandomPercentile_increment(t_RandomPercentile *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_RandomPercentile_maxValuesRetained(PyTypeObject *type, PyObject *arg)
          {
            jdouble a0;
            jlong result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::descriptive::rank::RandomPercentile::maxValuesRetained(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            PyErr_SetArgsError(type, "maxValuesRetained", arg);
            return NULL;
          }

          static PyObject *t_RandomPercentile_reduce(t_RandomPercentile *self, PyObject *args)
          {
            jdouble a0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble result;

            if (!parseArgs(args, "DK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.reduce(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "reduce", args);
            return NULL;
          }

          static PyObject *t_RandomPercentile_get__n(t_RandomPercentile *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_RandomPercentile_get__result(t_RandomPercentile *self, void *data)
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
#include "org/hipparchus/analysis/CalculusFieldUnivariateVectorFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldUnivariateVectorFunction::class$ = NULL;
      jmethodID *CalculusFieldUnivariateVectorFunction::mids$ = NULL;
      bool CalculusFieldUnivariateVectorFunction::live$ = false;

      jclass CalculusFieldUnivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldUnivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_0baeeb97b799c59f] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > CalculusFieldUnivariateVectorFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_0baeeb97b799c59f], a0.this$));
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
      static PyObject *t_CalculusFieldUnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateVectorFunction_of_(t_CalculusFieldUnivariateVectorFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldUnivariateVectorFunction_value(t_CalculusFieldUnivariateVectorFunction *self, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateVectorFunction_get__parameters_(t_CalculusFieldUnivariateVectorFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldUnivariateVectorFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldUnivariateVectorFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldUnivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldUnivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldUnivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldUnivariateVectorFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldUnivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldUnivariateVectorFunction)[] = {
        { Py_tp_methods, t_CalculusFieldUnivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldUnivariateVectorFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldUnivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldUnivariateVectorFunction, t_CalculusFieldUnivariateVectorFunction, CalculusFieldUnivariateVectorFunction);
      PyObject *t_CalculusFieldUnivariateVectorFunction::wrap_Object(const CalculusFieldUnivariateVectorFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldUnivariateVectorFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldUnivariateVectorFunction *self = (t_CalculusFieldUnivariateVectorFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldUnivariateVectorFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldUnivariateVectorFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldUnivariateVectorFunction *self = (t_CalculusFieldUnivariateVectorFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldUnivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldUnivariateVectorFunction), &PY_TYPE_DEF(CalculusFieldUnivariateVectorFunction), module, "CalculusFieldUnivariateVectorFunction", 0);
      }

      void t_CalculusFieldUnivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateVectorFunction), "class_", make_descriptor(CalculusFieldUnivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateVectorFunction), "wrapfn_", make_descriptor(t_CalculusFieldUnivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldUnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldUnivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldUnivariateVectorFunction::wrap_Object(CalculusFieldUnivariateVectorFunction(((t_CalculusFieldUnivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldUnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldUnivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldUnivariateVectorFunction_of_(t_CalculusFieldUnivariateVectorFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldUnivariateVectorFunction_value(t_CalculusFieldUnivariateVectorFunction *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
      static PyObject *t_CalculusFieldUnivariateVectorFunction_get__parameters_(t_CalculusFieldUnivariateVectorFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmParser.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeDeterminationKey::class$ = NULL;
              jmethodID *AttitudeDeterminationKey::mids$ = NULL;
              bool AttitudeDeterminationKey::live$ = false;
              AttitudeDeterminationKey *AttitudeDeterminationKey::AD_ID = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::AD_METHOD = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::AD_PREV_ID = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::ATTITUDE_SOURCE = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::ATTITUDE_STATES = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::COMMENT = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::COV_TYPE = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::EULER_ROT_SEQ = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::NUMBER_STATES = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::RATE_PROCESS_NOISE_STDDEV = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::RATE_STATES = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::REF_FRAME_A = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::REF_FRAME_B = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::SENSOR = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::SIGMA_U = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::SIGMA_V = NULL;

              jclass AttitudeDeterminationKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_e4d8b3167bf5005a] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/ndm/adm/acm/AcmParser;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination;)Z");
                  mids$[mid_valueOf_6a3a78fd0ab9605d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;");
                  mids$[mid_values_03fcc68f489b28a6] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  AD_ID = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "AD_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  AD_METHOD = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "AD_METHOD", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  AD_PREV_ID = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "AD_PREV_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  ATTITUDE_SOURCE = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "ATTITUDE_SOURCE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  ATTITUDE_STATES = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "ATTITUDE_STATES", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  COMMENT = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  COV_TYPE = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "COV_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  EULER_ROT_SEQ = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "EULER_ROT_SEQ", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  NUMBER_STATES = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "NUMBER_STATES", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  RATE_PROCESS_NOISE_STDDEV = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "RATE_PROCESS_NOISE_STDDEV", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  RATE_STATES = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "RATE_STATES", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  REF_FRAME_A = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  REF_FRAME_B = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  SENSOR = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "SENSOR", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  SIGMA_U = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "SIGMA_U", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  SIGMA_V = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "SIGMA_V", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudeDeterminationKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser & a1, const ::org::orekit::files::ccsds::utils::ContextBinding & a2, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination & a3) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_e4d8b3167bf5005a], a0.this$, a1.this$, a2.this$, a3.this$);
              }

              AttitudeDeterminationKey AttitudeDeterminationKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeDeterminationKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6a3a78fd0ab9605d], a0.this$));
              }

              JArray< AttitudeDeterminationKey > AttitudeDeterminationKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeDeterminationKey >(env->callStaticObjectMethod(cls, mids$[mid_values_03fcc68f489b28a6]));
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
              static PyObject *t_AttitudeDeterminationKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDeterminationKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDeterminationKey_of_(t_AttitudeDeterminationKey *self, PyObject *args);
              static PyObject *t_AttitudeDeterminationKey_process(t_AttitudeDeterminationKey *self, PyObject *args);
              static PyObject *t_AttitudeDeterminationKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeDeterminationKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeDeterminationKey_get__parameters_(t_AttitudeDeterminationKey *self, void *data);
              static PyGetSetDef t_AttitudeDeterminationKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeDeterminationKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeDeterminationKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeDeterminationKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeDeterminationKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeDeterminationKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeDeterminationKey)[] = {
                { Py_tp_methods, t_AttitudeDeterminationKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeDeterminationKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeDeterminationKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeDeterminationKey, t_AttitudeDeterminationKey, AttitudeDeterminationKey);
              PyObject *t_AttitudeDeterminationKey::wrap_Object(const AttitudeDeterminationKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeDeterminationKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeDeterminationKey *self = (t_AttitudeDeterminationKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeDeterminationKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeDeterminationKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeDeterminationKey *self = (t_AttitudeDeterminationKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeDeterminationKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeDeterminationKey), &PY_TYPE_DEF(AttitudeDeterminationKey), module, "AttitudeDeterminationKey", 0);
              }

              void t_AttitudeDeterminationKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "class_", make_descriptor(AttitudeDeterminationKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "wrapfn_", make_descriptor(t_AttitudeDeterminationKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeDeterminationKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "AD_ID", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::AD_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "AD_METHOD", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::AD_METHOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "AD_PREV_ID", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::AD_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "ATTITUDE_SOURCE", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::ATTITUDE_SOURCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "ATTITUDE_STATES", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::ATTITUDE_STATES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "COMMENT", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "COV_TYPE", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::COV_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "EULER_ROT_SEQ", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::EULER_ROT_SEQ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "NUMBER_STATES", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::NUMBER_STATES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "RATE_PROCESS_NOISE_STDDEV", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::RATE_PROCESS_NOISE_STDDEV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "RATE_STATES", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::RATE_STATES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "REF_FRAME_A", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "REF_FRAME_B", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::REF_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "SENSOR", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::SENSOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "SIGMA_U", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::SIGMA_U)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "SIGMA_V", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::SIGMA_V)));
              }

              static PyObject *t_AttitudeDeterminationKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeDeterminationKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeDeterminationKey::wrap_Object(AttitudeDeterminationKey(((t_AttitudeDeterminationKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeDeterminationKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeDeterminationKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeDeterminationKey_of_(t_AttitudeDeterminationKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeDeterminationKey_process(t_AttitudeDeterminationKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::files::ccsds::utils::ContextBinding a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination a3((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kKkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmParser::parameters_, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2, a3));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudeDeterminationKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeDeterminationKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationKey::valueOf(a0));
                  return t_AttitudeDeterminationKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeDeterminationKey_values(PyTypeObject *type)
              {
                JArray< AttitudeDeterminationKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeDeterminationKey::wrap_jobject);
              }
              static PyObject *t_AttitudeDeterminationKey_get__parameters_(t_AttitudeDeterminationKey *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *IntegerLeastSquareSolution::class$ = NULL;
          jmethodID *IntegerLeastSquareSolution::mids$ = NULL;
          bool IntegerLeastSquareSolution::live$ = false;

          jclass IntegerLeastSquareSolution::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c71cb41dee20c1a0] = env->getMethodID(cls, "<init>", "([JD)V");
              mids$[mid_getSolution_0a2c3435f5c6a530] = env->getMethodID(cls, "getSolution", "()[J");
              mids$[mid_getSquaredDistance_557b8123390d8d0c] = env->getMethodID(cls, "getSquaredDistance", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IntegerLeastSquareSolution::IntegerLeastSquareSolution(const JArray< jlong > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c71cb41dee20c1a0, a0.this$, a1)) {}

          JArray< jlong > IntegerLeastSquareSolution::getSolution() const
          {
            return JArray< jlong >(env->callObjectMethod(this$, mids$[mid_getSolution_0a2c3435f5c6a530]));
          }

          jdouble IntegerLeastSquareSolution::getSquaredDistance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSquaredDistance_557b8123390d8d0c]);
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
          static PyObject *t_IntegerLeastSquareSolution_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntegerLeastSquareSolution_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IntegerLeastSquareSolution_init_(t_IntegerLeastSquareSolution *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IntegerLeastSquareSolution_getSolution(t_IntegerLeastSquareSolution *self);
          static PyObject *t_IntegerLeastSquareSolution_getSquaredDistance(t_IntegerLeastSquareSolution *self);
          static PyObject *t_IntegerLeastSquareSolution_get__solution(t_IntegerLeastSquareSolution *self, void *data);
          static PyObject *t_IntegerLeastSquareSolution_get__squaredDistance(t_IntegerLeastSquareSolution *self, void *data);
          static PyGetSetDef t_IntegerLeastSquareSolution__fields_[] = {
            DECLARE_GET_FIELD(t_IntegerLeastSquareSolution, solution),
            DECLARE_GET_FIELD(t_IntegerLeastSquareSolution, squaredDistance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IntegerLeastSquareSolution__methods_[] = {
            DECLARE_METHOD(t_IntegerLeastSquareSolution, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareSolution, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareSolution, getSolution, METH_NOARGS),
            DECLARE_METHOD(t_IntegerLeastSquareSolution, getSquaredDistance, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntegerLeastSquareSolution)[] = {
            { Py_tp_methods, t_IntegerLeastSquareSolution__methods_ },
            { Py_tp_init, (void *) t_IntegerLeastSquareSolution_init_ },
            { Py_tp_getset, t_IntegerLeastSquareSolution__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntegerLeastSquareSolution)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(IntegerLeastSquareSolution, t_IntegerLeastSquareSolution, IntegerLeastSquareSolution);

          void t_IntegerLeastSquareSolution::install(PyObject *module)
          {
            installType(&PY_TYPE(IntegerLeastSquareSolution), &PY_TYPE_DEF(IntegerLeastSquareSolution), module, "IntegerLeastSquareSolution", 0);
          }

          void t_IntegerLeastSquareSolution::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolution), "class_", make_descriptor(IntegerLeastSquareSolution::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolution), "wrapfn_", make_descriptor(t_IntegerLeastSquareSolution::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolution), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntegerLeastSquareSolution_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntegerLeastSquareSolution::initializeClass, 1)))
              return NULL;
            return t_IntegerLeastSquareSolution::wrap_Object(IntegerLeastSquareSolution(((t_IntegerLeastSquareSolution *) arg)->object.this$));
          }
          static PyObject *t_IntegerLeastSquareSolution_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntegerLeastSquareSolution::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IntegerLeastSquareSolution_init_(t_IntegerLeastSquareSolution *self, PyObject *args, PyObject *kwds)
          {
            JArray< jlong > a0((jobject) NULL);
            jdouble a1;
            IntegerLeastSquareSolution object((jobject) NULL);

            if (!parseArgs(args, "[JD", &a0, &a1))
            {
              INT_CALL(object = IntegerLeastSquareSolution(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IntegerLeastSquareSolution_getSolution(t_IntegerLeastSquareSolution *self)
          {
            JArray< jlong > result((jobject) NULL);
            OBJ_CALL(result = self->object.getSolution());
            return result.wrap();
          }

          static PyObject *t_IntegerLeastSquareSolution_getSquaredDistance(t_IntegerLeastSquareSolution *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSquaredDistance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IntegerLeastSquareSolution_get__solution(t_IntegerLeastSquareSolution *self, void *data)
          {
            JArray< jlong > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSolution());
            return value.wrap();
          }

          static PyObject *t_IntegerLeastSquareSolution_get__squaredDistance(t_IntegerLeastSquareSolution *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSquaredDistance());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTTesseralContext.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTTesseralContext::class$ = NULL;
            jmethodID *DSSTTesseralContext::mids$ = NULL;
            bool DSSTTesseralContext::live$ = false;

            jclass DSSTTesseralContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTTesseralContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAx2oA_557b8123390d8d0c] = env->getMethodID(cls, "getAx2oA", "()D");
                mids$[mid_getBoA_557b8123390d8d0c] = env->getMethodID(cls, "getBoA", "()D");
                mids$[mid_getBoABpo_557b8123390d8d0c] = env->getMethodID(cls, "getBoABpo", "()D");
                mids$[mid_getChi_557b8123390d8d0c] = env->getMethodID(cls, "getChi", "()D");
                mids$[mid_getChi2_557b8123390d8d0c] = env->getMethodID(cls, "getChi2", "()D");
                mids$[mid_getCo2AB_557b8123390d8d0c] = env->getMethodID(cls, "getCo2AB", "()D");
                mids$[mid_getE2_557b8123390d8d0c] = env->getMethodID(cls, "getE2", "()D");
                mids$[mid_getMeanMotion_557b8123390d8d0c] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMoa_557b8123390d8d0c] = env->getMethodID(cls, "getMoa", "()D");
                mids$[mid_getOoAB_557b8123390d8d0c] = env->getMethodID(cls, "getOoAB", "()D");
                mids$[mid_getOrbitPeriod_557b8123390d8d0c] = env->getMethodID(cls, "getOrbitPeriod", "()D");
                mids$[mid_getRatio_557b8123390d8d0c] = env->getMethodID(cls, "getRatio", "()D");
                mids$[mid_getRoa_557b8123390d8d0c] = env->getMethodID(cls, "getRoa", "()D");
                mids$[mid_getTheta_557b8123390d8d0c] = env->getMethodID(cls, "getTheta", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble DSSTTesseralContext::getAx2oA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAx2oA_557b8123390d8d0c]);
            }

            jdouble DSSTTesseralContext::getBoA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoA_557b8123390d8d0c]);
            }

            jdouble DSSTTesseralContext::getBoABpo() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoABpo_557b8123390d8d0c]);
            }

            jdouble DSSTTesseralContext::getChi() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getChi_557b8123390d8d0c]);
            }

            jdouble DSSTTesseralContext::getChi2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getChi2_557b8123390d8d0c]);
            }

            jdouble DSSTTesseralContext::getCo2AB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCo2AB_557b8123390d8d0c]);
            }

            jdouble DSSTTesseralContext::getE2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE2_557b8123390d8d0c]);
            }

            jdouble DSSTTesseralContext::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_557b8123390d8d0c]);
            }

            jdouble DSSTTesseralContext::getMoa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMoa_557b8123390d8d0c]);
            }

            jdouble DSSTTesseralContext::getOoAB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOoAB_557b8123390d8d0c]);
            }

            jdouble DSSTTesseralContext::getOrbitPeriod() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOrbitPeriod_557b8123390d8d0c]);
            }

            jdouble DSSTTesseralContext::getRatio() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRatio_557b8123390d8d0c]);
            }

            jdouble DSSTTesseralContext::getRoa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRoa_557b8123390d8d0c]);
            }

            jdouble DSSTTesseralContext::getTheta() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTheta_557b8123390d8d0c]);
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
            static PyObject *t_DSSTTesseralContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTTesseralContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTTesseralContext_getAx2oA(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getBoA(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getBoABpo(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getChi(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getChi2(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getCo2AB(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getE2(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getMeanMotion(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getMoa(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getOoAB(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getOrbitPeriod(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getRatio(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getRoa(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getTheta(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_get__ax2oA(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__boA(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__boABpo(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__chi(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__chi2(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__co2AB(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__e2(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__meanMotion(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__moa(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__ooAB(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__orbitPeriod(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__ratio(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__roa(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__theta(t_DSSTTesseralContext *self, void *data);
            static PyGetSetDef t_DSSTTesseralContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTTesseralContext, ax2oA),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, boA),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, boABpo),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, chi),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, chi2),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, co2AB),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, e2),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, meanMotion),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, moa),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, ooAB),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, orbitPeriod),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, ratio),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, roa),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, theta),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTTesseralContext__methods_[] = {
              DECLARE_METHOD(t_DSSTTesseralContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTTesseralContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTTesseralContext, getAx2oA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getChi, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getChi2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getE2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getMoa, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getOrbitPeriod, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getRatio, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getRoa, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getTheta, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTTesseralContext)[] = {
              { Py_tp_methods, t_DSSTTesseralContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_DSSTTesseralContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTTesseralContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTTesseralContext, t_DSSTTesseralContext, DSSTTesseralContext);

            void t_DSSTTesseralContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTTesseralContext), &PY_TYPE_DEF(DSSTTesseralContext), module, "DSSTTesseralContext", 0);
            }

            void t_DSSTTesseralContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseralContext), "class_", make_descriptor(DSSTTesseralContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseralContext), "wrapfn_", make_descriptor(t_DSSTTesseralContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseralContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTTesseralContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTTesseralContext::initializeClass, 1)))
                return NULL;
              return t_DSSTTesseralContext::wrap_Object(DSSTTesseralContext(((t_DSSTTesseralContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTTesseralContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTTesseralContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_DSSTTesseralContext_getAx2oA(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAx2oA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getBoA(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getBoABpo(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoABpo());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getChi(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getChi());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getChi2(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getChi2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getCo2AB(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCo2AB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getE2(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getMeanMotion(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getMoa(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMoa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getOoAB(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOoAB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getOrbitPeriod(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOrbitPeriod());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getRatio(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRatio());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getRoa(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRoa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getTheta(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTheta());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_get__ax2oA(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAx2oA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__boA(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__boABpo(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoABpo());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__chi(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getChi());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__chi2(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getChi2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__co2AB(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCo2AB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__e2(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__meanMotion(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__moa(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMoa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__ooAB(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOoAB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__orbitPeriod(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOrbitPeriod());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__ratio(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRatio());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__roa(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRoa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__theta(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTheta());
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresOptimizer$Optimum::class$ = NULL;
            jmethodID *LeastSquaresOptimizer$Optimum::mids$ = NULL;
            bool LeastSquaresOptimizer$Optimum::live$ = false;

            jclass LeastSquaresOptimizer$Optimum::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getEvaluations_412668abc8d889e9] = env->getMethodID(cls, "getEvaluations", "()I");
                mids$[mid_getIterations_412668abc8d889e9] = env->getMethodID(cls, "getIterations", "()I");
                mids$[mid_of_90cc8ca69b87507a] = env->getStaticMethodID(cls, "of", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;II)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jint LeastSquaresOptimizer$Optimum::getEvaluations() const
            {
              return env->callIntMethod(this$, mids$[mid_getEvaluations_412668abc8d889e9]);
            }

            jint LeastSquaresOptimizer$Optimum::getIterations() const
            {
              return env->callIntMethod(this$, mids$[mid_getIterations_412668abc8d889e9]);
            }

            LeastSquaresOptimizer$Optimum LeastSquaresOptimizer$Optimum::of(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return LeastSquaresOptimizer$Optimum(env->callStaticObjectMethod(cls, mids$[mid_of_90cc8ca69b87507a], a0.this$, a1, a2));
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
        namespace vector {
          namespace leastsquares {
            static PyObject *t_LeastSquaresOptimizer$Optimum_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresOptimizer$Optimum_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresOptimizer$Optimum_getEvaluations(t_LeastSquaresOptimizer$Optimum *self);
            static PyObject *t_LeastSquaresOptimizer$Optimum_getIterations(t_LeastSquaresOptimizer$Optimum *self);
            static PyObject *t_LeastSquaresOptimizer$Optimum_of(PyTypeObject *type, PyObject *args);
            static PyObject *t_LeastSquaresOptimizer$Optimum_get__evaluations(t_LeastSquaresOptimizer$Optimum *self, void *data);
            static PyObject *t_LeastSquaresOptimizer$Optimum_get__iterations(t_LeastSquaresOptimizer$Optimum *self, void *data);
            static PyGetSetDef t_LeastSquaresOptimizer$Optimum__fields_[] = {
              DECLARE_GET_FIELD(t_LeastSquaresOptimizer$Optimum, evaluations),
              DECLARE_GET_FIELD(t_LeastSquaresOptimizer$Optimum, iterations),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LeastSquaresOptimizer$Optimum__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresOptimizer$Optimum, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresOptimizer$Optimum, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresOptimizer$Optimum, getEvaluations, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresOptimizer$Optimum, getIterations, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresOptimizer$Optimum, of, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresOptimizer$Optimum)[] = {
              { Py_tp_methods, t_LeastSquaresOptimizer$Optimum__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_LeastSquaresOptimizer$Optimum__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresOptimizer$Optimum)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation),
              NULL
            };

            DEFINE_TYPE(LeastSquaresOptimizer$Optimum, t_LeastSquaresOptimizer$Optimum, LeastSquaresOptimizer$Optimum);

            void t_LeastSquaresOptimizer$Optimum::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresOptimizer$Optimum), &PY_TYPE_DEF(LeastSquaresOptimizer$Optimum), module, "LeastSquaresOptimizer$Optimum", 0);
            }

            void t_LeastSquaresOptimizer$Optimum::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer$Optimum), "class_", make_descriptor(LeastSquaresOptimizer$Optimum::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer$Optimum), "wrapfn_", make_descriptor(t_LeastSquaresOptimizer$Optimum::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer$Optimum), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresOptimizer$Optimum_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresOptimizer$Optimum::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresOptimizer$Optimum::wrap_Object(LeastSquaresOptimizer$Optimum(((t_LeastSquaresOptimizer$Optimum *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresOptimizer$Optimum_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresOptimizer$Optimum::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LeastSquaresOptimizer$Optimum_getEvaluations(t_LeastSquaresOptimizer$Optimum *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getEvaluations());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresOptimizer$Optimum_getIterations(t_LeastSquaresOptimizer$Optimum *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIterations());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresOptimizer$Optimum_of(PyTypeObject *type, PyObject *args)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation a0((jobject) NULL);
              jint a1;
              jint a2;
              LeastSquaresOptimizer$Optimum result((jobject) NULL);

              if (!parseArgs(args, "kII", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum::of(a0, a1, a2));
                return t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "of", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresOptimizer$Optimum_get__evaluations(t_LeastSquaresOptimizer$Optimum *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getEvaluations());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_LeastSquaresOptimizer$Optimum_get__iterations(t_LeastSquaresOptimizer$Optimum *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIterations());
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
#include "org/orekit/estimation/measurements/gnss/CombinationType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/CombinationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *CombinationType::class$ = NULL;
          jmethodID *CombinationType::mids$ = NULL;
          bool CombinationType::live$ = false;
          CombinationType *CombinationType::GEOMETRY_FREE = NULL;
          CombinationType *CombinationType::GRAPHIC = NULL;
          CombinationType *CombinationType::IONO_FREE = NULL;
          CombinationType *CombinationType::MELBOURNE_WUBBENA = NULL;
          CombinationType *CombinationType::NARROW_LANE = NULL;
          CombinationType *CombinationType::PHASE_MINUS_CODE = NULL;
          CombinationType *CombinationType::WIDE_LANE = NULL;

          jclass CombinationType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/CombinationType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_valueOf_d8f63fa0f38d087e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/estimation/measurements/gnss/CombinationType;");
              mids$[mid_values_bb870966667cab72] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/estimation/measurements/gnss/CombinationType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              GEOMETRY_FREE = new CombinationType(env->getStaticObjectField(cls, "GEOMETRY_FREE", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              GRAPHIC = new CombinationType(env->getStaticObjectField(cls, "GRAPHIC", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              IONO_FREE = new CombinationType(env->getStaticObjectField(cls, "IONO_FREE", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              MELBOURNE_WUBBENA = new CombinationType(env->getStaticObjectField(cls, "MELBOURNE_WUBBENA", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              NARROW_LANE = new CombinationType(env->getStaticObjectField(cls, "NARROW_LANE", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              PHASE_MINUS_CODE = new CombinationType(env->getStaticObjectField(cls, "PHASE_MINUS_CODE", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              WIDE_LANE = new CombinationType(env->getStaticObjectField(cls, "WIDE_LANE", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String CombinationType::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
          }

          CombinationType CombinationType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CombinationType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d8f63fa0f38d087e], a0.this$));
          }

          JArray< CombinationType > CombinationType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< CombinationType >(env->callStaticObjectMethod(cls, mids$[mid_values_bb870966667cab72]));
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
          static PyObject *t_CombinationType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CombinationType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CombinationType_of_(t_CombinationType *self, PyObject *args);
          static PyObject *t_CombinationType_getName(t_CombinationType *self);
          static PyObject *t_CombinationType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_CombinationType_values(PyTypeObject *type);
          static PyObject *t_CombinationType_get__name(t_CombinationType *self, void *data);
          static PyObject *t_CombinationType_get__parameters_(t_CombinationType *self, void *data);
          static PyGetSetDef t_CombinationType__fields_[] = {
            DECLARE_GET_FIELD(t_CombinationType, name),
            DECLARE_GET_FIELD(t_CombinationType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CombinationType__methods_[] = {
            DECLARE_METHOD(t_CombinationType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinationType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinationType, of_, METH_VARARGS),
            DECLARE_METHOD(t_CombinationType, getName, METH_NOARGS),
            DECLARE_METHOD(t_CombinationType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CombinationType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CombinationType)[] = {
            { Py_tp_methods, t_CombinationType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CombinationType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CombinationType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(CombinationType, t_CombinationType, CombinationType);
          PyObject *t_CombinationType::wrap_Object(const CombinationType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CombinationType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CombinationType *self = (t_CombinationType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_CombinationType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CombinationType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CombinationType *self = (t_CombinationType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_CombinationType::install(PyObject *module)
          {
            installType(&PY_TYPE(CombinationType), &PY_TYPE_DEF(CombinationType), module, "CombinationType", 0);
          }

          void t_CombinationType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "class_", make_descriptor(CombinationType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "wrapfn_", make_descriptor(t_CombinationType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "boxfn_", make_descriptor(boxObject));
            env->getClass(CombinationType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "GEOMETRY_FREE", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::GEOMETRY_FREE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "GRAPHIC", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::GRAPHIC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "IONO_FREE", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::IONO_FREE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "MELBOURNE_WUBBENA", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::MELBOURNE_WUBBENA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "NARROW_LANE", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::NARROW_LANE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "PHASE_MINUS_CODE", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::PHASE_MINUS_CODE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "WIDE_LANE", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::WIDE_LANE)));
          }

          static PyObject *t_CombinationType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CombinationType::initializeClass, 1)))
              return NULL;
            return t_CombinationType::wrap_Object(CombinationType(((t_CombinationType *) arg)->object.this$));
          }
          static PyObject *t_CombinationType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CombinationType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CombinationType_of_(t_CombinationType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_CombinationType_getName(t_CombinationType *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_CombinationType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            CombinationType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::CombinationType::valueOf(a0));
              return t_CombinationType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_CombinationType_values(PyTypeObject *type)
          {
            JArray< CombinationType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::CombinationType::values());
            return JArray<jobject>(result.this$).wrap(t_CombinationType::wrap_jobject);
          }
          static PyObject *t_CombinationType_get__parameters_(t_CombinationType *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_CombinationType_get__name(t_CombinationType *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmData.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmTle.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParameters.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmData::class$ = NULL;
              jmethodID *OmmData::mids$ = NULL;
              bool OmmData::live$ = false;

              jclass OmmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_46cd14e4fc972631] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/KeplerianElements;Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTle;Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;Lorg/orekit/files/ccsds/ndm/odm/UserDefined;D)V");
                  mids$[mid_getCovarianceBlock_ab1f5bcd3006ffba] = env->getMethodID(cls, "getCovarianceBlock", "()Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;");
                  mids$[mid_getKeplerianElementsBlock_a7b00de16bb05023] = env->getMethodID(cls, "getKeplerianElementsBlock", "()Lorg/orekit/files/ccsds/ndm/odm/KeplerianElements;");
                  mids$[mid_getMass_557b8123390d8d0c] = env->getMethodID(cls, "getMass", "()D");
                  mids$[mid_getSpacecraftParametersBlock_ac68c68a22df72d8] = env->getMethodID(cls, "getSpacecraftParametersBlock", "()Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;");
                  mids$[mid_getTLEBlock_30791a00fcedc774] = env->getMethodID(cls, "getTLEBlock", "()Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTle;");
                  mids$[mid_getUserDefinedBlock_e8dd2483e310f990] = env->getMethodID(cls, "getUserDefinedBlock", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");
                  mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OmmData::OmmData(const ::org::orekit::files::ccsds::ndm::odm::KeplerianElements & a0, const ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters & a1, const ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle & a2, const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance & a3, const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_46cd14e4fc972631, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

              ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance OmmData::getCovarianceBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance(env->callObjectMethod(this$, mids$[mid_getCovarianceBlock_ab1f5bcd3006ffba]));
              }

              ::org::orekit::files::ccsds::ndm::odm::KeplerianElements OmmData::getKeplerianElementsBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::KeplerianElements(env->callObjectMethod(this$, mids$[mid_getKeplerianElementsBlock_a7b00de16bb05023]));
              }

              jdouble OmmData::getMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMass_557b8123390d8d0c]);
              }

              ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters OmmData::getSpacecraftParametersBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters(env->callObjectMethod(this$, mids$[mid_getSpacecraftParametersBlock_ac68c68a22df72d8]));
              }

              ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle OmmData::getTLEBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle(env->callObjectMethod(this$, mids$[mid_getTLEBlock_30791a00fcedc774]));
              }

              ::org::orekit::files::ccsds::ndm::odm::UserDefined OmmData::getUserDefinedBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedBlock_e8dd2483e310f990]));
              }

              void OmmData::validate(jdouble a0) const
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
            namespace omm {
              static PyObject *t_OmmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OmmData_init_(t_OmmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OmmData_getCovarianceBlock(t_OmmData *self);
              static PyObject *t_OmmData_getKeplerianElementsBlock(t_OmmData *self);
              static PyObject *t_OmmData_getMass(t_OmmData *self);
              static PyObject *t_OmmData_getSpacecraftParametersBlock(t_OmmData *self);
              static PyObject *t_OmmData_getTLEBlock(t_OmmData *self);
              static PyObject *t_OmmData_getUserDefinedBlock(t_OmmData *self);
              static PyObject *t_OmmData_validate(t_OmmData *self, PyObject *arg);
              static PyObject *t_OmmData_get__covarianceBlock(t_OmmData *self, void *data);
              static PyObject *t_OmmData_get__keplerianElementsBlock(t_OmmData *self, void *data);
              static PyObject *t_OmmData_get__mass(t_OmmData *self, void *data);
              static PyObject *t_OmmData_get__spacecraftParametersBlock(t_OmmData *self, void *data);
              static PyObject *t_OmmData_get__tLEBlock(t_OmmData *self, void *data);
              static PyObject *t_OmmData_get__userDefinedBlock(t_OmmData *self, void *data);
              static PyGetSetDef t_OmmData__fields_[] = {
                DECLARE_GET_FIELD(t_OmmData, covarianceBlock),
                DECLARE_GET_FIELD(t_OmmData, keplerianElementsBlock),
                DECLARE_GET_FIELD(t_OmmData, mass),
                DECLARE_GET_FIELD(t_OmmData, spacecraftParametersBlock),
                DECLARE_GET_FIELD(t_OmmData, tLEBlock),
                DECLARE_GET_FIELD(t_OmmData, userDefinedBlock),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmData__methods_[] = {
                DECLARE_METHOD(t_OmmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmData, getCovarianceBlock, METH_NOARGS),
                DECLARE_METHOD(t_OmmData, getKeplerianElementsBlock, METH_NOARGS),
                DECLARE_METHOD(t_OmmData, getMass, METH_NOARGS),
                DECLARE_METHOD(t_OmmData, getSpacecraftParametersBlock, METH_NOARGS),
                DECLARE_METHOD(t_OmmData, getTLEBlock, METH_NOARGS),
                DECLARE_METHOD(t_OmmData, getUserDefinedBlock, METH_NOARGS),
                DECLARE_METHOD(t_OmmData, validate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmData)[] = {
                { Py_tp_methods, t_OmmData__methods_ },
                { Py_tp_init, (void *) t_OmmData_init_ },
                { Py_tp_getset, t_OmmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmData)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OmmData, t_OmmData, OmmData);

              void t_OmmData::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmData), &PY_TYPE_DEF(OmmData), module, "OmmData", 0);
              }

              void t_OmmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmData), "class_", make_descriptor(OmmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmData), "wrapfn_", make_descriptor(t_OmmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OmmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmData::initializeClass, 1)))
                  return NULL;
                return t_OmmData::wrap_Object(OmmData(((t_OmmData *) arg)->object.this$));
              }
              static PyObject *t_OmmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OmmData_init_(t_OmmData *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance a3((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::UserDefined a4((jobject) NULL);
                jdouble a5;
                OmmData object((jobject) NULL);

                if (!parseArgs(args, "kkkkkD", ::org::orekit::files::ccsds::ndm::odm::KeplerianElements::initializeClass, ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters::initializeClass, ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle::initializeClass, ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  INT_CALL(object = OmmData(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OmmData_getCovarianceBlock(t_OmmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_CartesianCovariance::wrap_Object(result);
              }

              static PyObject *t_OmmData_getKeplerianElementsBlock(t_OmmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements result((jobject) NULL);
                OBJ_CALL(result = self->object.getKeplerianElementsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_KeplerianElements::wrap_Object(result);
              }

              static PyObject *t_OmmData_getMass(t_OmmData *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmData_getSpacecraftParametersBlock(t_OmmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters result((jobject) NULL);
                OBJ_CALL(result = self->object.getSpacecraftParametersBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_SpacecraftParameters::wrap_Object(result);
              }

              static PyObject *t_OmmData_getTLEBlock(t_OmmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle result((jobject) NULL);
                OBJ_CALL(result = self->object.getTLEBlock());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmTle::wrap_Object(result);
              }

              static PyObject *t_OmmData_getUserDefinedBlock(t_OmmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
                OBJ_CALL(result = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
              }

              static PyObject *t_OmmData_validate(t_OmmData *self, PyObject *arg)
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

              static PyObject *t_OmmData_get__covarianceBlock(t_OmmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_CartesianCovariance::wrap_Object(value);
              }

              static PyObject *t_OmmData_get__keplerianElementsBlock(t_OmmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements value((jobject) NULL);
                OBJ_CALL(value = self->object.getKeplerianElementsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_KeplerianElements::wrap_Object(value);
              }

              static PyObject *t_OmmData_get__mass(t_OmmData *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMass());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OmmData_get__spacecraftParametersBlock(t_OmmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpacecraftParametersBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_SpacecraftParameters::wrap_Object(value);
              }

              static PyObject *t_OmmData_get__tLEBlock(t_OmmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle value((jobject) NULL);
                OBJ_CALL(value = self->object.getTLEBlock());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmTle::wrap_Object(value);
              }

              static PyObject *t_OmmData_get__userDefinedBlock(t_OmmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
                OBJ_CALL(value = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(value);
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
#include "org/hipparchus/analysis/integration/TrapezoidIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *TrapezoidIntegrator::class$ = NULL;
        jmethodID *TrapezoidIntegrator::mids$ = NULL;
        bool TrapezoidIntegrator::live$ = false;
        jint TrapezoidIntegrator::TRAPEZOID_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass TrapezoidIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/TrapezoidIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_a84c9a223722150c] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_init$_8ceb2936471aec5d] = env->getMethodID(cls, "<init>", "(DDII)V");
            mids$[mid_doIntegrate_557b8123390d8d0c] = env->getMethodID(cls, "doIntegrate", "()D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            TRAPEZOID_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "TRAPEZOID_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TrapezoidIntegrator::TrapezoidIntegrator() : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        TrapezoidIntegrator::TrapezoidIntegrator(jint a0, jint a1) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_a84c9a223722150c, a0, a1)) {}

        TrapezoidIntegrator::TrapezoidIntegrator(jdouble a0, jdouble a1, jint a2, jint a3) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_8ceb2936471aec5d, a0, a1, a2, a3)) {}
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
        static PyObject *t_TrapezoidIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TrapezoidIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TrapezoidIntegrator_init_(t_TrapezoidIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_TrapezoidIntegrator__methods_[] = {
          DECLARE_METHOD(t_TrapezoidIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TrapezoidIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TrapezoidIntegrator)[] = {
          { Py_tp_methods, t_TrapezoidIntegrator__methods_ },
          { Py_tp_init, (void *) t_TrapezoidIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TrapezoidIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(TrapezoidIntegrator, t_TrapezoidIntegrator, TrapezoidIntegrator);

        void t_TrapezoidIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(TrapezoidIntegrator), &PY_TYPE_DEF(TrapezoidIntegrator), module, "TrapezoidIntegrator", 0);
        }

        void t_TrapezoidIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrapezoidIntegrator), "class_", make_descriptor(TrapezoidIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrapezoidIntegrator), "wrapfn_", make_descriptor(t_TrapezoidIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrapezoidIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(TrapezoidIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrapezoidIntegrator), "TRAPEZOID_MAX_ITERATIONS_COUNT", make_descriptor(TrapezoidIntegrator::TRAPEZOID_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_TrapezoidIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TrapezoidIntegrator::initializeClass, 1)))
            return NULL;
          return t_TrapezoidIntegrator::wrap_Object(TrapezoidIntegrator(((t_TrapezoidIntegrator *) arg)->object.this$));
        }
        static PyObject *t_TrapezoidIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TrapezoidIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TrapezoidIntegrator_init_(t_TrapezoidIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              TrapezoidIntegrator object((jobject) NULL);

              INT_CALL(object = TrapezoidIntegrator());
              self->object = object;
              break;
            }
           case 2:
            {
              jint a0;
              jint a1;
              TrapezoidIntegrator object((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                INT_CALL(object = TrapezoidIntegrator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              jint a3;
              TrapezoidIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = TrapezoidIntegrator(a0, a1, a2, a3));
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
  }
}

#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventDetector::class$ = NULL;
        jmethodID *EventDetector::mids$ = NULL;
        bool EventDetector::live$ = false;

        jclass EventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getHandler_9cfb09a569a3f330] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/EventHandler;");
            mids$[mid_getMaxCheckInterval_b5b0f3e235bdd705] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_412668abc8d889e9] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_557b8123390d8d0c] = env->getMethodID(cls, "getThreshold", "()D");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble EventDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        ::org::orekit::propagation::events::handlers::EventHandler EventDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::EventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_9cfb09a569a3f330]));
        }

        ::org::orekit::propagation::events::AdaptableInterval EventDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::AdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_b5b0f3e235bdd705]));
        }

        jint EventDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_412668abc8d889e9]);
        }

        jdouble EventDetector::getThreshold() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThreshold_557b8123390d8d0c]);
        }

        void EventDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
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
        static PyObject *t_EventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventDetector_g(t_EventDetector *self, PyObject *arg);
        static PyObject *t_EventDetector_getHandler(t_EventDetector *self);
        static PyObject *t_EventDetector_getMaxCheckInterval(t_EventDetector *self);
        static PyObject *t_EventDetector_getMaxIterationCount(t_EventDetector *self);
        static PyObject *t_EventDetector_getThreshold(t_EventDetector *self);
        static PyObject *t_EventDetector_init(t_EventDetector *self, PyObject *args);
        static PyObject *t_EventDetector_get__handler(t_EventDetector *self, void *data);
        static PyObject *t_EventDetector_get__maxCheckInterval(t_EventDetector *self, void *data);
        static PyObject *t_EventDetector_get__maxIterationCount(t_EventDetector *self, void *data);
        static PyObject *t_EventDetector_get__threshold(t_EventDetector *self, void *data);
        static PyGetSetDef t_EventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_EventDetector, handler),
          DECLARE_GET_FIELD(t_EventDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_EventDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_EventDetector, threshold),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventDetector__methods_[] = {
          DECLARE_METHOD(t_EventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventDetector, g, METH_O),
          DECLARE_METHOD(t_EventDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_EventDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_EventDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_EventDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_EventDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventDetector)[] = {
          { Py_tp_methods, t_EventDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventDetector, t_EventDetector, EventDetector);

        void t_EventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(EventDetector), &PY_TYPE_DEF(EventDetector), module, "EventDetector", 0);
        }

        void t_EventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetector), "class_", make_descriptor(EventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetector), "wrapfn_", make_descriptor(t_EventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventDetector::initializeClass, 1)))
            return NULL;
          return t_EventDetector::wrap_Object(EventDetector(((t_EventDetector *) arg)->object.this$));
        }
        static PyObject *t_EventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventDetector_g(t_EventDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_EventDetector_getHandler(t_EventDetector *self)
        {
          ::org::orekit::propagation::events::handlers::EventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(result);
        }

        static PyObject *t_EventDetector_getMaxCheckInterval(t_EventDetector *self)
        {
          ::org::orekit::propagation::events::AdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(result);
        }

        static PyObject *t_EventDetector_getMaxIterationCount(t_EventDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EventDetector_getThreshold(t_EventDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getThreshold());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EventDetector_init(t_EventDetector *self, PyObject *args)
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

        static PyObject *t_EventDetector_get__handler(t_EventDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::EventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(value);
        }

        static PyObject *t_EventDetector_get__maxCheckInterval(t_EventDetector *self, void *data)
        {
          ::org::orekit::propagation::events::AdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_EventDetector_get__maxIterationCount(t_EventDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EventDetector_get__threshold(t_EventDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThreshold());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/AbstractUnivariateDifferentiableSolver.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/UnivariateDifferentiableSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *AbstractUnivariateDifferentiableSolver::class$ = NULL;
        jmethodID *AbstractUnivariateDifferentiableSolver::mids$ = NULL;
        bool AbstractUnivariateDifferentiableSolver::live$ = false;

        jclass AbstractUnivariateDifferentiableSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/AbstractUnivariateDifferentiableSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_computeObjectiveValueAndDerivative_e5494538980257b4] = env->getMethodID(cls, "computeObjectiveValueAndDerivative", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_setup_7417e00c8aefca3d] = env->getMethodID(cls, "setup", "(ILorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;DDD)V");

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
        static PyObject *t_AbstractUnivariateDifferentiableSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractUnivariateDifferentiableSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractUnivariateDifferentiableSolver_of_(t_AbstractUnivariateDifferentiableSolver *self, PyObject *args);
        static PyObject *t_AbstractUnivariateDifferentiableSolver_get__parameters_(t_AbstractUnivariateDifferentiableSolver *self, void *data);
        static PyGetSetDef t_AbstractUnivariateDifferentiableSolver__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractUnivariateDifferentiableSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractUnivariateDifferentiableSolver__methods_[] = {
          DECLARE_METHOD(t_AbstractUnivariateDifferentiableSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractUnivariateDifferentiableSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractUnivariateDifferentiableSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractUnivariateDifferentiableSolver)[] = {
          { Py_tp_methods, t_AbstractUnivariateDifferentiableSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractUnivariateDifferentiableSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractUnivariateDifferentiableSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseAbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(AbstractUnivariateDifferentiableSolver, t_AbstractUnivariateDifferentiableSolver, AbstractUnivariateDifferentiableSolver);
        PyObject *t_AbstractUnivariateDifferentiableSolver::wrap_Object(const AbstractUnivariateDifferentiableSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractUnivariateDifferentiableSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractUnivariateDifferentiableSolver *self = (t_AbstractUnivariateDifferentiableSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractUnivariateDifferentiableSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractUnivariateDifferentiableSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractUnivariateDifferentiableSolver *self = (t_AbstractUnivariateDifferentiableSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractUnivariateDifferentiableSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractUnivariateDifferentiableSolver), &PY_TYPE_DEF(AbstractUnivariateDifferentiableSolver), module, "AbstractUnivariateDifferentiableSolver", 0);
        }

        void t_AbstractUnivariateDifferentiableSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateDifferentiableSolver), "class_", make_descriptor(AbstractUnivariateDifferentiableSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateDifferentiableSolver), "wrapfn_", make_descriptor(t_AbstractUnivariateDifferentiableSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateDifferentiableSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractUnivariateDifferentiableSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractUnivariateDifferentiableSolver::initializeClass, 1)))
            return NULL;
          return t_AbstractUnivariateDifferentiableSolver::wrap_Object(AbstractUnivariateDifferentiableSolver(((t_AbstractUnivariateDifferentiableSolver *) arg)->object.this$));
        }
        static PyObject *t_AbstractUnivariateDifferentiableSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractUnivariateDifferentiableSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractUnivariateDifferentiableSolver_of_(t_AbstractUnivariateDifferentiableSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }
        static PyObject *t_AbstractUnivariateDifferentiableSolver_get__parameters_(t_AbstractUnivariateDifferentiableSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/HessenbergTransformer.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *HessenbergTransformer::class$ = NULL;
      jmethodID *HessenbergTransformer::mids$ = NULL;
      bool HessenbergTransformer::live$ = false;

      jclass HessenbergTransformer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/HessenbergTransformer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f3731847577f13e6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_getH_70a207fcbc031df2] = env->getMethodID(cls, "getH", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getP_70a207fcbc031df2] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getPT_70a207fcbc031df2] = env->getMethodID(cls, "getPT", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HessenbergTransformer::HessenbergTransformer(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f3731847577f13e6, a0.this$)) {}

      ::org::hipparchus::linear::RealMatrix HessenbergTransformer::getH() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getH_70a207fcbc031df2]));
      }

      ::org::hipparchus::linear::RealMatrix HessenbergTransformer::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_70a207fcbc031df2]));
      }

      ::org::hipparchus::linear::RealMatrix HessenbergTransformer::getPT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPT_70a207fcbc031df2]));
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
      static PyObject *t_HessenbergTransformer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HessenbergTransformer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_HessenbergTransformer_init_(t_HessenbergTransformer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_HessenbergTransformer_getH(t_HessenbergTransformer *self);
      static PyObject *t_HessenbergTransformer_getP(t_HessenbergTransformer *self);
      static PyObject *t_HessenbergTransformer_getPT(t_HessenbergTransformer *self);
      static PyObject *t_HessenbergTransformer_get__h(t_HessenbergTransformer *self, void *data);
      static PyObject *t_HessenbergTransformer_get__p(t_HessenbergTransformer *self, void *data);
      static PyObject *t_HessenbergTransformer_get__pT(t_HessenbergTransformer *self, void *data);
      static PyGetSetDef t_HessenbergTransformer__fields_[] = {
        DECLARE_GET_FIELD(t_HessenbergTransformer, h),
        DECLARE_GET_FIELD(t_HessenbergTransformer, p),
        DECLARE_GET_FIELD(t_HessenbergTransformer, pT),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_HessenbergTransformer__methods_[] = {
        DECLARE_METHOD(t_HessenbergTransformer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HessenbergTransformer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HessenbergTransformer, getH, METH_NOARGS),
        DECLARE_METHOD(t_HessenbergTransformer, getP, METH_NOARGS),
        DECLARE_METHOD(t_HessenbergTransformer, getPT, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HessenbergTransformer)[] = {
        { Py_tp_methods, t_HessenbergTransformer__methods_ },
        { Py_tp_init, (void *) t_HessenbergTransformer_init_ },
        { Py_tp_getset, t_HessenbergTransformer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HessenbergTransformer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(HessenbergTransformer, t_HessenbergTransformer, HessenbergTransformer);

      void t_HessenbergTransformer::install(PyObject *module)
      {
        installType(&PY_TYPE(HessenbergTransformer), &PY_TYPE_DEF(HessenbergTransformer), module, "HessenbergTransformer", 0);
      }

      void t_HessenbergTransformer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HessenbergTransformer), "class_", make_descriptor(HessenbergTransformer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HessenbergTransformer), "wrapfn_", make_descriptor(t_HessenbergTransformer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HessenbergTransformer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HessenbergTransformer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HessenbergTransformer::initializeClass, 1)))
          return NULL;
        return t_HessenbergTransformer::wrap_Object(HessenbergTransformer(((t_HessenbergTransformer *) arg)->object.this$));
      }
      static PyObject *t_HessenbergTransformer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HessenbergTransformer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_HessenbergTransformer_init_(t_HessenbergTransformer *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        HessenbergTransformer object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          INT_CALL(object = HessenbergTransformer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_HessenbergTransformer_getH(t_HessenbergTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getH());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_HessenbergTransformer_getP(t_HessenbergTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_HessenbergTransformer_getPT(t_HessenbergTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getPT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_HessenbergTransformer_get__h(t_HessenbergTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getH());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_HessenbergTransformer_get__p(t_HessenbergTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_HessenbergTransformer_get__pT(t_HessenbergTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getPT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/RinexFile.h"
#include "org/orekit/files/rinex/section/RinexComment.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/section/RinexBaseHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {

        ::java::lang::Class *RinexFile::class$ = NULL;
        jmethodID *RinexFile::mids$ = NULL;
        bool RinexFile::live$ = false;

        jclass RinexFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/rinex/RinexFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addComment_202c0c0df5f8bb5c] = env->getMethodID(cls, "addComment", "(Lorg/orekit/files/rinex/section/RinexComment;)V");
            mids$[mid_getComments_0d9551367f7ecdef] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
            mids$[mid_getHeader_2f3f30d5211d15d8] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/rinex/section/RinexBaseHeader;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void RinexFile::addComment(const ::org::orekit::files::rinex::section::RinexComment & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addComment_202c0c0df5f8bb5c], a0.this$);
        }

        ::java::util::List RinexFile::getComments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_0d9551367f7ecdef]));
        }

        ::org::orekit::files::rinex::section::RinexBaseHeader RinexFile::getHeader() const
        {
          return ::org::orekit::files::rinex::section::RinexBaseHeader(env->callObjectMethod(this$, mids$[mid_getHeader_2f3f30d5211d15d8]));
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
        static PyObject *t_RinexFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RinexFile_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RinexFile_of_(t_RinexFile *self, PyObject *args);
        static PyObject *t_RinexFile_addComment(t_RinexFile *self, PyObject *arg);
        static PyObject *t_RinexFile_getComments(t_RinexFile *self);
        static PyObject *t_RinexFile_getHeader(t_RinexFile *self);
        static PyObject *t_RinexFile_get__comments(t_RinexFile *self, void *data);
        static PyObject *t_RinexFile_get__header(t_RinexFile *self, void *data);
        static PyObject *t_RinexFile_get__parameters_(t_RinexFile *self, void *data);
        static PyGetSetDef t_RinexFile__fields_[] = {
          DECLARE_GET_FIELD(t_RinexFile, comments),
          DECLARE_GET_FIELD(t_RinexFile, header),
          DECLARE_GET_FIELD(t_RinexFile, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RinexFile__methods_[] = {
          DECLARE_METHOD(t_RinexFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RinexFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RinexFile, of_, METH_VARARGS),
          DECLARE_METHOD(t_RinexFile, addComment, METH_O),
          DECLARE_METHOD(t_RinexFile, getComments, METH_NOARGS),
          DECLARE_METHOD(t_RinexFile, getHeader, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RinexFile)[] = {
          { Py_tp_methods, t_RinexFile__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_RinexFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RinexFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RinexFile, t_RinexFile, RinexFile);
        PyObject *t_RinexFile::wrap_Object(const RinexFile& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RinexFile::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RinexFile *self = (t_RinexFile *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RinexFile::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RinexFile::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RinexFile *self = (t_RinexFile *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RinexFile::install(PyObject *module)
        {
          installType(&PY_TYPE(RinexFile), &PY_TYPE_DEF(RinexFile), module, "RinexFile", 0);
        }

        void t_RinexFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFile), "class_", make_descriptor(RinexFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFile), "wrapfn_", make_descriptor(t_RinexFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RinexFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RinexFile::initializeClass, 1)))
            return NULL;
          return t_RinexFile::wrap_Object(RinexFile(((t_RinexFile *) arg)->object.this$));
        }
        static PyObject *t_RinexFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RinexFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RinexFile_of_(t_RinexFile *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_RinexFile_addComment(t_RinexFile *self, PyObject *arg)
        {
          ::org::orekit::files::rinex::section::RinexComment a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::rinex::section::RinexComment::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addComment(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addComment", arg);
          return NULL;
        }

        static PyObject *t_RinexFile_getComments(t_RinexFile *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::section::PY_TYPE(RinexComment));
        }

        static PyObject *t_RinexFile_getHeader(t_RinexFile *self)
        {
          ::org::orekit::files::rinex::section::RinexBaseHeader result((jobject) NULL);
          OBJ_CALL(result = self->object.getHeader());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::rinex::section::t_RinexBaseHeader::wrap_Object(result);
        }
        static PyObject *t_RinexFile_get__parameters_(t_RinexFile *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_RinexFile_get__comments(t_RinexFile *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_RinexFile_get__header(t_RinexFile *self, void *data)
        {
          ::org::orekit::files::rinex::section::RinexBaseHeader value((jobject) NULL);
          OBJ_CALL(value = self->object.getHeader());
          return ::org::orekit::files::rinex::section::t_RinexBaseHeader::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        ::java::lang::Class *STKEphemerisFile$STKCoordinateSystem::class$ = NULL;
        jmethodID *STKEphemerisFile$STKCoordinateSystem::mids$ = NULL;
        bool STKEphemerisFile$STKCoordinateSystem::live$ = false;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::FIXED = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::ICRF = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::INERTIAL = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::J2000 = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::MEAN_OF_DATE = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::TEME_OF_DATE = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::TRUE_OF_DATE = NULL;

        jclass STKEphemerisFile$STKCoordinateSystem::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem");

            mids$ = new jmethodID[max_mid];
            mids$[mid_parse_8b96aa3542b32f2e] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;");
            mids$[mid_valueOf_8b96aa3542b32f2e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;");
            mids$[mid_values_dd0d1a61c7b76489] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            FIXED = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "FIXED", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            ICRF = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "ICRF", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            INERTIAL = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "INERTIAL", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            J2000 = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "J2000", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            MEAN_OF_DATE = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "MEAN_OF_DATE", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            TEME_OF_DATE = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "TEME_OF_DATE", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            TRUE_OF_DATE = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "TRUE_OF_DATE", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        STKEphemerisFile$STKCoordinateSystem STKEphemerisFile$STKCoordinateSystem::parse(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return STKEphemerisFile$STKCoordinateSystem(env->callStaticObjectMethod(cls, mids$[mid_parse_8b96aa3542b32f2e], a0.this$));
        }

        STKEphemerisFile$STKCoordinateSystem STKEphemerisFile$STKCoordinateSystem::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return STKEphemerisFile$STKCoordinateSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8b96aa3542b32f2e], a0.this$));
        }

        JArray< STKEphemerisFile$STKCoordinateSystem > STKEphemerisFile$STKCoordinateSystem::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< STKEphemerisFile$STKCoordinateSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_dd0d1a61c7b76489]));
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
      namespace stk {
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_of_(t_STKEphemerisFile$STKCoordinateSystem *self, PyObject *args);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_parse(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_values(PyTypeObject *type);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_get__parameters_(t_STKEphemerisFile$STKCoordinateSystem *self, void *data);
        static PyGetSetDef t_STKEphemerisFile$STKCoordinateSystem__fields_[] = {
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKCoordinateSystem, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_STKEphemerisFile$STKCoordinateSystem__methods_[] = {
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, of_, METH_VARARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, parse, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(STKEphemerisFile$STKCoordinateSystem)[] = {
          { Py_tp_methods, t_STKEphemerisFile$STKCoordinateSystem__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_STKEphemerisFile$STKCoordinateSystem__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(STKEphemerisFile$STKCoordinateSystem)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(STKEphemerisFile$STKCoordinateSystem, t_STKEphemerisFile$STKCoordinateSystem, STKEphemerisFile$STKCoordinateSystem);
        PyObject *t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(const STKEphemerisFile$STKCoordinateSystem& object, PyTypeObject *p0)
        {
          PyObject *obj = t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_STKEphemerisFile$STKCoordinateSystem *self = (t_STKEphemerisFile$STKCoordinateSystem *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_STKEphemerisFile$STKCoordinateSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_STKEphemerisFile$STKCoordinateSystem::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_STKEphemerisFile$STKCoordinateSystem *self = (t_STKEphemerisFile$STKCoordinateSystem *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_STKEphemerisFile$STKCoordinateSystem::install(PyObject *module)
        {
          installType(&PY_TYPE(STKEphemerisFile$STKCoordinateSystem), &PY_TYPE_DEF(STKEphemerisFile$STKCoordinateSystem), module, "STKEphemerisFile$STKCoordinateSystem", 0);
        }

        void t_STKEphemerisFile$STKCoordinateSystem::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "class_", make_descriptor(STKEphemerisFile$STKCoordinateSystem::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "wrapfn_", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "boxfn_", make_descriptor(boxObject));
          env->getClass(STKEphemerisFile$STKCoordinateSystem::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "FIXED", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::FIXED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "ICRF", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::ICRF)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "INERTIAL", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::INERTIAL)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "J2000", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::J2000)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "MEAN_OF_DATE", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::MEAN_OF_DATE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "TEME_OF_DATE", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::TEME_OF_DATE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "TRUE_OF_DATE", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::TRUE_OF_DATE)));
        }

        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, STKEphemerisFile$STKCoordinateSystem::initializeClass, 1)))
            return NULL;
          return t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(STKEphemerisFile$STKCoordinateSystem(((t_STKEphemerisFile$STKCoordinateSystem *) arg)->object.this$));
        }
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, STKEphemerisFile$STKCoordinateSystem::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_of_(t_STKEphemerisFile$STKCoordinateSystem *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_parse(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          STKEphemerisFile$STKCoordinateSystem result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::stk::STKEphemerisFile$STKCoordinateSystem::parse(a0));
            return t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parse", arg);
          return NULL;
        }

        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          STKEphemerisFile$STKCoordinateSystem result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::stk::STKEphemerisFile$STKCoordinateSystem::valueOf(a0));
            return t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_values(PyTypeObject *type)
        {
          JArray< STKEphemerisFile$STKCoordinateSystem > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::stk::STKEphemerisFile$STKCoordinateSystem::values());
          return JArray<jobject>(result.this$).wrap(t_STKEphemerisFile$STKCoordinateSystem::wrap_jobject);
        }
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_get__parameters_(t_STKEphemerisFile$STKCoordinateSystem *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/util/KthSelector.h"
#include "org/hipparchus/util/PivotingStrategy.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile$EstimationType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *Percentile::class$ = NULL;
          jmethodID *Percentile::mids$ = NULL;
          bool Percentile::live$ = false;

          jclass Percentile::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/Percentile");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_copy_8a657a7f00135d6d] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/Percentile;");
              mids$[mid_evaluate_7e960cd6eee376d8] = env->getMethodID(cls, "evaluate", "(D)D");
              mids$[mid_evaluate_05f591cf0826202b] = env->getMethodID(cls, "evaluate", "([DD)D");
              mids$[mid_evaluate_9eeeb1ae977f525d] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_52cb74c4004a744d] = env->getMethodID(cls, "evaluate", "([DIID)D");
              mids$[mid_getEstimationType_4612cef7d7be3067] = env->getMethodID(cls, "getEstimationType", "()Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;");
              mids$[mid_getKthSelector_e3d4c2054ef00f3b] = env->getMethodID(cls, "getKthSelector", "()Lorg/hipparchus/util/KthSelector;");
              mids$[mid_getNaNStrategy_771b1218ed87a53c] = env->getMethodID(cls, "getNaNStrategy", "()Lorg/hipparchus/stat/ranking/NaNStrategy;");
              mids$[mid_getPivotingStrategy_b6c90f164ea1e1c5] = env->getMethodID(cls, "getPivotingStrategy", "()Lorg/hipparchus/util/PivotingStrategy;");
              mids$[mid_getQuantile_557b8123390d8d0c] = env->getMethodID(cls, "getQuantile", "()D");
              mids$[mid_setData_cc18240f4a737f14] = env->getMethodID(cls, "setData", "([D)V");
              mids$[mid_setData_91b51b3c05127ead] = env->getMethodID(cls, "setData", "([DII)V");
              mids$[mid_setQuantile_10f281d777284cea] = env->getMethodID(cls, "setQuantile", "(D)V");
              mids$[mid_withEstimationType_a8a5642985133f18] = env->getMethodID(cls, "withEstimationType", "(Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;)Lorg/hipparchus/stat/descriptive/rank/Percentile;");
              mids$[mid_withKthSelector_4905375d0b810005] = env->getMethodID(cls, "withKthSelector", "(Lorg/hipparchus/util/KthSelector;)Lorg/hipparchus/stat/descriptive/rank/Percentile;");
              mids$[mid_withNaNStrategy_64d279e273ef2dde] = env->getMethodID(cls, "withNaNStrategy", "(Lorg/hipparchus/stat/ranking/NaNStrategy;)Lorg/hipparchus/stat/descriptive/rank/Percentile;");
              mids$[mid_getWorkArray_3a89ed5ea3adefb8] = env->getMethodID(cls, "getWorkArray", "([DII)[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Percentile::Percentile() : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          Percentile::Percentile(jdouble a0) : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

          Percentile Percentile::copy() const
          {
            return Percentile(env->callObjectMethod(this$, mids$[mid_copy_8a657a7f00135d6d]));
          }

          jdouble Percentile::evaluate(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_7e960cd6eee376d8], a0);
          }

          jdouble Percentile::evaluate(const JArray< jdouble > & a0, jdouble a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_05f591cf0826202b], a0.this$, a1);
          }

          jdouble Percentile::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_9eeeb1ae977f525d], a0.this$, a1, a2);
          }

          jdouble Percentile::evaluate(const JArray< jdouble > & a0, jint a1, jint a2, jdouble a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_52cb74c4004a744d], a0.this$, a1, a2, a3);
          }

          ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType Percentile::getEstimationType() const
          {
            return ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType(env->callObjectMethod(this$, mids$[mid_getEstimationType_4612cef7d7be3067]));
          }

          ::org::hipparchus::util::KthSelector Percentile::getKthSelector() const
          {
            return ::org::hipparchus::util::KthSelector(env->callObjectMethod(this$, mids$[mid_getKthSelector_e3d4c2054ef00f3b]));
          }

          ::org::hipparchus::stat::ranking::NaNStrategy Percentile::getNaNStrategy() const
          {
            return ::org::hipparchus::stat::ranking::NaNStrategy(env->callObjectMethod(this$, mids$[mid_getNaNStrategy_771b1218ed87a53c]));
          }

          ::org::hipparchus::util::PivotingStrategy Percentile::getPivotingStrategy() const
          {
            return ::org::hipparchus::util::PivotingStrategy(env->callObjectMethod(this$, mids$[mid_getPivotingStrategy_b6c90f164ea1e1c5]));
          }

          jdouble Percentile::getQuantile() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQuantile_557b8123390d8d0c]);
          }

          void Percentile::setData(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setData_cc18240f4a737f14], a0.this$);
          }

          void Percentile::setData(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            env->callVoidMethod(this$, mids$[mid_setData_91b51b3c05127ead], a0.this$, a1, a2);
          }

          void Percentile::setQuantile(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setQuantile_10f281d777284cea], a0);
          }

          Percentile Percentile::withEstimationType(const ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType & a0) const
          {
            return Percentile(env->callObjectMethod(this$, mids$[mid_withEstimationType_a8a5642985133f18], a0.this$));
          }

          Percentile Percentile::withKthSelector(const ::org::hipparchus::util::KthSelector & a0) const
          {
            return Percentile(env->callObjectMethod(this$, mids$[mid_withKthSelector_4905375d0b810005], a0.this$));
          }

          Percentile Percentile::withNaNStrategy(const ::org::hipparchus::stat::ranking::NaNStrategy & a0) const
          {
            return Percentile(env->callObjectMethod(this$, mids$[mid_withNaNStrategy_64d279e273ef2dde], a0.this$));
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
          static PyObject *t_Percentile_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Percentile_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Percentile_init_(t_Percentile *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Percentile_copy(t_Percentile *self, PyObject *args);
          static PyObject *t_Percentile_evaluate(t_Percentile *self, PyObject *args);
          static PyObject *t_Percentile_getEstimationType(t_Percentile *self);
          static PyObject *t_Percentile_getKthSelector(t_Percentile *self);
          static PyObject *t_Percentile_getNaNStrategy(t_Percentile *self);
          static PyObject *t_Percentile_getPivotingStrategy(t_Percentile *self);
          static PyObject *t_Percentile_getQuantile(t_Percentile *self);
          static PyObject *t_Percentile_setData(t_Percentile *self, PyObject *args);
          static PyObject *t_Percentile_setQuantile(t_Percentile *self, PyObject *arg);
          static PyObject *t_Percentile_withEstimationType(t_Percentile *self, PyObject *arg);
          static PyObject *t_Percentile_withKthSelector(t_Percentile *self, PyObject *arg);
          static PyObject *t_Percentile_withNaNStrategy(t_Percentile *self, PyObject *arg);
          static int t_Percentile_set__data(t_Percentile *self, PyObject *arg, void *data);
          static PyObject *t_Percentile_get__estimationType(t_Percentile *self, void *data);
          static PyObject *t_Percentile_get__kthSelector(t_Percentile *self, void *data);
          static PyObject *t_Percentile_get__naNStrategy(t_Percentile *self, void *data);
          static PyObject *t_Percentile_get__pivotingStrategy(t_Percentile *self, void *data);
          static PyObject *t_Percentile_get__quantile(t_Percentile *self, void *data);
          static int t_Percentile_set__quantile(t_Percentile *self, PyObject *arg, void *data);
          static PyGetSetDef t_Percentile__fields_[] = {
            DECLARE_SET_FIELD(t_Percentile, data),
            DECLARE_GET_FIELD(t_Percentile, estimationType),
            DECLARE_GET_FIELD(t_Percentile, kthSelector),
            DECLARE_GET_FIELD(t_Percentile, naNStrategy),
            DECLARE_GET_FIELD(t_Percentile, pivotingStrategy),
            DECLARE_GETSET_FIELD(t_Percentile, quantile),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Percentile__methods_[] = {
            DECLARE_METHOD(t_Percentile, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Percentile, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Percentile, copy, METH_VARARGS),
            DECLARE_METHOD(t_Percentile, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Percentile, getEstimationType, METH_NOARGS),
            DECLARE_METHOD(t_Percentile, getKthSelector, METH_NOARGS),
            DECLARE_METHOD(t_Percentile, getNaNStrategy, METH_NOARGS),
            DECLARE_METHOD(t_Percentile, getPivotingStrategy, METH_NOARGS),
            DECLARE_METHOD(t_Percentile, getQuantile, METH_NOARGS),
            DECLARE_METHOD(t_Percentile, setData, METH_VARARGS),
            DECLARE_METHOD(t_Percentile, setQuantile, METH_O),
            DECLARE_METHOD(t_Percentile, withEstimationType, METH_O),
            DECLARE_METHOD(t_Percentile, withKthSelector, METH_O),
            DECLARE_METHOD(t_Percentile, withNaNStrategy, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Percentile)[] = {
            { Py_tp_methods, t_Percentile__methods_ },
            { Py_tp_init, (void *) t_Percentile_init_ },
            { Py_tp_getset, t_Percentile__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Percentile)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Percentile, t_Percentile, Percentile);

          void t_Percentile::install(PyObject *module)
          {
            installType(&PY_TYPE(Percentile), &PY_TYPE_DEF(Percentile), module, "Percentile", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile), "EstimationType", make_descriptor(&PY_TYPE_DEF(Percentile$EstimationType)));
          }

          void t_Percentile::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile), "class_", make_descriptor(Percentile::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile), "wrapfn_", make_descriptor(t_Percentile::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Percentile_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Percentile::initializeClass, 1)))
              return NULL;
            return t_Percentile::wrap_Object(Percentile(((t_Percentile *) arg)->object.this$));
          }
          static PyObject *t_Percentile_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Percentile::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Percentile_init_(t_Percentile *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Percentile object((jobject) NULL);

                INT_CALL(object = Percentile());
                self->object = object;
                break;
              }
             case 1:
              {
                jdouble a0;
                Percentile object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = Percentile(a0));
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

          static PyObject *t_Percentile_copy(t_Percentile *self, PyObject *args)
          {
            Percentile result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Percentile::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Percentile), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Percentile_evaluate(t_Percentile *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.evaluate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
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
                jint a1;
                jint a2;
                jdouble a3;
                jdouble result;

                if (!parseArgs(args, "[DIID", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(Percentile), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Percentile_getEstimationType(t_Percentile *self)
          {
            ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType result((jobject) NULL);
            OBJ_CALL(result = self->object.getEstimationType());
            return ::org::hipparchus::stat::descriptive::rank::t_Percentile$EstimationType::wrap_Object(result);
          }

          static PyObject *t_Percentile_getKthSelector(t_Percentile *self)
          {
            ::org::hipparchus::util::KthSelector result((jobject) NULL);
            OBJ_CALL(result = self->object.getKthSelector());
            return ::org::hipparchus::util::t_KthSelector::wrap_Object(result);
          }

          static PyObject *t_Percentile_getNaNStrategy(t_Percentile *self)
          {
            ::org::hipparchus::stat::ranking::NaNStrategy result((jobject) NULL);
            OBJ_CALL(result = self->object.getNaNStrategy());
            return ::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(result);
          }

          static PyObject *t_Percentile_getPivotingStrategy(t_Percentile *self)
          {
            ::org::hipparchus::util::PivotingStrategy result((jobject) NULL);
            OBJ_CALL(result = self->object.getPivotingStrategy());
            return ::org::hipparchus::util::t_PivotingStrategy::wrap_Object(result);
          }

          static PyObject *t_Percentile_getQuantile(t_Percentile *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQuantile());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Percentile_setData(t_Percentile *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(self->object.setData(a0));
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
                  OBJ_CALL(self->object.setData(a0, a1, a2));
                  Py_RETURN_NONE;
                }
              }
            }

            return callSuper(PY_TYPE(Percentile), (PyObject *) self, "setData", args, 2);
          }

          static PyObject *t_Percentile_setQuantile(t_Percentile *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setQuantile(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setQuantile", arg);
            return NULL;
          }

          static PyObject *t_Percentile_withEstimationType(t_Percentile *self, PyObject *arg)
          {
            ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType a0((jobject) NULL);
            PyTypeObject **p0;
            Percentile result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType::initializeClass, &a0, &p0, ::org::hipparchus::stat::descriptive::rank::t_Percentile$EstimationType::parameters_))
            {
              OBJ_CALL(result = self->object.withEstimationType(a0));
              return t_Percentile::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withEstimationType", arg);
            return NULL;
          }

          static PyObject *t_Percentile_withKthSelector(t_Percentile *self, PyObject *arg)
          {
            ::org::hipparchus::util::KthSelector a0((jobject) NULL);
            Percentile result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::util::KthSelector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.withKthSelector(a0));
              return t_Percentile::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withKthSelector", arg);
            return NULL;
          }

          static PyObject *t_Percentile_withNaNStrategy(t_Percentile *self, PyObject *arg)
          {
            ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
            PyTypeObject **p0;
            Percentile result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_))
            {
              OBJ_CALL(result = self->object.withNaNStrategy(a0));
              return t_Percentile::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withNaNStrategy", arg);
            return NULL;
          }

          static int t_Percentile_set__data(t_Percentile *self, PyObject *arg, void *data)
          {
            {
              JArray< jdouble > value((jobject) NULL);
              if (!parseArg(arg, "[D", &value))
              {
                INT_CALL(self->object.setData(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "data", arg);
            return -1;
          }

          static PyObject *t_Percentile_get__estimationType(t_Percentile *self, void *data)
          {
            ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType value((jobject) NULL);
            OBJ_CALL(value = self->object.getEstimationType());
            return ::org::hipparchus::stat::descriptive::rank::t_Percentile$EstimationType::wrap_Object(value);
          }

          static PyObject *t_Percentile_get__kthSelector(t_Percentile *self, void *data)
          {
            ::org::hipparchus::util::KthSelector value((jobject) NULL);
            OBJ_CALL(value = self->object.getKthSelector());
            return ::org::hipparchus::util::t_KthSelector::wrap_Object(value);
          }

          static PyObject *t_Percentile_get__naNStrategy(t_Percentile *self, void *data)
          {
            ::org::hipparchus::stat::ranking::NaNStrategy value((jobject) NULL);
            OBJ_CALL(value = self->object.getNaNStrategy());
            return ::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(value);
          }

          static PyObject *t_Percentile_get__pivotingStrategy(t_Percentile *self, void *data)
          {
            ::org::hipparchus::util::PivotingStrategy value((jobject) NULL);
            OBJ_CALL(value = self->object.getPivotingStrategy());
            return ::org::hipparchus::util::t_PivotingStrategy::wrap_Object(value);
          }

          static PyObject *t_Percentile_get__quantile(t_Percentile *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQuantile());
            return PyFloat_FromDouble((double) value);
          }
          static int t_Percentile_set__quantile(t_Percentile *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setQuantile(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "quantile", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/EventObject.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *EventObject::class$ = NULL;
    jmethodID *EventObject::mids$ = NULL;
    bool EventObject::live$ = false;

    jclass EventObject::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/EventObject");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_009757f2c0fd9090] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;)V");
        mids$[mid_getSource_e661fe3ba2fafb22] = env->getMethodID(cls, "getSource", "()Ljava/lang/Object;");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    EventObject::EventObject(const ::java::lang::Object & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_009757f2c0fd9090, a0.this$)) {}

    ::java::lang::Object EventObject::getSource() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getSource_e661fe3ba2fafb22]));
    }

    ::java::lang::String EventObject::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_EventObject_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_EventObject_instance_(PyTypeObject *type, PyObject *arg);
    static int t_EventObject_init_(t_EventObject *self, PyObject *args, PyObject *kwds);
    static PyObject *t_EventObject_getSource(t_EventObject *self);
    static PyObject *t_EventObject_toString(t_EventObject *self, PyObject *args);
    static PyObject *t_EventObject_get__source(t_EventObject *self, void *data);
    static PyGetSetDef t_EventObject__fields_[] = {
      DECLARE_GET_FIELD(t_EventObject, source),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_EventObject__methods_[] = {
      DECLARE_METHOD(t_EventObject, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_EventObject, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_EventObject, getSource, METH_NOARGS),
      DECLARE_METHOD(t_EventObject, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(EventObject)[] = {
      { Py_tp_methods, t_EventObject__methods_ },
      { Py_tp_init, (void *) t_EventObject_init_ },
      { Py_tp_getset, t_EventObject__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(EventObject)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(EventObject, t_EventObject, EventObject);

    void t_EventObject::install(PyObject *module)
    {
      installType(&PY_TYPE(EventObject), &PY_TYPE_DEF(EventObject), module, "EventObject", 0);
    }

    void t_EventObject::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(EventObject), "class_", make_descriptor(EventObject::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(EventObject), "wrapfn_", make_descriptor(t_EventObject::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(EventObject), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_EventObject_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, EventObject::initializeClass, 1)))
        return NULL;
      return t_EventObject::wrap_Object(EventObject(((t_EventObject *) arg)->object.this$));
    }
    static PyObject *t_EventObject_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, EventObject::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_EventObject_init_(t_EventObject *self, PyObject *args, PyObject *kwds)
    {
      ::java::lang::Object a0((jobject) NULL);
      EventObject object((jobject) NULL);

      if (!parseArgs(args, "o", &a0))
      {
        INT_CALL(object = EventObject(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_EventObject_getSource(t_EventObject *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.getSource());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_EventObject_toString(t_EventObject *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(EventObject), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_EventObject_get__source(t_EventObject *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getSource());
      return ::java::lang::t_Object::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/IonosphericMappingFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
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
              mids$[mid_mappingFactor_7e960cd6eee376d8] = env->getMethodID(cls, "mappingFactor", "(D)D");
              mids$[mid_mappingFactor_6672ad854985cb64] = env->getMethodID(cls, "mappingFactor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble IonosphericMappingFunction::mappingFactor(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_mappingFactor_7e960cd6eee376d8], a0);
          }

          ::org::hipparchus::CalculusFieldElement IonosphericMappingFunction::mappingFactor(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_mappingFactor_6672ad854985cb64], a0.this$));
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
#include "org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *SigmaEigenvectorsCovarianceKey::class$ = NULL;
            jmethodID *SigmaEigenvectorsCovarianceKey::mids$ = NULL;
            bool SigmaEigenvectorsCovarianceKey::live$ = false;
            SigmaEigenvectorsCovarianceKey *SigmaEigenvectorsCovarianceKey::COMMENT = NULL;
            SigmaEigenvectorsCovarianceKey *SigmaEigenvectorsCovarianceKey::CSIG3EIGVEC3 = NULL;

            jclass SigmaEigenvectorsCovarianceKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_92506b888cec9e1b] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance;)Z");
                mids$[mid_valueOf_ecf07095e88fdee4] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey;");
                mids$[mid_values_322e2ef216f0eb1f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new SigmaEigenvectorsCovarianceKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey;"));
                CSIG3EIGVEC3 = new SigmaEigenvectorsCovarianceKey(env->getStaticObjectField(cls, "CSIG3EIGVEC3", "Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean SigmaEigenvectorsCovarianceKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_92506b888cec9e1b], a0.this$, a1.this$, a2.this$);
            }

            SigmaEigenvectorsCovarianceKey SigmaEigenvectorsCovarianceKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return SigmaEigenvectorsCovarianceKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ecf07095e88fdee4], a0.this$));
            }

            JArray< SigmaEigenvectorsCovarianceKey > SigmaEigenvectorsCovarianceKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< SigmaEigenvectorsCovarianceKey >(env->callStaticObjectMethod(cls, mids$[mid_values_322e2ef216f0eb1f]));
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
            static PyObject *t_SigmaEigenvectorsCovarianceKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SigmaEigenvectorsCovarianceKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SigmaEigenvectorsCovarianceKey_of_(t_SigmaEigenvectorsCovarianceKey *self, PyObject *args);
            static PyObject *t_SigmaEigenvectorsCovarianceKey_process(t_SigmaEigenvectorsCovarianceKey *self, PyObject *args);
            static PyObject *t_SigmaEigenvectorsCovarianceKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_SigmaEigenvectorsCovarianceKey_values(PyTypeObject *type);
            static PyObject *t_SigmaEigenvectorsCovarianceKey_get__parameters_(t_SigmaEigenvectorsCovarianceKey *self, void *data);
            static PyGetSetDef t_SigmaEigenvectorsCovarianceKey__fields_[] = {
              DECLARE_GET_FIELD(t_SigmaEigenvectorsCovarianceKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SigmaEigenvectorsCovarianceKey__methods_[] = {
              DECLARE_METHOD(t_SigmaEigenvectorsCovarianceKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovarianceKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovarianceKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovarianceKey, process, METH_VARARGS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovarianceKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovarianceKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SigmaEigenvectorsCovarianceKey)[] = {
              { Py_tp_methods, t_SigmaEigenvectorsCovarianceKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_SigmaEigenvectorsCovarianceKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SigmaEigenvectorsCovarianceKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(SigmaEigenvectorsCovarianceKey, t_SigmaEigenvectorsCovarianceKey, SigmaEigenvectorsCovarianceKey);
            PyObject *t_SigmaEigenvectorsCovarianceKey::wrap_Object(const SigmaEigenvectorsCovarianceKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_SigmaEigenvectorsCovarianceKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SigmaEigenvectorsCovarianceKey *self = (t_SigmaEigenvectorsCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_SigmaEigenvectorsCovarianceKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_SigmaEigenvectorsCovarianceKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SigmaEigenvectorsCovarianceKey *self = (t_SigmaEigenvectorsCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_SigmaEigenvectorsCovarianceKey::install(PyObject *module)
            {
              installType(&PY_TYPE(SigmaEigenvectorsCovarianceKey), &PY_TYPE_DEF(SigmaEigenvectorsCovarianceKey), module, "SigmaEigenvectorsCovarianceKey", 0);
            }

            void t_SigmaEigenvectorsCovarianceKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovarianceKey), "class_", make_descriptor(SigmaEigenvectorsCovarianceKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovarianceKey), "wrapfn_", make_descriptor(t_SigmaEigenvectorsCovarianceKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovarianceKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(SigmaEigenvectorsCovarianceKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovarianceKey), "COMMENT", make_descriptor(t_SigmaEigenvectorsCovarianceKey::wrap_Object(*SigmaEigenvectorsCovarianceKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovarianceKey), "CSIG3EIGVEC3", make_descriptor(t_SigmaEigenvectorsCovarianceKey::wrap_Object(*SigmaEigenvectorsCovarianceKey::CSIG3EIGVEC3)));
            }

            static PyObject *t_SigmaEigenvectorsCovarianceKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SigmaEigenvectorsCovarianceKey::initializeClass, 1)))
                return NULL;
              return t_SigmaEigenvectorsCovarianceKey::wrap_Object(SigmaEigenvectorsCovarianceKey(((t_SigmaEigenvectorsCovarianceKey *) arg)->object.this$));
            }
            static PyObject *t_SigmaEigenvectorsCovarianceKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SigmaEigenvectorsCovarianceKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_SigmaEigenvectorsCovarianceKey_of_(t_SigmaEigenvectorsCovarianceKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_SigmaEigenvectorsCovarianceKey_process(t_SigmaEigenvectorsCovarianceKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_SigmaEigenvectorsCovarianceKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              SigmaEigenvectorsCovarianceKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovarianceKey::valueOf(a0));
                return t_SigmaEigenvectorsCovarianceKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_SigmaEigenvectorsCovarianceKey_values(PyTypeObject *type)
            {
              JArray< SigmaEigenvectorsCovarianceKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovarianceKey::values());
              return JArray<jobject>(result.this$).wrap(t_SigmaEigenvectorsCovarianceKey::wrap_jobject);
            }
            static PyObject *t_SigmaEigenvectorsCovarianceKey_get__parameters_(t_SigmaEigenvectorsCovarianceKey *self, void *data)
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
#include "org/hipparchus/linear/EigenDecompositionSymmetric.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/DiagonalMatrix.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *EigenDecompositionSymmetric::class$ = NULL;
      jmethodID *EigenDecompositionSymmetric::mids$ = NULL;
      bool EigenDecompositionSymmetric::live$ = false;
      jdouble EigenDecompositionSymmetric::DEFAULT_EPSILON = (jdouble) 0;

      jclass EigenDecompositionSymmetric::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/EigenDecompositionSymmetric");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f3731847577f13e6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_ab4840ba016ef1da] = env->getMethodID(cls, "<init>", "([D[D)V");
          mids$[mid_init$_417b55dd6524da33] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DZ)V");
          mids$[mid_init$_78a5b4f63390ed29] = env->getMethodID(cls, "<init>", "([D[DDZ)V");
          mids$[mid_getD_b1a245683de9728d] = env->getMethodID(cls, "getD", "()Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_getDeterminant_557b8123390d8d0c] = env->getMethodID(cls, "getDeterminant", "()D");
          mids$[mid_getEigenvalue_69cfb132c661aca4] = env->getMethodID(cls, "getEigenvalue", "(I)D");
          mids$[mid_getEigenvalues_a53a7513ecedada2] = env->getMethodID(cls, "getEigenvalues", "()[D");
          mids$[mid_getEigenvector_2a32cae841870443] = env->getMethodID(cls, "getEigenvector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getEpsilon_557b8123390d8d0c] = env->getMethodID(cls, "getEpsilon", "()D");
          mids$[mid_getSolver_ccd666b17ae2e6eb] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");
          mids$[mid_getSquareRoot_70a207fcbc031df2] = env->getMethodID(cls, "getSquareRoot", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getV_70a207fcbc031df2] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getVT_70a207fcbc031df2] = env->getMethodID(cls, "getVT", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_EPSILON = env->getStaticDoubleField(cls, "DEFAULT_EPSILON");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EigenDecompositionSymmetric::EigenDecompositionSymmetric(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f3731847577f13e6, a0.this$)) {}

      EigenDecompositionSymmetric::EigenDecompositionSymmetric(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab4840ba016ef1da, a0.this$, a1.this$)) {}

      EigenDecompositionSymmetric::EigenDecompositionSymmetric(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_417b55dd6524da33, a0.this$, a1, a2)) {}

      EigenDecompositionSymmetric::EigenDecompositionSymmetric(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2, jboolean a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_78a5b4f63390ed29, a0.this$, a1.this$, a2, a3)) {}

      ::org::hipparchus::linear::DiagonalMatrix EigenDecompositionSymmetric::getD() const
      {
        return ::org::hipparchus::linear::DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_getD_b1a245683de9728d]));
      }

      jdouble EigenDecompositionSymmetric::getDeterminant() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDeterminant_557b8123390d8d0c]);
      }

      jdouble EigenDecompositionSymmetric::getEigenvalue(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEigenvalue_69cfb132c661aca4], a0);
      }

      JArray< jdouble > EigenDecompositionSymmetric::getEigenvalues() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getEigenvalues_a53a7513ecedada2]));
      }

      ::org::hipparchus::linear::RealVector EigenDecompositionSymmetric::getEigenvector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getEigenvector_2a32cae841870443], a0));
      }

      jdouble EigenDecompositionSymmetric::getEpsilon() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEpsilon_557b8123390d8d0c]);
      }

      ::org::hipparchus::linear::DecompositionSolver EigenDecompositionSymmetric::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_ccd666b17ae2e6eb]));
      }

      ::org::hipparchus::linear::RealMatrix EigenDecompositionSymmetric::getSquareRoot() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getSquareRoot_70a207fcbc031df2]));
      }

      ::org::hipparchus::linear::RealMatrix EigenDecompositionSymmetric::getV() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getV_70a207fcbc031df2]));
      }

      ::org::hipparchus::linear::RealMatrix EigenDecompositionSymmetric::getVT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getVT_70a207fcbc031df2]));
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
      static PyObject *t_EigenDecompositionSymmetric_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EigenDecompositionSymmetric_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EigenDecompositionSymmetric_init_(t_EigenDecompositionSymmetric *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EigenDecompositionSymmetric_getD(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getDeterminant(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getEigenvalue(t_EigenDecompositionSymmetric *self, PyObject *arg);
      static PyObject *t_EigenDecompositionSymmetric_getEigenvalues(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getEigenvector(t_EigenDecompositionSymmetric *self, PyObject *arg);
      static PyObject *t_EigenDecompositionSymmetric_getEpsilon(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getSolver(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getSquareRoot(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getV(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getVT(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_get__d(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__determinant(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__eigenvalues(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__epsilon(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__solver(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__squareRoot(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__v(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__vT(t_EigenDecompositionSymmetric *self, void *data);
      static PyGetSetDef t_EigenDecompositionSymmetric__fields_[] = {
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, d),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, determinant),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, eigenvalues),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, epsilon),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, solver),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, squareRoot),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, v),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, vT),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EigenDecompositionSymmetric__methods_[] = {
        DECLARE_METHOD(t_EigenDecompositionSymmetric, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getD, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getEigenvalue, METH_O),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getEigenvalues, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getEigenvector, METH_O),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getEpsilon, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getSolver, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getSquareRoot, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getV, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getVT, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EigenDecompositionSymmetric)[] = {
        { Py_tp_methods, t_EigenDecompositionSymmetric__methods_ },
        { Py_tp_init, (void *) t_EigenDecompositionSymmetric_init_ },
        { Py_tp_getset, t_EigenDecompositionSymmetric__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EigenDecompositionSymmetric)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EigenDecompositionSymmetric, t_EigenDecompositionSymmetric, EigenDecompositionSymmetric);

      void t_EigenDecompositionSymmetric::install(PyObject *module)
      {
        installType(&PY_TYPE(EigenDecompositionSymmetric), &PY_TYPE_DEF(EigenDecompositionSymmetric), module, "EigenDecompositionSymmetric", 0);
      }

      void t_EigenDecompositionSymmetric::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionSymmetric), "class_", make_descriptor(EigenDecompositionSymmetric::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionSymmetric), "wrapfn_", make_descriptor(t_EigenDecompositionSymmetric::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionSymmetric), "boxfn_", make_descriptor(boxObject));
        env->getClass(EigenDecompositionSymmetric::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionSymmetric), "DEFAULT_EPSILON", make_descriptor(EigenDecompositionSymmetric::DEFAULT_EPSILON));
      }

      static PyObject *t_EigenDecompositionSymmetric_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EigenDecompositionSymmetric::initializeClass, 1)))
          return NULL;
        return t_EigenDecompositionSymmetric::wrap_Object(EigenDecompositionSymmetric(((t_EigenDecompositionSymmetric *) arg)->object.this$));
      }
      static PyObject *t_EigenDecompositionSymmetric_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EigenDecompositionSymmetric::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EigenDecompositionSymmetric_init_(t_EigenDecompositionSymmetric *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            EigenDecompositionSymmetric object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = EigenDecompositionSymmetric(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            EigenDecompositionSymmetric object((jobject) NULL);

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              INT_CALL(object = EigenDecompositionSymmetric(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            jboolean a2;
            EigenDecompositionSymmetric object((jobject) NULL);

            if (!parseArgs(args, "kDZ", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = EigenDecompositionSymmetric(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jdouble a2;
            jboolean a3;
            EigenDecompositionSymmetric object((jobject) NULL);

            if (!parseArgs(args, "[D[DDZ", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = EigenDecompositionSymmetric(a0, a1, a2, a3));
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

      static PyObject *t_EigenDecompositionSymmetric_getD(t_EigenDecompositionSymmetric *self)
      {
        ::org::hipparchus::linear::DiagonalMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getD());
        return ::org::hipparchus::linear::t_DiagonalMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getDeterminant(t_EigenDecompositionSymmetric *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDeterminant());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getEigenvalue(t_EigenDecompositionSymmetric *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEigenvalue(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEigenvalue", arg);
        return NULL;
      }

      static PyObject *t_EigenDecompositionSymmetric_getEigenvalues(t_EigenDecompositionSymmetric *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getEigenvalues());
        return result.wrap();
      }

      static PyObject *t_EigenDecompositionSymmetric_getEigenvector(t_EigenDecompositionSymmetric *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEigenvector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEigenvector", arg);
        return NULL;
      }

      static PyObject *t_EigenDecompositionSymmetric_getEpsilon(t_EigenDecompositionSymmetric *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEpsilon());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getSolver(t_EigenDecompositionSymmetric *self)
      {
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getSquareRoot(t_EigenDecompositionSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getSquareRoot());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getV(t_EigenDecompositionSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getVT(t_EigenDecompositionSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getVT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__d(t_EigenDecompositionSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::DiagonalMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getD());
        return ::org::hipparchus::linear::t_DiagonalMatrix::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__determinant(t_EigenDecompositionSymmetric *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDeterminant());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__eigenvalues(t_EigenDecompositionSymmetric *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getEigenvalues());
        return value.wrap();
      }

      static PyObject *t_EigenDecompositionSymmetric_get__epsilon(t_EigenDecompositionSymmetric *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEpsilon());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__solver(t_EigenDecompositionSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::DecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__squareRoot(t_EigenDecompositionSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getSquareRoot());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__v(t_EigenDecompositionSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__vT(t_EigenDecompositionSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getVT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FDSFactory$DerivativeField.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FDSFactory$DerivativeField::class$ = NULL;
        jmethodID *FDSFactory$DerivativeField::mids$ = NULL;
        bool FDSFactory$DerivativeField::live$ = false;

        jclass FDSFactory$DerivativeField::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FDSFactory$DerivativeField");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getOne_5997f22f8d76210e] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getPi_5997f22f8d76210e] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getRuntimeClass_d4b191ff8147475d] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_5997f22f8d76210e] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean FDSFactory$DerivativeField::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory$DerivativeField::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getOne_5997f22f8d76210e]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory$DerivativeField::getPi() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPi_5997f22f8d76210e]));
        }

        ::java::lang::Class FDSFactory$DerivativeField::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d4b191ff8147475d]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory$DerivativeField::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getZero_5997f22f8d76210e]));
        }

        jint FDSFactory$DerivativeField::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
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
        static PyObject *t_FDSFactory$DerivativeField_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDSFactory$DerivativeField_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDSFactory$DerivativeField_of_(t_FDSFactory$DerivativeField *self, PyObject *args);
        static PyObject *t_FDSFactory$DerivativeField_equals(t_FDSFactory$DerivativeField *self, PyObject *args);
        static PyObject *t_FDSFactory$DerivativeField_getOne(t_FDSFactory$DerivativeField *self);
        static PyObject *t_FDSFactory$DerivativeField_getPi(t_FDSFactory$DerivativeField *self);
        static PyObject *t_FDSFactory$DerivativeField_getRuntimeClass(t_FDSFactory$DerivativeField *self);
        static PyObject *t_FDSFactory$DerivativeField_getZero(t_FDSFactory$DerivativeField *self);
        static PyObject *t_FDSFactory$DerivativeField_hashCode(t_FDSFactory$DerivativeField *self, PyObject *args);
        static PyObject *t_FDSFactory$DerivativeField_get__one(t_FDSFactory$DerivativeField *self, void *data);
        static PyObject *t_FDSFactory$DerivativeField_get__pi(t_FDSFactory$DerivativeField *self, void *data);
        static PyObject *t_FDSFactory$DerivativeField_get__runtimeClass(t_FDSFactory$DerivativeField *self, void *data);
        static PyObject *t_FDSFactory$DerivativeField_get__zero(t_FDSFactory$DerivativeField *self, void *data);
        static PyObject *t_FDSFactory$DerivativeField_get__parameters_(t_FDSFactory$DerivativeField *self, void *data);
        static PyGetSetDef t_FDSFactory$DerivativeField__fields_[] = {
          DECLARE_GET_FIELD(t_FDSFactory$DerivativeField, one),
          DECLARE_GET_FIELD(t_FDSFactory$DerivativeField, pi),
          DECLARE_GET_FIELD(t_FDSFactory$DerivativeField, runtimeClass),
          DECLARE_GET_FIELD(t_FDSFactory$DerivativeField, zero),
          DECLARE_GET_FIELD(t_FDSFactory$DerivativeField, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FDSFactory$DerivativeField__methods_[] = {
          DECLARE_METHOD(t_FDSFactory$DerivativeField, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, of_, METH_VARARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, equals, METH_VARARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, getOne, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, getPi, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, getZero, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FDSFactory$DerivativeField)[] = {
          { Py_tp_methods, t_FDSFactory$DerivativeField__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FDSFactory$DerivativeField__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FDSFactory$DerivativeField)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FDSFactory$DerivativeField, t_FDSFactory$DerivativeField, FDSFactory$DerivativeField);
        PyObject *t_FDSFactory$DerivativeField::wrap_Object(const FDSFactory$DerivativeField& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDSFactory$DerivativeField::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDSFactory$DerivativeField *self = (t_FDSFactory$DerivativeField *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FDSFactory$DerivativeField::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDSFactory$DerivativeField::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDSFactory$DerivativeField *self = (t_FDSFactory$DerivativeField *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FDSFactory$DerivativeField::install(PyObject *module)
        {
          installType(&PY_TYPE(FDSFactory$DerivativeField), &PY_TYPE_DEF(FDSFactory$DerivativeField), module, "FDSFactory$DerivativeField", 0);
        }

        void t_FDSFactory$DerivativeField::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory$DerivativeField), "class_", make_descriptor(FDSFactory$DerivativeField::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory$DerivativeField), "wrapfn_", make_descriptor(t_FDSFactory$DerivativeField::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory$DerivativeField), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FDSFactory$DerivativeField_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FDSFactory$DerivativeField::initializeClass, 1)))
            return NULL;
          return t_FDSFactory$DerivativeField::wrap_Object(FDSFactory$DerivativeField(((t_FDSFactory$DerivativeField *) arg)->object.this$));
        }
        static PyObject *t_FDSFactory$DerivativeField_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FDSFactory$DerivativeField::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FDSFactory$DerivativeField_of_(t_FDSFactory$DerivativeField *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FDSFactory$DerivativeField_equals(t_FDSFactory$DerivativeField *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FDSFactory$DerivativeField), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FDSFactory$DerivativeField_getOne(t_FDSFactory$DerivativeField *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FDSFactory$DerivativeField_getPi(t_FDSFactory$DerivativeField *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FDSFactory$DerivativeField_getRuntimeClass(t_FDSFactory$DerivativeField *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result);
        }

        static PyObject *t_FDSFactory$DerivativeField_getZero(t_FDSFactory$DerivativeField *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FDSFactory$DerivativeField_hashCode(t_FDSFactory$DerivativeField *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FDSFactory$DerivativeField), (PyObject *) self, "hashCode", args, 2);
        }
        static PyObject *t_FDSFactory$DerivativeField_get__parameters_(t_FDSFactory$DerivativeField *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FDSFactory$DerivativeField_get__one(t_FDSFactory$DerivativeField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_FDSFactory$DerivativeField_get__pi(t_FDSFactory$DerivativeField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_FDSFactory$DerivativeField_get__runtimeClass(t_FDSFactory$DerivativeField *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_FDSFactory$DerivativeField_get__zero(t_FDSFactory$DerivativeField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/LegendreRuleFactory.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *LegendreRuleFactory::class$ = NULL;
          jmethodID *LegendreRuleFactory::mids$ = NULL;
          bool LegendreRuleFactory::live$ = false;

          jclass LegendreRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/LegendreRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_computeRule_9a5adfb225849173] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LegendreRuleFactory::LegendreRuleFactory() : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}
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
          static PyObject *t_LegendreRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LegendreRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LegendreRuleFactory_init_(t_LegendreRuleFactory *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_LegendreRuleFactory__methods_[] = {
            DECLARE_METHOD(t_LegendreRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LegendreRuleFactory, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LegendreRuleFactory)[] = {
            { Py_tp_methods, t_LegendreRuleFactory__methods_ },
            { Py_tp_init, (void *) t_LegendreRuleFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LegendreRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(LegendreRuleFactory, t_LegendreRuleFactory, LegendreRuleFactory);

          void t_LegendreRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(LegendreRuleFactory), &PY_TYPE_DEF(LegendreRuleFactory), module, "LegendreRuleFactory", 0);
          }

          void t_LegendreRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreRuleFactory), "class_", make_descriptor(LegendreRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreRuleFactory), "wrapfn_", make_descriptor(t_LegendreRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LegendreRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LegendreRuleFactory::initializeClass, 1)))
              return NULL;
            return t_LegendreRuleFactory::wrap_Object(LegendreRuleFactory(((t_LegendreRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_LegendreRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LegendreRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LegendreRuleFactory_init_(t_LegendreRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            LegendreRuleFactory object((jobject) NULL);

            INT_CALL(object = LegendreRuleFactory());
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
#include "org/hipparchus/geometry/partitioning/Embedding.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Embedding::class$ = NULL;
        jmethodID *Embedding::mids$ = NULL;
        bool Embedding::live$ = false;

        jclass Embedding::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Embedding");

            mids$ = new jmethodID[max_mid];
            mids$[mid_toSpace_328d0d966eeb9668] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
            mids$[mid_toSubSpace_328d0d966eeb9668] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::Point Embedding::toSpace(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_toSpace_328d0d966eeb9668], a0.this$));
        }

        ::org::hipparchus::geometry::Point Embedding::toSubSpace(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_toSubSpace_328d0d966eeb9668], a0.this$));
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
        static PyObject *t_Embedding_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Embedding_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Embedding_of_(t_Embedding *self, PyObject *args);
        static PyObject *t_Embedding_toSpace(t_Embedding *self, PyObject *arg);
        static PyObject *t_Embedding_toSubSpace(t_Embedding *self, PyObject *arg);
        static PyObject *t_Embedding_get__parameters_(t_Embedding *self, void *data);
        static PyGetSetDef t_Embedding__fields_[] = {
          DECLARE_GET_FIELD(t_Embedding, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Embedding__methods_[] = {
          DECLARE_METHOD(t_Embedding, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Embedding, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Embedding, of_, METH_VARARGS),
          DECLARE_METHOD(t_Embedding, toSpace, METH_O),
          DECLARE_METHOD(t_Embedding, toSubSpace, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Embedding)[] = {
          { Py_tp_methods, t_Embedding__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Embedding__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Embedding)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Embedding, t_Embedding, Embedding);
        PyObject *t_Embedding::wrap_Object(const Embedding& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Embedding::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Embedding *self = (t_Embedding *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_Embedding::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Embedding::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Embedding *self = (t_Embedding *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_Embedding::install(PyObject *module)
        {
          installType(&PY_TYPE(Embedding), &PY_TYPE_DEF(Embedding), module, "Embedding", 0);
        }

        void t_Embedding::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Embedding), "class_", make_descriptor(Embedding::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Embedding), "wrapfn_", make_descriptor(t_Embedding::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Embedding), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Embedding_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Embedding::initializeClass, 1)))
            return NULL;
          return t_Embedding::wrap_Object(Embedding(((t_Embedding *) arg)->object.this$));
        }
        static PyObject *t_Embedding_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Embedding::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Embedding_of_(t_Embedding *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Embedding_toSpace(t_Embedding *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::Point result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.toSpace(a0));
            return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "toSpace", arg);
          return NULL;
        }

        static PyObject *t_Embedding_toSubSpace(t_Embedding *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::Point result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.toSubSpace(a0));
            return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "toSubSpace", arg);
          return NULL;
        }
        static PyObject *t_Embedding_get__parameters_(t_Embedding *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *EphemerisFile$SatelliteEphemeris::class$ = NULL;
        jmethodID *EphemerisFile$SatelliteEphemeris::mids$ = NULL;
        bool EphemerisFile$SatelliteEphemeris::live$ = false;

        jclass EphemerisFile$SatelliteEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/EphemerisFile$SatelliteEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getId_3cffd47377eca18a] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getPropagator_fa108fc36df3791a] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getPropagator_587eea156586204f] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getSegments_0d9551367f7ecdef] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_7a97f7e149e79afb] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_7a97f7e149e79afb] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::String EphemerisFile$SatelliteEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_3cffd47377eca18a]));
        }

        jdouble EphemerisFile$SatelliteEphemeris::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
        }

        ::org::orekit::propagation::BoundedPropagator EphemerisFile$SatelliteEphemeris::getPropagator() const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_fa108fc36df3791a]));
        }

        ::org::orekit::propagation::BoundedPropagator EphemerisFile$SatelliteEphemeris::getPropagator(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_587eea156586204f], a0.this$));
        }

        ::java::util::List EphemerisFile$SatelliteEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_0d9551367f7ecdef]));
        }

        ::org::orekit::time::AbsoluteDate EphemerisFile$SatelliteEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_7a97f7e149e79afb]));
        }

        ::org::orekit::time::AbsoluteDate EphemerisFile$SatelliteEphemeris::getStop() const
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
        static PyObject *t_EphemerisFile$SatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_of_(t_EphemerisFile$SatelliteEphemeris *self, PyObject *args);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getId(t_EphemerisFile$SatelliteEphemeris *self);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getMu(t_EphemerisFile$SatelliteEphemeris *self);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getPropagator(t_EphemerisFile$SatelliteEphemeris *self, PyObject *args);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getSegments(t_EphemerisFile$SatelliteEphemeris *self);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getStart(t_EphemerisFile$SatelliteEphemeris *self);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getStop(t_EphemerisFile$SatelliteEphemeris *self);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__id(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__mu(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__propagator(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__segments(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__start(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__stop(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__parameters_(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyGetSetDef t_EphemerisFile$SatelliteEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, id),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, mu),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, propagator),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, segments),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, start),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, stop),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EphemerisFile$SatelliteEphemeris__methods_[] = {
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, of_, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getMu, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getPropagator, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EphemerisFile$SatelliteEphemeris)[] = {
          { Py_tp_methods, t_EphemerisFile$SatelliteEphemeris__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EphemerisFile$SatelliteEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EphemerisFile$SatelliteEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EphemerisFile$SatelliteEphemeris, t_EphemerisFile$SatelliteEphemeris, EphemerisFile$SatelliteEphemeris);
        PyObject *t_EphemerisFile$SatelliteEphemeris::wrap_Object(const EphemerisFile$SatelliteEphemeris& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_EphemerisFile$SatelliteEphemeris::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFile$SatelliteEphemeris *self = (t_EphemerisFile$SatelliteEphemeris *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_EphemerisFile$SatelliteEphemeris::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_EphemerisFile$SatelliteEphemeris::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFile$SatelliteEphemeris *self = (t_EphemerisFile$SatelliteEphemeris *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_EphemerisFile$SatelliteEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(EphemerisFile$SatelliteEphemeris), &PY_TYPE_DEF(EphemerisFile$SatelliteEphemeris), module, "EphemerisFile$SatelliteEphemeris", 0);
        }

        void t_EphemerisFile$SatelliteEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile$SatelliteEphemeris), "class_", make_descriptor(EphemerisFile$SatelliteEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile$SatelliteEphemeris), "wrapfn_", make_descriptor(t_EphemerisFile$SatelliteEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile$SatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EphemerisFile$SatelliteEphemeris::initializeClass, 1)))
            return NULL;
          return t_EphemerisFile$SatelliteEphemeris::wrap_Object(EphemerisFile$SatelliteEphemeris(((t_EphemerisFile$SatelliteEphemeris *) arg)->object.this$));
        }
        static PyObject *t_EphemerisFile$SatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EphemerisFile$SatelliteEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_of_(t_EphemerisFile$SatelliteEphemeris *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getId(t_EphemerisFile$SatelliteEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getMu(t_EphemerisFile$SatelliteEphemeris *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getPropagator(t_EphemerisFile$SatelliteEphemeris *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);
              OBJ_CALL(result = self->object.getPropagator());
              return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getPropagator(a0));
                return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
          return NULL;
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getSegments(t_EphemerisFile$SatelliteEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getStart(t_EphemerisFile$SatelliteEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getStop(t_EphemerisFile$SatelliteEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__parameters_(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__id(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__mu(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__propagator(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          ::org::orekit::propagation::BoundedPropagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagator());
          return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__segments(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__start(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__stop(t_EphemerisFile$SatelliteEphemeris *self, void *data)
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
#include "org/orekit/frames/Predefined.h"
#include "org/orekit/frames/Predefined.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *Predefined::class$ = NULL;
      jmethodID *Predefined::mids$ = NULL;
      bool Predefined::live$ = false;
      Predefined *Predefined::CIRF_CONVENTIONS_1996_ACCURATE_EOP = NULL;
      Predefined *Predefined::CIRF_CONVENTIONS_1996_SIMPLE_EOP = NULL;
      Predefined *Predefined::CIRF_CONVENTIONS_2003_ACCURATE_EOP = NULL;
      Predefined *Predefined::CIRF_CONVENTIONS_2003_SIMPLE_EOP = NULL;
      Predefined *Predefined::CIRF_CONVENTIONS_2010_ACCURATE_EOP = NULL;
      Predefined *Predefined::CIRF_CONVENTIONS_2010_SIMPLE_EOP = NULL;
      Predefined *Predefined::ECLIPTIC_CONVENTIONS_1996 = NULL;
      Predefined *Predefined::ECLIPTIC_CONVENTIONS_2003 = NULL;
      Predefined *Predefined::ECLIPTIC_CONVENTIONS_2010 = NULL;
      Predefined *Predefined::EME2000 = NULL;
      Predefined *Predefined::GCRF = NULL;
      Predefined *Predefined::GTOD_CONVENTIONS_1996_ACCURATE_EOP = NULL;
      Predefined *Predefined::GTOD_CONVENTIONS_1996_SIMPLE_EOP = NULL;
      Predefined *Predefined::GTOD_CONVENTIONS_2003_ACCURATE_EOP = NULL;
      Predefined *Predefined::GTOD_CONVENTIONS_2003_SIMPLE_EOP = NULL;
      Predefined *Predefined::GTOD_CONVENTIONS_2010_ACCURATE_EOP = NULL;
      Predefined *Predefined::GTOD_CONVENTIONS_2010_SIMPLE_EOP = NULL;
      Predefined *Predefined::GTOD_WITHOUT_EOP_CORRECTIONS = NULL;
      Predefined *Predefined::ICRF = NULL;
      Predefined *Predefined::ITRF_CIO_CONV_1996_ACCURATE_EOP = NULL;
      Predefined *Predefined::ITRF_CIO_CONV_1996_SIMPLE_EOP = NULL;
      Predefined *Predefined::ITRF_CIO_CONV_2003_ACCURATE_EOP = NULL;
      Predefined *Predefined::ITRF_CIO_CONV_2003_SIMPLE_EOP = NULL;
      Predefined *Predefined::ITRF_CIO_CONV_2010_ACCURATE_EOP = NULL;
      Predefined *Predefined::ITRF_CIO_CONV_2010_SIMPLE_EOP = NULL;
      Predefined *Predefined::ITRF_EQUINOX_CONV_1996_ACCURATE_EOP = NULL;
      Predefined *Predefined::ITRF_EQUINOX_CONV_1996_SIMPLE_EOP = NULL;
      Predefined *Predefined::ITRF_EQUINOX_CONV_2003_ACCURATE_EOP = NULL;
      Predefined *Predefined::ITRF_EQUINOX_CONV_2003_SIMPLE_EOP = NULL;
      Predefined *Predefined::ITRF_EQUINOX_CONV_2010_ACCURATE_EOP = NULL;
      Predefined *Predefined::ITRF_EQUINOX_CONV_2010_SIMPLE_EOP = NULL;
      Predefined *Predefined::MOD_CONVENTIONS_1996 = NULL;
      Predefined *Predefined::MOD_CONVENTIONS_2003 = NULL;
      Predefined *Predefined::MOD_CONVENTIONS_2010 = NULL;
      Predefined *Predefined::MOD_WITHOUT_EOP_CORRECTIONS = NULL;
      Predefined *Predefined::PZ90_11 = NULL;
      Predefined *Predefined::TEME = NULL;
      Predefined *Predefined::TIRF_CONVENTIONS_1996_ACCURATE_EOP = NULL;
      Predefined *Predefined::TIRF_CONVENTIONS_1996_SIMPLE_EOP = NULL;
      Predefined *Predefined::TIRF_CONVENTIONS_2003_ACCURATE_EOP = NULL;
      Predefined *Predefined::TIRF_CONVENTIONS_2003_SIMPLE_EOP = NULL;
      Predefined *Predefined::TIRF_CONVENTIONS_2010_ACCURATE_EOP = NULL;
      Predefined *Predefined::TIRF_CONVENTIONS_2010_SIMPLE_EOP = NULL;
      Predefined *Predefined::TOD_CONVENTIONS_1996_ACCURATE_EOP = NULL;
      Predefined *Predefined::TOD_CONVENTIONS_1996_SIMPLE_EOP = NULL;
      Predefined *Predefined::TOD_CONVENTIONS_2003_ACCURATE_EOP = NULL;
      Predefined *Predefined::TOD_CONVENTIONS_2003_SIMPLE_EOP = NULL;
      Predefined *Predefined::TOD_CONVENTIONS_2010_ACCURATE_EOP = NULL;
      Predefined *Predefined::TOD_CONVENTIONS_2010_SIMPLE_EOP = NULL;
      Predefined *Predefined::TOD_WITHOUT_EOP_CORRECTIONS = NULL;
      Predefined *Predefined::VEIS_1950 = NULL;

      jclass Predefined::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/Predefined");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_valueOf_6474844639abc62c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/Predefined;");
          mids$[mid_values_5a113eb816ce385d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/Predefined;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          CIRF_CONVENTIONS_1996_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "CIRF_CONVENTIONS_1996_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          CIRF_CONVENTIONS_1996_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "CIRF_CONVENTIONS_1996_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          CIRF_CONVENTIONS_2003_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "CIRF_CONVENTIONS_2003_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          CIRF_CONVENTIONS_2003_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "CIRF_CONVENTIONS_2003_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          CIRF_CONVENTIONS_2010_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "CIRF_CONVENTIONS_2010_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          CIRF_CONVENTIONS_2010_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "CIRF_CONVENTIONS_2010_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          ECLIPTIC_CONVENTIONS_1996 = new Predefined(env->getStaticObjectField(cls, "ECLIPTIC_CONVENTIONS_1996", "Lorg/orekit/frames/Predefined;"));
          ECLIPTIC_CONVENTIONS_2003 = new Predefined(env->getStaticObjectField(cls, "ECLIPTIC_CONVENTIONS_2003", "Lorg/orekit/frames/Predefined;"));
          ECLIPTIC_CONVENTIONS_2010 = new Predefined(env->getStaticObjectField(cls, "ECLIPTIC_CONVENTIONS_2010", "Lorg/orekit/frames/Predefined;"));
          EME2000 = new Predefined(env->getStaticObjectField(cls, "EME2000", "Lorg/orekit/frames/Predefined;"));
          GCRF = new Predefined(env->getStaticObjectField(cls, "GCRF", "Lorg/orekit/frames/Predefined;"));
          GTOD_CONVENTIONS_1996_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "GTOD_CONVENTIONS_1996_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          GTOD_CONVENTIONS_1996_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "GTOD_CONVENTIONS_1996_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          GTOD_CONVENTIONS_2003_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "GTOD_CONVENTIONS_2003_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          GTOD_CONVENTIONS_2003_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "GTOD_CONVENTIONS_2003_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          GTOD_CONVENTIONS_2010_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "GTOD_CONVENTIONS_2010_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          GTOD_CONVENTIONS_2010_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "GTOD_CONVENTIONS_2010_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          GTOD_WITHOUT_EOP_CORRECTIONS = new Predefined(env->getStaticObjectField(cls, "GTOD_WITHOUT_EOP_CORRECTIONS", "Lorg/orekit/frames/Predefined;"));
          ICRF = new Predefined(env->getStaticObjectField(cls, "ICRF", "Lorg/orekit/frames/Predefined;"));
          ITRF_CIO_CONV_1996_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_CIO_CONV_1996_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_CIO_CONV_1996_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_CIO_CONV_1996_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_CIO_CONV_2003_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_CIO_CONV_2003_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_CIO_CONV_2003_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_CIO_CONV_2003_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_CIO_CONV_2010_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_CIO_CONV_2010_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_CIO_CONV_2010_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_CIO_CONV_2010_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_EQUINOX_CONV_1996_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_EQUINOX_CONV_1996_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_EQUINOX_CONV_1996_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_EQUINOX_CONV_1996_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_EQUINOX_CONV_2003_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_EQUINOX_CONV_2003_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_EQUINOX_CONV_2003_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_EQUINOX_CONV_2003_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_EQUINOX_CONV_2010_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_EQUINOX_CONV_2010_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          ITRF_EQUINOX_CONV_2010_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "ITRF_EQUINOX_CONV_2010_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          MOD_CONVENTIONS_1996 = new Predefined(env->getStaticObjectField(cls, "MOD_CONVENTIONS_1996", "Lorg/orekit/frames/Predefined;"));
          MOD_CONVENTIONS_2003 = new Predefined(env->getStaticObjectField(cls, "MOD_CONVENTIONS_2003", "Lorg/orekit/frames/Predefined;"));
          MOD_CONVENTIONS_2010 = new Predefined(env->getStaticObjectField(cls, "MOD_CONVENTIONS_2010", "Lorg/orekit/frames/Predefined;"));
          MOD_WITHOUT_EOP_CORRECTIONS = new Predefined(env->getStaticObjectField(cls, "MOD_WITHOUT_EOP_CORRECTIONS", "Lorg/orekit/frames/Predefined;"));
          PZ90_11 = new Predefined(env->getStaticObjectField(cls, "PZ90_11", "Lorg/orekit/frames/Predefined;"));
          TEME = new Predefined(env->getStaticObjectField(cls, "TEME", "Lorg/orekit/frames/Predefined;"));
          TIRF_CONVENTIONS_1996_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "TIRF_CONVENTIONS_1996_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          TIRF_CONVENTIONS_1996_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "TIRF_CONVENTIONS_1996_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          TIRF_CONVENTIONS_2003_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "TIRF_CONVENTIONS_2003_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          TIRF_CONVENTIONS_2003_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "TIRF_CONVENTIONS_2003_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          TIRF_CONVENTIONS_2010_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "TIRF_CONVENTIONS_2010_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          TIRF_CONVENTIONS_2010_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "TIRF_CONVENTIONS_2010_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_CONVENTIONS_1996_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "TOD_CONVENTIONS_1996_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_CONVENTIONS_1996_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "TOD_CONVENTIONS_1996_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_CONVENTIONS_2003_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "TOD_CONVENTIONS_2003_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_CONVENTIONS_2003_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "TOD_CONVENTIONS_2003_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_CONVENTIONS_2010_ACCURATE_EOP = new Predefined(env->getStaticObjectField(cls, "TOD_CONVENTIONS_2010_ACCURATE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_CONVENTIONS_2010_SIMPLE_EOP = new Predefined(env->getStaticObjectField(cls, "TOD_CONVENTIONS_2010_SIMPLE_EOP", "Lorg/orekit/frames/Predefined;"));
          TOD_WITHOUT_EOP_CORRECTIONS = new Predefined(env->getStaticObjectField(cls, "TOD_WITHOUT_EOP_CORRECTIONS", "Lorg/orekit/frames/Predefined;"));
          VEIS_1950 = new Predefined(env->getStaticObjectField(cls, "VEIS_1950", "Lorg/orekit/frames/Predefined;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String Predefined::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      Predefined Predefined::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Predefined(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6474844639abc62c], a0.this$));
      }

      JArray< Predefined > Predefined::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< Predefined >(env->callStaticObjectMethod(cls, mids$[mid_values_5a113eb816ce385d]));
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
      static PyObject *t_Predefined_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Predefined_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Predefined_of_(t_Predefined *self, PyObject *args);
      static PyObject *t_Predefined_getName(t_Predefined *self);
      static PyObject *t_Predefined_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_Predefined_values(PyTypeObject *type);
      static PyObject *t_Predefined_get__name(t_Predefined *self, void *data);
      static PyObject *t_Predefined_get__parameters_(t_Predefined *self, void *data);
      static PyGetSetDef t_Predefined__fields_[] = {
        DECLARE_GET_FIELD(t_Predefined, name),
        DECLARE_GET_FIELD(t_Predefined, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Predefined__methods_[] = {
        DECLARE_METHOD(t_Predefined, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Predefined, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Predefined, of_, METH_VARARGS),
        DECLARE_METHOD(t_Predefined, getName, METH_NOARGS),
        DECLARE_METHOD(t_Predefined, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Predefined, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Predefined)[] = {
        { Py_tp_methods, t_Predefined__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Predefined__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Predefined)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(Predefined, t_Predefined, Predefined);
      PyObject *t_Predefined::wrap_Object(const Predefined& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Predefined::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Predefined *self = (t_Predefined *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Predefined::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Predefined::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Predefined *self = (t_Predefined *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Predefined::install(PyObject *module)
      {
        installType(&PY_TYPE(Predefined), &PY_TYPE_DEF(Predefined), module, "Predefined", 0);
      }

      void t_Predefined::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "class_", make_descriptor(Predefined::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "wrapfn_", make_descriptor(t_Predefined::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "boxfn_", make_descriptor(boxObject));
        env->getClass(Predefined::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "CIRF_CONVENTIONS_1996_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::CIRF_CONVENTIONS_1996_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "CIRF_CONVENTIONS_1996_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::CIRF_CONVENTIONS_1996_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "CIRF_CONVENTIONS_2003_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::CIRF_CONVENTIONS_2003_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "CIRF_CONVENTIONS_2003_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::CIRF_CONVENTIONS_2003_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "CIRF_CONVENTIONS_2010_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::CIRF_CONVENTIONS_2010_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "CIRF_CONVENTIONS_2010_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::CIRF_CONVENTIONS_2010_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ECLIPTIC_CONVENTIONS_1996", make_descriptor(t_Predefined::wrap_Object(*Predefined::ECLIPTIC_CONVENTIONS_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ECLIPTIC_CONVENTIONS_2003", make_descriptor(t_Predefined::wrap_Object(*Predefined::ECLIPTIC_CONVENTIONS_2003)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ECLIPTIC_CONVENTIONS_2010", make_descriptor(t_Predefined::wrap_Object(*Predefined::ECLIPTIC_CONVENTIONS_2010)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "EME2000", make_descriptor(t_Predefined::wrap_Object(*Predefined::EME2000)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GCRF", make_descriptor(t_Predefined::wrap_Object(*Predefined::GCRF)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_CONVENTIONS_1996_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_CONVENTIONS_1996_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_CONVENTIONS_1996_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_CONVENTIONS_1996_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_CONVENTIONS_2003_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_CONVENTIONS_2003_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_CONVENTIONS_2003_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_CONVENTIONS_2003_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_CONVENTIONS_2010_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_CONVENTIONS_2010_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_CONVENTIONS_2010_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_CONVENTIONS_2010_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "GTOD_WITHOUT_EOP_CORRECTIONS", make_descriptor(t_Predefined::wrap_Object(*Predefined::GTOD_WITHOUT_EOP_CORRECTIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ICRF", make_descriptor(t_Predefined::wrap_Object(*Predefined::ICRF)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_CIO_CONV_1996_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_CIO_CONV_1996_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_CIO_CONV_1996_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_CIO_CONV_1996_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_CIO_CONV_2003_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_CIO_CONV_2003_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_CIO_CONV_2003_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_CIO_CONV_2003_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_CIO_CONV_2010_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_CIO_CONV_2010_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_CIO_CONV_2010_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_CIO_CONV_2010_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_EQUINOX_CONV_1996_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_EQUINOX_CONV_1996_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_EQUINOX_CONV_1996_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_EQUINOX_CONV_1996_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_EQUINOX_CONV_2003_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_EQUINOX_CONV_2003_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_EQUINOX_CONV_2003_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_EQUINOX_CONV_2003_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_EQUINOX_CONV_2010_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_EQUINOX_CONV_2010_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "ITRF_EQUINOX_CONV_2010_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::ITRF_EQUINOX_CONV_2010_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "MOD_CONVENTIONS_1996", make_descriptor(t_Predefined::wrap_Object(*Predefined::MOD_CONVENTIONS_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "MOD_CONVENTIONS_2003", make_descriptor(t_Predefined::wrap_Object(*Predefined::MOD_CONVENTIONS_2003)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "MOD_CONVENTIONS_2010", make_descriptor(t_Predefined::wrap_Object(*Predefined::MOD_CONVENTIONS_2010)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "MOD_WITHOUT_EOP_CORRECTIONS", make_descriptor(t_Predefined::wrap_Object(*Predefined::MOD_WITHOUT_EOP_CORRECTIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "PZ90_11", make_descriptor(t_Predefined::wrap_Object(*Predefined::PZ90_11)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TEME", make_descriptor(t_Predefined::wrap_Object(*Predefined::TEME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TIRF_CONVENTIONS_1996_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TIRF_CONVENTIONS_1996_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TIRF_CONVENTIONS_1996_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TIRF_CONVENTIONS_1996_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TIRF_CONVENTIONS_2003_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TIRF_CONVENTIONS_2003_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TIRF_CONVENTIONS_2003_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TIRF_CONVENTIONS_2003_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TIRF_CONVENTIONS_2010_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TIRF_CONVENTIONS_2010_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TIRF_CONVENTIONS_2010_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TIRF_CONVENTIONS_2010_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_CONVENTIONS_1996_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_CONVENTIONS_1996_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_CONVENTIONS_1996_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_CONVENTIONS_1996_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_CONVENTIONS_2003_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_CONVENTIONS_2003_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_CONVENTIONS_2003_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_CONVENTIONS_2003_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_CONVENTIONS_2010_ACCURATE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_CONVENTIONS_2010_ACCURATE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_CONVENTIONS_2010_SIMPLE_EOP", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_CONVENTIONS_2010_SIMPLE_EOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "TOD_WITHOUT_EOP_CORRECTIONS", make_descriptor(t_Predefined::wrap_Object(*Predefined::TOD_WITHOUT_EOP_CORRECTIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Predefined), "VEIS_1950", make_descriptor(t_Predefined::wrap_Object(*Predefined::VEIS_1950)));
      }

      static PyObject *t_Predefined_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Predefined::initializeClass, 1)))
          return NULL;
        return t_Predefined::wrap_Object(Predefined(((t_Predefined *) arg)->object.this$));
      }
      static PyObject *t_Predefined_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Predefined::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Predefined_of_(t_Predefined *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Predefined_getName(t_Predefined *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_Predefined_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        Predefined result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::Predefined::valueOf(a0));
          return t_Predefined::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_Predefined_values(PyTypeObject *type)
      {
        JArray< Predefined > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::Predefined::values());
        return JArray<jobject>(result.this$).wrap(t_Predefined::wrap_jobject);
      }
      static PyObject *t_Predefined_get__parameters_(t_Predefined *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Predefined_get__name(t_Predefined *self, void *data)
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Data.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Header.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm01::class$ = NULL;
              jmethodID *SsrIgm01::mids$ = NULL;
              bool SsrIgm01::live$ = false;

              jclass SsrIgm01::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ffa1982feda4f332] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm01Data_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSsrIgm01Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm01::SsrIgm01(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm01Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_ffa1982feda4f332, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm01::getSsrIgm01Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm01Data_1e62c2f73fbdd1c4]));
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
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm01_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm01_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm01_of_(t_SsrIgm01 *self, PyObject *args);
              static int t_SsrIgm01_init_(t_SsrIgm01 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm01_getSsrIgm01Data(t_SsrIgm01 *self);
              static PyObject *t_SsrIgm01_get__ssrIgm01Data(t_SsrIgm01 *self, void *data);
              static PyObject *t_SsrIgm01_get__parameters_(t_SsrIgm01 *self, void *data);
              static PyGetSetDef t_SsrIgm01__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm01, ssrIgm01Data),
                DECLARE_GET_FIELD(t_SsrIgm01, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm01__methods_[] = {
                DECLARE_METHOD(t_SsrIgm01, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm01, getSsrIgm01Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm01)[] = {
                { Py_tp_methods, t_SsrIgm01__methods_ },
                { Py_tp_init, (void *) t_SsrIgm01_init_ },
                { Py_tp_getset, t_SsrIgm01__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm01)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm01, t_SsrIgm01, SsrIgm01);
              PyObject *t_SsrIgm01::wrap_Object(const SsrIgm01& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm01::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm01 *self = (t_SsrIgm01 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm01::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm01::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm01 *self = (t_SsrIgm01 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm01::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm01), &PY_TYPE_DEF(SsrIgm01), module, "SsrIgm01", 0);
              }

              void t_SsrIgm01::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01), "class_", make_descriptor(SsrIgm01::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01), "wrapfn_", make_descriptor(t_SsrIgm01::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm01_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm01::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm01::wrap_Object(SsrIgm01(((t_SsrIgm01 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm01_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm01::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm01_of_(t_SsrIgm01 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm01_init_(t_SsrIgm01 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm01Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm01 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm01Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm01(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm01Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm01Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm01_getSsrIgm01Data(t_SsrIgm01 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm01Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm01_get__parameters_(t_SsrIgm01 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm01_get__ssrIgm01Data(t_SsrIgm01 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm01Data());
                return ::java::util::t_Map::wrap_Object(value);
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
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ThrustDirectionAndAttitudeProvider::class$ = NULL;
          jmethodID *ThrustDirectionAndAttitudeProvider::mids$ = NULL;
          bool ThrustDirectionAndAttitudeProvider::live$ = false;

          jclass ThrustDirectionAndAttitudeProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_buildFromCustomAttitude_f505ac706dd9e1f4] = env->getStaticMethodID(cls, "buildFromCustomAttitude", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;");
              mids$[mid_buildFromDirectionInFrame_607094d91814431a] = env->getStaticMethodID(cls, "buildFromDirectionInFrame", "(Lorg/orekit/frames/Frame;Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;");
              mids$[mid_buildFromDirectionInLOF_8aa09489b3ae0491] = env->getStaticMethodID(cls, "buildFromDirectionInLOF", "(Lorg/orekit/frames/LOF;Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;");
              mids$[mid_buildFromFixedDirectionInSatelliteFrame_80eb1072ad4c73de] = env->getStaticMethodID(cls, "buildFromFixedDirectionInSatelliteFrame", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;");
              mids$[mid_getAttitude_1306ac39e1d2de3f] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
              mids$[mid_getAttitude_77e3383de01f3e48] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
              mids$[mid_getManeuverAttitudeProvider_6df6b78ab9377151] = env->getMethodID(cls, "getManeuverAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
              mids$[mid_getThrusterAxisInSatelliteFrame_f88961cca75a2c0a] = env->getMethodID(cls, "getThrusterAxisInSatelliteFrame", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAttitudeFromFrame_1306ac39e1d2de3f] = env->getMethodID(cls, "getAttitudeFromFrame", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ThrustDirectionAndAttitudeProvider ThrustDirectionAndAttitudeProvider::buildFromCustomAttitude(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ThrustDirectionAndAttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_buildFromCustomAttitude_f505ac706dd9e1f4], a0.this$, a1.this$));
          }

          ThrustDirectionAndAttitudeProvider ThrustDirectionAndAttitudeProvider::buildFromDirectionInFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ThrustDirectionAndAttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_buildFromDirectionInFrame_607094d91814431a], a0.this$, a1.this$, a2.this$));
          }

          ThrustDirectionAndAttitudeProvider ThrustDirectionAndAttitudeProvider::buildFromDirectionInLOF(const ::org::orekit::frames::LOF & a0, const ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ThrustDirectionAndAttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_buildFromDirectionInLOF_8aa09489b3ae0491], a0.this$, a1.this$, a2.this$));
          }

          ThrustDirectionAndAttitudeProvider ThrustDirectionAndAttitudeProvider::buildFromFixedDirectionInSatelliteFrame(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ThrustDirectionAndAttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_buildFromFixedDirectionInSatelliteFrame_80eb1072ad4c73de], a0.this$));
          }

          ::org::orekit::attitudes::Attitude ThrustDirectionAndAttitudeProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_1306ac39e1d2de3f], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::attitudes::FieldAttitude ThrustDirectionAndAttitudeProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_77e3383de01f3e48], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::attitudes::AttitudeProvider ThrustDirectionAndAttitudeProvider::getManeuverAttitudeProvider() const
          {
            return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getManeuverAttitudeProvider_6df6b78ab9377151]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustDirectionAndAttitudeProvider::getThrusterAxisInSatelliteFrame() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrusterAxisInSatelliteFrame_f88961cca75a2c0a]));
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
          static PyObject *t_ThrustDirectionAndAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromCustomAttitude(PyTypeObject *type, PyObject *args);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromDirectionInFrame(PyTypeObject *type, PyObject *args);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromDirectionInLOF(PyTypeObject *type, PyObject *args);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromFixedDirectionInSatelliteFrame(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_getAttitude(t_ThrustDirectionAndAttitudeProvider *self, PyObject *args);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_getManeuverAttitudeProvider(t_ThrustDirectionAndAttitudeProvider *self);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_getThrusterAxisInSatelliteFrame(t_ThrustDirectionAndAttitudeProvider *self);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_get__maneuverAttitudeProvider(t_ThrustDirectionAndAttitudeProvider *self, void *data);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_get__thrusterAxisInSatelliteFrame(t_ThrustDirectionAndAttitudeProvider *self, void *data);
          static PyGetSetDef t_ThrustDirectionAndAttitudeProvider__fields_[] = {
            DECLARE_GET_FIELD(t_ThrustDirectionAndAttitudeProvider, maneuverAttitudeProvider),
            DECLARE_GET_FIELD(t_ThrustDirectionAndAttitudeProvider, thrusterAxisInSatelliteFrame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ThrustDirectionAndAttitudeProvider__methods_[] = {
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, buildFromCustomAttitude, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, buildFromDirectionInFrame, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, buildFromDirectionInLOF, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, buildFromFixedDirectionInSatelliteFrame, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, getAttitude, METH_VARARGS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, getManeuverAttitudeProvider, METH_NOARGS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, getThrusterAxisInSatelliteFrame, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ThrustDirectionAndAttitudeProvider)[] = {
            { Py_tp_methods, t_ThrustDirectionAndAttitudeProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ThrustDirectionAndAttitudeProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ThrustDirectionAndAttitudeProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ThrustDirectionAndAttitudeProvider, t_ThrustDirectionAndAttitudeProvider, ThrustDirectionAndAttitudeProvider);

          void t_ThrustDirectionAndAttitudeProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(ThrustDirectionAndAttitudeProvider), &PY_TYPE_DEF(ThrustDirectionAndAttitudeProvider), module, "ThrustDirectionAndAttitudeProvider", 0);
          }

          void t_ThrustDirectionAndAttitudeProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustDirectionAndAttitudeProvider), "class_", make_descriptor(ThrustDirectionAndAttitudeProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustDirectionAndAttitudeProvider), "wrapfn_", make_descriptor(t_ThrustDirectionAndAttitudeProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustDirectionAndAttitudeProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ThrustDirectionAndAttitudeProvider::initializeClass, 1)))
              return NULL;
            return t_ThrustDirectionAndAttitudeProvider::wrap_Object(ThrustDirectionAndAttitudeProvider(((t_ThrustDirectionAndAttitudeProvider *) arg)->object.this$));
          }
          static PyObject *t_ThrustDirectionAndAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ThrustDirectionAndAttitudeProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromCustomAttitude(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ThrustDirectionAndAttitudeProvider result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider::buildFromCustomAttitude(a0, a1));
              return t_ThrustDirectionAndAttitudeProvider::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "buildFromCustomAttitude", args);
            return NULL;
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromDirectionInFrame(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ThrustDirectionAndAttitudeProvider result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider::buildFromDirectionInFrame(a0, a1, a2));
              return t_ThrustDirectionAndAttitudeProvider::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "buildFromDirectionInFrame", args);
            return NULL;
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromDirectionInLOF(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::frames::LOF a0((jobject) NULL);
            ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ThrustDirectionAndAttitudeProvider result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::LOF::initializeClass, ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider::buildFromDirectionInLOF(a0, a1, a2));
              return t_ThrustDirectionAndAttitudeProvider::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "buildFromDirectionInLOF", args);
            return NULL;
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromFixedDirectionInSatelliteFrame(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ThrustDirectionAndAttitudeProvider result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider::buildFromFixedDirectionInSatelliteFrame(a0));
              return t_ThrustDirectionAndAttitudeProvider::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "buildFromFixedDirectionInSatelliteFrame", arg);
            return NULL;
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_getAttitude(t_ThrustDirectionAndAttitudeProvider *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
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
            }

            PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
            return NULL;
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_getManeuverAttitudeProvider(t_ThrustDirectionAndAttitudeProvider *self)
          {
            ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
            OBJ_CALL(result = self->object.getManeuverAttitudeProvider());
            return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_getThrusterAxisInSatelliteFrame(t_ThrustDirectionAndAttitudeProvider *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getThrusterAxisInSatelliteFrame());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_get__maneuverAttitudeProvider(t_ThrustDirectionAndAttitudeProvider *self, void *data)
          {
            ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
            OBJ_CALL(value = self->object.getManeuverAttitudeProvider());
            return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_get__thrusterAxisInSatelliteFrame(t_ThrustDirectionAndAttitudeProvider *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getThrusterAxisInSatelliteFrame());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/ElevationDetector.h"
#include "org/orekit/utils/ElevationMask.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/ElevationDetector.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *ElevationDetector::class$ = NULL;
        jmethodID *ElevationDetector::mids$ = NULL;
        bool ElevationDetector::live$ = false;

        jclass ElevationDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/ElevationDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a649bdeaffd47ec2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_init$_279ef3a80970d2f4] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getElevationMask_d8e21ec66d7f6ed7] = env->getMethodID(cls, "getElevationMask", "()Lorg/orekit/utils/ElevationMask;");
            mids$[mid_getMinElevation_557b8123390d8d0c] = env->getMethodID(cls, "getMinElevation", "()D");
            mids$[mid_getRefractionModel_9124ab694682a769] = env->getMethodID(cls, "getRefractionModel", "()Lorg/orekit/models/AtmosphericRefractionModel;");
            mids$[mid_getTopocentricFrame_2bb3e750d93d59cc] = env->getMethodID(cls, "getTopocentricFrame", "()Lorg/orekit/frames/TopocentricFrame;");
            mids$[mid_withConstantElevation_e771b1ba22883482] = env->getMethodID(cls, "withConstantElevation", "(D)Lorg/orekit/propagation/events/ElevationDetector;");
            mids$[mid_withElevationMask_e0937b995cfaea28] = env->getMethodID(cls, "withElevationMask", "(Lorg/orekit/utils/ElevationMask;)Lorg/orekit/propagation/events/ElevationDetector;");
            mids$[mid_withRefraction_758a24a34365f671] = env->getMethodID(cls, "withRefraction", "(Lorg/orekit/models/AtmosphericRefractionModel;)Lorg/orekit/propagation/events/ElevationDetector;");
            mids$[mid_create_8306a8590affdb05] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/ElevationDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ElevationDetector::ElevationDetector(const ::org::orekit::frames::TopocentricFrame & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_a649bdeaffd47ec2, a0.this$)) {}

        ElevationDetector::ElevationDetector(jdouble a0, jdouble a1, const ::org::orekit::frames::TopocentricFrame & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_279ef3a80970d2f4, a0, a1, a2.this$)) {}

        jdouble ElevationDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        ::org::orekit::utils::ElevationMask ElevationDetector::getElevationMask() const
        {
          return ::org::orekit::utils::ElevationMask(env->callObjectMethod(this$, mids$[mid_getElevationMask_d8e21ec66d7f6ed7]));
        }

        jdouble ElevationDetector::getMinElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinElevation_557b8123390d8d0c]);
        }

        ::org::orekit::models::AtmosphericRefractionModel ElevationDetector::getRefractionModel() const
        {
          return ::org::orekit::models::AtmosphericRefractionModel(env->callObjectMethod(this$, mids$[mid_getRefractionModel_9124ab694682a769]));
        }

        ::org::orekit::frames::TopocentricFrame ElevationDetector::getTopocentricFrame() const
        {
          return ::org::orekit::frames::TopocentricFrame(env->callObjectMethod(this$, mids$[mid_getTopocentricFrame_2bb3e750d93d59cc]));
        }

        ElevationDetector ElevationDetector::withConstantElevation(jdouble a0) const
        {
          return ElevationDetector(env->callObjectMethod(this$, mids$[mid_withConstantElevation_e771b1ba22883482], a0));
        }

        ElevationDetector ElevationDetector::withElevationMask(const ::org::orekit::utils::ElevationMask & a0) const
        {
          return ElevationDetector(env->callObjectMethod(this$, mids$[mid_withElevationMask_e0937b995cfaea28], a0.this$));
        }

        ElevationDetector ElevationDetector::withRefraction(const ::org::orekit::models::AtmosphericRefractionModel & a0) const
        {
          return ElevationDetector(env->callObjectMethod(this$, mids$[mid_withRefraction_758a24a34365f671], a0.this$));
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
        static PyObject *t_ElevationDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ElevationDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ElevationDetector_of_(t_ElevationDetector *self, PyObject *args);
        static int t_ElevationDetector_init_(t_ElevationDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ElevationDetector_g(t_ElevationDetector *self, PyObject *args);
        static PyObject *t_ElevationDetector_getElevationMask(t_ElevationDetector *self);
        static PyObject *t_ElevationDetector_getMinElevation(t_ElevationDetector *self);
        static PyObject *t_ElevationDetector_getRefractionModel(t_ElevationDetector *self);
        static PyObject *t_ElevationDetector_getTopocentricFrame(t_ElevationDetector *self);
        static PyObject *t_ElevationDetector_withConstantElevation(t_ElevationDetector *self, PyObject *arg);
        static PyObject *t_ElevationDetector_withElevationMask(t_ElevationDetector *self, PyObject *arg);
        static PyObject *t_ElevationDetector_withRefraction(t_ElevationDetector *self, PyObject *arg);
        static PyObject *t_ElevationDetector_get__elevationMask(t_ElevationDetector *self, void *data);
        static PyObject *t_ElevationDetector_get__minElevation(t_ElevationDetector *self, void *data);
        static PyObject *t_ElevationDetector_get__refractionModel(t_ElevationDetector *self, void *data);
        static PyObject *t_ElevationDetector_get__topocentricFrame(t_ElevationDetector *self, void *data);
        static PyObject *t_ElevationDetector_get__parameters_(t_ElevationDetector *self, void *data);
        static PyGetSetDef t_ElevationDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ElevationDetector, elevationMask),
          DECLARE_GET_FIELD(t_ElevationDetector, minElevation),
          DECLARE_GET_FIELD(t_ElevationDetector, refractionModel),
          DECLARE_GET_FIELD(t_ElevationDetector, topocentricFrame),
          DECLARE_GET_FIELD(t_ElevationDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ElevationDetector__methods_[] = {
          DECLARE_METHOD(t_ElevationDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ElevationDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ElevationDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_ElevationDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_ElevationDetector, getElevationMask, METH_NOARGS),
          DECLARE_METHOD(t_ElevationDetector, getMinElevation, METH_NOARGS),
          DECLARE_METHOD(t_ElevationDetector, getRefractionModel, METH_NOARGS),
          DECLARE_METHOD(t_ElevationDetector, getTopocentricFrame, METH_NOARGS),
          DECLARE_METHOD(t_ElevationDetector, withConstantElevation, METH_O),
          DECLARE_METHOD(t_ElevationDetector, withElevationMask, METH_O),
          DECLARE_METHOD(t_ElevationDetector, withRefraction, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ElevationDetector)[] = {
          { Py_tp_methods, t_ElevationDetector__methods_ },
          { Py_tp_init, (void *) t_ElevationDetector_init_ },
          { Py_tp_getset, t_ElevationDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ElevationDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ElevationDetector, t_ElevationDetector, ElevationDetector);
        PyObject *t_ElevationDetector::wrap_Object(const ElevationDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ElevationDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ElevationDetector *self = (t_ElevationDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ElevationDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ElevationDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ElevationDetector *self = (t_ElevationDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ElevationDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ElevationDetector), &PY_TYPE_DEF(ElevationDetector), module, "ElevationDetector", 0);
        }

        void t_ElevationDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationDetector), "class_", make_descriptor(ElevationDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationDetector), "wrapfn_", make_descriptor(t_ElevationDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ElevationDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ElevationDetector::initializeClass, 1)))
            return NULL;
          return t_ElevationDetector::wrap_Object(ElevationDetector(((t_ElevationDetector *) arg)->object.this$));
        }
        static PyObject *t_ElevationDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ElevationDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ElevationDetector_of_(t_ElevationDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ElevationDetector_init_(t_ElevationDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::frames::TopocentricFrame a0((jobject) NULL);
              ElevationDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::frames::TopocentricFrame::initializeClass, &a0))
              {
                INT_CALL(object = ElevationDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ElevationDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::frames::TopocentricFrame a2((jobject) NULL);
              ElevationDetector object((jobject) NULL);

              if (!parseArgs(args, "DDk", ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ElevationDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ElevationDetector);
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

        static PyObject *t_ElevationDetector_g(t_ElevationDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ElevationDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_ElevationDetector_getElevationMask(t_ElevationDetector *self)
        {
          ::org::orekit::utils::ElevationMask result((jobject) NULL);
          OBJ_CALL(result = self->object.getElevationMask());
          return ::org::orekit::utils::t_ElevationMask::wrap_Object(result);
        }

        static PyObject *t_ElevationDetector_getMinElevation(t_ElevationDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ElevationDetector_getRefractionModel(t_ElevationDetector *self)
        {
          ::org::orekit::models::AtmosphericRefractionModel result((jobject) NULL);
          OBJ_CALL(result = self->object.getRefractionModel());
          return ::org::orekit::models::t_AtmosphericRefractionModel::wrap_Object(result);
        }

        static PyObject *t_ElevationDetector_getTopocentricFrame(t_ElevationDetector *self)
        {
          ::org::orekit::frames::TopocentricFrame result((jobject) NULL);
          OBJ_CALL(result = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(result);
        }

        static PyObject *t_ElevationDetector_withConstantElevation(t_ElevationDetector *self, PyObject *arg)
        {
          jdouble a0;
          ElevationDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withConstantElevation(a0));
            return t_ElevationDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withConstantElevation", arg);
          return NULL;
        }

        static PyObject *t_ElevationDetector_withElevationMask(t_ElevationDetector *self, PyObject *arg)
        {
          ::org::orekit::utils::ElevationMask a0((jobject) NULL);
          ElevationDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::utils::ElevationMask::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withElevationMask(a0));
            return t_ElevationDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withElevationMask", arg);
          return NULL;
        }

        static PyObject *t_ElevationDetector_withRefraction(t_ElevationDetector *self, PyObject *arg)
        {
          ::org::orekit::models::AtmosphericRefractionModel a0((jobject) NULL);
          ElevationDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::models::AtmosphericRefractionModel::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withRefraction(a0));
            return t_ElevationDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withRefraction", arg);
          return NULL;
        }
        static PyObject *t_ElevationDetector_get__parameters_(t_ElevationDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ElevationDetector_get__elevationMask(t_ElevationDetector *self, void *data)
        {
          ::org::orekit::utils::ElevationMask value((jobject) NULL);
          OBJ_CALL(value = self->object.getElevationMask());
          return ::org::orekit::utils::t_ElevationMask::wrap_Object(value);
        }

        static PyObject *t_ElevationDetector_get__minElevation(t_ElevationDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ElevationDetector_get__refractionModel(t_ElevationDetector *self, void *data)
        {
          ::org::orekit::models::AtmosphericRefractionModel value((jobject) NULL);
          OBJ_CALL(value = self->object.getRefractionModel());
          return ::org::orekit::models::t_AtmosphericRefractionModel::wrap_Object(value);
        }

        static PyObject *t_ElevationDetector_get__topocentricFrame(t_ElevationDetector *self, void *data)
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
#include "org/orekit/frames/VersionedITRF.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *VersionedITRF::class$ = NULL;
      jmethodID *VersionedITRF::mids$ = NULL;
      bool VersionedITRF::live$ = false;

      jclass VersionedITRF::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/VersionedITRF");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getITRFVersion_b311296551ce8af2] = env->getMethodID(cls, "getITRFVersion", "()Lorg/orekit/frames/ITRFVersion;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::ITRFVersion VersionedITRF::getITRFVersion() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getITRFVersion_b311296551ce8af2]));
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
      static PyObject *t_VersionedITRF_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_VersionedITRF_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_VersionedITRF_getITRFVersion(t_VersionedITRF *self);
      static PyObject *t_VersionedITRF_get__iTRFVersion(t_VersionedITRF *self, void *data);
      static PyGetSetDef t_VersionedITRF__fields_[] = {
        DECLARE_GET_FIELD(t_VersionedITRF, iTRFVersion),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_VersionedITRF__methods_[] = {
        DECLARE_METHOD(t_VersionedITRF, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VersionedITRF, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VersionedITRF, getITRFVersion, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(VersionedITRF)[] = {
        { Py_tp_methods, t_VersionedITRF__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_VersionedITRF__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(VersionedITRF)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(VersionedITRF, t_VersionedITRF, VersionedITRF);

      void t_VersionedITRF::install(PyObject *module)
      {
        installType(&PY_TYPE(VersionedITRF), &PY_TYPE_DEF(VersionedITRF), module, "VersionedITRF", 0);
      }

      void t_VersionedITRF::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(VersionedITRF), "class_", make_descriptor(VersionedITRF::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VersionedITRF), "wrapfn_", make_descriptor(t_VersionedITRF::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VersionedITRF), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_VersionedITRF_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, VersionedITRF::initializeClass, 1)))
          return NULL;
        return t_VersionedITRF::wrap_Object(VersionedITRF(((t_VersionedITRF *) arg)->object.this$));
      }
      static PyObject *t_VersionedITRF_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, VersionedITRF::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_VersionedITRF_getITRFVersion(t_VersionedITRF *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getITRFVersion());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_VersionedITRF_get__iTRFVersion(t_VersionedITRF *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getITRFVersion());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1044::class$ = NULL;
              jmethodID *Rtcm1044::mids$ = NULL;
              bool Rtcm1044::live$ = false;

              jclass Rtcm1044::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_9677d77b5970d147] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044Data;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1044::Rtcm1044(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1044Data & a1) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_9677d77b5970d147, a0, a1.this$)) {}
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
            namespace ephemeris {
              static PyObject *t_Rtcm1044_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1044_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1044_of_(t_Rtcm1044 *self, PyObject *args);
              static int t_Rtcm1044_init_(t_Rtcm1044 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1044_get__parameters_(t_Rtcm1044 *self, void *data);
              static PyGetSetDef t_Rtcm1044__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1044, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1044__methods_[] = {
                DECLARE_METHOD(t_Rtcm1044, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1044, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1044, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1044)[] = {
                { Py_tp_methods, t_Rtcm1044__methods_ },
                { Py_tp_init, (void *) t_Rtcm1044_init_ },
                { Py_tp_getset, t_Rtcm1044__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1044)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1044, t_Rtcm1044, Rtcm1044);
              PyObject *t_Rtcm1044::wrap_Object(const Rtcm1044& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1044::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1044 *self = (t_Rtcm1044 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_Rtcm1044::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1044::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1044 *self = (t_Rtcm1044 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_Rtcm1044::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1044), &PY_TYPE_DEF(Rtcm1044), module, "Rtcm1044", 0);
              }

              void t_Rtcm1044::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044), "class_", make_descriptor(Rtcm1044::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044), "wrapfn_", make_descriptor(t_Rtcm1044::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1044_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1044::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1044::wrap_Object(Rtcm1044(((t_Rtcm1044 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1044_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1044::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1044_of_(t_Rtcm1044 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1044_init_(t_Rtcm1044 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1044Data a1((jobject) NULL);
                Rtcm1044 object((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1044Data::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Rtcm1044(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::ephemeris::PY_TYPE(Rtcm1044Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1044_get__parameters_(t_Rtcm1044 *self, void *data)
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
#include "org/hipparchus/stat/descriptive/UnivariateStatistic.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/UnivariateStatistic.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *UnivariateStatistic::class$ = NULL;
        jmethodID *UnivariateStatistic::mids$ = NULL;
        bool UnivariateStatistic::live$ = false;

        jclass UnivariateStatistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/UnivariateStatistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_copy_98b5288d1f202841] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/UnivariateStatistic;");
            mids$[mid_evaluate_86c4a0582e0747ce] = env->getMethodID(cls, "evaluate", "([D)D");
            mids$[mid_evaluate_9eeeb1ae977f525d] = env->getMethodID(cls, "evaluate", "([DII)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateStatistic UnivariateStatistic::copy() const
        {
          return UnivariateStatistic(env->callObjectMethod(this$, mids$[mid_copy_98b5288d1f202841]));
        }

        jdouble UnivariateStatistic::evaluate(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_86c4a0582e0747ce], a0.this$);
        }

        jdouble UnivariateStatistic::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_9eeeb1ae977f525d], a0.this$, a1, a2);
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
        static PyObject *t_UnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateStatistic_copy(t_UnivariateStatistic *self);
        static PyObject *t_UnivariateStatistic_evaluate(t_UnivariateStatistic *self, PyObject *args);

        static PyMethodDef t_UnivariateStatistic__methods_[] = {
          DECLARE_METHOD(t_UnivariateStatistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateStatistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateStatistic, copy, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateStatistic, evaluate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateStatistic)[] = {
          { Py_tp_methods, t_UnivariateStatistic__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateStatistic)[] = {
          &PY_TYPE_DEF(::org::hipparchus::util::MathArrays$Function),
          NULL
        };

        DEFINE_TYPE(UnivariateStatistic, t_UnivariateStatistic, UnivariateStatistic);

        void t_UnivariateStatistic::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateStatistic), &PY_TYPE_DEF(UnivariateStatistic), module, "UnivariateStatistic", 0);
        }

        void t_UnivariateStatistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateStatistic), "class_", make_descriptor(UnivariateStatistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateStatistic), "wrapfn_", make_descriptor(t_UnivariateStatistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateStatistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateStatistic::initializeClass, 1)))
            return NULL;
          return t_UnivariateStatistic::wrap_Object(UnivariateStatistic(((t_UnivariateStatistic *) arg)->object.this$));
        }
        static PyObject *t_UnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateStatistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateStatistic_copy(t_UnivariateStatistic *self)
        {
          UnivariateStatistic result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return t_UnivariateStatistic::wrap_Object(result);
        }

        static PyObject *t_UnivariateStatistic_evaluate(t_UnivariateStatistic *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.evaluate(a0));
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
          }

          return callSuper(PY_TYPE(UnivariateStatistic), (PyObject *) self, "evaluate", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/inertia/InertialForces.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace inertia {

        ::java::lang::Class *InertialForces::class$ = NULL;
        jmethodID *InertialForces::mids$ = NULL;
        bool InertialForces::live$ = false;

        jclass InertialForces::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/inertia/InertialForces");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_535d1f91a93c8b4d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
            mids$[mid_acceleration_b61fb59a041240c6] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_61944e27a39e8290] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InertialForces::InertialForces(const ::org::orekit::frames::Frame & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_535d1f91a93c8b4d, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D InertialForces::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b61fb59a041240c6], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D InertialForces::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_61944e27a39e8290], a0.this$, a1.this$));
        }

        jboolean InertialForces::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1]);
        }

        ::java::util::List InertialForces::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
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
      namespace inertia {
        static PyObject *t_InertialForces_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InertialForces_instance_(PyTypeObject *type, PyObject *arg);
        static int t_InertialForces_init_(t_InertialForces *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InertialForces_acceleration(t_InertialForces *self, PyObject *args);
        static PyObject *t_InertialForces_dependsOnPositionOnly(t_InertialForces *self);
        static PyObject *t_InertialForces_getParametersDrivers(t_InertialForces *self);
        static PyObject *t_InertialForces_get__parametersDrivers(t_InertialForces *self, void *data);
        static PyGetSetDef t_InertialForces__fields_[] = {
          DECLARE_GET_FIELD(t_InertialForces, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_InertialForces__methods_[] = {
          DECLARE_METHOD(t_InertialForces, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InertialForces, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InertialForces, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_InertialForces, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_InertialForces, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InertialForces)[] = {
          { Py_tp_methods, t_InertialForces__methods_ },
          { Py_tp_init, (void *) t_InertialForces_init_ },
          { Py_tp_getset, t_InertialForces__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InertialForces)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(InertialForces, t_InertialForces, InertialForces);

        void t_InertialForces::install(PyObject *module)
        {
          installType(&PY_TYPE(InertialForces), &PY_TYPE_DEF(InertialForces), module, "InertialForces", 0);
        }

        void t_InertialForces::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialForces), "class_", make_descriptor(InertialForces::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialForces), "wrapfn_", make_descriptor(t_InertialForces::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialForces), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InertialForces_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InertialForces::initializeClass, 1)))
            return NULL;
          return t_InertialForces::wrap_Object(InertialForces(((t_InertialForces *) arg)->object.this$));
        }
        static PyObject *t_InertialForces_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InertialForces::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_InertialForces_init_(t_InertialForces *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          InertialForces object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            INT_CALL(object = InertialForces(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InertialForces_acceleration(t_InertialForces *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
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
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_InertialForces_dependsOnPositionOnly(t_InertialForces *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_InertialForces_getParametersDrivers(t_InertialForces *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_InertialForces_get__parametersDrivers(t_InertialForces *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IndexedDoubleConsumer::class$ = NULL;
            jmethodID *ParseToken$IndexedDoubleConsumer::mids$ = NULL;
            bool ParseToken$IndexedDoubleConsumer::live$ = false;

            jclass ParseToken$IndexedDoubleConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_89aad365fb0ed8da] = env->getMethodID(cls, "accept", "(ID)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IndexedDoubleConsumer::accept(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_89aad365fb0ed8da], a0, a1);
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
            static PyObject *t_ParseToken$IndexedDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedDoubleConsumer_accept(t_ParseToken$IndexedDoubleConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$IndexedDoubleConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IndexedDoubleConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedDoubleConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedDoubleConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IndexedDoubleConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IndexedDoubleConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IndexedDoubleConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IndexedDoubleConsumer, t_ParseToken$IndexedDoubleConsumer, ParseToken$IndexedDoubleConsumer);

            void t_ParseToken$IndexedDoubleConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IndexedDoubleConsumer), &PY_TYPE_DEF(ParseToken$IndexedDoubleConsumer), module, "ParseToken$IndexedDoubleConsumer", 0);
            }

            void t_ParseToken$IndexedDoubleConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedDoubleConsumer), "class_", make_descriptor(ParseToken$IndexedDoubleConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedDoubleConsumer), "wrapfn_", make_descriptor(t_ParseToken$IndexedDoubleConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedDoubleConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IndexedDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IndexedDoubleConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IndexedDoubleConsumer::wrap_Object(ParseToken$IndexedDoubleConsumer(((t_ParseToken$IndexedDoubleConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IndexedDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IndexedDoubleConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IndexedDoubleConsumer_accept(t_ParseToken$IndexedDoubleConsumer *self, PyObject *args)
            {
              jint a0;
              jdouble a1;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(self->object.accept(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", args);
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
#include "org/hipparchus/analysis/CalculusFieldBivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldBivariateFunction::class$ = NULL;
      jmethodID *CalculusFieldBivariateFunction::mids$ = NULL;
      bool CalculusFieldBivariateFunction::live$ = false;

      jclass CalculusFieldBivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldBivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_d5f58731bcb8a011] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement CalculusFieldBivariateFunction::value(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_d5f58731bcb8a011], a0.this$, a1.this$));
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
      static PyObject *t_CalculusFieldBivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldBivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldBivariateFunction_of_(t_CalculusFieldBivariateFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldBivariateFunction_value(t_CalculusFieldBivariateFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldBivariateFunction_get__parameters_(t_CalculusFieldBivariateFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldBivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldBivariateFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldBivariateFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldBivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldBivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldBivariateFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldBivariateFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldBivariateFunction)[] = {
        { Py_tp_methods, t_CalculusFieldBivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldBivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldBivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldBivariateFunction, t_CalculusFieldBivariateFunction, CalculusFieldBivariateFunction);
      PyObject *t_CalculusFieldBivariateFunction::wrap_Object(const CalculusFieldBivariateFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldBivariateFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldBivariateFunction *self = (t_CalculusFieldBivariateFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldBivariateFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldBivariateFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldBivariateFunction *self = (t_CalculusFieldBivariateFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldBivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldBivariateFunction), &PY_TYPE_DEF(CalculusFieldBivariateFunction), module, "CalculusFieldBivariateFunction", 0);
      }

      void t_CalculusFieldBivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldBivariateFunction), "class_", make_descriptor(CalculusFieldBivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldBivariateFunction), "wrapfn_", make_descriptor(t_CalculusFieldBivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldBivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldBivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldBivariateFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldBivariateFunction::wrap_Object(CalculusFieldBivariateFunction(((t_CalculusFieldBivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldBivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldBivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldBivariateFunction_of_(t_CalculusFieldBivariateFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldBivariateFunction_value(t_CalculusFieldBivariateFunction *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
      static PyObject *t_CalculusFieldBivariateFunction_get__parameters_(t_CalculusFieldBivariateFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/tessellation/Tile.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *Tile::class$ = NULL;
          jmethodID *Tile::mids$ = NULL;
          bool Tile::live$ = false;

          jclass Tile::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/Tile");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_13a715b814f97aa5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;)V");
              mids$[mid_getCenter_8672b163b0e4a5a3] = env->getMethodID(cls, "getCenter", "()Lorg/orekit/bodies/GeodeticPoint;");
              mids$[mid_getInterpolatedPoint_2cd300684b213ae3] = env->getMethodID(cls, "getInterpolatedPoint", "(DD)Lorg/orekit/bodies/GeodeticPoint;");
              mids$[mid_getVertices_d0e3486bf8e6ab42] = env->getMethodID(cls, "getVertices", "()[Lorg/orekit/bodies/GeodeticPoint;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Tile::Tile(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::bodies::GeodeticPoint & a2, const ::org::orekit::bodies::GeodeticPoint & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13a715b814f97aa5, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::org::orekit::bodies::GeodeticPoint Tile::getCenter() const
          {
            return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getCenter_8672b163b0e4a5a3]));
          }

          ::org::orekit::bodies::GeodeticPoint Tile::getInterpolatedPoint(jdouble a0, jdouble a1) const
          {
            return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getInterpolatedPoint_2cd300684b213ae3], a0, a1));
          }

          JArray< ::org::orekit::bodies::GeodeticPoint > Tile::getVertices() const
          {
            return JArray< ::org::orekit::bodies::GeodeticPoint >(env->callObjectMethod(this$, mids$[mid_getVertices_d0e3486bf8e6ab42]));
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
          static PyObject *t_Tile_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Tile_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Tile_init_(t_Tile *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Tile_getCenter(t_Tile *self);
          static PyObject *t_Tile_getInterpolatedPoint(t_Tile *self, PyObject *args);
          static PyObject *t_Tile_getVertices(t_Tile *self);
          static PyObject *t_Tile_get__center(t_Tile *self, void *data);
          static PyObject *t_Tile_get__vertices(t_Tile *self, void *data);
          static PyGetSetDef t_Tile__fields_[] = {
            DECLARE_GET_FIELD(t_Tile, center),
            DECLARE_GET_FIELD(t_Tile, vertices),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Tile__methods_[] = {
            DECLARE_METHOD(t_Tile, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Tile, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Tile, getCenter, METH_NOARGS),
            DECLARE_METHOD(t_Tile, getInterpolatedPoint, METH_VARARGS),
            DECLARE_METHOD(t_Tile, getVertices, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Tile)[] = {
            { Py_tp_methods, t_Tile__methods_ },
            { Py_tp_init, (void *) t_Tile_init_ },
            { Py_tp_getset, t_Tile__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Tile)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Tile, t_Tile, Tile);

          void t_Tile::install(PyObject *module)
          {
            installType(&PY_TYPE(Tile), &PY_TYPE_DEF(Tile), module, "Tile", 0);
          }

          void t_Tile::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "class_", make_descriptor(Tile::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "wrapfn_", make_descriptor(t_Tile::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Tile_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Tile::initializeClass, 1)))
              return NULL;
            return t_Tile::wrap_Object(Tile(((t_Tile *) arg)->object.this$));
          }
          static PyObject *t_Tile_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Tile::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Tile_init_(t_Tile *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a2((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a3((jobject) NULL);
            Tile object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Tile(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Tile_getCenter(t_Tile *self)
          {
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.getCenter());
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
          }

          static PyObject *t_Tile_getInterpolatedPoint(t_Tile *self, PyObject *args)
          {
            jdouble a0;
            jdouble a1;
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getInterpolatedPoint(a0, a1));
              return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInterpolatedPoint", args);
            return NULL;
          }

          static PyObject *t_Tile_getVertices(t_Tile *self)
          {
            JArray< ::org::orekit::bodies::GeodeticPoint > result((jobject) NULL);
            OBJ_CALL(result = self->object.getVertices());
            return JArray<jobject>(result.this$).wrap(::org::orekit::bodies::t_GeodeticPoint::wrap_jobject);
          }

          static PyObject *t_Tile_get__center(t_Tile *self, void *data)
          {
            ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
            OBJ_CALL(value = self->object.getCenter());
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
          }

          static PyObject *t_Tile_get__vertices(t_Tile *self, void *data)
          {
            JArray< ::org::orekit::bodies::GeodeticPoint > value((jobject) NULL);
            OBJ_CALL(value = self->object.getVertices());
            return JArray<jobject>(value.this$).wrap(::org::orekit::bodies::t_GeodeticPoint::wrap_jobject);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/FDOA.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/FDOA.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *FDOA::class$ = NULL;
        jmethodID *FDOA::mids$ = NULL;
        bool FDOA::live$ = false;
        ::java::lang::String *FDOA::MEASUREMENT_TYPE = NULL;

        jclass FDOA::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/FDOA");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_02d333904b85c41a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DLorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getPrimeStation_2161f2a4a8c885ec] = env->getMethodID(cls, "getPrimeStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_getSecondStation_2161f2a4a8c885ec] = env->getMethodID(cls, "getSecondStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_71d69ca0f7c280a7] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eae039ee8c8a4a4d] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FDOA::FDOA(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, jdouble a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4, jdouble a5, jdouble a6, const ::org::orekit::estimation::measurements::ObservableSatellite & a7) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_02d333904b85c41a, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7.this$)) {}

        ::org::orekit::estimation::measurements::GroundStation FDOA::getPrimeStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getPrimeStation_2161f2a4a8c885ec]));
        }

        ::org::orekit::estimation::measurements::GroundStation FDOA::getSecondStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getSecondStation_2161f2a4a8c885ec]));
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
        static PyObject *t_FDOA_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDOA_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDOA_of_(t_FDOA *self, PyObject *args);
        static int t_FDOA_init_(t_FDOA *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FDOA_getPrimeStation(t_FDOA *self);
        static PyObject *t_FDOA_getSecondStation(t_FDOA *self);
        static PyObject *t_FDOA_get__primeStation(t_FDOA *self, void *data);
        static PyObject *t_FDOA_get__secondStation(t_FDOA *self, void *data);
        static PyObject *t_FDOA_get__parameters_(t_FDOA *self, void *data);
        static PyGetSetDef t_FDOA__fields_[] = {
          DECLARE_GET_FIELD(t_FDOA, primeStation),
          DECLARE_GET_FIELD(t_FDOA, secondStation),
          DECLARE_GET_FIELD(t_FDOA, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FDOA__methods_[] = {
          DECLARE_METHOD(t_FDOA, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDOA, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDOA, of_, METH_VARARGS),
          DECLARE_METHOD(t_FDOA, getPrimeStation, METH_NOARGS),
          DECLARE_METHOD(t_FDOA, getSecondStation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FDOA)[] = {
          { Py_tp_methods, t_FDOA__methods_ },
          { Py_tp_init, (void *) t_FDOA_init_ },
          { Py_tp_getset, t_FDOA__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FDOA)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(FDOA, t_FDOA, FDOA);
        PyObject *t_FDOA::wrap_Object(const FDOA& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDOA::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDOA *self = (t_FDOA *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FDOA::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDOA::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDOA *self = (t_FDOA *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FDOA::install(PyObject *module)
        {
          installType(&PY_TYPE(FDOA), &PY_TYPE_DEF(FDOA), module, "FDOA", 0);
        }

        void t_FDOA::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDOA), "class_", make_descriptor(FDOA::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDOA), "wrapfn_", make_descriptor(t_FDOA::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDOA), "boxfn_", make_descriptor(boxObject));
          env->getClass(FDOA::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDOA), "MEASUREMENT_TYPE", make_descriptor(j2p(*FDOA::MEASUREMENT_TYPE)));
        }

        static PyObject *t_FDOA_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FDOA::initializeClass, 1)))
            return NULL;
          return t_FDOA::wrap_Object(FDOA(((t_FDOA *) arg)->object.this$));
        }
        static PyObject *t_FDOA_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FDOA::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FDOA_of_(t_FDOA *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FDOA_init_(t_FDOA *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
          jdouble a2;
          ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
          jdouble a4;
          jdouble a5;
          jdouble a6;
          ::org::orekit::estimation::measurements::ObservableSatellite a7((jobject) NULL);
          FDOA object((jobject) NULL);

          if (!parseArgs(args, "kkDkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            INT_CALL(object = FDOA(a0, a1, a2, a3, a4, a5, a6, a7));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(FDOA);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FDOA_getPrimeStation(t_FDOA *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }

        static PyObject *t_FDOA_getSecondStation(t_FDOA *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }
        static PyObject *t_FDOA_get__parameters_(t_FDOA *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FDOA_get__primeStation(t_FDOA *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }

        static PyObject *t_FDOA_get__secondStation(t_FDOA *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/ArrayList.h"
#include "java/util/Iterator.h"
#include "java/util/Comparator.h"
#include "java/util/List.h"
#include "java/util/Spliterator.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "java/util/ListIterator.h"
#include "java/util/RandomAccess.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *ArrayList::class$ = NULL;
    jmethodID *ArrayList::mids$ = NULL;
    bool ArrayList::live$ = false;

    jclass ArrayList::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/ArrayList");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_3abde0be9b9c9773] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
        mids$[mid_add_221e8e85cb385209] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_add_3e1115797609a4d9] = env->getMethodID(cls, "add", "(ILjava/lang/Object;)V");
        mids$[mid_addAll_15ecf331dcc5aaf3] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_addAll_c5e40f007e7fded1] = env->getMethodID(cls, "addAll", "(ILjava/util/Collection;)Z");
        mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_e661fe3ba2fafb22] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_contains_221e8e85cb385209] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_ensureCapacity_a3da1a935cb37f7b] = env->getMethodID(cls, "ensureCapacity", "(I)V");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_8a5ee63f2530538f] = env->getMethodID(cls, "get", "(I)Ljava/lang/Object;");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_indexOf_38a1845c8d44a9b0] = env->getMethodID(cls, "indexOf", "(Ljava/lang/Object;)I");
        mids$[mid_isEmpty_89b302893bdbe1f1] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_834a3801c426326d] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_lastIndexOf_38a1845c8d44a9b0] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/Object;)I");
        mids$[mid_listIterator_996d185ac031638c] = env->getMethodID(cls, "listIterator", "()Ljava/util/ListIterator;");
        mids$[mid_listIterator_bd2239bed91d009f] = env->getMethodID(cls, "listIterator", "(I)Ljava/util/ListIterator;");
        mids$[mid_remove_8a5ee63f2530538f] = env->getMethodID(cls, "remove", "(I)Ljava/lang/Object;");
        mids$[mid_remove_221e8e85cb385209] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_15ecf331dcc5aaf3] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_retainAll_15ecf331dcc5aaf3] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_set_ff7fbb4a04f4c36b] = env->getMethodID(cls, "set", "(ILjava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_size_412668abc8d889e9] = env->getMethodID(cls, "size", "()I");
        mids$[mid_sort_349032d04af23bed] = env->getMethodID(cls, "sort", "(Ljava/util/Comparator;)V");
        mids$[mid_spliterator_0a89e3b18808f850] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_subList_db6a96225c690c76] = env->getMethodID(cls, "subList", "(II)Ljava/util/List;");
        mids$[mid_toArray_6555a5198c71b73a] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_73423092793bcd23] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
        mids$[mid_trimToSize_0640e6acf969ed28] = env->getMethodID(cls, "trimToSize", "()V");
        mids$[mid_removeRange_a84c9a223722150c] = env->getMethodID(cls, "removeRange", "(II)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ArrayList::ArrayList() : ::java::util::AbstractList(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    ArrayList::ArrayList(jint a0) : ::java::util::AbstractList(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

    ArrayList::ArrayList(const ::java::util::Collection & a0) : ::java::util::AbstractList(env->newObject(initializeClass, &mids$, mid_init$_3abde0be9b9c9773, a0.this$)) {}

    jboolean ArrayList::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_221e8e85cb385209], a0.this$);
    }

    void ArrayList::add(jint a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_add_3e1115797609a4d9], a0, a1.this$);
    }

    jboolean ArrayList::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_15ecf331dcc5aaf3], a0.this$);
    }

    jboolean ArrayList::addAll(jint a0, const ::java::util::Collection & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_c5e40f007e7fded1], a0, a1.this$);
    }

    void ArrayList::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
    }

    ::java::lang::Object ArrayList::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_e661fe3ba2fafb22]));
    }

    jboolean ArrayList::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_221e8e85cb385209], a0.this$);
    }

    void ArrayList::ensureCapacity(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_ensureCapacity_a3da1a935cb37f7b], a0);
    }

    jboolean ArrayList::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    ::java::lang::Object ArrayList::get$(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_8a5ee63f2530538f], a0));
    }

    jint ArrayList::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jint ArrayList::indexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_38a1845c8d44a9b0], a0.this$);
    }

    jboolean ArrayList::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_89b302893bdbe1f1]);
    }

    ::java::util::Iterator ArrayList::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_834a3801c426326d]));
    }

    jint ArrayList::lastIndexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_38a1845c8d44a9b0], a0.this$);
    }

    ::java::util::ListIterator ArrayList::listIterator() const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_996d185ac031638c]));
    }

    ::java::util::ListIterator ArrayList::listIterator(jint a0) const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_bd2239bed91d009f], a0));
    }

    ::java::lang::Object ArrayList::remove(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_8a5ee63f2530538f], a0));
    }

    jboolean ArrayList::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_221e8e85cb385209], a0.this$);
    }

    jboolean ArrayList::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_15ecf331dcc5aaf3], a0.this$);
    }

    jboolean ArrayList::retainAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_15ecf331dcc5aaf3], a0.this$);
    }

    ::java::lang::Object ArrayList::set(jint a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_set_ff7fbb4a04f4c36b], a0, a1.this$));
    }

    jint ArrayList::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_412668abc8d889e9]);
    }

    void ArrayList::sort(const ::java::util::Comparator & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_sort_349032d04af23bed], a0.this$);
    }

    ::java::util::Spliterator ArrayList::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_0a89e3b18808f850]));
    }

    ::java::util::List ArrayList::subList(jint a0, jint a1) const
    {
      return ::java::util::List(env->callObjectMethod(this$, mids$[mid_subList_db6a96225c690c76], a0, a1));
    }

    JArray< ::java::lang::Object > ArrayList::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_6555a5198c71b73a]));
    }

    JArray< ::java::lang::Object > ArrayList::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_73423092793bcd23], a0.this$));
    }

    void ArrayList::trimToSize() const
    {
      env->callVoidMethod(this$, mids$[mid_trimToSize_0640e6acf969ed28]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_ArrayList_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ArrayList_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ArrayList_of_(t_ArrayList *self, PyObject *args);
    static int t_ArrayList_init_(t_ArrayList *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ArrayList_add(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_addAll(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_clear(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_clone(t_ArrayList *self);
    static PyObject *t_ArrayList_contains(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_ensureCapacity(t_ArrayList *self, PyObject *arg);
    static PyObject *t_ArrayList_equals(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_get(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_hashCode(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_indexOf(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_isEmpty(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_iterator(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_lastIndexOf(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_listIterator(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_remove(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_removeAll(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_retainAll(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_set(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_size(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_sort(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_spliterator(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_subList(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_toArray(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_trimToSize(t_ArrayList *self);
    static PyObject *t_ArrayList_get__empty(t_ArrayList *self, void *data);
    static PyObject *t_ArrayList_get__parameters_(t_ArrayList *self, void *data);
    static PyGetSetDef t_ArrayList__fields_[] = {
      DECLARE_GET_FIELD(t_ArrayList, empty),
      DECLARE_GET_FIELD(t_ArrayList, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ArrayList__methods_[] = {
      DECLARE_METHOD(t_ArrayList, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ArrayList, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ArrayList, of_, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, add, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, addAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, clear, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, clone, METH_NOARGS),
      DECLARE_METHOD(t_ArrayList, contains, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, ensureCapacity, METH_O),
      DECLARE_METHOD(t_ArrayList, equals, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, get, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, indexOf, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, iterator, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, lastIndexOf, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, listIterator, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, remove, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, removeAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, retainAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, set, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, size, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, sort, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, subList, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, toArray, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, trimToSize, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ArrayList)[] = {
      { Py_tp_methods, t_ArrayList__methods_ },
      { Py_tp_init, (void *) t_ArrayList_init_ },
      { Py_tp_getset, t_ArrayList__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_ArrayList *)) get_generic_iterator< t_ArrayList >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ArrayList)[] = {
      &PY_TYPE_DEF(::java::util::AbstractList),
      NULL
    };

    DEFINE_TYPE(ArrayList, t_ArrayList, ArrayList);
    PyObject *t_ArrayList::wrap_Object(const ArrayList& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ArrayList::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ArrayList *self = (t_ArrayList *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_ArrayList::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ArrayList::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ArrayList *self = (t_ArrayList *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_ArrayList::install(PyObject *module)
    {
      installType(&PY_TYPE(ArrayList), &PY_TYPE_DEF(ArrayList), module, "ArrayList", 0);
    }

    void t_ArrayList::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayList), "class_", make_descriptor(ArrayList::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayList), "wrapfn_", make_descriptor(t_ArrayList::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayList), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ArrayList_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ArrayList::initializeClass, 1)))
        return NULL;
      return t_ArrayList::wrap_Object(ArrayList(((t_ArrayList *) arg)->object.this$));
    }
    static PyObject *t_ArrayList_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ArrayList::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ArrayList_of_(t_ArrayList *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_ArrayList_init_(t_ArrayList *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ArrayList object((jobject) NULL);

          INT_CALL(object = ArrayList());
          self->object = object;
          break;
        }
       case 1:
        {
          jint a0;
          ArrayList object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = ArrayList(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ArrayList object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            INT_CALL(object = ArrayList(a0));
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

    static PyObject *t_ArrayList_add(t_ArrayList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.add(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "IO", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(self->object.add(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_ArrayList_addAll(t_ArrayList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.addAll(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean result;

          if (!parseArgs(args, "IK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.addAll(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_ArrayList_clear(t_ArrayList *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_ArrayList_clone(t_ArrayList *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayList_contains(t_ArrayList *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_ArrayList_ensureCapacity(t_ArrayList *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.ensureCapacity(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "ensureCapacity", arg);
      return NULL;
    }

    static PyObject *t_ArrayList_equals(t_ArrayList *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_ArrayList_get(t_ArrayList *self, PyObject *args)
    {
      jint a0;
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "get", args, 2);
    }

    static PyObject *t_ArrayList_hashCode(t_ArrayList *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_ArrayList_indexOf(t_ArrayList *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.indexOf(a0));
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "indexOf", args, 2);
    }

    static PyObject *t_ArrayList_isEmpty(t_ArrayList *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_ArrayList_iterator(t_ArrayList *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_ArrayList_lastIndexOf(t_ArrayList *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.lastIndexOf(a0));
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "lastIndexOf", args, 2);
    }

    static PyObject *t_ArrayList_listIterator(t_ArrayList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::ListIterator result((jobject) NULL);
          OBJ_CALL(result = self->object.listIterator());
          return ::java::util::t_ListIterator::wrap_Object(result, self->parameters[0]);
        }
        break;
       case 1:
        {
          jint a0;
          ::java::util::ListIterator result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.listIterator(a0));
            return ::java::util::t_ListIterator::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "listIterator", args, 2);
    }

    static PyObject *t_ArrayList_remove(t_ArrayList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_ArrayList_removeAll(t_ArrayList *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "removeAll", args, 2);
    }

    static PyObject *t_ArrayList_retainAll(t_ArrayList *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "retainAll", args, 2);
    }

    static PyObject *t_ArrayList_set(t_ArrayList *self, PyObject *args)
    {
      jint a0;
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "IO", self->parameters[0], &a0, &a1))
      {
        OBJ_CALL(result = self->object.set(a0, a1));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "set", args, 2);
    }

    static PyObject *t_ArrayList_size(t_ArrayList *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_ArrayList_sort(t_ArrayList *self, PyObject *args)
    {
      ::java::util::Comparator a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
      {
        OBJ_CALL(self->object.sort(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "sort", args, 2);
    }

    static PyObject *t_ArrayList_spliterator(t_ArrayList *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_ArrayList_subList(t_ArrayList *self, PyObject *args)
    {
      jint a0;
      jint a1;
      ::java::util::List result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.subList(a0, a1));
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "subList", args, 2);
    }

    static PyObject *t_ArrayList_toArray(t_ArrayList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::Object > result((jobject) NULL);
          OBJ_CALL(result = self->object.toArray());
          return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = self->object.toArray(a0));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "toArray", args, 2);
    }

    static PyObject *t_ArrayList_trimToSize(t_ArrayList *self)
    {
      OBJ_CALL(self->object.trimToSize());
      Py_RETURN_NONE;
    }
    static PyObject *t_ArrayList_get__parameters_(t_ArrayList *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_ArrayList_get__empty(t_ArrayList *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CharConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$CharConsumer::class$ = NULL;
            jmethodID *ParseToken$CharConsumer::mids$ = NULL;
            bool ParseToken$CharConsumer::live$ = false;

            jclass ParseToken$CharConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$CharConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_102587d250c3217b] = env->getMethodID(cls, "accept", "(C)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$CharConsumer::accept(jchar a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_102587d250c3217b], a0);
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
            static PyObject *t_ParseToken$CharConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CharConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CharConsumer_accept(t_ParseToken$CharConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$CharConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$CharConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CharConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CharConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$CharConsumer)[] = {
              { Py_tp_methods, t_ParseToken$CharConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$CharConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$CharConsumer, t_ParseToken$CharConsumer, ParseToken$CharConsumer);

            void t_ParseToken$CharConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$CharConsumer), &PY_TYPE_DEF(ParseToken$CharConsumer), module, "ParseToken$CharConsumer", 0);
            }

            void t_ParseToken$CharConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CharConsumer), "class_", make_descriptor(ParseToken$CharConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CharConsumer), "wrapfn_", make_descriptor(t_ParseToken$CharConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CharConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$CharConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$CharConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$CharConsumer::wrap_Object(ParseToken$CharConsumer(((t_ParseToken$CharConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$CharConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$CharConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$CharConsumer_accept(t_ParseToken$CharConsumer *self, PyObject *arg)
            {
              jchar a0;

              if (!parseArg(arg, "C", &a0))
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
#include "org/orekit/propagation/analytical/gnss/data/GNSSClockElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GNSSClockElements::class$ = NULL;
            jmethodID *GNSSClockElements::mids$ = NULL;
            bool GNSSClockElements::live$ = false;

            jclass GNSSClockElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GNSSClockElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAf0_557b8123390d8d0c] = env->getMethodID(cls, "getAf0", "()D");
                mids$[mid_getAf1_557b8123390d8d0c] = env->getMethodID(cls, "getAf1", "()D");
                mids$[mid_getAf2_557b8123390d8d0c] = env->getMethodID(cls, "getAf2", "()D");
                mids$[mid_getCycleDuration_557b8123390d8d0c] = env->getMethodID(cls, "getCycleDuration", "()D");
                mids$[mid_getTGD_557b8123390d8d0c] = env->getMethodID(cls, "getTGD", "()D");
                mids$[mid_getToc_557b8123390d8d0c] = env->getMethodID(cls, "getToc", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble GNSSClockElements::getAf0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf0_557b8123390d8d0c]);
            }

            jdouble GNSSClockElements::getAf1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf1_557b8123390d8d0c]);
            }

            jdouble GNSSClockElements::getAf2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf2_557b8123390d8d0c]);
            }

            jdouble GNSSClockElements::getCycleDuration() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCycleDuration_557b8123390d8d0c]);
            }

            jdouble GNSSClockElements::getTGD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD_557b8123390d8d0c]);
            }

            jdouble GNSSClockElements::getToc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getToc_557b8123390d8d0c]);
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
            static PyObject *t_GNSSClockElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GNSSClockElements_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GNSSClockElements_getAf0(t_GNSSClockElements *self);
            static PyObject *t_GNSSClockElements_getAf1(t_GNSSClockElements *self);
            static PyObject *t_GNSSClockElements_getAf2(t_GNSSClockElements *self);
            static PyObject *t_GNSSClockElements_getCycleDuration(t_GNSSClockElements *self);
            static PyObject *t_GNSSClockElements_getTGD(t_GNSSClockElements *self);
            static PyObject *t_GNSSClockElements_getToc(t_GNSSClockElements *self);
            static PyObject *t_GNSSClockElements_get__af0(t_GNSSClockElements *self, void *data);
            static PyObject *t_GNSSClockElements_get__af1(t_GNSSClockElements *self, void *data);
            static PyObject *t_GNSSClockElements_get__af2(t_GNSSClockElements *self, void *data);
            static PyObject *t_GNSSClockElements_get__cycleDuration(t_GNSSClockElements *self, void *data);
            static PyObject *t_GNSSClockElements_get__tGD(t_GNSSClockElements *self, void *data);
            static PyObject *t_GNSSClockElements_get__toc(t_GNSSClockElements *self, void *data);
            static PyGetSetDef t_GNSSClockElements__fields_[] = {
              DECLARE_GET_FIELD(t_GNSSClockElements, af0),
              DECLARE_GET_FIELD(t_GNSSClockElements, af1),
              DECLARE_GET_FIELD(t_GNSSClockElements, af2),
              DECLARE_GET_FIELD(t_GNSSClockElements, cycleDuration),
              DECLARE_GET_FIELD(t_GNSSClockElements, tGD),
              DECLARE_GET_FIELD(t_GNSSClockElements, toc),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GNSSClockElements__methods_[] = {
              DECLARE_METHOD(t_GNSSClockElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GNSSClockElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GNSSClockElements, getAf0, METH_NOARGS),
              DECLARE_METHOD(t_GNSSClockElements, getAf1, METH_NOARGS),
              DECLARE_METHOD(t_GNSSClockElements, getAf2, METH_NOARGS),
              DECLARE_METHOD(t_GNSSClockElements, getCycleDuration, METH_NOARGS),
              DECLARE_METHOD(t_GNSSClockElements, getTGD, METH_NOARGS),
              DECLARE_METHOD(t_GNSSClockElements, getToc, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GNSSClockElements)[] = {
              { Py_tp_methods, t_GNSSClockElements__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_GNSSClockElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GNSSClockElements)[] = {
              &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
              NULL
            };

            DEFINE_TYPE(GNSSClockElements, t_GNSSClockElements, GNSSClockElements);

            void t_GNSSClockElements::install(PyObject *module)
            {
              installType(&PY_TYPE(GNSSClockElements), &PY_TYPE_DEF(GNSSClockElements), module, "GNSSClockElements", 0);
            }

            void t_GNSSClockElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSClockElements), "class_", make_descriptor(GNSSClockElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSClockElements), "wrapfn_", make_descriptor(t_GNSSClockElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSClockElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GNSSClockElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GNSSClockElements::initializeClass, 1)))
                return NULL;
              return t_GNSSClockElements::wrap_Object(GNSSClockElements(((t_GNSSClockElements *) arg)->object.this$));
            }
            static PyObject *t_GNSSClockElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GNSSClockElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_GNSSClockElements_getAf0(t_GNSSClockElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSClockElements_getAf1(t_GNSSClockElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSClockElements_getAf2(t_GNSSClockElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSClockElements_getCycleDuration(t_GNSSClockElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCycleDuration());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSClockElements_getTGD(t_GNSSClockElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSClockElements_getToc(t_GNSSClockElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getToc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSClockElements_get__af0(t_GNSSClockElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf0());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSClockElements_get__af1(t_GNSSClockElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf1());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSClockElements_get__af2(t_GNSSClockElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSClockElements_get__cycleDuration(t_GNSSClockElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCycleDuration());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSClockElements_get__tGD(t_GNSSClockElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSClockElements_get__toc(t_GNSSClockElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getToc());
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
#include "org/orekit/utils/AbstractMultipleShooting.h"
#include "org/orekit/utils/MultipleShooting.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AbstractMultipleShooting::class$ = NULL;
      jmethodID *AbstractMultipleShooting::mids$ = NULL;
      bool AbstractMultipleShooting::live$ = false;

      jclass AbstractMultipleShooting::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AbstractMultipleShooting");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addConstraint_754312f3734d6e2f] = env->getMethodID(cls, "addConstraint", "(IID)V");
          mids$[mid_compute_0d9551367f7ecdef] = env->getMethodID(cls, "compute", "()Ljava/util/List;");
          mids$[mid_setEpochFreedom_746492bb94848925] = env->getMethodID(cls, "setEpochFreedom", "(IZ)V");
          mids$[mid_setPatchPointComponentFreedom_aa803303853defd6] = env->getMethodID(cls, "setPatchPointComponentFreedom", "(IIZ)V");
          mids$[mid_setScaleLength_10f281d777284cea] = env->getMethodID(cls, "setScaleLength", "(D)V");
          mids$[mid_setScaleTime_10f281d777284cea] = env->getMethodID(cls, "setScaleTime", "(D)V");
          mids$[mid_computeAdditionalConstraints_1122e29f2a25b86f] = env->getMethodID(cls, "computeAdditionalConstraints", "(Ljava/util/List;)[D");
          mids$[mid_computeAdditionalJacobianMatrix_29dc26d4c6c7bd43] = env->getMethodID(cls, "computeAdditionalJacobianMatrix", "(Ljava/util/List;)[[D");
          mids$[mid_getAugmentedInitialState_d91edcd61f36fecc] = env->getMethodID(cls, "getAugmentedInitialState", "(I)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getNumberOfConstraints_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfConstraints", "()I");
          mids$[mid_computeEpochJacobianMatrix_29dc26d4c6c7bd43] = env->getMethodID(cls, "computeEpochJacobianMatrix", "(Ljava/util/List;)[[D");
          mids$[mid_getConstraintsMap_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getConstraintsMap", "()Ljava/util/Map;");
          mids$[mid_getPatchedSpacecraftState_0d9551367f7ecdef] = env->getMethodID(cls, "getPatchedSpacecraftState", "()Ljava/util/List;");
          mids$[mid_getPatchPoint_d91edcd61f36fecc] = env->getMethodID(cls, "getPatchPoint", "(I)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_updateAdditionalConstraints_3246bd31f432242d] = env->getMethodID(cls, "updateAdditionalConstraints", "(I[D)V");
          mids$[mid_getNumberOfFreeComponents_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfFreeComponents", "()I");
          mids$[mid_getFreeCompsMap_ae6d76260f541aef] = env->getMethodID(cls, "getFreeCompsMap", "()[Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractMultipleShooting::addConstraint(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addConstraint_754312f3734d6e2f], a0, a1, a2);
      }

      ::java::util::List AbstractMultipleShooting::compute() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_compute_0d9551367f7ecdef]));
      }

      void AbstractMultipleShooting::setEpochFreedom(jint a0, jboolean a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEpochFreedom_746492bb94848925], a0, a1);
      }

      void AbstractMultipleShooting::setPatchPointComponentFreedom(jint a0, jint a1, jboolean a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setPatchPointComponentFreedom_aa803303853defd6], a0, a1, a2);
      }

      void AbstractMultipleShooting::setScaleLength(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setScaleLength_10f281d777284cea], a0);
      }

      void AbstractMultipleShooting::setScaleTime(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setScaleTime_10f281d777284cea], a0);
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
      static PyObject *t_AbstractMultipleShooting_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractMultipleShooting_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractMultipleShooting_addConstraint(t_AbstractMultipleShooting *self, PyObject *args);
      static PyObject *t_AbstractMultipleShooting_compute(t_AbstractMultipleShooting *self);
      static PyObject *t_AbstractMultipleShooting_setEpochFreedom(t_AbstractMultipleShooting *self, PyObject *args);
      static PyObject *t_AbstractMultipleShooting_setPatchPointComponentFreedom(t_AbstractMultipleShooting *self, PyObject *args);
      static PyObject *t_AbstractMultipleShooting_setScaleLength(t_AbstractMultipleShooting *self, PyObject *arg);
      static PyObject *t_AbstractMultipleShooting_setScaleTime(t_AbstractMultipleShooting *self, PyObject *arg);
      static int t_AbstractMultipleShooting_set__scaleLength(t_AbstractMultipleShooting *self, PyObject *arg, void *data);
      static int t_AbstractMultipleShooting_set__scaleTime(t_AbstractMultipleShooting *self, PyObject *arg, void *data);
      static PyGetSetDef t_AbstractMultipleShooting__fields_[] = {
        DECLARE_SET_FIELD(t_AbstractMultipleShooting, scaleLength),
        DECLARE_SET_FIELD(t_AbstractMultipleShooting, scaleTime),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractMultipleShooting__methods_[] = {
        DECLARE_METHOD(t_AbstractMultipleShooting, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractMultipleShooting, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractMultipleShooting, addConstraint, METH_VARARGS),
        DECLARE_METHOD(t_AbstractMultipleShooting, compute, METH_NOARGS),
        DECLARE_METHOD(t_AbstractMultipleShooting, setEpochFreedom, METH_VARARGS),
        DECLARE_METHOD(t_AbstractMultipleShooting, setPatchPointComponentFreedom, METH_VARARGS),
        DECLARE_METHOD(t_AbstractMultipleShooting, setScaleLength, METH_O),
        DECLARE_METHOD(t_AbstractMultipleShooting, setScaleTime, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractMultipleShooting)[] = {
        { Py_tp_methods, t_AbstractMultipleShooting__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractMultipleShooting__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractMultipleShooting)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractMultipleShooting, t_AbstractMultipleShooting, AbstractMultipleShooting);

      void t_AbstractMultipleShooting::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractMultipleShooting), &PY_TYPE_DEF(AbstractMultipleShooting), module, "AbstractMultipleShooting", 0);
      }

      void t_AbstractMultipleShooting::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleShooting), "class_", make_descriptor(AbstractMultipleShooting::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleShooting), "wrapfn_", make_descriptor(t_AbstractMultipleShooting::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleShooting), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractMultipleShooting_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractMultipleShooting::initializeClass, 1)))
          return NULL;
        return t_AbstractMultipleShooting::wrap_Object(AbstractMultipleShooting(((t_AbstractMultipleShooting *) arg)->object.this$));
      }
      static PyObject *t_AbstractMultipleShooting_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractMultipleShooting::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractMultipleShooting_addConstraint(t_AbstractMultipleShooting *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addConstraint(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addConstraint", args);
        return NULL;
      }

      static PyObject *t_AbstractMultipleShooting_compute(t_AbstractMultipleShooting *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.compute());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(SpacecraftState));
      }

      static PyObject *t_AbstractMultipleShooting_setEpochFreedom(t_AbstractMultipleShooting *self, PyObject *args)
      {
        jint a0;
        jboolean a1;

        if (!parseArgs(args, "IZ", &a0, &a1))
        {
          OBJ_CALL(self->object.setEpochFreedom(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEpochFreedom", args);
        return NULL;
      }

      static PyObject *t_AbstractMultipleShooting_setPatchPointComponentFreedom(t_AbstractMultipleShooting *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jboolean a2;

        if (!parseArgs(args, "IIZ", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setPatchPointComponentFreedom(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setPatchPointComponentFreedom", args);
        return NULL;
      }

      static PyObject *t_AbstractMultipleShooting_setScaleLength(t_AbstractMultipleShooting *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setScaleLength(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setScaleLength", arg);
        return NULL;
      }

      static PyObject *t_AbstractMultipleShooting_setScaleTime(t_AbstractMultipleShooting *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setScaleTime(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setScaleTime", arg);
        return NULL;
      }

      static int t_AbstractMultipleShooting_set__scaleLength(t_AbstractMultipleShooting *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setScaleLength(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "scaleLength", arg);
        return -1;
      }

      static int t_AbstractMultipleShooting_set__scaleTime(t_AbstractMultipleShooting *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setScaleTime(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "scaleTime", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/TLEPropagator.h"
#include "org/orekit/propagation/analytical/tle/TLEPropagator.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *TLEPropagator::class$ = NULL;
          jmethodID *TLEPropagator::mids$ = NULL;
          bool TLEPropagator::live$ = false;

          jclass TLEPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/TLEPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDefaultTleGenerationAlgorithm_4ef88466cc3e0b49] = env->getStaticMethodID(cls, "getDefaultTleGenerationAlgorithm", "(Lorg/orekit/time/TimeScale;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm;");
              mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getMU_557b8123390d8d0c] = env->getStaticMethodID(cls, "getMU", "()D");
              mids$[mid_getPVCoordinates_f00f0e7ea285c370] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/PVCoordinates;");
              mids$[mid_getTLE_67f978062a0fd0e7] = env->getMethodID(cls, "getTLE", "()Lorg/orekit/propagation/analytical/tle/TLE;");
              mids$[mid_resetInitialState_8655761ebf04b503] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_selectExtrapolator_8be8b627fd8c3459] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLEPropagator;");
              mids$[mid_selectExtrapolator_d086e2f31f325188] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/tle/TLEPropagator;");
              mids$[mid_selectExtrapolator_92fffefc5a04cfe6] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;D)Lorg/orekit/propagation/analytical/tle/TLEPropagator;");
              mids$[mid_selectExtrapolator_f2c75c7e0368ae90] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/tle/TLEPropagator;");
              mids$[mid_getJacobiansColumnsNames_0d9551367f7ecdef] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
              mids$[mid_sxpInitialize_0640e6acf969ed28] = env->getMethodID(cls, "sxpInitialize", "()V");
              mids$[mid_sxpPropagate_10f281d777284cea] = env->getMethodID(cls, "sxpPropagate", "(D)V");
              mids$[mid_propagateOrbit_9e937c0ae63d8022] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
              mids$[mid_resetIntermediateState_45bf76e836befe86] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_getMass_b0b988f941da47d8] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_createHarvester_5f0409a66c29e9c1] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm TLEPropagator::getDefaultTleGenerationAlgorithm(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::frames::Frame & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm(env->callStaticObjectMethod(cls, mids$[mid_getDefaultTleGenerationAlgorithm_4ef88466cc3e0b49], a0.this$, a1.this$));
          }

          ::org::orekit::frames::Frame TLEPropagator::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
          }

          jdouble TLEPropagator::getMU()
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getMU_557b8123390d8d0c]);
          }

          ::org::orekit::utils::PVCoordinates TLEPropagator::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_f00f0e7ea285c370], a0.this$));
          }

          ::org::orekit::propagation::analytical::tle::TLE TLEPropagator::getTLE() const
          {
            return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_getTLE_67f978062a0fd0e7]));
          }

          void TLEPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_8655761ebf04b503], a0.this$);
          }

          TLEPropagator TLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::TLE & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return TLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_8be8b627fd8c3459], a0.this$));
          }

          TLEPropagator TLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::frames::Frame & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return TLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_d086e2f31f325188], a0.this$, a1.this$));
          }

          TLEPropagator TLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return TLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_92fffefc5a04cfe6], a0.this$, a1.this$, a2));
          }

          TLEPropagator TLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::frames::Frame & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return TLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_f2c75c7e0368ae90], a0.this$, a1.this$, a2, a3.this$));
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
          static PyObject *t_TLEPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TLEPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TLEPropagator_getDefaultTleGenerationAlgorithm(PyTypeObject *type, PyObject *args);
          static PyObject *t_TLEPropagator_getFrame(t_TLEPropagator *self, PyObject *args);
          static PyObject *t_TLEPropagator_getMU(PyTypeObject *type);
          static PyObject *t_TLEPropagator_getPVCoordinates(t_TLEPropagator *self, PyObject *args);
          static PyObject *t_TLEPropagator_getTLE(t_TLEPropagator *self);
          static PyObject *t_TLEPropagator_resetInitialState(t_TLEPropagator *self, PyObject *args);
          static PyObject *t_TLEPropagator_selectExtrapolator(PyTypeObject *type, PyObject *args);
          static PyObject *t_TLEPropagator_get__frame(t_TLEPropagator *self, void *data);
          static PyObject *t_TLEPropagator_get__mU(t_TLEPropagator *self, void *data);
          static PyObject *t_TLEPropagator_get__tLE(t_TLEPropagator *self, void *data);
          static PyGetSetDef t_TLEPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_TLEPropagator, frame),
            DECLARE_GET_FIELD(t_TLEPropagator, mU),
            DECLARE_GET_FIELD(t_TLEPropagator, tLE),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TLEPropagator__methods_[] = {
            DECLARE_METHOD(t_TLEPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TLEPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TLEPropagator, getDefaultTleGenerationAlgorithm, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TLEPropagator, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_TLEPropagator, getMU, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_TLEPropagator, getPVCoordinates, METH_VARARGS),
            DECLARE_METHOD(t_TLEPropagator, getTLE, METH_NOARGS),
            DECLARE_METHOD(t_TLEPropagator, resetInitialState, METH_VARARGS),
            DECLARE_METHOD(t_TLEPropagator, selectExtrapolator, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TLEPropagator)[] = {
            { Py_tp_methods, t_TLEPropagator__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TLEPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TLEPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
            NULL
          };

          DEFINE_TYPE(TLEPropagator, t_TLEPropagator, TLEPropagator);

          void t_TLEPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(TLEPropagator), &PY_TYPE_DEF(TLEPropagator), module, "TLEPropagator", 0);
          }

          void t_TLEPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEPropagator), "class_", make_descriptor(TLEPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEPropagator), "wrapfn_", make_descriptor(t_TLEPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TLEPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TLEPropagator::initializeClass, 1)))
              return NULL;
            return t_TLEPropagator::wrap_Object(TLEPropagator(((t_TLEPropagator *) arg)->object.this$));
          }
          static PyObject *t_TLEPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TLEPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TLEPropagator_getDefaultTleGenerationAlgorithm(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::getDefaultTleGenerationAlgorithm(a0, a1));
              return ::org::orekit::propagation::analytical::tle::generation::t_TleGenerationAlgorithm::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getDefaultTleGenerationAlgorithm", args);
            return NULL;
          }

          static PyObject *t_TLEPropagator_getFrame(t_TLEPropagator *self, PyObject *args)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            return callSuper(PY_TYPE(TLEPropagator), (PyObject *) self, "getFrame", args, 2);
          }

          static PyObject *t_TLEPropagator_getMU(PyTypeObject *type)
          {
            jdouble result;
            OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::getMU());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLEPropagator_getPVCoordinates(t_TLEPropagator *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }

            return callSuper(PY_TYPE(TLEPropagator), (PyObject *) self, "getPVCoordinates", args, 2);
          }

          static PyObject *t_TLEPropagator_getTLE(t_TLEPropagator *self)
          {
            ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);
            OBJ_CALL(result = self->object.getTLE());
            return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
          }

          static PyObject *t_TLEPropagator_resetInitialState(t_TLEPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(TLEPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_TLEPropagator_selectExtrapolator(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                TLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::selectExtrapolator(a0));
                  return t_TLEPropagator::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::frames::Frame a1((jobject) NULL);
                TLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::selectExtrapolator(a0, a1));
                  return t_TLEPropagator::wrap_Object(result);
                }
              }
              break;
             case 3:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                TLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::selectExtrapolator(a0, a1, a2));
                  return t_TLEPropagator::wrap_Object(result);
                }
              }
              break;
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                TLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "kkDk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::selectExtrapolator(a0, a1, a2, a3));
                  return t_TLEPropagator::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "selectExtrapolator", args);
            return NULL;
          }

          static PyObject *t_TLEPropagator_get__frame(t_TLEPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_TLEPropagator_get__mU(t_TLEPropagator *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMU());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLEPropagator_get__tLE(t_TLEPropagator *self, void *data)
          {
            ::org::orekit::propagation::analytical::tle::TLE value((jobject) NULL);
            OBJ_CALL(value = self->object.getTLE());
            return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/DormandPrince54FieldIntegratorBuilder.h"
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
            mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_3a1ee7ebe4f0e344] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince54FieldIntegratorBuilder::DormandPrince54FieldIntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator DormandPrince54FieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
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

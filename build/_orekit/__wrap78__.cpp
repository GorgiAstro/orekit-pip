#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/OptimizationProblem.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "org/hipparchus/util/Incrementor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *OptimizationProblem::class$ = NULL;
      jmethodID *OptimizationProblem::mids$ = NULL;
      bool OptimizationProblem::live$ = false;

      jclass OptimizationProblem::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/OptimizationProblem");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getConvergenceChecker_cae0efb5080a73b8] = env->getMethodID(cls, "getConvergenceChecker", "()Lorg/hipparchus/optim/ConvergenceChecker;");
          mids$[mid_getEvaluationCounter_3c86b06a86576583] = env->getMethodID(cls, "getEvaluationCounter", "()Lorg/hipparchus/util/Incrementor;");
          mids$[mid_getIterationCounter_3c86b06a86576583] = env->getMethodID(cls, "getIterationCounter", "()Lorg/hipparchus/util/Incrementor;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::optim::ConvergenceChecker OptimizationProblem::getConvergenceChecker() const
      {
        return ::org::hipparchus::optim::ConvergenceChecker(env->callObjectMethod(this$, mids$[mid_getConvergenceChecker_cae0efb5080a73b8]));
      }

      ::org::hipparchus::util::Incrementor OptimizationProblem::getEvaluationCounter() const
      {
        return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getEvaluationCounter_3c86b06a86576583]));
      }

      ::org::hipparchus::util::Incrementor OptimizationProblem::getIterationCounter() const
      {
        return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getIterationCounter_3c86b06a86576583]));
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
      static PyObject *t_OptimizationProblem_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OptimizationProblem_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OptimizationProblem_of_(t_OptimizationProblem *self, PyObject *args);
      static PyObject *t_OptimizationProblem_getConvergenceChecker(t_OptimizationProblem *self);
      static PyObject *t_OptimizationProblem_getEvaluationCounter(t_OptimizationProblem *self);
      static PyObject *t_OptimizationProblem_getIterationCounter(t_OptimizationProblem *self);
      static PyObject *t_OptimizationProblem_get__convergenceChecker(t_OptimizationProblem *self, void *data);
      static PyObject *t_OptimizationProblem_get__evaluationCounter(t_OptimizationProblem *self, void *data);
      static PyObject *t_OptimizationProblem_get__iterationCounter(t_OptimizationProblem *self, void *data);
      static PyObject *t_OptimizationProblem_get__parameters_(t_OptimizationProblem *self, void *data);
      static PyGetSetDef t_OptimizationProblem__fields_[] = {
        DECLARE_GET_FIELD(t_OptimizationProblem, convergenceChecker),
        DECLARE_GET_FIELD(t_OptimizationProblem, evaluationCounter),
        DECLARE_GET_FIELD(t_OptimizationProblem, iterationCounter),
        DECLARE_GET_FIELD(t_OptimizationProblem, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OptimizationProblem__methods_[] = {
        DECLARE_METHOD(t_OptimizationProblem, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OptimizationProblem, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OptimizationProblem, of_, METH_VARARGS),
        DECLARE_METHOD(t_OptimizationProblem, getConvergenceChecker, METH_NOARGS),
        DECLARE_METHOD(t_OptimizationProblem, getEvaluationCounter, METH_NOARGS),
        DECLARE_METHOD(t_OptimizationProblem, getIterationCounter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OptimizationProblem)[] = {
        { Py_tp_methods, t_OptimizationProblem__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OptimizationProblem__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OptimizationProblem)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OptimizationProblem, t_OptimizationProblem, OptimizationProblem);
      PyObject *t_OptimizationProblem::wrap_Object(const OptimizationProblem& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OptimizationProblem::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OptimizationProblem *self = (t_OptimizationProblem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OptimizationProblem::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OptimizationProblem::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OptimizationProblem *self = (t_OptimizationProblem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OptimizationProblem::install(PyObject *module)
      {
        installType(&PY_TYPE(OptimizationProblem), &PY_TYPE_DEF(OptimizationProblem), module, "OptimizationProblem", 0);
      }

      void t_OptimizationProblem::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblem), "class_", make_descriptor(OptimizationProblem::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblem), "wrapfn_", make_descriptor(t_OptimizationProblem::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblem), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OptimizationProblem_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OptimizationProblem::initializeClass, 1)))
          return NULL;
        return t_OptimizationProblem::wrap_Object(OptimizationProblem(((t_OptimizationProblem *) arg)->object.this$));
      }
      static PyObject *t_OptimizationProblem_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OptimizationProblem::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OptimizationProblem_of_(t_OptimizationProblem *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_OptimizationProblem_getConvergenceChecker(t_OptimizationProblem *self)
      {
        ::org::hipparchus::optim::ConvergenceChecker result((jobject) NULL);
        OBJ_CALL(result = self->object.getConvergenceChecker());
        return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_OptimizationProblem_getEvaluationCounter(t_OptimizationProblem *self)
      {
        ::org::hipparchus::util::Incrementor result((jobject) NULL);
        OBJ_CALL(result = self->object.getEvaluationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(result);
      }

      static PyObject *t_OptimizationProblem_getIterationCounter(t_OptimizationProblem *self)
      {
        ::org::hipparchus::util::Incrementor result((jobject) NULL);
        OBJ_CALL(result = self->object.getIterationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(result);
      }
      static PyObject *t_OptimizationProblem_get__parameters_(t_OptimizationProblem *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_OptimizationProblem_get__convergenceChecker(t_OptimizationProblem *self, void *data)
      {
        ::org::hipparchus::optim::ConvergenceChecker value((jobject) NULL);
        OBJ_CALL(value = self->object.getConvergenceChecker());
        return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(value);
      }

      static PyObject *t_OptimizationProblem_get__evaluationCounter(t_OptimizationProblem *self, void *data)
      {
        ::org::hipparchus::util::Incrementor value((jobject) NULL);
        OBJ_CALL(value = self->object.getEvaluationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(value);
      }

      static PyObject *t_OptimizationProblem_get__iterationCounter(t_OptimizationProblem *self, void *data)
      {
        ::org::hipparchus::util::Incrementor value((jobject) NULL);
        OBJ_CALL(value = self->object.getIterationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/PythonAbstractIntegratedPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "org/orekit/propagation/integration/StateMapper.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonAbstractIntegratedPropagator::class$ = NULL;
        jmethodID *PythonAbstractIntegratedPropagator::mids$ = NULL;
        bool PythonAbstractIntegratedPropagator::live$ = false;

        jclass PythonAbstractIntegratedPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonAbstractIntegratedPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f0d3d6e737d787ad] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_createMapper_74f07e2c0845997b] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getMainStateEquations_8e0da39ae64099e8] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractIntegratedPropagator::PythonAbstractIntegratedPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0, const ::org::orekit::propagation::PropagationType & a1) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_f0d3d6e737d787ad, a0.this$, a1.this$)) {}

        void PythonAbstractIntegratedPropagator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonAbstractIntegratedPropagator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonAbstractIntegratedPropagator::pythonExtension(jlong a0) const
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
      namespace integration {
        static PyObject *t_PythonAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractIntegratedPropagator_init_(t_PythonAbstractIntegratedPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractIntegratedPropagator_finalize(t_PythonAbstractIntegratedPropagator *self);
        static PyObject *t_PythonAbstractIntegratedPropagator_pythonExtension(t_PythonAbstractIntegratedPropagator *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractIntegratedPropagator_createMapper0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jobject a3, jobject a4, jobject a5);
        static jobject JNICALL t_PythonAbstractIntegratedPropagator_getMainStateEquations1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAbstractIntegratedPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractIntegratedPropagator_get__self(t_PythonAbstractIntegratedPropagator *self, void *data);
        static PyGetSetDef t_PythonAbstractIntegratedPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractIntegratedPropagator, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractIntegratedPropagator__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractIntegratedPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractIntegratedPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractIntegratedPropagator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractIntegratedPropagator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractIntegratedPropagator)[] = {
          { Py_tp_methods, t_PythonAbstractIntegratedPropagator__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractIntegratedPropagator_init_ },
          { Py_tp_getset, t_PythonAbstractIntegratedPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractIntegratedPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractIntegratedPropagator),
          NULL
        };

        DEFINE_TYPE(PythonAbstractIntegratedPropagator, t_PythonAbstractIntegratedPropagator, PythonAbstractIntegratedPropagator);

        void t_PythonAbstractIntegratedPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractIntegratedPropagator), &PY_TYPE_DEF(PythonAbstractIntegratedPropagator), module, "PythonAbstractIntegratedPropagator", 1);
        }

        void t_PythonAbstractIntegratedPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractIntegratedPropagator), "class_", make_descriptor(PythonAbstractIntegratedPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractIntegratedPropagator), "wrapfn_", make_descriptor(t_PythonAbstractIntegratedPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractIntegratedPropagator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractIntegratedPropagator::initializeClass);
          JNINativeMethod methods[] = {
            { "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;", (void *) t_PythonAbstractIntegratedPropagator_createMapper0 },
            { "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;", (void *) t_PythonAbstractIntegratedPropagator_getMainStateEquations1 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractIntegratedPropagator_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractIntegratedPropagator::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractIntegratedPropagator::wrap_Object(PythonAbstractIntegratedPropagator(((t_PythonAbstractIntegratedPropagator *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractIntegratedPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractIntegratedPropagator_init_(t_PythonAbstractIntegratedPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);
          ::org::orekit::propagation::PropagationType a1((jobject) NULL);
          PyTypeObject **p1;
          PythonAbstractIntegratedPropagator object((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::hipparchus::ode::ODEIntegrator::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
          {
            INT_CALL(object = PythonAbstractIntegratedPropagator(a0, a1));
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

        static PyObject *t_PythonAbstractIntegratedPropagator_finalize(t_PythonAbstractIntegratedPropagator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractIntegratedPropagator_pythonExtension(t_PythonAbstractIntegratedPropagator *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractIntegratedPropagator_createMapper0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jobject a3, jobject a4, jobject a5)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractIntegratedPropagator::mids$[PythonAbstractIntegratedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::integration::StateMapper value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
          PyObject *o2 = ::org::orekit::orbits::t_OrbitType::wrap_Object(::org::orekit::orbits::OrbitType(a2));
          PyObject *o3 = ::org::orekit::orbits::t_PositionAngleType::wrap_Object(::org::orekit::orbits::PositionAngleType(a3));
          PyObject *o4 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a4));
          PyObject *o5 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a5));
          PyObject *result = PyObject_CallMethod(obj, "createMapper", "OdOOOO", o0, (double) a1, o2, o3, o4, o5);
          Py_DECREF(o0);
          Py_DECREF(o2);
          Py_DECREF(o3);
          Py_DECREF(o4);
          Py_DECREF(o5);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::integration::StateMapper::initializeClass, &value))
          {
            throwTypeError("createMapper", result);
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

        static jobject JNICALL t_PythonAbstractIntegratedPropagator_getMainStateEquations1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractIntegratedPropagator::mids$[PythonAbstractIntegratedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::integration::AbstractIntegratedPropagator$MainStateEquations value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::ode::t_ODEIntegrator::wrap_Object(::org::hipparchus::ode::ODEIntegrator(a0));
          PyObject *result = PyObject_CallMethod(obj, "getMainStateEquations", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::integration::AbstractIntegratedPropagator$MainStateEquations::initializeClass, &value))
          {
            throwTypeError("getMainStateEquations", result);
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

        static void JNICALL t_PythonAbstractIntegratedPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractIntegratedPropagator::mids$[PythonAbstractIntegratedPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractIntegratedPropagator::mids$[PythonAbstractIntegratedPropagator::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractIntegratedPropagator_get__self(t_PythonAbstractIntegratedPropagator *self, void *data)
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1066.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCombinedCorrectionData.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1066::class$ = NULL;
              jmethodID *Rtcm1066::mids$ = NULL;
              bool Rtcm1066::live$ = false;

              jclass Rtcm1066::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1066");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_868237effc362640] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1066::Rtcm1066(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_868237effc362640, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1066_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1066_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1066_of_(t_Rtcm1066 *self, PyObject *args);
              static int t_Rtcm1066_init_(t_Rtcm1066 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1066_get__parameters_(t_Rtcm1066 *self, void *data);
              static PyGetSetDef t_Rtcm1066__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1066, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1066__methods_[] = {
                DECLARE_METHOD(t_Rtcm1066, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1066, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1066, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1066)[] = {
                { Py_tp_methods, t_Rtcm1066__methods_ },
                { Py_tp_init, (void *) t_Rtcm1066_init_ },
                { Py_tp_getset, t_Rtcm1066__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1066)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1066, t_Rtcm1066, Rtcm1066);
              PyObject *t_Rtcm1066::wrap_Object(const Rtcm1066& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1066::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1066 *self = (t_Rtcm1066 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1066::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1066::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1066 *self = (t_Rtcm1066 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1066::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1066), &PY_TYPE_DEF(Rtcm1066), module, "Rtcm1066", 0);
              }

              void t_Rtcm1066::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1066), "class_", make_descriptor(Rtcm1066::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1066), "wrapfn_", make_descriptor(t_Rtcm1066::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1066), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1066_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1066::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1066::wrap_Object(Rtcm1066(((t_Rtcm1066 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1066_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1066::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1066_of_(t_Rtcm1066 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1066_init_(t_Rtcm1066 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1066 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1066(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmOrbitCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmCombinedCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1066_get__parameters_(t_Rtcm1066 *self, void *data)
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
#include "org/hipparchus/ode/events/FieldEventState.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/events/FieldEventOccurrence.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldEventState::class$ = NULL;
        jmethodID *FieldEventState::mids$ = NULL;
        bool FieldEventState::live$ = false;

        jclass FieldEventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldEventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_doEvent_0f4d16424f907056] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/events/FieldEventOccurrence;");
            mids$[mid_evaluateStep_ebd2aaa9f3eddd1a] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)Z");
            mids$[mid_getEventTime_81520b552cb3fa26] = env->getMethodID(cls, "getEventTime", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_55fdeef582303a99] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::FieldEventOccurrence FieldEventState::doEvent(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::FieldEventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_0f4d16424f907056], a0.this$));
        }

        jboolean FieldEventState::evaluateStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_ebd2aaa9f3eddd1a], a0.this$);
        }

        ::org::hipparchus::CalculusFieldElement FieldEventState::getEventTime() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEventTime_81520b552cb3fa26]));
        }

        void FieldEventState::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_55fdeef582303a99], a0.this$, a1.this$);
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
        static PyObject *t_FieldEventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState_of_(t_FieldEventState *self, PyObject *args);
        static PyObject *t_FieldEventState_doEvent(t_FieldEventState *self, PyObject *arg);
        static PyObject *t_FieldEventState_evaluateStep(t_FieldEventState *self, PyObject *arg);
        static PyObject *t_FieldEventState_getEventTime(t_FieldEventState *self);
        static PyObject *t_FieldEventState_init(t_FieldEventState *self, PyObject *args);
        static PyObject *t_FieldEventState_get__eventTime(t_FieldEventState *self, void *data);
        static PyObject *t_FieldEventState_get__parameters_(t_FieldEventState *self, void *data);
        static PyGetSetDef t_FieldEventState__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventState, eventTime),
          DECLARE_GET_FIELD(t_FieldEventState, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventState__methods_[] = {
          DECLARE_METHOD(t_FieldEventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventState, doEvent, METH_O),
          DECLARE_METHOD(t_FieldEventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_FieldEventState, getEventTime, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventState)[] = {
          { Py_tp_methods, t_FieldEventState__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldEventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventState, t_FieldEventState, FieldEventState);
        PyObject *t_FieldEventState::wrap_Object(const FieldEventState& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventState::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState *self = (t_FieldEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventState::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventState::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState *self = (t_FieldEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventState::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventState), &PY_TYPE_DEF(FieldEventState), module, "FieldEventState", 0);
        }

        void t_FieldEventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "class_", make_descriptor(FieldEventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "wrapfn_", make_descriptor(t_FieldEventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventState::initializeClass, 1)))
            return NULL;
          return t_FieldEventState::wrap_Object(FieldEventState(((t_FieldEventState *) arg)->object.this$));
        }
        static PyObject *t_FieldEventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventState_of_(t_FieldEventState *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldEventState_doEvent(t_FieldEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::events::FieldEventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::hipparchus::ode::events::t_FieldEventOccurrence::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_FieldEventState_evaluateStep(t_FieldEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_FieldEventState_getEventTime(t_FieldEventState *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventTime());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldEventState_init(t_FieldEventState *self, PyObject *args)
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
        static PyObject *t_FieldEventState_get__parameters_(t_FieldEventState *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventState_get__eventTime(t_FieldEventState *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventTime());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/HarrisPriester.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *HarrisPriester::class$ = NULL;
          jmethodID *HarrisPriester::mids$ = NULL;
          bool HarrisPriester::live$ = false;

          jclass HarrisPriester::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/HarrisPriester");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d5c8b1824fbf91f0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
              mids$[mid_init$_230a9059691aacfa] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;[[D)V");
              mids$[mid_init$_d475a351bb1fadbf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
              mids$[mid_init$_c2d4d65daa179eba] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;[[DD)V");
              mids$[mid_getDensity_b71939b8275fb620] = env->getMethodID(cls, "getDensity", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_4d0eb4d30dbd9ad9] = env->getMethodID(cls, "getDensity", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_getDensity_58866e32a1c9318b] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getDensity_e9a4fc2340b58984] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getMaxAlt_b74f83833fdad017] = env->getMethodID(cls, "getMaxAlt", "()D");
              mids$[mid_getMinAlt_b74f83833fdad017] = env->getMethodID(cls, "getMinAlt", "()D");
              mids$[mid_getTabDensity_3b7b373db8e7887f] = env->getMethodID(cls, "getTabDensity", "()[[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          HarrisPriester::HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d5c8b1824fbf91f0, a0.this$, a1.this$)) {}

          HarrisPriester::HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_230a9059691aacfa, a0.this$, a1.this$, a2.this$)) {}

          HarrisPriester::HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d475a351bb1fadbf, a0.this$, a1.this$, a2)) {}

          HarrisPriester::HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, const JArray< JArray< jdouble > > & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c2d4d65daa179eba, a0.this$, a1.this$, a2.this$, a3)) {}

          ::org::hipparchus::CalculusFieldElement HarrisPriester::getDensity(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_b71939b8275fb620], a0.this$, a1.this$));
          }

          jdouble HarrisPriester::getDensity(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_4d0eb4d30dbd9ad9], a0.this$, a1.this$);
          }

          jdouble HarrisPriester::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_58866e32a1c9318b], a0.this$, a1.this$, a2.this$);
          }

          ::org::hipparchus::CalculusFieldElement HarrisPriester::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_e9a4fc2340b58984], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::frames::Frame HarrisPriester::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
          }

          jdouble HarrisPriester::getMaxAlt() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMaxAlt_b74f83833fdad017]);
          }

          jdouble HarrisPriester::getMinAlt() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMinAlt_b74f83833fdad017]);
          }

          JArray< JArray< jdouble > > HarrisPriester::getTabDensity() const
          {
            return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getTabDensity_3b7b373db8e7887f]));
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
        namespace atmosphere {
          static PyObject *t_HarrisPriester_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HarrisPriester_instance_(PyTypeObject *type, PyObject *arg);
          static int t_HarrisPriester_init_(t_HarrisPriester *self, PyObject *args, PyObject *kwds);
          static PyObject *t_HarrisPriester_getDensity(t_HarrisPriester *self, PyObject *args);
          static PyObject *t_HarrisPriester_getFrame(t_HarrisPriester *self);
          static PyObject *t_HarrisPriester_getMaxAlt(t_HarrisPriester *self);
          static PyObject *t_HarrisPriester_getMinAlt(t_HarrisPriester *self);
          static PyObject *t_HarrisPriester_getTabDensity(t_HarrisPriester *self);
          static PyObject *t_HarrisPriester_get__frame(t_HarrisPriester *self, void *data);
          static PyObject *t_HarrisPriester_get__maxAlt(t_HarrisPriester *self, void *data);
          static PyObject *t_HarrisPriester_get__minAlt(t_HarrisPriester *self, void *data);
          static PyObject *t_HarrisPriester_get__tabDensity(t_HarrisPriester *self, void *data);
          static PyGetSetDef t_HarrisPriester__fields_[] = {
            DECLARE_GET_FIELD(t_HarrisPriester, frame),
            DECLARE_GET_FIELD(t_HarrisPriester, maxAlt),
            DECLARE_GET_FIELD(t_HarrisPriester, minAlt),
            DECLARE_GET_FIELD(t_HarrisPriester, tabDensity),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_HarrisPriester__methods_[] = {
            DECLARE_METHOD(t_HarrisPriester, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HarrisPriester, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HarrisPriester, getDensity, METH_VARARGS),
            DECLARE_METHOD(t_HarrisPriester, getFrame, METH_NOARGS),
            DECLARE_METHOD(t_HarrisPriester, getMaxAlt, METH_NOARGS),
            DECLARE_METHOD(t_HarrisPriester, getMinAlt, METH_NOARGS),
            DECLARE_METHOD(t_HarrisPriester, getTabDensity, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HarrisPriester)[] = {
            { Py_tp_methods, t_HarrisPriester__methods_ },
            { Py_tp_init, (void *) t_HarrisPriester_init_ },
            { Py_tp_getset, t_HarrisPriester__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HarrisPriester)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(HarrisPriester, t_HarrisPriester, HarrisPriester);

          void t_HarrisPriester::install(PyObject *module)
          {
            installType(&PY_TYPE(HarrisPriester), &PY_TYPE_DEF(HarrisPriester), module, "HarrisPriester", 0);
          }

          void t_HarrisPriester::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HarrisPriester), "class_", make_descriptor(HarrisPriester::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HarrisPriester), "wrapfn_", make_descriptor(t_HarrisPriester::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HarrisPriester), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_HarrisPriester_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HarrisPriester::initializeClass, 1)))
              return NULL;
            return t_HarrisPriester::wrap_Object(HarrisPriester(((t_HarrisPriester *) arg)->object.this$));
          }
          static PyObject *t_HarrisPriester_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HarrisPriester::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_HarrisPriester_init_(t_HarrisPriester *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
                HarrisPriester object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = HarrisPriester(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
                JArray< JArray< jdouble > > a2((jobject) NULL);
                HarrisPriester object((jobject) NULL);

                if (!parseArgs(args, "kk[[D", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = HarrisPriester(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
                jdouble a2;
                HarrisPriester object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = HarrisPriester(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
                JArray< JArray< jdouble > > a2((jobject) NULL);
                jdouble a3;
                HarrisPriester object((jobject) NULL);

                if (!parseArgs(args, "kk[[DD", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = HarrisPriester(a0, a1, a2, a3));
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

          static PyObject *t_HarrisPriester_getDensity(t_HarrisPriester *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::orekit::frames::Frame a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", args);
            return NULL;
          }

          static PyObject *t_HarrisPriester_getFrame(t_HarrisPriester *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_HarrisPriester_getMaxAlt(t_HarrisPriester *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMaxAlt());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_HarrisPriester_getMinAlt(t_HarrisPriester *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMinAlt());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_HarrisPriester_getTabDensity(t_HarrisPriester *self)
          {
            JArray< JArray< jdouble > > result((jobject) NULL);
            OBJ_CALL(result = self->object.getTabDensity());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          static PyObject *t_HarrisPriester_get__frame(t_HarrisPriester *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_HarrisPriester_get__maxAlt(t_HarrisPriester *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMaxAlt());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_HarrisPriester_get__minAlt(t_HarrisPriester *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMinAlt());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_HarrisPriester_get__tabDensity(t_HarrisPriester *self, void *data)
          {
            JArray< JArray< jdouble > > value((jobject) NULL);
            OBJ_CALL(value = self->object.getTabDensity());
            return JArray<jobject>(value.this$).wrap(NULL);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/function/LongConsumer.h"
#include "java/util/function/LongConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace function {

      ::java::lang::Class *LongConsumer::class$ = NULL;
      jmethodID *LongConsumer::mids$ = NULL;
      bool LongConsumer::live$ = false;

      jclass LongConsumer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/function/LongConsumer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_accept_3d7dd2314a0dd456] = env->getMethodID(cls, "accept", "(J)V");
          mids$[mid_andThen_b7f23f6be88bace3] = env->getMethodID(cls, "andThen", "(Ljava/util/function/LongConsumer;)Ljava/util/function/LongConsumer;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void LongConsumer::accept(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_accept_3d7dd2314a0dd456], a0);
      }

      LongConsumer LongConsumer::andThen(const LongConsumer & a0) const
      {
        return LongConsumer(env->callObjectMethod(this$, mids$[mid_andThen_b7f23f6be88bace3], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    namespace function {
      static PyObject *t_LongConsumer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LongConsumer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LongConsumer_accept(t_LongConsumer *self, PyObject *arg);
      static PyObject *t_LongConsumer_andThen(t_LongConsumer *self, PyObject *arg);

      static PyMethodDef t_LongConsumer__methods_[] = {
        DECLARE_METHOD(t_LongConsumer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LongConsumer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LongConsumer, accept, METH_O),
        DECLARE_METHOD(t_LongConsumer, andThen, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LongConsumer)[] = {
        { Py_tp_methods, t_LongConsumer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LongConsumer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LongConsumer, t_LongConsumer, LongConsumer);

      void t_LongConsumer::install(PyObject *module)
      {
        installType(&PY_TYPE(LongConsumer), &PY_TYPE_DEF(LongConsumer), module, "LongConsumer", 0);
      }

      void t_LongConsumer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongConsumer), "class_", make_descriptor(LongConsumer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongConsumer), "wrapfn_", make_descriptor(t_LongConsumer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongConsumer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LongConsumer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LongConsumer::initializeClass, 1)))
          return NULL;
        return t_LongConsumer::wrap_Object(LongConsumer(((t_LongConsumer *) arg)->object.this$));
      }
      static PyObject *t_LongConsumer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LongConsumer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LongConsumer_accept(t_LongConsumer *self, PyObject *arg)
      {
        jlong a0;

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(self->object.accept(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "accept", arg);
        return NULL;
      }

      static PyObject *t_LongConsumer_andThen(t_LongConsumer *self, PyObject *arg)
      {
        LongConsumer a0((jobject) NULL);
        LongConsumer result((jobject) NULL);

        if (!parseArg(arg, "k", LongConsumer::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.andThen(a0));
          return t_LongConsumer::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "andThen", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/AmbiguityAcceptance.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AmbiguityAcceptance::class$ = NULL;
          jmethodID *AmbiguityAcceptance::mids$ = NULL;
          bool AmbiguityAcceptance::live$ = false;

          jclass AmbiguityAcceptance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AmbiguityAcceptance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_accept_77098f4ed257d870] = env->getMethodID(cls, "accept", "([Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;)Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");
              mids$[mid_numberOfCandidates_55546ef6a647f39b] = env->getMethodID(cls, "numberOfCandidates", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution AmbiguityAcceptance::accept(const JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution(env->callObjectMethod(this$, mids$[mid_accept_77098f4ed257d870], a0.this$));
          }

          jint AmbiguityAcceptance::numberOfCandidates() const
          {
            return env->callIntMethod(this$, mids$[mid_numberOfCandidates_55546ef6a647f39b]);
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
          static PyObject *t_AmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AmbiguityAcceptance_accept(t_AmbiguityAcceptance *self, PyObject *arg);
          static PyObject *t_AmbiguityAcceptance_numberOfCandidates(t_AmbiguityAcceptance *self);

          static PyMethodDef t_AmbiguityAcceptance__methods_[] = {
            DECLARE_METHOD(t_AmbiguityAcceptance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AmbiguityAcceptance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AmbiguityAcceptance, accept, METH_O),
            DECLARE_METHOD(t_AmbiguityAcceptance, numberOfCandidates, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AmbiguityAcceptance)[] = {
            { Py_tp_methods, t_AmbiguityAcceptance__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AmbiguityAcceptance)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AmbiguityAcceptance, t_AmbiguityAcceptance, AmbiguityAcceptance);

          void t_AmbiguityAcceptance::install(PyObject *module)
          {
            installType(&PY_TYPE(AmbiguityAcceptance), &PY_TYPE_DEF(AmbiguityAcceptance), module, "AmbiguityAcceptance", 0);
          }

          void t_AmbiguityAcceptance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguityAcceptance), "class_", make_descriptor(AmbiguityAcceptance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguityAcceptance), "wrapfn_", make_descriptor(t_AmbiguityAcceptance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguityAcceptance), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AmbiguityAcceptance::initializeClass, 1)))
              return NULL;
            return t_AmbiguityAcceptance::wrap_Object(AmbiguityAcceptance(((t_AmbiguityAcceptance *) arg)->object.this$));
          }
          static PyObject *t_AmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AmbiguityAcceptance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AmbiguityAcceptance_accept(t_AmbiguityAcceptance *self, PyObject *arg)
          {
            JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > a0((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution result((jobject) NULL);

            if (!parseArg(arg, "[k", ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.accept(a0));
              return ::org::orekit::estimation::measurements::gnss::t_IntegerLeastSquareSolution::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "accept", arg);
            return NULL;
          }

          static PyObject *t_AmbiguityAcceptance_numberOfCandidates(t_AmbiguityAcceptance *self)
          {
            jint result;
            OBJ_CALL(result = self->object.numberOfCandidates());
            return PyLong_FromLong((long) result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonEnablingPredicate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EnablingPredicate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonEnablingPredicate::class$ = NULL;
        jmethodID *PythonEnablingPredicate::mids$ = NULL;
        bool PythonEnablingPredicate::live$ = false;

        jclass PythonEnablingPredicate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonEnablingPredicate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_eventIsEnabled_ce200617ff3a9b46] = env->getMethodID(cls, "eventIsEnabled", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;D)Z");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEnablingPredicate::PythonEnablingPredicate() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonEnablingPredicate::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonEnablingPredicate::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonEnablingPredicate::pythonExtension(jlong a0) const
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
      namespace events {
        static PyObject *t_PythonEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEnablingPredicate_init_(t_PythonEnablingPredicate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEnablingPredicate_finalize(t_PythonEnablingPredicate *self);
        static PyObject *t_PythonEnablingPredicate_pythonExtension(t_PythonEnablingPredicate *self, PyObject *args);
        static jboolean JNICALL t_PythonEnablingPredicate_eventIsEnabled0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
        static void JNICALL t_PythonEnablingPredicate_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEnablingPredicate_get__self(t_PythonEnablingPredicate *self, void *data);
        static PyGetSetDef t_PythonEnablingPredicate__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEnablingPredicate, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEnablingPredicate__methods_[] = {
          DECLARE_METHOD(t_PythonEnablingPredicate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEnablingPredicate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEnablingPredicate, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEnablingPredicate, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEnablingPredicate)[] = {
          { Py_tp_methods, t_PythonEnablingPredicate__methods_ },
          { Py_tp_init, (void *) t_PythonEnablingPredicate_init_ },
          { Py_tp_getset, t_PythonEnablingPredicate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEnablingPredicate)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEnablingPredicate, t_PythonEnablingPredicate, PythonEnablingPredicate);

        void t_PythonEnablingPredicate::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEnablingPredicate), &PY_TYPE_DEF(PythonEnablingPredicate), module, "PythonEnablingPredicate", 1);
        }

        void t_PythonEnablingPredicate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEnablingPredicate), "class_", make_descriptor(PythonEnablingPredicate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEnablingPredicate), "wrapfn_", make_descriptor(t_PythonEnablingPredicate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEnablingPredicate), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEnablingPredicate::initializeClass);
          JNINativeMethod methods[] = {
            { "eventIsEnabled", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;D)Z", (void *) t_PythonEnablingPredicate_eventIsEnabled0 },
            { "pythonDecRef", "()V", (void *) t_PythonEnablingPredicate_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEnablingPredicate::initializeClass, 1)))
            return NULL;
          return t_PythonEnablingPredicate::wrap_Object(PythonEnablingPredicate(((t_PythonEnablingPredicate *) arg)->object.this$));
        }
        static PyObject *t_PythonEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEnablingPredicate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEnablingPredicate_init_(t_PythonEnablingPredicate *self, PyObject *args, PyObject *kwds)
        {
          PythonEnablingPredicate object((jobject) NULL);

          INT_CALL(object = PythonEnablingPredicate());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEnablingPredicate_finalize(t_PythonEnablingPredicate *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEnablingPredicate_pythonExtension(t_PythonEnablingPredicate *self, PyObject *args)
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

        static jboolean JNICALL t_PythonEnablingPredicate_eventIsEnabled0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEnablingPredicate::mids$[PythonEnablingPredicate::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a1));
          PyObject *result = PyObject_CallMethod(obj, "eventIsEnabled", "OOd", o0, o1, (double) a2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("eventIsEnabled", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonEnablingPredicate_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEnablingPredicate::mids$[PythonEnablingPredicate::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEnablingPredicate::mids$[PythonEnablingPredicate::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEnablingPredicate_get__self(t_PythonEnablingPredicate *self, void *data)
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
#include "org/orekit/gnss/antenna/AntexLoader.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/util/List.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/antenna/ReceiverAntenna.h"
#include "org/orekit/gnss/antenna/SatelliteAntenna.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *AntexLoader::class$ = NULL;
        jmethodID *AntexLoader::mids$ = NULL;
        bool AntexLoader::live$ = false;
        ::java::lang::String *AntexLoader::DEFAULT_ANTEX_SUPPORTED_NAMES = NULL;

        jclass AntexLoader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/AntexLoader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_init$_e81bfdc1c9755e45] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/time/TimeScale;)V");
            mids$[mid_init$_41d9572e040b2cb7] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
            mids$[mid_findSatelliteAntenna_ff170e96d84d4099] = env->getMethodID(cls, "findSatelliteAntenna", "(Lorg/orekit/gnss/SatelliteSystem;I)Lorg/orekit/utils/TimeSpanMap;");
            mids$[mid_getReceiversAntennas_e62d3bb06d56d7e3] = env->getMethodID(cls, "getReceiversAntennas", "()Ljava/util/List;");
            mids$[mid_getSatellitesAntennas_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSatellitesAntennas", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_ANTEX_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_ANTEX_SUPPORTED_NAMES", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AntexLoader::AntexLoader(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

        AntexLoader::AntexLoader(const ::org::orekit::data::DataSource & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e81bfdc1c9755e45, a0.this$, a1.this$)) {}

        AntexLoader::AntexLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_41d9572e040b2cb7, a0.this$, a1.this$, a2.this$)) {}

        ::org::orekit::utils::TimeSpanMap AntexLoader::findSatelliteAntenna(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1) const
        {
          return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_findSatelliteAntenna_ff170e96d84d4099], a0.this$, a1));
        }

        ::java::util::List AntexLoader::getReceiversAntennas() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getReceiversAntennas_e62d3bb06d56d7e3]));
        }

        ::java::util::List AntexLoader::getSatellitesAntennas() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatellitesAntennas_e62d3bb06d56d7e3]));
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
        static PyObject *t_AntexLoader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AntexLoader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AntexLoader_init_(t_AntexLoader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AntexLoader_findSatelliteAntenna(t_AntexLoader *self, PyObject *args);
        static PyObject *t_AntexLoader_getReceiversAntennas(t_AntexLoader *self);
        static PyObject *t_AntexLoader_getSatellitesAntennas(t_AntexLoader *self);
        static PyObject *t_AntexLoader_get__receiversAntennas(t_AntexLoader *self, void *data);
        static PyObject *t_AntexLoader_get__satellitesAntennas(t_AntexLoader *self, void *data);
        static PyGetSetDef t_AntexLoader__fields_[] = {
          DECLARE_GET_FIELD(t_AntexLoader, receiversAntennas),
          DECLARE_GET_FIELD(t_AntexLoader, satellitesAntennas),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AntexLoader__methods_[] = {
          DECLARE_METHOD(t_AntexLoader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AntexLoader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AntexLoader, findSatelliteAntenna, METH_VARARGS),
          DECLARE_METHOD(t_AntexLoader, getReceiversAntennas, METH_NOARGS),
          DECLARE_METHOD(t_AntexLoader, getSatellitesAntennas, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AntexLoader)[] = {
          { Py_tp_methods, t_AntexLoader__methods_ },
          { Py_tp_init, (void *) t_AntexLoader_init_ },
          { Py_tp_getset, t_AntexLoader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AntexLoader)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AntexLoader, t_AntexLoader, AntexLoader);

        void t_AntexLoader::install(PyObject *module)
        {
          installType(&PY_TYPE(AntexLoader), &PY_TYPE_DEF(AntexLoader), module, "AntexLoader", 0);
        }

        void t_AntexLoader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AntexLoader), "class_", make_descriptor(AntexLoader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AntexLoader), "wrapfn_", make_descriptor(t_AntexLoader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AntexLoader), "boxfn_", make_descriptor(boxObject));
          env->getClass(AntexLoader::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AntexLoader), "DEFAULT_ANTEX_SUPPORTED_NAMES", make_descriptor(j2p(*AntexLoader::DEFAULT_ANTEX_SUPPORTED_NAMES)));
        }

        static PyObject *t_AntexLoader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AntexLoader::initializeClass, 1)))
            return NULL;
          return t_AntexLoader::wrap_Object(AntexLoader(((t_AntexLoader *) arg)->object.this$));
        }
        static PyObject *t_AntexLoader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AntexLoader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AntexLoader_init_(t_AntexLoader *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              AntexLoader object((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                INT_CALL(object = AntexLoader(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              ::org::orekit::time::TimeScale a1((jobject) NULL);
              AntexLoader object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
              {
                INT_CALL(object = AntexLoader(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
              ::org::orekit::time::TimeScale a2((jobject) NULL);
              AntexLoader object((jobject) NULL);

              if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = AntexLoader(a0, a1, a2));
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

        static PyObject *t_AntexLoader_findSatelliteAntenna(t_AntexLoader *self, PyObject *args)
        {
          ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          ::org::orekit::utils::TimeSpanMap result((jobject) NULL);

          if (!parseArgs(args, "KI", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.findSatelliteAntenna(a0, a1));
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::org::orekit::gnss::antenna::PY_TYPE(SatelliteAntenna));
          }

          PyErr_SetArgsError((PyObject *) self, "findSatelliteAntenna", args);
          return NULL;
        }

        static PyObject *t_AntexLoader_getReceiversAntennas(t_AntexLoader *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getReceiversAntennas());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::antenna::PY_TYPE(ReceiverAntenna));
        }

        static PyObject *t_AntexLoader_getSatellitesAntennas(t_AntexLoader *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellitesAntennas());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_AntexLoader_get__receiversAntennas(t_AntexLoader *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getReceiversAntennas());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AntexLoader_get__satellitesAntennas(t_AntexLoader *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellitesAntennas());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/LaguerreSolver.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *LaguerreSolver::class$ = NULL;
        jmethodID *LaguerreSolver::mids$ = NULL;
        bool LaguerreSolver::live$ = false;

        jclass LaguerreSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/LaguerreSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_doSolve_b74f83833fdad017] = env->getMethodID(cls, "doSolve", "()D");
            mids$[mid_solveAllComplex_67d8487bd048a34b] = env->getMethodID(cls, "solveAllComplex", "([DD)[Lorg/hipparchus/complex/Complex;");
            mids$[mid_solveComplex_f51b24100b0e51b5] = env->getMethodID(cls, "solveComplex", "([DD)Lorg/hipparchus/complex/Complex;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LaguerreSolver::LaguerreSolver() : ::org::hipparchus::analysis::solvers::AbstractPolynomialSolver(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        LaguerreSolver::LaguerreSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractPolynomialSolver(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        LaguerreSolver::LaguerreSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractPolynomialSolver(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        LaguerreSolver::LaguerreSolver(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::solvers::AbstractPolynomialSolver(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

        jdouble LaguerreSolver::doSolve() const
        {
          return env->callDoubleMethod(this$, mids$[mid_doSolve_b74f83833fdad017]);
        }

        JArray< ::org::hipparchus::complex::Complex > LaguerreSolver::solveAllComplex(const JArray< jdouble > & a0, jdouble a1) const
        {
          return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_solveAllComplex_67d8487bd048a34b], a0.this$, a1));
        }

        ::org::hipparchus::complex::Complex LaguerreSolver::solveComplex(const JArray< jdouble > & a0, jdouble a1) const
        {
          return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_solveComplex_f51b24100b0e51b5], a0.this$, a1));
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
        static PyObject *t_LaguerreSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LaguerreSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LaguerreSolver_of_(t_LaguerreSolver *self, PyObject *args);
        static int t_LaguerreSolver_init_(t_LaguerreSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LaguerreSolver_doSolve(t_LaguerreSolver *self);
        static PyObject *t_LaguerreSolver_solveAllComplex(t_LaguerreSolver *self, PyObject *args);
        static PyObject *t_LaguerreSolver_solveComplex(t_LaguerreSolver *self, PyObject *args);
        static PyObject *t_LaguerreSolver_get__parameters_(t_LaguerreSolver *self, void *data);
        static PyGetSetDef t_LaguerreSolver__fields_[] = {
          DECLARE_GET_FIELD(t_LaguerreSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LaguerreSolver__methods_[] = {
          DECLARE_METHOD(t_LaguerreSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LaguerreSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LaguerreSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_LaguerreSolver, doSolve, METH_NOARGS),
          DECLARE_METHOD(t_LaguerreSolver, solveAllComplex, METH_VARARGS),
          DECLARE_METHOD(t_LaguerreSolver, solveComplex, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LaguerreSolver)[] = {
          { Py_tp_methods, t_LaguerreSolver__methods_ },
          { Py_tp_init, (void *) t_LaguerreSolver_init_ },
          { Py_tp_getset, t_LaguerreSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LaguerreSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractPolynomialSolver),
          NULL
        };

        DEFINE_TYPE(LaguerreSolver, t_LaguerreSolver, LaguerreSolver);
        PyObject *t_LaguerreSolver::wrap_Object(const LaguerreSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LaguerreSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LaguerreSolver *self = (t_LaguerreSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LaguerreSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LaguerreSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LaguerreSolver *self = (t_LaguerreSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LaguerreSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(LaguerreSolver), &PY_TYPE_DEF(LaguerreSolver), module, "LaguerreSolver", 0);
        }

        void t_LaguerreSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreSolver), "class_", make_descriptor(LaguerreSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreSolver), "wrapfn_", make_descriptor(t_LaguerreSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LaguerreSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LaguerreSolver::initializeClass, 1)))
            return NULL;
          return t_LaguerreSolver::wrap_Object(LaguerreSolver(((t_LaguerreSolver *) arg)->object.this$));
        }
        static PyObject *t_LaguerreSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LaguerreSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LaguerreSolver_of_(t_LaguerreSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LaguerreSolver_init_(t_LaguerreSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              LaguerreSolver object((jobject) NULL);

              INT_CALL(object = LaguerreSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::polynomials::PY_TYPE(PolynomialFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              LaguerreSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = LaguerreSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::polynomials::PY_TYPE(PolynomialFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              LaguerreSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = LaguerreSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::polynomials::PY_TYPE(PolynomialFunction);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              LaguerreSolver object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = LaguerreSolver(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::polynomials::PY_TYPE(PolynomialFunction);
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

        static PyObject *t_LaguerreSolver_doSolve(t_LaguerreSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.doSolve());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LaguerreSolver_solveAllComplex(t_LaguerreSolver *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;
          JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.solveAllComplex(a0, a1));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "solveAllComplex", args);
          return NULL;
        }

        static PyObject *t_LaguerreSolver_solveComplex(t_LaguerreSolver *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;
          ::org::hipparchus::complex::Complex result((jobject) NULL);

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.solveComplex(a0, a1));
            return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "solveComplex", args);
          return NULL;
        }
        static PyObject *t_LaguerreSolver_get__parameters_(t_LaguerreSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Header.h"
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Data.h"
#include "org/orekit/models/earth/ionosphere/SsrVtecIonosphericModel.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace subtype {

              ::java::lang::Class *SsrIm201::class$ = NULL;
              jmethodID *SsrIm201::mids$ = NULL;
              bool SsrIm201::live$ = false;

              jclass SsrIm201::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_961b35617787643b] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Header;Ljava/util/List;)V");
                  mids$[mid_getIonosphericModel_45bd2d7260a3238b] = env->getMethodID(cls, "getIonosphericModel", "()Lorg/orekit/models/earth/ionosphere/SsrVtecIonosphericModel;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIm201::SsrIm201(jint a0, const ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201Header & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::ssr::SsrMessage(env->newObject(initializeClass, &mids$, mid_init$_961b35617787643b, a0, a1.this$, a2.this$)) {}

              ::org::orekit::models::earth::ionosphere::SsrVtecIonosphericModel SsrIm201::getIonosphericModel() const
              {
                return ::org::orekit::models::earth::ionosphere::SsrVtecIonosphericModel(env->callObjectMethod(this$, mids$[mid_getIonosphericModel_45bd2d7260a3238b]));
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
            namespace subtype {
              static PyObject *t_SsrIm201_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIm201_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIm201_of_(t_SsrIm201 *self, PyObject *args);
              static int t_SsrIm201_init_(t_SsrIm201 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIm201_getIonosphericModel(t_SsrIm201 *self);
              static PyObject *t_SsrIm201_get__ionosphericModel(t_SsrIm201 *self, void *data);
              static PyObject *t_SsrIm201_get__parameters_(t_SsrIm201 *self, void *data);
              static PyGetSetDef t_SsrIm201__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIm201, ionosphericModel),
                DECLARE_GET_FIELD(t_SsrIm201, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIm201__methods_[] = {
                DECLARE_METHOD(t_SsrIm201, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIm201, getIonosphericModel, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIm201)[] = {
                { Py_tp_methods, t_SsrIm201__methods_ },
                { Py_tp_init, (void *) t_SsrIm201_init_ },
                { Py_tp_getset, t_SsrIm201__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIm201)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrMessage),
                NULL
              };

              DEFINE_TYPE(SsrIm201, t_SsrIm201, SsrIm201);
              PyObject *t_SsrIm201::wrap_Object(const SsrIm201& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIm201::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIm201 *self = (t_SsrIm201 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIm201::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIm201::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIm201 *self = (t_SsrIm201 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIm201::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIm201), &PY_TYPE_DEF(SsrIm201), module, "SsrIm201", 0);
              }

              void t_SsrIm201::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201), "class_", make_descriptor(SsrIm201::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201), "wrapfn_", make_descriptor(t_SsrIm201::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIm201_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIm201::initializeClass, 1)))
                  return NULL;
                return t_SsrIm201::wrap_Object(SsrIm201(((t_SsrIm201 *) arg)->object.this$));
              }
              static PyObject *t_SsrIm201_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIm201::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIm201_of_(t_SsrIm201 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIm201_init_(t_SsrIm201 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201Header a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                SsrIm201 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIm201(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::subtype::PY_TYPE(SsrIm201Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::subtype::PY_TYPE(SsrIm201Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIm201_getIonosphericModel(t_SsrIm201 *self)
              {
                ::org::orekit::models::earth::ionosphere::SsrVtecIonosphericModel result((jobject) NULL);
                OBJ_CALL(result = self->object.getIonosphericModel());
                return ::org::orekit::models::earth::ionosphere::t_SsrVtecIonosphericModel::wrap_Object(result);
              }
              static PyObject *t_SsrIm201_get__parameters_(t_SsrIm201 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIm201_get__ionosphericModel(t_SsrIm201 *self, void *data)
              {
                ::org::orekit::models::earth::ionosphere::SsrVtecIonosphericModel value((jobject) NULL);
                OBJ_CALL(value = self->object.getIonosphericModel());
                return ::org::orekit::models::earth::ionosphere::t_SsrVtecIonosphericModel::wrap_Object(value);
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
#include "org/orekit/files/rinex/utils/RinexFileType.h"
#include "java/lang/String.h"
#include "org/orekit/files/rinex/utils/RinexFileType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace utils {

          ::java::lang::Class *RinexFileType::class$ = NULL;
          jmethodID *RinexFileType::mids$ = NULL;
          bool RinexFileType::live$ = false;
          RinexFileType *RinexFileType::NAVIGATION = NULL;
          RinexFileType *RinexFileType::OBSERVATION = NULL;

          jclass RinexFileType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/utils/RinexFileType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_parseRinexFileType_e8eeb81083fcf906] = env->getStaticMethodID(cls, "parseRinexFileType", "(Ljava/lang/String;)Lorg/orekit/files/rinex/utils/RinexFileType;");
              mids$[mid_valueOf_e8eeb81083fcf906] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/utils/RinexFileType;");
              mids$[mid_values_89301cac4890840c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/utils/RinexFileType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NAVIGATION = new RinexFileType(env->getStaticObjectField(cls, "NAVIGATION", "Lorg/orekit/files/rinex/utils/RinexFileType;"));
              OBSERVATION = new RinexFileType(env->getStaticObjectField(cls, "OBSERVATION", "Lorg/orekit/files/rinex/utils/RinexFileType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexFileType RinexFileType::parseRinexFileType(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RinexFileType(env->callStaticObjectMethod(cls, mids$[mid_parseRinexFileType_e8eeb81083fcf906], a0.this$));
          }

          RinexFileType RinexFileType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RinexFileType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e8eeb81083fcf906], a0.this$));
          }

          JArray< RinexFileType > RinexFileType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RinexFileType >(env->callStaticObjectMethod(cls, mids$[mid_values_89301cac4890840c]));
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
        namespace utils {
          static PyObject *t_RinexFileType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexFileType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexFileType_of_(t_RinexFileType *self, PyObject *args);
          static PyObject *t_RinexFileType_parseRinexFileType(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexFileType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RinexFileType_values(PyTypeObject *type);
          static PyObject *t_RinexFileType_get__parameters_(t_RinexFileType *self, void *data);
          static PyGetSetDef t_RinexFileType__fields_[] = {
            DECLARE_GET_FIELD(t_RinexFileType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexFileType__methods_[] = {
            DECLARE_METHOD(t_RinexFileType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexFileType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexFileType, of_, METH_VARARGS),
            DECLARE_METHOD(t_RinexFileType, parseRinexFileType, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexFileType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RinexFileType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexFileType)[] = {
            { Py_tp_methods, t_RinexFileType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RinexFileType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexFileType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RinexFileType, t_RinexFileType, RinexFileType);
          PyObject *t_RinexFileType::wrap_Object(const RinexFileType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexFileType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexFileType *self = (t_RinexFileType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RinexFileType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexFileType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexFileType *self = (t_RinexFileType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RinexFileType::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexFileType), &PY_TYPE_DEF(RinexFileType), module, "RinexFileType", 0);
          }

          void t_RinexFileType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFileType), "class_", make_descriptor(RinexFileType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFileType), "wrapfn_", make_descriptor(t_RinexFileType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFileType), "boxfn_", make_descriptor(boxObject));
            env->getClass(RinexFileType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFileType), "NAVIGATION", make_descriptor(t_RinexFileType::wrap_Object(*RinexFileType::NAVIGATION)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFileType), "OBSERVATION", make_descriptor(t_RinexFileType::wrap_Object(*RinexFileType::OBSERVATION)));
          }

          static PyObject *t_RinexFileType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexFileType::initializeClass, 1)))
              return NULL;
            return t_RinexFileType::wrap_Object(RinexFileType(((t_RinexFileType *) arg)->object.this$));
          }
          static PyObject *t_RinexFileType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexFileType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexFileType_of_(t_RinexFileType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RinexFileType_parseRinexFileType(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            RinexFileType result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::utils::RinexFileType::parseRinexFileType(a0));
              return t_RinexFileType::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parseRinexFileType", arg);
            return NULL;
          }

          static PyObject *t_RinexFileType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RinexFileType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::utils::RinexFileType::valueOf(a0));
              return t_RinexFileType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RinexFileType_values(PyTypeObject *type)
          {
            JArray< RinexFileType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::utils::RinexFileType::values());
            return JArray<jobject>(result.this$).wrap(t_RinexFileType::wrap_jobject);
          }
          static PyObject *t_RinexFileType_get__parameters_(t_RinexFileType *self, void *data)
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
#include "org/hipparchus/stat/descriptive/DescriptiveStatistics.h"
#include "org/hipparchus/stat/descriptive/UnivariateStatistic.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/util/function/DoubleConsumer.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "org/hipparchus/stat/descriptive/DescriptiveStatistics.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *DescriptiveStatistics::class$ = NULL;
        jmethodID *DescriptiveStatistics::mids$ = NULL;
        bool DescriptiveStatistics::live$ = false;

        jclass DescriptiveStatistics::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/DescriptiveStatistics");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_ab69da052b88f50c] = env->getMethodID(cls, "<init>", "([D)V");
            mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_accept_8ba9fe7a847cecad] = env->getMethodID(cls, "accept", "(D)V");
            mids$[mid_addValue_8ba9fe7a847cecad] = env->getMethodID(cls, "addValue", "(D)V");
            mids$[mid_apply_99884f42ea39cf31] = env->getMethodID(cls, "apply", "(Lorg/hipparchus/stat/descriptive/UnivariateStatistic;)D");
            mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_copy_d6cc319fcebc162c] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/DescriptiveStatistics;");
            mids$[mid_getElement_2afcbc21f4e57ab2] = env->getMethodID(cls, "getElement", "(I)D");
            mids$[mid_getGeometricMean_b74f83833fdad017] = env->getMethodID(cls, "getGeometricMean", "()D");
            mids$[mid_getKurtosis_b74f83833fdad017] = env->getMethodID(cls, "getKurtosis", "()D");
            mids$[mid_getMax_b74f83833fdad017] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMean_b74f83833fdad017] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getMin_b74f83833fdad017] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getPercentile_04fd0666b613d2ab] = env->getMethodID(cls, "getPercentile", "(D)D");
            mids$[mid_getPopulationVariance_b74f83833fdad017] = env->getMethodID(cls, "getPopulationVariance", "()D");
            mids$[mid_getQuadraticMean_b74f83833fdad017] = env->getMethodID(cls, "getQuadraticMean", "()D");
            mids$[mid_getSkewness_b74f83833fdad017] = env->getMethodID(cls, "getSkewness", "()D");
            mids$[mid_getSortedValues_25e1757a36c4dde2] = env->getMethodID(cls, "getSortedValues", "()[D");
            mids$[mid_getStandardDeviation_b74f83833fdad017] = env->getMethodID(cls, "getStandardDeviation", "()D");
            mids$[mid_getSum_b74f83833fdad017] = env->getMethodID(cls, "getSum", "()D");
            mids$[mid_getSumOfSquares_b74f83833fdad017] = env->getMethodID(cls, "getSumOfSquares", "()D");
            mids$[mid_getValues_25e1757a36c4dde2] = env->getMethodID(cls, "getValues", "()[D");
            mids$[mid_getVariance_b74f83833fdad017] = env->getMethodID(cls, "getVariance", "()D");
            mids$[mid_getWindowSize_55546ef6a647f39b] = env->getMethodID(cls, "getWindowSize", "()I");
            mids$[mid_removeMostRecentValue_a1fa5dae97ea5ed2] = env->getMethodID(cls, "removeMostRecentValue", "()V");
            mids$[mid_replaceMostRecentValue_04fd0666b613d2ab] = env->getMethodID(cls, "replaceMostRecentValue", "(D)D");
            mids$[mid_setWindowSize_44ed599e93e8a30c] = env->getMethodID(cls, "setWindowSize", "(I)V");
            mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DescriptiveStatistics::DescriptiveStatistics() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        DescriptiveStatistics::DescriptiveStatistics(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab69da052b88f50c, a0.this$)) {}

        DescriptiveStatistics::DescriptiveStatistics(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

        void DescriptiveStatistics::accept(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_accept_8ba9fe7a847cecad], a0);
        }

        void DescriptiveStatistics::addValue(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addValue_8ba9fe7a847cecad], a0);
        }

        jdouble DescriptiveStatistics::apply(const ::org::hipparchus::stat::descriptive::UnivariateStatistic & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_apply_99884f42ea39cf31], a0.this$);
        }

        void DescriptiveStatistics::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
        }

        DescriptiveStatistics DescriptiveStatistics::copy() const
        {
          return DescriptiveStatistics(env->callObjectMethod(this$, mids$[mid_copy_d6cc319fcebc162c]));
        }

        jdouble DescriptiveStatistics::getElement(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElement_2afcbc21f4e57ab2], a0);
        }

        jdouble DescriptiveStatistics::getGeometricMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getGeometricMean_b74f83833fdad017]);
        }

        jdouble DescriptiveStatistics::getKurtosis() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getKurtosis_b74f83833fdad017]);
        }

        jdouble DescriptiveStatistics::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_b74f83833fdad017]);
        }

        jdouble DescriptiveStatistics::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_b74f83833fdad017]);
        }

        jdouble DescriptiveStatistics::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_b74f83833fdad017]);
        }

        jlong DescriptiveStatistics::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
        }

        jdouble DescriptiveStatistics::getPercentile(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPercentile_04fd0666b613d2ab], a0);
        }

        jdouble DescriptiveStatistics::getPopulationVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPopulationVariance_b74f83833fdad017]);
        }

        jdouble DescriptiveStatistics::getQuadraticMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getQuadraticMean_b74f83833fdad017]);
        }

        jdouble DescriptiveStatistics::getSkewness() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSkewness_b74f83833fdad017]);
        }

        JArray< jdouble > DescriptiveStatistics::getSortedValues() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSortedValues_25e1757a36c4dde2]));
        }

        jdouble DescriptiveStatistics::getStandardDeviation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStandardDeviation_b74f83833fdad017]);
        }

        jdouble DescriptiveStatistics::getSum() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSum_b74f83833fdad017]);
        }

        jdouble DescriptiveStatistics::getSumOfSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumOfSquares_b74f83833fdad017]);
        }

        JArray< jdouble > DescriptiveStatistics::getValues() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getValues_25e1757a36c4dde2]));
        }

        jdouble DescriptiveStatistics::getVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getVariance_b74f83833fdad017]);
        }

        jint DescriptiveStatistics::getWindowSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getWindowSize_55546ef6a647f39b]);
        }

        void DescriptiveStatistics::removeMostRecentValue() const
        {
          env->callVoidMethod(this$, mids$[mid_removeMostRecentValue_a1fa5dae97ea5ed2]);
        }

        jdouble DescriptiveStatistics::replaceMostRecentValue(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_replaceMostRecentValue_04fd0666b613d2ab], a0);
        }

        void DescriptiveStatistics::setWindowSize(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setWindowSize_44ed599e93e8a30c], a0);
        }

        ::java::lang::String DescriptiveStatistics::toString() const
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
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        static PyObject *t_DescriptiveStatistics_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DescriptiveStatistics_init_(t_DescriptiveStatistics *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DescriptiveStatistics_accept(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_addValue(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_apply(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_clear(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_copy(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getElement(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_getGeometricMean(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getKurtosis(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getMax(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getMean(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getMin(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getN(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getPercentile(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_getPopulationVariance(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getQuadraticMean(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getSkewness(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getSortedValues(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getStandardDeviation(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getSum(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getSumOfSquares(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getValues(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getVariance(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getWindowSize(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_removeMostRecentValue(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_replaceMostRecentValue(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_setWindowSize(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_toString(t_DescriptiveStatistics *self, PyObject *args);
        static PyObject *t_DescriptiveStatistics_get__geometricMean(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__kurtosis(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__max(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__mean(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__min(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__n(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__populationVariance(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__quadraticMean(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__skewness(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__sortedValues(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__standardDeviation(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__sum(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__sumOfSquares(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__values(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__variance(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__windowSize(t_DescriptiveStatistics *self, void *data);
        static int t_DescriptiveStatistics_set__windowSize(t_DescriptiveStatistics *self, PyObject *arg, void *data);
        static PyGetSetDef t_DescriptiveStatistics__fields_[] = {
          DECLARE_GET_FIELD(t_DescriptiveStatistics, geometricMean),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, kurtosis),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, max),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, mean),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, min),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, n),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, populationVariance),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, quadraticMean),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, skewness),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, sortedValues),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, standardDeviation),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, sum),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, sumOfSquares),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, values),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, variance),
          DECLARE_GETSET_FIELD(t_DescriptiveStatistics, windowSize),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DescriptiveStatistics__methods_[] = {
          DECLARE_METHOD(t_DescriptiveStatistics, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DescriptiveStatistics, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DescriptiveStatistics, accept, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, addValue, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, apply, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, clear, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, copy, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getElement, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, getGeometricMean, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getKurtosis, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getMax, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getMean, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getMin, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getN, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getPercentile, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, getPopulationVariance, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getQuadraticMean, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getSkewness, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getSortedValues, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getSum, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getSumOfSquares, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getValues, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getVariance, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getWindowSize, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, removeMostRecentValue, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, replaceMostRecentValue, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, setWindowSize, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DescriptiveStatistics)[] = {
          { Py_tp_methods, t_DescriptiveStatistics__methods_ },
          { Py_tp_init, (void *) t_DescriptiveStatistics_init_ },
          { Py_tp_getset, t_DescriptiveStatistics__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DescriptiveStatistics)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DescriptiveStatistics, t_DescriptiveStatistics, DescriptiveStatistics);

        void t_DescriptiveStatistics::install(PyObject *module)
        {
          installType(&PY_TYPE(DescriptiveStatistics), &PY_TYPE_DEF(DescriptiveStatistics), module, "DescriptiveStatistics", 0);
        }

        void t_DescriptiveStatistics::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DescriptiveStatistics), "class_", make_descriptor(DescriptiveStatistics::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DescriptiveStatistics), "wrapfn_", make_descriptor(t_DescriptiveStatistics::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DescriptiveStatistics), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DescriptiveStatistics_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DescriptiveStatistics::initializeClass, 1)))
            return NULL;
          return t_DescriptiveStatistics::wrap_Object(DescriptiveStatistics(((t_DescriptiveStatistics *) arg)->object.this$));
        }
        static PyObject *t_DescriptiveStatistics_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DescriptiveStatistics::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DescriptiveStatistics_init_(t_DescriptiveStatistics *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              DescriptiveStatistics object((jobject) NULL);

              INT_CALL(object = DescriptiveStatistics());
              self->object = object;
              break;
            }
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              DescriptiveStatistics object((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                INT_CALL(object = DescriptiveStatistics(a0));
                self->object = object;
                break;
              }
            }
            {
              jint a0;
              DescriptiveStatistics object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = DescriptiveStatistics(a0));
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

        static PyObject *t_DescriptiveStatistics_accept(t_DescriptiveStatistics *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.accept(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "accept", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_addValue(t_DescriptiveStatistics *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.addValue(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addValue", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_apply(t_DescriptiveStatistics *self, PyObject *arg)
        {
          ::org::hipparchus::stat::descriptive::UnivariateStatistic a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::hipparchus::stat::descriptive::UnivariateStatistic::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.apply(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "apply", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_clear(t_DescriptiveStatistics *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_DescriptiveStatistics_copy(t_DescriptiveStatistics *self)
        {
          DescriptiveStatistics result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return t_DescriptiveStatistics::wrap_Object(result);
        }

        static PyObject *t_DescriptiveStatistics_getElement(t_DescriptiveStatistics *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getElement(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElement", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_getGeometricMean(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getGeometricMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getKurtosis(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getKurtosis());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getMax(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getMean(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getMin(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getN(t_DescriptiveStatistics *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_DescriptiveStatistics_getPercentile(t_DescriptiveStatistics *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getPercentile(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPercentile", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_getPopulationVariance(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPopulationVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getQuadraticMean(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getQuadraticMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getSkewness(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSkewness());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getSortedValues(t_DescriptiveStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSortedValues());
          return result.wrap();
        }

        static PyObject *t_DescriptiveStatistics_getStandardDeviation(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getSum(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSum());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getSumOfSquares(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumOfSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getValues(t_DescriptiveStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getValues());
          return result.wrap();
        }

        static PyObject *t_DescriptiveStatistics_getVariance(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getWindowSize(t_DescriptiveStatistics *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getWindowSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DescriptiveStatistics_removeMostRecentValue(t_DescriptiveStatistics *self)
        {
          OBJ_CALL(self->object.removeMostRecentValue());
          Py_RETURN_NONE;
        }

        static PyObject *t_DescriptiveStatistics_replaceMostRecentValue(t_DescriptiveStatistics *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.replaceMostRecentValue(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "replaceMostRecentValue", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_setWindowSize(t_DescriptiveStatistics *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setWindowSize(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setWindowSize", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_toString(t_DescriptiveStatistics *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(DescriptiveStatistics), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_DescriptiveStatistics_get__geometricMean(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getGeometricMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__kurtosis(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getKurtosis());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__max(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__mean(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__min(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__n(t_DescriptiveStatistics *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_DescriptiveStatistics_get__populationVariance(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPopulationVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__quadraticMean(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getQuadraticMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__skewness(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSkewness());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__sortedValues(t_DescriptiveStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSortedValues());
          return value.wrap();
        }

        static PyObject *t_DescriptiveStatistics_get__standardDeviation(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__sum(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSum());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__sumOfSquares(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumOfSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__values(t_DescriptiveStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getValues());
          return value.wrap();
        }

        static PyObject *t_DescriptiveStatistics_get__variance(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__windowSize(t_DescriptiveStatistics *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getWindowSize());
          return PyLong_FromLong((long) value);
        }
        static int t_DescriptiveStatistics_set__windowSize(t_DescriptiveStatistics *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setWindowSize(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "windowSize", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/PythonDTM2000InputParameters.h"
#include "org/orekit/models/earth/atmosphere/DTM2000InputParameters.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *PythonDTM2000InputParameters::class$ = NULL;
          jmethodID *PythonDTM2000InputParameters::mids$ = NULL;
          bool PythonDTM2000InputParameters::live$ = false;

          jclass PythonDTM2000InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/PythonDTM2000InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_get24HoursKp_fd347811007a6ba3] = env->getMethodID(cls, "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getInstantFlux_fd347811007a6ba3] = env->getMethodID(cls, "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_c325492395d89b24] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMeanFlux_fd347811007a6ba3] = env->getMethodID(cls, "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMinDate_c325492395d89b24] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getThreeHourlyKP_fd347811007a6ba3] = env->getMethodID(cls, "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonDTM2000InputParameters::PythonDTM2000InputParameters() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonDTM2000InputParameters::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonDTM2000InputParameters::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonDTM2000InputParameters::pythonExtension(jlong a0) const
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          static PyObject *t_PythonDTM2000InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonDTM2000InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonDTM2000InputParameters_init_(t_PythonDTM2000InputParameters *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonDTM2000InputParameters_finalize(t_PythonDTM2000InputParameters *self);
          static PyObject *t_PythonDTM2000InputParameters_pythonExtension(t_PythonDTM2000InputParameters *self, PyObject *args);
          static jdouble JNICALL t_PythonDTM2000InputParameters_get24HoursKp0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonDTM2000InputParameters_getInstantFlux1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonDTM2000InputParameters_getMaxDate2(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonDTM2000InputParameters_getMeanFlux3(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonDTM2000InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonDTM2000InputParameters_getThreeHourlyKP5(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonDTM2000InputParameters_pythonDecRef6(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonDTM2000InputParameters_get__self(t_PythonDTM2000InputParameters *self, void *data);
          static PyGetSetDef t_PythonDTM2000InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_PythonDTM2000InputParameters, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonDTM2000InputParameters__methods_[] = {
            DECLARE_METHOD(t_PythonDTM2000InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDTM2000InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDTM2000InputParameters, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonDTM2000InputParameters, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonDTM2000InputParameters)[] = {
            { Py_tp_methods, t_PythonDTM2000InputParameters__methods_ },
            { Py_tp_init, (void *) t_PythonDTM2000InputParameters_init_ },
            { Py_tp_getset, t_PythonDTM2000InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonDTM2000InputParameters)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonDTM2000InputParameters, t_PythonDTM2000InputParameters, PythonDTM2000InputParameters);

          void t_PythonDTM2000InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonDTM2000InputParameters), &PY_TYPE_DEF(PythonDTM2000InputParameters), module, "PythonDTM2000InputParameters", 1);
          }

          void t_PythonDTM2000InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDTM2000InputParameters), "class_", make_descriptor(PythonDTM2000InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDTM2000InputParameters), "wrapfn_", make_descriptor(t_PythonDTM2000InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDTM2000InputParameters), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonDTM2000InputParameters::initializeClass);
            JNINativeMethod methods[] = {
              { "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonDTM2000InputParameters_get24HoursKp0 },
              { "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonDTM2000InputParameters_getInstantFlux1 },
              { "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonDTM2000InputParameters_getMaxDate2 },
              { "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonDTM2000InputParameters_getMeanFlux3 },
              { "getMinDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonDTM2000InputParameters_getMinDate4 },
              { "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonDTM2000InputParameters_getThreeHourlyKP5 },
              { "pythonDecRef", "()V", (void *) t_PythonDTM2000InputParameters_pythonDecRef6 },
            };
            env->registerNatives(cls, methods, 7);
          }

          static PyObject *t_PythonDTM2000InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonDTM2000InputParameters::initializeClass, 1)))
              return NULL;
            return t_PythonDTM2000InputParameters::wrap_Object(PythonDTM2000InputParameters(((t_PythonDTM2000InputParameters *) arg)->object.this$));
          }
          static PyObject *t_PythonDTM2000InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonDTM2000InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonDTM2000InputParameters_init_(t_PythonDTM2000InputParameters *self, PyObject *args, PyObject *kwds)
          {
            PythonDTM2000InputParameters object((jobject) NULL);

            INT_CALL(object = PythonDTM2000InputParameters());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonDTM2000InputParameters_finalize(t_PythonDTM2000InputParameters *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonDTM2000InputParameters_pythonExtension(t_PythonDTM2000InputParameters *self, PyObject *args)
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

          static jdouble JNICALL t_PythonDTM2000InputParameters_get24HoursKp0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "get24HoursKp", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("get24HoursKp", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonDTM2000InputParameters_getInstantFlux1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getInstantFlux", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getInstantFlux", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonDTM2000InputParameters_getMaxDate2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getMaxDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
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

          static jdouble JNICALL t_PythonDTM2000InputParameters_getMeanFlux3(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getMeanFlux", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getMeanFlux", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonDTM2000InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getMinDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
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

          static jdouble JNICALL t_PythonDTM2000InputParameters_getThreeHourlyKP5(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getThreeHourlyKP", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getThreeHourlyKP", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonDTM2000InputParameters_pythonDecRef6(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonDTM2000InputParameters_get__self(t_PythonDTM2000InputParameters *self, void *data)
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
#include "org/orekit/models/earth/atmosphere/data/SOLFSMYDataLoader$LineParameters.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *SOLFSMYDataLoader$LineParameters::class$ = NULL;
            jmethodID *SOLFSMYDataLoader$LineParameters::mids$ = NULL;
            bool SOLFSMYDataLoader$LineParameters::live$ = false;

            jclass SOLFSMYDataLoader$LineParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/SOLFSMYDataLoader$LineParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_4b64baaa924f2839] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDDDDDD)V");
                mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getF10_b74f83833fdad017] = env->getMethodID(cls, "getF10", "()D");
                mids$[mid_getF10B_b74f83833fdad017] = env->getMethodID(cls, "getF10B", "()D");
                mids$[mid_getS10_b74f83833fdad017] = env->getMethodID(cls, "getS10", "()D");
                mids$[mid_getS10B_b74f83833fdad017] = env->getMethodID(cls, "getS10B", "()D");
                mids$[mid_getXM10_b74f83833fdad017] = env->getMethodID(cls, "getXM10", "()D");
                mids$[mid_getXM10B_b74f83833fdad017] = env->getMethodID(cls, "getXM10B", "()D");
                mids$[mid_getY10_b74f83833fdad017] = env->getMethodID(cls, "getY10", "()D");
                mids$[mid_getY10B_b74f83833fdad017] = env->getMethodID(cls, "getY10B", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SOLFSMYDataLoader$LineParameters::SOLFSMYDataLoader$LineParameters(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4b64baaa924f2839, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8)) {}

            ::org::orekit::time::AbsoluteDate SOLFSMYDataLoader$LineParameters::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
            }

            jdouble SOLFSMYDataLoader$LineParameters::getF10() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF10_b74f83833fdad017]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getF10B() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF10B_b74f83833fdad017]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getS10() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getS10_b74f83833fdad017]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getS10B() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getS10B_b74f83833fdad017]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getXM10() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXM10_b74f83833fdad017]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getXM10B() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXM10B_b74f83833fdad017]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getY10() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY10_b74f83833fdad017]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getY10B() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY10B_b74f83833fdad017]);
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_SOLFSMYDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SOLFSMYDataLoader$LineParameters_init_(t_SOLFSMYDataLoader$LineParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getDate(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getF10(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getF10B(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getS10(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getS10B(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getXM10(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getXM10B(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getY10(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getY10B(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__date(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__f10(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__f10B(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__s10(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__s10B(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__xM10(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__xM10B(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__y10(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__y10B(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyGetSetDef t_SOLFSMYDataLoader$LineParameters__fields_[] = {
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, date),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, f10),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, f10B),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, s10),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, s10B),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, xM10),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, xM10B),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, y10),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, y10B),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SOLFSMYDataLoader$LineParameters__methods_[] = {
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getDate, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getF10, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getF10B, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getS10, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getS10B, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getXM10, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getXM10B, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getY10, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getY10B, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SOLFSMYDataLoader$LineParameters)[] = {
              { Py_tp_methods, t_SOLFSMYDataLoader$LineParameters__methods_ },
              { Py_tp_init, (void *) t_SOLFSMYDataLoader$LineParameters_init_ },
              { Py_tp_getset, t_SOLFSMYDataLoader$LineParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SOLFSMYDataLoader$LineParameters)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SOLFSMYDataLoader$LineParameters, t_SOLFSMYDataLoader$LineParameters, SOLFSMYDataLoader$LineParameters);

            void t_SOLFSMYDataLoader$LineParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(SOLFSMYDataLoader$LineParameters), &PY_TYPE_DEF(SOLFSMYDataLoader$LineParameters), module, "SOLFSMYDataLoader$LineParameters", 0);
            }

            void t_SOLFSMYDataLoader$LineParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader$LineParameters), "class_", make_descriptor(SOLFSMYDataLoader$LineParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader$LineParameters), "wrapfn_", make_descriptor(t_SOLFSMYDataLoader$LineParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader$LineParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SOLFSMYDataLoader$LineParameters::initializeClass, 1)))
                return NULL;
              return t_SOLFSMYDataLoader$LineParameters::wrap_Object(SOLFSMYDataLoader$LineParameters(((t_SOLFSMYDataLoader$LineParameters *) arg)->object.this$));
            }
            static PyObject *t_SOLFSMYDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SOLFSMYDataLoader$LineParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SOLFSMYDataLoader$LineParameters_init_(t_SOLFSMYDataLoader$LineParameters *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              SOLFSMYDataLoader$LineParameters object((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = SOLFSMYDataLoader$LineParameters(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getDate(t_SOLFSMYDataLoader$LineParameters *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getF10(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getF10());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getF10B(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getF10B());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getS10(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getS10());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getS10B(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getS10B());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getXM10(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXM10());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getXM10B(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXM10B());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getY10(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY10());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getY10B(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY10B());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__date(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__f10(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getF10());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__f10B(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getF10B());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__s10(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getS10());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__s10B(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getS10B());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__xM10(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXM10());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__xM10B(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXM10B());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__y10(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY10());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__y10B(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY10B());
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
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1Field.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDerivative1::class$ = NULL;
        jmethodID *UnivariateDerivative1::mids$ = NULL;
        bool UnivariateDerivative1::live$ = false;
        UnivariateDerivative1 *UnivariateDerivative1::PI = NULL;

        jclass UnivariateDerivative1::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDerivative1");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0e3cd27f693a0167] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)V");
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_abs_7826974382aac05b] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_acos_7826974382aac05b] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_acosh_7826974382aac05b] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_add_a70b8cbdc3613363] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_add_f85c512395e6884c] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_asin_7826974382aac05b] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_asinh_7826974382aac05b] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_atan_7826974382aac05b] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_atan2_a70b8cbdc3613363] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_atanh_7826974382aac05b] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_cbrt_7826974382aac05b] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_ceil_7826974382aac05b] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_compareTo_f8e60c181e510a89] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)I");
            mids$[mid_compose_3ebcb47dbae0f3f9] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_copySign_a70b8cbdc3613363] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_copySign_f85c512395e6884c] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_cos_7826974382aac05b] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_cosh_7826974382aac05b] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_divide_a70b8cbdc3613363] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_divide_f85c512395e6884c] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_7826974382aac05b] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_expm1_7826974382aac05b] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_floor_7826974382aac05b] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_getDerivative_2afcbc21f4e57ab2] = env->getMethodID(cls, "getDerivative", "(I)D");
            mids$[mid_getExponent_55546ef6a647f39b] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_99ac5972aa279a25] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1Field;");
            mids$[mid_getFirstDerivative_b74f83833fdad017] = env->getMethodID(cls, "getFirstDerivative", "()D");
            mids$[mid_getOrder_55546ef6a647f39b] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPi_7826974382aac05b] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_getReal_b74f83833fdad017] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_b74f83833fdad017] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_a70b8cbdc3613363] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_52288f81019d2ada] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_cc0b0196c8231e40] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;[Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_9ca7cf237f1213ef] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_00a4b720dea21f59] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_be3b39149c562198] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_6718f298ee4f43b0] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_19fa63b1cd1b72c5] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_1fd8a27a51b26f5c] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_log_7826974382aac05b] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_log10_7826974382aac05b] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_log1p_7826974382aac05b] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_multiply_a70b8cbdc3613363] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_multiply_f85c512395e6884c] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_multiply_41e12cbc32008fc0] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_negate_7826974382aac05b] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_newInstance_f85c512395e6884c] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_pow_a70b8cbdc3613363] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_pow_f85c512395e6884c] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_pow_41e12cbc32008fc0] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_pow_c8c5f953f921b257] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_reciprocal_7826974382aac05b] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_remainder_a70b8cbdc3613363] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_remainder_f85c512395e6884c] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_rint_7826974382aac05b] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_rootN_41e12cbc32008fc0] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_scalb_41e12cbc32008fc0] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_sign_7826974382aac05b] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_sin_7826974382aac05b] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_sinCos_e434dd780193da2f] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_7826974382aac05b] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_sinhCosh_4a1e2142f3481995] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_7826974382aac05b] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_subtract_a70b8cbdc3613363] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_subtract_f85c512395e6884c] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_tan_7826974382aac05b] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_tanh_7826974382aac05b] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_taylor_04fd0666b613d2ab] = env->getMethodID(cls, "taylor", "(D)D");
            mids$[mid_toDegrees_7826974382aac05b] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_toDerivativeStructure_57983c4d4b4a2f7f] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_toRadians_7826974382aac05b] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_ulp_7826974382aac05b] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            PI = new UnivariateDerivative1(env->getStaticObjectField(cls, "PI", "Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateDerivative1::UnivariateDerivative1(const ::org::hipparchus::analysis::differentiation::DerivativeStructure & a0) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_0e3cd27f693a0167, a0.this$)) {}

        UnivariateDerivative1::UnivariateDerivative1(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        UnivariateDerivative1 UnivariateDerivative1::abs() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_abs_7826974382aac05b]));
        }

        UnivariateDerivative1 UnivariateDerivative1::acos() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_acos_7826974382aac05b]));
        }

        UnivariateDerivative1 UnivariateDerivative1::acosh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_acosh_7826974382aac05b]));
        }

        UnivariateDerivative1 UnivariateDerivative1::add(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_add_a70b8cbdc3613363], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::add(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_add_f85c512395e6884c], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::asin() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_asin_7826974382aac05b]));
        }

        UnivariateDerivative1 UnivariateDerivative1::asinh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_asinh_7826974382aac05b]));
        }

        UnivariateDerivative1 UnivariateDerivative1::atan() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atan_7826974382aac05b]));
        }

        UnivariateDerivative1 UnivariateDerivative1::atan2(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atan2_a70b8cbdc3613363], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::atanh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atanh_7826974382aac05b]));
        }

        UnivariateDerivative1 UnivariateDerivative1::cbrt() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cbrt_7826974382aac05b]));
        }

        UnivariateDerivative1 UnivariateDerivative1::ceil() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_ceil_7826974382aac05b]));
        }

        jint UnivariateDerivative1::compareTo(const UnivariateDerivative1 & a0) const
        {
          return env->callIntMethod(this$, mids$[mid_compareTo_f8e60c181e510a89], a0.this$);
        }

        UnivariateDerivative1 UnivariateDerivative1::compose(const JArray< jdouble > & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_compose_3ebcb47dbae0f3f9], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::copySign(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_copySign_a70b8cbdc3613363], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::copySign(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_copySign_f85c512395e6884c], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::cos() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cos_7826974382aac05b]));
        }

        UnivariateDerivative1 UnivariateDerivative1::cosh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cosh_7826974382aac05b]));
        }

        UnivariateDerivative1 UnivariateDerivative1::divide(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_divide_a70b8cbdc3613363], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::divide(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_divide_f85c512395e6884c], a0));
        }

        jboolean UnivariateDerivative1::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
        }

        UnivariateDerivative1 UnivariateDerivative1::exp() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_exp_7826974382aac05b]));
        }

        UnivariateDerivative1 UnivariateDerivative1::expm1() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_expm1_7826974382aac05b]));
        }

        UnivariateDerivative1 UnivariateDerivative1::floor() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_floor_7826974382aac05b]));
        }

        jdouble UnivariateDerivative1::getDerivative(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDerivative_2afcbc21f4e57ab2], a0);
        }

        jint UnivariateDerivative1::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_55546ef6a647f39b]);
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field UnivariateDerivative1::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field(env->callObjectMethod(this$, mids$[mid_getField_99ac5972aa279a25]));
        }

        jdouble UnivariateDerivative1::getFirstDerivative() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFirstDerivative_b74f83833fdad017]);
        }

        jint UnivariateDerivative1::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_55546ef6a647f39b]);
        }

        UnivariateDerivative1 UnivariateDerivative1::getPi() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getPi_7826974382aac05b]));
        }

        jdouble UnivariateDerivative1::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_b74f83833fdad017]);
        }

        jdouble UnivariateDerivative1::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_b74f83833fdad017]);
        }

        jint UnivariateDerivative1::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
        }

        UnivariateDerivative1 UnivariateDerivative1::hypot(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_hypot_a70b8cbdc3613363], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(const JArray< jdouble > & a0, const JArray< UnivariateDerivative1 > & a1) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_52288f81019d2ada], a0.this$, a1.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(const JArray< UnivariateDerivative1 > & a0, const JArray< UnivariateDerivative1 > & a1) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_cc0b0196c8231e40], a0.this$, a1.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(const UnivariateDerivative1 & a0, const UnivariateDerivative1 & a1, const UnivariateDerivative1 & a2, const UnivariateDerivative1 & a3) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_9ca7cf237f1213ef], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(jdouble a0, const UnivariateDerivative1 & a1, jdouble a2, const UnivariateDerivative1 & a3) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_00a4b720dea21f59], a0, a1.this$, a2, a3.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(const UnivariateDerivative1 & a0, const UnivariateDerivative1 & a1, const UnivariateDerivative1 & a2, const UnivariateDerivative1 & a3, const UnivariateDerivative1 & a4, const UnivariateDerivative1 & a5) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_be3b39149c562198], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(jdouble a0, const UnivariateDerivative1 & a1, jdouble a2, const UnivariateDerivative1 & a3, jdouble a4, const UnivariateDerivative1 & a5) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_6718f298ee4f43b0], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(const UnivariateDerivative1 & a0, const UnivariateDerivative1 & a1, const UnivariateDerivative1 & a2, const UnivariateDerivative1 & a3, const UnivariateDerivative1 & a4, const UnivariateDerivative1 & a5, const UnivariateDerivative1 & a6, const UnivariateDerivative1 & a7) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_19fa63b1cd1b72c5], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(jdouble a0, const UnivariateDerivative1 & a1, jdouble a2, const UnivariateDerivative1 & a3, jdouble a4, const UnivariateDerivative1 & a5, jdouble a6, const UnivariateDerivative1 & a7) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_1fd8a27a51b26f5c], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::log() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log_7826974382aac05b]));
        }

        UnivariateDerivative1 UnivariateDerivative1::log10() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log10_7826974382aac05b]));
        }

        UnivariateDerivative1 UnivariateDerivative1::log1p() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log1p_7826974382aac05b]));
        }

        UnivariateDerivative1 UnivariateDerivative1::multiply(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_a70b8cbdc3613363], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::multiply(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_f85c512395e6884c], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::multiply(jint a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_41e12cbc32008fc0], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::negate() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_negate_7826974382aac05b]));
        }

        UnivariateDerivative1 UnivariateDerivative1::newInstance(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_newInstance_f85c512395e6884c], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::pow(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_a70b8cbdc3613363], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::pow(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_f85c512395e6884c], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::pow(jint a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_41e12cbc32008fc0], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::pow(jdouble a0, const UnivariateDerivative1 & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return UnivariateDerivative1(env->callStaticObjectMethod(cls, mids$[mid_pow_c8c5f953f921b257], a0, a1.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::reciprocal() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_reciprocal_7826974382aac05b]));
        }

        UnivariateDerivative1 UnivariateDerivative1::remainder(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_remainder_a70b8cbdc3613363], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::remainder(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_remainder_f85c512395e6884c], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::rint() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_rint_7826974382aac05b]));
        }

        UnivariateDerivative1 UnivariateDerivative1::rootN(jint a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_rootN_41e12cbc32008fc0], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::scalb(jint a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_scalb_41e12cbc32008fc0], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::sign() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sign_7826974382aac05b]));
        }

        UnivariateDerivative1 UnivariateDerivative1::sin() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sin_7826974382aac05b]));
        }

        ::org::hipparchus::util::FieldSinCos UnivariateDerivative1::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_e434dd780193da2f]));
        }

        UnivariateDerivative1 UnivariateDerivative1::sinh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sinh_7826974382aac05b]));
        }

        ::org::hipparchus::util::FieldSinhCosh UnivariateDerivative1::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_4a1e2142f3481995]));
        }

        UnivariateDerivative1 UnivariateDerivative1::sqrt() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sqrt_7826974382aac05b]));
        }

        UnivariateDerivative1 UnivariateDerivative1::subtract(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_subtract_a70b8cbdc3613363], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::subtract(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_subtract_f85c512395e6884c], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::tan() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_tan_7826974382aac05b]));
        }

        UnivariateDerivative1 UnivariateDerivative1::tanh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_tanh_7826974382aac05b]));
        }

        jdouble UnivariateDerivative1::taylor(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_04fd0666b613d2ab], a0);
        }

        UnivariateDerivative1 UnivariateDerivative1::toDegrees() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_toDegrees_7826974382aac05b]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure UnivariateDerivative1::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_57983c4d4b4a2f7f]));
        }

        UnivariateDerivative1 UnivariateDerivative1::toRadians() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_toRadians_7826974382aac05b]));
        }

        UnivariateDerivative1 UnivariateDerivative1::ulp() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_ulp_7826974382aac05b]));
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
        static PyObject *t_UnivariateDerivative1_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative1_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative1_of_(t_UnivariateDerivative1 *self, PyObject *args);
        static int t_UnivariateDerivative1_init_(t_UnivariateDerivative1 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariateDerivative1_abs(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_acos(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_acosh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_add(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_asin(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_asinh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_atan(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_atan2(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_atanh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_cbrt(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_ceil(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_compareTo(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_compose(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_copySign(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_cos(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_cosh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_divide(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_equals(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_exp(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_expm1(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_floor(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getDerivative(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getExponent(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getField(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getFirstDerivative(t_UnivariateDerivative1 *self);
        static PyObject *t_UnivariateDerivative1_getOrder(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getPi(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getReal(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getValue(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_hashCode(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_hypot(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_linearCombination(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_log(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_log10(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_log1p(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_multiply(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_negate(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_newInstance(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_pow(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateDerivative1_reciprocal(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_remainder(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_rint(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_rootN(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_scalb(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sign(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sin(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sinCos(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sinh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sinhCosh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sqrt(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_subtract(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_tan(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_tanh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_taylor(t_UnivariateDerivative1 *self, PyObject *arg);
        static PyObject *t_UnivariateDerivative1_toDegrees(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_toDerivativeStructure(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_toRadians(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_ulp(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_get__exponent(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__field(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__firstDerivative(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__order(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__pi(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__real(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__value(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__parameters_(t_UnivariateDerivative1 *self, void *data);
        static PyGetSetDef t_UnivariateDerivative1__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateDerivative1, exponent),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, field),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, firstDerivative),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, order),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, pi),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, real),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, value),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateDerivative1__methods_[] = {
          DECLARE_METHOD(t_UnivariateDerivative1, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1, of_, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, abs, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, acos, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, acosh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, add, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, asin, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, asinh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, atan, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, atan2, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, atanh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, cbrt, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, ceil, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, compareTo, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, compose, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, copySign, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, cos, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, cosh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, divide, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, equals, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, exp, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, expm1, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, floor, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getDerivative, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getExponent, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getField, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getFirstDerivative, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getOrder, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getPi, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getReal, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getValue, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, hypot, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, log, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, log10, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, log1p, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, multiply, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, negate, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, newInstance, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, pow, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1, reciprocal, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, remainder, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, rint, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, rootN, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, scalb, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sign, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sin, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sinCos, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sinh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sinhCosh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sqrt, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, subtract, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, tan, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, tanh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, taylor, METH_O),
          DECLARE_METHOD(t_UnivariateDerivative1, toDegrees, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, toDerivativeStructure, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, toRadians, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, ulp, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDerivative1)[] = {
          { Py_tp_methods, t_UnivariateDerivative1__methods_ },
          { Py_tp_init, (void *) t_UnivariateDerivative1_init_ },
          { Py_tp_getset, t_UnivariateDerivative1__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDerivative1)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::differentiation::UnivariateDerivative),
          NULL
        };

        DEFINE_TYPE(UnivariateDerivative1, t_UnivariateDerivative1, UnivariateDerivative1);
        PyObject *t_UnivariateDerivative1::wrap_Object(const UnivariateDerivative1& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateDerivative1::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateDerivative1 *self = (t_UnivariateDerivative1 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_UnivariateDerivative1::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateDerivative1::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateDerivative1 *self = (t_UnivariateDerivative1 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_UnivariateDerivative1::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDerivative1), &PY_TYPE_DEF(UnivariateDerivative1), module, "UnivariateDerivative1", 0);
        }

        void t_UnivariateDerivative1::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1), "class_", make_descriptor(UnivariateDerivative1::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1), "wrapfn_", make_descriptor(t_UnivariateDerivative1::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1), "boxfn_", make_descriptor(boxObject));
          env->getClass(UnivariateDerivative1::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1), "PI", make_descriptor(t_UnivariateDerivative1::wrap_Object(*UnivariateDerivative1::PI)));
        }

        static PyObject *t_UnivariateDerivative1_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDerivative1::initializeClass, 1)))
            return NULL;
          return t_UnivariateDerivative1::wrap_Object(UnivariateDerivative1(((t_UnivariateDerivative1 *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDerivative1_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDerivative1::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDerivative1_of_(t_UnivariateDerivative1 *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_UnivariateDerivative1_init_(t_UnivariateDerivative1 *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::differentiation::DerivativeStructure a0((jobject) NULL);
              UnivariateDerivative1 object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0))
              {
                INT_CALL(object = UnivariateDerivative1(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              UnivariateDerivative1 object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = UnivariateDerivative1(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1);
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

        static PyObject *t_UnivariateDerivative1_abs(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.abs());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "abs", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_acos(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acos());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "acos", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_acosh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acosh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "acosh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_add(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "add", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_asin(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asin());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "asin", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_asinh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asinh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "asinh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_atan(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atan());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "atan", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_atan2(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 a0((jobject) NULL);
          PyTypeObject **p0;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "atan2", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_atanh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atanh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "atanh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_cbrt(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cbrt());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "cbrt", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_ceil(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ceil());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "ceil", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_compareTo(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 a0((jobject) NULL);
          PyTypeObject **p0;
          jint result;

          if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = self->object.compareTo(a0));
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "compareTo", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_compose(t_UnivariateDerivative1 *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "compose", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_copySign(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "copySign", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_cos(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cos());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "cos", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_cosh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cosh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "cosh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_divide(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "divide", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_equals(t_UnivariateDerivative1 *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_exp(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.exp());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "exp", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_expm1(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.expm1());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "expm1", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_floor(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.floor());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "floor", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getDerivative(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getDerivative", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getExponent(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getExponent());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getExponent", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getField(t_UnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getField());
            return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1Field::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getField", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getFirstDerivative(t_UnivariateDerivative1 *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFirstDerivative());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateDerivative1_getOrder(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getPi(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getPi());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getPi", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getReal(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getReal());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getReal", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getValue(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getValue());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getValue", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_hashCode(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_hypot(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 a0((jobject) NULL);
          PyTypeObject **p0;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "hypot", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_linearCombination(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< UnivariateDerivative1 > a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "[D[K", UnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              JArray< UnivariateDerivative1 > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< UnivariateDerivative1 > a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "[K[K", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_, &a1, &p1, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative1 a2((jobject) NULL);
              PyTypeObject **p2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &p2, t_UnivariateDerivative1::parameters_, &a3, &p3, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "DKDK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &a3, &p3, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative1 a2((jobject) NULL);
              PyTypeObject **p2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative1 a4((jobject) NULL);
              PyTypeObject **p4;
              UnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &p2, t_UnivariateDerivative1::parameters_, &a3, &p3, t_UnivariateDerivative1::parameters_, &a4, &p4, t_UnivariateDerivative1::parameters_, &a5, &p5, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              UnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &a3, &p3, t_UnivariateDerivative1::parameters_, &a4, &a5, &p5, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative1 a2((jobject) NULL);
              PyTypeObject **p2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative1 a4((jobject) NULL);
              PyTypeObject **p4;
              UnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              UnivariateDerivative1 a6((jobject) NULL);
              PyTypeObject **p6;
              UnivariateDerivative1 a7((jobject) NULL);
              PyTypeObject **p7;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &p2, t_UnivariateDerivative1::parameters_, &a3, &p3, t_UnivariateDerivative1::parameters_, &a4, &p4, t_UnivariateDerivative1::parameters_, &a5, &p5, t_UnivariateDerivative1::parameters_, &a6, &p6, t_UnivariateDerivative1::parameters_, &a7, &p7, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              UnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              UnivariateDerivative1 a7((jobject) NULL);
              PyTypeObject **p7;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDKDK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &a3, &p3, t_UnivariateDerivative1::parameters_, &a4, &a5, &p5, t_UnivariateDerivative1::parameters_, &a6, &a7, &p7, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "linearCombination", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_log(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "log", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_log10(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log10());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "log10", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_log1p(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log1p());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "log1p", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_multiply(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jint a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "multiply", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_negate(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.negate());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "negate", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_newInstance(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jdouble a0;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "newInstance", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_pow(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jint a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "pow", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          UnivariateDerivative1 a1((jobject) NULL);
          PyTypeObject **p1;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "DK", UnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::UnivariateDerivative1::pow(a0, a1));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_UnivariateDerivative1_reciprocal(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.reciprocal());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "reciprocal", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_remainder(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "remainder", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_rint(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.rint());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "rint", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_rootN(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint a0;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "rootN", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_scalb(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint a0;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "scalb", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sign(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sign());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sign", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sin(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sin());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sin", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sinCos(t_UnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinCos());
            return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sinCos", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sinh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sinh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sinhCosh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinhCosh());
            return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sinhCosh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sqrt(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sqrt());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sqrt", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_subtract(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "subtract", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_tan(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tan());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "tan", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_tanh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tanh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "tanh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_taylor(t_UnivariateDerivative1 *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.taylor(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", arg);
          return NULL;
        }

        static PyObject *t_UnivariateDerivative1_toDegrees(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDegrees());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "toDegrees", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_toDerivativeStructure(t_UnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDerivativeStructure());
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "toDerivativeStructure", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_toRadians(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toRadians());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "toRadians", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_ulp(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ulp());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "ulp", args, 2);
        }
        static PyObject *t_UnivariateDerivative1_get__parameters_(t_UnivariateDerivative1 *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_UnivariateDerivative1_get__exponent(t_UnivariateDerivative1 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateDerivative1_get__field(t_UnivariateDerivative1 *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1Field::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative1_get__firstDerivative(t_UnivariateDerivative1 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFirstDerivative());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateDerivative1_get__order(t_UnivariateDerivative1 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateDerivative1_get__pi(t_UnivariateDerivative1 *self, void *data)
        {
          UnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_UnivariateDerivative1::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative1_get__real(t_UnivariateDerivative1 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateDerivative1_get__value(t_UnivariateDerivative1 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ThrustDirectionProvider::class$ = NULL;
          jmethodID *ThrustDirectionProvider::mids$ = NULL;
          bool ThrustDirectionProvider::live$ = false;

          jclass ThrustDirectionProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_computeThrustDirection_ec4cfef21ca9ef1f] = env->getMethodID(cls, "computeThrustDirection", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustDirectionProvider::computeThrustDirection(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_computeThrustDirection_ec4cfef21ca9ef1f], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_ThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustDirectionProvider_computeThrustDirection(t_ThrustDirectionProvider *self, PyObject *args);

          static PyMethodDef t_ThrustDirectionProvider__methods_[] = {
            DECLARE_METHOD(t_ThrustDirectionProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionProvider, computeThrustDirection, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ThrustDirectionProvider)[] = {
            { Py_tp_methods, t_ThrustDirectionProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ThrustDirectionProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ThrustDirectionProvider, t_ThrustDirectionProvider, ThrustDirectionProvider);

          void t_ThrustDirectionProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(ThrustDirectionProvider), &PY_TYPE_DEF(ThrustDirectionProvider), module, "ThrustDirectionProvider", 0);
          }

          void t_ThrustDirectionProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustDirectionProvider), "class_", make_descriptor(ThrustDirectionProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustDirectionProvider), "wrapfn_", make_descriptor(t_ThrustDirectionProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustDirectionProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ThrustDirectionProvider::initializeClass, 1)))
              return NULL;
            return t_ThrustDirectionProvider::wrap_Object(ThrustDirectionProvider(((t_ThrustDirectionProvider *) arg)->object.this$));
          }
          static PyObject *t_ThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ThrustDirectionProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ThrustDirectionProvider_computeThrustDirection(t_ThrustDirectionProvider *self, PyObject *args)
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.computeThrustDirection(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "computeThrustDirection", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/FrameAlignedProvider.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FrameAlignedProvider::class$ = NULL;
      jmethodID *FrameAlignedProvider::mids$ = NULL;
      bool FrameAlignedProvider::live$ = false;

      jclass FrameAlignedProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FrameAlignedProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f32de4638c68c05a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)V");
          mids$[mid_init$_237ae1c2ddd68062] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_f43ca627e733b5ae] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/orekit/frames/Frame;)V");
          mids$[mid_getAttitude_21845cfb0034fe1c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_896ee4d68989b1e8] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitudeRotation_1bc07ea175743b30] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getAttitudeRotation_6acae55a2f5d3ab4] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_of_90b35c894f9743d5] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/AttitudeProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FrameAlignedProvider::FrameAlignedProvider(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f32de4638c68c05a, a0.this$)) {}

      FrameAlignedProvider::FrameAlignedProvider(const ::org::orekit::frames::Frame & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_237ae1c2ddd68062, a0.this$)) {}

      FrameAlignedProvider::FrameAlignedProvider(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::orekit::frames::Frame & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f43ca627e733b5ae, a0.this$, a1.this$)) {}

      ::org::orekit::attitudes::Attitude FrameAlignedProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_21845cfb0034fe1c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude FrameAlignedProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_896ee4d68989b1e8], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FrameAlignedProvider::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_1bc07ea175743b30], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation FrameAlignedProvider::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_6acae55a2f5d3ab4], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::AttitudeProvider FrameAlignedProvider::of(const ::org::orekit::frames::Frame & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::attitudes::AttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_of_90b35c894f9743d5], a0.this$));
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
      static PyObject *t_FrameAlignedProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FrameAlignedProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FrameAlignedProvider_init_(t_FrameAlignedProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FrameAlignedProvider_getAttitude(t_FrameAlignedProvider *self, PyObject *args);
      static PyObject *t_FrameAlignedProvider_getAttitudeRotation(t_FrameAlignedProvider *self, PyObject *args);
      static PyObject *t_FrameAlignedProvider_of(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_FrameAlignedProvider__methods_[] = {
        DECLARE_METHOD(t_FrameAlignedProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FrameAlignedProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FrameAlignedProvider, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_FrameAlignedProvider, getAttitudeRotation, METH_VARARGS),
        DECLARE_METHOD(t_FrameAlignedProvider, of, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FrameAlignedProvider)[] = {
        { Py_tp_methods, t_FrameAlignedProvider__methods_ },
        { Py_tp_init, (void *) t_FrameAlignedProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FrameAlignedProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FrameAlignedProvider, t_FrameAlignedProvider, FrameAlignedProvider);

      void t_FrameAlignedProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(FrameAlignedProvider), &PY_TYPE_DEF(FrameAlignedProvider), module, "FrameAlignedProvider", 0);
      }

      void t_FrameAlignedProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAlignedProvider), "class_", make_descriptor(FrameAlignedProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAlignedProvider), "wrapfn_", make_descriptor(t_FrameAlignedProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAlignedProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FrameAlignedProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FrameAlignedProvider::initializeClass, 1)))
          return NULL;
        return t_FrameAlignedProvider::wrap_Object(FrameAlignedProvider(((t_FrameAlignedProvider *) arg)->object.this$));
      }
      static PyObject *t_FrameAlignedProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FrameAlignedProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FrameAlignedProvider_init_(t_FrameAlignedProvider *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            FrameAlignedProvider object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
            {
              INT_CALL(object = FrameAlignedProvider(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            FrameAlignedProvider object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = FrameAlignedProvider(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            FrameAlignedProvider object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = FrameAlignedProvider(a0, a1));
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

      static PyObject *t_FrameAlignedProvider_getAttitude(t_FrameAlignedProvider *self, PyObject *args)
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

      static PyObject *t_FrameAlignedProvider_getAttitudeRotation(t_FrameAlignedProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
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
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitudeRotation", args);
        return NULL;
      }

      static PyObject *t_FrameAlignedProvider_of(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::attitudes::FrameAlignedProvider::of(a0));
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "of", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/AbstractRadiationForceModel.h"
#include "org/orekit/utils/OccultationEngine.h"
#include "java/util/List.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *AbstractRadiationForceModel::class$ = NULL;
        jmethodID *AbstractRadiationForceModel::mids$ = NULL;
        bool AbstractRadiationForceModel::live$ = false;

        jclass AbstractRadiationForceModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/AbstractRadiationForceModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addOccultingBody_fe488c9958f1d2fe] = env->getMethodID(cls, "addOccultingBody", "(Lorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_addOccultingBody_d69eafd654818556] = env->getMethodID(cls, "addOccultingBody", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;D)V");
            mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getEventDetectors_14e21bf777ff0ccf] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_283ad33581c047a0] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getOccultingBodies_e62d3bb06d56d7e3] = env->getMethodID(cls, "getOccultingBodies", "()Ljava/util/List;");
            mids$[mid_getGeneralEclipseAngles_db4fc232a30d5f8e] = env->getMethodID(cls, "getGeneralEclipseAngles", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getGeneralEclipseAngles_1316a94eb2b77b43] = env->getMethodID(cls, "getGeneralEclipseAngles", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractRadiationForceModel::addOccultingBody(const ::org::orekit::bodies::OneAxisEllipsoid & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addOccultingBody_fe488c9958f1d2fe], a0.this$);
        }

        void AbstractRadiationForceModel::addOccultingBody(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addOccultingBody_d69eafd654818556], a0.this$, a1);
        }

        jboolean AbstractRadiationForceModel::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105]);
        }

        ::java::util::stream::Stream AbstractRadiationForceModel::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_14e21bf777ff0ccf]));
        }

        ::java::util::stream::Stream AbstractRadiationForceModel::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_283ad33581c047a0], a0.this$));
        }

        ::java::util::List AbstractRadiationForceModel::getOccultingBodies() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getOccultingBodies_e62d3bb06d56d7e3]));
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
        static PyObject *t_AbstractRadiationForceModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRadiationForceModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRadiationForceModel_addOccultingBody(t_AbstractRadiationForceModel *self, PyObject *args);
        static PyObject *t_AbstractRadiationForceModel_dependsOnPositionOnly(t_AbstractRadiationForceModel *self);
        static PyObject *t_AbstractRadiationForceModel_getEventDetectors(t_AbstractRadiationForceModel *self);
        static PyObject *t_AbstractRadiationForceModel_getFieldEventDetectors(t_AbstractRadiationForceModel *self, PyObject *arg);
        static PyObject *t_AbstractRadiationForceModel_getOccultingBodies(t_AbstractRadiationForceModel *self);
        static PyObject *t_AbstractRadiationForceModel_get__eventDetectors(t_AbstractRadiationForceModel *self, void *data);
        static PyObject *t_AbstractRadiationForceModel_get__occultingBodies(t_AbstractRadiationForceModel *self, void *data);
        static PyGetSetDef t_AbstractRadiationForceModel__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractRadiationForceModel, eventDetectors),
          DECLARE_GET_FIELD(t_AbstractRadiationForceModel, occultingBodies),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractRadiationForceModel__methods_[] = {
          DECLARE_METHOD(t_AbstractRadiationForceModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRadiationForceModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRadiationForceModel, addOccultingBody, METH_VARARGS),
          DECLARE_METHOD(t_AbstractRadiationForceModel, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRadiationForceModel, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRadiationForceModel, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_AbstractRadiationForceModel, getOccultingBodies, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractRadiationForceModel)[] = {
          { Py_tp_methods, t_AbstractRadiationForceModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractRadiationForceModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractRadiationForceModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractRadiationForceModel, t_AbstractRadiationForceModel, AbstractRadiationForceModel);

        void t_AbstractRadiationForceModel::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractRadiationForceModel), &PY_TYPE_DEF(AbstractRadiationForceModel), module, "AbstractRadiationForceModel", 0);
        }

        void t_AbstractRadiationForceModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRadiationForceModel), "class_", make_descriptor(AbstractRadiationForceModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRadiationForceModel), "wrapfn_", make_descriptor(t_AbstractRadiationForceModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRadiationForceModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractRadiationForceModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractRadiationForceModel::initializeClass, 1)))
            return NULL;
          return t_AbstractRadiationForceModel::wrap_Object(AbstractRadiationForceModel(((t_AbstractRadiationForceModel *) arg)->object.this$));
        }
        static PyObject *t_AbstractRadiationForceModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractRadiationForceModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractRadiationForceModel_addOccultingBody(t_AbstractRadiationForceModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
              {
                OBJ_CALL(self->object.addOccultingBody(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
              jdouble a1;

              if (!parseArgs(args, "kD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.addOccultingBody(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addOccultingBody", args);
          return NULL;
        }

        static PyObject *t_AbstractRadiationForceModel_dependsOnPositionOnly(t_AbstractRadiationForceModel *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractRadiationForceModel_getEventDetectors(t_AbstractRadiationForceModel *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_AbstractRadiationForceModel_getFieldEventDetectors(t_AbstractRadiationForceModel *self, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", arg);
          return NULL;
        }

        static PyObject *t_AbstractRadiationForceModel_getOccultingBodies(t_AbstractRadiationForceModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getOccultingBodies());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(OccultationEngine));
        }

        static PyObject *t_AbstractRadiationForceModel_get__eventDetectors(t_AbstractRadiationForceModel *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_AbstractRadiationForceModel_get__occultingBodies(t_AbstractRadiationForceModel *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getOccultingBodies());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmWriter.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmData.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmWriter::class$ = NULL;
            jmethodID *CdmWriter::mids$ = NULL;
            bool CdmWriter::live$ = false;
            jdouble CdmWriter::CCSDS_CDM_VERS = (jdouble) 0;
            jint CdmWriter::KVN_PADDING_WIDTH = (jint) 0;

            jclass CdmWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_5df9b2a3aa97175c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                mids$[mid_writeRelativeMetadataContent_d31fad1cabdbc982] = env->getMethodID(cls, "writeRelativeMetadataContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;)V");
                mids$[mid_writeSegmentContent_309d7ce7156c8c23] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CCSDS_CDM_VERS = env->getStaticDoubleField(cls, "CCSDS_CDM_VERS");
                KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmWriter::CdmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1) : ::org::orekit::files::ccsds::ndm::cdm::CdmMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_5df9b2a3aa97175c, a0.this$, a1.this$)) {}

            void CdmWriter::writeRelativeMetadataContent(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, jdouble a1, const ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata & a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRelativeMetadataContent_d31fad1cabdbc982], a0.this$, a1, a2.this$);
            }

            void CdmWriter::writeSegmentContent(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, jdouble a1, const ::org::orekit::files::ccsds::section::Segment & a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeSegmentContent_309d7ce7156c8c23], a0.this$, a1, a2.this$);
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
            static PyObject *t_CdmWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmWriter_init_(t_CdmWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmWriter_writeRelativeMetadataContent(t_CdmWriter *self, PyObject *args);
            static PyObject *t_CdmWriter_writeSegmentContent(t_CdmWriter *self, PyObject *args);

            static PyMethodDef t_CdmWriter__methods_[] = {
              DECLARE_METHOD(t_CdmWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmWriter, writeRelativeMetadataContent, METH_VARARGS),
              DECLARE_METHOD(t_CdmWriter, writeSegmentContent, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmWriter)[] = {
              { Py_tp_methods, t_CdmWriter__methods_ },
              { Py_tp_init, (void *) t_CdmWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::cdm::CdmMessageWriter),
              NULL
            };

            DEFINE_TYPE(CdmWriter, t_CdmWriter, CdmWriter);

            void t_CdmWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmWriter), &PY_TYPE_DEF(CdmWriter), module, "CdmWriter", 0);
            }

            void t_CdmWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmWriter), "class_", make_descriptor(CdmWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmWriter), "wrapfn_", make_descriptor(t_CdmWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmWriter), "boxfn_", make_descriptor(boxObject));
              env->getClass(CdmWriter::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmWriter), "CCSDS_CDM_VERS", make_descriptor(CdmWriter::CCSDS_CDM_VERS));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmWriter), "KVN_PADDING_WIDTH", make_descriptor(CdmWriter::KVN_PADDING_WIDTH));
            }

            static PyObject *t_CdmWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmWriter::initializeClass, 1)))
                return NULL;
              return t_CdmWriter::wrap_Object(CdmWriter(((t_CdmWriter *) arg)->object.this$));
            }
            static PyObject *t_CdmWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmWriter_init_(t_CdmWriter *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::utils::IERSConventions a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::data::DataContext a1((jobject) NULL);
              CdmWriter object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
              {
                INT_CALL(object = CdmWriter(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CdmWriter_writeRelativeMetadataContent(t_CdmWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata a2((jobject) NULL);

              if (!parseArgs(args, "kDk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.writeRelativeMetadataContent(a0, a1, a2));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CdmWriter), (PyObject *) self, "writeRelativeMetadataContent", args, 2);
            }

            static PyObject *t_CdmWriter_writeSegmentContent(t_CdmWriter *self, PyObject *args)
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

              return callSuper(PY_TYPE(CdmWriter), (PyObject *) self, "writeSegmentContent", args, 2);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/FieldTransformGenerator.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/util/List.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/TimeStampedGenerator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FieldTransformGenerator::class$ = NULL;
      jmethodID *FieldTransformGenerator::mids$ = NULL;
      bool FieldTransformGenerator::live$ = false;

      jclass FieldTransformGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FieldTransformGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_85b9a58c5d3d9cea] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;ILorg/orekit/frames/TransformProvider;D)V");
          mids$[mid_generate_50850a0bb1306a34] = env->getMethodID(cls, "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTransformGenerator::FieldTransformGenerator(const ::org::hipparchus::Field & a0, jint a1, const ::org::orekit::frames::TransformProvider & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_85b9a58c5d3d9cea, a0.this$, a1, a2.this$, a3)) {}

      ::java::util::List FieldTransformGenerator::generate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_generate_50850a0bb1306a34], a0.this$, a1.this$));
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
      static PyObject *t_FieldTransformGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTransformGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTransformGenerator_of_(t_FieldTransformGenerator *self, PyObject *args);
      static int t_FieldTransformGenerator_init_(t_FieldTransformGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldTransformGenerator_generate(t_FieldTransformGenerator *self, PyObject *args);
      static PyObject *t_FieldTransformGenerator_get__parameters_(t_FieldTransformGenerator *self, void *data);
      static PyGetSetDef t_FieldTransformGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTransformGenerator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTransformGenerator__methods_[] = {
        DECLARE_METHOD(t_FieldTransformGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTransformGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTransformGenerator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTransformGenerator, generate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTransformGenerator)[] = {
        { Py_tp_methods, t_FieldTransformGenerator__methods_ },
        { Py_tp_init, (void *) t_FieldTransformGenerator_init_ },
        { Py_tp_getset, t_FieldTransformGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTransformGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTransformGenerator, t_FieldTransformGenerator, FieldTransformGenerator);
      PyObject *t_FieldTransformGenerator::wrap_Object(const FieldTransformGenerator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTransformGenerator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTransformGenerator *self = (t_FieldTransformGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldTransformGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTransformGenerator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTransformGenerator *self = (t_FieldTransformGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldTransformGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTransformGenerator), &PY_TYPE_DEF(FieldTransformGenerator), module, "FieldTransformGenerator", 0);
      }

      void t_FieldTransformGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTransformGenerator), "class_", make_descriptor(FieldTransformGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTransformGenerator), "wrapfn_", make_descriptor(t_FieldTransformGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTransformGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTransformGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTransformGenerator::initializeClass, 1)))
          return NULL;
        return t_FieldTransformGenerator::wrap_Object(FieldTransformGenerator(((t_FieldTransformGenerator *) arg)->object.this$));
      }
      static PyObject *t_FieldTransformGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTransformGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTransformGenerator_of_(t_FieldTransformGenerator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldTransformGenerator_init_(t_FieldTransformGenerator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        ::org::orekit::frames::TransformProvider a2((jobject) NULL);
        jdouble a3;
        FieldTransformGenerator object((jobject) NULL);

        if (!parseArgs(args, "KIkD", ::org::hipparchus::Field::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
        {
          INT_CALL(object = FieldTransformGenerator(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldTransformGenerator_generate(t_FieldTransformGenerator *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.generate(a0, a1));
          return ::java::util::t_List::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "generate", args);
        return NULL;
      }
      static PyObject *t_FieldTransformGenerator_get__parameters_(t_FieldTransformGenerator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockRangeModifier::class$ = NULL;
          jmethodID *RelativisticClockRangeModifier::mids$ = NULL;
          bool RelativisticClockRangeModifier::live$ = false;

          jclass RelativisticClockRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockRangeModifier::RelativisticClockRangeModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          ::java::util::List RelativisticClockRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void RelativisticClockRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_RelativisticClockRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockRangeModifier_init_(t_RelativisticClockRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockRangeModifier_getParametersDrivers(t_RelativisticClockRangeModifier *self);
          static PyObject *t_RelativisticClockRangeModifier_modifyWithoutDerivatives(t_RelativisticClockRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockRangeModifier_get__parametersDrivers(t_RelativisticClockRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticClockRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticClockRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockRangeModifier, t_RelativisticClockRangeModifier, RelativisticClockRangeModifier);

          void t_RelativisticClockRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockRangeModifier), &PY_TYPE_DEF(RelativisticClockRangeModifier), module, "RelativisticClockRangeModifier", 0);
          }

          void t_RelativisticClockRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockRangeModifier), "class_", make_descriptor(RelativisticClockRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockRangeModifier), "wrapfn_", make_descriptor(t_RelativisticClockRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockRangeModifier::wrap_Object(RelativisticClockRangeModifier(((t_RelativisticClockRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockRangeModifier_init_(t_RelativisticClockRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockRangeModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockRangeModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockRangeModifier_getParametersDrivers(t_RelativisticClockRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockRangeModifier_modifyWithoutDerivatives(t_RelativisticClockRangeModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticClockRangeModifier_get__parametersDrivers(t_RelativisticClockRangeModifier *self, void *data)
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
#include "org/orekit/frames/PythonFrames.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/frames/VersionedITRF.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/frames/Predefined.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/FactoryManagedFrame.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonFrames::class$ = NULL;
      jmethodID *PythonFrames::mids$ = NULL;
      bool PythonFrames::live$ = false;

      jclass PythonFrames::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonFrames");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_buildUncachedITRF_de25c2adba5180fc] = env->getMethodID(cls, "buildUncachedITRF", "(Lorg/orekit/time/UT1Scale;)Lorg/orekit/frames/Frame;");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getCIRF_b8f4087626aff39a] = env->getMethodID(cls, "getCIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEME2000_38d89ffeb32a6f21] = env->getMethodID(cls, "getEME2000", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEOPHistory_a77e9d6bc0da2439] = env->getMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getEcliptic_15d291dcc172f59b] = env->getMethodID(cls, "getEcliptic", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/Frame;");
          mids$[mid_getFrame_acd75386f33c2984] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/frames/Predefined;)Lorg/orekit/frames/Frame;");
          mids$[mid_getGCRF_2c51111cc6894ba1] = env->getMethodID(cls, "getGCRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGTOD_816956b542562f07] = env->getMethodID(cls, "getGTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getGTOD_b8f4087626aff39a] = env->getMethodID(cls, "getGTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getICRF_2c51111cc6894ba1] = env->getMethodID(cls, "getICRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getITRF_b8f4087626aff39a] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getITRF_2e00eadcfbf4fef8] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/VersionedITRF;");
          mids$[mid_getITRFEquinox_b8f4087626aff39a] = env->getMethodID(cls, "getITRFEquinox", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_5e99e4a3c4469bb0] = env->getMethodID(cls, "getMOD", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_816956b542562f07] = env->getMethodID(cls, "getMOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getPZ9011_b8f4087626aff39a] = env->getMethodID(cls, "getPZ9011", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTEME_38d89ffeb32a6f21] = env->getMethodID(cls, "getTEME", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_5e99e4a3c4469bb0] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_b8f4087626aff39a] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_816956b542562f07] = env->getMethodID(cls, "getTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_b8f4087626aff39a] = env->getMethodID(cls, "getTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getVeis1950_38d89ffeb32a6f21] = env->getMethodID(cls, "getVeis1950", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFrames::PythonFrames() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonFrames::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonFrames::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonFrames::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
      static PyObject *t_PythonFrames_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFrames_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonFrames_init_(t_PythonFrames *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFrames_finalize(t_PythonFrames *self);
      static PyObject *t_PythonFrames_pythonExtension(t_PythonFrames *self, PyObject *args);
      static jobject JNICALL t_PythonFrames_buildUncachedITRF0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFrames_getCIRF1(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getEME20002(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFrames_getEOPHistory3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getEcliptic4(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFrames_getFrame5(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFrames_getGCRF6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFrames_getGTOD7(JNIEnv *jenv, jobject jobj, jboolean a0);
      static jobject JNICALL t_PythonFrames_getGTOD8(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getICRF9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFrames_getITRF10(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getITRF11(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2);
      static jobject JNICALL t_PythonFrames_getITRFEquinox12(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getMOD13(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFrames_getMOD14(JNIEnv *jenv, jobject jobj, jboolean a0);
      static jobject JNICALL t_PythonFrames_getPZ901115(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getTEME16(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFrames_getTIRF17(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFrames_getTIRF18(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getTOD19(JNIEnv *jenv, jobject jobj, jboolean a0);
      static jobject JNICALL t_PythonFrames_getTOD20(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getVeis195021(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFrames_pythonDecRef22(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFrames_get__self(t_PythonFrames *self, void *data);
      static PyGetSetDef t_PythonFrames__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFrames, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFrames__methods_[] = {
        DECLARE_METHOD(t_PythonFrames, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFrames, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFrames, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFrames, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFrames)[] = {
        { Py_tp_methods, t_PythonFrames__methods_ },
        { Py_tp_init, (void *) t_PythonFrames_init_ },
        { Py_tp_getset, t_PythonFrames__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFrames)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFrames, t_PythonFrames, PythonFrames);

      void t_PythonFrames::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFrames), &PY_TYPE_DEF(PythonFrames), module, "PythonFrames", 1);
      }

      void t_PythonFrames::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFrames), "class_", make_descriptor(PythonFrames::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFrames), "wrapfn_", make_descriptor(t_PythonFrames::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFrames), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFrames::initializeClass);
        JNINativeMethod methods[] = {
          { "buildUncachedITRF", "(Lorg/orekit/time/UT1Scale;)Lorg/orekit/frames/Frame;", (void *) t_PythonFrames_buildUncachedITRF0 },
          { "getCIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getCIRF1 },
          { "getEME2000", "()Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getEME20002 },
          { "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;", (void *) t_PythonFrames_getEOPHistory3 },
          { "getEcliptic", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/Frame;", (void *) t_PythonFrames_getEcliptic4 },
          { "getFrame", "(Lorg/orekit/frames/Predefined;)Lorg/orekit/frames/Frame;", (void *) t_PythonFrames_getFrame5 },
          { "getGCRF", "()Lorg/orekit/frames/Frame;", (void *) t_PythonFrames_getGCRF6 },
          { "getGTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getGTOD7 },
          { "getGTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getGTOD8 },
          { "getICRF", "()Lorg/orekit/frames/Frame;", (void *) t_PythonFrames_getICRF9 },
          { "getITRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getITRF10 },
          { "getITRF", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/VersionedITRF;", (void *) t_PythonFrames_getITRF11 },
          { "getITRFEquinox", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getITRFEquinox12 },
          { "getMOD", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getMOD13 },
          { "getMOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getMOD14 },
          { "getPZ9011", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getPZ901115 },
          { "getTEME", "()Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getTEME16 },
          { "getTIRF", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getTIRF17 },
          { "getTIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getTIRF18 },
          { "getTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getTOD19 },
          { "getTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getTOD20 },
          { "getVeis1950", "()Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getVeis195021 },
          { "pythonDecRef", "()V", (void *) t_PythonFrames_pythonDecRef22 },
        };
        env->registerNatives(cls, methods, 23);
      }

      static PyObject *t_PythonFrames_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFrames::initializeClass, 1)))
          return NULL;
        return t_PythonFrames::wrap_Object(PythonFrames(((t_PythonFrames *) arg)->object.this$));
      }
      static PyObject *t_PythonFrames_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFrames::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonFrames_init_(t_PythonFrames *self, PyObject *args, PyObject *kwds)
      {
        PythonFrames object((jobject) NULL);

        INT_CALL(object = PythonFrames());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFrames_finalize(t_PythonFrames *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFrames_pythonExtension(t_PythonFrames *self, PyObject *args)
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

      static jobject JNICALL t_PythonFrames_buildUncachedITRF0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_UT1Scale::wrap_Object(::org::orekit::time::UT1Scale(a0));
        PyObject *result = PyObject_CallMethod(obj, "buildUncachedITRF", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("buildUncachedITRF", result);
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

      static jobject JNICALL t_PythonFrames_getCIRF1(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getCIRF", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getCIRF", result);
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

      static jobject JNICALL t_PythonFrames_getEME20002(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEME2000", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getEME2000", result);
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

      static jobject JNICALL t_PythonFrames_getEOPHistory3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getEOPHistory", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::EOPHistory::initializeClass, &value))
        {
          throwTypeError("getEOPHistory", result);
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

      static jobject JNICALL t_PythonFrames_getEcliptic4(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *result = PyObject_CallMethod(obj, "getEcliptic", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getEcliptic", result);
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

      static jobject JNICALL t_PythonFrames_getFrame5(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::frames::t_Predefined::wrap_Object(::org::orekit::frames::Predefined(a0));
        PyObject *result = PyObject_CallMethod(obj, "getFrame", "O", o0);
        Py_DECREF(o0);
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

      static jobject JNICALL t_PythonFrames_getGCRF6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGCRF", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getGCRF", result);
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

      static jobject JNICALL t_PythonFrames_getGTOD7(JNIEnv *jenv, jobject jobj, jboolean a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = (a0 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getGTOD", "O", o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getGTOD", result);
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

      static jobject JNICALL t_PythonFrames_getGTOD8(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getGTOD", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getGTOD", result);
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

      static jobject JNICALL t_PythonFrames_getICRF9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getICRF", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getICRF", result);
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

      static jobject JNICALL t_PythonFrames_getITRF10(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getITRF", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getITRF", result);
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

      static jobject JNICALL t_PythonFrames_getITRF11(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::VersionedITRF value((jobject) NULL);
        PyObject *o0 = ::org::orekit::frames::t_ITRFVersion::wrap_Object(::org::orekit::frames::ITRFVersion(a0));
        PyObject *o1 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a1));
        PyObject *o2 = (a2 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getITRF", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::VersionedITRF::initializeClass, &value))
        {
          throwTypeError("getITRF", result);
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

      static jobject JNICALL t_PythonFrames_getITRFEquinox12(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getITRFEquinox", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getITRFEquinox", result);
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

      static jobject JNICALL t_PythonFrames_getMOD13(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *result = PyObject_CallMethod(obj, "getMOD", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getMOD", result);
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

      static jobject JNICALL t_PythonFrames_getMOD14(JNIEnv *jenv, jobject jobj, jboolean a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = (a0 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getMOD", "O", o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getMOD", result);
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

      static jobject JNICALL t_PythonFrames_getPZ901115(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getPZ9011", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getPZ9011", result);
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

      static jobject JNICALL t_PythonFrames_getTEME16(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTEME", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getTEME", result);
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

      static jobject JNICALL t_PythonFrames_getTIRF17(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *result = PyObject_CallMethod(obj, "getTIRF", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getTIRF", result);
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

      static jobject JNICALL t_PythonFrames_getTIRF18(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getTIRF", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getTIRF", result);
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

      static jobject JNICALL t_PythonFrames_getTOD19(JNIEnv *jenv, jobject jobj, jboolean a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = (a0 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getTOD", "O", o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getTOD", result);
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

      static jobject JNICALL t_PythonFrames_getTOD20(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getTOD", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getTOD", result);
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

      static jobject JNICALL t_PythonFrames_getVeis195021(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getVeis1950", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getVeis1950", result);
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

      static void JNICALL t_PythonFrames_pythonDecRef22(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFrames_get__self(t_PythonFrames *self, void *data)
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
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealMatrixChangingVisitor::class$ = NULL;
      jmethodID *RealMatrixChangingVisitor::mids$ = NULL;
      bool RealMatrixChangingVisitor::live$ = false;

      jclass RealMatrixChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealMatrixChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_b74f83833fdad017] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_ea412797eafea800] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_31a9a04938175810] = env->getMethodID(cls, "visit", "(IID)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble RealMatrixChangingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_b74f83833fdad017]);
      }

      void RealMatrixChangingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_ea412797eafea800], a0, a1, a2, a3, a4, a5);
      }

      jdouble RealMatrixChangingVisitor::visit(jint a0, jint a1, jdouble a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_visit_31a9a04938175810], a0, a1, a2);
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
      static PyObject *t_RealMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrixChangingVisitor_end(t_RealMatrixChangingVisitor *self);
      static PyObject *t_RealMatrixChangingVisitor_start(t_RealMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_RealMatrixChangingVisitor_visit(t_RealMatrixChangingVisitor *self, PyObject *args);

      static PyMethodDef t_RealMatrixChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_RealMatrixChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrixChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealMatrixChangingVisitor)[] = {
        { Py_tp_methods, t_RealMatrixChangingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealMatrixChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealMatrixChangingVisitor, t_RealMatrixChangingVisitor, RealMatrixChangingVisitor);

      void t_RealMatrixChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(RealMatrixChangingVisitor), &PY_TYPE_DEF(RealMatrixChangingVisitor), module, "RealMatrixChangingVisitor", 0);
      }

      void t_RealMatrixChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixChangingVisitor), "class_", make_descriptor(RealMatrixChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixChangingVisitor), "wrapfn_", make_descriptor(t_RealMatrixChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealMatrixChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_RealMatrixChangingVisitor::wrap_Object(RealMatrixChangingVisitor(((t_RealMatrixChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_RealMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealMatrixChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealMatrixChangingVisitor_end(t_RealMatrixChangingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrixChangingVisitor_start(t_RealMatrixChangingVisitor *self, PyObject *args)
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

      static PyObject *t_RealMatrixChangingVisitor_visit(t_RealMatrixChangingVisitor *self, PyObject *args)
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
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/encounter/EncounterLOFType.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *ShortTermEncounter2DDefinition::class$ = NULL;
              jmethodID *ShortTermEncounter2DDefinition::mids$ = NULL;
              bool ShortTermEncounter2DDefinition::live$ = false;

              jclass ShortTermEncounter2DDefinition::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_6e070423a9774ddb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;D)V");
                  mids$[mid_init$_16bbc50d7e41fe28] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;D)V");
                  mids$[mid_init$_86821b70ee5fe2a3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/frames/encounter/EncounterLOFType;D)V");
                  mids$[mid_init$_916cb8d64b395e25] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/frames/encounter/EncounterLOFType;D)V");
                  mids$[mid_computeCombinedCovarianceInEncounterFrame_6c7ec62384a674b1] = env->getMethodID(cls, "computeCombinedCovarianceInEncounterFrame", "()Lorg/orekit/propagation/StateCovariance;");
                  mids$[mid_computeCombinedCovarianceInReferenceTNW_6c7ec62384a674b1] = env->getMethodID(cls, "computeCombinedCovarianceInReferenceTNW", "()Lorg/orekit/propagation/StateCovariance;");
                  mids$[mid_computeCoppolaEncounterDuration_b74f83833fdad017] = env->getMethodID(cls, "computeCoppolaEncounterDuration", "()D");
                  mids$[mid_computeMahalanobisDistance_b74f83833fdad017] = env->getMethodID(cls, "computeMahalanobisDistance", "()D");
                  mids$[mid_computeMahalanobisDistance_04fd0666b613d2ab] = env->getMethodID(cls, "computeMahalanobisDistance", "(D)D");
                  mids$[mid_computeMissDistance_b74f83833fdad017] = env->getMethodID(cls, "computeMissDistance", "()D");
                  mids$[mid_computeOtherPositionInCollisionPlane_9cb1572c1d4936cf] = env->getMethodID(cls, "computeOtherPositionInCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
                  mids$[mid_computeOtherPositionInRotatedCollisionPlane_9cb1572c1d4936cf] = env->getMethodID(cls, "computeOtherPositionInRotatedCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
                  mids$[mid_computeOtherPositionInRotatedCollisionPlane_32a32febf6739dcf] = env->getMethodID(cls, "computeOtherPositionInRotatedCollisionPlane", "(D)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
                  mids$[mid_computeOtherRelativeToReferencePVInReferenceInertial_180fb117720acb76] = env->getMethodID(cls, "computeOtherRelativeToReferencePVInReferenceInertial", "()Lorg/orekit/utils/PVCoordinates;");
                  mids$[mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_f77d745f2128c391] = env->getMethodID(cls, "computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_computeProjectedCombinedPositionalCovarianceMatrix_f77d745f2128c391] = env->getMethodID(cls, "computeProjectedCombinedPositionalCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_f77d745f2128c391] = env->getMethodID(cls, "computeReferenceInertialToCollisionPlaneProjectionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_computeSquaredMahalanobisDistance_b74f83833fdad017] = env->getMethodID(cls, "computeSquaredMahalanobisDistance", "()D");
                  mids$[mid_computeSquaredMahalanobisDistance_04fd0666b613d2ab] = env->getMethodID(cls, "computeSquaredMahalanobisDistance", "(D)D");
                  mids$[mid_computeSquaredMahalanobisDistance_db335e3aaf683d13] = env->getStaticMethodID(cls, "computeSquaredMahalanobisDistance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/linear/RealMatrix;)D");
                  mids$[mid_computeSquaredMahalanobisDistance_08eba2463884b341] = env->getStaticMethodID(cls, "computeSquaredMahalanobisDistance", "(DDDD)D");
                  mids$[mid_getCombinedRadius_b74f83833fdad017] = env->getMethodID(cls, "getCombinedRadius", "()D");
                  mids$[mid_getEncounterFrame_b4b6e345de2c2267] = env->getMethodID(cls, "getEncounterFrame", "()Lorg/orekit/frames/encounter/EncounterLOF;");
                  mids$[mid_getOtherAtTCA_b6e68c5f730fb347] = env->getMethodID(cls, "getOtherAtTCA", "()Lorg/orekit/orbits/Orbit;");
                  mids$[mid_getOtherCovariance_6c7ec62384a674b1] = env->getMethodID(cls, "getOtherCovariance", "()Lorg/orekit/propagation/StateCovariance;");
                  mids$[mid_getReferenceAtTCA_b6e68c5f730fb347] = env->getMethodID(cls, "getReferenceAtTCA", "()Lorg/orekit/orbits/Orbit;");
                  mids$[mid_getReferenceCovariance_6c7ec62384a674b1] = env->getMethodID(cls, "getReferenceCovariance", "()Lorg/orekit/propagation/StateCovariance;");
                  mids$[mid_getTca_c325492395d89b24] = env->getMethodID(cls, "getTca", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ShortTermEncounter2DDefinition::ShortTermEncounter2DDefinition(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::propagation::StateCovariance & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6e070423a9774ddb, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              ShortTermEncounter2DDefinition::ShortTermEncounter2DDefinition(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, jdouble a2, const ::org::orekit::orbits::Orbit & a3, const ::org::orekit::propagation::StateCovariance & a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_16bbc50d7e41fe28, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5)) {}

              ShortTermEncounter2DDefinition::ShortTermEncounter2DDefinition(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::propagation::StateCovariance & a3, jdouble a4, const ::org::orekit::frames::encounter::EncounterLOFType & a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_86821b70ee5fe2a3, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$, a6)) {}

              ShortTermEncounter2DDefinition::ShortTermEncounter2DDefinition(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, jdouble a2, const ::org::orekit::orbits::Orbit & a3, const ::org::orekit::propagation::StateCovariance & a4, jdouble a5, const ::org::orekit::frames::encounter::EncounterLOFType & a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_916cb8d64b395e25, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$, a7)) {}

              ::org::orekit::propagation::StateCovariance ShortTermEncounter2DDefinition::computeCombinedCovarianceInEncounterFrame() const
              {
                return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_computeCombinedCovarianceInEncounterFrame_6c7ec62384a674b1]));
              }

              ::org::orekit::propagation::StateCovariance ShortTermEncounter2DDefinition::computeCombinedCovarianceInReferenceTNW() const
              {
                return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_computeCombinedCovarianceInReferenceTNW_6c7ec62384a674b1]));
              }

              jdouble ShortTermEncounter2DDefinition::computeCoppolaEncounterDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeCoppolaEncounterDuration_b74f83833fdad017]);
              }

              jdouble ShortTermEncounter2DDefinition::computeMahalanobisDistance() const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeMahalanobisDistance_b74f83833fdad017]);
              }

              jdouble ShortTermEncounter2DDefinition::computeMahalanobisDistance(jdouble a0) const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeMahalanobisDistance_04fd0666b613d2ab], a0);
              }

              jdouble ShortTermEncounter2DDefinition::computeMissDistance() const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeMissDistance_b74f83833fdad017]);
              }

              ::org::hipparchus::geometry::euclidean::twod::Vector2D ShortTermEncounter2DDefinition::computeOtherPositionInCollisionPlane() const
              {
                return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInCollisionPlane_9cb1572c1d4936cf]));
              }

              ::org::hipparchus::geometry::euclidean::twod::Vector2D ShortTermEncounter2DDefinition::computeOtherPositionInRotatedCollisionPlane() const
              {
                return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInRotatedCollisionPlane_9cb1572c1d4936cf]));
              }

              ::org::hipparchus::geometry::euclidean::twod::Vector2D ShortTermEncounter2DDefinition::computeOtherPositionInRotatedCollisionPlane(jdouble a0) const
              {
                return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInRotatedCollisionPlane_32a32febf6739dcf], a0));
              }

              ::org::orekit::utils::PVCoordinates ShortTermEncounter2DDefinition::computeOtherRelativeToReferencePVInReferenceInertial() const
              {
                return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_computeOtherRelativeToReferencePVInReferenceInertial_180fb117720acb76]));
              }

              ::org::hipparchus::linear::RealMatrix ShortTermEncounter2DDefinition::computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_f77d745f2128c391]));
              }

              ::org::hipparchus::linear::RealMatrix ShortTermEncounter2DDefinition::computeProjectedCombinedPositionalCovarianceMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectedCombinedPositionalCovarianceMatrix_f77d745f2128c391]));
              }

              ::org::hipparchus::linear::RealMatrix ShortTermEncounter2DDefinition::computeReferenceInertialToCollisionPlaneProjectionMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_f77d745f2128c391]));
              }

              jdouble ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance() const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeSquaredMahalanobisDistance_b74f83833fdad017]);
              }

              jdouble ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(jdouble a0) const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeSquaredMahalanobisDistance_04fd0666b613d2ab], a0);
              }

              jdouble ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::linear::RealMatrix & a1)
              {
                jclass cls = env->getClass(initializeClass);
                return env->callStaticDoubleMethod(cls, mids$[mid_computeSquaredMahalanobisDistance_db335e3aaf683d13], a0.this$, a1.this$);
              }

              jdouble ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(jdouble a0, jdouble a1, jdouble a2, jdouble a3)
              {
                jclass cls = env->getClass(initializeClass);
                return env->callStaticDoubleMethod(cls, mids$[mid_computeSquaredMahalanobisDistance_08eba2463884b341], a0, a1, a2, a3);
              }

              jdouble ShortTermEncounter2DDefinition::getCombinedRadius() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getCombinedRadius_b74f83833fdad017]);
              }

              ::org::orekit::frames::encounter::EncounterLOF ShortTermEncounter2DDefinition::getEncounterFrame() const
              {
                return ::org::orekit::frames::encounter::EncounterLOF(env->callObjectMethod(this$, mids$[mid_getEncounterFrame_b4b6e345de2c2267]));
              }

              ::org::orekit::orbits::Orbit ShortTermEncounter2DDefinition::getOtherAtTCA() const
              {
                return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_getOtherAtTCA_b6e68c5f730fb347]));
              }

              ::org::orekit::propagation::StateCovariance ShortTermEncounter2DDefinition::getOtherCovariance() const
              {
                return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_getOtherCovariance_6c7ec62384a674b1]));
              }

              ::org::orekit::orbits::Orbit ShortTermEncounter2DDefinition::getReferenceAtTCA() const
              {
                return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_getReferenceAtTCA_b6e68c5f730fb347]));
              }

              ::org::orekit::propagation::StateCovariance ShortTermEncounter2DDefinition::getReferenceCovariance() const
              {
                return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_getReferenceCovariance_6c7ec62384a674b1]));
              }

              ::org::orekit::time::AbsoluteDate ShortTermEncounter2DDefinition::getTca() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTca_c325492395d89b24]));
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
              static PyObject *t_ShortTermEncounter2DDefinition_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShortTermEncounter2DDefinition_instance_(PyTypeObject *type, PyObject *arg);
              static int t_ShortTermEncounter2DDefinition_init_(t_ShortTermEncounter2DDefinition *self, PyObject *args, PyObject *kwds);
              static PyObject *t_ShortTermEncounter2DDefinition_computeCombinedCovarianceInEncounterFrame(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeCombinedCovarianceInReferenceTNW(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeCoppolaEncounterDuration(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeMahalanobisDistance(t_ShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_ShortTermEncounter2DDefinition_computeMissDistance(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherPositionInCollisionPlane(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherPositionInRotatedCollisionPlane(t_ShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherRelativeToReferencePVInReferenceInertial(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeProjectedCombinedPositionalCovarianceMatrix(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeReferenceInertialToCollisionPlaneProjectionMatrix(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance(t_ShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_ShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance_(PyTypeObject *type, PyObject *args);
              static PyObject *t_ShortTermEncounter2DDefinition_getCombinedRadius(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getEncounterFrame(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getOtherAtTCA(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getOtherCovariance(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getReferenceAtTCA(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getReferenceCovariance(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getTca(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_get__combinedRadius(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__encounterFrame(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__otherAtTCA(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__otherCovariance(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__referenceAtTCA(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__referenceCovariance(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__tca(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyGetSetDef t_ShortTermEncounter2DDefinition__fields_[] = {
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, combinedRadius),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, encounterFrame),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, otherAtTCA),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, otherCovariance),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, referenceAtTCA),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, referenceCovariance),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, tca),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ShortTermEncounter2DDefinition__methods_[] = {
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeCombinedCovarianceInEncounterFrame, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeCombinedCovarianceInReferenceTNW, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeCoppolaEncounterDuration, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeMahalanobisDistance, METH_VARARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeMissDistance, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeOtherPositionInCollisionPlane, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeOtherPositionInRotatedCollisionPlane, METH_VARARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeOtherRelativeToReferencePVInReferenceInertial, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeProjectedCombinedPositionalCovarianceMatrix, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeReferenceInertialToCollisionPlaneProjectionMatrix, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeSquaredMahalanobisDistance, METH_VARARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeSquaredMahalanobisDistance_, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getCombinedRadius, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getEncounterFrame, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getOtherAtTCA, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getOtherCovariance, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getReferenceAtTCA, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getReferenceCovariance, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getTca, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ShortTermEncounter2DDefinition)[] = {
                { Py_tp_methods, t_ShortTermEncounter2DDefinition__methods_ },
                { Py_tp_init, (void *) t_ShortTermEncounter2DDefinition_init_ },
                { Py_tp_getset, t_ShortTermEncounter2DDefinition__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ShortTermEncounter2DDefinition)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(ShortTermEncounter2DDefinition, t_ShortTermEncounter2DDefinition, ShortTermEncounter2DDefinition);

              void t_ShortTermEncounter2DDefinition::install(PyObject *module)
              {
                installType(&PY_TYPE(ShortTermEncounter2DDefinition), &PY_TYPE_DEF(ShortTermEncounter2DDefinition), module, "ShortTermEncounter2DDefinition", 0);
              }

              void t_ShortTermEncounter2DDefinition::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DDefinition), "class_", make_descriptor(ShortTermEncounter2DDefinition::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DDefinition), "wrapfn_", make_descriptor(t_ShortTermEncounter2DDefinition::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DDefinition), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_ShortTermEncounter2DDefinition_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ShortTermEncounter2DDefinition::initializeClass, 1)))
                  return NULL;
                return t_ShortTermEncounter2DDefinition::wrap_Object(ShortTermEncounter2DDefinition(((t_ShortTermEncounter2DDefinition *) arg)->object.this$));
              }
              static PyObject *t_ShortTermEncounter2DDefinition_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ShortTermEncounter2DDefinition::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_ShortTermEncounter2DDefinition_init_(t_ShortTermEncounter2DDefinition *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 5:
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    ::org::orekit::orbits::Orbit a2((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a3((jobject) NULL);
                    jdouble a4;
                    ShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "kkkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4))
                    {
                      INT_CALL(object = ShortTermEncounter2DDefinition(a0, a1, a2, a3, a4));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 6:
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    jdouble a2;
                    ::org::orekit::orbits::Orbit a3((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a4((jobject) NULL);
                    jdouble a5;
                    ShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "kkDkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                    {
                      INT_CALL(object = ShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 7:
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    ::org::orekit::orbits::Orbit a2((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a3((jobject) NULL);
                    jdouble a4;
                    ::org::orekit::frames::encounter::EncounterLOFType a5((jobject) NULL);
                    PyTypeObject **p5;
                    jdouble a6;
                    ShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "kkkkDKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::frames::encounter::EncounterLOFType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::orekit::frames::encounter::t_EncounterLOFType::parameters_, &a6))
                    {
                      INT_CALL(object = ShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5, a6));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 8:
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    jdouble a2;
                    ::org::orekit::orbits::Orbit a3((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a4((jobject) NULL);
                    jdouble a5;
                    ::org::orekit::frames::encounter::EncounterLOFType a6((jobject) NULL);
                    PyTypeObject **p6;
                    jdouble a7;
                    ShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "kkDkkDKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::frames::encounter::EncounterLOFType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::frames::encounter::t_EncounterLOFType::parameters_, &a7))
                    {
                      INT_CALL(object = ShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5, a6, a7));
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

              static PyObject *t_ShortTermEncounter2DDefinition_computeCombinedCovarianceInEncounterFrame(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::StateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.computeCombinedCovarianceInEncounterFrame());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeCombinedCovarianceInReferenceTNW(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::StateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.computeCombinedCovarianceInReferenceTNW());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeCoppolaEncounterDuration(t_ShortTermEncounter2DDefinition *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.computeCoppolaEncounterDuration());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeMahalanobisDistance(t_ShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    jdouble result;
                    OBJ_CALL(result = self->object.computeMahalanobisDistance());
                    return PyFloat_FromDouble((double) result);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    jdouble result;

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeMahalanobisDistance(a0));
                      return PyFloat_FromDouble((double) result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeMahalanobisDistance", args);
                return NULL;
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeMissDistance(t_ShortTermEncounter2DDefinition *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.computeMissDistance());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherPositionInCollisionPlane(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
                OBJ_CALL(result = self->object.computeOtherPositionInCollisionPlane());
                return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherPositionInRotatedCollisionPlane(t_ShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
                    OBJ_CALL(result = self->object.computeOtherPositionInRotatedCollisionPlane());
                    return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeOtherPositionInRotatedCollisionPlane(a0));
                      return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeOtherPositionInRotatedCollisionPlane", args);
                return NULL;
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherRelativeToReferencePVInReferenceInertial(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::utils::PVCoordinates result((jobject) NULL);
                OBJ_CALL(result = self->object.computeOtherRelativeToReferencePVInReferenceInertial());
                return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeProjectedCombinedPositionalCovarianceMatrix(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeProjectedCombinedPositionalCovarianceMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeReferenceInertialToCollisionPlaneProjectionMatrix(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeReferenceInertialToCollisionPlaneProjectionMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance(t_ShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    jdouble result;
                    OBJ_CALL(result = self->object.computeSquaredMahalanobisDistance());
                    return PyFloat_FromDouble((double) result);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    jdouble result;

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeSquaredMahalanobisDistance(a0));
                      return PyFloat_FromDouble((double) result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeSquaredMahalanobisDistance", args);
                return NULL;
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance_(PyTypeObject *type, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 2:
                  {
                    ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                    ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
                    jdouble result;

                    if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
                    {
                      OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(a0, a1));
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
                      OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(a0, a1, a2, a3));
                      return PyFloat_FromDouble((double) result);
                    }
                  }
                }

                PyErr_SetArgsError(type, "computeSquaredMahalanobisDistance_", args);
                return NULL;
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getCombinedRadius(t_ShortTermEncounter2DDefinition *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getCombinedRadius());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getEncounterFrame(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::frames::encounter::EncounterLOF result((jobject) NULL);
                OBJ_CALL(result = self->object.getEncounterFrame());
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getOtherAtTCA(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::orbits::Orbit result((jobject) NULL);
                OBJ_CALL(result = self->object.getOtherAtTCA());
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getOtherCovariance(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::StateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getOtherCovariance());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getReferenceAtTCA(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::orbits::Orbit result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceAtTCA());
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getReferenceCovariance(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::StateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceCovariance());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getTca(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getTca());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__combinedRadius(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getCombinedRadius());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__encounterFrame(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::frames::encounter::EncounterLOF value((jobject) NULL);
                OBJ_CALL(value = self->object.getEncounterFrame());
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__otherAtTCA(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::orbits::Orbit value((jobject) NULL);
                OBJ_CALL(value = self->object.getOtherAtTCA());
                return ::org::orekit::orbits::t_Orbit::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__otherCovariance(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::propagation::StateCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getOtherCovariance());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__referenceAtTCA(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::orbits::Orbit value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceAtTCA());
                return ::org::orekit::orbits::t_Orbit::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__referenceCovariance(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::propagation::StateCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceCovariance());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__tca(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getTca());
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
#include "org/orekit/gnss/rflink/gps/SubFrame4D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4D::class$ = NULL;
          jmethodID *SubFrame4D::mids$ = NULL;
          bool SubFrame4D::live$ = false;

          jclass SubFrame4D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getA0_b74f83833fdad017] = env->getMethodID(cls, "getA0", "()D");
              mids$[mid_getA1_b74f83833fdad017] = env->getMethodID(cls, "getA1", "()D");
              mids$[mid_getAlpha0_b74f83833fdad017] = env->getMethodID(cls, "getAlpha0", "()D");
              mids$[mid_getAlpha1_b74f83833fdad017] = env->getMethodID(cls, "getAlpha1", "()D");
              mids$[mid_getAlpha2_b74f83833fdad017] = env->getMethodID(cls, "getAlpha2", "()D");
              mids$[mid_getAlpha3_b74f83833fdad017] = env->getMethodID(cls, "getAlpha3", "()D");
              mids$[mid_getBeta0_b74f83833fdad017] = env->getMethodID(cls, "getBeta0", "()D");
              mids$[mid_getBeta1_b74f83833fdad017] = env->getMethodID(cls, "getBeta1", "()D");
              mids$[mid_getBeta2_b74f83833fdad017] = env->getMethodID(cls, "getBeta2", "()D");
              mids$[mid_getBeta3_b74f83833fdad017] = env->getMethodID(cls, "getBeta3", "()D");
              mids$[mid_getDeltaTLs_55546ef6a647f39b] = env->getMethodID(cls, "getDeltaTLs", "()I");
              mids$[mid_getDeltaTLsf_55546ef6a647f39b] = env->getMethodID(cls, "getDeltaTLsf", "()I");
              mids$[mid_getDn_55546ef6a647f39b] = env->getMethodID(cls, "getDn", "()I");
              mids$[mid_getReserved10_55546ef6a647f39b] = env->getMethodID(cls, "getReserved10", "()I");
              mids$[mid_getTot_55546ef6a647f39b] = env->getMethodID(cls, "getTot", "()I");
              mids$[mid_getWeekNumberLsf_55546ef6a647f39b] = env->getMethodID(cls, "getWeekNumberLsf", "()I");
              mids$[mid_getWeekNumberT_55546ef6a647f39b] = env->getMethodID(cls, "getWeekNumberT", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble SubFrame4D::getA0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getA0_b74f83833fdad017]);
          }

          jdouble SubFrame4D::getA1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getA1_b74f83833fdad017]);
          }

          jdouble SubFrame4D::getAlpha0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha0_b74f83833fdad017]);
          }

          jdouble SubFrame4D::getAlpha1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha1_b74f83833fdad017]);
          }

          jdouble SubFrame4D::getAlpha2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha2_b74f83833fdad017]);
          }

          jdouble SubFrame4D::getAlpha3() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha3_b74f83833fdad017]);
          }

          jdouble SubFrame4D::getBeta0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBeta0_b74f83833fdad017]);
          }

          jdouble SubFrame4D::getBeta1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBeta1_b74f83833fdad017]);
          }

          jdouble SubFrame4D::getBeta2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBeta2_b74f83833fdad017]);
          }

          jdouble SubFrame4D::getBeta3() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBeta3_b74f83833fdad017]);
          }

          jint SubFrame4D::getDeltaTLs() const
          {
            return env->callIntMethod(this$, mids$[mid_getDeltaTLs_55546ef6a647f39b]);
          }

          jint SubFrame4D::getDeltaTLsf() const
          {
            return env->callIntMethod(this$, mids$[mid_getDeltaTLsf_55546ef6a647f39b]);
          }

          jint SubFrame4D::getDn() const
          {
            return env->callIntMethod(this$, mids$[mid_getDn_55546ef6a647f39b]);
          }

          jint SubFrame4D::getReserved10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved10_55546ef6a647f39b]);
          }

          jint SubFrame4D::getTot() const
          {
            return env->callIntMethod(this$, mids$[mid_getTot_55546ef6a647f39b]);
          }

          jint SubFrame4D::getWeekNumberLsf() const
          {
            return env->callIntMethod(this$, mids$[mid_getWeekNumberLsf_55546ef6a647f39b]);
          }

          jint SubFrame4D::getWeekNumberT() const
          {
            return env->callIntMethod(this$, mids$[mid_getWeekNumberT_55546ef6a647f39b]);
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
          static PyObject *t_SubFrame4D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4D_getA0(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getA1(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getAlpha0(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getAlpha1(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getAlpha2(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getAlpha3(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getBeta0(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getBeta1(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getBeta2(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getBeta3(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getDeltaTLs(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getDeltaTLsf(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getDn(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getReserved10(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getTot(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getWeekNumberLsf(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_getWeekNumberT(t_SubFrame4D *self);
          static PyObject *t_SubFrame4D_get__a0(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__a1(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__alpha0(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__alpha1(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__alpha2(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__alpha3(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__beta0(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__beta1(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__beta2(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__beta3(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__deltaTLs(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__deltaTLsf(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__dn(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__reserved10(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__tot(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__weekNumberLsf(t_SubFrame4D *self, void *data);
          static PyObject *t_SubFrame4D_get__weekNumberT(t_SubFrame4D *self, void *data);
          static PyGetSetDef t_SubFrame4D__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame4D, a0),
            DECLARE_GET_FIELD(t_SubFrame4D, a1),
            DECLARE_GET_FIELD(t_SubFrame4D, alpha0),
            DECLARE_GET_FIELD(t_SubFrame4D, alpha1),
            DECLARE_GET_FIELD(t_SubFrame4D, alpha2),
            DECLARE_GET_FIELD(t_SubFrame4D, alpha3),
            DECLARE_GET_FIELD(t_SubFrame4D, beta0),
            DECLARE_GET_FIELD(t_SubFrame4D, beta1),
            DECLARE_GET_FIELD(t_SubFrame4D, beta2),
            DECLARE_GET_FIELD(t_SubFrame4D, beta3),
            DECLARE_GET_FIELD(t_SubFrame4D, deltaTLs),
            DECLARE_GET_FIELD(t_SubFrame4D, deltaTLsf),
            DECLARE_GET_FIELD(t_SubFrame4D, dn),
            DECLARE_GET_FIELD(t_SubFrame4D, reserved10),
            DECLARE_GET_FIELD(t_SubFrame4D, tot),
            DECLARE_GET_FIELD(t_SubFrame4D, weekNumberLsf),
            DECLARE_GET_FIELD(t_SubFrame4D, weekNumberT),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame4D__methods_[] = {
            DECLARE_METHOD(t_SubFrame4D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4D, getA0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getA1, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getAlpha0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getAlpha1, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getAlpha2, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getAlpha3, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getBeta0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getBeta1, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getBeta2, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getBeta3, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getDeltaTLs, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getDeltaTLsf, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getDn, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getReserved10, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getTot, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getWeekNumberLsf, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4D, getWeekNumberT, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4D)[] = {
            { Py_tp_methods, t_SubFrame4D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame4D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4D)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame4D, t_SubFrame4D, SubFrame4D);

          void t_SubFrame4D::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4D), &PY_TYPE_DEF(SubFrame4D), module, "SubFrame4D", 0);
          }

          void t_SubFrame4D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4D), "class_", make_descriptor(SubFrame4D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4D), "wrapfn_", make_descriptor(t_SubFrame4D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame4D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4D::initializeClass, 1)))
              return NULL;
            return t_SubFrame4D::wrap_Object(SubFrame4D(((t_SubFrame4D *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame4D_getA0(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getA0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getA1(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getA1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getAlpha0(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAlpha0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getAlpha1(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAlpha1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getAlpha2(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAlpha2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getAlpha3(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAlpha3());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getBeta0(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBeta0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getBeta1(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBeta1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getBeta2(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBeta2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getBeta3(t_SubFrame4D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBeta3());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame4D_getDeltaTLs(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDeltaTLs());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_getDeltaTLsf(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDeltaTLsf());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_getDn(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDn());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_getReserved10(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_getTot(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTot());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_getWeekNumberLsf(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getWeekNumberLsf());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_getWeekNumberT(t_SubFrame4D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getWeekNumberT());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4D_get__a0(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getA0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__a1(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getA1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__alpha0(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAlpha0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__alpha1(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAlpha1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__alpha2(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAlpha2());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__alpha3(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAlpha3());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__beta0(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBeta0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__beta1(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBeta1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__beta2(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBeta2());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__beta3(t_SubFrame4D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBeta3());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame4D_get__deltaTLs(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDeltaTLs());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4D_get__deltaTLsf(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDeltaTLsf());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4D_get__dn(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDn());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4D_get__reserved10(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved10());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4D_get__tot(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTot());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4D_get__weekNumberLsf(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getWeekNumberLsf());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4D_get__weekNumberT(t_SubFrame4D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getWeekNumberT());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmData.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmTle.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParameters.h"
#include "java/lang/Class.h"
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
                  mids$[mid_init$_05b8744f501bf636] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/KeplerianElements;Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTle;Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;Lorg/orekit/files/ccsds/ndm/odm/UserDefined;D)V");
                  mids$[mid_getCovarianceBlock_e10d3bdd874e7ebe] = env->getMethodID(cls, "getCovarianceBlock", "()Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;");
                  mids$[mid_getKeplerianElementsBlock_8313e8e884b218d3] = env->getMethodID(cls, "getKeplerianElementsBlock", "()Lorg/orekit/files/ccsds/ndm/odm/KeplerianElements;");
                  mids$[mid_getMass_b74f83833fdad017] = env->getMethodID(cls, "getMass", "()D");
                  mids$[mid_getSpacecraftParametersBlock_ccfacaad97346180] = env->getMethodID(cls, "getSpacecraftParametersBlock", "()Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;");
                  mids$[mid_getTLEBlock_6a2b04ed9064b5c8] = env->getMethodID(cls, "getTLEBlock", "()Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTle;");
                  mids$[mid_getUserDefinedBlock_757fcfae3141e23d] = env->getMethodID(cls, "getUserDefinedBlock", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");
                  mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OmmData::OmmData(const ::org::orekit::files::ccsds::ndm::odm::KeplerianElements & a0, const ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters & a1, const ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle & a2, const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance & a3, const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_05b8744f501bf636, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

              ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance OmmData::getCovarianceBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance(env->callObjectMethod(this$, mids$[mid_getCovarianceBlock_e10d3bdd874e7ebe]));
              }

              ::org::orekit::files::ccsds::ndm::odm::KeplerianElements OmmData::getKeplerianElementsBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::KeplerianElements(env->callObjectMethod(this$, mids$[mid_getKeplerianElementsBlock_8313e8e884b218d3]));
              }

              jdouble OmmData::getMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMass_b74f83833fdad017]);
              }

              ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters OmmData::getSpacecraftParametersBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters(env->callObjectMethod(this$, mids$[mid_getSpacecraftParametersBlock_ccfacaad97346180]));
              }

              ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle OmmData::getTLEBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle(env->callObjectMethod(this$, mids$[mid_getTLEBlock_6a2b04ed9064b5c8]));
              }

              ::org::orekit::files::ccsds::ndm::odm::UserDefined OmmData::getUserDefinedBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedBlock_757fcfae3141e23d]));
              }

              void OmmData::validate(jdouble a0) const
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
#include "org/hipparchus/optim/linear/SolutionCallback.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/PointValuePair.h"
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
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getSolution_35ff88cac3217ca3] = env->getMethodID(cls, "getSolution", "()Lorg/hipparchus/optim/PointValuePair;");
            mids$[mid_isSolutionOptimal_9ab94ac1dc23b105] = env->getMethodID(cls, "isSolutionOptimal", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SolutionCallback::SolutionCallback() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::org::hipparchus::optim::PointValuePair SolutionCallback::getSolution() const
        {
          return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_getSolution_35ff88cac3217ca3]));
        }

        jboolean SolutionCallback::isSolutionOptimal() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSolutionOptimal_9ab94ac1dc23b105]);
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
#include "org/orekit/propagation/integration/PythonFieldAdditionalDerivativesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/integration/FieldCombinedDerivatives.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/integration/FieldAdditionalDerivativesProvider.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonFieldAdditionalDerivativesProvider::class$ = NULL;
        jmethodID *PythonFieldAdditionalDerivativesProvider::mids$ = NULL;
        bool PythonFieldAdditionalDerivativesProvider::live$ = false;

        jclass PythonFieldAdditionalDerivativesProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonFieldAdditionalDerivativesProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_combinedDerivatives_65b59abf328f3f4b] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/integration/FieldCombinedDerivatives;");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_yields_e6d9e841ca2e035c] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldAdditionalDerivativesProvider::PythonFieldAdditionalDerivativesProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonFieldAdditionalDerivativesProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonFieldAdditionalDerivativesProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonFieldAdditionalDerivativesProvider::pythonExtension(jlong a0) const
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
      namespace integration {
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_of_(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args);
        static int t_PythonFieldAdditionalDerivativesProvider_init_(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_finalize(t_PythonFieldAdditionalDerivativesProvider *self);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_pythonExtension(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args);
        static jobject JNICALL t_PythonFieldAdditionalDerivativesProvider_combinedDerivatives0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jint JNICALL t_PythonFieldAdditionalDerivativesProvider_getDimension1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldAdditionalDerivativesProvider_getName2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonFieldAdditionalDerivativesProvider_init3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonFieldAdditionalDerivativesProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonFieldAdditionalDerivativesProvider_yields5(JNIEnv *jenv, jobject jobj, jobject a0);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_get__self(t_PythonFieldAdditionalDerivativesProvider *self, void *data);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_get__parameters_(t_PythonFieldAdditionalDerivativesProvider *self, void *data);
        static PyGetSetDef t_PythonFieldAdditionalDerivativesProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldAdditionalDerivativesProvider, self),
          DECLARE_GET_FIELD(t_PythonFieldAdditionalDerivativesProvider, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldAdditionalDerivativesProvider__methods_[] = {
          DECLARE_METHOD(t_PythonFieldAdditionalDerivativesProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAdditionalDerivativesProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAdditionalDerivativesProvider, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldAdditionalDerivativesProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldAdditionalDerivativesProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldAdditionalDerivativesProvider)[] = {
          { Py_tp_methods, t_PythonFieldAdditionalDerivativesProvider__methods_ },
          { Py_tp_init, (void *) t_PythonFieldAdditionalDerivativesProvider_init_ },
          { Py_tp_getset, t_PythonFieldAdditionalDerivativesProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldAdditionalDerivativesProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldAdditionalDerivativesProvider, t_PythonFieldAdditionalDerivativesProvider, PythonFieldAdditionalDerivativesProvider);
        PyObject *t_PythonFieldAdditionalDerivativesProvider::wrap_Object(const PythonFieldAdditionalDerivativesProvider& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAdditionalDerivativesProvider::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAdditionalDerivativesProvider *self = (t_PythonFieldAdditionalDerivativesProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldAdditionalDerivativesProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAdditionalDerivativesProvider::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAdditionalDerivativesProvider *self = (t_PythonFieldAdditionalDerivativesProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldAdditionalDerivativesProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldAdditionalDerivativesProvider), &PY_TYPE_DEF(PythonFieldAdditionalDerivativesProvider), module, "PythonFieldAdditionalDerivativesProvider", 1);
        }

        void t_PythonFieldAdditionalDerivativesProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalDerivativesProvider), "class_", make_descriptor(PythonFieldAdditionalDerivativesProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalDerivativesProvider), "wrapfn_", make_descriptor(t_PythonFieldAdditionalDerivativesProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalDerivativesProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldAdditionalDerivativesProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "combinedDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/integration/FieldCombinedDerivatives;", (void *) t_PythonFieldAdditionalDerivativesProvider_combinedDerivatives0 },
            { "getDimension", "()I", (void *) t_PythonFieldAdditionalDerivativesProvider_getDimension1 },
            { "getName", "()Ljava/lang/String;", (void *) t_PythonFieldAdditionalDerivativesProvider_getName2 },
            { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V", (void *) t_PythonFieldAdditionalDerivativesProvider_init3 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldAdditionalDerivativesProvider_pythonDecRef4 },
            { "yields", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z", (void *) t_PythonFieldAdditionalDerivativesProvider_yields5 },
          };
          env->registerNatives(cls, methods, 6);
        }

        static PyObject *t_PythonFieldAdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldAdditionalDerivativesProvider::initializeClass, 1)))
            return NULL;
          return t_PythonFieldAdditionalDerivativesProvider::wrap_Object(PythonFieldAdditionalDerivativesProvider(((t_PythonFieldAdditionalDerivativesProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldAdditionalDerivativesProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldAdditionalDerivativesProvider_of_(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldAdditionalDerivativesProvider_init_(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldAdditionalDerivativesProvider object((jobject) NULL);

          INT_CALL(object = PythonFieldAdditionalDerivativesProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldAdditionalDerivativesProvider_finalize(t_PythonFieldAdditionalDerivativesProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldAdditionalDerivativesProvider_pythonExtension(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldAdditionalDerivativesProvider_combinedDerivatives0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::integration::FieldCombinedDerivatives value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "combinedDerivatives", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::integration::FieldCombinedDerivatives::initializeClass, &value))
          {
            throwTypeError("combinedDerivatives", result);
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

        static jint JNICALL t_PythonFieldAdditionalDerivativesProvider_getDimension1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getDimension", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getDimension", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonFieldAdditionalDerivativesProvider_getName2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::lang::String value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getName", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "s", &value))
          {
            throwTypeError("getName", result);
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

        static void JNICALL t_PythonFieldAdditionalDerivativesProvider_init3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldAdditionalDerivativesProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jboolean JNICALL t_PythonFieldAdditionalDerivativesProvider_yields5(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "yields", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("yields", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static PyObject *t_PythonFieldAdditionalDerivativesProvider_get__self(t_PythonFieldAdditionalDerivativesProvider *self, void *data)
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
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_get__parameters_(t_PythonFieldAdditionalDerivativesProvider *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/PythonSection.h"
#include "org/orekit/files/ccsds/section/Section.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *PythonSection::class$ = NULL;
          jmethodID *PythonSection::mids$ = NULL;
          bool PythonSection::live$ = false;

          jclass PythonSection::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/PythonSection");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonSection::PythonSection() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonSection::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonSection::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonSection::pythonExtension(jlong a0) const
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
    namespace files {
      namespace ccsds {
        namespace section {
          static PyObject *t_PythonSection_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonSection_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonSection_init_(t_PythonSection *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonSection_finalize(t_PythonSection *self);
          static PyObject *t_PythonSection_pythonExtension(t_PythonSection *self, PyObject *args);
          static void JNICALL t_PythonSection_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonSection_validate1(JNIEnv *jenv, jobject jobj, jdouble a0);
          static PyObject *t_PythonSection_get__self(t_PythonSection *self, void *data);
          static PyGetSetDef t_PythonSection__fields_[] = {
            DECLARE_GET_FIELD(t_PythonSection, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonSection__methods_[] = {
            DECLARE_METHOD(t_PythonSection, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonSection, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonSection, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonSection, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonSection)[] = {
            { Py_tp_methods, t_PythonSection__methods_ },
            { Py_tp_init, (void *) t_PythonSection_init_ },
            { Py_tp_getset, t_PythonSection__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonSection)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonSection, t_PythonSection, PythonSection);

          void t_PythonSection::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonSection), &PY_TYPE_DEF(PythonSection), module, "PythonSection", 1);
          }

          void t_PythonSection::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSection), "class_", make_descriptor(PythonSection::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSection), "wrapfn_", make_descriptor(t_PythonSection::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSection), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonSection::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonSection_pythonDecRef0 },
              { "validate", "(D)V", (void *) t_PythonSection_validate1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonSection_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonSection::initializeClass, 1)))
              return NULL;
            return t_PythonSection::wrap_Object(PythonSection(((t_PythonSection *) arg)->object.this$));
          }
          static PyObject *t_PythonSection_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonSection::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonSection_init_(t_PythonSection *self, PyObject *args, PyObject *kwds)
          {
            PythonSection object((jobject) NULL);

            INT_CALL(object = PythonSection());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonSection_finalize(t_PythonSection *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonSection_pythonExtension(t_PythonSection *self, PyObject *args)
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

          static void JNICALL t_PythonSection_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSection::mids$[PythonSection::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonSection::mids$[PythonSection::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonSection_validate1(JNIEnv *jenv, jobject jobj, jdouble a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSection::mids$[PythonSection::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "validate", "d", (double) a0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonSection_get__self(t_PythonSection *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/RangeRateModifierUtil.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/propagation/integration/AbstractGradientConverter.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeRateModifierUtil::class$ = NULL;
          jmethodID *RangeRateModifierUtil::mids$ = NULL;
          bool RangeRateModifierUtil::live$ = false;

          jclass RangeRateModifierUtil::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeRateModifierUtil");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
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
          static PyObject *t_RangeRateModifierUtil_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeRateModifierUtil_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_RangeRateModifierUtil__methods_[] = {
            DECLARE_METHOD(t_RangeRateModifierUtil, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateModifierUtil, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeRateModifierUtil)[] = {
            { Py_tp_methods, t_RangeRateModifierUtil__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeRateModifierUtil)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RangeRateModifierUtil, t_RangeRateModifierUtil, RangeRateModifierUtil);

          void t_RangeRateModifierUtil::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeRateModifierUtil), &PY_TYPE_DEF(RangeRateModifierUtil), module, "RangeRateModifierUtil", 0);
          }

          void t_RangeRateModifierUtil::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateModifierUtil), "class_", make_descriptor(RangeRateModifierUtil::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateModifierUtil), "wrapfn_", make_descriptor(t_RangeRateModifierUtil::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateModifierUtil), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeRateModifierUtil_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeRateModifierUtil::initializeClass, 1)))
              return NULL;
            return t_RangeRateModifierUtil::wrap_Object(RangeRateModifierUtil(((t_RangeRateModifierUtil *) arg)->object.this$));
          }
          static PyObject *t_RangeRateModifierUtil_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeRateModifierUtil::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AdditionalCovarianceMetadataKey::class$ = NULL;
            jmethodID *AdditionalCovarianceMetadataKey::mids$ = NULL;
            bool AdditionalCovarianceMetadataKey::live$ = false;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::COMMENT = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::CSCALE_FACTOR = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::CSCALE_FACTOR_MAX = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::CSCALE_FACTOR_MIN = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::DCP_SENSITIVITY_VECTOR_POSITION = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::DCP_SENSITIVITY_VECTOR_VELOCITY = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::DENSITY_FORECAST_UNCERTAINTY = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::SCREENING_DATA_SOURCE = NULL;

            jclass AdditionalCovarianceMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_f098100daf0b7e97] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata;)Z");
                mids$[mid_valueOf_5ccdc9661978f168] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;");
                mids$[mid_values_6cfefcfb61f43e57] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                CSCALE_FACTOR = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "CSCALE_FACTOR", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                CSCALE_FACTOR_MAX = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "CSCALE_FACTOR_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                CSCALE_FACTOR_MIN = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "CSCALE_FACTOR_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                DCP_SENSITIVITY_VECTOR_POSITION = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "DCP_SENSITIVITY_VECTOR_POSITION", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                DCP_SENSITIVITY_VECTOR_VELOCITY = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "DCP_SENSITIVITY_VECTOR_VELOCITY", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                DENSITY_FORECAST_UNCERTAINTY = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "DENSITY_FORECAST_UNCERTAINTY", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                SCREENING_DATA_SOURCE = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "SCREENING_DATA_SOURCE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean AdditionalCovarianceMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_f098100daf0b7e97], a0.this$, a1.this$, a2.this$);
            }

            AdditionalCovarianceMetadataKey AdditionalCovarianceMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AdditionalCovarianceMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5ccdc9661978f168], a0.this$));
            }

            JArray< AdditionalCovarianceMetadataKey > AdditionalCovarianceMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AdditionalCovarianceMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_6cfefcfb61f43e57]));
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
            static PyObject *t_AdditionalCovarianceMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadataKey_of_(t_AdditionalCovarianceMetadataKey *self, PyObject *args);
            static PyObject *t_AdditionalCovarianceMetadataKey_process(t_AdditionalCovarianceMetadataKey *self, PyObject *args);
            static PyObject *t_AdditionalCovarianceMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AdditionalCovarianceMetadataKey_values(PyTypeObject *type);
            static PyObject *t_AdditionalCovarianceMetadataKey_get__parameters_(t_AdditionalCovarianceMetadataKey *self, void *data);
            static PyGetSetDef t_AdditionalCovarianceMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_AdditionalCovarianceMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdditionalCovarianceMetadataKey__methods_[] = {
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdditionalCovarianceMetadataKey)[] = {
              { Py_tp_methods, t_AdditionalCovarianceMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AdditionalCovarianceMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdditionalCovarianceMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AdditionalCovarianceMetadataKey, t_AdditionalCovarianceMetadataKey, AdditionalCovarianceMetadataKey);
            PyObject *t_AdditionalCovarianceMetadataKey::wrap_Object(const AdditionalCovarianceMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdditionalCovarianceMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdditionalCovarianceMetadataKey *self = (t_AdditionalCovarianceMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AdditionalCovarianceMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdditionalCovarianceMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdditionalCovarianceMetadataKey *self = (t_AdditionalCovarianceMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AdditionalCovarianceMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(AdditionalCovarianceMetadataKey), &PY_TYPE_DEF(AdditionalCovarianceMetadataKey), module, "AdditionalCovarianceMetadataKey", 0);
            }

            void t_AdditionalCovarianceMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "class_", make_descriptor(AdditionalCovarianceMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "wrapfn_", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(AdditionalCovarianceMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "COMMENT", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "CSCALE_FACTOR", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::CSCALE_FACTOR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "CSCALE_FACTOR_MAX", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::CSCALE_FACTOR_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "CSCALE_FACTOR_MIN", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::CSCALE_FACTOR_MIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "DCP_SENSITIVITY_VECTOR_POSITION", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::DCP_SENSITIVITY_VECTOR_POSITION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "DCP_SENSITIVITY_VECTOR_VELOCITY", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::DCP_SENSITIVITY_VECTOR_VELOCITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "DENSITY_FORECAST_UNCERTAINTY", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::DENSITY_FORECAST_UNCERTAINTY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "SCREENING_DATA_SOURCE", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::SCREENING_DATA_SOURCE)));
            }

            static PyObject *t_AdditionalCovarianceMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdditionalCovarianceMetadataKey::initializeClass, 1)))
                return NULL;
              return t_AdditionalCovarianceMetadataKey::wrap_Object(AdditionalCovarianceMetadataKey(((t_AdditionalCovarianceMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_AdditionalCovarianceMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdditionalCovarianceMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AdditionalCovarianceMetadataKey_of_(t_AdditionalCovarianceMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AdditionalCovarianceMetadataKey_process(t_AdditionalCovarianceMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AdditionalCovarianceMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadataKey::valueOf(a0));
                return t_AdditionalCovarianceMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AdditionalCovarianceMetadataKey_values(PyTypeObject *type)
            {
              JArray< AdditionalCovarianceMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_AdditionalCovarianceMetadataKey::wrap_jobject);
            }
            static PyObject *t_AdditionalCovarianceMetadataKey_get__parameters_(t_AdditionalCovarianceMetadataKey *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}

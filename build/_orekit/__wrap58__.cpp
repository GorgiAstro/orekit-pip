#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonIntegerLeastSquareSolver.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonIntegerLeastSquareSolver::class$ = NULL;
          jmethodID *PythonIntegerLeastSquareSolver::mids$ = NULL;
          bool PythonIntegerLeastSquareSolver::live$ = false;

          jclass PythonIntegerLeastSquareSolver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonIntegerLeastSquareSolver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_solveILS_c875ff52e2e6fa6c] = env->getMethodID(cls, "solveILS", "(I[D[ILorg/hipparchus/linear/RealMatrix;)[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonIntegerLeastSquareSolver::PythonIntegerLeastSquareSolver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonIntegerLeastSquareSolver::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonIntegerLeastSquareSolver::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonIntegerLeastSquareSolver::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_PythonIntegerLeastSquareSolver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonIntegerLeastSquareSolver_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonIntegerLeastSquareSolver_init_(t_PythonIntegerLeastSquareSolver *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonIntegerLeastSquareSolver_finalize(t_PythonIntegerLeastSquareSolver *self);
          static PyObject *t_PythonIntegerLeastSquareSolver_pythonExtension(t_PythonIntegerLeastSquareSolver *self, PyObject *args);
          static void JNICALL t_PythonIntegerLeastSquareSolver_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonIntegerLeastSquareSolver_solveILS1(JNIEnv *jenv, jobject jobj, jint a0, jobject a1, jobject a2, jobject a3);
          static PyObject *t_PythonIntegerLeastSquareSolver_get__self(t_PythonIntegerLeastSquareSolver *self, void *data);
          static PyGetSetDef t_PythonIntegerLeastSquareSolver__fields_[] = {
            DECLARE_GET_FIELD(t_PythonIntegerLeastSquareSolver, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonIntegerLeastSquareSolver__methods_[] = {
            DECLARE_METHOD(t_PythonIntegerLeastSquareSolver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIntegerLeastSquareSolver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIntegerLeastSquareSolver, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonIntegerLeastSquareSolver, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonIntegerLeastSquareSolver)[] = {
            { Py_tp_methods, t_PythonIntegerLeastSquareSolver__methods_ },
            { Py_tp_init, (void *) t_PythonIntegerLeastSquareSolver_init_ },
            { Py_tp_getset, t_PythonIntegerLeastSquareSolver__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonIntegerLeastSquareSolver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonIntegerLeastSquareSolver, t_PythonIntegerLeastSquareSolver, PythonIntegerLeastSquareSolver);

          void t_PythonIntegerLeastSquareSolver::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonIntegerLeastSquareSolver), &PY_TYPE_DEF(PythonIntegerLeastSquareSolver), module, "PythonIntegerLeastSquareSolver", 1);
          }

          void t_PythonIntegerLeastSquareSolver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntegerLeastSquareSolver), "class_", make_descriptor(PythonIntegerLeastSquareSolver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntegerLeastSquareSolver), "wrapfn_", make_descriptor(t_PythonIntegerLeastSquareSolver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntegerLeastSquareSolver), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonIntegerLeastSquareSolver::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonIntegerLeastSquareSolver_pythonDecRef0 },
              { "solveILS", "(I[D[ILorg/hipparchus/linear/RealMatrix;)[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;", (void *) t_PythonIntegerLeastSquareSolver_solveILS1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonIntegerLeastSquareSolver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonIntegerLeastSquareSolver::initializeClass, 1)))
              return NULL;
            return t_PythonIntegerLeastSquareSolver::wrap_Object(PythonIntegerLeastSquareSolver(((t_PythonIntegerLeastSquareSolver *) arg)->object.this$));
          }
          static PyObject *t_PythonIntegerLeastSquareSolver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonIntegerLeastSquareSolver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonIntegerLeastSquareSolver_init_(t_PythonIntegerLeastSquareSolver *self, PyObject *args, PyObject *kwds)
          {
            PythonIntegerLeastSquareSolver object((jobject) NULL);

            INT_CALL(object = PythonIntegerLeastSquareSolver());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonIntegerLeastSquareSolver_finalize(t_PythonIntegerLeastSquareSolver *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonIntegerLeastSquareSolver_pythonExtension(t_PythonIntegerLeastSquareSolver *self, PyObject *args)
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

          static void JNICALL t_PythonIntegerLeastSquareSolver_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIntegerLeastSquareSolver::mids$[PythonIntegerLeastSquareSolver::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonIntegerLeastSquareSolver::mids$[PythonIntegerLeastSquareSolver::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonIntegerLeastSquareSolver_solveILS1(JNIEnv *jenv, jobject jobj, jint a0, jobject a1, jobject a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIntegerLeastSquareSolver::mids$[PythonIntegerLeastSquareSolver::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > value((jobject) NULL);
            PyObject *o1 = JArray<jdouble>(a1).wrap();
            PyObject *o2 = JArray<jint>(a2).wrap();
            PyObject *o3 = ::org::hipparchus::linear::t_RealMatrix::wrap_Object(::org::hipparchus::linear::RealMatrix(a3));
            PyObject *result = PyObject_CallMethod(obj, "solveILS", "iOOO", (int) a0, o1, o2, o3);
            Py_DECREF(o1);
            Py_DECREF(o2);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[k", ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution::initializeClass, &value))
            {
              throwTypeError("solveILS", result);
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

          static PyObject *t_PythonIntegerLeastSquareSolver_get__self(t_PythonIntegerLeastSquareSolver *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/InterSatellitesWindUp.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *InterSatellitesWindUp::class$ = NULL;
          jmethodID *InterSatellitesWindUp::mids$ = NULL;
          bool InterSatellitesWindUp::live$ = false;

          jclass InterSatellitesWindUp::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/InterSatellitesWindUp");

              mids$ = new jmethodID[max_mid];
              mids$[mid_emitterToInert_f462106a6ca97aca] = env->getMethodID(cls, "emitterToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_receiverToInert_f462106a6ca97aca] = env->getMethodID(cls, "receiverToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

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
        namespace gnss {
          static PyObject *t_InterSatellitesWindUp_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesWindUp_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesWindUp_of_(t_InterSatellitesWindUp *self, PyObject *args);
          static PyObject *t_InterSatellitesWindUp_get__parameters_(t_InterSatellitesWindUp *self, void *data);
          static PyGetSetDef t_InterSatellitesWindUp__fields_[] = {
            DECLARE_GET_FIELD(t_InterSatellitesWindUp, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_InterSatellitesWindUp__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesWindUp, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesWindUp, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesWindUp, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesWindUp)[] = {
            { Py_tp_methods, t_InterSatellitesWindUp__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_InterSatellitesWindUp__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesWindUp)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractWindUp),
            NULL
          };

          DEFINE_TYPE(InterSatellitesWindUp, t_InterSatellitesWindUp, InterSatellitesWindUp);
          PyObject *t_InterSatellitesWindUp::wrap_Object(const InterSatellitesWindUp& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesWindUp::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesWindUp *self = (t_InterSatellitesWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_InterSatellitesWindUp::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesWindUp::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesWindUp *self = (t_InterSatellitesWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_InterSatellitesWindUp::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesWindUp), &PY_TYPE_DEF(InterSatellitesWindUp), module, "InterSatellitesWindUp", 0);
          }

          void t_InterSatellitesWindUp::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUp), "class_", make_descriptor(InterSatellitesWindUp::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUp), "wrapfn_", make_descriptor(t_InterSatellitesWindUp::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUp), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InterSatellitesWindUp_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesWindUp::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesWindUp::wrap_Object(InterSatellitesWindUp(((t_InterSatellitesWindUp *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesWindUp_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesWindUp::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_InterSatellitesWindUp_of_(t_InterSatellitesWindUp *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }
          static PyObject *t_InterSatellitesWindUp_get__parameters_(t_InterSatellitesWindUp *self, void *data)
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
#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeFieldIntegrator.h"
#include "org/hipparchus/ode/FieldEquationsMapper.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdaptiveStepsizeFieldIntegrator::class$ = NULL;
        jmethodID *AdaptiveStepsizeFieldIntegrator::mids$ = NULL;
        bool AdaptiveStepsizeFieldIntegrator::live$ = false;

        jclass AdaptiveStepsizeFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdaptiveStepsizeFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0e317f60999bd2c0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;DD[D[D)V");
            mids$[mid_init$_1968ef6867c33506] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;DDDD)V");
            mids$[mid_getMaxStep_9981f74b2d109da6] = env->getMethodID(cls, "getMaxStep", "()D");
            mids$[mid_getMinStep_9981f74b2d109da6] = env->getMethodID(cls, "getMinStep", "()D");
            mids$[mid_initializeStep_8f80481927a4695b] = env->getMethodID(cls, "initializeStep", "(ZI[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)D");
            mids$[mid_setInitialStepSize_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setInitialStepSize", "(D)V");
            mids$[mid_setStepSizeControl_e3195482263a60ce] = env->getMethodID(cls, "setStepSizeControl", "(DD[D[D)V");
            mids$[mid_setStepSizeControl_cd5724127cc72e96] = env->getMethodID(cls, "setStepSizeControl", "(DDDD)V");
            mids$[mid_getStepSizeHelper_4e1e04b2e648c6b6] = env->getMethodID(cls, "getStepSizeHelper", "()Lorg/hipparchus/ode/nonstiff/StepsizeHelper;");
            mids$[mid_sanityChecks_d7702289c8dcf483] = env->getMethodID(cls, "sanityChecks", "(Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_resetInternalState_ff7cb6c242604316] = env->getMethodID(cls, "resetInternalState", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdaptiveStepsizeFieldIntegrator::AdaptiveStepsizeFieldIntegrator(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, jdouble a2, jdouble a3, const JArray< jdouble > & a4, const JArray< jdouble > & a5) : ::org::hipparchus::ode::AbstractFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_0e317f60999bd2c0, a0.this$, a1.this$, a2, a3, a4.this$, a5.this$)) {}

        AdaptiveStepsizeFieldIntegrator::AdaptiveStepsizeFieldIntegrator(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::org::hipparchus::ode::AbstractFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_1968ef6867c33506, a0.this$, a1.this$, a2, a3, a4, a5)) {}

        jdouble AdaptiveStepsizeFieldIntegrator::getMaxStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxStep_9981f74b2d109da6]);
        }

        jdouble AdaptiveStepsizeFieldIntegrator::getMinStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinStep_9981f74b2d109da6]);
        }

        jdouble AdaptiveStepsizeFieldIntegrator::initializeStep(jboolean a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::hipparchus::ode::FieldODEStateAndDerivative & a3, const ::org::hipparchus::ode::FieldEquationsMapper & a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_initializeStep_8f80481927a4695b], a0, a1, a2.this$, a3.this$, a4.this$);
        }

        void AdaptiveStepsizeFieldIntegrator::setInitialStepSize(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialStepSize_1ad26e8c8c0cd65b], a0);
        }

        void AdaptiveStepsizeFieldIntegrator::setStepSizeControl(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepSizeControl_e3195482263a60ce], a0, a1, a2.this$, a3.this$);
        }

        void AdaptiveStepsizeFieldIntegrator::setStepSizeControl(jdouble a0, jdouble a1, jdouble a2, jdouble a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepSizeControl_cd5724127cc72e96], a0, a1, a2, a3);
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
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_of_(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args);
        static int t_AdaptiveStepsizeFieldIntegrator_init_(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_getMaxStep(t_AdaptiveStepsizeFieldIntegrator *self);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_getMinStep(t_AdaptiveStepsizeFieldIntegrator *self);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_initializeStep(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_setInitialStepSize(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *arg);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_setStepSizeControl(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args);
        static int t_AdaptiveStepsizeFieldIntegrator_set__initialStepSize(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__maxStep(t_AdaptiveStepsizeFieldIntegrator *self, void *data);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__minStep(t_AdaptiveStepsizeFieldIntegrator *self, void *data);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__parameters_(t_AdaptiveStepsizeFieldIntegrator *self, void *data);
        static PyGetSetDef t_AdaptiveStepsizeFieldIntegrator__fields_[] = {
          DECLARE_SET_FIELD(t_AdaptiveStepsizeFieldIntegrator, initialStepSize),
          DECLARE_GET_FIELD(t_AdaptiveStepsizeFieldIntegrator, maxStep),
          DECLARE_GET_FIELD(t_AdaptiveStepsizeFieldIntegrator, minStep),
          DECLARE_GET_FIELD(t_AdaptiveStepsizeFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdaptiveStepsizeFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, getMaxStep, METH_NOARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, getMinStep, METH_NOARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, initializeStep, METH_VARARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, setInitialStepSize, METH_O),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, setStepSizeControl, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdaptiveStepsizeFieldIntegrator)[] = {
          { Py_tp_methods, t_AdaptiveStepsizeFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdaptiveStepsizeFieldIntegrator_init_ },
          { Py_tp_getset, t_AdaptiveStepsizeFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdaptiveStepsizeFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::AbstractFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(AdaptiveStepsizeFieldIntegrator, t_AdaptiveStepsizeFieldIntegrator, AdaptiveStepsizeFieldIntegrator);
        PyObject *t_AdaptiveStepsizeFieldIntegrator::wrap_Object(const AdaptiveStepsizeFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdaptiveStepsizeFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdaptiveStepsizeFieldIntegrator *self = (t_AdaptiveStepsizeFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdaptiveStepsizeFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdaptiveStepsizeFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdaptiveStepsizeFieldIntegrator *self = (t_AdaptiveStepsizeFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdaptiveStepsizeFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdaptiveStepsizeFieldIntegrator), &PY_TYPE_DEF(AdaptiveStepsizeFieldIntegrator), module, "AdaptiveStepsizeFieldIntegrator", 0);
        }

        void t_AdaptiveStepsizeFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeFieldIntegrator), "class_", make_descriptor(AdaptiveStepsizeFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeFieldIntegrator), "wrapfn_", make_descriptor(t_AdaptiveStepsizeFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdaptiveStepsizeFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdaptiveStepsizeFieldIntegrator::wrap_Object(AdaptiveStepsizeFieldIntegrator(((t_AdaptiveStepsizeFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdaptiveStepsizeFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_of_(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdaptiveStepsizeFieldIntegrator_init_(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              JArray< jdouble > a5((jobject) NULL);
              AdaptiveStepsizeFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KsDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdaptiveStepsizeFieldIntegrator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              AdaptiveStepsizeFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KsDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdaptiveStepsizeFieldIntegrator(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_getMaxStep(t_AdaptiveStepsizeFieldIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_getMinStep(t_AdaptiveStepsizeFieldIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_initializeStep(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args)
        {
          jboolean a0;
          jint a1;
          JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::FieldODEStateAndDerivative a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::ode::FieldEquationsMapper a4((jobject) NULL);
          PyTypeObject **p4;
          jdouble result;

          if (!parseArgs(args, "ZI[KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::FieldEquationsMapper::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a4, &p4, ::org::hipparchus::ode::t_FieldEquationsMapper::parameters_))
          {
            OBJ_CALL(result = self->object.initializeStep(a0, a1, a2, a3, a4));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "initializeStep", args);
          return NULL;
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_setInitialStepSize(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setInitialStepSize(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialStepSize", arg);
          return NULL;
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_setStepSizeControl(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.setStepSizeControl(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.setStepSizeControl(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setStepSizeControl", args);
          return NULL;
        }
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__parameters_(t_AdaptiveStepsizeFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static int t_AdaptiveStepsizeFieldIntegrator_set__initialStepSize(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setInitialStepSize(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialStepSize", arg);
          return -1;
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__maxStep(t_AdaptiveStepsizeFieldIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__minStep(t_AdaptiveStepsizeFieldIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonAdaptableInterval.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonAdaptableInterval::class$ = NULL;
        jmethodID *PythonAdaptableInterval::mids$ = NULL;
        bool PythonAdaptableInterval::live$ = false;

        jclass PythonAdaptableInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonAdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_currentInterval_b443ba1cc794b916] = env->getMethodID(cls, "currentInterval", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAdaptableInterval::PythonAdaptableInterval() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonAdaptableInterval::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonAdaptableInterval::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonAdaptableInterval::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
        static PyObject *t_PythonAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAdaptableInterval_init_(t_PythonAdaptableInterval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAdaptableInterval_finalize(t_PythonAdaptableInterval *self);
        static PyObject *t_PythonAdaptableInterval_pythonExtension(t_PythonAdaptableInterval *self, PyObject *args);
        static jdouble JNICALL t_PythonAdaptableInterval_currentInterval0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAdaptableInterval_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAdaptableInterval_get__self(t_PythonAdaptableInterval *self, void *data);
        static PyGetSetDef t_PythonAdaptableInterval__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAdaptableInterval, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAdaptableInterval__methods_[] = {
          DECLARE_METHOD(t_PythonAdaptableInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAdaptableInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAdaptableInterval, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAdaptableInterval, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAdaptableInterval)[] = {
          { Py_tp_methods, t_PythonAdaptableInterval__methods_ },
          { Py_tp_init, (void *) t_PythonAdaptableInterval_init_ },
          { Py_tp_getset, t_PythonAdaptableInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAdaptableInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAdaptableInterval, t_PythonAdaptableInterval, PythonAdaptableInterval);

        void t_PythonAdaptableInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAdaptableInterval), &PY_TYPE_DEF(PythonAdaptableInterval), module, "PythonAdaptableInterval", 1);
        }

        void t_PythonAdaptableInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdaptableInterval), "class_", make_descriptor(PythonAdaptableInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdaptableInterval), "wrapfn_", make_descriptor(t_PythonAdaptableInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdaptableInterval), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAdaptableInterval::initializeClass);
          JNINativeMethod methods[] = {
            { "currentInterval", "(Lorg/orekit/propagation/SpacecraftState;)D", (void *) t_PythonAdaptableInterval_currentInterval0 },
            { "pythonDecRef", "()V", (void *) t_PythonAdaptableInterval_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAdaptableInterval::initializeClass, 1)))
            return NULL;
          return t_PythonAdaptableInterval::wrap_Object(PythonAdaptableInterval(((t_PythonAdaptableInterval *) arg)->object.this$));
        }
        static PyObject *t_PythonAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAdaptableInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAdaptableInterval_init_(t_PythonAdaptableInterval *self, PyObject *args, PyObject *kwds)
        {
          PythonAdaptableInterval object((jobject) NULL);

          INT_CALL(object = PythonAdaptableInterval());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAdaptableInterval_finalize(t_PythonAdaptableInterval *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAdaptableInterval_pythonExtension(t_PythonAdaptableInterval *self, PyObject *args)
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

        static jdouble JNICALL t_PythonAdaptableInterval_currentInterval0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdaptableInterval::mids$[PythonAdaptableInterval::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
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

        static void JNICALL t_PythonAdaptableInterval_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdaptableInterval::mids$[PythonAdaptableInterval::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAdaptableInterval::mids$[PythonAdaptableInterval::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAdaptableInterval_get__self(t_PythonAdaptableInterval *self, void *data)
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
#include "org/orekit/propagation/events/FieldParameterDrivenDateIntervalDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/DateDriver.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldParameterDrivenDateIntervalDetector::class$ = NULL;
        jmethodID *FieldParameterDrivenDateIntervalDetector::mids$ = NULL;
        bool FieldParameterDrivenDateIntervalDetector::live$ = false;
        ::java::lang::String *FieldParameterDrivenDateIntervalDetector::DURATION_SUFFIX = NULL;
        ::java::lang::String *FieldParameterDrivenDateIntervalDetector::MEDIAN_SUFFIX = NULL;
        ::java::lang::String *FieldParameterDrivenDateIntervalDetector::START_SUFFIX = NULL;
        ::java::lang::String *FieldParameterDrivenDateIntervalDetector::STOP_SUFFIX = NULL;

        jclass FieldParameterDrivenDateIntervalDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldParameterDrivenDateIntervalDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fde21e25e89b1726] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_init$_51a5fabee2c842d1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;D)V");
            mids$[mid_g_ac6fccc69d1b2d9e] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDurationDriver_7daccb22665e511b] = env->getMethodID(cls, "getDurationDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getMedianDriver_b88c1aa4fa123324] = env->getMethodID(cls, "getMedianDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_getStartDriver_b88c1aa4fa123324] = env->getMethodID(cls, "getStartDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_getStopDriver_b88c1aa4fa123324] = env->getMethodID(cls, "getStopDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_create_98c23a5d6f32f529] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldParameterDrivenDateIntervalDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DURATION_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "DURATION_SUFFIX", "Ljava/lang/String;"));
            MEDIAN_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "MEDIAN_SUFFIX", "Ljava/lang/String;"));
            START_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "START_SUFFIX", "Ljava/lang/String;"));
            STOP_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "STOP_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldParameterDrivenDateIntervalDetector::FieldParameterDrivenDateIntervalDetector(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_fde21e25e89b1726, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        FieldParameterDrivenDateIntervalDetector::FieldParameterDrivenDateIntervalDetector(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_51a5fabee2c842d1, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::hipparchus::CalculusFieldElement FieldParameterDrivenDateIntervalDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_ac6fccc69d1b2d9e], a0.this$));
        }

        ::org::orekit::utils::ParameterDriver FieldParameterDrivenDateIntervalDetector::getDurationDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getDurationDriver_7daccb22665e511b]));
        }

        ::org::orekit::utils::DateDriver FieldParameterDrivenDateIntervalDetector::getMedianDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getMedianDriver_b88c1aa4fa123324]));
        }

        ::org::orekit::utils::DateDriver FieldParameterDrivenDateIntervalDetector::getStartDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getStartDriver_b88c1aa4fa123324]));
        }

        ::org::orekit::utils::DateDriver FieldParameterDrivenDateIntervalDetector::getStopDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getStopDriver_b88c1aa4fa123324]));
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
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_of_(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args);
        static int t_FieldParameterDrivenDateIntervalDetector_init_(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_g(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getDurationDriver(t_FieldParameterDrivenDateIntervalDetector *self);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getMedianDriver(t_FieldParameterDrivenDateIntervalDetector *self);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getStartDriver(t_FieldParameterDrivenDateIntervalDetector *self);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getStopDriver(t_FieldParameterDrivenDateIntervalDetector *self);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__durationDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__medianDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__startDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__stopDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__parameters_(t_FieldParameterDrivenDateIntervalDetector *self, void *data);
        static PyGetSetDef t_FieldParameterDrivenDateIntervalDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldParameterDrivenDateIntervalDetector, durationDriver),
          DECLARE_GET_FIELD(t_FieldParameterDrivenDateIntervalDetector, medianDriver),
          DECLARE_GET_FIELD(t_FieldParameterDrivenDateIntervalDetector, startDriver),
          DECLARE_GET_FIELD(t_FieldParameterDrivenDateIntervalDetector, stopDriver),
          DECLARE_GET_FIELD(t_FieldParameterDrivenDateIntervalDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldParameterDrivenDateIntervalDetector__methods_[] = {
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, getDurationDriver, METH_NOARGS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, getMedianDriver, METH_NOARGS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, getStartDriver, METH_NOARGS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, getStopDriver, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldParameterDrivenDateIntervalDetector)[] = {
          { Py_tp_methods, t_FieldParameterDrivenDateIntervalDetector__methods_ },
          { Py_tp_init, (void *) t_FieldParameterDrivenDateIntervalDetector_init_ },
          { Py_tp_getset, t_FieldParameterDrivenDateIntervalDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldParameterDrivenDateIntervalDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldParameterDrivenDateIntervalDetector, t_FieldParameterDrivenDateIntervalDetector, FieldParameterDrivenDateIntervalDetector);
        PyObject *t_FieldParameterDrivenDateIntervalDetector::wrap_Object(const FieldParameterDrivenDateIntervalDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldParameterDrivenDateIntervalDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldParameterDrivenDateIntervalDetector *self = (t_FieldParameterDrivenDateIntervalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldParameterDrivenDateIntervalDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldParameterDrivenDateIntervalDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldParameterDrivenDateIntervalDetector *self = (t_FieldParameterDrivenDateIntervalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldParameterDrivenDateIntervalDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldParameterDrivenDateIntervalDetector), &PY_TYPE_DEF(FieldParameterDrivenDateIntervalDetector), module, "FieldParameterDrivenDateIntervalDetector", 0);
        }

        void t_FieldParameterDrivenDateIntervalDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "class_", make_descriptor(FieldParameterDrivenDateIntervalDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "wrapfn_", make_descriptor(t_FieldParameterDrivenDateIntervalDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldParameterDrivenDateIntervalDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "DURATION_SUFFIX", make_descriptor(j2p(*FieldParameterDrivenDateIntervalDetector::DURATION_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "MEDIAN_SUFFIX", make_descriptor(j2p(*FieldParameterDrivenDateIntervalDetector::MEDIAN_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "START_SUFFIX", make_descriptor(j2p(*FieldParameterDrivenDateIntervalDetector::START_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "STOP_SUFFIX", make_descriptor(j2p(*FieldParameterDrivenDateIntervalDetector::STOP_SUFFIX)));
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldParameterDrivenDateIntervalDetector::initializeClass, 1)))
            return NULL;
          return t_FieldParameterDrivenDateIntervalDetector::wrap_Object(FieldParameterDrivenDateIntervalDetector(((t_FieldParameterDrivenDateIntervalDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldParameterDrivenDateIntervalDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_of_(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldParameterDrivenDateIntervalDetector_init_(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
              FieldParameterDrivenDateIntervalDetector object((jobject) NULL);

              if (!parseArgs(args, "Kskk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = FieldParameterDrivenDateIntervalDetector(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble a3;
              FieldParameterDrivenDateIntervalDetector object((jobject) NULL);

              if (!parseArgs(args, "KskD", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = FieldParameterDrivenDateIntervalDetector(a0, a1, a2, a3));
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

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_g(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldParameterDrivenDateIntervalDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getDurationDriver(t_FieldParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getDurationDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getMedianDriver(t_FieldParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getMedianDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getStartDriver(t_FieldParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getStartDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getStopDriver(t_FieldParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getStopDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__parameters_(t_FieldParameterDrivenDateIntervalDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__durationDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getDurationDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__medianDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getMedianDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__startDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getStartDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__stopDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getStopDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Data.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Header.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm03::class$ = NULL;
              jmethodID *SsrIgm03::mids$ = NULL;
              bool SsrIgm03::live$ = false;

              jclass SsrIgm03::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_5bcf2de04c91f671] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm03Data_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSsrIgm03Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm03::SsrIgm03(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm03Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_5bcf2de04c91f671, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm03::getSsrIgm03Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm03Data_dbcb8bbac6b35e0d]));
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
              static PyObject *t_SsrIgm03_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm03_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm03_of_(t_SsrIgm03 *self, PyObject *args);
              static int t_SsrIgm03_init_(t_SsrIgm03 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm03_getSsrIgm03Data(t_SsrIgm03 *self);
              static PyObject *t_SsrIgm03_get__ssrIgm03Data(t_SsrIgm03 *self, void *data);
              static PyObject *t_SsrIgm03_get__parameters_(t_SsrIgm03 *self, void *data);
              static PyGetSetDef t_SsrIgm03__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm03, ssrIgm03Data),
                DECLARE_GET_FIELD(t_SsrIgm03, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm03__methods_[] = {
                DECLARE_METHOD(t_SsrIgm03, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm03, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm03, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm03, getSsrIgm03Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm03)[] = {
                { Py_tp_methods, t_SsrIgm03__methods_ },
                { Py_tp_init, (void *) t_SsrIgm03_init_ },
                { Py_tp_getset, t_SsrIgm03__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm03)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm03, t_SsrIgm03, SsrIgm03);
              PyObject *t_SsrIgm03::wrap_Object(const SsrIgm03& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm03::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm03 *self = (t_SsrIgm03 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm03::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm03::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm03 *self = (t_SsrIgm03 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm03::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm03), &PY_TYPE_DEF(SsrIgm03), module, "SsrIgm03", 0);
              }

              void t_SsrIgm03::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03), "class_", make_descriptor(SsrIgm03::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03), "wrapfn_", make_descriptor(t_SsrIgm03::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm03_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm03::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm03::wrap_Object(SsrIgm03(((t_SsrIgm03 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm03_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm03::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm03_of_(t_SsrIgm03 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm03_init_(t_SsrIgm03 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm03Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm03 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm03Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm03(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm03Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm03Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm03_getSsrIgm03Data(t_SsrIgm03 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm03Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm03_get__parameters_(t_SsrIgm03 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm03_get__ssrIgm03Data(t_SsrIgm03 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm03Data());
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
#include "org/orekit/estimation/sequential/AbstractKalmanEstimator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
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
            mids$[mid_getCurrentDate_80e11148db499dda] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_d6ab429752e7c267] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimatedMeasurementsParameters_7c5a416c83e442be] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getOrbitalParametersDrivers_abc0e43715b72da1] = env->getMethodID(cls, "getOrbitalParametersDrivers", "(Z)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPropagationParametersDrivers_abc0e43715b72da1] = env->getMethodID(cls, "getPropagationParametersDrivers", "(Z)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getKalmanEstimation_e73dd18a212e3cd0] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::time::AbsoluteDate AbstractKalmanEstimator::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_80e11148db499dda]));
        }

        jint AbstractKalmanEstimator::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_d6ab429752e7c267]);
        }

        ::org::orekit::utils::ParameterDriversList AbstractKalmanEstimator::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_7c5a416c83e442be]));
        }

        ::org::orekit::utils::ParameterDriversList AbstractKalmanEstimator::getOrbitalParametersDrivers(jboolean a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getOrbitalParametersDrivers_abc0e43715b72da1], a0));
        }

        ::org::hipparchus::linear::RealMatrix AbstractKalmanEstimator::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::RealVector AbstractKalmanEstimator::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_92d7e8d8d3f1dfcf]));
        }

        ::org::orekit::utils::ParameterDriversList AbstractKalmanEstimator::getPropagationParametersDrivers(jboolean a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getPropagationParametersDrivers_abc0e43715b72da1], a0));
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
#include "org/orekit/propagation/analytical/PythonAbstractAnalyticalMatricesHarvester.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalGradientConverter.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/RealMatrix.h"
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
            mids$[mid_init$_d249f4485255ccbf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/AbstractAnalyticalPropagator;Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getGradientConverter_d2718eefd4d5ae94] = env->getMethodID(cls, "getGradientConverter", "()Lorg/orekit/propagation/analytical/AbstractAnalyticalGradientConverter;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractAnalyticalMatricesHarvester::PythonAbstractAnalyticalMatricesHarvester(const ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator & a0, const ::java::lang::String & a1, const ::org::hipparchus::linear::RealMatrix & a2, const ::org::orekit::utils::DoubleArrayDictionary & a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalMatricesHarvester(env->newObject(initializeClass, &mids$, mid_init$_d249f4485255ccbf, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        void PythonAbstractAnalyticalMatricesHarvester::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonAbstractAnalyticalMatricesHarvester::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonAbstractAnalyticalMatricesHarvester::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalMatricesHarvester::mids$[PythonAbstractAnalyticalMatricesHarvester::mid_pythonExtension_42c72b98e3c2e08a]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalMatricesHarvester::mids$[PythonAbstractAnalyticalMatricesHarvester::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractAnalyticalMatricesHarvester::mids$[PythonAbstractAnalyticalMatricesHarvester::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
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
#include "org/hipparchus/special/BesselJ$BesselJResult.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {

      ::java::lang::Class *BesselJ$BesselJResult::class$ = NULL;
      jmethodID *BesselJ$BesselJResult::mids$ = NULL;
      bool BesselJ$BesselJResult::live$ = false;

      jclass BesselJ$BesselJResult::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/special/BesselJ$BesselJResult");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_53d8e8743d02f903] = env->getMethodID(cls, "<init>", "([DI)V");
          mids$[mid_getVals_be783177b060994b] = env->getMethodID(cls, "getVals", "()[D");
          mids$[mid_getnVals_d6ab429752e7c267] = env->getMethodID(cls, "getnVals", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BesselJ$BesselJResult::BesselJ$BesselJResult(const JArray< jdouble > & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_53d8e8743d02f903, a0.this$, a1)) {}

      JArray< jdouble > BesselJ$BesselJResult::getVals() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getVals_be783177b060994b]));
      }

      jint BesselJ$BesselJResult::getnVals() const
      {
        return env->callIntMethod(this$, mids$[mid_getnVals_d6ab429752e7c267]);
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
      static PyObject *t_BesselJ$BesselJResult_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BesselJ$BesselJResult_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BesselJ$BesselJResult_init_(t_BesselJ$BesselJResult *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BesselJ$BesselJResult_getVals(t_BesselJ$BesselJResult *self);
      static PyObject *t_BesselJ$BesselJResult_getnVals(t_BesselJ$BesselJResult *self);
      static PyObject *t_BesselJ$BesselJResult_get__nVals(t_BesselJ$BesselJResult *self, void *data);
      static PyObject *t_BesselJ$BesselJResult_get__vals(t_BesselJ$BesselJResult *self, void *data);
      static PyGetSetDef t_BesselJ$BesselJResult__fields_[] = {
        DECLARE_GET_FIELD(t_BesselJ$BesselJResult, nVals),
        DECLARE_GET_FIELD(t_BesselJ$BesselJResult, vals),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BesselJ$BesselJResult__methods_[] = {
        DECLARE_METHOD(t_BesselJ$BesselJResult, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BesselJ$BesselJResult, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BesselJ$BesselJResult, getVals, METH_NOARGS),
        DECLARE_METHOD(t_BesselJ$BesselJResult, getnVals, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BesselJ$BesselJResult)[] = {
        { Py_tp_methods, t_BesselJ$BesselJResult__methods_ },
        { Py_tp_init, (void *) t_BesselJ$BesselJResult_init_ },
        { Py_tp_getset, t_BesselJ$BesselJResult__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BesselJ$BesselJResult)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BesselJ$BesselJResult, t_BesselJ$BesselJResult, BesselJ$BesselJResult);

      void t_BesselJ$BesselJResult::install(PyObject *module)
      {
        installType(&PY_TYPE(BesselJ$BesselJResult), &PY_TYPE_DEF(BesselJ$BesselJResult), module, "BesselJ$BesselJResult", 0);
      }

      void t_BesselJ$BesselJResult::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ$BesselJResult), "class_", make_descriptor(BesselJ$BesselJResult::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ$BesselJResult), "wrapfn_", make_descriptor(t_BesselJ$BesselJResult::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ$BesselJResult), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BesselJ$BesselJResult_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BesselJ$BesselJResult::initializeClass, 1)))
          return NULL;
        return t_BesselJ$BesselJResult::wrap_Object(BesselJ$BesselJResult(((t_BesselJ$BesselJResult *) arg)->object.this$));
      }
      static PyObject *t_BesselJ$BesselJResult_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BesselJ$BesselJResult::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BesselJ$BesselJResult_init_(t_BesselJ$BesselJResult *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        jint a1;
        BesselJ$BesselJResult object((jobject) NULL);

        if (!parseArgs(args, "[DI", &a0, &a1))
        {
          INT_CALL(object = BesselJ$BesselJResult(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_BesselJ$BesselJResult_getVals(t_BesselJ$BesselJResult *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getVals());
        return result.wrap();
      }

      static PyObject *t_BesselJ$BesselJResult_getnVals(t_BesselJ$BesselJResult *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getnVals());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BesselJ$BesselJResult_get__nVals(t_BesselJ$BesselJResult *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getnVals());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BesselJ$BesselJResult_get__vals(t_BesselJ$BesselJResult *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getVals());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/DormandPrince54FieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
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
            mids$[mid_init$_00877c251fc4db11] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DD[D[D)V");
            mids$[mid_init$_5843d38540497bc2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDDD)V");
            mids$[mid_getA_4d010bb8d4780d51] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_94ed2e0620f8833d] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_94ed2e0620f8833d] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_d6ab429752e7c267] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_createInterpolator_92152f2b7935f473] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/DormandPrince54FieldStateInterpolator;");
            mids$[mid_estimateError_2bb116b8560eb7ee] = env->getMethodID(cls, "estimateError", "([[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince54FieldIntegrator::DormandPrince54FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_00877c251fc4db11, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        DormandPrince54FieldIntegrator::DormandPrince54FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_5843d38540497bc2, a0.this$, a1, a2, a3, a4)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > DormandPrince54FieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_4d010bb8d4780d51]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > DormandPrince54FieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_94ed2e0620f8833d]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > DormandPrince54FieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_94ed2e0620f8833d]));
        }

        jint DormandPrince54FieldIntegrator::getOrder() const
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
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialFunction::class$ = NULL;
        jmethodID *PolynomialFunction::mids$ = NULL;
        bool PolynomialFunction::live$ = false;

        jclass PolynomialFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a71c45509eaf92d1] = env->getMethodID(cls, "<init>", "([D)V");
            mids$[mid_add_6420feed26440ceb] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_antiDerivative_23af9c2be1ac4d50] = env->getMethodID(cls, "antiDerivative", "()Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_degree_d6ab429752e7c267] = env->getMethodID(cls, "degree", "()I");
            mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getCoefficients_be783177b060994b] = env->getMethodID(cls, "getCoefficients", "()[D");
            mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_integrate_82f92590f4247da1] = env->getMethodID(cls, "integrate", "(DD)D");
            mids$[mid_multiply_6420feed26440ceb] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_negate_23af9c2be1ac4d50] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_polynomialDerivative_23af9c2be1ac4d50] = env->getMethodID(cls, "polynomialDerivative", "()Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_subtract_6420feed26440ceb] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a3b854adede8eaaa] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");
            mids$[mid_evaluate_02811febb145516c] = env->getStaticMethodID(cls, "evaluate", "([DD)D");
            mids$[mid_differentiate_51f624c89851da7e] = env->getStaticMethodID(cls, "differentiate", "([D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialFunction::PolynomialFunction(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a71c45509eaf92d1, a0.this$)) {}

        PolynomialFunction PolynomialFunction::add(const PolynomialFunction & a0) const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_add_6420feed26440ceb], a0.this$));
        }

        PolynomialFunction PolynomialFunction::antiDerivative() const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_antiDerivative_23af9c2be1ac4d50]));
        }

        jint PolynomialFunction::degree() const
        {
          return env->callIntMethod(this$, mids$[mid_degree_d6ab429752e7c267]);
        }

        jboolean PolynomialFunction::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
        }

        JArray< jdouble > PolynomialFunction::getCoefficients() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCoefficients_be783177b060994b]));
        }

        jint PolynomialFunction::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
        }

        jdouble PolynomialFunction::integrate(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_integrate_82f92590f4247da1], a0, a1);
        }

        PolynomialFunction PolynomialFunction::multiply(const PolynomialFunction & a0) const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_multiply_6420feed26440ceb], a0.this$));
        }

        PolynomialFunction PolynomialFunction::negate() const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_negate_23af9c2be1ac4d50]));
        }

        PolynomialFunction PolynomialFunction::polynomialDerivative() const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_polynomialDerivative_23af9c2be1ac4d50]));
        }

        PolynomialFunction PolynomialFunction::subtract(const PolynomialFunction & a0) const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_subtract_6420feed26440ceb], a0.this$));
        }

        ::java::lang::String PolynomialFunction::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
        }

        jdouble PolynomialFunction::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::CalculusFieldElement PolynomialFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_a3b854adede8eaaa], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::Derivative PolynomialFunction::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
#include "org/hipparchus/analysis/polynomials/PolynomialFunction$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        static PyObject *t_PolynomialFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialFunction_init_(t_PolynomialFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialFunction_add(t_PolynomialFunction *self, PyObject *arg);
        static PyObject *t_PolynomialFunction_antiDerivative(t_PolynomialFunction *self);
        static PyObject *t_PolynomialFunction_degree(t_PolynomialFunction *self);
        static PyObject *t_PolynomialFunction_equals(t_PolynomialFunction *self, PyObject *args);
        static PyObject *t_PolynomialFunction_getCoefficients(t_PolynomialFunction *self);
        static PyObject *t_PolynomialFunction_hashCode(t_PolynomialFunction *self, PyObject *args);
        static PyObject *t_PolynomialFunction_integrate(t_PolynomialFunction *self, PyObject *args);
        static PyObject *t_PolynomialFunction_multiply(t_PolynomialFunction *self, PyObject *arg);
        static PyObject *t_PolynomialFunction_negate(t_PolynomialFunction *self);
        static PyObject *t_PolynomialFunction_polynomialDerivative(t_PolynomialFunction *self);
        static PyObject *t_PolynomialFunction_subtract(t_PolynomialFunction *self, PyObject *arg);
        static PyObject *t_PolynomialFunction_toString(t_PolynomialFunction *self, PyObject *args);
        static PyObject *t_PolynomialFunction_value(t_PolynomialFunction *self, PyObject *args);
        static PyObject *t_PolynomialFunction_get__coefficients(t_PolynomialFunction *self, void *data);
        static PyGetSetDef t_PolynomialFunction__fields_[] = {
          DECLARE_GET_FIELD(t_PolynomialFunction, coefficients),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolynomialFunction__methods_[] = {
          DECLARE_METHOD(t_PolynomialFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunction, add, METH_O),
          DECLARE_METHOD(t_PolynomialFunction, antiDerivative, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunction, degree, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunction, equals, METH_VARARGS),
          DECLARE_METHOD(t_PolynomialFunction, getCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunction, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_PolynomialFunction, integrate, METH_VARARGS),
          DECLARE_METHOD(t_PolynomialFunction, multiply, METH_O),
          DECLARE_METHOD(t_PolynomialFunction, negate, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunction, polynomialDerivative, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunction, subtract, METH_O),
          DECLARE_METHOD(t_PolynomialFunction, toString, METH_VARARGS),
          DECLARE_METHOD(t_PolynomialFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialFunction)[] = {
          { Py_tp_methods, t_PolynomialFunction__methods_ },
          { Py_tp_init, (void *) t_PolynomialFunction_init_ },
          { Py_tp_getset, t_PolynomialFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialFunction, t_PolynomialFunction, PolynomialFunction);

        void t_PolynomialFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialFunction), &PY_TYPE_DEF(PolynomialFunction), module, "PolynomialFunction", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction), "Parametric", make_descriptor(&PY_TYPE_DEF(PolynomialFunction$Parametric)));
        }

        void t_PolynomialFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction), "class_", make_descriptor(PolynomialFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction), "wrapfn_", make_descriptor(t_PolynomialFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialFunction::initializeClass, 1)))
            return NULL;
          return t_PolynomialFunction::wrap_Object(PolynomialFunction(((t_PolynomialFunction *) arg)->object.this$));
        }
        static PyObject *t_PolynomialFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialFunction_init_(t_PolynomialFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          PolynomialFunction object((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            INT_CALL(object = PolynomialFunction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PolynomialFunction_add(t_PolynomialFunction *self, PyObject *arg)
        {
          PolynomialFunction a0((jobject) NULL);
          PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "k", PolynomialFunction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.add(a0));
            return t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "add", arg);
          return NULL;
        }

        static PyObject *t_PolynomialFunction_antiDerivative(t_PolynomialFunction *self)
        {
          PolynomialFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.antiDerivative());
          return t_PolynomialFunction::wrap_Object(result);
        }

        static PyObject *t_PolynomialFunction_degree(t_PolynomialFunction *self)
        {
          jint result;
          OBJ_CALL(result = self->object.degree());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PolynomialFunction_equals(t_PolynomialFunction *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(PolynomialFunction), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_PolynomialFunction_getCoefficients(t_PolynomialFunction *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoefficients());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunction_hashCode(t_PolynomialFunction *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PolynomialFunction), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_PolynomialFunction_integrate(t_PolynomialFunction *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_PolynomialFunction_multiply(t_PolynomialFunction *self, PyObject *arg)
        {
          PolynomialFunction a0((jobject) NULL);
          PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "k", PolynomialFunction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.multiply(a0));
            return t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", arg);
          return NULL;
        }

        static PyObject *t_PolynomialFunction_negate(t_PolynomialFunction *self)
        {
          PolynomialFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_PolynomialFunction::wrap_Object(result);
        }

        static PyObject *t_PolynomialFunction_polynomialDerivative(t_PolynomialFunction *self)
        {
          PolynomialFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.polynomialDerivative());
          return t_PolynomialFunction::wrap_Object(result);
        }

        static PyObject *t_PolynomialFunction_subtract(t_PolynomialFunction *self, PyObject *arg)
        {
          PolynomialFunction a0((jobject) NULL);
          PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "k", PolynomialFunction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.subtract(a0));
            return t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", arg);
          return NULL;
        }

        static PyObject *t_PolynomialFunction_toString(t_PolynomialFunction *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(PolynomialFunction), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_PolynomialFunction_value(t_PolynomialFunction *self, PyObject *args)
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

        static PyObject *t_PolynomialFunction_get__coefficients(t_PolynomialFunction *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoefficients());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/ChiSquaredDistribution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *ChiSquaredDistribution::class$ = NULL;
        jmethodID *ChiSquaredDistribution::mids$ = NULL;
        bool ChiSquaredDistribution::live$ = false;

        jclass ChiSquaredDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/ChiSquaredDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_bf28ed64d6e8576b] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getDegreesOfFreedom_9981f74b2d109da6] = env->getMethodID(cls, "getDegreesOfFreedom", "()D");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_bf28ed64d6e8576b] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ChiSquaredDistribution::ChiSquaredDistribution(jdouble a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        ChiSquaredDistribution::ChiSquaredDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        jdouble ChiSquaredDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jdouble ChiSquaredDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_bf28ed64d6e8576b], a0);
        }

        jdouble ChiSquaredDistribution::getDegreesOfFreedom() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDegreesOfFreedom_9981f74b2d109da6]);
        }

        jdouble ChiSquaredDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble ChiSquaredDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        jdouble ChiSquaredDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_9981f74b2d109da6]);
        }

        jdouble ChiSquaredDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_9981f74b2d109da6]);
        }

        jboolean ChiSquaredDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
        }

        jdouble ChiSquaredDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_bf28ed64d6e8576b], a0);
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
        static PyObject *t_ChiSquaredDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ChiSquaredDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ChiSquaredDistribution_init_(t_ChiSquaredDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ChiSquaredDistribution_cumulativeProbability(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_density(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_getDegreesOfFreedom(t_ChiSquaredDistribution *self);
        static PyObject *t_ChiSquaredDistribution_getNumericalMean(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_getNumericalVariance(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_getSupportLowerBound(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_getSupportUpperBound(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_isSupportConnected(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_logDensity(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_get__degreesOfFreedom(t_ChiSquaredDistribution *self, void *data);
        static PyObject *t_ChiSquaredDistribution_get__numericalMean(t_ChiSquaredDistribution *self, void *data);
        static PyObject *t_ChiSquaredDistribution_get__numericalVariance(t_ChiSquaredDistribution *self, void *data);
        static PyObject *t_ChiSquaredDistribution_get__supportConnected(t_ChiSquaredDistribution *self, void *data);
        static PyObject *t_ChiSquaredDistribution_get__supportLowerBound(t_ChiSquaredDistribution *self, void *data);
        static PyObject *t_ChiSquaredDistribution_get__supportUpperBound(t_ChiSquaredDistribution *self, void *data);
        static PyGetSetDef t_ChiSquaredDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, degreesOfFreedom),
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, numericalMean),
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, supportConnected),
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ChiSquaredDistribution__methods_[] = {
          DECLARE_METHOD(t_ChiSquaredDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ChiSquaredDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ChiSquaredDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, getDegreesOfFreedom, METH_NOARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ChiSquaredDistribution)[] = {
          { Py_tp_methods, t_ChiSquaredDistribution__methods_ },
          { Py_tp_init, (void *) t_ChiSquaredDistribution_init_ },
          { Py_tp_getset, t_ChiSquaredDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ChiSquaredDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(ChiSquaredDistribution, t_ChiSquaredDistribution, ChiSquaredDistribution);

        void t_ChiSquaredDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(ChiSquaredDistribution), &PY_TYPE_DEF(ChiSquaredDistribution), module, "ChiSquaredDistribution", 0);
        }

        void t_ChiSquaredDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquaredDistribution), "class_", make_descriptor(ChiSquaredDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquaredDistribution), "wrapfn_", make_descriptor(t_ChiSquaredDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquaredDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ChiSquaredDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ChiSquaredDistribution::initializeClass, 1)))
            return NULL;
          return t_ChiSquaredDistribution::wrap_Object(ChiSquaredDistribution(((t_ChiSquaredDistribution *) arg)->object.this$));
        }
        static PyObject *t_ChiSquaredDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ChiSquaredDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ChiSquaredDistribution_init_(t_ChiSquaredDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ChiSquaredDistribution object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = ChiSquaredDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              ChiSquaredDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = ChiSquaredDistribution(a0, a1));
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

        static PyObject *t_ChiSquaredDistribution_cumulativeProbability(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_density(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_getDegreesOfFreedom(t_ChiSquaredDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDegreesOfFreedom());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ChiSquaredDistribution_getNumericalMean(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_getNumericalVariance(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_getSupportLowerBound(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_getSupportUpperBound(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_isSupportConnected(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_logDensity(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_get__degreesOfFreedom(t_ChiSquaredDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDegreesOfFreedom());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ChiSquaredDistribution_get__numericalMean(t_ChiSquaredDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ChiSquaredDistribution_get__numericalVariance(t_ChiSquaredDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ChiSquaredDistribution_get__supportConnected(t_ChiSquaredDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ChiSquaredDistribution_get__supportLowerBound(t_ChiSquaredDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ChiSquaredDistribution_get__supportUpperBound(t_ChiSquaredDistribution *self, void *data)
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
#include "org/orekit/estimation/measurements/filtering/SmoothedObservationDataSet.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *SmoothedObservationDataSet::class$ = NULL;
          jmethodID *SmoothedObservationDataSet::mids$ = NULL;
          bool SmoothedObservationDataSet::live$ = false;

          jclass SmoothedObservationDataSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/SmoothedObservationDataSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_74e3037a52b5523f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");
              mids$[mid_getDataSet_70af854911111baf] = env->getMethodID(cls, "getDataSet", "()Lorg/orekit/files/rinex/observation/ObservationDataSet;");
              mids$[mid_getSmoothedData_2c3e30d0af25da08] = env->getMethodID(cls, "getSmoothedData", "()Lorg/orekit/files/rinex/observation/ObservationData;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SmoothedObservationDataSet::SmoothedObservationDataSet(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationDataSet & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_74e3037a52b5523f, a0.this$, a1.this$)) {}

          ::org::orekit::files::rinex::observation::ObservationDataSet SmoothedObservationDataSet::getDataSet() const
          {
            return ::org::orekit::files::rinex::observation::ObservationDataSet(env->callObjectMethod(this$, mids$[mid_getDataSet_70af854911111baf]));
          }

          ::org::orekit::files::rinex::observation::ObservationData SmoothedObservationDataSet::getSmoothedData() const
          {
            return ::org::orekit::files::rinex::observation::ObservationData(env->callObjectMethod(this$, mids$[mid_getSmoothedData_2c3e30d0af25da08]));
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
          static PyObject *t_SmoothedObservationDataSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SmoothedObservationDataSet_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SmoothedObservationDataSet_init_(t_SmoothedObservationDataSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SmoothedObservationDataSet_getDataSet(t_SmoothedObservationDataSet *self);
          static PyObject *t_SmoothedObservationDataSet_getSmoothedData(t_SmoothedObservationDataSet *self);
          static PyObject *t_SmoothedObservationDataSet_get__dataSet(t_SmoothedObservationDataSet *self, void *data);
          static PyObject *t_SmoothedObservationDataSet_get__smoothedData(t_SmoothedObservationDataSet *self, void *data);
          static PyGetSetDef t_SmoothedObservationDataSet__fields_[] = {
            DECLARE_GET_FIELD(t_SmoothedObservationDataSet, dataSet),
            DECLARE_GET_FIELD(t_SmoothedObservationDataSet, smoothedData),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SmoothedObservationDataSet__methods_[] = {
            DECLARE_METHOD(t_SmoothedObservationDataSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SmoothedObservationDataSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SmoothedObservationDataSet, getDataSet, METH_NOARGS),
            DECLARE_METHOD(t_SmoothedObservationDataSet, getSmoothedData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SmoothedObservationDataSet)[] = {
            { Py_tp_methods, t_SmoothedObservationDataSet__methods_ },
            { Py_tp_init, (void *) t_SmoothedObservationDataSet_init_ },
            { Py_tp_getset, t_SmoothedObservationDataSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SmoothedObservationDataSet)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SmoothedObservationDataSet, t_SmoothedObservationDataSet, SmoothedObservationDataSet);

          void t_SmoothedObservationDataSet::install(PyObject *module)
          {
            installType(&PY_TYPE(SmoothedObservationDataSet), &PY_TYPE_DEF(SmoothedObservationDataSet), module, "SmoothedObservationDataSet", 0);
          }

          void t_SmoothedObservationDataSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothedObservationDataSet), "class_", make_descriptor(SmoothedObservationDataSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothedObservationDataSet), "wrapfn_", make_descriptor(t_SmoothedObservationDataSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothedObservationDataSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SmoothedObservationDataSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SmoothedObservationDataSet::initializeClass, 1)))
              return NULL;
            return t_SmoothedObservationDataSet::wrap_Object(SmoothedObservationDataSet(((t_SmoothedObservationDataSet *) arg)->object.this$));
          }
          static PyObject *t_SmoothedObservationDataSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SmoothedObservationDataSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SmoothedObservationDataSet_init_(t_SmoothedObservationDataSet *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationDataSet a1((jobject) NULL);
            SmoothedObservationDataSet object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SmoothedObservationDataSet(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SmoothedObservationDataSet_getDataSet(t_SmoothedObservationDataSet *self)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataSet());
            return ::org::orekit::files::rinex::observation::t_ObservationDataSet::wrap_Object(result);
          }

          static PyObject *t_SmoothedObservationDataSet_getSmoothedData(t_SmoothedObservationDataSet *self)
          {
            ::org::orekit::files::rinex::observation::ObservationData result((jobject) NULL);
            OBJ_CALL(result = self->object.getSmoothedData());
            return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(result);
          }

          static PyObject *t_SmoothedObservationDataSet_get__dataSet(t_SmoothedObservationDataSet *self, void *data)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataSet());
            return ::org::orekit::files::rinex::observation::t_ObservationDataSet::wrap_Object(value);
          }

          static PyObject *t_SmoothedObservationDataSet_get__smoothedData(t_SmoothedObservationDataSet *self, void *data)
          {
            ::org::orekit::files::rinex::observation::ObservationData value((jobject) NULL);
            OBJ_CALL(value = self->object.getSmoothedData());
            return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/BooleanDetector.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/events/BooleanDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/NegateDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *BooleanDetector::class$ = NULL;
        jmethodID *BooleanDetector::mids$ = NULL;
        bool BooleanDetector::live$ = false;

        jclass BooleanDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/BooleanDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_andCombine_8d4639f238877c49] = env->getStaticMethodID(cls, "andCombine", "([Lorg/orekit/propagation/events/EventDetector;)Lorg/orekit/propagation/events/BooleanDetector;");
            mids$[mid_andCombine_c4345c4de3909bcd] = env->getStaticMethodID(cls, "andCombine", "(Ljava/util/Collection;)Lorg/orekit/propagation/events/BooleanDetector;");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDetectors_d751c1a57012b438] = env->getMethodID(cls, "getDetectors", "()Ljava/util/List;");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_notCombine_d2eee7bb38ccad44] = env->getStaticMethodID(cls, "notCombine", "(Lorg/orekit/propagation/events/EventDetector;)Lorg/orekit/propagation/events/NegateDetector;");
            mids$[mid_orCombine_8d4639f238877c49] = env->getStaticMethodID(cls, "orCombine", "([Lorg/orekit/propagation/events/EventDetector;)Lorg/orekit/propagation/events/BooleanDetector;");
            mids$[mid_orCombine_c4345c4de3909bcd] = env->getStaticMethodID(cls, "orCombine", "(Ljava/util/Collection;)Lorg/orekit/propagation/events/BooleanDetector;");
            mids$[mid_create_7dc99b9ec8add83a] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/BooleanDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BooleanDetector BooleanDetector::andCombine(const JArray< ::org::orekit::propagation::events::EventDetector > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_andCombine_8d4639f238877c49], a0.this$));
        }

        BooleanDetector BooleanDetector::andCombine(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_andCombine_c4345c4de3909bcd], a0.this$));
        }

        jdouble BooleanDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        ::java::util::List BooleanDetector::getDetectors() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDetectors_d751c1a57012b438]));
        }

        void BooleanDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
        }

        ::org::orekit::propagation::events::NegateDetector BooleanDetector::notCombine(const ::org::orekit::propagation::events::EventDetector & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::propagation::events::NegateDetector(env->callStaticObjectMethod(cls, mids$[mid_notCombine_d2eee7bb38ccad44], a0.this$));
        }

        BooleanDetector BooleanDetector::orCombine(const JArray< ::org::orekit::propagation::events::EventDetector > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_orCombine_8d4639f238877c49], a0.this$));
        }

        BooleanDetector BooleanDetector::orCombine(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_orCombine_c4345c4de3909bcd], a0.this$));
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
        static PyObject *t_BooleanDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BooleanDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BooleanDetector_of_(t_BooleanDetector *self, PyObject *args);
        static PyObject *t_BooleanDetector_andCombine(PyTypeObject *type, PyObject *args);
        static PyObject *t_BooleanDetector_g(t_BooleanDetector *self, PyObject *args);
        static PyObject *t_BooleanDetector_getDetectors(t_BooleanDetector *self);
        static PyObject *t_BooleanDetector_init(t_BooleanDetector *self, PyObject *args);
        static PyObject *t_BooleanDetector_notCombine(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BooleanDetector_orCombine(PyTypeObject *type, PyObject *args);
        static PyObject *t_BooleanDetector_get__detectors(t_BooleanDetector *self, void *data);
        static PyObject *t_BooleanDetector_get__parameters_(t_BooleanDetector *self, void *data);
        static PyGetSetDef t_BooleanDetector__fields_[] = {
          DECLARE_GET_FIELD(t_BooleanDetector, detectors),
          DECLARE_GET_FIELD(t_BooleanDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BooleanDetector__methods_[] = {
          DECLARE_METHOD(t_BooleanDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BooleanDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BooleanDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_BooleanDetector, andCombine, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BooleanDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_BooleanDetector, getDetectors, METH_NOARGS),
          DECLARE_METHOD(t_BooleanDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_BooleanDetector, notCombine, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BooleanDetector, orCombine, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BooleanDetector)[] = {
          { Py_tp_methods, t_BooleanDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BooleanDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BooleanDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(BooleanDetector, t_BooleanDetector, BooleanDetector);
        PyObject *t_BooleanDetector::wrap_Object(const BooleanDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BooleanDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BooleanDetector *self = (t_BooleanDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BooleanDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BooleanDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BooleanDetector *self = (t_BooleanDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BooleanDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(BooleanDetector), &PY_TYPE_DEF(BooleanDetector), module, "BooleanDetector", 0);
        }

        void t_BooleanDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BooleanDetector), "class_", make_descriptor(BooleanDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BooleanDetector), "wrapfn_", make_descriptor(t_BooleanDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BooleanDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BooleanDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BooleanDetector::initializeClass, 1)))
            return NULL;
          return t_BooleanDetector::wrap_Object(BooleanDetector(((t_BooleanDetector *) arg)->object.this$));
        }
        static PyObject *t_BooleanDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BooleanDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BooleanDetector_of_(t_BooleanDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BooleanDetector_andCombine(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::org::orekit::propagation::events::EventDetector > a0((jobject) NULL);
              BooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::BooleanDetector::andCombine(a0));
                return t_BooleanDetector::wrap_Object(result);
              }
            }
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              BooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::BooleanDetector::andCombine(a0));
                return t_BooleanDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "andCombine", args);
          return NULL;
        }

        static PyObject *t_BooleanDetector_g(t_BooleanDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BooleanDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_BooleanDetector_getDetectors(t_BooleanDetector *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetectors());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_BooleanDetector_init(t_BooleanDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(BooleanDetector), (PyObject *) self, "init", args, 2);
        }

        static PyObject *t_BooleanDetector_notCombine(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          ::org::orekit::propagation::events::NegateDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            OBJ_CALL(result = ::org::orekit::propagation::events::BooleanDetector::notCombine(a0));
            return ::org::orekit::propagation::events::t_NegateDetector::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "notCombine", arg);
          return NULL;
        }

        static PyObject *t_BooleanDetector_orCombine(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::org::orekit::propagation::events::EventDetector > a0((jobject) NULL);
              BooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::BooleanDetector::orCombine(a0));
                return t_BooleanDetector::wrap_Object(result);
              }
            }
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              BooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::BooleanDetector::orCombine(a0));
                return t_BooleanDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "orCombine", args);
          return NULL;
        }
        static PyObject *t_BooleanDetector_get__parameters_(t_BooleanDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BooleanDetector_get__detectors(t_BooleanDetector *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetectors());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *ModelObserver::class$ = NULL;
        jmethodID *ModelObserver::mids$ = NULL;
        bool ModelObserver::live$ = false;

        jclass ModelObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/ModelObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_modelCalled_2163b5d3b4cfd2eb] = env->getMethodID(cls, "modelCalled", "([Lorg/orekit/orbits/Orbit;Ljava/util/Map;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void ModelObserver::modelCalled(const JArray< ::org::orekit::orbits::Orbit > & a0, const ::java::util::Map & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_modelCalled_2163b5d3b4cfd2eb], a0.this$, a1.this$);
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
      namespace leastsquares {
        static PyObject *t_ModelObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ModelObserver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ModelObserver_modelCalled(t_ModelObserver *self, PyObject *args);

        static PyMethodDef t_ModelObserver__methods_[] = {
          DECLARE_METHOD(t_ModelObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ModelObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ModelObserver, modelCalled, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ModelObserver)[] = {
          { Py_tp_methods, t_ModelObserver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ModelObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ModelObserver, t_ModelObserver, ModelObserver);

        void t_ModelObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(ModelObserver), &PY_TYPE_DEF(ModelObserver), module, "ModelObserver", 0);
        }

        void t_ModelObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ModelObserver), "class_", make_descriptor(ModelObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ModelObserver), "wrapfn_", make_descriptor(t_ModelObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ModelObserver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ModelObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ModelObserver::initializeClass, 1)))
            return NULL;
          return t_ModelObserver::wrap_Object(ModelObserver(((t_ModelObserver *) arg)->object.this$));
        }
        static PyObject *t_ModelObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ModelObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ModelObserver_modelCalled(t_ModelObserver *self, PyObject *args)
        {
          JArray< ::org::orekit::orbits::Orbit > a0((jobject) NULL);
          ::java::util::Map a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "[kK", ::org::orekit::orbits::Orbit::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
          {
            OBJ_CALL(self->object.modelCalled(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "modelCalled", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmClockCorrectionData.h"
#include "org/orekit/gnss/metric/messages/common/ClockCorrection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmClockCorrectionData::class$ = NULL;
              jmethodID *RtcmClockCorrectionData::mids$ = NULL;
              bool RtcmClockCorrectionData::live$ = false;

              jclass RtcmClockCorrectionData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmClockCorrectionData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getClockCorrection_9a94dcb2534bfcee] = env->getMethodID(cls, "getClockCorrection", "()Lorg/orekit/gnss/metric/messages/common/ClockCorrection;");
                  mids$[mid_setClockCorrection_e6ed13e2bb347f8f] = env->getMethodID(cls, "setClockCorrection", "(Lorg/orekit/gnss/metric/messages/common/ClockCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmClockCorrectionData::RtcmClockCorrectionData() : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              ::org::orekit::gnss::metric::messages::common::ClockCorrection RtcmClockCorrectionData::getClockCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::ClockCorrection(env->callObjectMethod(this$, mids$[mid_getClockCorrection_9a94dcb2534bfcee]));
              }

              void RtcmClockCorrectionData::setClockCorrection(const ::org::orekit::gnss::metric::messages::common::ClockCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setClockCorrection_e6ed13e2bb347f8f], a0.this$);
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
              static PyObject *t_RtcmClockCorrectionData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmClockCorrectionData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmClockCorrectionData_init_(t_RtcmClockCorrectionData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmClockCorrectionData_getClockCorrection(t_RtcmClockCorrectionData *self);
              static PyObject *t_RtcmClockCorrectionData_setClockCorrection(t_RtcmClockCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmClockCorrectionData_get__clockCorrection(t_RtcmClockCorrectionData *self, void *data);
              static int t_RtcmClockCorrectionData_set__clockCorrection(t_RtcmClockCorrectionData *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmClockCorrectionData__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmClockCorrectionData, clockCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmClockCorrectionData__methods_[] = {
                DECLARE_METHOD(t_RtcmClockCorrectionData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmClockCorrectionData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmClockCorrectionData, getClockCorrection, METH_NOARGS),
                DECLARE_METHOD(t_RtcmClockCorrectionData, setClockCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmClockCorrectionData)[] = {
                { Py_tp_methods, t_RtcmClockCorrectionData__methods_ },
                { Py_tp_init, (void *) t_RtcmClockCorrectionData_init_ },
                { Py_tp_getset, t_RtcmClockCorrectionData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmClockCorrectionData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData),
                NULL
              };

              DEFINE_TYPE(RtcmClockCorrectionData, t_RtcmClockCorrectionData, RtcmClockCorrectionData);

              void t_RtcmClockCorrectionData::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmClockCorrectionData), &PY_TYPE_DEF(RtcmClockCorrectionData), module, "RtcmClockCorrectionData", 0);
              }

              void t_RtcmClockCorrectionData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmClockCorrectionData), "class_", make_descriptor(RtcmClockCorrectionData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmClockCorrectionData), "wrapfn_", make_descriptor(t_RtcmClockCorrectionData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmClockCorrectionData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmClockCorrectionData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmClockCorrectionData::initializeClass, 1)))
                  return NULL;
                return t_RtcmClockCorrectionData::wrap_Object(RtcmClockCorrectionData(((t_RtcmClockCorrectionData *) arg)->object.this$));
              }
              static PyObject *t_RtcmClockCorrectionData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmClockCorrectionData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmClockCorrectionData_init_(t_RtcmClockCorrectionData *self, PyObject *args, PyObject *kwds)
              {
                RtcmClockCorrectionData object((jobject) NULL);

                INT_CALL(object = RtcmClockCorrectionData());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmClockCorrectionData_getClockCorrection(t_RtcmClockCorrectionData *self)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(result);
              }

              static PyObject *t_RtcmClockCorrectionData_setClockCorrection(t_RtcmClockCorrectionData *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setClockCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setClockCorrection", arg);
                return NULL;
              }

              static PyObject *t_RtcmClockCorrectionData_get__clockCorrection(t_RtcmClockCorrectionData *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(value);
              }
              static int t_RtcmClockCorrectionData_set__clockCorrection(t_RtcmClockCorrectionData *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setClockCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "clockCorrection", arg);
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
#include "org/orekit/forces/radiation/SolarRadiationPressure.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *SolarRadiationPressure::class$ = NULL;
        jmethodID *SolarRadiationPressure::mids$ = NULL;
        bool SolarRadiationPressure::live$ = false;

        jclass SolarRadiationPressure::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/SolarRadiationPressure");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c3e7e621813faa99] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/forces/radiation/RadiationSensitive;)V");
            mids$[mid_init$_c470d00909701359] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/forces/radiation/RadiationSensitive;)V");
            mids$[mid_acceleration_9816b8f76e94356a] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_5e147f44c28a35c9] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getLightingRatio_ac6fccc69d1b2d9e] = env->getMethodID(cls, "getLightingRatio", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getLightingRatio_b443ba1cc794b916] = env->getMethodID(cls, "getLightingRatio", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SolarRadiationPressure::SolarRadiationPressure(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, const ::org::orekit::forces::radiation::RadiationSensitive & a2) : ::org::orekit::forces::radiation::AbstractRadiationForceModel(env->newObject(initializeClass, &mids$, mid_init$_c3e7e621813faa99, a0.this$, a1.this$, a2.this$)) {}

        SolarRadiationPressure::SolarRadiationPressure(jdouble a0, jdouble a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::bodies::OneAxisEllipsoid & a3, const ::org::orekit::forces::radiation::RadiationSensitive & a4) : ::org::orekit::forces::radiation::AbstractRadiationForceModel(env->newObject(initializeClass, &mids$, mid_init$_c470d00909701359, a0, a1, a2.this$, a3.this$, a4.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D SolarRadiationPressure::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_9816b8f76e94356a], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SolarRadiationPressure::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_5e147f44c28a35c9], a0.this$, a1.this$));
        }

        ::org::hipparchus::CalculusFieldElement SolarRadiationPressure::getLightingRatio(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLightingRatio_ac6fccc69d1b2d9e], a0.this$));
        }

        jdouble SolarRadiationPressure::getLightingRatio(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLightingRatio_b443ba1cc794b916], a0.this$);
        }

        ::java::util::List SolarRadiationPressure::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
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
        static PyObject *t_SolarRadiationPressure_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SolarRadiationPressure_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SolarRadiationPressure_init_(t_SolarRadiationPressure *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SolarRadiationPressure_acceleration(t_SolarRadiationPressure *self, PyObject *args);
        static PyObject *t_SolarRadiationPressure_getLightingRatio(t_SolarRadiationPressure *self, PyObject *args);
        static PyObject *t_SolarRadiationPressure_getParametersDrivers(t_SolarRadiationPressure *self, PyObject *args);
        static PyObject *t_SolarRadiationPressure_get__parametersDrivers(t_SolarRadiationPressure *self, void *data);
        static PyGetSetDef t_SolarRadiationPressure__fields_[] = {
          DECLARE_GET_FIELD(t_SolarRadiationPressure, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SolarRadiationPressure__methods_[] = {
          DECLARE_METHOD(t_SolarRadiationPressure, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolarRadiationPressure, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolarRadiationPressure, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_SolarRadiationPressure, getLightingRatio, METH_VARARGS),
          DECLARE_METHOD(t_SolarRadiationPressure, getParametersDrivers, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SolarRadiationPressure)[] = {
          { Py_tp_methods, t_SolarRadiationPressure__methods_ },
          { Py_tp_init, (void *) t_SolarRadiationPressure_init_ },
          { Py_tp_getset, t_SolarRadiationPressure__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SolarRadiationPressure)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::radiation::AbstractRadiationForceModel),
          NULL
        };

        DEFINE_TYPE(SolarRadiationPressure, t_SolarRadiationPressure, SolarRadiationPressure);

        void t_SolarRadiationPressure::install(PyObject *module)
        {
          installType(&PY_TYPE(SolarRadiationPressure), &PY_TYPE_DEF(SolarRadiationPressure), module, "SolarRadiationPressure", 0);
        }

        void t_SolarRadiationPressure::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolarRadiationPressure), "class_", make_descriptor(SolarRadiationPressure::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolarRadiationPressure), "wrapfn_", make_descriptor(t_SolarRadiationPressure::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolarRadiationPressure), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SolarRadiationPressure_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SolarRadiationPressure::initializeClass, 1)))
            return NULL;
          return t_SolarRadiationPressure::wrap_Object(SolarRadiationPressure(((t_SolarRadiationPressure *) arg)->object.this$));
        }
        static PyObject *t_SolarRadiationPressure_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SolarRadiationPressure::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SolarRadiationPressure_init_(t_SolarRadiationPressure *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
              ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
              ::org::orekit::forces::radiation::RadiationSensitive a2((jobject) NULL);
              SolarRadiationPressure object((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = SolarRadiationPressure(a0, a1, a2));
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
              ::org::orekit::forces::radiation::RadiationSensitive a4((jobject) NULL);
              SolarRadiationPressure object((jobject) NULL);

              if (!parseArgs(args, "DDkkk", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = SolarRadiationPressure(a0, a1, a2, a3, a4));
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

        static PyObject *t_SolarRadiationPressure_acceleration(t_SolarRadiationPressure *self, PyObject *args)
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

          return callSuper(PY_TYPE(SolarRadiationPressure), (PyObject *) self, "acceleration", args, 2);
        }

        static PyObject *t_SolarRadiationPressure_getLightingRatio(t_SolarRadiationPressure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
              {
                OBJ_CALL(result = self->object.getLightingRatio(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getLightingRatio(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getLightingRatio", args);
          return NULL;
        }

        static PyObject *t_SolarRadiationPressure_getParametersDrivers(t_SolarRadiationPressure *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(SolarRadiationPressure), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_SolarRadiationPressure_get__parametersDrivers(t_SolarRadiationPressure *self, void *data)
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
#include "org/orekit/bodies/PythonBodyShape.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *PythonBodyShape::class$ = NULL;
      jmethodID *PythonBodyShape::mids$ = NULL;
      bool PythonBodyShape::live$ = false;

      jclass PythonBodyShape::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/PythonBodyShape");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBodyFrame_cb151471db4570f0] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getIntersectionPoint_ade5649cae5a4672] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_getIntersectionPoint_9f0bcc9c00772903] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_projectToGround_28dd2a6cc35491d2] = env->getMethodID(cls, "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_projectToGround_26b1db430bbeb49e] = env->getMethodID(cls, "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_transform_f974aaaf2e73b405] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transform_0bfc32b1890053a9] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_transform_52f3336802c12846] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_transform_82a0f6c52928ba20] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonBodyShape::PythonBodyShape() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonBodyShape::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonBodyShape::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonBodyShape::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
      static PyObject *t_PythonBodyShape_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonBodyShape_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonBodyShape_init_(t_PythonBodyShape *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonBodyShape_finalize(t_PythonBodyShape *self);
      static PyObject *t_PythonBodyShape_pythonExtension(t_PythonBodyShape *self, PyObject *args);
      static jobject JNICALL t_PythonBodyShape_getBodyFrame0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBodyShape_getIntersectionPoint1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
      static jobject JNICALL t_PythonBodyShape_getIntersectionPoint2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
      static jobject JNICALL t_PythonBodyShape_projectToGround3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonBodyShape_projectToGround4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static void JNICALL t_PythonBodyShape_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBodyShape_transform6(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonBodyShape_transform7(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonBodyShape_transform8(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonBodyShape_transform9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static PyObject *t_PythonBodyShape_get__self(t_PythonBodyShape *self, void *data);
      static PyGetSetDef t_PythonBodyShape__fields_[] = {
        DECLARE_GET_FIELD(t_PythonBodyShape, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonBodyShape__methods_[] = {
        DECLARE_METHOD(t_PythonBodyShape, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBodyShape, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBodyShape, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonBodyShape, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonBodyShape)[] = {
        { Py_tp_methods, t_PythonBodyShape__methods_ },
        { Py_tp_init, (void *) t_PythonBodyShape_init_ },
        { Py_tp_getset, t_PythonBodyShape__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonBodyShape)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonBodyShape, t_PythonBodyShape, PythonBodyShape);

      void t_PythonBodyShape::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonBodyShape), &PY_TYPE_DEF(PythonBodyShape), module, "PythonBodyShape", 1);
      }

      void t_PythonBodyShape::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBodyShape), "class_", make_descriptor(PythonBodyShape::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBodyShape), "wrapfn_", make_descriptor(t_PythonBodyShape::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBodyShape), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonBodyShape::initializeClass);
        JNINativeMethod methods[] = {
          { "getBodyFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonBodyShape_getBodyFrame0 },
          { "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;", (void *) t_PythonBodyShape_getIntersectionPoint1 },
          { "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;", (void *) t_PythonBodyShape_getIntersectionPoint2 },
          { "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonBodyShape_projectToGround3 },
          { "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonBodyShape_projectToGround4 },
          { "pythonDecRef", "()V", (void *) t_PythonBodyShape_pythonDecRef5 },
          { "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonBodyShape_transform6 },
          { "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonBodyShape_transform7 },
          { "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;", (void *) t_PythonBodyShape_transform8 },
          { "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;", (void *) t_PythonBodyShape_transform9 },
        };
        env->registerNatives(cls, methods, 10);
      }

      static PyObject *t_PythonBodyShape_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonBodyShape::initializeClass, 1)))
          return NULL;
        return t_PythonBodyShape::wrap_Object(PythonBodyShape(((t_PythonBodyShape *) arg)->object.this$));
      }
      static PyObject *t_PythonBodyShape_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonBodyShape::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonBodyShape_init_(t_PythonBodyShape *self, PyObject *args, PyObject *kwds)
      {
        PythonBodyShape object((jobject) NULL);

        INT_CALL(object = PythonBodyShape());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonBodyShape_finalize(t_PythonBodyShape *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonBodyShape_pythonExtension(t_PythonBodyShape *self, PyObject *args)
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

      static jobject JNICALL t_PythonBodyShape_getBodyFrame0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getBodyFrame", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getBodyFrame", result);
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

      static jobject JNICALL t_PythonBodyShape_getIntersectionPoint1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Line::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Line(a0));
        PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *o3 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a3));
        PyObject *result = PyObject_CallMethod(obj, "getIntersectionPoint", "OOOO", o0, o1, o2, o3);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        Py_DECREF(o3);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &value))
        {
          throwTypeError("getIntersectionPoint", result);
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

      static jobject JNICALL t_PythonBodyShape_getIntersectionPoint2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::FieldGeodeticPoint value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldLine(a0));
        PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *o3 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a3));
        PyObject *result = PyObject_CallMethod(obj, "getIntersectionPoint", "OOOO", o0, o1, o2, o3);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        Py_DECREF(o3);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &value))
        {
          throwTypeError("getIntersectionPoint", result);
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

      static jobject JNICALL t_PythonBodyShape_projectToGround3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(::org::orekit::utils::TimeStampedPVCoordinates(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "projectToGround", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("projectToGround", result);
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

      static jobject JNICALL t_PythonBodyShape_projectToGround4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "projectToGround", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("projectToGround", result);
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

      static void JNICALL t_PythonBodyShape_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonBodyShape_transform6(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(::org::orekit::bodies::FieldGeodeticPoint(a0));
        PyObject *result = PyObject_CallMethod(obj, "transform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
        {
          throwTypeError("transform", result);
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

      static jobject JNICALL t_PythonBodyShape_transform7(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(::org::orekit::bodies::GeodeticPoint(a0));
        PyObject *result = PyObject_CallMethod(obj, "transform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("transform", result);
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

      static jobject JNICALL t_PythonBodyShape_transform8(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::FieldGeodeticPoint value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *o2 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a2));
        PyObject *result = PyObject_CallMethod(obj, "transform", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &value))
        {
          throwTypeError("transform", result);
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

      static jobject JNICALL t_PythonBodyShape_transform9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
        PyObject *result = PyObject_CallMethod(obj, "transform", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &value))
        {
          throwTypeError("transform", result);
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

      static PyObject *t_PythonBodyShape_get__self(t_PythonBodyShape *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/BistaticRangeRateTroposphericDelayModifier.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/BistaticRangeRate.h"
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
              mids$[mid_init$_1f42633debde232b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_modify_0f0ae9411e47b72e] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeRateTroposphericDelayModifier::BistaticRangeRateTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateTroposphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_1f42633debde232b, a0.this$)) {}

          void BistaticRangeRateTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0f0ae9411e47b72e], a0.this$);
          }

          void BistaticRangeRateTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_ecce216dce506020], a0.this$);
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
#include "org/orekit/files/ilrs/CRDHeader$RangeType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CRDHeader$RangeType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDHeader$RangeType::class$ = NULL;
        jmethodID *CRDHeader$RangeType::mids$ = NULL;
        bool CRDHeader$RangeType::live$ = false;
        CRDHeader$RangeType *CRDHeader$RangeType::MIXED = NULL;
        CRDHeader$RangeType *CRDHeader$RangeType::NO_RANGES = NULL;
        CRDHeader$RangeType *CRDHeader$RangeType::ONE_WAY = NULL;
        CRDHeader$RangeType *CRDHeader$RangeType::RECEIVED_ONLY = NULL;
        CRDHeader$RangeType *CRDHeader$RangeType::TWO_WAY = NULL;

        jclass CRDHeader$RangeType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDHeader$RangeType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getIndicator_d6ab429752e7c267] = env->getMethodID(cls, "getIndicator", "()I");
            mids$[mid_getRangeType_f41d5e18b00f518f] = env->getStaticMethodID(cls, "getRangeType", "(I)Lorg/orekit/files/ilrs/CRDHeader$RangeType;");
            mids$[mid_valueOf_3de67b63f6eec261] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/CRDHeader$RangeType;");
            mids$[mid_values_f9318a4b540badf0] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ilrs/CRDHeader$RangeType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MIXED = new CRDHeader$RangeType(env->getStaticObjectField(cls, "MIXED", "Lorg/orekit/files/ilrs/CRDHeader$RangeType;"));
            NO_RANGES = new CRDHeader$RangeType(env->getStaticObjectField(cls, "NO_RANGES", "Lorg/orekit/files/ilrs/CRDHeader$RangeType;"));
            ONE_WAY = new CRDHeader$RangeType(env->getStaticObjectField(cls, "ONE_WAY", "Lorg/orekit/files/ilrs/CRDHeader$RangeType;"));
            RECEIVED_ONLY = new CRDHeader$RangeType(env->getStaticObjectField(cls, "RECEIVED_ONLY", "Lorg/orekit/files/ilrs/CRDHeader$RangeType;"));
            TWO_WAY = new CRDHeader$RangeType(env->getStaticObjectField(cls, "TWO_WAY", "Lorg/orekit/files/ilrs/CRDHeader$RangeType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint CRDHeader$RangeType::getIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getIndicator_d6ab429752e7c267]);
        }

        CRDHeader$RangeType CRDHeader$RangeType::getRangeType(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return CRDHeader$RangeType(env->callStaticObjectMethod(cls, mids$[mid_getRangeType_f41d5e18b00f518f], a0));
        }

        CRDHeader$RangeType CRDHeader$RangeType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return CRDHeader$RangeType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3de67b63f6eec261], a0.this$));
        }

        JArray< CRDHeader$RangeType > CRDHeader$RangeType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< CRDHeader$RangeType >(env->callStaticObjectMethod(cls, mids$[mid_values_f9318a4b540badf0]));
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
        static PyObject *t_CRDHeader$RangeType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDHeader$RangeType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDHeader$RangeType_of_(t_CRDHeader$RangeType *self, PyObject *args);
        static PyObject *t_CRDHeader$RangeType_getIndicator(t_CRDHeader$RangeType *self);
        static PyObject *t_CRDHeader$RangeType_getRangeType(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDHeader$RangeType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_CRDHeader$RangeType_values(PyTypeObject *type);
        static PyObject *t_CRDHeader$RangeType_get__indicator(t_CRDHeader$RangeType *self, void *data);
        static PyObject *t_CRDHeader$RangeType_get__parameters_(t_CRDHeader$RangeType *self, void *data);
        static PyGetSetDef t_CRDHeader$RangeType__fields_[] = {
          DECLARE_GET_FIELD(t_CRDHeader$RangeType, indicator),
          DECLARE_GET_FIELD(t_CRDHeader$RangeType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDHeader$RangeType__methods_[] = {
          DECLARE_METHOD(t_CRDHeader$RangeType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$RangeType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$RangeType, of_, METH_VARARGS),
          DECLARE_METHOD(t_CRDHeader$RangeType, getIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader$RangeType, getRangeType, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$RangeType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$RangeType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDHeader$RangeType)[] = {
          { Py_tp_methods, t_CRDHeader$RangeType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_CRDHeader$RangeType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDHeader$RangeType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(CRDHeader$RangeType, t_CRDHeader$RangeType, CRDHeader$RangeType);
        PyObject *t_CRDHeader$RangeType::wrap_Object(const CRDHeader$RangeType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_CRDHeader$RangeType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_CRDHeader$RangeType *self = (t_CRDHeader$RangeType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_CRDHeader$RangeType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_CRDHeader$RangeType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_CRDHeader$RangeType *self = (t_CRDHeader$RangeType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_CRDHeader$RangeType::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDHeader$RangeType), &PY_TYPE_DEF(CRDHeader$RangeType), module, "CRDHeader$RangeType", 0);
        }

        void t_CRDHeader$RangeType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$RangeType), "class_", make_descriptor(CRDHeader$RangeType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$RangeType), "wrapfn_", make_descriptor(t_CRDHeader$RangeType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$RangeType), "boxfn_", make_descriptor(boxObject));
          env->getClass(CRDHeader$RangeType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$RangeType), "MIXED", make_descriptor(t_CRDHeader$RangeType::wrap_Object(*CRDHeader$RangeType::MIXED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$RangeType), "NO_RANGES", make_descriptor(t_CRDHeader$RangeType::wrap_Object(*CRDHeader$RangeType::NO_RANGES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$RangeType), "ONE_WAY", make_descriptor(t_CRDHeader$RangeType::wrap_Object(*CRDHeader$RangeType::ONE_WAY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$RangeType), "RECEIVED_ONLY", make_descriptor(t_CRDHeader$RangeType::wrap_Object(*CRDHeader$RangeType::RECEIVED_ONLY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$RangeType), "TWO_WAY", make_descriptor(t_CRDHeader$RangeType::wrap_Object(*CRDHeader$RangeType::TWO_WAY)));
        }

        static PyObject *t_CRDHeader$RangeType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDHeader$RangeType::initializeClass, 1)))
            return NULL;
          return t_CRDHeader$RangeType::wrap_Object(CRDHeader$RangeType(((t_CRDHeader$RangeType *) arg)->object.this$));
        }
        static PyObject *t_CRDHeader$RangeType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDHeader$RangeType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_CRDHeader$RangeType_of_(t_CRDHeader$RangeType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_CRDHeader$RangeType_getIndicator(t_CRDHeader$RangeType *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader$RangeType_getRangeType(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          CRDHeader$RangeType result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::CRDHeader$RangeType::getRangeType(a0));
            return t_CRDHeader$RangeType::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getRangeType", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader$RangeType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          CRDHeader$RangeType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::CRDHeader$RangeType::valueOf(a0));
            return t_CRDHeader$RangeType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_CRDHeader$RangeType_values(PyTypeObject *type)
        {
          JArray< CRDHeader$RangeType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::ilrs::CRDHeader$RangeType::values());
          return JArray<jobject>(result.this$).wrap(t_CRDHeader$RangeType::wrap_jobject);
        }
        static PyObject *t_CRDHeader$RangeType_get__parameters_(t_CRDHeader$RangeType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_CRDHeader$RangeType_get__indicator(t_CRDHeader$RangeType *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIndicator());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/UnivariateStatistic.h"
#include "org/hipparchus/stat/descriptive/UnivariateStatistic.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
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
            mids$[mid_copy_fe1447429c89969b] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/UnivariateStatistic;");
            mids$[mid_evaluate_a40ce4fdf6559ac0] = env->getMethodID(cls, "evaluate", "([D)D");
            mids$[mid_evaluate_620ea098e5f0da00] = env->getMethodID(cls, "evaluate", "([DII)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateStatistic UnivariateStatistic::copy() const
        {
          return UnivariateStatistic(env->callObjectMethod(this$, mids$[mid_copy_fe1447429c89969b]));
        }

        jdouble UnivariateStatistic::evaluate(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_a40ce4fdf6559ac0], a0.this$);
        }

        jdouble UnivariateStatistic::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_620ea098e5f0da00], a0.this$, a1, a2);
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
#include "org/hipparchus/util/Incrementor.h"
#include "org/hipparchus/util/Incrementor$MaxCountExceededCallback.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Incrementor.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Incrementor::class$ = NULL;
      jmethodID *Incrementor::mids$ = NULL;
      bool Incrementor::live$ = false;

      jclass Incrementor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Incrementor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_b104bfda2e8f97e8] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/util/Incrementor$MaxCountExceededCallback;)V");
          mids$[mid_canIncrement_eee3de00fe971136] = env->getMethodID(cls, "canIncrement", "()Z");
          mids$[mid_canIncrement_e24caac814db1df5] = env->getMethodID(cls, "canIncrement", "(I)Z");
          mids$[mid_getCount_d6ab429752e7c267] = env->getMethodID(cls, "getCount", "()I");
          mids$[mid_getMaximalCount_d6ab429752e7c267] = env->getMethodID(cls, "getMaximalCount", "()I");
          mids$[mid_increment_ff7cb6c242604316] = env->getMethodID(cls, "increment", "()V");
          mids$[mid_increment_8fd427ab23829bf5] = env->getMethodID(cls, "increment", "(I)V");
          mids$[mid_reset_ff7cb6c242604316] = env->getMethodID(cls, "reset", "()V");
          mids$[mid_withCallback_b05b4a14f5dc90d6] = env->getMethodID(cls, "withCallback", "(Lorg/hipparchus/util/Incrementor$MaxCountExceededCallback;)Lorg/hipparchus/util/Incrementor;");
          mids$[mid_withCount_113e89b12b8bfc74] = env->getMethodID(cls, "withCount", "(I)Lorg/hipparchus/util/Incrementor;");
          mids$[mid_withMaximalCount_113e89b12b8bfc74] = env->getMethodID(cls, "withMaximalCount", "(I)Lorg/hipparchus/util/Incrementor;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Incrementor::Incrementor() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      Incrementor::Incrementor(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      Incrementor::Incrementor(jint a0, const ::org::hipparchus::util::Incrementor$MaxCountExceededCallback & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b104bfda2e8f97e8, a0, a1.this$)) {}

      jboolean Incrementor::canIncrement() const
      {
        return env->callBooleanMethod(this$, mids$[mid_canIncrement_eee3de00fe971136]);
      }

      jboolean Incrementor::canIncrement(jint a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_canIncrement_e24caac814db1df5], a0);
      }

      jint Incrementor::getCount() const
      {
        return env->callIntMethod(this$, mids$[mid_getCount_d6ab429752e7c267]);
      }

      jint Incrementor::getMaximalCount() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaximalCount_d6ab429752e7c267]);
      }

      void Incrementor::increment() const
      {
        env->callVoidMethod(this$, mids$[mid_increment_ff7cb6c242604316]);
      }

      void Incrementor::increment(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_increment_8fd427ab23829bf5], a0);
      }

      void Incrementor::reset() const
      {
        env->callVoidMethod(this$, mids$[mid_reset_ff7cb6c242604316]);
      }

      Incrementor Incrementor::withCallback(const ::org::hipparchus::util::Incrementor$MaxCountExceededCallback & a0) const
      {
        return Incrementor(env->callObjectMethod(this$, mids$[mid_withCallback_b05b4a14f5dc90d6], a0.this$));
      }

      Incrementor Incrementor::withCount(jint a0) const
      {
        return Incrementor(env->callObjectMethod(this$, mids$[mid_withCount_113e89b12b8bfc74], a0));
      }

      Incrementor Incrementor::withMaximalCount(jint a0) const
      {
        return Incrementor(env->callObjectMethod(this$, mids$[mid_withMaximalCount_113e89b12b8bfc74], a0));
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
      static PyObject *t_Incrementor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Incrementor_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Incrementor_init_(t_Incrementor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Incrementor_canIncrement(t_Incrementor *self, PyObject *args);
      static PyObject *t_Incrementor_getCount(t_Incrementor *self);
      static PyObject *t_Incrementor_getMaximalCount(t_Incrementor *self);
      static PyObject *t_Incrementor_increment(t_Incrementor *self, PyObject *args);
      static PyObject *t_Incrementor_reset(t_Incrementor *self);
      static PyObject *t_Incrementor_withCallback(t_Incrementor *self, PyObject *arg);
      static PyObject *t_Incrementor_withCount(t_Incrementor *self, PyObject *arg);
      static PyObject *t_Incrementor_withMaximalCount(t_Incrementor *self, PyObject *arg);
      static PyObject *t_Incrementor_get__count(t_Incrementor *self, void *data);
      static PyObject *t_Incrementor_get__maximalCount(t_Incrementor *self, void *data);
      static PyGetSetDef t_Incrementor__fields_[] = {
        DECLARE_GET_FIELD(t_Incrementor, count),
        DECLARE_GET_FIELD(t_Incrementor, maximalCount),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Incrementor__methods_[] = {
        DECLARE_METHOD(t_Incrementor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Incrementor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Incrementor, canIncrement, METH_VARARGS),
        DECLARE_METHOD(t_Incrementor, getCount, METH_NOARGS),
        DECLARE_METHOD(t_Incrementor, getMaximalCount, METH_NOARGS),
        DECLARE_METHOD(t_Incrementor, increment, METH_VARARGS),
        DECLARE_METHOD(t_Incrementor, reset, METH_NOARGS),
        DECLARE_METHOD(t_Incrementor, withCallback, METH_O),
        DECLARE_METHOD(t_Incrementor, withCount, METH_O),
        DECLARE_METHOD(t_Incrementor, withMaximalCount, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Incrementor)[] = {
        { Py_tp_methods, t_Incrementor__methods_ },
        { Py_tp_init, (void *) t_Incrementor_init_ },
        { Py_tp_getset, t_Incrementor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Incrementor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Incrementor, t_Incrementor, Incrementor);

      void t_Incrementor::install(PyObject *module)
      {
        installType(&PY_TYPE(Incrementor), &PY_TYPE_DEF(Incrementor), module, "Incrementor", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor), "MaxCountExceededCallback", make_descriptor(&PY_TYPE_DEF(Incrementor$MaxCountExceededCallback)));
      }

      void t_Incrementor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor), "class_", make_descriptor(Incrementor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor), "wrapfn_", make_descriptor(t_Incrementor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Incrementor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Incrementor::initializeClass, 1)))
          return NULL;
        return t_Incrementor::wrap_Object(Incrementor(((t_Incrementor *) arg)->object.this$));
      }
      static PyObject *t_Incrementor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Incrementor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Incrementor_init_(t_Incrementor *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Incrementor object((jobject) NULL);

            INT_CALL(object = Incrementor());
            self->object = object;
            break;
          }
         case 1:
          {
            jint a0;
            Incrementor object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Incrementor(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::hipparchus::util::Incrementor$MaxCountExceededCallback a1((jobject) NULL);
            Incrementor object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::util::Incrementor$MaxCountExceededCallback::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Incrementor(a0, a1));
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

      static PyObject *t_Incrementor_canIncrement(t_Incrementor *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jboolean result;
            OBJ_CALL(result = self->object.canIncrement());
            Py_RETURN_BOOL(result);
          }
          break;
         case 1:
          {
            jint a0;
            jboolean result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.canIncrement(a0));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "canIncrement", args);
        return NULL;
      }

      static PyObject *t_Incrementor_getCount(t_Incrementor *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCount());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Incrementor_getMaximalCount(t_Incrementor *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaximalCount());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Incrementor_increment(t_Incrementor *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(self->object.increment());
            Py_RETURN_NONE;
          }
          break;
         case 1:
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "increment", args);
        return NULL;
      }

      static PyObject *t_Incrementor_reset(t_Incrementor *self)
      {
        OBJ_CALL(self->object.reset());
        Py_RETURN_NONE;
      }

      static PyObject *t_Incrementor_withCallback(t_Incrementor *self, PyObject *arg)
      {
        ::org::hipparchus::util::Incrementor$MaxCountExceededCallback a0((jobject) NULL);
        Incrementor result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::Incrementor$MaxCountExceededCallback::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.withCallback(a0));
          return t_Incrementor::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withCallback", arg);
        return NULL;
      }

      static PyObject *t_Incrementor_withCount(t_Incrementor *self, PyObject *arg)
      {
        jint a0;
        Incrementor result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withCount(a0));
          return t_Incrementor::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withCount", arg);
        return NULL;
      }

      static PyObject *t_Incrementor_withMaximalCount(t_Incrementor *self, PyObject *arg)
      {
        jint a0;
        Incrementor result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withMaximalCount(a0));
          return t_Incrementor::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMaximalCount", arg);
        return NULL;
      }

      static PyObject *t_Incrementor_get__count(t_Incrementor *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCount());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Incrementor_get__maximalCount(t_Incrementor *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaximalCount());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/BigFraction$ConvergenceTest.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *BigFraction$ConvergenceTest::class$ = NULL;
      jmethodID *BigFraction$ConvergenceTest::mids$ = NULL;
      bool BigFraction$ConvergenceTest::live$ = false;

      jclass BigFraction$ConvergenceTest::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/BigFraction$ConvergenceTest");

          mids$ = new jmethodID[max_mid];
          mids$[mid_test_cd8cadcdf0ea0f3c] = env->getMethodID(cls, "test", "(JJ)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean BigFraction$ConvergenceTest::test(jlong a0, jlong a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_test_cd8cadcdf0ea0f3c], a0, a1);
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
      static PyObject *t_BigFraction$ConvergenceTest_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFraction$ConvergenceTest_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFraction$ConvergenceTest_test(t_BigFraction$ConvergenceTest *self, PyObject *args);

      static PyMethodDef t_BigFraction$ConvergenceTest__methods_[] = {
        DECLARE_METHOD(t_BigFraction$ConvergenceTest, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFraction$ConvergenceTest, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFraction$ConvergenceTest, test, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigFraction$ConvergenceTest)[] = {
        { Py_tp_methods, t_BigFraction$ConvergenceTest__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigFraction$ConvergenceTest)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BigFraction$ConvergenceTest, t_BigFraction$ConvergenceTest, BigFraction$ConvergenceTest);

      void t_BigFraction$ConvergenceTest::install(PyObject *module)
      {
        installType(&PY_TYPE(BigFraction$ConvergenceTest), &PY_TYPE_DEF(BigFraction$ConvergenceTest), module, "BigFraction$ConvergenceTest", 0);
      }

      void t_BigFraction$ConvergenceTest::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction$ConvergenceTest), "class_", make_descriptor(BigFraction$ConvergenceTest::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction$ConvergenceTest), "wrapfn_", make_descriptor(t_BigFraction$ConvergenceTest::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction$ConvergenceTest), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BigFraction$ConvergenceTest_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigFraction$ConvergenceTest::initializeClass, 1)))
          return NULL;
        return t_BigFraction$ConvergenceTest::wrap_Object(BigFraction$ConvergenceTest(((t_BigFraction$ConvergenceTest *) arg)->object.this$));
      }
      static PyObject *t_BigFraction$ConvergenceTest_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigFraction$ConvergenceTest::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BigFraction$ConvergenceTest_test(t_BigFraction$ConvergenceTest *self, PyObject *args)
      {
        jlong a0;
        jlong a1;
        jboolean result;

        if (!parseArgs(args, "JJ", &a0, &a1))
        {
          OBJ_CALL(result = self->object.test(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "test", args);
        return NULL;
      }
    }
  }
}
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
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      VariationalEquation$MismatchedEquations::VariationalEquation$MismatchedEquations() : ::org::hipparchus::exception::MathIllegalArgumentException(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}
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
#include "org/hipparchus/geometry/spherical/oned/ArcsSet$Split.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/partitioning/Side.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *ArcsSet$Split::class$ = NULL;
          jmethodID *ArcsSet$Split::mids$ = NULL;
          bool ArcsSet$Split::live$ = false;

          jclass ArcsSet$Split::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/ArcsSet$Split");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getMinus_04cfacb89407dcdc] = env->getMethodID(cls, "getMinus", "()Lorg/hipparchus/geometry/spherical/oned/ArcsSet;");
              mids$[mid_getPlus_04cfacb89407dcdc] = env->getMethodID(cls, "getPlus", "()Lorg/hipparchus/geometry/spherical/oned/ArcsSet;");
              mids$[mid_getSide_fafa1267e93af015] = env->getMethodID(cls, "getSide", "()Lorg/hipparchus/geometry/partitioning/Side;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::spherical::oned::ArcsSet ArcsSet$Split::getMinus() const
          {
            return ::org::hipparchus::geometry::spherical::oned::ArcsSet(env->callObjectMethod(this$, mids$[mid_getMinus_04cfacb89407dcdc]));
          }

          ::org::hipparchus::geometry::spherical::oned::ArcsSet ArcsSet$Split::getPlus() const
          {
            return ::org::hipparchus::geometry::spherical::oned::ArcsSet(env->callObjectMethod(this$, mids$[mid_getPlus_04cfacb89407dcdc]));
          }

          ::org::hipparchus::geometry::partitioning::Side ArcsSet$Split::getSide() const
          {
            return ::org::hipparchus::geometry::partitioning::Side(env->callObjectMethod(this$, mids$[mid_getSide_fafa1267e93af015]));
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
          static PyObject *t_ArcsSet$Split_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet$Split_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet$Split_of_(t_ArcsSet$Split *self, PyObject *args);
          static PyObject *t_ArcsSet$Split_getMinus(t_ArcsSet$Split *self);
          static PyObject *t_ArcsSet$Split_getPlus(t_ArcsSet$Split *self);
          static PyObject *t_ArcsSet$Split_getSide(t_ArcsSet$Split *self);
          static PyObject *t_ArcsSet$Split_get__minus(t_ArcsSet$Split *self, void *data);
          static PyObject *t_ArcsSet$Split_get__plus(t_ArcsSet$Split *self, void *data);
          static PyObject *t_ArcsSet$Split_get__side(t_ArcsSet$Split *self, void *data);
          static PyObject *t_ArcsSet$Split_get__parameters_(t_ArcsSet$Split *self, void *data);
          static PyGetSetDef t_ArcsSet$Split__fields_[] = {
            DECLARE_GET_FIELD(t_ArcsSet$Split, minus),
            DECLARE_GET_FIELD(t_ArcsSet$Split, plus),
            DECLARE_GET_FIELD(t_ArcsSet$Split, side),
            DECLARE_GET_FIELD(t_ArcsSet$Split, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ArcsSet$Split__methods_[] = {
            DECLARE_METHOD(t_ArcsSet$Split, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet$Split, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet$Split, of_, METH_VARARGS),
            DECLARE_METHOD(t_ArcsSet$Split, getMinus, METH_NOARGS),
            DECLARE_METHOD(t_ArcsSet$Split, getPlus, METH_NOARGS),
            DECLARE_METHOD(t_ArcsSet$Split, getSide, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ArcsSet$Split)[] = {
            { Py_tp_methods, t_ArcsSet$Split__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ArcsSet$Split__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ArcsSet$Split)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ArcsSet$Split, t_ArcsSet$Split, ArcsSet$Split);
          PyObject *t_ArcsSet$Split::wrap_Object(const ArcsSet$Split& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet$Split::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet$Split *self = (t_ArcsSet$Split *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_ArcsSet$Split::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet$Split::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet$Split *self = (t_ArcsSet$Split *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_ArcsSet$Split::install(PyObject *module)
          {
            installType(&PY_TYPE(ArcsSet$Split), &PY_TYPE_DEF(ArcsSet$Split), module, "ArcsSet$Split", 0);
          }

          void t_ArcsSet$Split::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$Split), "class_", make_descriptor(ArcsSet$Split::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$Split), "wrapfn_", make_descriptor(t_ArcsSet$Split::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$Split), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ArcsSet$Split_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ArcsSet$Split::initializeClass, 1)))
              return NULL;
            return t_ArcsSet$Split::wrap_Object(ArcsSet$Split(((t_ArcsSet$Split *) arg)->object.this$));
          }
          static PyObject *t_ArcsSet$Split_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ArcsSet$Split::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ArcsSet$Split_of_(t_ArcsSet$Split *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_ArcsSet$Split_getMinus(t_ArcsSet$Split *self)
          {
            ::org::hipparchus::geometry::spherical::oned::ArcsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.getMinus());
            return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet::wrap_Object(result);
          }

          static PyObject *t_ArcsSet$Split_getPlus(t_ArcsSet$Split *self)
          {
            ::org::hipparchus::geometry::spherical::oned::ArcsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.getPlus());
            return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet::wrap_Object(result);
          }

          static PyObject *t_ArcsSet$Split_getSide(t_ArcsSet$Split *self)
          {
            ::org::hipparchus::geometry::partitioning::Side result((jobject) NULL);
            OBJ_CALL(result = self->object.getSide());
            return ::org::hipparchus::geometry::partitioning::t_Side::wrap_Object(result);
          }
          static PyObject *t_ArcsSet$Split_get__parameters_(t_ArcsSet$Split *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_ArcsSet$Split_get__minus(t_ArcsSet$Split *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::oned::ArcsSet value((jobject) NULL);
            OBJ_CALL(value = self->object.getMinus());
            return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet::wrap_Object(value);
          }

          static PyObject *t_ArcsSet$Split_get__plus(t_ArcsSet$Split *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::oned::ArcsSet value((jobject) NULL);
            OBJ_CALL(value = self->object.getPlus());
            return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet::wrap_Object(value);
          }

          static PyObject *t_ArcsSet$Split_get__side(t_ArcsSet$Split *self, void *data)
          {
            ::org::hipparchus::geometry::partitioning::Side value((jobject) NULL);
            OBJ_CALL(value = self->object.getSide());
            return ::org::hipparchus::geometry::partitioning::t_Side::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/ComparableMeasurement.h"
#include "org/orekit/estimation/measurements/ComparableMeasurement.h"
#include "java/lang/Class.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *ComparableMeasurement::class$ = NULL;
        jmethodID *ComparableMeasurement::mids$ = NULL;
        bool ComparableMeasurement::live$ = false;

        jclass ComparableMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/ComparableMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_compareTo_abfadd9b92595ff6] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/estimation/measurements/ComparableMeasurement;)I");
            mids$[mid_getObservedValue_be783177b060994b] = env->getMethodID(cls, "getObservedValue", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint ComparableMeasurement::compareTo(const ComparableMeasurement & a0) const
        {
          return env->callIntMethod(this$, mids$[mid_compareTo_abfadd9b92595ff6], a0.this$);
        }

        JArray< jdouble > ComparableMeasurement::getObservedValue() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getObservedValue_be783177b060994b]));
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
        static PyObject *t_ComparableMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ComparableMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ComparableMeasurement_compareTo(t_ComparableMeasurement *self, PyObject *arg);
        static PyObject *t_ComparableMeasurement_getObservedValue(t_ComparableMeasurement *self);
        static PyObject *t_ComparableMeasurement_get__observedValue(t_ComparableMeasurement *self, void *data);
        static PyGetSetDef t_ComparableMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_ComparableMeasurement, observedValue),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ComparableMeasurement__methods_[] = {
          DECLARE_METHOD(t_ComparableMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ComparableMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ComparableMeasurement, compareTo, METH_O),
          DECLARE_METHOD(t_ComparableMeasurement, getObservedValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ComparableMeasurement)[] = {
          { Py_tp_methods, t_ComparableMeasurement__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ComparableMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ComparableMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
          NULL
        };

        DEFINE_TYPE(ComparableMeasurement, t_ComparableMeasurement, ComparableMeasurement);

        void t_ComparableMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(ComparableMeasurement), &PY_TYPE_DEF(ComparableMeasurement), module, "ComparableMeasurement", 0);
        }

        void t_ComparableMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ComparableMeasurement), "class_", make_descriptor(ComparableMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ComparableMeasurement), "wrapfn_", make_descriptor(t_ComparableMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ComparableMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ComparableMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ComparableMeasurement::initializeClass, 1)))
            return NULL;
          return t_ComparableMeasurement::wrap_Object(ComparableMeasurement(((t_ComparableMeasurement *) arg)->object.this$));
        }
        static PyObject *t_ComparableMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ComparableMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ComparableMeasurement_compareTo(t_ComparableMeasurement *self, PyObject *arg)
        {
          ComparableMeasurement a0((jobject) NULL);
          jint result;

          if (!parseArg(arg, "k", ComparableMeasurement::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.compareTo(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
          return NULL;
        }

        static PyObject *t_ComparableMeasurement_getObservedValue(t_ComparableMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getObservedValue());
          return result.wrap();
        }

        static PyObject *t_ComparableMeasurement_get__observedValue(t_ComparableMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getObservedValue());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonTimeInterpolator.h"
#include "java/util/stream/Stream.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeInterpolator::class$ = NULL;
      jmethodID *PythonTimeInterpolator::mids$ = NULL;
      bool PythonTimeInterpolator::live$ = false;

      jclass PythonTimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getExtrapolationThreshold_9981f74b2d109da6] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_d6ab429752e7c267] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_d751c1a57012b438] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_1ab634d5d296a86b] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/TimeInterpolator;");
          mids$[mid_interpolate_83796f1a07da3138] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/TimeInterpolator;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeInterpolator::PythonTimeInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonTimeInterpolator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonTimeInterpolator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonTimeInterpolator::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
      static PyObject *t_PythonTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeInterpolator_of_(t_PythonTimeInterpolator *self, PyObject *args);
      static int t_PythonTimeInterpolator_init_(t_PythonTimeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeInterpolator_finalize(t_PythonTimeInterpolator *self);
      static PyObject *t_PythonTimeInterpolator_pythonExtension(t_PythonTimeInterpolator *self, PyObject *args);
      static jdouble JNICALL t_PythonTimeInterpolator_getExtrapolationThreshold0(JNIEnv *jenv, jobject jobj);
      static jint JNICALL t_PythonTimeInterpolator_getNbInterpolationPoints1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeInterpolator_getSubInterpolators2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeInterpolator_interpolate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonTimeInterpolator_interpolate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonTimeInterpolator_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeInterpolator_get__self(t_PythonTimeInterpolator *self, void *data);
      static PyObject *t_PythonTimeInterpolator_get__parameters_(t_PythonTimeInterpolator *self, void *data);
      static PyGetSetDef t_PythonTimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeInterpolator, self),
        DECLARE_GET_FIELD(t_PythonTimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_PythonTimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonTimeInterpolator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeInterpolator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeInterpolator)[] = {
        { Py_tp_methods, t_PythonTimeInterpolator__methods_ },
        { Py_tp_init, (void *) t_PythonTimeInterpolator_init_ },
        { Py_tp_getset, t_PythonTimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeInterpolator, t_PythonTimeInterpolator, PythonTimeInterpolator);
      PyObject *t_PythonTimeInterpolator::wrap_Object(const PythonTimeInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeInterpolator *self = (t_PythonTimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonTimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeInterpolator *self = (t_PythonTimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonTimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeInterpolator), &PY_TYPE_DEF(PythonTimeInterpolator), module, "PythonTimeInterpolator", 1);
      }

      void t_PythonTimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeInterpolator), "class_", make_descriptor(PythonTimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeInterpolator), "wrapfn_", make_descriptor(t_PythonTimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeInterpolator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeInterpolator::initializeClass);
        JNINativeMethod methods[] = {
          { "getExtrapolationThreshold", "()D", (void *) t_PythonTimeInterpolator_getExtrapolationThreshold0 },
          { "getNbInterpolationPoints", "()I", (void *) t_PythonTimeInterpolator_getNbInterpolationPoints1 },
          { "getSubInterpolators", "()Ljava/util/List;", (void *) t_PythonTimeInterpolator_getSubInterpolators2 },
          { "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/TimeInterpolator;", (void *) t_PythonTimeInterpolator_interpolate3 },
          { "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/TimeInterpolator;", (void *) t_PythonTimeInterpolator_interpolate4 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeInterpolator_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_PythonTimeInterpolator::wrap_Object(PythonTimeInterpolator(((t_PythonTimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonTimeInterpolator_of_(t_PythonTimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonTimeInterpolator_init_(t_PythonTimeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeInterpolator object((jobject) NULL);

        INT_CALL(object = PythonTimeInterpolator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeInterpolator_finalize(t_PythonTimeInterpolator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeInterpolator_pythonExtension(t_PythonTimeInterpolator *self, PyObject *args)
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

      static jdouble JNICALL t_PythonTimeInterpolator_getExtrapolationThreshold0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getExtrapolationThreshold", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getExtrapolationThreshold", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jint JNICALL t_PythonTimeInterpolator_getNbInterpolationPoints1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jint value;
        PyObject *result = PyObject_CallMethod(obj, "getNbInterpolationPoints", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "I", &value))
        {
          throwTypeError("getNbInterpolationPoints", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jint) 0;
      }

      static jobject JNICALL t_PythonTimeInterpolator_getSubInterpolators2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSubInterpolators", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getSubInterpolators", result);
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

      static jobject JNICALL t_PythonTimeInterpolator_interpolate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeInterpolator value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::java::util::t_Collection::wrap_Object(::java::util::Collection(a1));
        PyObject *result = PyObject_CallMethod(obj, "interpolate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeInterpolator::initializeClass, &value))
        {
          throwTypeError("interpolate", result);
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

      static jobject JNICALL t_PythonTimeInterpolator_interpolate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeInterpolator value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::java::util::stream::t_Stream::wrap_Object(::java::util::stream::Stream(a1));
        PyObject *result = PyObject_CallMethod(obj, "interpolate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeInterpolator::initializeClass, &value))
        {
          throwTypeError("interpolate", result);
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

      static void JNICALL t_PythonTimeInterpolator_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeInterpolator_get__self(t_PythonTimeInterpolator *self, void *data)
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
      static PyObject *t_PythonTimeInterpolator_get__parameters_(t_PythonTimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/MultipleShooting.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *MultipleShooting::class$ = NULL;
      jmethodID *MultipleShooting::mids$ = NULL;
      bool MultipleShooting::live$ = false;

      jclass MultipleShooting::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/MultipleShooting");

          mids$ = new jmethodID[max_mid];
          mids$[mid_compute_d751c1a57012b438] = env->getMethodID(cls, "compute", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List MultipleShooting::compute() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_compute_d751c1a57012b438]));
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
      static PyObject *t_MultipleShooting_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultipleShooting_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultipleShooting_compute(t_MultipleShooting *self);

      static PyMethodDef t_MultipleShooting__methods_[] = {
        DECLARE_METHOD(t_MultipleShooting, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultipleShooting, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultipleShooting, compute, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultipleShooting)[] = {
        { Py_tp_methods, t_MultipleShooting__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultipleShooting)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultipleShooting, t_MultipleShooting, MultipleShooting);

      void t_MultipleShooting::install(PyObject *module)
      {
        installType(&PY_TYPE(MultipleShooting), &PY_TYPE_DEF(MultipleShooting), module, "MultipleShooting", 0);
      }

      void t_MultipleShooting::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooting), "class_", make_descriptor(MultipleShooting::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooting), "wrapfn_", make_descriptor(t_MultipleShooting::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooting), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultipleShooting_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultipleShooting::initializeClass, 1)))
          return NULL;
        return t_MultipleShooting::wrap_Object(MultipleShooting(((t_MultipleShooting *) arg)->object.this$));
      }
      static PyObject *t_MultipleShooting_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultipleShooting::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultipleShooting_compute(t_MultipleShooting *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.compute());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(SpacecraftState));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/regression/SimpleRegression.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/regression/RegressionResults.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/regression/UpdatingMultipleLinearRegression.h"
#include "org/hipparchus/stat/regression/SimpleRegression.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *SimpleRegression::class$ = NULL;
        jmethodID *SimpleRegression::mids$ = NULL;
        bool SimpleRegression::live$ = false;

        jclass SimpleRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/SimpleRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_b35db77cae58639e] = env->getMethodID(cls, "<init>", "(Z)V");
            mids$[mid_addData_11ecdbb5af7ed67d] = env->getMethodID(cls, "addData", "([[D)V");
            mids$[mid_addData_13edac039e8cc967] = env->getMethodID(cls, "addData", "(DD)V");
            mids$[mid_addObservation_19a01fdb4baa56b0] = env->getMethodID(cls, "addObservation", "([DD)V");
            mids$[mid_addObservations_f1517d9a21833345] = env->getMethodID(cls, "addObservations", "([[D[D)V");
            mids$[mid_append_039d27bf3973f473] = env->getMethodID(cls, "append", "(Lorg/hipparchus/stat/regression/SimpleRegression;)V");
            mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_getIntercept_9981f74b2d109da6] = env->getMethodID(cls, "getIntercept", "()D");
            mids$[mid_getInterceptStdErr_9981f74b2d109da6] = env->getMethodID(cls, "getInterceptStdErr", "()D");
            mids$[mid_getMeanSquareError_9981f74b2d109da6] = env->getMethodID(cls, "getMeanSquareError", "()D");
            mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getR_9981f74b2d109da6] = env->getMethodID(cls, "getR", "()D");
            mids$[mid_getRSquare_9981f74b2d109da6] = env->getMethodID(cls, "getRSquare", "()D");
            mids$[mid_getRegressionSumSquares_9981f74b2d109da6] = env->getMethodID(cls, "getRegressionSumSquares", "()D");
            mids$[mid_getSignificance_9981f74b2d109da6] = env->getMethodID(cls, "getSignificance", "()D");
            mids$[mid_getSlope_9981f74b2d109da6] = env->getMethodID(cls, "getSlope", "()D");
            mids$[mid_getSlopeConfidenceInterval_9981f74b2d109da6] = env->getMethodID(cls, "getSlopeConfidenceInterval", "()D");
            mids$[mid_getSlopeConfidenceInterval_bf28ed64d6e8576b] = env->getMethodID(cls, "getSlopeConfidenceInterval", "(D)D");
            mids$[mid_getSlopeStdErr_9981f74b2d109da6] = env->getMethodID(cls, "getSlopeStdErr", "()D");
            mids$[mid_getSumOfCrossProducts_9981f74b2d109da6] = env->getMethodID(cls, "getSumOfCrossProducts", "()D");
            mids$[mid_getSumSquaredErrors_9981f74b2d109da6] = env->getMethodID(cls, "getSumSquaredErrors", "()D");
            mids$[mid_getTotalSumSquares_9981f74b2d109da6] = env->getMethodID(cls, "getTotalSumSquares", "()D");
            mids$[mid_getXSumSquares_9981f74b2d109da6] = env->getMethodID(cls, "getXSumSquares", "()D");
            mids$[mid_hasIntercept_eee3de00fe971136] = env->getMethodID(cls, "hasIntercept", "()Z");
            mids$[mid_predict_bf28ed64d6e8576b] = env->getMethodID(cls, "predict", "(D)D");
            mids$[mid_regress_b2f062f0fff197c0] = env->getMethodID(cls, "regress", "()Lorg/hipparchus/stat/regression/RegressionResults;");
            mids$[mid_regress_54420be6ab2acfca] = env->getMethodID(cls, "regress", "([I)Lorg/hipparchus/stat/regression/RegressionResults;");
            mids$[mid_removeData_11ecdbb5af7ed67d] = env->getMethodID(cls, "removeData", "([[D)V");
            mids$[mid_removeData_13edac039e8cc967] = env->getMethodID(cls, "removeData", "(DD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SimpleRegression::SimpleRegression() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        SimpleRegression::SimpleRegression(jboolean a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b35db77cae58639e, a0)) {}

        void SimpleRegression::addData(const JArray< JArray< jdouble > > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addData_11ecdbb5af7ed67d], a0.this$);
        }

        void SimpleRegression::addData(jdouble a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addData_13edac039e8cc967], a0, a1);
        }

        void SimpleRegression::addObservation(const JArray< jdouble > & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservation_19a01fdb4baa56b0], a0.this$, a1);
        }

        void SimpleRegression::addObservations(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservations_f1517d9a21833345], a0.this$, a1.this$);
        }

        void SimpleRegression::append(const SimpleRegression & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_append_039d27bf3973f473], a0.this$);
        }

        void SimpleRegression::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
        }

        jdouble SimpleRegression::getIntercept() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIntercept_9981f74b2d109da6]);
        }

        jdouble SimpleRegression::getInterceptStdErr() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getInterceptStdErr_9981f74b2d109da6]);
        }

        jdouble SimpleRegression::getMeanSquareError() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMeanSquareError_9981f74b2d109da6]);
        }

        jlong SimpleRegression::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
        }

        jdouble SimpleRegression::getR() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getR_9981f74b2d109da6]);
        }

        jdouble SimpleRegression::getRSquare() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRSquare_9981f74b2d109da6]);
        }

        jdouble SimpleRegression::getRegressionSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRegressionSumSquares_9981f74b2d109da6]);
        }

        jdouble SimpleRegression::getSignificance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSignificance_9981f74b2d109da6]);
        }

        jdouble SimpleRegression::getSlope() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSlope_9981f74b2d109da6]);
        }

        jdouble SimpleRegression::getSlopeConfidenceInterval() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSlopeConfidenceInterval_9981f74b2d109da6]);
        }

        jdouble SimpleRegression::getSlopeConfidenceInterval(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSlopeConfidenceInterval_bf28ed64d6e8576b], a0);
        }

        jdouble SimpleRegression::getSlopeStdErr() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSlopeStdErr_9981f74b2d109da6]);
        }

        jdouble SimpleRegression::getSumOfCrossProducts() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumOfCrossProducts_9981f74b2d109da6]);
        }

        jdouble SimpleRegression::getSumSquaredErrors() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumSquaredErrors_9981f74b2d109da6]);
        }

        jdouble SimpleRegression::getTotalSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTotalSumSquares_9981f74b2d109da6]);
        }

        jdouble SimpleRegression::getXSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getXSumSquares_9981f74b2d109da6]);
        }

        jboolean SimpleRegression::hasIntercept() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasIntercept_eee3de00fe971136]);
        }

        jdouble SimpleRegression::predict(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_predict_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::stat::regression::RegressionResults SimpleRegression::regress() const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_b2f062f0fff197c0]));
        }

        ::org::hipparchus::stat::regression::RegressionResults SimpleRegression::regress(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_54420be6ab2acfca], a0.this$));
        }

        void SimpleRegression::removeData(const JArray< JArray< jdouble > > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_removeData_11ecdbb5af7ed67d], a0.this$);
        }

        void SimpleRegression::removeData(jdouble a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_removeData_13edac039e8cc967], a0, a1);
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
        static PyObject *t_SimpleRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleRegression_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SimpleRegression_init_(t_SimpleRegression *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SimpleRegression_addData(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_addObservation(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_addObservations(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_append(t_SimpleRegression *self, PyObject *arg);
        static PyObject *t_SimpleRegression_clear(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getIntercept(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getInterceptStdErr(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getMeanSquareError(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getN(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getR(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getRSquare(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getRegressionSumSquares(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getSignificance(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getSlope(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getSlopeConfidenceInterval(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_getSlopeStdErr(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getSumOfCrossProducts(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getSumSquaredErrors(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getTotalSumSquares(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_getXSumSquares(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_hasIntercept(t_SimpleRegression *self);
        static PyObject *t_SimpleRegression_predict(t_SimpleRegression *self, PyObject *arg);
        static PyObject *t_SimpleRegression_regress(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_removeData(t_SimpleRegression *self, PyObject *args);
        static PyObject *t_SimpleRegression_get__intercept(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__interceptStdErr(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__meanSquareError(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__n(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__r(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__rSquare(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__regressionSumSquares(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__significance(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__slope(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__slopeConfidenceInterval(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__slopeStdErr(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__sumOfCrossProducts(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__sumSquaredErrors(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__totalSumSquares(t_SimpleRegression *self, void *data);
        static PyObject *t_SimpleRegression_get__xSumSquares(t_SimpleRegression *self, void *data);
        static PyGetSetDef t_SimpleRegression__fields_[] = {
          DECLARE_GET_FIELD(t_SimpleRegression, intercept),
          DECLARE_GET_FIELD(t_SimpleRegression, interceptStdErr),
          DECLARE_GET_FIELD(t_SimpleRegression, meanSquareError),
          DECLARE_GET_FIELD(t_SimpleRegression, n),
          DECLARE_GET_FIELD(t_SimpleRegression, r),
          DECLARE_GET_FIELD(t_SimpleRegression, rSquare),
          DECLARE_GET_FIELD(t_SimpleRegression, regressionSumSquares),
          DECLARE_GET_FIELD(t_SimpleRegression, significance),
          DECLARE_GET_FIELD(t_SimpleRegression, slope),
          DECLARE_GET_FIELD(t_SimpleRegression, slopeConfidenceInterval),
          DECLARE_GET_FIELD(t_SimpleRegression, slopeStdErr),
          DECLARE_GET_FIELD(t_SimpleRegression, sumOfCrossProducts),
          DECLARE_GET_FIELD(t_SimpleRegression, sumSquaredErrors),
          DECLARE_GET_FIELD(t_SimpleRegression, totalSumSquares),
          DECLARE_GET_FIELD(t_SimpleRegression, xSumSquares),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SimpleRegression__methods_[] = {
          DECLARE_METHOD(t_SimpleRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleRegression, addData, METH_VARARGS),
          DECLARE_METHOD(t_SimpleRegression, addObservation, METH_VARARGS),
          DECLARE_METHOD(t_SimpleRegression, addObservations, METH_VARARGS),
          DECLARE_METHOD(t_SimpleRegression, append, METH_O),
          DECLARE_METHOD(t_SimpleRegression, clear, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getIntercept, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getInterceptStdErr, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getMeanSquareError, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getN, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getR, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getRSquare, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getRegressionSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getSignificance, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getSlope, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getSlopeConfidenceInterval, METH_VARARGS),
          DECLARE_METHOD(t_SimpleRegression, getSlopeStdErr, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getSumOfCrossProducts, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getSumSquaredErrors, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getTotalSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, getXSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, hasIntercept, METH_NOARGS),
          DECLARE_METHOD(t_SimpleRegression, predict, METH_O),
          DECLARE_METHOD(t_SimpleRegression, regress, METH_VARARGS),
          DECLARE_METHOD(t_SimpleRegression, removeData, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimpleRegression)[] = {
          { Py_tp_methods, t_SimpleRegression__methods_ },
          { Py_tp_init, (void *) t_SimpleRegression_init_ },
          { Py_tp_getset, t_SimpleRegression__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimpleRegression)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SimpleRegression, t_SimpleRegression, SimpleRegression);

        void t_SimpleRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(SimpleRegression), &PY_TYPE_DEF(SimpleRegression), module, "SimpleRegression", 0);
        }

        void t_SimpleRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRegression), "class_", make_descriptor(SimpleRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRegression), "wrapfn_", make_descriptor(t_SimpleRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SimpleRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimpleRegression::initializeClass, 1)))
            return NULL;
          return t_SimpleRegression::wrap_Object(SimpleRegression(((t_SimpleRegression *) arg)->object.this$));
        }
        static PyObject *t_SimpleRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimpleRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SimpleRegression_init_(t_SimpleRegression *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              SimpleRegression object((jobject) NULL);

              INT_CALL(object = SimpleRegression());
              self->object = object;
              break;
            }
           case 1:
            {
              jboolean a0;
              SimpleRegression object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = SimpleRegression(a0));
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

        static PyObject *t_SimpleRegression_addData(t_SimpleRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                OBJ_CALL(self->object.addData(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              jdouble a0;
              jdouble a1;

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(self->object.addData(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addData", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_addObservation(t_SimpleRegression *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(self->object.addObservation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addObservation", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_addObservations(t_SimpleRegression *self, PyObject *args)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);

          if (!parseArgs(args, "[[D[D", &a0, &a1))
          {
            OBJ_CALL(self->object.addObservations(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addObservations", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_append(t_SimpleRegression *self, PyObject *arg)
        {
          SimpleRegression a0((jobject) NULL);

          if (!parseArg(arg, "k", SimpleRegression::initializeClass, &a0))
          {
            OBJ_CALL(self->object.append(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "append", arg);
          return NULL;
        }

        static PyObject *t_SimpleRegression_clear(t_SimpleRegression *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_SimpleRegression_getIntercept(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getIntercept());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getInterceptStdErr(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getInterceptStdErr());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getMeanSquareError(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMeanSquareError());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getN(t_SimpleRegression *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_SimpleRegression_getR(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getR());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getRSquare(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRSquare());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getRegressionSumSquares(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRegressionSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getSignificance(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSignificance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getSlope(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSlope());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getSlopeConfidenceInterval(t_SimpleRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSlopeConfidenceInterval());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.getSlopeConfidenceInterval(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getSlopeConfidenceInterval", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_getSlopeStdErr(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSlopeStdErr());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getSumOfCrossProducts(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumOfCrossProducts());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getSumSquaredErrors(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumSquaredErrors());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getTotalSumSquares(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTotalSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_getXSumSquares(t_SimpleRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getXSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleRegression_hasIntercept(t_SimpleRegression *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasIntercept());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SimpleRegression_predict(t_SimpleRegression *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.predict(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "predict", arg);
          return NULL;
        }

        static PyObject *t_SimpleRegression_regress(t_SimpleRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);
              OBJ_CALL(result = self->object.regress());
              return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
            }
            break;
           case 1:
            {
              JArray< jint > a0((jobject) NULL);
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);

              if (!parseArgs(args, "[I", &a0))
              {
                OBJ_CALL(result = self->object.regress(a0));
                return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "regress", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_removeData(t_SimpleRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                OBJ_CALL(self->object.removeData(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              jdouble a0;
              jdouble a1;

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(self->object.removeData(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "removeData", args);
          return NULL;
        }

        static PyObject *t_SimpleRegression_get__intercept(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getIntercept());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__interceptStdErr(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getInterceptStdErr());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__meanSquareError(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMeanSquareError());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__n(t_SimpleRegression *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_SimpleRegression_get__r(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getR());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__rSquare(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRSquare());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__regressionSumSquares(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRegressionSumSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__significance(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSignificance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__slope(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSlope());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__slopeConfidenceInterval(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSlopeConfidenceInterval());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__slopeStdErr(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSlopeStdErr());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__sumOfCrossProducts(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumOfCrossProducts());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__sumSquaredErrors(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumSquaredErrors());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__totalSumSquares(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTotalSumSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleRegression_get__xSumSquares(t_SimpleRegression *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getXSumSquares());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/jacobians/Duration.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace jacobians {

          ::java::lang::Class *Duration::class$ = NULL;
          jmethodID *Duration::mids$ = NULL;
          bool Duration::live$ = false;

          jclass Duration::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/jacobians/Duration");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_56b987237c71cdbb] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_getAdditionalState_e8a4ac02afc72623] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
              mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_yields_34f098c1d43e614c] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Duration::Duration(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_56b987237c71cdbb, a0.this$, a1.this$, a2.this$)) {}

          JArray< jdouble > Duration::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_e8a4ac02afc72623], a0.this$));
          }

          ::java::lang::String Duration::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
          }

          jboolean Duration::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_yields_34f098c1d43e614c], a0.this$);
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
        namespace jacobians {
          static PyObject *t_Duration_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Duration_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Duration_init_(t_Duration *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Duration_getAdditionalState(t_Duration *self, PyObject *arg);
          static PyObject *t_Duration_getName(t_Duration *self);
          static PyObject *t_Duration_yields(t_Duration *self, PyObject *arg);
          static PyObject *t_Duration_get__name(t_Duration *self, void *data);
          static PyGetSetDef t_Duration__fields_[] = {
            DECLARE_GET_FIELD(t_Duration, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Duration__methods_[] = {
            DECLARE_METHOD(t_Duration, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Duration, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Duration, getAdditionalState, METH_O),
            DECLARE_METHOD(t_Duration, getName, METH_NOARGS),
            DECLARE_METHOD(t_Duration, yields, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Duration)[] = {
            { Py_tp_methods, t_Duration__methods_ },
            { Py_tp_init, (void *) t_Duration_init_ },
            { Py_tp_getset, t_Duration__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Duration)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Duration, t_Duration, Duration);

          void t_Duration::install(PyObject *module)
          {
            installType(&PY_TYPE(Duration), &PY_TYPE_DEF(Duration), module, "Duration", 0);
          }

          void t_Duration::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Duration), "class_", make_descriptor(Duration::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Duration), "wrapfn_", make_descriptor(t_Duration::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Duration), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Duration_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Duration::initializeClass, 1)))
              return NULL;
            return t_Duration::wrap_Object(Duration(((t_Duration *) arg)->object.this$));
          }
          static PyObject *t_Duration_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Duration::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Duration_init_(t_Duration *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            Duration object((jobject) NULL);

            if (!parseArgs(args, "sss", &a0, &a1, &a2))
            {
              INT_CALL(object = Duration(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Duration_getAdditionalState(t_Duration *self, PyObject *arg)
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

          static PyObject *t_Duration_getName(t_Duration *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_Duration_yields(t_Duration *self, PyObject *arg)
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

          static PyObject *t_Duration_get__name(t_Duration *self, void *data)
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
#include "org/hipparchus/random/JDKRandomGenerator.h"
#include "java/lang/Class.h"
#include "java/util/Random.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *JDKRandomGenerator::class$ = NULL;
      jmethodID *JDKRandomGenerator::mids$ = NULL;
      bool JDKRandomGenerator::live$ = false;

      jclass JDKRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/JDKRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_a74deff2feda424a] = env->getMethodID(cls, "<init>", "(Ljava/util/Random;)V");
          mids$[mid_init$_f5bbab7e97879358] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextBoolean_eee3de00fe971136] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_bba2a19638de22ff] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextDouble_9981f74b2d109da6] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_0e3b995f823d65ff] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextGaussian_9981f74b2d109da6] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_d6ab429752e7c267] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextInt_d938fc64e8c6df2d] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_42c72b98e3c2e08a] = env->getMethodID(cls, "nextLong", "()J");
          mids$[mid_setSeed_d43202153dd284f7] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_8fd427ab23829bf5] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_f5bbab7e97879358] = env->getMethodID(cls, "setSeed", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JDKRandomGenerator::JDKRandomGenerator() : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      JDKRandomGenerator::JDKRandomGenerator(const ::java::util::Random & a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_a74deff2feda424a, a0.this$)) {}

      JDKRandomGenerator::JDKRandomGenerator(jlong a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_f5bbab7e97879358, a0)) {}

      jboolean JDKRandomGenerator::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_eee3de00fe971136]);
      }

      void JDKRandomGenerator::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_bba2a19638de22ff], a0.this$);
      }

      jdouble JDKRandomGenerator::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_9981f74b2d109da6]);
      }

      jfloat JDKRandomGenerator::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_0e3b995f823d65ff]);
      }

      jdouble JDKRandomGenerator::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_9981f74b2d109da6]);
      }

      jint JDKRandomGenerator::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_d6ab429752e7c267]);
      }

      jint JDKRandomGenerator::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_d938fc64e8c6df2d], a0);
      }

      jlong JDKRandomGenerator::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_42c72b98e3c2e08a]);
      }

      void JDKRandomGenerator::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_d43202153dd284f7], a0.this$);
      }

      void JDKRandomGenerator::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_8fd427ab23829bf5], a0);
      }

      void JDKRandomGenerator::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_f5bbab7e97879358], a0);
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
      static PyObject *t_JDKRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JDKRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_JDKRandomGenerator_init_(t_JDKRandomGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_JDKRandomGenerator_nextBoolean(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextBytes(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextDouble(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextFloat(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextGaussian(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextInt(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextLong(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_setSeed(t_JDKRandomGenerator *self, PyObject *args);
      static int t_JDKRandomGenerator_set__seed(t_JDKRandomGenerator *self, PyObject *arg, void *data);
      static PyGetSetDef t_JDKRandomGenerator__fields_[] = {
        DECLARE_SET_FIELD(t_JDKRandomGenerator, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_JDKRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_JDKRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JDKRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextBoolean, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextDouble, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextFloat, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextGaussian, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JDKRandomGenerator)[] = {
        { Py_tp_methods, t_JDKRandomGenerator__methods_ },
        { Py_tp_init, (void *) t_JDKRandomGenerator_init_ },
        { Py_tp_getset, t_JDKRandomGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JDKRandomGenerator)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::IntRandomGenerator),
        NULL
      };

      DEFINE_TYPE(JDKRandomGenerator, t_JDKRandomGenerator, JDKRandomGenerator);

      void t_JDKRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(JDKRandomGenerator), &PY_TYPE_DEF(JDKRandomGenerator), module, "JDKRandomGenerator", 0);
      }

      void t_JDKRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JDKRandomGenerator), "class_", make_descriptor(JDKRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JDKRandomGenerator), "wrapfn_", make_descriptor(t_JDKRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JDKRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_JDKRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JDKRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_JDKRandomGenerator::wrap_Object(JDKRandomGenerator(((t_JDKRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_JDKRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JDKRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_JDKRandomGenerator_init_(t_JDKRandomGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            JDKRandomGenerator object((jobject) NULL);

            INT_CALL(object = JDKRandomGenerator());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::util::Random a0((jobject) NULL);
            JDKRandomGenerator object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Random::initializeClass, &a0))
            {
              INT_CALL(object = JDKRandomGenerator(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            JDKRandomGenerator object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = JDKRandomGenerator(a0));
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

      static PyObject *t_JDKRandomGenerator_nextBoolean(t_JDKRandomGenerator *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextBoolean());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextBoolean", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextBytes(t_JDKRandomGenerator *self, PyObject *args)
      {
        JArray< jbyte > a0((jobject) NULL);

        if (!parseArgs(args, "[B", &a0))
        {
          OBJ_CALL(self->object.nextBytes(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextBytes", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextDouble(t_JDKRandomGenerator *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextDouble());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextDouble", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextFloat(t_JDKRandomGenerator *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextFloat());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextFloat", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextGaussian(t_JDKRandomGenerator *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextGaussian());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextGaussian", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextInt(t_JDKRandomGenerator *self, PyObject *args)
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

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextLong(t_JDKRandomGenerator *self, PyObject *args)
      {
        jlong result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextLong());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextLong", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_setSeed(t_JDKRandomGenerator *self, PyObject *args)
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

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "setSeed", args, 2);
      }

      static int t_JDKRandomGenerator_set__seed(t_JDKRandomGenerator *self, PyObject *arg, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/AnyMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *AnyMatrix::class$ = NULL;
      jmethodID *AnyMatrix::mids$ = NULL;
      bool AnyMatrix::live$ = false;

      jclass AnyMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/AnyMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getColumnDimension_d6ab429752e7c267] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getRowDimension_d6ab429752e7c267] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_isSquare_eee3de00fe971136] = env->getMethodID(cls, "isSquare", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint AnyMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_d6ab429752e7c267]);
      }

      jint AnyMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_d6ab429752e7c267]);
      }

      jboolean AnyMatrix::isSquare() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSquare_eee3de00fe971136]);
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
      static PyObject *t_AnyMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AnyMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AnyMatrix_getColumnDimension(t_AnyMatrix *self);
      static PyObject *t_AnyMatrix_getRowDimension(t_AnyMatrix *self);
      static PyObject *t_AnyMatrix_isSquare(t_AnyMatrix *self);
      static PyObject *t_AnyMatrix_get__columnDimension(t_AnyMatrix *self, void *data);
      static PyObject *t_AnyMatrix_get__rowDimension(t_AnyMatrix *self, void *data);
      static PyObject *t_AnyMatrix_get__square(t_AnyMatrix *self, void *data);
      static PyGetSetDef t_AnyMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_AnyMatrix, columnDimension),
        DECLARE_GET_FIELD(t_AnyMatrix, rowDimension),
        DECLARE_GET_FIELD(t_AnyMatrix, square),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AnyMatrix__methods_[] = {
        DECLARE_METHOD(t_AnyMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AnyMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AnyMatrix, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_AnyMatrix, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_AnyMatrix, isSquare, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AnyMatrix)[] = {
        { Py_tp_methods, t_AnyMatrix__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AnyMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AnyMatrix)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AnyMatrix, t_AnyMatrix, AnyMatrix);

      void t_AnyMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(AnyMatrix), &PY_TYPE_DEF(AnyMatrix), module, "AnyMatrix", 0);
      }

      void t_AnyMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AnyMatrix), "class_", make_descriptor(AnyMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AnyMatrix), "wrapfn_", make_descriptor(t_AnyMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AnyMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AnyMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AnyMatrix::initializeClass, 1)))
          return NULL;
        return t_AnyMatrix::wrap_Object(AnyMatrix(((t_AnyMatrix *) arg)->object.this$));
      }
      static PyObject *t_AnyMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AnyMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AnyMatrix_getColumnDimension(t_AnyMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AnyMatrix_getRowDimension(t_AnyMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AnyMatrix_isSquare(t_AnyMatrix *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSquare());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_AnyMatrix_get__columnDimension(t_AnyMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AnyMatrix_get__rowDimension(t_AnyMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AnyMatrix_get__square(t_AnyMatrix *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSquare());
        Py_RETURN_BOOL(value);
      }
    }
  }
}

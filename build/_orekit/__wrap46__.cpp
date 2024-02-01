#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/PythonAbstractIntegratedPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/integration/StateMapper.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations.h"
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
            mids$[mid_init$_9526e1a202c1b9c8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_createMapper_5f8935bd082b8966] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getMainStateEquations_97764934e3fe735c] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractIntegratedPropagator::PythonAbstractIntegratedPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0, const ::org::orekit::propagation::PropagationType & a1) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_9526e1a202c1b9c8, a0.this$, a1.this$)) {}

        void PythonAbstractIntegratedPropagator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonAbstractIntegratedPropagator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonAbstractIntegratedPropagator::pythonExtension(jlong a0) const
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractIntegratedPropagator::mids$[PythonAbstractIntegratedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractIntegratedPropagator::mids$[PythonAbstractIntegratedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractIntegratedPropagator::mids$[PythonAbstractIntegratedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractIntegratedPropagator::mids$[PythonAbstractIntegratedPropagator::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
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
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaOneWayGNSSPhaseModifier.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OnBoardAntennaOneWayGNSSPhaseModifier::class$ = NULL;
          jmethodID *OnBoardAntennaOneWayGNSSPhaseModifier::mids$ = NULL;
          bool OnBoardAntennaOneWayGNSSPhaseModifier::live$ = false;

          jclass OnBoardAntennaOneWayGNSSPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OnBoardAntennaOneWayGNSSPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_471620e7e7f15fbf] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OnBoardAntennaOneWayGNSSPhaseModifier::OnBoardAntennaOneWayGNSSPhaseModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_471620e7e7f15fbf, a0.this$, a1.this$, a2.this$)) {}

          ::java::util::List OnBoardAntennaOneWayGNSSPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void OnBoardAntennaOneWayGNSSPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OnBoardAntennaOneWayGNSSPhaseModifier_init_(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_getParametersDrivers(t_OnBoardAntennaOneWayGNSSPhaseModifier *self);
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, PyObject *arg);
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_get__parametersDrivers(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, void *data);
          static PyGetSetDef t_OnBoardAntennaOneWayGNSSPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OnBoardAntennaOneWayGNSSPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnBoardAntennaOneWayGNSSPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnBoardAntennaOneWayGNSSPhaseModifier)[] = {
            { Py_tp_methods, t_OnBoardAntennaOneWayGNSSPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_OnBoardAntennaOneWayGNSSPhaseModifier_init_ },
            { Py_tp_getset, t_OnBoardAntennaOneWayGNSSPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnBoardAntennaOneWayGNSSPhaseModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OnBoardAntennaOneWayGNSSPhaseModifier, t_OnBoardAntennaOneWayGNSSPhaseModifier, OnBoardAntennaOneWayGNSSPhaseModifier);

          void t_OnBoardAntennaOneWayGNSSPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OnBoardAntennaOneWayGNSSPhaseModifier), &PY_TYPE_DEF(OnBoardAntennaOneWayGNSSPhaseModifier), module, "OnBoardAntennaOneWayGNSSPhaseModifier", 0);
          }

          void t_OnBoardAntennaOneWayGNSSPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSPhaseModifier), "class_", make_descriptor(OnBoardAntennaOneWayGNSSPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSPhaseModifier), "wrapfn_", make_descriptor(t_OnBoardAntennaOneWayGNSSPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnBoardAntennaOneWayGNSSPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_OnBoardAntennaOneWayGNSSPhaseModifier::wrap_Object(OnBoardAntennaOneWayGNSSPhaseModifier(((t_OnBoardAntennaOneWayGNSSPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnBoardAntennaOneWayGNSSPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OnBoardAntennaOneWayGNSSPhaseModifier_init_(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
            OnBoardAntennaOneWayGNSSPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = OnBoardAntennaOneWayGNSSPhaseModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_getParametersDrivers(t_OnBoardAntennaOneWayGNSSPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_get__parametersDrivers(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, void *data)
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
#include "org/orekit/estimation/sequential/PythonSemiAnalyticalProcess.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalProcess.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonSemiAnalyticalProcess::class$ = NULL;
        jmethodID *PythonSemiAnalyticalProcess::mids$ = NULL;
        bool PythonSemiAnalyticalProcess::live$ = false;

        jclass PythonSemiAnalyticalProcess::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonSemiAnalyticalProcess");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finalizeEstimation_32b51ab222e72e59] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_finalizeOperationsObservationGrid_ff7cb6c242604316] = env->getMethodID(cls, "finalizeOperationsObservationGrid", "()V");
            mids$[mid_getObserver_6e4d0b03328febe6] = env->getMethodID(cls, "getObserver", "()Lorg/orekit/estimation/sequential/KalmanObserver;");
            mids$[mid_initializeShortPeriodicTerms_72b846eb87f3af9a] = env->getMethodID(cls, "initializeShortPeriodicTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_updateNominalSpacecraftState_72b846eb87f3af9a] = env->getMethodID(cls, "updateNominalSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_updateShortPeriods_72b846eb87f3af9a] = env->getMethodID(cls, "updateShortPeriods", "(Lorg/orekit/propagation/SpacecraftState;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonSemiAnalyticalProcess::PythonSemiAnalyticalProcess() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonSemiAnalyticalProcess::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonSemiAnalyticalProcess::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonSemiAnalyticalProcess::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace sequential {
        static PyObject *t_PythonSemiAnalyticalProcess_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonSemiAnalyticalProcess_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonSemiAnalyticalProcess_init_(t_PythonSemiAnalyticalProcess *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonSemiAnalyticalProcess_finalize(t_PythonSemiAnalyticalProcess *self);
        static PyObject *t_PythonSemiAnalyticalProcess_pythonExtension(t_PythonSemiAnalyticalProcess *self, PyObject *args);
        static void JNICALL t_PythonSemiAnalyticalProcess_finalizeEstimation0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonSemiAnalyticalProcess_finalizeOperationsObservationGrid1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonSemiAnalyticalProcess_getObserver2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonSemiAnalyticalProcess_initializeShortPeriodicTerms3(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonSemiAnalyticalProcess_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonSemiAnalyticalProcess_updateNominalSpacecraftState5(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonSemiAnalyticalProcess_updateShortPeriods6(JNIEnv *jenv, jobject jobj, jobject a0);
        static PyObject *t_PythonSemiAnalyticalProcess_get__self(t_PythonSemiAnalyticalProcess *self, void *data);
        static PyGetSetDef t_PythonSemiAnalyticalProcess__fields_[] = {
          DECLARE_GET_FIELD(t_PythonSemiAnalyticalProcess, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonSemiAnalyticalProcess__methods_[] = {
          DECLARE_METHOD(t_PythonSemiAnalyticalProcess, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSemiAnalyticalProcess, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSemiAnalyticalProcess, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonSemiAnalyticalProcess, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonSemiAnalyticalProcess)[] = {
          { Py_tp_methods, t_PythonSemiAnalyticalProcess__methods_ },
          { Py_tp_init, (void *) t_PythonSemiAnalyticalProcess_init_ },
          { Py_tp_getset, t_PythonSemiAnalyticalProcess__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonSemiAnalyticalProcess)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonSemiAnalyticalProcess, t_PythonSemiAnalyticalProcess, PythonSemiAnalyticalProcess);

        void t_PythonSemiAnalyticalProcess::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonSemiAnalyticalProcess), &PY_TYPE_DEF(PythonSemiAnalyticalProcess), module, "PythonSemiAnalyticalProcess", 1);
        }

        void t_PythonSemiAnalyticalProcess::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSemiAnalyticalProcess), "class_", make_descriptor(PythonSemiAnalyticalProcess::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSemiAnalyticalProcess), "wrapfn_", make_descriptor(t_PythonSemiAnalyticalProcess::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSemiAnalyticalProcess), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonSemiAnalyticalProcess::initializeClass);
          JNINativeMethod methods[] = {
            { "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V", (void *) t_PythonSemiAnalyticalProcess_finalizeEstimation0 },
            { "finalizeOperationsObservationGrid", "()V", (void *) t_PythonSemiAnalyticalProcess_finalizeOperationsObservationGrid1 },
            { "getObserver", "()Lorg/orekit/estimation/sequential/KalmanObserver;", (void *) t_PythonSemiAnalyticalProcess_getObserver2 },
            { "initializeShortPeriodicTerms", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonSemiAnalyticalProcess_initializeShortPeriodicTerms3 },
            { "pythonDecRef", "()V", (void *) t_PythonSemiAnalyticalProcess_pythonDecRef4 },
            { "updateNominalSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonSemiAnalyticalProcess_updateNominalSpacecraftState5 },
            { "updateShortPeriods", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonSemiAnalyticalProcess_updateShortPeriods6 },
          };
          env->registerNatives(cls, methods, 7);
        }

        static PyObject *t_PythonSemiAnalyticalProcess_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonSemiAnalyticalProcess::initializeClass, 1)))
            return NULL;
          return t_PythonSemiAnalyticalProcess::wrap_Object(PythonSemiAnalyticalProcess(((t_PythonSemiAnalyticalProcess *) arg)->object.this$));
        }
        static PyObject *t_PythonSemiAnalyticalProcess_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonSemiAnalyticalProcess::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonSemiAnalyticalProcess_init_(t_PythonSemiAnalyticalProcess *self, PyObject *args, PyObject *kwds)
        {
          PythonSemiAnalyticalProcess object((jobject) NULL);

          INT_CALL(object = PythonSemiAnalyticalProcess());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonSemiAnalyticalProcess_finalize(t_PythonSemiAnalyticalProcess *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonSemiAnalyticalProcess_pythonExtension(t_PythonSemiAnalyticalProcess *self, PyObject *args)
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

        static void JNICALL t_PythonSemiAnalyticalProcess_finalizeEstimation0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(::org::orekit::estimation::measurements::ObservedMeasurement(a0));
          PyObject *o1 = ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(::org::hipparchus::filtering::kalman::ProcessEstimate(a1));
          PyObject *result = PyObject_CallMethod(obj, "finalizeEstimation", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonSemiAnalyticalProcess_finalizeOperationsObservationGrid1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *result = PyObject_CallMethod(obj, "finalizeOperationsObservationGrid", "");
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static jobject JNICALL t_PythonSemiAnalyticalProcess_getObserver2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getObserver", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &value))
          {
            throwTypeError("getObserver", result);
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

        static void JNICALL t_PythonSemiAnalyticalProcess_initializeShortPeriodicTerms3(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "initializeShortPeriodicTerms", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonSemiAnalyticalProcess_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonSemiAnalyticalProcess_updateNominalSpacecraftState5(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "updateNominalSpacecraftState", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonSemiAnalyticalProcess_updateShortPeriods6(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "updateShortPeriods", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonSemiAnalyticalProcess_get__self(t_PythonSemiAnalyticalProcess *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/scalar/GoalType.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
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
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_0fd8efd9eecb8663] = env->getMethodID(cls, "<init>", "(DI)V");
            mids$[mid_getEvaluations_d6ab429752e7c267] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getFHi_9981f74b2d109da6] = env->getMethodID(cls, "getFHi", "()D");
            mids$[mid_getFLo_9981f74b2d109da6] = env->getMethodID(cls, "getFLo", "()D");
            mids$[mid_getFMid_9981f74b2d109da6] = env->getMethodID(cls, "getFMid", "()D");
            mids$[mid_getHi_9981f74b2d109da6] = env->getMethodID(cls, "getHi", "()D");
            mids$[mid_getLo_9981f74b2d109da6] = env->getMethodID(cls, "getLo", "()D");
            mids$[mid_getMaxEvaluations_d6ab429752e7c267] = env->getMethodID(cls, "getMaxEvaluations", "()I");
            mids$[mid_getMid_9981f74b2d109da6] = env->getMethodID(cls, "getMid", "()D");
            mids$[mid_search_581959ca361e24b5] = env->getMethodID(cls, "search", "(Lorg/hipparchus/analysis/UnivariateFunction;Lorg/hipparchus/optim/nonlinear/scalar/GoalType;DD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BracketFinder::BracketFinder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        BracketFinder::BracketFinder(jdouble a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fd8efd9eecb8663, a0, a1)) {}

        jint BracketFinder::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_d6ab429752e7c267]);
        }

        jdouble BracketFinder::getFHi() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFHi_9981f74b2d109da6]);
        }

        jdouble BracketFinder::getFLo() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFLo_9981f74b2d109da6]);
        }

        jdouble BracketFinder::getFMid() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFMid_9981f74b2d109da6]);
        }

        jdouble BracketFinder::getHi() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHi_9981f74b2d109da6]);
        }

        jdouble BracketFinder::getLo() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLo_9981f74b2d109da6]);
        }

        jint BracketFinder::getMaxEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_d6ab429752e7c267]);
        }

        jdouble BracketFinder::getMid() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMid_9981f74b2d109da6]);
        }

        void BracketFinder::search(const ::org::hipparchus::analysis::UnivariateFunction & a0, const ::org::hipparchus::optim::nonlinear::scalar::GoalType & a1, jdouble a2, jdouble a3) const
        {
          env->callVoidMethod(this$, mids$[mid_search_581959ca361e24b5], a0.this$, a1.this$, a2, a3);
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
#include "org/orekit/files/ccsds/section/KvnStructureProcessingState.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *KvnStructureProcessingState::class$ = NULL;
          jmethodID *KvnStructureProcessingState::mids$ = NULL;
          bool KvnStructureProcessingState::live$ = false;

          jclass KvnStructureProcessingState::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/KvnStructureProcessingState");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_50726b2cbe411b54] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/parsing/AbstractConstituentParser;)V");
              mids$[mid_processToken_48865e799ebb0b92] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          KvnStructureProcessingState::KvnStructureProcessingState(const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_50726b2cbe411b54, a0.this$)) {}

          jboolean KvnStructureProcessingState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_processToken_48865e799ebb0b92], a0.this$);
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
          static PyObject *t_KvnStructureProcessingState_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_KvnStructureProcessingState_instance_(PyTypeObject *type, PyObject *arg);
          static int t_KvnStructureProcessingState_init_(t_KvnStructureProcessingState *self, PyObject *args, PyObject *kwds);
          static PyObject *t_KvnStructureProcessingState_processToken(t_KvnStructureProcessingState *self, PyObject *arg);

          static PyMethodDef t_KvnStructureProcessingState__methods_[] = {
            DECLARE_METHOD(t_KvnStructureProcessingState, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KvnStructureProcessingState, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KvnStructureProcessingState, processToken, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(KvnStructureProcessingState)[] = {
            { Py_tp_methods, t_KvnStructureProcessingState__methods_ },
            { Py_tp_init, (void *) t_KvnStructureProcessingState_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(KvnStructureProcessingState)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(KvnStructureProcessingState, t_KvnStructureProcessingState, KvnStructureProcessingState);

          void t_KvnStructureProcessingState::install(PyObject *module)
          {
            installType(&PY_TYPE(KvnStructureProcessingState), &PY_TYPE_DEF(KvnStructureProcessingState), module, "KvnStructureProcessingState", 0);
          }

          void t_KvnStructureProcessingState::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureProcessingState), "class_", make_descriptor(KvnStructureProcessingState::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureProcessingState), "wrapfn_", make_descriptor(t_KvnStructureProcessingState::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureProcessingState), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_KvnStructureProcessingState_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, KvnStructureProcessingState::initializeClass, 1)))
              return NULL;
            return t_KvnStructureProcessingState::wrap_Object(KvnStructureProcessingState(((t_KvnStructureProcessingState *) arg)->object.this$));
          }
          static PyObject *t_KvnStructureProcessingState_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, KvnStructureProcessingState::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_KvnStructureProcessingState_init_(t_KvnStructureProcessingState *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser a0((jobject) NULL);
            PyTypeObject **p0;
            KvnStructureProcessingState object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::parsing::t_AbstractConstituentParser::parameters_))
            {
              INT_CALL(object = KvnStructureProcessingState(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_KvnStructureProcessingState_processToken(t_KvnStructureProcessingState *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.processToken(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "processToken", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$TimeSystemConsumer.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$TimeSystemConsumer::class$ = NULL;
            jmethodID *ParseToken$TimeSystemConsumer::mids$ = NULL;
            bool ParseToken$TimeSystemConsumer::live$ = false;

            jclass ParseToken$TimeSystemConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$TimeSystemConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_a052efb9a150bad4] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/definitions/TimeSystem;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$TimeSystemConsumer::accept(const ::org::orekit::files::ccsds::definitions::TimeSystem & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_a052efb9a150bad4], a0.this$);
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
            static PyObject *t_ParseToken$TimeSystemConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$TimeSystemConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$TimeSystemConsumer_accept(t_ParseToken$TimeSystemConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$TimeSystemConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$TimeSystemConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$TimeSystemConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$TimeSystemConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$TimeSystemConsumer)[] = {
              { Py_tp_methods, t_ParseToken$TimeSystemConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$TimeSystemConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$TimeSystemConsumer, t_ParseToken$TimeSystemConsumer, ParseToken$TimeSystemConsumer);

            void t_ParseToken$TimeSystemConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$TimeSystemConsumer), &PY_TYPE_DEF(ParseToken$TimeSystemConsumer), module, "ParseToken$TimeSystemConsumer", 0);
            }

            void t_ParseToken$TimeSystemConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$TimeSystemConsumer), "class_", make_descriptor(ParseToken$TimeSystemConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$TimeSystemConsumer), "wrapfn_", make_descriptor(t_ParseToken$TimeSystemConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$TimeSystemConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$TimeSystemConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$TimeSystemConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$TimeSystemConsumer::wrap_Object(ParseToken$TimeSystemConsumer(((t_ParseToken$TimeSystemConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$TimeSystemConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$TimeSystemConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$TimeSystemConsumer_accept(t_ParseToken$TimeSystemConsumer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::TimeSystem a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_TimeSystem::parameters_))
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
#include "org/orekit/estimation/measurements/gnss/MelbourneWubbenaCombination.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombination.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *MelbourneWubbenaCombination::class$ = NULL;
          jmethodID *MelbourneWubbenaCombination::mids$ = NULL;
          bool MelbourneWubbenaCombination::live$ = false;

          jclass MelbourneWubbenaCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/MelbourneWubbenaCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_combine_34f94a0e1855db7e] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;");
              mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet MelbourneWubbenaCombination::combine(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet(env->callObjectMethod(this$, mids$[mid_combine_34f94a0e1855db7e], a0.this$));
          }

          ::java::lang::String MelbourneWubbenaCombination::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
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
          static PyObject *t_MelbourneWubbenaCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MelbourneWubbenaCombination_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MelbourneWubbenaCombination_combine(t_MelbourneWubbenaCombination *self, PyObject *arg);
          static PyObject *t_MelbourneWubbenaCombination_getName(t_MelbourneWubbenaCombination *self);
          static PyObject *t_MelbourneWubbenaCombination_get__name(t_MelbourneWubbenaCombination *self, void *data);
          static PyGetSetDef t_MelbourneWubbenaCombination__fields_[] = {
            DECLARE_GET_FIELD(t_MelbourneWubbenaCombination, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MelbourneWubbenaCombination__methods_[] = {
            DECLARE_METHOD(t_MelbourneWubbenaCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MelbourneWubbenaCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MelbourneWubbenaCombination, combine, METH_O),
            DECLARE_METHOD(t_MelbourneWubbenaCombination, getName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MelbourneWubbenaCombination)[] = {
            { Py_tp_methods, t_MelbourneWubbenaCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MelbourneWubbenaCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MelbourneWubbenaCombination)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MelbourneWubbenaCombination, t_MelbourneWubbenaCombination, MelbourneWubbenaCombination);

          void t_MelbourneWubbenaCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(MelbourneWubbenaCombination), &PY_TYPE_DEF(MelbourneWubbenaCombination), module, "MelbourneWubbenaCombination", 0);
          }

          void t_MelbourneWubbenaCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MelbourneWubbenaCombination), "class_", make_descriptor(MelbourneWubbenaCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MelbourneWubbenaCombination), "wrapfn_", make_descriptor(t_MelbourneWubbenaCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MelbourneWubbenaCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MelbourneWubbenaCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MelbourneWubbenaCombination::initializeClass, 1)))
              return NULL;
            return t_MelbourneWubbenaCombination::wrap_Object(MelbourneWubbenaCombination(((t_MelbourneWubbenaCombination *) arg)->object.this$));
          }
          static PyObject *t_MelbourneWubbenaCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MelbourneWubbenaCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MelbourneWubbenaCombination_combine(t_MelbourneWubbenaCombination *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet a0((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.combine(a0));
              return ::org::orekit::estimation::measurements::gnss::t_CombinedObservationDataSet::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "combine", arg);
            return NULL;
          }

          static PyObject *t_MelbourneWubbenaCombination_getName(t_MelbourneWubbenaCombination *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_MelbourneWubbenaCombination_get__name(t_MelbourneWubbenaCombination *self, void *data)
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
#include "org/orekit/estimation/measurements/filtering/DualFrequencySmoother.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "org/orekit/estimation/measurements/filtering/DualFrequencyHatchFilter.h"
#include "java/util/HashMap.h"
#include "org/orekit/estimation/measurements/filtering/SmoothedObservationDataSet.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "org/orekit/gnss/ObservationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *DualFrequencySmoother::class$ = NULL;
          jmethodID *DualFrequencySmoother::mids$ = NULL;
          bool DualFrequencySmoother::live$ = false;

          jclass DualFrequencySmoother::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/DualFrequencySmoother");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fd8efd9eecb8663] = env->getMethodID(cls, "<init>", "(DI)V");
              mids$[mid_copyObservationData_b6125958e639421b] = env->getMethodID(cls, "copyObservationData", "(Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/files/rinex/observation/ObservationData;");
              mids$[mid_createFilter_dda9fc436d819eda] = env->getMethodID(cls, "createFilter", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/filtering/DualFrequencyHatchFilter;");
              mids$[mid_filterDataSet_20598c1c4feeee36] = env->getMethodID(cls, "filterDataSet", "(Ljava/util/List;Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/gnss/ObservationType;Lorg/orekit/gnss/ObservationType;)V");
              mids$[mid_getFilteredDataMap_215ee6429c05b9a0] = env->getMethodID(cls, "getFilteredDataMap", "()Ljava/util/HashMap;");
              mids$[mid_getMapFilters_215ee6429c05b9a0] = env->getMethodID(cls, "getMapFilters", "()Ljava/util/HashMap;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DualFrequencySmoother::DualFrequencySmoother(jdouble a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fd8efd9eecb8663, a0, a1)) {}

          ::org::orekit::files::rinex::observation::ObservationData DualFrequencySmoother::copyObservationData(const ::org::orekit::files::rinex::observation::ObservationData & a0) const
          {
            return ::org::orekit::files::rinex::observation::ObservationData(env->callObjectMethod(this$, mids$[mid_copyObservationData_b6125958e639421b], a0.this$));
          }

          ::org::orekit::estimation::measurements::filtering::DualFrequencyHatchFilter DualFrequencySmoother::createFilter(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1, const ::org::orekit::files::rinex::observation::ObservationData & a2, const ::org::orekit::gnss::SatelliteSystem & a3) const
          {
            return ::org::orekit::estimation::measurements::filtering::DualFrequencyHatchFilter(env->callObjectMethod(this$, mids$[mid_createFilter_dda9fc436d819eda], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          void DualFrequencySmoother::filterDataSet(const ::java::util::List & a0, const ::org::orekit::gnss::SatelliteSystem & a1, jint a2, const ::org::orekit::gnss::ObservationType & a3, const ::org::orekit::gnss::ObservationType & a4) const
          {
            env->callVoidMethod(this$, mids$[mid_filterDataSet_20598c1c4feeee36], a0.this$, a1.this$, a2, a3.this$, a4.this$);
          }

          ::java::util::HashMap DualFrequencySmoother::getFilteredDataMap() const
          {
            return ::java::util::HashMap(env->callObjectMethod(this$, mids$[mid_getFilteredDataMap_215ee6429c05b9a0]));
          }

          ::java::util::HashMap DualFrequencySmoother::getMapFilters() const
          {
            return ::java::util::HashMap(env->callObjectMethod(this$, mids$[mid_getMapFilters_215ee6429c05b9a0]));
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
          static PyObject *t_DualFrequencySmoother_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DualFrequencySmoother_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DualFrequencySmoother_init_(t_DualFrequencySmoother *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DualFrequencySmoother_copyObservationData(t_DualFrequencySmoother *self, PyObject *arg);
          static PyObject *t_DualFrequencySmoother_createFilter(t_DualFrequencySmoother *self, PyObject *args);
          static PyObject *t_DualFrequencySmoother_filterDataSet(t_DualFrequencySmoother *self, PyObject *args);
          static PyObject *t_DualFrequencySmoother_getFilteredDataMap(t_DualFrequencySmoother *self);
          static PyObject *t_DualFrequencySmoother_getMapFilters(t_DualFrequencySmoother *self);
          static PyObject *t_DualFrequencySmoother_get__filteredDataMap(t_DualFrequencySmoother *self, void *data);
          static PyObject *t_DualFrequencySmoother_get__mapFilters(t_DualFrequencySmoother *self, void *data);
          static PyGetSetDef t_DualFrequencySmoother__fields_[] = {
            DECLARE_GET_FIELD(t_DualFrequencySmoother, filteredDataMap),
            DECLARE_GET_FIELD(t_DualFrequencySmoother, mapFilters),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DualFrequencySmoother__methods_[] = {
            DECLARE_METHOD(t_DualFrequencySmoother, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DualFrequencySmoother, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DualFrequencySmoother, copyObservationData, METH_O),
            DECLARE_METHOD(t_DualFrequencySmoother, createFilter, METH_VARARGS),
            DECLARE_METHOD(t_DualFrequencySmoother, filterDataSet, METH_VARARGS),
            DECLARE_METHOD(t_DualFrequencySmoother, getFilteredDataMap, METH_NOARGS),
            DECLARE_METHOD(t_DualFrequencySmoother, getMapFilters, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DualFrequencySmoother)[] = {
            { Py_tp_methods, t_DualFrequencySmoother__methods_ },
            { Py_tp_init, (void *) t_DualFrequencySmoother_init_ },
            { Py_tp_getset, t_DualFrequencySmoother__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DualFrequencySmoother)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DualFrequencySmoother, t_DualFrequencySmoother, DualFrequencySmoother);

          void t_DualFrequencySmoother::install(PyObject *module)
          {
            installType(&PY_TYPE(DualFrequencySmoother), &PY_TYPE_DEF(DualFrequencySmoother), module, "DualFrequencySmoother", 0);
          }

          void t_DualFrequencySmoother::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DualFrequencySmoother), "class_", make_descriptor(DualFrequencySmoother::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DualFrequencySmoother), "wrapfn_", make_descriptor(t_DualFrequencySmoother::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DualFrequencySmoother), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DualFrequencySmoother_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DualFrequencySmoother::initializeClass, 1)))
              return NULL;
            return t_DualFrequencySmoother::wrap_Object(DualFrequencySmoother(((t_DualFrequencySmoother *) arg)->object.this$));
          }
          static PyObject *t_DualFrequencySmoother_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DualFrequencySmoother::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DualFrequencySmoother_init_(t_DualFrequencySmoother *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jint a1;
            DualFrequencySmoother object((jobject) NULL);

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              INT_CALL(object = DualFrequencySmoother(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DualFrequencySmoother_copyObservationData(t_DualFrequencySmoother *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copyObservationData(a0));
              return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "copyObservationData", arg);
            return NULL;
          }

          static PyObject *t_DualFrequencySmoother_createFilter(t_DualFrequencySmoother *self, PyObject *args)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a2((jobject) NULL);
            ::org::orekit::gnss::SatelliteSystem a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::estimation::measurements::filtering::DualFrequencyHatchFilter result((jobject) NULL);

            if (!parseArgs(args, "kkkK", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = self->object.createFilter(a0, a1, a2, a3));
              return ::org::orekit::estimation::measurements::filtering::t_DualFrequencyHatchFilter::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "createFilter", args);
            return NULL;
          }

          static PyObject *t_DualFrequencySmoother_filterDataSet(t_DualFrequencySmoother *self, PyObject *args)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            ::org::orekit::gnss::ObservationType a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::gnss::ObservationType a4((jobject) NULL);
            PyTypeObject **p4;

            if (!parseArgs(args, "KKIKK", ::java::util::List::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::org::orekit::gnss::t_ObservationType::parameters_, &a4, &p4, ::org::orekit::gnss::t_ObservationType::parameters_))
            {
              OBJ_CALL(self->object.filterDataSet(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "filterDataSet", args);
            return NULL;
          }

          static PyObject *t_DualFrequencySmoother_getFilteredDataMap(t_DualFrequencySmoother *self)
          {
            ::java::util::HashMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getFilteredDataMap());
            return ::java::util::t_HashMap::wrap_Object(result);
          }

          static PyObject *t_DualFrequencySmoother_getMapFilters(t_DualFrequencySmoother *self)
          {
            ::java::util::HashMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getMapFilters());
            return ::java::util::t_HashMap::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(ObservationType), ::org::orekit::estimation::measurements::filtering::PY_TYPE(DualFrequencyHatchFilter));
          }

          static PyObject *t_DualFrequencySmoother_get__filteredDataMap(t_DualFrequencySmoother *self, void *data)
          {
            ::java::util::HashMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getFilteredDataMap());
            return ::java::util::t_HashMap::wrap_Object(value);
          }

          static PyObject *t_DualFrequencySmoother_get__mapFilters(t_DualFrequencySmoother *self, void *data)
          {
            ::java::util::HashMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getMapFilters());
            return ::java::util::t_HashMap::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialFunction.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *FieldPolynomialSplineFunction::class$ = NULL;
        jmethodID *FieldPolynomialSplineFunction::mids$ = NULL;
        bool FieldPolynomialSplineFunction::live$ = false;

        jclass FieldPolynomialSplineFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_823535cad697c42e] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;)V");
            mids$[mid_getField_577649682b9910c1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getKnots_94ed2e0620f8833d] = env->getMethodID(cls, "getKnots", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getN_d6ab429752e7c267] = env->getMethodID(cls, "getN", "()I");
            mids$[mid_getPolynomials_1f8a7bae184dd7be] = env->getMethodID(cls, "getPolynomials", "()[Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_isValidPoint_ba2dc030627af546] = env->getMethodID(cls, "isValidPoint", "(Lorg/hipparchus/CalculusFieldElement;)Z");
            mids$[mid_polynomialSplineDerivative_bafb33d1b3c451ff] = env->getMethodID(cls, "polynomialSplineDerivative", "()Lorg/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction;");
            mids$[mid_value_e3d0ff3c0584eadf] = env->getMethodID(cls, "value", "(D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_a3b854adede8eaaa] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldPolynomialSplineFunction::FieldPolynomialSplineFunction(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_823535cad697c42e, a0.this$, a1.this$)) {}

        ::org::hipparchus::Field FieldPolynomialSplineFunction::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_577649682b9910c1]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldPolynomialSplineFunction::getKnots() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getKnots_94ed2e0620f8833d]));
        }

        jint FieldPolynomialSplineFunction::getN() const
        {
          return env->callIntMethod(this$, mids$[mid_getN_d6ab429752e7c267]);
        }

        JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction > FieldPolynomialSplineFunction::getPolynomials() const
        {
          return JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction >(env->callObjectMethod(this$, mids$[mid_getPolynomials_1f8a7bae184dd7be]));
        }

        jboolean FieldPolynomialSplineFunction::isValidPoint(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isValidPoint_ba2dc030627af546], a0.this$);
        }

        FieldPolynomialSplineFunction FieldPolynomialSplineFunction::polynomialSplineDerivative() const
        {
          return FieldPolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_polynomialSplineDerivative_bafb33d1b3c451ff]));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialSplineFunction::value(jdouble a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_e3d0ff3c0584eadf], a0));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialSplineFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_a3b854adede8eaaa], a0.this$));
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
        static PyObject *t_FieldPolynomialSplineFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldPolynomialSplineFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldPolynomialSplineFunction_of_(t_FieldPolynomialSplineFunction *self, PyObject *args);
        static int t_FieldPolynomialSplineFunction_init_(t_FieldPolynomialSplineFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldPolynomialSplineFunction_getField(t_FieldPolynomialSplineFunction *self);
        static PyObject *t_FieldPolynomialSplineFunction_getKnots(t_FieldPolynomialSplineFunction *self);
        static PyObject *t_FieldPolynomialSplineFunction_getN(t_FieldPolynomialSplineFunction *self);
        static PyObject *t_FieldPolynomialSplineFunction_getPolynomials(t_FieldPolynomialSplineFunction *self);
        static PyObject *t_FieldPolynomialSplineFunction_isValidPoint(t_FieldPolynomialSplineFunction *self, PyObject *arg);
        static PyObject *t_FieldPolynomialSplineFunction_polynomialSplineDerivative(t_FieldPolynomialSplineFunction *self);
        static PyObject *t_FieldPolynomialSplineFunction_value(t_FieldPolynomialSplineFunction *self, PyObject *args);
        static PyObject *t_FieldPolynomialSplineFunction_get__field(t_FieldPolynomialSplineFunction *self, void *data);
        static PyObject *t_FieldPolynomialSplineFunction_get__knots(t_FieldPolynomialSplineFunction *self, void *data);
        static PyObject *t_FieldPolynomialSplineFunction_get__n(t_FieldPolynomialSplineFunction *self, void *data);
        static PyObject *t_FieldPolynomialSplineFunction_get__polynomials(t_FieldPolynomialSplineFunction *self, void *data);
        static PyObject *t_FieldPolynomialSplineFunction_get__parameters_(t_FieldPolynomialSplineFunction *self, void *data);
        static PyGetSetDef t_FieldPolynomialSplineFunction__fields_[] = {
          DECLARE_GET_FIELD(t_FieldPolynomialSplineFunction, field),
          DECLARE_GET_FIELD(t_FieldPolynomialSplineFunction, knots),
          DECLARE_GET_FIELD(t_FieldPolynomialSplineFunction, n),
          DECLARE_GET_FIELD(t_FieldPolynomialSplineFunction, polynomials),
          DECLARE_GET_FIELD(t_FieldPolynomialSplineFunction, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldPolynomialSplineFunction__methods_[] = {
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, getField, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, getKnots, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, getN, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, getPolynomials, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, isValidPoint, METH_O),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, polynomialSplineDerivative, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldPolynomialSplineFunction)[] = {
          { Py_tp_methods, t_FieldPolynomialSplineFunction__methods_ },
          { Py_tp_init, (void *) t_FieldPolynomialSplineFunction_init_ },
          { Py_tp_getset, t_FieldPolynomialSplineFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldPolynomialSplineFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldPolynomialSplineFunction, t_FieldPolynomialSplineFunction, FieldPolynomialSplineFunction);
        PyObject *t_FieldPolynomialSplineFunction::wrap_Object(const FieldPolynomialSplineFunction& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldPolynomialSplineFunction::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldPolynomialSplineFunction *self = (t_FieldPolynomialSplineFunction *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldPolynomialSplineFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldPolynomialSplineFunction::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldPolynomialSplineFunction *self = (t_FieldPolynomialSplineFunction *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldPolynomialSplineFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldPolynomialSplineFunction), &PY_TYPE_DEF(FieldPolynomialSplineFunction), module, "FieldPolynomialSplineFunction", 0);
        }

        void t_FieldPolynomialSplineFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPolynomialSplineFunction), "class_", make_descriptor(FieldPolynomialSplineFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPolynomialSplineFunction), "wrapfn_", make_descriptor(t_FieldPolynomialSplineFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPolynomialSplineFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldPolynomialSplineFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldPolynomialSplineFunction::initializeClass, 1)))
            return NULL;
          return t_FieldPolynomialSplineFunction::wrap_Object(FieldPolynomialSplineFunction(((t_FieldPolynomialSplineFunction *) arg)->object.this$));
        }
        static PyObject *t_FieldPolynomialSplineFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldPolynomialSplineFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldPolynomialSplineFunction_of_(t_FieldPolynomialSplineFunction *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldPolynomialSplineFunction_init_(t_FieldPolynomialSplineFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction > a1((jobject) NULL);
          PyTypeObject **p1;
          FieldPolynomialSplineFunction object((jobject) NULL);

          if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::analysis::polynomials::t_FieldPolynomialFunction::parameters_))
          {
            INT_CALL(object = FieldPolynomialSplineFunction(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldPolynomialSplineFunction_getField(t_FieldPolynomialSplineFunction *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldPolynomialSplineFunction_getKnots(t_FieldPolynomialSplineFunction *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getKnots());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldPolynomialSplineFunction_getN(t_FieldPolynomialSplineFunction *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldPolynomialSplineFunction_getPolynomials(t_FieldPolynomialSplineFunction *self)
        {
          JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolynomials());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::polynomials::t_FieldPolynomialFunction::wrap_jobject);
        }

        static PyObject *t_FieldPolynomialSplineFunction_isValidPoint(t_FieldPolynomialSplineFunction *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.isValidPoint(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isValidPoint", arg);
          return NULL;
        }

        static PyObject *t_FieldPolynomialSplineFunction_polynomialSplineDerivative(t_FieldPolynomialSplineFunction *self)
        {
          FieldPolynomialSplineFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.polynomialSplineDerivative());
          return t_FieldPolynomialSplineFunction::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldPolynomialSplineFunction_value(t_FieldPolynomialSplineFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
        static PyObject *t_FieldPolynomialSplineFunction_get__parameters_(t_FieldPolynomialSplineFunction *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldPolynomialSplineFunction_get__field(t_FieldPolynomialSplineFunction *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_FieldPolynomialSplineFunction_get__knots(t_FieldPolynomialSplineFunction *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getKnots());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldPolynomialSplineFunction_get__n(t_FieldPolynomialSplineFunction *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldPolynomialSplineFunction_get__polynomials(t_FieldPolynomialSplineFunction *self, void *data)
        {
          JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolynomials());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::analysis::polynomials::t_FieldPolynomialFunction::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/OpenIntToFieldHashMap$Iterator.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "java/util/ConcurrentModificationException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *OpenIntToFieldHashMap$Iterator::class$ = NULL;
      jmethodID *OpenIntToFieldHashMap$Iterator::mids$ = NULL;
      bool OpenIntToFieldHashMap$Iterator::live$ = false;

      jclass OpenIntToFieldHashMap$Iterator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/OpenIntToFieldHashMap$Iterator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_advance_ff7cb6c242604316] = env->getMethodID(cls, "advance", "()V");
          mids$[mid_hasNext_eee3de00fe971136] = env->getMethodID(cls, "hasNext", "()Z");
          mids$[mid_key_d6ab429752e7c267] = env->getMethodID(cls, "key", "()I");
          mids$[mid_value_f6328613456309a1] = env->getMethodID(cls, "value", "()Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void OpenIntToFieldHashMap$Iterator::advance() const
      {
        env->callVoidMethod(this$, mids$[mid_advance_ff7cb6c242604316]);
      }

      jboolean OpenIntToFieldHashMap$Iterator::hasNext() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasNext_eee3de00fe971136]);
      }

      jint OpenIntToFieldHashMap$Iterator::key() const
      {
        return env->callIntMethod(this$, mids$[mid_key_d6ab429752e7c267]);
      }

      ::org::hipparchus::FieldElement OpenIntToFieldHashMap$Iterator::value() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_value_f6328613456309a1]));
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
      static PyObject *t_OpenIntToFieldHashMap$Iterator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_of_(t_OpenIntToFieldHashMap$Iterator *self, PyObject *args);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_advance(t_OpenIntToFieldHashMap$Iterator *self);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_hasNext(t_OpenIntToFieldHashMap$Iterator *self);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_key(t_OpenIntToFieldHashMap$Iterator *self);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_value(t_OpenIntToFieldHashMap$Iterator *self);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_get__parameters_(t_OpenIntToFieldHashMap$Iterator *self, void *data);
      static PyGetSetDef t_OpenIntToFieldHashMap$Iterator__fields_[] = {
        DECLARE_GET_FIELD(t_OpenIntToFieldHashMap$Iterator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OpenIntToFieldHashMap$Iterator__methods_[] = {
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, of_, METH_VARARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, advance, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, hasNext, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, key, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, value, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenIntToFieldHashMap$Iterator)[] = {
        { Py_tp_methods, t_OpenIntToFieldHashMap$Iterator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OpenIntToFieldHashMap$Iterator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenIntToFieldHashMap$Iterator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OpenIntToFieldHashMap$Iterator, t_OpenIntToFieldHashMap$Iterator, OpenIntToFieldHashMap$Iterator);
      PyObject *t_OpenIntToFieldHashMap$Iterator::wrap_Object(const OpenIntToFieldHashMap$Iterator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OpenIntToFieldHashMap$Iterator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OpenIntToFieldHashMap$Iterator *self = (t_OpenIntToFieldHashMap$Iterator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OpenIntToFieldHashMap$Iterator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OpenIntToFieldHashMap$Iterator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OpenIntToFieldHashMap$Iterator *self = (t_OpenIntToFieldHashMap$Iterator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OpenIntToFieldHashMap$Iterator::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenIntToFieldHashMap$Iterator), &PY_TYPE_DEF(OpenIntToFieldHashMap$Iterator), module, "OpenIntToFieldHashMap$Iterator", 0);
      }

      void t_OpenIntToFieldHashMap$Iterator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap$Iterator), "class_", make_descriptor(OpenIntToFieldHashMap$Iterator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap$Iterator), "wrapfn_", make_descriptor(t_OpenIntToFieldHashMap$Iterator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap$Iterator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenIntToFieldHashMap$Iterator::initializeClass, 1)))
          return NULL;
        return t_OpenIntToFieldHashMap$Iterator::wrap_Object(OpenIntToFieldHashMap$Iterator(((t_OpenIntToFieldHashMap$Iterator *) arg)->object.this$));
      }
      static PyObject *t_OpenIntToFieldHashMap$Iterator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenIntToFieldHashMap$Iterator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_of_(t_OpenIntToFieldHashMap$Iterator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_advance(t_OpenIntToFieldHashMap$Iterator *self)
      {
        OBJ_CALL(self->object.advance());
        Py_RETURN_NONE;
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_hasNext(t_OpenIntToFieldHashMap$Iterator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasNext());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_key(t_OpenIntToFieldHashMap$Iterator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.key());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_value(t_OpenIntToFieldHashMap$Iterator *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.value());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }
      static PyObject *t_OpenIntToFieldHashMap$Iterator_get__parameters_(t_OpenIntToFieldHashMap$Iterator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/PythonOrekitStepInterpolator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
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
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getCurrentState_8fbfa58855031235] = env->getMethodID(cls, "getCurrentState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getInterpolatedState_1e982279849c3b65] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getPreviousState_8fbfa58855031235] = env->getMethodID(cls, "getPreviousState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_isCurrentStateInterpolated_eee3de00fe971136] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_eee3de00fe971136] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_eee3de00fe971136] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_restrictStep_fa53c719225d17c1] = env->getMethodID(cls, "restrictStep", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/sampling/OrekitStepInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonOrekitStepInterpolator::PythonOrekitStepInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonOrekitStepInterpolator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonOrekitStepInterpolator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonOrekitStepInterpolator::pythonExtension(jlong a0) const
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_42c72b98e3c2e08a]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_42c72b98e3c2e08a]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_42c72b98e3c2e08a]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_42c72b98e3c2e08a]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_42c72b98e3c2e08a]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_42c72b98e3c2e08a]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonOrekitStepInterpolator_restrictStep7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_42c72b98e3c2e08a]);
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleArrayConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$DoubleArrayConsumer::class$ = NULL;
            jmethodID *ParseToken$DoubleArrayConsumer::mids$ = NULL;
            bool ParseToken$DoubleArrayConsumer::live$ = false;

            jclass ParseToken$DoubleArrayConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleArrayConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_a71c45509eaf92d1] = env->getMethodID(cls, "accept", "([D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$DoubleArrayConsumer::accept(const JArray< jdouble > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_a71c45509eaf92d1], a0.this$);
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
            static PyObject *t_ParseToken$DoubleArrayConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DoubleArrayConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DoubleArrayConsumer_accept(t_ParseToken$DoubleArrayConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$DoubleArrayConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$DoubleArrayConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DoubleArrayConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DoubleArrayConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$DoubleArrayConsumer)[] = {
              { Py_tp_methods, t_ParseToken$DoubleArrayConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$DoubleArrayConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$DoubleArrayConsumer, t_ParseToken$DoubleArrayConsumer, ParseToken$DoubleArrayConsumer);

            void t_ParseToken$DoubleArrayConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$DoubleArrayConsumer), &PY_TYPE_DEF(ParseToken$DoubleArrayConsumer), module, "ParseToken$DoubleArrayConsumer", 0);
            }

            void t_ParseToken$DoubleArrayConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoubleArrayConsumer), "class_", make_descriptor(ParseToken$DoubleArrayConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoubleArrayConsumer), "wrapfn_", make_descriptor(t_ParseToken$DoubleArrayConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoubleArrayConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$DoubleArrayConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$DoubleArrayConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$DoubleArrayConsumer::wrap_Object(ParseToken$DoubleArrayConsumer(((t_ParseToken$DoubleArrayConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$DoubleArrayConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$DoubleArrayConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$DoubleArrayConsumer_accept(t_ParseToken$DoubleArrayConsumer *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
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
#include "org/orekit/utils/units/Unit.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        ::java::lang::Class *Unit::class$ = NULL;
        jmethodID *Unit::mids$ = NULL;
        bool Unit::live$ = false;
        Unit *Unit::AMPERE = NULL;
        Unit *Unit::ARC_MINUTE = NULL;
        Unit *Unit::ARC_SECOND = NULL;
        Unit *Unit::BAR = NULL;
        Unit *Unit::COULOMB = NULL;
        Unit *Unit::DAY = NULL;
        Unit *Unit::DEGREE = NULL;
        Unit *Unit::EARTH_RADII = NULL;
        Unit *Unit::GRAM = NULL;
        Unit *Unit::HERTZ = NULL;
        Unit *Unit::HOUR = NULL;
        Unit *Unit::JOULE = NULL;
        Unit *Unit::KILOGRAM = NULL;
        Unit *Unit::KILOMETRE = NULL;
        Unit *Unit::METRE = NULL;
        Unit *Unit::MINUTE = NULL;
        Unit *Unit::NEWTON = NULL;
        Unit *Unit::NONE = NULL;
        Unit *Unit::OHM = NULL;
        Unit *Unit::ONE = NULL;
        Unit *Unit::PASCAL$ = NULL;
        Unit *Unit::PERCENT$ = NULL;
        Unit *Unit::RADIAN = NULL;
        Unit *Unit::REVOLUTION = NULL;
        Unit *Unit::SECOND = NULL;
        Unit *Unit::SOLAR_FLUX_UNIT = NULL;
        Unit *Unit::TESLA = NULL;
        Unit *Unit::TOTAL_ELECTRON_CONTENT_UNIT = NULL;
        Unit *Unit::VOLT = NULL;
        Unit *Unit::WATT = NULL;
        Unit *Unit::YEAR = NULL;

        jclass Unit::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/utils/units/Unit");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2a537d55027e9351] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLorg/hipparchus/fraction/Fraction;Lorg/hipparchus/fraction/Fraction;Lorg/hipparchus/fraction/Fraction;Lorg/hipparchus/fraction/Fraction;Lorg/hipparchus/fraction/Fraction;)V");
            mids$[mid_alias_d6c2d8d5a508daeb] = env->getMethodID(cls, "alias", "(Ljava/lang/String;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_divide_44ac6dfdc2380979] = env->getMethodID(cls, "divide", "(Ljava/lang/String;Lorg/orekit/utils/units/Unit;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_ensureCompatible_e66afbad3d0c4326] = env->getStaticMethodID(cls, "ensureCompatible", "(Ljava/lang/String;Ljava/util/List;ZLjava/util/List;)V");
            mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_fromSI_e8942d61ef8e236d] = env->getMethodID(cls, "fromSI", "(Ljava/lang/Double;)D");
            mids$[mid_fromSI_bf28ed64d6e8576b] = env->getMethodID(cls, "fromSI", "(D)D");
            mids$[mid_getAngle_8e8b2db4820cf02e] = env->getMethodID(cls, "getAngle", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_getCurrent_8e8b2db4820cf02e] = env->getMethodID(cls, "getCurrent", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_getLength_8e8b2db4820cf02e] = env->getMethodID(cls, "getLength", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_getMass_8e8b2db4820cf02e] = env->getMethodID(cls, "getMass", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getScale_9981f74b2d109da6] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getTime_8e8b2db4820cf02e] = env->getMethodID(cls, "getTime", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_multiply_44ac6dfdc2380979] = env->getMethodID(cls, "multiply", "(Ljava/lang/String;Lorg/orekit/utils/units/Unit;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_parse_d6c2d8d5a508daeb] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_power_4930d07d9ce56450] = env->getMethodID(cls, "power", "(Ljava/lang/String;Lorg/hipparchus/fraction/Fraction;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_sameDimension_acf6666529be31c6] = env->getMethodID(cls, "sameDimension", "(Lorg/orekit/utils/units/Unit;)Z");
            mids$[mid_sameDimensionSI_b1bb36679ea369c9] = env->getMethodID(cls, "sameDimensionSI", "()Lorg/orekit/utils/units/Unit;");
            mids$[mid_scale_6dd09311f49c6fb3] = env->getMethodID(cls, "scale", "(Ljava/lang/String;D)Lorg/orekit/utils/units/Unit;");
            mids$[mid_sqrt_d6c2d8d5a508daeb] = env->getMethodID(cls, "sqrt", "(Ljava/lang/String;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_toSI_e8942d61ef8e236d] = env->getMethodID(cls, "toSI", "(Ljava/lang/Double;)D");
            mids$[mid_toSI_bf28ed64d6e8576b] = env->getMethodID(cls, "toSI", "(D)D");
            mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            AMPERE = new Unit(env->getStaticObjectField(cls, "AMPERE", "Lorg/orekit/utils/units/Unit;"));
            ARC_MINUTE = new Unit(env->getStaticObjectField(cls, "ARC_MINUTE", "Lorg/orekit/utils/units/Unit;"));
            ARC_SECOND = new Unit(env->getStaticObjectField(cls, "ARC_SECOND", "Lorg/orekit/utils/units/Unit;"));
            BAR = new Unit(env->getStaticObjectField(cls, "BAR", "Lorg/orekit/utils/units/Unit;"));
            COULOMB = new Unit(env->getStaticObjectField(cls, "COULOMB", "Lorg/orekit/utils/units/Unit;"));
            DAY = new Unit(env->getStaticObjectField(cls, "DAY", "Lorg/orekit/utils/units/Unit;"));
            DEGREE = new Unit(env->getStaticObjectField(cls, "DEGREE", "Lorg/orekit/utils/units/Unit;"));
            EARTH_RADII = new Unit(env->getStaticObjectField(cls, "EARTH_RADII", "Lorg/orekit/utils/units/Unit;"));
            GRAM = new Unit(env->getStaticObjectField(cls, "GRAM", "Lorg/orekit/utils/units/Unit;"));
            HERTZ = new Unit(env->getStaticObjectField(cls, "HERTZ", "Lorg/orekit/utils/units/Unit;"));
            HOUR = new Unit(env->getStaticObjectField(cls, "HOUR", "Lorg/orekit/utils/units/Unit;"));
            JOULE = new Unit(env->getStaticObjectField(cls, "JOULE", "Lorg/orekit/utils/units/Unit;"));
            KILOGRAM = new Unit(env->getStaticObjectField(cls, "KILOGRAM", "Lorg/orekit/utils/units/Unit;"));
            KILOMETRE = new Unit(env->getStaticObjectField(cls, "KILOMETRE", "Lorg/orekit/utils/units/Unit;"));
            METRE = new Unit(env->getStaticObjectField(cls, "METRE", "Lorg/orekit/utils/units/Unit;"));
            MINUTE = new Unit(env->getStaticObjectField(cls, "MINUTE", "Lorg/orekit/utils/units/Unit;"));
            NEWTON = new Unit(env->getStaticObjectField(cls, "NEWTON", "Lorg/orekit/utils/units/Unit;"));
            NONE = new Unit(env->getStaticObjectField(cls, "NONE", "Lorg/orekit/utils/units/Unit;"));
            OHM = new Unit(env->getStaticObjectField(cls, "OHM", "Lorg/orekit/utils/units/Unit;"));
            ONE = new Unit(env->getStaticObjectField(cls, "ONE", "Lorg/orekit/utils/units/Unit;"));
            PASCAL$ = new Unit(env->getStaticObjectField(cls, "PASCAL", "Lorg/orekit/utils/units/Unit;"));
            PERCENT$ = new Unit(env->getStaticObjectField(cls, "PERCENT", "Lorg/orekit/utils/units/Unit;"));
            RADIAN = new Unit(env->getStaticObjectField(cls, "RADIAN", "Lorg/orekit/utils/units/Unit;"));
            REVOLUTION = new Unit(env->getStaticObjectField(cls, "REVOLUTION", "Lorg/orekit/utils/units/Unit;"));
            SECOND = new Unit(env->getStaticObjectField(cls, "SECOND", "Lorg/orekit/utils/units/Unit;"));
            SOLAR_FLUX_UNIT = new Unit(env->getStaticObjectField(cls, "SOLAR_FLUX_UNIT", "Lorg/orekit/utils/units/Unit;"));
            TESLA = new Unit(env->getStaticObjectField(cls, "TESLA", "Lorg/orekit/utils/units/Unit;"));
            TOTAL_ELECTRON_CONTENT_UNIT = new Unit(env->getStaticObjectField(cls, "TOTAL_ELECTRON_CONTENT_UNIT", "Lorg/orekit/utils/units/Unit;"));
            VOLT = new Unit(env->getStaticObjectField(cls, "VOLT", "Lorg/orekit/utils/units/Unit;"));
            WATT = new Unit(env->getStaticObjectField(cls, "WATT", "Lorg/orekit/utils/units/Unit;"));
            YEAR = new Unit(env->getStaticObjectField(cls, "YEAR", "Lorg/orekit/utils/units/Unit;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Unit::Unit(const ::java::lang::String & a0, jdouble a1, const ::org::hipparchus::fraction::Fraction & a2, const ::org::hipparchus::fraction::Fraction & a3, const ::org::hipparchus::fraction::Fraction & a4, const ::org::hipparchus::fraction::Fraction & a5, const ::org::hipparchus::fraction::Fraction & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2a537d55027e9351, a0.this$, a1, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        Unit Unit::alias(const ::java::lang::String & a0) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_alias_d6c2d8d5a508daeb], a0.this$));
        }

        Unit Unit::divide(const ::java::lang::String & a0, const Unit & a1) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_divide_44ac6dfdc2380979], a0.this$, a1.this$));
        }

        void Unit::ensureCompatible(const ::java::lang::String & a0, const ::java::util::List & a1, jboolean a2, const ::java::util::List & a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_ensureCompatible_e66afbad3d0c4326], a0.this$, a1.this$, a2, a3.this$);
        }

        jboolean Unit::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
        }

        jdouble Unit::fromSI(const ::java::lang::Double & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_fromSI_e8942d61ef8e236d], a0.this$);
        }

        jdouble Unit::fromSI(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_fromSI_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::fraction::Fraction Unit::getAngle() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getAngle_8e8b2db4820cf02e]));
        }

        ::org::hipparchus::fraction::Fraction Unit::getCurrent() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getCurrent_8e8b2db4820cf02e]));
        }

        ::org::hipparchus::fraction::Fraction Unit::getLength() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getLength_8e8b2db4820cf02e]));
        }

        ::org::hipparchus::fraction::Fraction Unit::getMass() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getMass_8e8b2db4820cf02e]));
        }

        ::java::lang::String Unit::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
        }

        jdouble Unit::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_9981f74b2d109da6]);
        }

        ::org::hipparchus::fraction::Fraction Unit::getTime() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getTime_8e8b2db4820cf02e]));
        }

        jint Unit::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
        }

        Unit Unit::multiply(const ::java::lang::String & a0, const Unit & a1) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_multiply_44ac6dfdc2380979], a0.this$, a1.this$));
        }

        Unit Unit::parse(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Unit(env->callStaticObjectMethod(cls, mids$[mid_parse_d6c2d8d5a508daeb], a0.this$));
        }

        Unit Unit::power(const ::java::lang::String & a0, const ::org::hipparchus::fraction::Fraction & a1) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_power_4930d07d9ce56450], a0.this$, a1.this$));
        }

        jboolean Unit::sameDimension(const Unit & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_sameDimension_acf6666529be31c6], a0.this$);
        }

        Unit Unit::sameDimensionSI() const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_sameDimensionSI_b1bb36679ea369c9]));
        }

        Unit Unit::scale(const ::java::lang::String & a0, jdouble a1) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_scale_6dd09311f49c6fb3], a0.this$, a1));
        }

        Unit Unit::sqrt(const ::java::lang::String & a0) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_sqrt_d6c2d8d5a508daeb], a0.this$));
        }

        jdouble Unit::toSI(const ::java::lang::Double & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_toSI_e8942d61ef8e236d], a0.this$);
        }

        jdouble Unit::toSI(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_toSI_bf28ed64d6e8576b], a0);
        }

        ::java::lang::String Unit::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
    namespace utils {
      namespace units {
        static PyObject *t_Unit_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Unit_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Unit_init_(t_Unit *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Unit_alias(t_Unit *self, PyObject *arg);
        static PyObject *t_Unit_divide(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_ensureCompatible(PyTypeObject *type, PyObject *args);
        static PyObject *t_Unit_equals(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_fromSI(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_getAngle(t_Unit *self);
        static PyObject *t_Unit_getCurrent(t_Unit *self);
        static PyObject *t_Unit_getLength(t_Unit *self);
        static PyObject *t_Unit_getMass(t_Unit *self);
        static PyObject *t_Unit_getName(t_Unit *self);
        static PyObject *t_Unit_getScale(t_Unit *self);
        static PyObject *t_Unit_getTime(t_Unit *self);
        static PyObject *t_Unit_hashCode(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_multiply(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_parse(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Unit_power(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_sameDimension(t_Unit *self, PyObject *arg);
        static PyObject *t_Unit_sameDimensionSI(t_Unit *self);
        static PyObject *t_Unit_scale(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_sqrt(t_Unit *self, PyObject *arg);
        static PyObject *t_Unit_toSI(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_toString(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_get__angle(t_Unit *self, void *data);
        static PyObject *t_Unit_get__current(t_Unit *self, void *data);
        static PyObject *t_Unit_get__length(t_Unit *self, void *data);
        static PyObject *t_Unit_get__mass(t_Unit *self, void *data);
        static PyObject *t_Unit_get__name(t_Unit *self, void *data);
        static PyObject *t_Unit_get__time(t_Unit *self, void *data);
        static PyGetSetDef t_Unit__fields_[] = {
          DECLARE_GET_FIELD(t_Unit, angle),
          DECLARE_GET_FIELD(t_Unit, current),
          DECLARE_GET_FIELD(t_Unit, length),
          DECLARE_GET_FIELD(t_Unit, mass),
          DECLARE_GET_FIELD(t_Unit, name),
          DECLARE_GET_FIELD(t_Unit, time),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Unit__methods_[] = {
          DECLARE_METHOD(t_Unit, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Unit, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Unit, alias, METH_O),
          DECLARE_METHOD(t_Unit, divide, METH_VARARGS),
          DECLARE_METHOD(t_Unit, ensureCompatible, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Unit, equals, METH_VARARGS),
          DECLARE_METHOD(t_Unit, fromSI, METH_VARARGS),
          DECLARE_METHOD(t_Unit, getAngle, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getCurrent, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getLength, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getMass, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getName, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getScale, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getTime, METH_NOARGS),
          DECLARE_METHOD(t_Unit, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_Unit, multiply, METH_VARARGS),
          DECLARE_METHOD(t_Unit, parse, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Unit, power, METH_VARARGS),
          DECLARE_METHOD(t_Unit, sameDimension, METH_O),
          DECLARE_METHOD(t_Unit, sameDimensionSI, METH_NOARGS),
          DECLARE_METHOD(t_Unit, scale, METH_VARARGS),
          DECLARE_METHOD(t_Unit, sqrt, METH_O),
          DECLARE_METHOD(t_Unit, toSI, METH_VARARGS),
          DECLARE_METHOD(t_Unit, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Unit)[] = {
          { Py_tp_methods, t_Unit__methods_ },
          { Py_tp_init, (void *) t_Unit_init_ },
          { Py_tp_getset, t_Unit__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Unit)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Unit, t_Unit, Unit);

        void t_Unit::install(PyObject *module)
        {
          installType(&PY_TYPE(Unit), &PY_TYPE_DEF(Unit), module, "Unit", 0);
        }

        void t_Unit::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "class_", make_descriptor(Unit::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "wrapfn_", make_descriptor(t_Unit::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "boxfn_", make_descriptor(boxObject));
          env->getClass(Unit::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "AMPERE", make_descriptor(t_Unit::wrap_Object(*Unit::AMPERE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "ARC_MINUTE", make_descriptor(t_Unit::wrap_Object(*Unit::ARC_MINUTE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "ARC_SECOND", make_descriptor(t_Unit::wrap_Object(*Unit::ARC_SECOND)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "BAR", make_descriptor(t_Unit::wrap_Object(*Unit::BAR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "COULOMB", make_descriptor(t_Unit::wrap_Object(*Unit::COULOMB)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "DAY", make_descriptor(t_Unit::wrap_Object(*Unit::DAY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "DEGREE", make_descriptor(t_Unit::wrap_Object(*Unit::DEGREE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "EARTH_RADII", make_descriptor(t_Unit::wrap_Object(*Unit::EARTH_RADII)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "GRAM", make_descriptor(t_Unit::wrap_Object(*Unit::GRAM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "HERTZ", make_descriptor(t_Unit::wrap_Object(*Unit::HERTZ)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "HOUR", make_descriptor(t_Unit::wrap_Object(*Unit::HOUR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "JOULE", make_descriptor(t_Unit::wrap_Object(*Unit::JOULE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "KILOGRAM", make_descriptor(t_Unit::wrap_Object(*Unit::KILOGRAM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "KILOMETRE", make_descriptor(t_Unit::wrap_Object(*Unit::KILOMETRE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "METRE", make_descriptor(t_Unit::wrap_Object(*Unit::METRE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "MINUTE", make_descriptor(t_Unit::wrap_Object(*Unit::MINUTE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "NEWTON", make_descriptor(t_Unit::wrap_Object(*Unit::NEWTON)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "NONE", make_descriptor(t_Unit::wrap_Object(*Unit::NONE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "OHM", make_descriptor(t_Unit::wrap_Object(*Unit::OHM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "ONE", make_descriptor(t_Unit::wrap_Object(*Unit::ONE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "PASCAL", make_descriptor(t_Unit::wrap_Object(*Unit::PASCAL$)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "PERCENT", make_descriptor(t_Unit::wrap_Object(*Unit::PERCENT$)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "RADIAN", make_descriptor(t_Unit::wrap_Object(*Unit::RADIAN)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "REVOLUTION", make_descriptor(t_Unit::wrap_Object(*Unit::REVOLUTION)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "SECOND", make_descriptor(t_Unit::wrap_Object(*Unit::SECOND)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "SOLAR_FLUX_UNIT", make_descriptor(t_Unit::wrap_Object(*Unit::SOLAR_FLUX_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "TESLA", make_descriptor(t_Unit::wrap_Object(*Unit::TESLA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "TOTAL_ELECTRON_CONTENT_UNIT", make_descriptor(t_Unit::wrap_Object(*Unit::TOTAL_ELECTRON_CONTENT_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "VOLT", make_descriptor(t_Unit::wrap_Object(*Unit::VOLT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "WATT", make_descriptor(t_Unit::wrap_Object(*Unit::WATT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "YEAR", make_descriptor(t_Unit::wrap_Object(*Unit::YEAR)));
        }

        static PyObject *t_Unit_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Unit::initializeClass, 1)))
            return NULL;
          return t_Unit::wrap_Object(Unit(((t_Unit *) arg)->object.this$));
        }
        static PyObject *t_Unit_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Unit::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Unit_init_(t_Unit *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          ::org::hipparchus::fraction::Fraction a2((jobject) NULL);
          ::org::hipparchus::fraction::Fraction a3((jobject) NULL);
          ::org::hipparchus::fraction::Fraction a4((jobject) NULL);
          ::org::hipparchus::fraction::Fraction a5((jobject) NULL);
          ::org::hipparchus::fraction::Fraction a6((jobject) NULL);
          Unit object((jobject) NULL);

          if (!parseArgs(args, "sDkkkkk", ::org::hipparchus::fraction::Fraction::initializeClass, ::org::hipparchus::fraction::Fraction::initializeClass, ::org::hipparchus::fraction::Fraction::initializeClass, ::org::hipparchus::fraction::Fraction::initializeClass, ::org::hipparchus::fraction::Fraction::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = Unit(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Unit_alias(t_Unit *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.alias(a0));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "alias", arg);
          return NULL;
        }

        static PyObject *t_Unit_divide(t_Unit *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Unit a1((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArgs(args, "sk", Unit::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.divide(a0, a1));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_Unit_ensureCompatible(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean a2;
          ::java::util::List a3((jobject) NULL);
          PyTypeObject **p3;

          if (!parseArgs(args, "sKZK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(::org::orekit::utils::units::Unit::ensureCompatible(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "ensureCompatible", args);
          return NULL;
        }

        static PyObject *t_Unit_equals(t_Unit *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(Unit), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_Unit_fromSI(t_Unit *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::lang::Double a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "O", ::java::lang::PY_TYPE(Double), &a0))
              {
                OBJ_CALL(result = self->object.fromSI(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.fromSI(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "fromSI", args);
          return NULL;
        }

        static PyObject *t_Unit_getAngle(t_Unit *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getAngle());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_Unit_getCurrent(t_Unit *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrent());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_Unit_getLength(t_Unit *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getLength());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_Unit_getMass(t_Unit *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getMass());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_Unit_getName(t_Unit *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_Unit_getScale(t_Unit *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Unit_getTime(t_Unit *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getTime());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_Unit_hashCode(t_Unit *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(Unit), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_Unit_multiply(t_Unit *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Unit a1((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArgs(args, "sk", Unit::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.multiply(a0, a1));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_Unit_parse(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::utils::units::Unit::parse(a0));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parse", arg);
          return NULL;
        }

        static PyObject *t_Unit_power(t_Unit *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::hipparchus::fraction::Fraction a1((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::hipparchus::fraction::Fraction::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.power(a0, a1));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "power", args);
          return NULL;
        }

        static PyObject *t_Unit_sameDimension(t_Unit *self, PyObject *arg)
        {
          Unit a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", Unit::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.sameDimension(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "sameDimension", arg);
          return NULL;
        }

        static PyObject *t_Unit_sameDimensionSI(t_Unit *self)
        {
          Unit result((jobject) NULL);
          OBJ_CALL(result = self->object.sameDimensionSI());
          return t_Unit::wrap_Object(result);
        }

        static PyObject *t_Unit_scale(t_Unit *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          Unit result((jobject) NULL);

          if (!parseArgs(args, "sD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.scale(a0, a1));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "scale", args);
          return NULL;
        }

        static PyObject *t_Unit_sqrt(t_Unit *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.sqrt(a0));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "sqrt", arg);
          return NULL;
        }

        static PyObject *t_Unit_toSI(t_Unit *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::lang::Double a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "O", ::java::lang::PY_TYPE(Double), &a0))
              {
                OBJ_CALL(result = self->object.toSI(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.toSI(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "toSI", args);
          return NULL;
        }

        static PyObject *t_Unit_toString(t_Unit *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(Unit), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_Unit_get__angle(t_Unit *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getAngle());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }

        static PyObject *t_Unit_get__current(t_Unit *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrent());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }

        static PyObject *t_Unit_get__length(t_Unit *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getLength());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }

        static PyObject *t_Unit_get__mass(t_Unit *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getMass());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }

        static PyObject *t_Unit_get__name(t_Unit *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }

        static PyObject *t_Unit_get__time(t_Unit *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getTime());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "org/hipparchus/ode/ODEState.h"
#include "java/util/List.h"
#include "org/hipparchus/ode/events/ODEStepEndHandler.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/sampling/ODEStepHandler.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
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
          mids$[mid_addEventDetector_4cad2771a2849140] = env->getMethodID(cls, "addEventDetector", "(Lorg/hipparchus/ode/events/ODEEventDetector;)V");
          mids$[mid_addStepEndHandler_3dff193c3948a094] = env->getMethodID(cls, "addStepEndHandler", "(Lorg/hipparchus/ode/events/ODEStepEndHandler;)V");
          mids$[mid_addStepHandler_e6ea3ae127d5bfec] = env->getMethodID(cls, "addStepHandler", "(Lorg/hipparchus/ode/sampling/ODEStepHandler;)V");
          mids$[mid_clearEventDetectors_ff7cb6c242604316] = env->getMethodID(cls, "clearEventDetectors", "()V");
          mids$[mid_clearStepEndHandlers_ff7cb6c242604316] = env->getMethodID(cls, "clearStepEndHandlers", "()V");
          mids$[mid_clearStepHandlers_ff7cb6c242604316] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_getCurrentSignedStepsize_9981f74b2d109da6] = env->getMethodID(cls, "getCurrentSignedStepsize", "()D");
          mids$[mid_getEvaluations_d6ab429752e7c267] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getEventDetectors_d751c1a57012b438] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/List;");
          mids$[mid_getMaxEvaluations_d6ab429752e7c267] = env->getMethodID(cls, "getMaxEvaluations", "()I");
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getStepEndHandlers_d751c1a57012b438] = env->getMethodID(cls, "getStepEndHandlers", "()Ljava/util/List;");
          mids$[mid_getStepHandlers_d751c1a57012b438] = env->getMethodID(cls, "getStepHandlers", "()Ljava/util/List;");
          mids$[mid_getStepStart_abe7a2bda3ab9237] = env->getMethodID(cls, "getStepStart", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_integrate_3b00c059d3ccb86d] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_integrate_5a3cbbeaece41dc9] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/OrdinaryDifferentialEquation;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_setMaxEvaluations_8fd427ab23829bf5] = env->getMethodID(cls, "setMaxEvaluations", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void ODEIntegrator::addEventDetector(const ::org::hipparchus::ode::events::ODEEventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_4cad2771a2849140], a0.this$);
      }

      void ODEIntegrator::addStepEndHandler(const ::org::hipparchus::ode::events::ODEStepEndHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepEndHandler_3dff193c3948a094], a0.this$);
      }

      void ODEIntegrator::addStepHandler(const ::org::hipparchus::ode::sampling::ODEStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepHandler_e6ea3ae127d5bfec], a0.this$);
      }

      void ODEIntegrator::clearEventDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventDetectors_ff7cb6c242604316]);
      }

      void ODEIntegrator::clearStepEndHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepEndHandlers_ff7cb6c242604316]);
      }

      void ODEIntegrator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_ff7cb6c242604316]);
      }

      jdouble ODEIntegrator::getCurrentSignedStepsize() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCurrentSignedStepsize_9981f74b2d109da6]);
      }

      jint ODEIntegrator::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_d6ab429752e7c267]);
      }

      ::java::util::List ODEIntegrator::getEventDetectors() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEventDetectors_d751c1a57012b438]));
      }

      jint ODEIntegrator::getMaxEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_d6ab429752e7c267]);
      }

      ::java::lang::String ODEIntegrator::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      ::java::util::List ODEIntegrator::getStepEndHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepEndHandlers_d751c1a57012b438]));
      }

      ::java::util::List ODEIntegrator::getStepHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepHandlers_d751c1a57012b438]));
      }

      ::org::hipparchus::ode::ODEStateAndDerivative ODEIntegrator::getStepStart() const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getStepStart_abe7a2bda3ab9237]));
      }

      ::org::hipparchus::ode::ODEStateAndDerivative ODEIntegrator::integrate(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_3b00c059d3ccb86d], a0.this$, a1.this$, a2));
      }

      ::org::hipparchus::ode::ODEStateAndDerivative ODEIntegrator::integrate(const ::org::hipparchus::ode::OrdinaryDifferentialEquation & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_5a3cbbeaece41dc9], a0.this$, a1.this$, a2));
      }

      void ODEIntegrator::setMaxEvaluations(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxEvaluations_8fd427ab23829bf5], a0);
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
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *RawSphericalHarmonicsProvider$RawSphericalHarmonics::class$ = NULL;
          jmethodID *RawSphericalHarmonicsProvider$RawSphericalHarmonics::mids$ = NULL;
          bool RawSphericalHarmonicsProvider$RawSphericalHarmonics::live$ = false;

          jclass RawSphericalHarmonicsProvider$RawSphericalHarmonics::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getRawCnm_6d920aab27f0a3d2] = env->getMethodID(cls, "getRawCnm", "(II)D");
              mids$[mid_getRawSnm_6d920aab27f0a3d2] = env->getMethodID(cls, "getRawSnm", "(II)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble RawSphericalHarmonicsProvider$RawSphericalHarmonics::getRawCnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRawCnm_6d920aab27f0a3d2], a0, a1);
          }

          jdouble RawSphericalHarmonicsProvider$RawSphericalHarmonics::getRawSnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRawSnm_6d920aab27f0a3d2], a0, a1);
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
          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_getRawCnm(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics *self, PyObject *args);
          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_getRawSnm(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics *self, PyObject *args);

          static PyMethodDef t_RawSphericalHarmonicsProvider$RawSphericalHarmonics__methods_[] = {
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics, getRawCnm, METH_VARARGS),
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics, getRawSnm, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RawSphericalHarmonicsProvider$RawSphericalHarmonics)[] = {
            { Py_tp_methods, t_RawSphericalHarmonicsProvider$RawSphericalHarmonics__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RawSphericalHarmonicsProvider$RawSphericalHarmonics)[] = {
            &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
            NULL
          };

          DEFINE_TYPE(RawSphericalHarmonicsProvider$RawSphericalHarmonics, t_RawSphericalHarmonicsProvider$RawSphericalHarmonics, RawSphericalHarmonicsProvider$RawSphericalHarmonics);

          void t_RawSphericalHarmonicsProvider$RawSphericalHarmonics::install(PyObject *module)
          {
            installType(&PY_TYPE(RawSphericalHarmonicsProvider$RawSphericalHarmonics), &PY_TYPE_DEF(RawSphericalHarmonicsProvider$RawSphericalHarmonics), module, "RawSphericalHarmonicsProvider$RawSphericalHarmonics", 0);
          }

          void t_RawSphericalHarmonicsProvider$RawSphericalHarmonics::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider$RawSphericalHarmonics), "class_", make_descriptor(RawSphericalHarmonicsProvider$RawSphericalHarmonics::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider$RawSphericalHarmonics), "wrapfn_", make_descriptor(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider$RawSphericalHarmonics), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RawSphericalHarmonicsProvider$RawSphericalHarmonics::initializeClass, 1)))
              return NULL;
            return t_RawSphericalHarmonicsProvider$RawSphericalHarmonics::wrap_Object(RawSphericalHarmonicsProvider$RawSphericalHarmonics(((t_RawSphericalHarmonicsProvider$RawSphericalHarmonics *) arg)->object.this$));
          }
          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RawSphericalHarmonicsProvider$RawSphericalHarmonics::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_getRawCnm(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getRawCnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getRawCnm", args);
            return NULL;
          }

          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_getRawSnm(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getRawSnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getRawSnm", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FiniteDifferencesDifferentiator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateFunctionDifferentiator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/UnivariateVectorFunction.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/UnivariateVectorFunctionDifferentiator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/UnivariateMatrixFunctionDifferentiator.h"
#include "org/hipparchus/analysis/UnivariateMatrixFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FiniteDifferencesDifferentiator::class$ = NULL;
        jmethodID *FiniteDifferencesDifferentiator::mids$ = NULL;
        bool FiniteDifferencesDifferentiator::live$ = false;

        jclass FiniteDifferencesDifferentiator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FiniteDifferencesDifferentiator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4320462275d66e78] = env->getMethodID(cls, "<init>", "(ID)V");
            mids$[mid_init$_2baad0ec229f7c27] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_differentiate_734852731d7ffcb1] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");
            mids$[mid_differentiate_f183e80ab489f554] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateMatrixFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction;");
            mids$[mid_differentiate_a60494eeb9105ac5] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateVectorFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction;");
            mids$[mid_getNbPoints_d6ab429752e7c267] = env->getMethodID(cls, "getNbPoints", "()I");
            mids$[mid_getStepSize_9981f74b2d109da6] = env->getMethodID(cls, "getStepSize", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FiniteDifferencesDifferentiator::FiniteDifferencesDifferentiator(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4320462275d66e78, a0, a1)) {}

        FiniteDifferencesDifferentiator::FiniteDifferencesDifferentiator(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2baad0ec229f7c27, a0, a1, a2, a3)) {}

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction FiniteDifferencesDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callObjectMethod(this$, mids$[mid_differentiate_734852731d7ffcb1], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction FiniteDifferencesDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateMatrixFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction(env->callObjectMethod(this$, mids$[mid_differentiate_f183e80ab489f554], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction FiniteDifferencesDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateVectorFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction(env->callObjectMethod(this$, mids$[mid_differentiate_a60494eeb9105ac5], a0.this$));
        }

        jint FiniteDifferencesDifferentiator::getNbPoints() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbPoints_d6ab429752e7c267]);
        }

        jdouble FiniteDifferencesDifferentiator::getStepSize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStepSize_9981f74b2d109da6]);
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
        static PyObject *t_FiniteDifferencesDifferentiator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FiniteDifferencesDifferentiator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_FiniteDifferencesDifferentiator_init_(t_FiniteDifferencesDifferentiator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FiniteDifferencesDifferentiator_differentiate(t_FiniteDifferencesDifferentiator *self, PyObject *args);
        static PyObject *t_FiniteDifferencesDifferentiator_getNbPoints(t_FiniteDifferencesDifferentiator *self);
        static PyObject *t_FiniteDifferencesDifferentiator_getStepSize(t_FiniteDifferencesDifferentiator *self);
        static PyObject *t_FiniteDifferencesDifferentiator_get__nbPoints(t_FiniteDifferencesDifferentiator *self, void *data);
        static PyObject *t_FiniteDifferencesDifferentiator_get__stepSize(t_FiniteDifferencesDifferentiator *self, void *data);
        static PyGetSetDef t_FiniteDifferencesDifferentiator__fields_[] = {
          DECLARE_GET_FIELD(t_FiniteDifferencesDifferentiator, nbPoints),
          DECLARE_GET_FIELD(t_FiniteDifferencesDifferentiator, stepSize),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FiniteDifferencesDifferentiator__methods_[] = {
          DECLARE_METHOD(t_FiniteDifferencesDifferentiator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FiniteDifferencesDifferentiator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FiniteDifferencesDifferentiator, differentiate, METH_VARARGS),
          DECLARE_METHOD(t_FiniteDifferencesDifferentiator, getNbPoints, METH_NOARGS),
          DECLARE_METHOD(t_FiniteDifferencesDifferentiator, getStepSize, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FiniteDifferencesDifferentiator)[] = {
          { Py_tp_methods, t_FiniteDifferencesDifferentiator__methods_ },
          { Py_tp_init, (void *) t_FiniteDifferencesDifferentiator_init_ },
          { Py_tp_getset, t_FiniteDifferencesDifferentiator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FiniteDifferencesDifferentiator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FiniteDifferencesDifferentiator, t_FiniteDifferencesDifferentiator, FiniteDifferencesDifferentiator);

        void t_FiniteDifferencesDifferentiator::install(PyObject *module)
        {
          installType(&PY_TYPE(FiniteDifferencesDifferentiator), &PY_TYPE_DEF(FiniteDifferencesDifferentiator), module, "FiniteDifferencesDifferentiator", 0);
        }

        void t_FiniteDifferencesDifferentiator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FiniteDifferencesDifferentiator), "class_", make_descriptor(FiniteDifferencesDifferentiator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FiniteDifferencesDifferentiator), "wrapfn_", make_descriptor(t_FiniteDifferencesDifferentiator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FiniteDifferencesDifferentiator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FiniteDifferencesDifferentiator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FiniteDifferencesDifferentiator::initializeClass, 1)))
            return NULL;
          return t_FiniteDifferencesDifferentiator::wrap_Object(FiniteDifferencesDifferentiator(((t_FiniteDifferencesDifferentiator *) arg)->object.this$));
        }
        static PyObject *t_FiniteDifferencesDifferentiator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FiniteDifferencesDifferentiator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_FiniteDifferencesDifferentiator_init_(t_FiniteDifferencesDifferentiator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              jdouble a1;
              FiniteDifferencesDifferentiator object((jobject) NULL);

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                INT_CALL(object = FiniteDifferencesDifferentiator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              FiniteDifferencesDifferentiator object((jobject) NULL);

              if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = FiniteDifferencesDifferentiator(a0, a1, a2, a3));
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

        static PyObject *t_FiniteDifferencesDifferentiator_differentiate(t_FiniteDifferencesDifferentiator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.differentiate(a0));
                return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableFunction::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::analysis::UnivariateMatrixFunction a0((jobject) NULL);
              ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateMatrixFunction::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.differentiate(a0));
                return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableMatrixFunction::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::analysis::UnivariateVectorFunction a0((jobject) NULL);
              ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateVectorFunction::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.differentiate(a0));
                return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableVectorFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "differentiate", args);
          return NULL;
        }

        static PyObject *t_FiniteDifferencesDifferentiator_getNbPoints(t_FiniteDifferencesDifferentiator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbPoints());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FiniteDifferencesDifferentiator_getStepSize(t_FiniteDifferencesDifferentiator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStepSize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FiniteDifferencesDifferentiator_get__nbPoints(t_FiniteDifferencesDifferentiator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbPoints());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FiniteDifferencesDifferentiator_get__stepSize(t_FiniteDifferencesDifferentiator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStepSize());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/BistaticRangeBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/BistaticRange.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *BistaticRangeBuilder::class$ = NULL;
          jmethodID *BistaticRangeBuilder::mids$ = NULL;
          bool BistaticRangeBuilder::live$ = false;

          jclass BistaticRangeBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/BistaticRangeBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_10af0e412dc0df53] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_326e0e89569609c7] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/BistaticRange;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeBuilder::BistaticRangeBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::estimation::measurements::GroundStation & a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_10af0e412dc0df53, a0.this$, a1.this$, a2.this$, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::BistaticRange BistaticRangeBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::BistaticRange(env->callObjectMethod(this$, mids$[mid_build_326e0e89569609c7], a0.this$, a1.this$));
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
          static PyObject *t_BistaticRangeBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeBuilder_of_(t_BistaticRangeBuilder *self, PyObject *args);
          static int t_BistaticRangeBuilder_init_(t_BistaticRangeBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BistaticRangeBuilder_build(t_BistaticRangeBuilder *self, PyObject *args);
          static PyObject *t_BistaticRangeBuilder_get__parameters_(t_BistaticRangeBuilder *self, void *data);
          static PyGetSetDef t_BistaticRangeBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_BistaticRangeBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BistaticRangeBuilder__methods_[] = {
            DECLARE_METHOD(t_BistaticRangeBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_BistaticRangeBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BistaticRangeBuilder)[] = {
            { Py_tp_methods, t_BistaticRangeBuilder__methods_ },
            { Py_tp_init, (void *) t_BistaticRangeBuilder_init_ },
            { Py_tp_getset, t_BistaticRangeBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BistaticRangeBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(BistaticRangeBuilder, t_BistaticRangeBuilder, BistaticRangeBuilder);
          PyObject *t_BistaticRangeBuilder::wrap_Object(const BistaticRangeBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_BistaticRangeBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_BistaticRangeBuilder *self = (t_BistaticRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_BistaticRangeBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_BistaticRangeBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_BistaticRangeBuilder *self = (t_BistaticRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_BistaticRangeBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(BistaticRangeBuilder), &PY_TYPE_DEF(BistaticRangeBuilder), module, "BistaticRangeBuilder", 0);
          }

          void t_BistaticRangeBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeBuilder), "class_", make_descriptor(BistaticRangeBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeBuilder), "wrapfn_", make_descriptor(t_BistaticRangeBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BistaticRangeBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BistaticRangeBuilder::initializeClass, 1)))
              return NULL;
            return t_BistaticRangeBuilder::wrap_Object(BistaticRangeBuilder(((t_BistaticRangeBuilder *) arg)->object.this$));
          }
          static PyObject *t_BistaticRangeBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BistaticRangeBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_BistaticRangeBuilder_of_(t_BistaticRangeBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_BistaticRangeBuilder_init_(t_BistaticRangeBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            BistaticRangeBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = BistaticRangeBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(BistaticRange);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BistaticRangeBuilder_build(t_BistaticRangeBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::BistaticRange result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_BistaticRange::wrap_Object(result);
            }

            return callSuper(PY_TYPE(BistaticRangeBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_BistaticRangeBuilder_get__parameters_(t_BistaticRangeBuilder *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateFunctionPenaltyAdapter.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *MultivariateFunctionPenaltyAdapter::class$ = NULL;
          jmethodID *MultivariateFunctionPenaltyAdapter::mids$ = NULL;
          bool MultivariateFunctionPenaltyAdapter::live$ = false;

          jclass MultivariateFunctionPenaltyAdapter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/MultivariateFunctionPenaltyAdapter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b0730f46a04f2d28] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateFunction;[D[DD[D)V");
              mids$[mid_value_a40ce4fdf6559ac0] = env->getMethodID(cls, "value", "([D)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MultivariateFunctionPenaltyAdapter::MultivariateFunctionPenaltyAdapter(const ::org::hipparchus::analysis::MultivariateFunction & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, jdouble a3, const JArray< jdouble > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b0730f46a04f2d28, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

          jdouble MultivariateFunctionPenaltyAdapter::value(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_value_a40ce4fdf6559ac0], a0.this$);
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
          static PyObject *t_MultivariateFunctionPenaltyAdapter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultivariateFunctionPenaltyAdapter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MultivariateFunctionPenaltyAdapter_init_(t_MultivariateFunctionPenaltyAdapter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MultivariateFunctionPenaltyAdapter_value(t_MultivariateFunctionPenaltyAdapter *self, PyObject *arg);

          static PyMethodDef t_MultivariateFunctionPenaltyAdapter__methods_[] = {
            DECLARE_METHOD(t_MultivariateFunctionPenaltyAdapter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultivariateFunctionPenaltyAdapter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultivariateFunctionPenaltyAdapter, value, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MultivariateFunctionPenaltyAdapter)[] = {
            { Py_tp_methods, t_MultivariateFunctionPenaltyAdapter__methods_ },
            { Py_tp_init, (void *) t_MultivariateFunctionPenaltyAdapter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MultivariateFunctionPenaltyAdapter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MultivariateFunctionPenaltyAdapter, t_MultivariateFunctionPenaltyAdapter, MultivariateFunctionPenaltyAdapter);

          void t_MultivariateFunctionPenaltyAdapter::install(PyObject *module)
          {
            installType(&PY_TYPE(MultivariateFunctionPenaltyAdapter), &PY_TYPE_DEF(MultivariateFunctionPenaltyAdapter), module, "MultivariateFunctionPenaltyAdapter", 0);
          }

          void t_MultivariateFunctionPenaltyAdapter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunctionPenaltyAdapter), "class_", make_descriptor(MultivariateFunctionPenaltyAdapter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunctionPenaltyAdapter), "wrapfn_", make_descriptor(t_MultivariateFunctionPenaltyAdapter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunctionPenaltyAdapter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MultivariateFunctionPenaltyAdapter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MultivariateFunctionPenaltyAdapter::initializeClass, 1)))
              return NULL;
            return t_MultivariateFunctionPenaltyAdapter::wrap_Object(MultivariateFunctionPenaltyAdapter(((t_MultivariateFunctionPenaltyAdapter *) arg)->object.this$));
          }
          static PyObject *t_MultivariateFunctionPenaltyAdapter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MultivariateFunctionPenaltyAdapter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MultivariateFunctionPenaltyAdapter_init_(t_MultivariateFunctionPenaltyAdapter *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            jdouble a3;
            JArray< jdouble > a4((jobject) NULL);
            MultivariateFunctionPenaltyAdapter object((jobject) NULL);

            if (!parseArgs(args, "k[D[DD[D", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = MultivariateFunctionPenaltyAdapter(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MultivariateFunctionPenaltyAdapter_value(t_MultivariateFunctionPenaltyAdapter *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "[D", &a0))
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParameters.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *SpacecraftParametersKey::class$ = NULL;
            jmethodID *SpacecraftParametersKey::mids$ = NULL;
            bool SpacecraftParametersKey::live$ = false;
            SpacecraftParametersKey *SpacecraftParametersKey::COMMENT = NULL;
            SpacecraftParametersKey *SpacecraftParametersKey::DRAG_AREA = NULL;
            SpacecraftParametersKey *SpacecraftParametersKey::DRAG_COEFF = NULL;
            SpacecraftParametersKey *SpacecraftParametersKey::MASS = NULL;
            SpacecraftParametersKey *SpacecraftParametersKey::SOLAR_RAD_AREA = NULL;
            SpacecraftParametersKey *SpacecraftParametersKey::SOLAR_RAD_COEFF = NULL;

            jclass SpacecraftParametersKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_fce2f4276d4b34ac] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;)Z");
                mids$[mid_valueOf_558e7eae3c7a2f1b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;");
                mids$[mid_values_6446e9444a35bc1b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new SpacecraftParametersKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                DRAG_AREA = new SpacecraftParametersKey(env->getStaticObjectField(cls, "DRAG_AREA", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                DRAG_COEFF = new SpacecraftParametersKey(env->getStaticObjectField(cls, "DRAG_COEFF", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                MASS = new SpacecraftParametersKey(env->getStaticObjectField(cls, "MASS", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                SOLAR_RAD_AREA = new SpacecraftParametersKey(env->getStaticObjectField(cls, "SOLAR_RAD_AREA", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                SOLAR_RAD_COEFF = new SpacecraftParametersKey(env->getStaticObjectField(cls, "SOLAR_RAD_COEFF", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean SpacecraftParametersKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_fce2f4276d4b34ac], a0.this$, a1.this$, a2.this$);
            }

            SpacecraftParametersKey SpacecraftParametersKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return SpacecraftParametersKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_558e7eae3c7a2f1b], a0.this$));
            }

            JArray< SpacecraftParametersKey > SpacecraftParametersKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< SpacecraftParametersKey >(env->callStaticObjectMethod(cls, mids$[mid_values_6446e9444a35bc1b]));
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
            static PyObject *t_SpacecraftParametersKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SpacecraftParametersKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SpacecraftParametersKey_of_(t_SpacecraftParametersKey *self, PyObject *args);
            static PyObject *t_SpacecraftParametersKey_process(t_SpacecraftParametersKey *self, PyObject *args);
            static PyObject *t_SpacecraftParametersKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_SpacecraftParametersKey_values(PyTypeObject *type);
            static PyObject *t_SpacecraftParametersKey_get__parameters_(t_SpacecraftParametersKey *self, void *data);
            static PyGetSetDef t_SpacecraftParametersKey__fields_[] = {
              DECLARE_GET_FIELD(t_SpacecraftParametersKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SpacecraftParametersKey__methods_[] = {
              DECLARE_METHOD(t_SpacecraftParametersKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParametersKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParametersKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_SpacecraftParametersKey, process, METH_VARARGS),
              DECLARE_METHOD(t_SpacecraftParametersKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParametersKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SpacecraftParametersKey)[] = {
              { Py_tp_methods, t_SpacecraftParametersKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_SpacecraftParametersKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SpacecraftParametersKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(SpacecraftParametersKey, t_SpacecraftParametersKey, SpacecraftParametersKey);
            PyObject *t_SpacecraftParametersKey::wrap_Object(const SpacecraftParametersKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_SpacecraftParametersKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SpacecraftParametersKey *self = (t_SpacecraftParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_SpacecraftParametersKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_SpacecraftParametersKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SpacecraftParametersKey *self = (t_SpacecraftParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_SpacecraftParametersKey::install(PyObject *module)
            {
              installType(&PY_TYPE(SpacecraftParametersKey), &PY_TYPE_DEF(SpacecraftParametersKey), module, "SpacecraftParametersKey", 0);
            }

            void t_SpacecraftParametersKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "class_", make_descriptor(SpacecraftParametersKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "wrapfn_", make_descriptor(t_SpacecraftParametersKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(SpacecraftParametersKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "COMMENT", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "DRAG_AREA", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::DRAG_AREA)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "DRAG_COEFF", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::DRAG_COEFF)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "MASS", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::MASS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "SOLAR_RAD_AREA", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::SOLAR_RAD_AREA)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "SOLAR_RAD_COEFF", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::SOLAR_RAD_COEFF)));
            }

            static PyObject *t_SpacecraftParametersKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SpacecraftParametersKey::initializeClass, 1)))
                return NULL;
              return t_SpacecraftParametersKey::wrap_Object(SpacecraftParametersKey(((t_SpacecraftParametersKey *) arg)->object.this$));
            }
            static PyObject *t_SpacecraftParametersKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SpacecraftParametersKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_SpacecraftParametersKey_of_(t_SpacecraftParametersKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_SpacecraftParametersKey_process(t_SpacecraftParametersKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_SpacecraftParametersKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              SpacecraftParametersKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::SpacecraftParametersKey::valueOf(a0));
                return t_SpacecraftParametersKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_SpacecraftParametersKey_values(PyTypeObject *type)
            {
              JArray< SpacecraftParametersKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::SpacecraftParametersKey::values());
              return JArray<jobject>(result.this$).wrap(t_SpacecraftParametersKey::wrap_jobject);
            }
            static PyObject *t_SpacecraftParametersKey_get__parameters_(t_SpacecraftParametersKey *self, void *data)
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
#include "org/orekit/attitudes/PythonAttitudeBuilder.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeBuilder.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonAttitudeBuilder::class$ = NULL;
      jmethodID *PythonAttitudeBuilder::mids$ = NULL;
      bool PythonAttitudeBuilder::live$ = false;

      jclass PythonAttitudeBuilder::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonAttitudeBuilder");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_build_16f6708eb1cda684] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_build_11d80d4c91effa8b] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/TimeStampedAngularCoordinates;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAttitudeBuilder::PythonAttitudeBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonAttitudeBuilder::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonAttitudeBuilder::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonAttitudeBuilder::pythonExtension(jlong a0) const
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
    namespace attitudes {
      static PyObject *t_PythonAttitudeBuilder_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAttitudeBuilder_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAttitudeBuilder_init_(t_PythonAttitudeBuilder *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAttitudeBuilder_finalize(t_PythonAttitudeBuilder *self);
      static PyObject *t_PythonAttitudeBuilder_pythonExtension(t_PythonAttitudeBuilder *self, PyObject *args);
      static jobject JNICALL t_PythonAttitudeBuilder_build0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonAttitudeBuilder_build1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static void JNICALL t_PythonAttitudeBuilder_pythonDecRef2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAttitudeBuilder_get__self(t_PythonAttitudeBuilder *self, void *data);
      static PyGetSetDef t_PythonAttitudeBuilder__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAttitudeBuilder, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAttitudeBuilder__methods_[] = {
        DECLARE_METHOD(t_PythonAttitudeBuilder, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeBuilder, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeBuilder, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAttitudeBuilder, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeBuilder)[] = {
        { Py_tp_methods, t_PythonAttitudeBuilder__methods_ },
        { Py_tp_init, (void *) t_PythonAttitudeBuilder_init_ },
        { Py_tp_getset, t_PythonAttitudeBuilder__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAttitudeBuilder)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonAttitudeBuilder, t_PythonAttitudeBuilder, PythonAttitudeBuilder);

      void t_PythonAttitudeBuilder::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAttitudeBuilder), &PY_TYPE_DEF(PythonAttitudeBuilder), module, "PythonAttitudeBuilder", 1);
      }

      void t_PythonAttitudeBuilder::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeBuilder), "class_", make_descriptor(PythonAttitudeBuilder::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeBuilder), "wrapfn_", make_descriptor(t_PythonAttitudeBuilder::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeBuilder), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAttitudeBuilder::initializeClass);
        JNINativeMethod methods[] = {
          { "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/TimeStampedAngularCoordinates;)Lorg/orekit/attitudes/Attitude;", (void *) t_PythonAttitudeBuilder_build0 },
          { "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)Lorg/orekit/attitudes/FieldAttitude;", (void *) t_PythonAttitudeBuilder_build1 },
          { "pythonDecRef", "()V", (void *) t_PythonAttitudeBuilder_pythonDecRef2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonAttitudeBuilder_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAttitudeBuilder::initializeClass, 1)))
          return NULL;
        return t_PythonAttitudeBuilder::wrap_Object(PythonAttitudeBuilder(((t_PythonAttitudeBuilder *) arg)->object.this$));
      }
      static PyObject *t_PythonAttitudeBuilder_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAttitudeBuilder::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAttitudeBuilder_init_(t_PythonAttitudeBuilder *self, PyObject *args, PyObject *kwds)
      {
        PythonAttitudeBuilder object((jobject) NULL);

        INT_CALL(object = PythonAttitudeBuilder());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAttitudeBuilder_finalize(t_PythonAttitudeBuilder *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAttitudeBuilder_pythonExtension(t_PythonAttitudeBuilder *self, PyObject *args)
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

      static jobject JNICALL t_PythonAttitudeBuilder_build0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeBuilder::mids$[PythonAttitudeBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a0));
        PyObject *o1 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a1));
        PyObject *o2 = ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(::org::orekit::utils::TimeStampedAngularCoordinates(a2));
        PyObject *result = PyObject_CallMethod(obj, "build", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::Attitude::initializeClass, &value))
        {
          throwTypeError("build", result);
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

      static jobject JNICALL t_PythonAttitudeBuilder_build1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeBuilder::mids$[PythonAttitudeBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::FieldAttitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a0));
        PyObject *o1 = ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(::org::orekit::utils::FieldPVCoordinatesProvider(a1));
        PyObject *o2 = ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::wrap_Object(::org::orekit::utils::TimeStampedFieldAngularCoordinates(a2));
        PyObject *result = PyObject_CallMethod(obj, "build", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::FieldAttitude::initializeClass, &value))
        {
          throwTypeError("build", result);
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

      static void JNICALL t_PythonAttitudeBuilder_pythonDecRef2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeBuilder::mids$[PythonAttitudeBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAttitudeBuilder::mids$[PythonAttitudeBuilder::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAttitudeBuilder_get__self(t_PythonAttitudeBuilder *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmTle.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmTle::class$ = NULL;
              jmethodID *OmmTle::mids$ = NULL;
              bool OmmTle::live$ = false;
              jint OmmTle::EPHEMERIS_TYPE_PPT3 = (jint) 0;
              jint OmmTle::EPHEMERIS_TYPE_SGP = (jint) 0;
              jint OmmTle::EPHEMERIS_TYPE_SGP4 = (jint) 0;
              jint OmmTle::EPHEMERIS_TYPE_SGP4_XP = (jint) 0;
              jint OmmTle::EPHEMERIS_TYPE_SPECIAL_PERTURBATIONS = (jint) 0;

              jclass OmmTle::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmTle");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getAGoM_9981f74b2d109da6] = env->getMethodID(cls, "getAGoM", "()D");
                  mids$[mid_getBStar_9981f74b2d109da6] = env->getMethodID(cls, "getBStar", "()D");
                  mids$[mid_getBTerm_9981f74b2d109da6] = env->getMethodID(cls, "getBTerm", "()D");
                  mids$[mid_getClassificationType_153df32fe8b51cb6] = env->getMethodID(cls, "getClassificationType", "()C");
                  mids$[mid_getElementSetNumber_d6ab429752e7c267] = env->getMethodID(cls, "getElementSetNumber", "()I");
                  mids$[mid_getEphemerisType_d6ab429752e7c267] = env->getMethodID(cls, "getEphemerisType", "()I");
                  mids$[mid_getMeanMotionDot_9981f74b2d109da6] = env->getMethodID(cls, "getMeanMotionDot", "()D");
                  mids$[mid_getMeanMotionDotDot_9981f74b2d109da6] = env->getMethodID(cls, "getMeanMotionDotDot", "()D");
                  mids$[mid_getNoradID_d6ab429752e7c267] = env->getMethodID(cls, "getNoradID", "()I");
                  mids$[mid_getRevAtEpoch_d6ab429752e7c267] = env->getMethodID(cls, "getRevAtEpoch", "()I");
                  mids$[mid_setAGoM_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAGoM", "(D)V");
                  mids$[mid_setBStar_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setBStar", "(D)V");
                  mids$[mid_setBTerm_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setBTerm", "(D)V");
                  mids$[mid_setClassificationType_e8d07df586815a42] = env->getMethodID(cls, "setClassificationType", "(C)V");
                  mids$[mid_setElementSetNo_8fd427ab23829bf5] = env->getMethodID(cls, "setElementSetNo", "(I)V");
                  mids$[mid_setEphemerisType_8fd427ab23829bf5] = env->getMethodID(cls, "setEphemerisType", "(I)V");
                  mids$[mid_setMeanMotionDot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMeanMotionDot", "(D)V");
                  mids$[mid_setMeanMotionDotDot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMeanMotionDotDot", "(D)V");
                  mids$[mid_setNoradID_8fd427ab23829bf5] = env->getMethodID(cls, "setNoradID", "(I)V");
                  mids$[mid_setRevAtEpoch_8fd427ab23829bf5] = env->getMethodID(cls, "setRevAtEpoch", "(I)V");
                  mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  EPHEMERIS_TYPE_PPT3 = env->getStaticIntField(cls, "EPHEMERIS_TYPE_PPT3");
                  EPHEMERIS_TYPE_SGP = env->getStaticIntField(cls, "EPHEMERIS_TYPE_SGP");
                  EPHEMERIS_TYPE_SGP4 = env->getStaticIntField(cls, "EPHEMERIS_TYPE_SGP4");
                  EPHEMERIS_TYPE_SGP4_XP = env->getStaticIntField(cls, "EPHEMERIS_TYPE_SGP4_XP");
                  EPHEMERIS_TYPE_SPECIAL_PERTURBATIONS = env->getStaticIntField(cls, "EPHEMERIS_TYPE_SPECIAL_PERTURBATIONS");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OmmTle::OmmTle() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              jdouble OmmTle::getAGoM() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAGoM_9981f74b2d109da6]);
              }

              jdouble OmmTle::getBStar() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getBStar_9981f74b2d109da6]);
              }

              jdouble OmmTle::getBTerm() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getBTerm_9981f74b2d109da6]);
              }

              jchar OmmTle::getClassificationType() const
              {
                return env->callCharMethod(this$, mids$[mid_getClassificationType_153df32fe8b51cb6]);
              }

              jint OmmTle::getElementSetNumber() const
              {
                return env->callIntMethod(this$, mids$[mid_getElementSetNumber_d6ab429752e7c267]);
              }

              jint OmmTle::getEphemerisType() const
              {
                return env->callIntMethod(this$, mids$[mid_getEphemerisType_d6ab429752e7c267]);
              }

              jdouble OmmTle::getMeanMotionDot() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMeanMotionDot_9981f74b2d109da6]);
              }

              jdouble OmmTle::getMeanMotionDotDot() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMeanMotionDotDot_9981f74b2d109da6]);
              }

              jint OmmTle::getNoradID() const
              {
                return env->callIntMethod(this$, mids$[mid_getNoradID_d6ab429752e7c267]);
              }

              jint OmmTle::getRevAtEpoch() const
              {
                return env->callIntMethod(this$, mids$[mid_getRevAtEpoch_d6ab429752e7c267]);
              }

              void OmmTle::setAGoM(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAGoM_1ad26e8c8c0cd65b], a0);
              }

              void OmmTle::setBStar(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBStar_1ad26e8c8c0cd65b], a0);
              }

              void OmmTle::setBTerm(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBTerm_1ad26e8c8c0cd65b], a0);
              }

              void OmmTle::setClassificationType(jchar a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setClassificationType_e8d07df586815a42], a0);
              }

              void OmmTle::setElementSetNo(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setElementSetNo_8fd427ab23829bf5], a0);
              }

              void OmmTle::setEphemerisType(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEphemerisType_8fd427ab23829bf5], a0);
              }

              void OmmTle::setMeanMotionDot(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMeanMotionDot_1ad26e8c8c0cd65b], a0);
              }

              void OmmTle::setMeanMotionDotDot(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMeanMotionDotDot_1ad26e8c8c0cd65b], a0);
              }

              void OmmTle::setNoradID(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNoradID_8fd427ab23829bf5], a0);
              }

              void OmmTle::setRevAtEpoch(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRevAtEpoch_8fd427ab23829bf5], a0);
              }

              void OmmTle::validate(jdouble a0) const
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
          namespace odm {
            namespace omm {
              static PyObject *t_OmmTle_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmTle_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OmmTle_init_(t_OmmTle *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OmmTle_getAGoM(t_OmmTle *self);
              static PyObject *t_OmmTle_getBStar(t_OmmTle *self);
              static PyObject *t_OmmTle_getBTerm(t_OmmTle *self);
              static PyObject *t_OmmTle_getClassificationType(t_OmmTle *self);
              static PyObject *t_OmmTle_getElementSetNumber(t_OmmTle *self);
              static PyObject *t_OmmTle_getEphemerisType(t_OmmTle *self);
              static PyObject *t_OmmTle_getMeanMotionDot(t_OmmTle *self);
              static PyObject *t_OmmTle_getMeanMotionDotDot(t_OmmTle *self);
              static PyObject *t_OmmTle_getNoradID(t_OmmTle *self);
              static PyObject *t_OmmTle_getRevAtEpoch(t_OmmTle *self);
              static PyObject *t_OmmTle_setAGoM(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setBStar(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setBTerm(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setClassificationType(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setElementSetNo(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setEphemerisType(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setMeanMotionDot(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setMeanMotionDotDot(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setNoradID(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setRevAtEpoch(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_validate(t_OmmTle *self, PyObject *args);
              static PyObject *t_OmmTle_get__aGoM(t_OmmTle *self, void *data);
              static int t_OmmTle_set__aGoM(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__bStar(t_OmmTle *self, void *data);
              static int t_OmmTle_set__bStar(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__bTerm(t_OmmTle *self, void *data);
              static int t_OmmTle_set__bTerm(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__classificationType(t_OmmTle *self, void *data);
              static int t_OmmTle_set__classificationType(t_OmmTle *self, PyObject *arg, void *data);
              static int t_OmmTle_set__elementSetNo(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__elementSetNumber(t_OmmTle *self, void *data);
              static PyObject *t_OmmTle_get__ephemerisType(t_OmmTle *self, void *data);
              static int t_OmmTle_set__ephemerisType(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__meanMotionDot(t_OmmTle *self, void *data);
              static int t_OmmTle_set__meanMotionDot(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__meanMotionDotDot(t_OmmTle *self, void *data);
              static int t_OmmTle_set__meanMotionDotDot(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__noradID(t_OmmTle *self, void *data);
              static int t_OmmTle_set__noradID(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__revAtEpoch(t_OmmTle *self, void *data);
              static int t_OmmTle_set__revAtEpoch(t_OmmTle *self, PyObject *arg, void *data);
              static PyGetSetDef t_OmmTle__fields_[] = {
                DECLARE_GETSET_FIELD(t_OmmTle, aGoM),
                DECLARE_GETSET_FIELD(t_OmmTle, bStar),
                DECLARE_GETSET_FIELD(t_OmmTle, bTerm),
                DECLARE_GETSET_FIELD(t_OmmTle, classificationType),
                DECLARE_SET_FIELD(t_OmmTle, elementSetNo),
                DECLARE_GET_FIELD(t_OmmTle, elementSetNumber),
                DECLARE_GETSET_FIELD(t_OmmTle, ephemerisType),
                DECLARE_GETSET_FIELD(t_OmmTle, meanMotionDot),
                DECLARE_GETSET_FIELD(t_OmmTle, meanMotionDotDot),
                DECLARE_GETSET_FIELD(t_OmmTle, noradID),
                DECLARE_GETSET_FIELD(t_OmmTle, revAtEpoch),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmTle__methods_[] = {
                DECLARE_METHOD(t_OmmTle, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmTle, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmTle, getAGoM, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getBStar, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getBTerm, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getClassificationType, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getElementSetNumber, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getEphemerisType, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getMeanMotionDot, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getMeanMotionDotDot, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getNoradID, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getRevAtEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, setAGoM, METH_O),
                DECLARE_METHOD(t_OmmTle, setBStar, METH_O),
                DECLARE_METHOD(t_OmmTle, setBTerm, METH_O),
                DECLARE_METHOD(t_OmmTle, setClassificationType, METH_O),
                DECLARE_METHOD(t_OmmTle, setElementSetNo, METH_O),
                DECLARE_METHOD(t_OmmTle, setEphemerisType, METH_O),
                DECLARE_METHOD(t_OmmTle, setMeanMotionDot, METH_O),
                DECLARE_METHOD(t_OmmTle, setMeanMotionDotDot, METH_O),
                DECLARE_METHOD(t_OmmTle, setNoradID, METH_O),
                DECLARE_METHOD(t_OmmTle, setRevAtEpoch, METH_O),
                DECLARE_METHOD(t_OmmTle, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmTle)[] = {
                { Py_tp_methods, t_OmmTle__methods_ },
                { Py_tp_init, (void *) t_OmmTle_init_ },
                { Py_tp_getset, t_OmmTle__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmTle)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(OmmTle, t_OmmTle, OmmTle);

              void t_OmmTle::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmTle), &PY_TYPE_DEF(OmmTle), module, "OmmTle", 0);
              }

              void t_OmmTle::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "class_", make_descriptor(OmmTle::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "wrapfn_", make_descriptor(t_OmmTle::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "boxfn_", make_descriptor(boxObject));
                env->getClass(OmmTle::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "EPHEMERIS_TYPE_PPT3", make_descriptor(OmmTle::EPHEMERIS_TYPE_PPT3));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "EPHEMERIS_TYPE_SGP", make_descriptor(OmmTle::EPHEMERIS_TYPE_SGP));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "EPHEMERIS_TYPE_SGP4", make_descriptor(OmmTle::EPHEMERIS_TYPE_SGP4));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "EPHEMERIS_TYPE_SGP4_XP", make_descriptor(OmmTle::EPHEMERIS_TYPE_SGP4_XP));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "EPHEMERIS_TYPE_SPECIAL_PERTURBATIONS", make_descriptor(OmmTle::EPHEMERIS_TYPE_SPECIAL_PERTURBATIONS));
              }

              static PyObject *t_OmmTle_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmTle::initializeClass, 1)))
                  return NULL;
                return t_OmmTle::wrap_Object(OmmTle(((t_OmmTle *) arg)->object.this$));
              }
              static PyObject *t_OmmTle_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmTle::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OmmTle_init_(t_OmmTle *self, PyObject *args, PyObject *kwds)
              {
                OmmTle object((jobject) NULL);

                INT_CALL(object = OmmTle());
                self->object = object;

                return 0;
              }

              static PyObject *t_OmmTle_getAGoM(t_OmmTle *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAGoM());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmTle_getBStar(t_OmmTle *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBStar());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmTle_getBTerm(t_OmmTle *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBTerm());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmTle_getClassificationType(t_OmmTle *self)
              {
                jchar result;
                OBJ_CALL(result = self->object.getClassificationType());
                return c2p(result);
              }

              static PyObject *t_OmmTle_getElementSetNumber(t_OmmTle *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getElementSetNumber());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OmmTle_getEphemerisType(t_OmmTle *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getEphemerisType());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OmmTle_getMeanMotionDot(t_OmmTle *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMeanMotionDot());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmTle_getMeanMotionDotDot(t_OmmTle *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMeanMotionDotDot());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmTle_getNoradID(t_OmmTle *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNoradID());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OmmTle_getRevAtEpoch(t_OmmTle *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getRevAtEpoch());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OmmTle_setAGoM(t_OmmTle *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAGoM(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAGoM", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setBStar(t_OmmTle *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setBStar(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBStar", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setBTerm(t_OmmTle *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setBTerm(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBTerm", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setClassificationType(t_OmmTle *self, PyObject *arg)
              {
                jchar a0;

                if (!parseArg(arg, "C", &a0))
                {
                  OBJ_CALL(self->object.setClassificationType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setClassificationType", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setElementSetNo(t_OmmTle *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setElementSetNo(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setElementSetNo", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setEphemerisType(t_OmmTle *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setEphemerisType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEphemerisType", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setMeanMotionDot(t_OmmTle *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMeanMotionDot(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMeanMotionDot", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setMeanMotionDotDot(t_OmmTle *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMeanMotionDotDot(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMeanMotionDotDot", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setNoradID(t_OmmTle *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNoradID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNoradID", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setRevAtEpoch(t_OmmTle *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setRevAtEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRevAtEpoch", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_validate(t_OmmTle *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OmmTle), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_OmmTle_get__aGoM(t_OmmTle *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAGoM());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OmmTle_set__aGoM(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAGoM(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "aGoM", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__bStar(t_OmmTle *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getBStar());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OmmTle_set__bStar(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setBStar(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "bStar", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__bTerm(t_OmmTle *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getBTerm());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OmmTle_set__bTerm(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setBTerm(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "bTerm", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__classificationType(t_OmmTle *self, void *data)
              {
                jchar value;
                OBJ_CALL(value = self->object.getClassificationType());
                return c2p(value);
              }
              static int t_OmmTle_set__classificationType(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jchar value;
                  if (!parseArg(arg, "C", &value))
                  {
                    INT_CALL(self->object.setClassificationType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "classificationType", arg);
                return -1;
              }

              static int t_OmmTle_set__elementSetNo(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setElementSetNo(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "elementSetNo", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__elementSetNumber(t_OmmTle *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getElementSetNumber());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_OmmTle_get__ephemerisType(t_OmmTle *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getEphemerisType());
                return PyLong_FromLong((long) value);
              }
              static int t_OmmTle_set__ephemerisType(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setEphemerisType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ephemerisType", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__meanMotionDot(t_OmmTle *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMeanMotionDot());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OmmTle_set__meanMotionDot(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMeanMotionDot(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "meanMotionDot", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__meanMotionDotDot(t_OmmTle *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMeanMotionDotDot());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OmmTle_set__meanMotionDotDot(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMeanMotionDotDot(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "meanMotionDotDot", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__noradID(t_OmmTle *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNoradID());
                return PyLong_FromLong((long) value);
              }
              static int t_OmmTle_set__noradID(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNoradID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "noradID", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__revAtEpoch(t_OmmTle *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getRevAtEpoch());
                return PyLong_FromLong((long) value);
              }
              static int t_OmmTle_set__revAtEpoch(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setRevAtEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "revAtEpoch", arg);
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
#include "org/orekit/data/FieldDelaunayArguments.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *FieldDelaunayArguments::class$ = NULL;
      jmethodID *FieldDelaunayArguments::mids$ = NULL;
      bool FieldDelaunayArguments::live$ = false;

      jclass FieldDelaunayArguments::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/FieldDelaunayArguments");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_6a30bb7ef52ef1c2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getD_08d37e3f77b7239d] = env->getMethodID(cls, "getD", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDDot_08d37e3f77b7239d] = env->getMethodID(cls, "getDDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDate_1fea28374011eef5] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getF_08d37e3f77b7239d] = env->getMethodID(cls, "getF", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getFDot_08d37e3f77b7239d] = env->getMethodID(cls, "getFDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getGamma_08d37e3f77b7239d] = env->getMethodID(cls, "getGamma", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getGammaDot_08d37e3f77b7239d] = env->getMethodID(cls, "getGammaDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getL_08d37e3f77b7239d] = env->getMethodID(cls, "getL", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLDot_08d37e3f77b7239d] = env->getMethodID(cls, "getLDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLPrime_08d37e3f77b7239d] = env->getMethodID(cls, "getLPrime", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLPrimeDot_08d37e3f77b7239d] = env->getMethodID(cls, "getLPrimeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOmega_08d37e3f77b7239d] = env->getMethodID(cls, "getOmega", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOmegaDot_08d37e3f77b7239d] = env->getMethodID(cls, "getOmegaDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getTC_08d37e3f77b7239d] = env->getMethodID(cls, "getTC", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldDelaunayArguments::FieldDelaunayArguments(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::hipparchus::CalculusFieldElement & a12, const ::org::hipparchus::CalculusFieldElement & a13) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6a30bb7ef52ef1c2, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getD() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getD_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getDDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDDot_08d37e3f77b7239d]));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldDelaunayArguments::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_1fea28374011eef5]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getF() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getF_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getFDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getGamma() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGamma_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getGammaDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGammaDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getL() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getL_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getLDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getLPrime() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLPrime_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getLPrimeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLPrimeDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getOmega() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOmega_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getOmegaDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOmegaDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getTC() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTC_08d37e3f77b7239d]));
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
      static PyObject *t_FieldDelaunayArguments_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDelaunayArguments_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDelaunayArguments_of_(t_FieldDelaunayArguments *self, PyObject *args);
      static int t_FieldDelaunayArguments_init_(t_FieldDelaunayArguments *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldDelaunayArguments_getD(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getDDot(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getDate(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getF(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getFDot(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getGamma(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getGammaDot(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getL(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getLDot(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getLPrime(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getLPrimeDot(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getOmega(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getOmegaDot(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getTC(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_get__d(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__dDot(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__date(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__f(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__fDot(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__gamma(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__gammaDot(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__l(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__lDot(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__lPrime(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__lPrimeDot(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__omega(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__omegaDot(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__tC(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__parameters_(t_FieldDelaunayArguments *self, void *data);
      static PyGetSetDef t_FieldDelaunayArguments__fields_[] = {
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, d),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, dDot),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, date),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, f),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, fDot),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, gamma),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, gammaDot),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, l),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, lDot),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, lPrime),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, lPrimeDot),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, omega),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, omegaDot),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, tC),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldDelaunayArguments__methods_[] = {
        DECLARE_METHOD(t_FieldDelaunayArguments, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDelaunayArguments, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDelaunayArguments, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getD, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getDDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getF, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getFDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getGamma, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getGammaDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getL, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getLDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getLPrime, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getLPrimeDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getOmega, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getOmegaDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getTC, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldDelaunayArguments)[] = {
        { Py_tp_methods, t_FieldDelaunayArguments__methods_ },
        { Py_tp_init, (void *) t_FieldDelaunayArguments_init_ },
        { Py_tp_getset, t_FieldDelaunayArguments__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldDelaunayArguments)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldDelaunayArguments, t_FieldDelaunayArguments, FieldDelaunayArguments);
      PyObject *t_FieldDelaunayArguments::wrap_Object(const FieldDelaunayArguments& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDelaunayArguments::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDelaunayArguments *self = (t_FieldDelaunayArguments *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldDelaunayArguments::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDelaunayArguments::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDelaunayArguments *self = (t_FieldDelaunayArguments *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldDelaunayArguments::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldDelaunayArguments), &PY_TYPE_DEF(FieldDelaunayArguments), module, "FieldDelaunayArguments", 0);
      }

      void t_FieldDelaunayArguments::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDelaunayArguments), "class_", make_descriptor(FieldDelaunayArguments::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDelaunayArguments), "wrapfn_", make_descriptor(t_FieldDelaunayArguments::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDelaunayArguments), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldDelaunayArguments_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldDelaunayArguments::initializeClass, 1)))
          return NULL;
        return t_FieldDelaunayArguments::wrap_Object(FieldDelaunayArguments(((t_FieldDelaunayArguments *) arg)->object.this$));
      }
      static PyObject *t_FieldDelaunayArguments_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldDelaunayArguments::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldDelaunayArguments_of_(t_FieldDelaunayArguments *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldDelaunayArguments_init_(t_FieldDelaunayArguments *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
        PyTypeObject **p3;
        ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
        PyTypeObject **p4;
        ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
        PyTypeObject **p5;
        ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
        PyTypeObject **p6;
        ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
        PyTypeObject **p7;
        ::org::hipparchus::CalculusFieldElement a8((jobject) NULL);
        PyTypeObject **p8;
        ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
        PyTypeObject **p9;
        ::org::hipparchus::CalculusFieldElement a10((jobject) NULL);
        PyTypeObject **p10;
        ::org::hipparchus::CalculusFieldElement a11((jobject) NULL);
        PyTypeObject **p11;
        ::org::hipparchus::CalculusFieldElement a12((jobject) NULL);
        PyTypeObject **p12;
        ::org::hipparchus::CalculusFieldElement a13((jobject) NULL);
        PyTypeObject **p13;
        FieldDelaunayArguments object((jobject) NULL);

        if (!parseArgs(args, "KKKKKKKKKKKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13, &p13, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldDelaunayArguments(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldDelaunayArguments_getD(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getD());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getDDot(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getDDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getDate(t_FieldDelaunayArguments *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldDelaunayArguments_getF(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getF());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getFDot(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getFDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getGamma(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getGamma());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getGammaDot(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getGammaDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getL(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getL());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getLDot(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getLPrime(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLPrime());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getLPrimeDot(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLPrimeDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getOmega(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getOmega());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getOmegaDot(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getOmegaDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getTC(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getTC());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_FieldDelaunayArguments_get__parameters_(t_FieldDelaunayArguments *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldDelaunayArguments_get__d(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getD());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__dDot(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getDDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__date(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__f(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getF());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__fDot(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getFDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__gamma(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getGamma());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__gammaDot(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getGammaDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__l(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getL());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__lDot(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__lPrime(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLPrime());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__lPrimeDot(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLPrimeDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__omega(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getOmega());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__omegaDot(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getOmegaDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__tC(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getTC());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/AbstractMessageWriter.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/utils/generation/MessageWriter.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *AbstractMessageWriter::class$ = NULL;
            jmethodID *AbstractMessageWriter::mids$ = NULL;
            bool AbstractMessageWriter::live$ = false;
            ::java::lang::String *AbstractMessageWriter::DEFAULT_ORIGINATOR = NULL;

            jclass AbstractMessageWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/AbstractMessageWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_3026836a952fe988] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;DLorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_getContext_fc8d452549dd65ec] = env->getMethodID(cls, "getContext", "()Lorg/orekit/files/ccsds/utils/ContextBinding;");
                mids$[mid_getDefaultVersion_9981f74b2d109da6] = env->getMethodID(cls, "getDefaultVersion", "()D");
                mids$[mid_getFormatVersionKey_d2c8eb4129821f0e] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getRoot_d2c8eb4129821f0e] = env->getMethodID(cls, "getRoot", "()Ljava/lang/String;");
                mids$[mid_getTimeConverter_45cb786b56bfc0bf] = env->getMethodID(cls, "getTimeConverter", "()Lorg/orekit/files/ccsds/definitions/TimeConverter;");
                mids$[mid_getVersion_9981f74b2d109da6] = env->getMethodID(cls, "getVersion", "()D");
                mids$[mid_setContext_1564c35f88556e3e] = env->getMethodID(cls, "setContext", "(Lorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_writeFooter_05c6d36d73082fa6] = env->getMethodID(cls, "writeFooter", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
                mids$[mid_writeHeader_df6f5cf94f18077d] = env->getMethodID(cls, "writeHeader", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Header;)V");
                mids$[mid_writeSegment_fe05c5cc7a835818] = env->getMethodID(cls, "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Segment;)V");
                mids$[mid_writeSegmentContent_305aa7864995b122] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_ORIGINATOR = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_ORIGINATOR", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractMessageWriter::AbstractMessageWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2, const ::org::orekit::files::ccsds::utils::ContextBinding & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3026836a952fe988, a0.this$, a1.this$, a2, a3.this$)) {}

            ::org::orekit::files::ccsds::utils::ContextBinding AbstractMessageWriter::getContext() const
            {
              return ::org::orekit::files::ccsds::utils::ContextBinding(env->callObjectMethod(this$, mids$[mid_getContext_fc8d452549dd65ec]));
            }

            jdouble AbstractMessageWriter::getDefaultVersion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDefaultVersion_9981f74b2d109da6]);
            }

            ::java::lang::String AbstractMessageWriter::getFormatVersionKey() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormatVersionKey_d2c8eb4129821f0e]));
            }

            ::java::lang::String AbstractMessageWriter::getRoot() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRoot_d2c8eb4129821f0e]));
            }

            ::org::orekit::files::ccsds::definitions::TimeConverter AbstractMessageWriter::getTimeConverter() const
            {
              return ::org::orekit::files::ccsds::definitions::TimeConverter(env->callObjectMethod(this$, mids$[mid_getTimeConverter_45cb786b56bfc0bf]));
            }

            jdouble AbstractMessageWriter::getVersion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getVersion_9981f74b2d109da6]);
            }

            void AbstractMessageWriter::setContext(const ::org::orekit::files::ccsds::utils::ContextBinding & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setContext_1564c35f88556e3e], a0.this$);
            }

            void AbstractMessageWriter::writeFooter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeFooter_05c6d36d73082fa6], a0.this$);
            }

            void AbstractMessageWriter::writeHeader(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::section::Header & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeHeader_df6f5cf94f18077d], a0.this$, a1.this$);
            }

            void AbstractMessageWriter::writeSegment(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::section::Segment & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeSegment_fe05c5cc7a835818], a0.this$, a1.this$);
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
            static PyObject *t_AbstractMessageWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractMessageWriter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractMessageWriter_of_(t_AbstractMessageWriter *self, PyObject *args);
            static int t_AbstractMessageWriter_init_(t_AbstractMessageWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractMessageWriter_getContext(t_AbstractMessageWriter *self);
            static PyObject *t_AbstractMessageWriter_getDefaultVersion(t_AbstractMessageWriter *self);
            static PyObject *t_AbstractMessageWriter_getFormatVersionKey(t_AbstractMessageWriter *self);
            static PyObject *t_AbstractMessageWriter_getRoot(t_AbstractMessageWriter *self);
            static PyObject *t_AbstractMessageWriter_getTimeConverter(t_AbstractMessageWriter *self);
            static PyObject *t_AbstractMessageWriter_getVersion(t_AbstractMessageWriter *self);
            static PyObject *t_AbstractMessageWriter_setContext(t_AbstractMessageWriter *self, PyObject *arg);
            static PyObject *t_AbstractMessageWriter_writeFooter(t_AbstractMessageWriter *self, PyObject *arg);
            static PyObject *t_AbstractMessageWriter_writeHeader(t_AbstractMessageWriter *self, PyObject *args);
            static PyObject *t_AbstractMessageWriter_writeSegment(t_AbstractMessageWriter *self, PyObject *args);
            static PyObject *t_AbstractMessageWriter_get__context(t_AbstractMessageWriter *self, void *data);
            static int t_AbstractMessageWriter_set__context(t_AbstractMessageWriter *self, PyObject *arg, void *data);
            static PyObject *t_AbstractMessageWriter_get__defaultVersion(t_AbstractMessageWriter *self, void *data);
            static PyObject *t_AbstractMessageWriter_get__formatVersionKey(t_AbstractMessageWriter *self, void *data);
            static PyObject *t_AbstractMessageWriter_get__root(t_AbstractMessageWriter *self, void *data);
            static PyObject *t_AbstractMessageWriter_get__timeConverter(t_AbstractMessageWriter *self, void *data);
            static PyObject *t_AbstractMessageWriter_get__version(t_AbstractMessageWriter *self, void *data);
            static PyObject *t_AbstractMessageWriter_get__parameters_(t_AbstractMessageWriter *self, void *data);
            static PyGetSetDef t_AbstractMessageWriter__fields_[] = {
              DECLARE_GETSET_FIELD(t_AbstractMessageWriter, context),
              DECLARE_GET_FIELD(t_AbstractMessageWriter, defaultVersion),
              DECLARE_GET_FIELD(t_AbstractMessageWriter, formatVersionKey),
              DECLARE_GET_FIELD(t_AbstractMessageWriter, root),
              DECLARE_GET_FIELD(t_AbstractMessageWriter, timeConverter),
              DECLARE_GET_FIELD(t_AbstractMessageWriter, version),
              DECLARE_GET_FIELD(t_AbstractMessageWriter, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractMessageWriter__methods_[] = {
              DECLARE_METHOD(t_AbstractMessageWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractMessageWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractMessageWriter, of_, METH_VARARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, getContext, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, getDefaultVersion, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, getFormatVersionKey, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, getRoot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, getTimeConverter, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, getVersion, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, setContext, METH_O),
              DECLARE_METHOD(t_AbstractMessageWriter, writeFooter, METH_O),
              DECLARE_METHOD(t_AbstractMessageWriter, writeHeader, METH_VARARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, writeSegment, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractMessageWriter)[] = {
              { Py_tp_methods, t_AbstractMessageWriter__methods_ },
              { Py_tp_init, (void *) t_AbstractMessageWriter_init_ },
              { Py_tp_getset, t_AbstractMessageWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractMessageWriter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractMessageWriter, t_AbstractMessageWriter, AbstractMessageWriter);
            PyObject *t_AbstractMessageWriter::wrap_Object(const AbstractMessageWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_AbstractMessageWriter::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractMessageWriter *self = (t_AbstractMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_AbstractMessageWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_AbstractMessageWriter::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractMessageWriter *self = (t_AbstractMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_AbstractMessageWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractMessageWriter), &PY_TYPE_DEF(AbstractMessageWriter), module, "AbstractMessageWriter", 0);
            }

            void t_AbstractMessageWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageWriter), "class_", make_descriptor(AbstractMessageWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageWriter), "wrapfn_", make_descriptor(t_AbstractMessageWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageWriter), "boxfn_", make_descriptor(boxObject));
              env->getClass(AbstractMessageWriter::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageWriter), "DEFAULT_ORIGINATOR", make_descriptor(j2p(*AbstractMessageWriter::DEFAULT_ORIGINATOR)));
            }

            static PyObject *t_AbstractMessageWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractMessageWriter::initializeClass, 1)))
                return NULL;
              return t_AbstractMessageWriter::wrap_Object(AbstractMessageWriter(((t_AbstractMessageWriter *) arg)->object.this$));
            }
            static PyObject *t_AbstractMessageWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractMessageWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractMessageWriter_of_(t_AbstractMessageWriter *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_AbstractMessageWriter_init_(t_AbstractMessageWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::files::ccsds::utils::ContextBinding a3((jobject) NULL);
              AbstractMessageWriter object((jobject) NULL);

              if (!parseArgs(args, "ssDk", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = AbstractMessageWriter(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractMessageWriter_getContext(t_AbstractMessageWriter *self)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding result((jobject) NULL);
              OBJ_CALL(result = self->object.getContext());
              return ::org::orekit::files::ccsds::utils::t_ContextBinding::wrap_Object(result);
            }

            static PyObject *t_AbstractMessageWriter_getDefaultVersion(t_AbstractMessageWriter *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDefaultVersion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractMessageWriter_getFormatVersionKey(t_AbstractMessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormatVersionKey());
              return j2p(result);
            }

            static PyObject *t_AbstractMessageWriter_getRoot(t_AbstractMessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getRoot());
              return j2p(result);
            }

            static PyObject *t_AbstractMessageWriter_getTimeConverter(t_AbstractMessageWriter *self)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimeConverter());
              return ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(result);
            }

            static PyObject *t_AbstractMessageWriter_getVersion(t_AbstractMessageWriter *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getVersion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractMessageWriter_setContext(t_AbstractMessageWriter *self, PyObject *arg)
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

            static PyObject *t_AbstractMessageWriter_writeFooter(t_AbstractMessageWriter *self, PyObject *arg)
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

            static PyObject *t_AbstractMessageWriter_writeHeader(t_AbstractMessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::section::Header a1((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::section::Header::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.writeHeader(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeHeader", args);
              return NULL;
            }

            static PyObject *t_AbstractMessageWriter_writeSegment(t_AbstractMessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::section::Segment a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::section::Segment::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::section::t_Segment::parameters_))
              {
                OBJ_CALL(self->object.writeSegment(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeSegment", args);
              return NULL;
            }
            static PyObject *t_AbstractMessageWriter_get__parameters_(t_AbstractMessageWriter *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AbstractMessageWriter_get__context(t_AbstractMessageWriter *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding value((jobject) NULL);
              OBJ_CALL(value = self->object.getContext());
              return ::org::orekit::files::ccsds::utils::t_ContextBinding::wrap_Object(value);
            }
            static int t_AbstractMessageWriter_set__context(t_AbstractMessageWriter *self, PyObject *arg, void *data)
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

            static PyObject *t_AbstractMessageWriter_get__defaultVersion(t_AbstractMessageWriter *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDefaultVersion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractMessageWriter_get__formatVersionKey(t_AbstractMessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormatVersionKey());
              return j2p(value);
            }

            static PyObject *t_AbstractMessageWriter_get__root(t_AbstractMessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getRoot());
              return j2p(value);
            }

            static PyObject *t_AbstractMessageWriter_get__timeConverter(t_AbstractMessageWriter *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter value((jobject) NULL);
              OBJ_CALL(value = self->object.getTimeConverter());
              return ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(value);
            }

            static PyObject *t_AbstractMessageWriter_get__version(t_AbstractMessageWriter *self, void *data)
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
#include "org/orekit/errors/OrekitIOException.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/orekit/errors/LocalizedException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitIOException::class$ = NULL;
      jmethodID *OrekitIOException::mids$ = NULL;
      bool OrekitIOException::live$ = false;

      jclass OrekitIOException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitIOException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2436a4119ba97d87] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_d2c8eb4129821f0e] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_d2c8eb4129821f0e] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_5969ecf7afac3dba] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_2ab86268ef7a6631] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_667bcd34994d9d31] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitIOException::OrekitIOException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_2436a4119ba97d87, a0.this$, a1.this$)) {}

      ::java::lang::String OrekitIOException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_d2c8eb4129821f0e]));
      }

      ::java::lang::String OrekitIOException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_d2c8eb4129821f0e]));
      }

      ::java::lang::String OrekitIOException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_5969ecf7afac3dba], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitIOException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_2ab86268ef7a6631]));
      }

      ::org::hipparchus::exception::Localizable OrekitIOException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_667bcd34994d9d31]));
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
      static PyObject *t_OrekitIOException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitIOException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitIOException_init_(t_OrekitIOException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitIOException_getLocalizedMessage(t_OrekitIOException *self, PyObject *args);
      static PyObject *t_OrekitIOException_getMessage(t_OrekitIOException *self, PyObject *args);
      static PyObject *t_OrekitIOException_getParts(t_OrekitIOException *self);
      static PyObject *t_OrekitIOException_getSpecifier(t_OrekitIOException *self);
      static PyObject *t_OrekitIOException_get__localizedMessage(t_OrekitIOException *self, void *data);
      static PyObject *t_OrekitIOException_get__message(t_OrekitIOException *self, void *data);
      static PyObject *t_OrekitIOException_get__parts(t_OrekitIOException *self, void *data);
      static PyObject *t_OrekitIOException_get__specifier(t_OrekitIOException *self, void *data);
      static PyGetSetDef t_OrekitIOException__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitIOException, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitIOException, message),
        DECLARE_GET_FIELD(t_OrekitIOException, parts),
        DECLARE_GET_FIELD(t_OrekitIOException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitIOException__methods_[] = {
        DECLARE_METHOD(t_OrekitIOException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIOException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIOException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIOException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIOException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitIOException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitIOException)[] = {
        { Py_tp_methods, t_OrekitIOException__methods_ },
        { Py_tp_init, (void *) t_OrekitIOException_init_ },
        { Py_tp_getset, t_OrekitIOException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitIOException)[] = {
        &PY_TYPE_DEF(::java::io::IOException),
        NULL
      };

      DEFINE_TYPE(OrekitIOException, t_OrekitIOException, OrekitIOException);

      void t_OrekitIOException::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitIOException), &PY_TYPE_DEF(OrekitIOException), module, "OrekitIOException", 0);
      }

      void t_OrekitIOException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIOException), "class_", make_descriptor(OrekitIOException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIOException), "wrapfn_", make_descriptor(t_OrekitIOException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIOException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitIOException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitIOException::initializeClass, 1)))
          return NULL;
        return t_OrekitIOException::wrap_Object(OrekitIOException(((t_OrekitIOException *) arg)->object.this$));
      }
      static PyObject *t_OrekitIOException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitIOException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitIOException_init_(t_OrekitIOException *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::exception::Localizable a0((jobject) NULL);
        JArray< ::java::lang::Object > a1((jobject) NULL);
        OrekitIOException object((jobject) NULL);

        if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
        {
          INT_CALL(object = OrekitIOException(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrekitIOException_getLocalizedMessage(t_OrekitIOException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitIOException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitIOException_getMessage(t_OrekitIOException *self, PyObject *args)
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

        return callSuper(PY_TYPE(OrekitIOException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitIOException_getParts(t_OrekitIOException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIOException_getSpecifier(t_OrekitIOException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitIOException_get__localizedMessage(t_OrekitIOException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIOException_get__message(t_OrekitIOException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIOException_get__parts(t_OrekitIOException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIOException_get__specifier(t_OrekitIOException *self, void *data)
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
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealMatrixPreservingVisitor::class$ = NULL;
      jmethodID *RealMatrixPreservingVisitor::mids$ = NULL;
      bool RealMatrixPreservingVisitor::live$ = false;

      jclass RealMatrixPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealMatrixPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_9981f74b2d109da6] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_ee5da648d666a7a9] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_e98d7b3e971b6087] = env->getMethodID(cls, "visit", "(IID)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble RealMatrixPreservingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_9981f74b2d109da6]);
      }

      void RealMatrixPreservingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_ee5da648d666a7a9], a0, a1, a2, a3, a4, a5);
      }

      void RealMatrixPreservingVisitor::visit(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_e98d7b3e971b6087], a0, a1, a2);
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
      static PyObject *t_RealMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrixPreservingVisitor_end(t_RealMatrixPreservingVisitor *self);
      static PyObject *t_RealMatrixPreservingVisitor_start(t_RealMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_RealMatrixPreservingVisitor_visit(t_RealMatrixPreservingVisitor *self, PyObject *args);

      static PyMethodDef t_RealMatrixPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_RealMatrixPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrixPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealMatrixPreservingVisitor)[] = {
        { Py_tp_methods, t_RealMatrixPreservingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealMatrixPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealMatrixPreservingVisitor, t_RealMatrixPreservingVisitor, RealMatrixPreservingVisitor);

      void t_RealMatrixPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(RealMatrixPreservingVisitor), &PY_TYPE_DEF(RealMatrixPreservingVisitor), module, "RealMatrixPreservingVisitor", 0);
      }

      void t_RealMatrixPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixPreservingVisitor), "class_", make_descriptor(RealMatrixPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixPreservingVisitor), "wrapfn_", make_descriptor(t_RealMatrixPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealMatrixPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_RealMatrixPreservingVisitor::wrap_Object(RealMatrixPreservingVisitor(((t_RealMatrixPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_RealMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealMatrixPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealMatrixPreservingVisitor_end(t_RealMatrixPreservingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrixPreservingVisitor_start(t_RealMatrixPreservingVisitor *self, PyObject *args)
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

      static PyObject *t_RealMatrixPreservingVisitor_visit(t_RealMatrixPreservingVisitor *self, PyObject *args)
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
#include "org/orekit/files/ilrs/CRD$NptRangeMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$NptRangeMeasurement::class$ = NULL;
        jmethodID *CRD$NptRangeMeasurement::mids$ = NULL;
        bool CRD$NptRangeMeasurement::live$ = false;

        jclass CRD$NptRangeMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$NptRangeMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_cc3de2c8e70eba76] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DIDLjava/lang/String;)V");
            mids$[mid_init$_3653e9a749c438d9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DIDLjava/lang/String;DIDDDDDI)V");
            mids$[mid_getBinKurtosis_9981f74b2d109da6] = env->getMethodID(cls, "getBinKurtosis", "()D");
            mids$[mid_getBinPeakMinusMean_9981f74b2d109da6] = env->getMethodID(cls, "getBinPeakMinusMean", "()D");
            mids$[mid_getBinRms_9981f74b2d109da6] = env->getMethodID(cls, "getBinRms", "()D");
            mids$[mid_getBinSkew_9981f74b2d109da6] = env->getMethodID(cls, "getBinSkew", "()D");
            mids$[mid_getDetectorChannel_d6ab429752e7c267] = env->getMethodID(cls, "getDetectorChannel", "()I");
            mids$[mid_getNumberOfRawRanges_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfRawRanges", "()I");
            mids$[mid_getReturnRate_9981f74b2d109da6] = env->getMethodID(cls, "getReturnRate", "()D");
            mids$[mid_getWindowLength_9981f74b2d109da6] = env->getMethodID(cls, "getWindowLength", "()D");
            mids$[mid_toCrdString_d2c8eb4129821f0e] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$NptRangeMeasurement::CRD$NptRangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2, jdouble a3, const ::java::lang::String & a4) : ::org::orekit::files::ilrs::CRD$RangeMeasurement(env->newObject(initializeClass, &mids$, mid_init$_cc3de2c8e70eba76, a0.this$, a1, a2, a3, a4.this$)) {}

        CRD$NptRangeMeasurement::CRD$NptRangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2, jdouble a3, const ::java::lang::String & a4, jdouble a5, jint a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jint a12) : ::org::orekit::files::ilrs::CRD$RangeMeasurement(env->newObject(initializeClass, &mids$, mid_init$_3653e9a749c438d9, a0.this$, a1, a2, a3, a4.this$, a5, a6, a7, a8, a9, a10, a11, a12)) {}

        jdouble CRD$NptRangeMeasurement::getBinKurtosis() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBinKurtosis_9981f74b2d109da6]);
        }

        jdouble CRD$NptRangeMeasurement::getBinPeakMinusMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBinPeakMinusMean_9981f74b2d109da6]);
        }

        jdouble CRD$NptRangeMeasurement::getBinRms() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBinRms_9981f74b2d109da6]);
        }

        jdouble CRD$NptRangeMeasurement::getBinSkew() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBinSkew_9981f74b2d109da6]);
        }

        jint CRD$NptRangeMeasurement::getDetectorChannel() const
        {
          return env->callIntMethod(this$, mids$[mid_getDetectorChannel_d6ab429752e7c267]);
        }

        jint CRD$NptRangeMeasurement::getNumberOfRawRanges() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfRawRanges_d6ab429752e7c267]);
        }

        jdouble CRD$NptRangeMeasurement::getReturnRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReturnRate_9981f74b2d109da6]);
        }

        jdouble CRD$NptRangeMeasurement::getWindowLength() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getWindowLength_9981f74b2d109da6]);
        }

        ::java::lang::String CRD$NptRangeMeasurement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRD$NptRangeMeasurement::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
        static PyObject *t_CRD$NptRangeMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$NptRangeMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$NptRangeMeasurement_init_(t_CRD$NptRangeMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$NptRangeMeasurement_getBinKurtosis(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getBinPeakMinusMean(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getBinRms(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getBinSkew(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getDetectorChannel(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getNumberOfRawRanges(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getReturnRate(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getWindowLength(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_toCrdString(t_CRD$NptRangeMeasurement *self, PyObject *args);
        static PyObject *t_CRD$NptRangeMeasurement_toString(t_CRD$NptRangeMeasurement *self, PyObject *args);
        static PyObject *t_CRD$NptRangeMeasurement_get__binKurtosis(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__binPeakMinusMean(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__binRms(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__binSkew(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__detectorChannel(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__numberOfRawRanges(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__returnRate(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__windowLength(t_CRD$NptRangeMeasurement *self, void *data);
        static PyGetSetDef t_CRD$NptRangeMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, binKurtosis),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, binPeakMinusMean),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, binRms),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, binSkew),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, detectorChannel),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, numberOfRawRanges),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, returnRate),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, windowLength),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$NptRangeMeasurement__methods_[] = {
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getBinKurtosis, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getBinPeakMinusMean, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getBinRms, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getBinSkew, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getDetectorChannel, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getNumberOfRawRanges, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getReturnRate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getWindowLength, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$NptRangeMeasurement)[] = {
          { Py_tp_methods, t_CRD$NptRangeMeasurement__methods_ },
          { Py_tp_init, (void *) t_CRD$NptRangeMeasurement_init_ },
          { Py_tp_getset, t_CRD$NptRangeMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$NptRangeMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRD$RangeMeasurement),
          NULL
        };

        DEFINE_TYPE(CRD$NptRangeMeasurement, t_CRD$NptRangeMeasurement, CRD$NptRangeMeasurement);

        void t_CRD$NptRangeMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$NptRangeMeasurement), &PY_TYPE_DEF(CRD$NptRangeMeasurement), module, "CRD$NptRangeMeasurement", 0);
        }

        void t_CRD$NptRangeMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$NptRangeMeasurement), "class_", make_descriptor(CRD$NptRangeMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$NptRangeMeasurement), "wrapfn_", make_descriptor(t_CRD$NptRangeMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$NptRangeMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$NptRangeMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$NptRangeMeasurement::initializeClass, 1)))
            return NULL;
          return t_CRD$NptRangeMeasurement::wrap_Object(CRD$NptRangeMeasurement(((t_CRD$NptRangeMeasurement *) arg)->object.this$));
        }
        static PyObject *t_CRD$NptRangeMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$NptRangeMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$NptRangeMeasurement_init_(t_CRD$NptRangeMeasurement *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jint a2;
              jdouble a3;
              ::java::lang::String a4((jobject) NULL);
              CRD$NptRangeMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDIDs", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = CRD$NptRangeMeasurement(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 13:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jint a2;
              jdouble a3;
              ::java::lang::String a4((jobject) NULL);
              jdouble a5;
              jint a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              jdouble a10;
              jdouble a11;
              jint a12;
              CRD$NptRangeMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDIDsDIDDDDDI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12))
              {
                INT_CALL(object = CRD$NptRangeMeasurement(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
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

        static PyObject *t_CRD$NptRangeMeasurement_getBinKurtosis(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBinKurtosis());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getBinPeakMinusMean(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBinPeakMinusMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getBinRms(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBinRms());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getBinSkew(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBinSkew());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getDetectorChannel(t_CRD$NptRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDetectorChannel());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getNumberOfRawRanges(t_CRD$NptRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfRawRanges());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getReturnRate(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReturnRate());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getWindowLength(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getWindowLength());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_toCrdString(t_CRD$NptRangeMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$NptRangeMeasurement), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRD$NptRangeMeasurement_toString(t_CRD$NptRangeMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$NptRangeMeasurement), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__binKurtosis(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBinKurtosis());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__binPeakMinusMean(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBinPeakMinusMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__binRms(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBinRms());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__binSkew(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBinSkew());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__detectorChannel(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDetectorChannel());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__numberOfRawRanges(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfRawRanges());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__returnRate(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReturnRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__windowLength(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getWindowLength());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationUtil.h"
#include "org/orekit/orbits/FieldKeplerianOrbit.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            ::java::lang::Class *TleGenerationUtil::class$ = NULL;
            jmethodID *TleGenerationUtil::mids$ = NULL;
            bool TleGenerationUtil::live$ = false;

            jclass TleGenerationUtil::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/generation/TleGenerationUtil");

                mids$ = new jmethodID[max_mid];
                mids$[mid_newTLE_f4a6e7aed2e7f95b] = env->getStaticMethodID(cls, "newTLE", "(Lorg/orekit/orbits/FieldKeplerianOrbit;Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScale;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
                mids$[mid_newTLE_3f916788236790e0] = env->getStaticMethodID(cls, "newTLE", "(Lorg/orekit/orbits/KeplerianOrbit;Lorg/orekit/propagation/analytical/tle/TLE;DLorg/orekit/time/TimeScale;)Lorg/orekit/propagation/analytical/tle/TLE;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::propagation::analytical::tle::FieldTLE TleGenerationUtil::newTLE(const ::org::orekit::orbits::FieldKeplerianOrbit & a0, const ::org::orekit::propagation::analytical::tle::FieldTLE & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::time::TimeScale & a3)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::orekit::propagation::analytical::tle::FieldTLE(env->callStaticObjectMethod(cls, mids$[mid_newTLE_f4a6e7aed2e7f95b], a0.this$, a1.this$, a2.this$, a3.this$));
            }

            ::org::orekit::propagation::analytical::tle::TLE TleGenerationUtil::newTLE(const ::org::orekit::orbits::KeplerianOrbit & a0, const ::org::orekit::propagation::analytical::tle::TLE & a1, jdouble a2, const ::org::orekit::time::TimeScale & a3)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::orekit::propagation::analytical::tle::TLE(env->callStaticObjectMethod(cls, mids$[mid_newTLE_3f916788236790e0], a0.this$, a1.this$, a2, a3.this$));
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
            static PyObject *t_TleGenerationUtil_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TleGenerationUtil_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TleGenerationUtil_newTLE(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_TleGenerationUtil__methods_[] = {
              DECLARE_METHOD(t_TleGenerationUtil, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TleGenerationUtil, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TleGenerationUtil, newTLE, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TleGenerationUtil)[] = {
              { Py_tp_methods, t_TleGenerationUtil__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TleGenerationUtil)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(TleGenerationUtil, t_TleGenerationUtil, TleGenerationUtil);

            void t_TleGenerationUtil::install(PyObject *module)
            {
              installType(&PY_TYPE(TleGenerationUtil), &PY_TYPE_DEF(TleGenerationUtil), module, "TleGenerationUtil", 0);
            }

            void t_TleGenerationUtil::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationUtil), "class_", make_descriptor(TleGenerationUtil::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationUtil), "wrapfn_", make_descriptor(t_TleGenerationUtil::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationUtil), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_TleGenerationUtil_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TleGenerationUtil::initializeClass, 1)))
                return NULL;
              return t_TleGenerationUtil::wrap_Object(TleGenerationUtil(((t_TleGenerationUtil *) arg)->object.this$));
            }
            static PyObject *t_TleGenerationUtil_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TleGenerationUtil::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TleGenerationUtil_newTLE(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 4:
                {
                  ::org::orekit::orbits::KeplerianOrbit a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE a1((jobject) NULL);
                  jdouble a2;
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);

                  if (!parseArgs(args, "kkDk", ::org::orekit::orbits::KeplerianOrbit::initializeClass, ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::generation::TleGenerationUtil::newTLE(a0, a1, a2, a3));
                    return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
                  }
                }
                {
                  ::org::orekit::orbits::FieldKeplerianOrbit a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::analytical::tle::FieldTLE a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::FieldTLE result((jobject) NULL);

                  if (!parseArgs(args, "KKKk", ::org::orekit::orbits::FieldKeplerianOrbit::initializeClass, ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldKeplerianOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::generation::TleGenerationUtil::newTLE(a0, a1, a2, a3));
                    return ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError(type, "newTLE", args);
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
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *MarshallSolarActivityFutureEstimation$StrengthLevel::class$ = NULL;
            jmethodID *MarshallSolarActivityFutureEstimation$StrengthLevel::mids$ = NULL;
            bool MarshallSolarActivityFutureEstimation$StrengthLevel::live$ = false;
            MarshallSolarActivityFutureEstimation$StrengthLevel *MarshallSolarActivityFutureEstimation$StrengthLevel::AVERAGE = NULL;
            MarshallSolarActivityFutureEstimation$StrengthLevel *MarshallSolarActivityFutureEstimation$StrengthLevel::STRONG = NULL;
            MarshallSolarActivityFutureEstimation$StrengthLevel *MarshallSolarActivityFutureEstimation$StrengthLevel::WEAK = NULL;

            jclass MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_8f96d2faa0bafa40] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;");
                mids$[mid_values_9b43c1971c493e5e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                AVERAGE = new MarshallSolarActivityFutureEstimation$StrengthLevel(env->getStaticObjectField(cls, "AVERAGE", "Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;"));
                STRONG = new MarshallSolarActivityFutureEstimation$StrengthLevel(env->getStaticObjectField(cls, "STRONG", "Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;"));
                WEAK = new MarshallSolarActivityFutureEstimation$StrengthLevel(env->getStaticObjectField(cls, "WEAK", "Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MarshallSolarActivityFutureEstimation$StrengthLevel MarshallSolarActivityFutureEstimation$StrengthLevel::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return MarshallSolarActivityFutureEstimation$StrengthLevel(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8f96d2faa0bafa40], a0.this$));
            }

            JArray< MarshallSolarActivityFutureEstimation$StrengthLevel > MarshallSolarActivityFutureEstimation$StrengthLevel::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< MarshallSolarActivityFutureEstimation$StrengthLevel >(env->callStaticObjectMethod(cls, mids$[mid_values_9b43c1971c493e5e]));
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
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_of_(t_MarshallSolarActivityFutureEstimation$StrengthLevel *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_values(PyTypeObject *type);
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_get__parameters_(t_MarshallSolarActivityFutureEstimation$StrengthLevel *self, void *data);
            static PyGetSetDef t_MarshallSolarActivityFutureEstimation$StrengthLevel__fields_[] = {
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimation$StrengthLevel, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MarshallSolarActivityFutureEstimation$StrengthLevel__methods_[] = {
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation$StrengthLevel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation$StrengthLevel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation$StrengthLevel, of_, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation$StrengthLevel, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation$StrengthLevel, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MarshallSolarActivityFutureEstimation$StrengthLevel)[] = {
              { Py_tp_methods, t_MarshallSolarActivityFutureEstimation$StrengthLevel__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_MarshallSolarActivityFutureEstimation$StrengthLevel__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MarshallSolarActivityFutureEstimation$StrengthLevel)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel, t_MarshallSolarActivityFutureEstimation$StrengthLevel, MarshallSolarActivityFutureEstimation$StrengthLevel);
            PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(const MarshallSolarActivityFutureEstimation$StrengthLevel& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimation$StrengthLevel *self = (t_MarshallSolarActivityFutureEstimation$StrengthLevel *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimation$StrengthLevel *self = (t_MarshallSolarActivityFutureEstimation$StrengthLevel *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_MarshallSolarActivityFutureEstimation$StrengthLevel::install(PyObject *module)
            {
              installType(&PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), &PY_TYPE_DEF(MarshallSolarActivityFutureEstimation$StrengthLevel), module, "MarshallSolarActivityFutureEstimation$StrengthLevel", 0);
            }

            void t_MarshallSolarActivityFutureEstimation$StrengthLevel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), "class_", make_descriptor(MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), "wrapfn_", make_descriptor(t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), "boxfn_", make_descriptor(boxObject));
              env->getClass(MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), "AVERAGE", make_descriptor(t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(*MarshallSolarActivityFutureEstimation$StrengthLevel::AVERAGE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), "STRONG", make_descriptor(t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(*MarshallSolarActivityFutureEstimation$StrengthLevel::STRONG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), "WEAK", make_descriptor(t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(*MarshallSolarActivityFutureEstimation$StrengthLevel::WEAK)));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, 1)))
                return NULL;
              return t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(MarshallSolarActivityFutureEstimation$StrengthLevel(((t_MarshallSolarActivityFutureEstimation$StrengthLevel *) arg)->object.this$));
            }
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_of_(t_MarshallSolarActivityFutureEstimation$StrengthLevel *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              MarshallSolarActivityFutureEstimation$StrengthLevel result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::valueOf(a0));
                return t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_values(PyTypeObject *type)
            {
              JArray< MarshallSolarActivityFutureEstimation$StrengthLevel > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::values());
              return JArray<jobject>(result.this$).wrap(t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_jobject);
            }
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_get__parameters_(t_MarshallSolarActivityFutureEstimation$StrengthLevel *self, void *data)
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
#include "org/orekit/gnss/ObservationTimeScale.h"
#include "org/orekit/gnss/ObservationTimeScale.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *ObservationTimeScale::class$ = NULL;
      jmethodID *ObservationTimeScale::mids$ = NULL;
      bool ObservationTimeScale::live$ = false;
      ObservationTimeScale *ObservationTimeScale::BDT = NULL;
      ObservationTimeScale *ObservationTimeScale::GAL = NULL;
      ObservationTimeScale *ObservationTimeScale::GLO = NULL;
      ObservationTimeScale *ObservationTimeScale::GPS = NULL;
      ObservationTimeScale *ObservationTimeScale::IRN = NULL;
      ObservationTimeScale *ObservationTimeScale::QZS = NULL;

      jclass ObservationTimeScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/ObservationTimeScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getTimeScale_5a5ce7885daa8466] = env->getMethodID(cls, "getTimeScale", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScale;");
          mids$[mid_valueOf_d4469edff9151f56] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/ObservationTimeScale;");
          mids$[mid_values_887c0065154b91f0] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/ObservationTimeScale;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BDT = new ObservationTimeScale(env->getStaticObjectField(cls, "BDT", "Lorg/orekit/gnss/ObservationTimeScale;"));
          GAL = new ObservationTimeScale(env->getStaticObjectField(cls, "GAL", "Lorg/orekit/gnss/ObservationTimeScale;"));
          GLO = new ObservationTimeScale(env->getStaticObjectField(cls, "GLO", "Lorg/orekit/gnss/ObservationTimeScale;"));
          GPS = new ObservationTimeScale(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/gnss/ObservationTimeScale;"));
          IRN = new ObservationTimeScale(env->getStaticObjectField(cls, "IRN", "Lorg/orekit/gnss/ObservationTimeScale;"));
          QZS = new ObservationTimeScale(env->getStaticObjectField(cls, "QZS", "Lorg/orekit/gnss/ObservationTimeScale;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::TimeScale ObservationTimeScale::getTimeScale(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_5a5ce7885daa8466], a0.this$));
      }

      ObservationTimeScale ObservationTimeScale::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ObservationTimeScale(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d4469edff9151f56], a0.this$));
      }

      JArray< ObservationTimeScale > ObservationTimeScale::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ObservationTimeScale >(env->callStaticObjectMethod(cls, mids$[mid_values_887c0065154b91f0]));
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
      static PyObject *t_ObservationTimeScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ObservationTimeScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ObservationTimeScale_of_(t_ObservationTimeScale *self, PyObject *args);
      static PyObject *t_ObservationTimeScale_getTimeScale(t_ObservationTimeScale *self, PyObject *arg);
      static PyObject *t_ObservationTimeScale_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_ObservationTimeScale_values(PyTypeObject *type);
      static PyObject *t_ObservationTimeScale_get__parameters_(t_ObservationTimeScale *self, void *data);
      static PyGetSetDef t_ObservationTimeScale__fields_[] = {
        DECLARE_GET_FIELD(t_ObservationTimeScale, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ObservationTimeScale__methods_[] = {
        DECLARE_METHOD(t_ObservationTimeScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ObservationTimeScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ObservationTimeScale, of_, METH_VARARGS),
        DECLARE_METHOD(t_ObservationTimeScale, getTimeScale, METH_O),
        DECLARE_METHOD(t_ObservationTimeScale, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ObservationTimeScale, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ObservationTimeScale)[] = {
        { Py_tp_methods, t_ObservationTimeScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ObservationTimeScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ObservationTimeScale)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(ObservationTimeScale, t_ObservationTimeScale, ObservationTimeScale);
      PyObject *t_ObservationTimeScale::wrap_Object(const ObservationTimeScale& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ObservationTimeScale::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ObservationTimeScale *self = (t_ObservationTimeScale *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ObservationTimeScale::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ObservationTimeScale::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ObservationTimeScale *self = (t_ObservationTimeScale *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ObservationTimeScale::install(PyObject *module)
      {
        installType(&PY_TYPE(ObservationTimeScale), &PY_TYPE_DEF(ObservationTimeScale), module, "ObservationTimeScale", 0);
      }

      void t_ObservationTimeScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "class_", make_descriptor(ObservationTimeScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "wrapfn_", make_descriptor(t_ObservationTimeScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "boxfn_", make_descriptor(boxObject));
        env->getClass(ObservationTimeScale::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "BDT", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::BDT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "GAL", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::GAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "GLO", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::GLO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "GPS", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::GPS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "IRN", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::IRN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "QZS", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::QZS)));
      }

      static PyObject *t_ObservationTimeScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ObservationTimeScale::initializeClass, 1)))
          return NULL;
        return t_ObservationTimeScale::wrap_Object(ObservationTimeScale(((t_ObservationTimeScale *) arg)->object.this$));
      }
      static PyObject *t_ObservationTimeScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ObservationTimeScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ObservationTimeScale_of_(t_ObservationTimeScale *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_ObservationTimeScale_getTimeScale(t_ObservationTimeScale *self, PyObject *arg)
      {
        ::org::orekit::time::TimeScales a0((jobject) NULL);
        ::org::orekit::time::TimeScale result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getTimeScale(a0));
          return ::org::orekit::time::t_TimeScale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getTimeScale", arg);
        return NULL;
      }

      static PyObject *t_ObservationTimeScale_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ObservationTimeScale result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::ObservationTimeScale::valueOf(a0));
          return t_ObservationTimeScale::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_ObservationTimeScale_values(PyTypeObject *type)
      {
        JArray< ObservationTimeScale > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::ObservationTimeScale::values());
        return JArray<jobject>(result.this$).wrap(t_ObservationTimeScale::wrap_jobject);
      }
      static PyObject *t_ObservationTimeScale_get__parameters_(t_ObservationTimeScale *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *GeneratedMeasurementSubscriber::class$ = NULL;
          jmethodID *GeneratedMeasurementSubscriber::mids$ = NULL;
          bool GeneratedMeasurementSubscriber::live$ = false;

          jclass GeneratedMeasurementSubscriber::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber");

              mids$ = new jmethodID[max_mid];
              mids$[mid_handleGeneratedMeasurement_ccec3dc40c67aef1] = env->getMethodID(cls, "handleGeneratedMeasurement", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)V");
              mids$[mid_init_ce7d94fe97fdcf55] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void GeneratedMeasurementSubscriber::handleGeneratedMeasurement(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_handleGeneratedMeasurement_ccec3dc40c67aef1], a0.this$);
          }

          void GeneratedMeasurementSubscriber::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_ce7d94fe97fdcf55], a0.this$, a1.this$);
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
          static PyObject *t_GeneratedMeasurementSubscriber_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GeneratedMeasurementSubscriber_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GeneratedMeasurementSubscriber_handleGeneratedMeasurement(t_GeneratedMeasurementSubscriber *self, PyObject *arg);
          static PyObject *t_GeneratedMeasurementSubscriber_init(t_GeneratedMeasurementSubscriber *self, PyObject *args);

          static PyMethodDef t_GeneratedMeasurementSubscriber__methods_[] = {
            DECLARE_METHOD(t_GeneratedMeasurementSubscriber, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeneratedMeasurementSubscriber, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeneratedMeasurementSubscriber, handleGeneratedMeasurement, METH_O),
            DECLARE_METHOD(t_GeneratedMeasurementSubscriber, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GeneratedMeasurementSubscriber)[] = {
            { Py_tp_methods, t_GeneratedMeasurementSubscriber__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GeneratedMeasurementSubscriber)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GeneratedMeasurementSubscriber, t_GeneratedMeasurementSubscriber, GeneratedMeasurementSubscriber);

          void t_GeneratedMeasurementSubscriber::install(PyObject *module)
          {
            installType(&PY_TYPE(GeneratedMeasurementSubscriber), &PY_TYPE_DEF(GeneratedMeasurementSubscriber), module, "GeneratedMeasurementSubscriber", 0);
          }

          void t_GeneratedMeasurementSubscriber::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeneratedMeasurementSubscriber), "class_", make_descriptor(GeneratedMeasurementSubscriber::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeneratedMeasurementSubscriber), "wrapfn_", make_descriptor(t_GeneratedMeasurementSubscriber::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeneratedMeasurementSubscriber), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GeneratedMeasurementSubscriber_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GeneratedMeasurementSubscriber::initializeClass, 1)))
              return NULL;
            return t_GeneratedMeasurementSubscriber::wrap_Object(GeneratedMeasurementSubscriber(((t_GeneratedMeasurementSubscriber *) arg)->object.this$));
          }
          static PyObject *t_GeneratedMeasurementSubscriber_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GeneratedMeasurementSubscriber::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GeneratedMeasurementSubscriber_handleGeneratedMeasurement(t_GeneratedMeasurementSubscriber *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.handleGeneratedMeasurement(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "handleGeneratedMeasurement", arg);
            return NULL;
          }

          static PyObject *t_GeneratedMeasurementSubscriber_init(t_GeneratedMeasurementSubscriber *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Gaussian$Parametric.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Class.h"
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
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_bfc955188bf36f2c] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_4f42c7a8793320e4] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Gaussian$Parametric::Gaussian$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        JArray< jdouble > Gaussian$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_bfc955188bf36f2c], a0, a1.this$));
        }

        jdouble Gaussian$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_4f42c7a8793320e4], a0, a1.this$);
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
#include "org/hipparchus/random/Well512a.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well512a::class$ = NULL;
      jmethodID *Well512a::mids$ = NULL;
      bool Well512a::live$ = false;

      jclass Well512a::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well512a");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_d43202153dd284f7] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_f5bbab7e97879358] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_d6ab429752e7c267] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well512a::Well512a() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      Well512a::Well512a(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_d43202153dd284f7, a0.this$)) {}

      Well512a::Well512a(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      Well512a::Well512a(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_f5bbab7e97879358, a0)) {}

      jint Well512a::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_d6ab429752e7c267]);
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
      static PyObject *t_Well512a_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well512a_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well512a_init_(t_Well512a *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well512a_nextInt(t_Well512a *self, PyObject *args);

      static PyMethodDef t_Well512a__methods_[] = {
        DECLARE_METHOD(t_Well512a, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well512a, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well512a, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well512a)[] = {
        { Py_tp_methods, t_Well512a__methods_ },
        { Py_tp_init, (void *) t_Well512a_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well512a)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well512a, t_Well512a, Well512a);

      void t_Well512a::install(PyObject *module)
      {
        installType(&PY_TYPE(Well512a), &PY_TYPE_DEF(Well512a), module, "Well512a", 0);
      }

      void t_Well512a::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well512a), "class_", make_descriptor(Well512a::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well512a), "wrapfn_", make_descriptor(t_Well512a::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well512a), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well512a_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well512a::initializeClass, 1)))
          return NULL;
        return t_Well512a::wrap_Object(Well512a(((t_Well512a *) arg)->object.this$));
      }
      static PyObject *t_Well512a_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well512a::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well512a_init_(t_Well512a *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well512a object((jobject) NULL);

            INT_CALL(object = Well512a());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well512a object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well512a(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well512a object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well512a(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well512a object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well512a(a0));
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

      static PyObject *t_Well512a_nextInt(t_Well512a *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well512a), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}

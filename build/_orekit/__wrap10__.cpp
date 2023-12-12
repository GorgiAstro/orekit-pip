#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RangeRateIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeRateIonosphericDelayModifier::class$ = NULL;
          jmethodID *RangeRateIonosphericDelayModifier::mids$ = NULL;
          bool RangeRateIonosphericDelayModifier::live$ = false;

          jclass RangeRateIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeRateIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_155815578e18b03e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;DZ)V");
              mids$[mid_modify_0054a497255e8220] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_rangeRateErrorIonosphericModel_81f653af97ea34a8] = env->getMethodID(cls, "rangeRateErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rangeRateErrorIonosphericModel_17bae2e3aa9bc870] = env->getMethodID(cls, "rangeRateErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeRateIonosphericDelayModifier::RangeRateIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1, jboolean a2) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateIonosphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_155815578e18b03e, a0.this$, a1, a2)) {}

          void RangeRateIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0054a497255e8220], a0.this$);
          }

          void RangeRateIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
          static PyObject *t_RangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RangeRateIonosphericDelayModifier_init_(t_RangeRateIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeRateIonosphericDelayModifier_modify(t_RangeRateIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_RangeRateIonosphericDelayModifier_modifyWithoutDerivatives(t_RangeRateIonosphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_RangeRateIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_RangeRateIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_RangeRateIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeRateIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_RangeRateIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_RangeRateIonosphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeRateIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeRateIonosphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(RangeRateIonosphericDelayModifier, t_RangeRateIonosphericDelayModifier, RangeRateIonosphericDelayModifier);

          void t_RangeRateIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeRateIonosphericDelayModifier), &PY_TYPE_DEF(RangeRateIonosphericDelayModifier), module, "RangeRateIonosphericDelayModifier", 0);
          }

          void t_RangeRateIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateIonosphericDelayModifier), "class_", make_descriptor(RangeRateIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateIonosphericDelayModifier), "wrapfn_", make_descriptor(t_RangeRateIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeRateIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_RangeRateIonosphericDelayModifier::wrap_Object(RangeRateIonosphericDelayModifier(((t_RangeRateIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_RangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeRateIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RangeRateIonosphericDelayModifier_init_(t_RangeRateIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            jboolean a2;
            RangeRateIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kDZ", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = RangeRateIonosphericDelayModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeRateIonosphericDelayModifier_modify(t_RangeRateIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_RangeRateIonosphericDelayModifier_modifyWithoutDerivatives(t_RangeRateIonosphericDelayModifier *self, PyObject *arg)
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
#include "org/orekit/propagation/events/PythonEventDetector.h"
#include "java/lang/Throwable.h"
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

        ::java::lang::Class *PythonEventDetector::class$ = NULL;
        jmethodID *PythonEventDetector::mids$ = NULL;
        bool PythonEventDetector::live$ = false;

        jclass PythonEventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonEventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getHandler_9cfb09a569a3f330] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/EventHandler;");
            mids$[mid_getMaxCheckInterval_b5b0f3e235bdd705] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_412668abc8d889e9] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_557b8123390d8d0c] = env->getMethodID(cls, "getThreshold", "()D");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEventDetector::PythonEventDetector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonEventDetector::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonEventDetector::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonEventDetector::pythonExtension(jlong a0) const
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
      namespace events {
        static PyObject *t_PythonEventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEventDetector_init_(t_PythonEventDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEventDetector_finalize(t_PythonEventDetector *self);
        static PyObject *t_PythonEventDetector_pythonExtension(t_PythonEventDetector *self, PyObject *args);
        static jdouble JNICALL t_PythonEventDetector_g0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonEventDetector_getHandler1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEventDetector_getMaxCheckInterval2(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonEventDetector_getMaxIterationCount3(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonEventDetector_getThreshold4(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEventDetector_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonEventDetector_pythonDecRef6(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEventDetector_get__self(t_PythonEventDetector *self, void *data);
        static PyGetSetDef t_PythonEventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEventDetector, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEventDetector__methods_[] = {
          DECLARE_METHOD(t_PythonEventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEventDetector, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEventDetector, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEventDetector)[] = {
          { Py_tp_methods, t_PythonEventDetector__methods_ },
          { Py_tp_init, (void *) t_PythonEventDetector_init_ },
          { Py_tp_getset, t_PythonEventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEventDetector, t_PythonEventDetector, PythonEventDetector);

        void t_PythonEventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEventDetector), &PY_TYPE_DEF(PythonEventDetector), module, "PythonEventDetector", 1);
        }

        void t_PythonEventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetector), "class_", make_descriptor(PythonEventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetector), "wrapfn_", make_descriptor(t_PythonEventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetector), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEventDetector::initializeClass);
          JNINativeMethod methods[] = {
            { "g", "(Lorg/orekit/propagation/SpacecraftState;)D", (void *) t_PythonEventDetector_g0 },
            { "getHandler", "()Lorg/orekit/propagation/events/handlers/EventHandler;", (void *) t_PythonEventDetector_getHandler1 },
            { "getMaxCheckInterval", "()Lorg/orekit/propagation/events/AdaptableInterval;", (void *) t_PythonEventDetector_getMaxCheckInterval2 },
            { "getMaxIterationCount", "()I", (void *) t_PythonEventDetector_getMaxIterationCount3 },
            { "getThreshold", "()D", (void *) t_PythonEventDetector_getThreshold4 },
            { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonEventDetector_init5 },
            { "pythonDecRef", "()V", (void *) t_PythonEventDetector_pythonDecRef6 },
          };
          env->registerNatives(cls, methods, 7);
        }

        static PyObject *t_PythonEventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEventDetector::initializeClass, 1)))
            return NULL;
          return t_PythonEventDetector::wrap_Object(PythonEventDetector(((t_PythonEventDetector *) arg)->object.this$));
        }
        static PyObject *t_PythonEventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEventDetector_init_(t_PythonEventDetector *self, PyObject *args, PyObject *kwds)
        {
          PythonEventDetector object((jobject) NULL);

          INT_CALL(object = PythonEventDetector());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEventDetector_finalize(t_PythonEventDetector *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEventDetector_pythonExtension(t_PythonEventDetector *self, PyObject *args)
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

        static jdouble JNICALL t_PythonEventDetector_g0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "g", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("g", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonEventDetector_getHandler1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::handlers::EventHandler value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getHandler", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::handlers::EventHandler::initializeClass, &value))
          {
            throwTypeError("getHandler", result);
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

        static jobject JNICALL t_PythonEventDetector_getMaxCheckInterval2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::AdaptableInterval value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getMaxCheckInterval", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::AdaptableInterval::initializeClass, &value))
          {
            throwTypeError("getMaxCheckInterval", result);
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

        static jint JNICALL t_PythonEventDetector_getMaxIterationCount3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getMaxIterationCount", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getMaxIterationCount", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jdouble JNICALL t_PythonEventDetector_getThreshold4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "getThreshold", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getThreshold", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static void JNICALL t_PythonEventDetector_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonEventDetector_pythonDecRef6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEventDetector_get__self(t_PythonEventDetector *self, void *data)
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
#include "org/orekit/frames/EclipticProvider.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/FieldTransform.h"
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
          mids$[mid_init$_7e8e3e28a71d8ad7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;)V");
          mids$[mid_init$_0534412ce0ffa0ef] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_getTransform_df04e3927954349e] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_e70631ba002d9a32] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EclipticProvider::EclipticProvider(const ::org::orekit::utils::IERSConventions & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7e8e3e28a71d8ad7, a0.this$)) {}

      EclipticProvider::EclipticProvider(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::time::TimeScales & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0534412ce0ffa0ef, a0.this$, a1.this$)) {}

      ::org::orekit::frames::Transform EclipticProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_df04e3927954349e], a0.this$));
      }

      ::org::orekit::frames::FieldTransform EclipticProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_e70631ba002d9a32], a0.this$));
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
#include "org/orekit/forces/maneuvers/FieldImpulseManeuver.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *FieldImpulseManeuver::class$ = NULL;
        jmethodID *FieldImpulseManeuver::mids$ = NULL;
        bool FieldImpulseManeuver::live$ = false;

        jclass FieldImpulseManeuver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/FieldImpulseManeuver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_25d58fd2710268d2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_init$_baf08257bec4be06] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_init$_51dd9d9720025d56] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/maneuvers/Control3DVectorCostType;)V");
            mids$[mid_g_de1c2d709eb2829c] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getAttitudeOverride_6df6b78ab9377151] = env->getMethodID(cls, "getAttitudeOverride", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getControl3DVectorCostType_601f05e5d0c82ad9] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
            mids$[mid_getDeltaVSat_2d64addf4c3391d9] = env->getMethodID(cls, "getDeltaVSat", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getIsp_613c8f46c659f636] = env->getMethodID(cls, "getIsp", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getTrigger_07d9256595c42b86] = env->getMethodID(cls, "getTrigger", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_create_0258ce74068cec70] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/forces/maneuvers/FieldImpulseManeuver;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldImpulseManeuver::FieldImpulseManeuver(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_25d58fd2710268d2, a0.this$, a1.this$, a2.this$)) {}

        FieldImpulseManeuver::FieldImpulseManeuver(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_baf08257bec4be06, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        FieldImpulseManeuver::FieldImpulseManeuver(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a4) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_51dd9d9720025d56, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldImpulseManeuver::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_de1c2d709eb2829c], a0.this$));
        }

        ::org::orekit::attitudes::AttitudeProvider FieldImpulseManeuver::getAttitudeOverride() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeOverride_6df6b78ab9377151]));
        }

        ::org::orekit::forces::maneuvers::Control3DVectorCostType FieldImpulseManeuver::getControl3DVectorCostType() const
        {
          return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_601f05e5d0c82ad9]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldImpulseManeuver::getDeltaVSat() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getDeltaVSat_2d64addf4c3391d9]));
        }

        ::org::hipparchus::CalculusFieldElement FieldImpulseManeuver::getIsp() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIsp_613c8f46c659f636]));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldImpulseManeuver::getTrigger() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getTrigger_07d9256595c42b86]));
        }

        void FieldImpulseManeuver::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_811e49dad2467b67], a0.this$, a1.this$);
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
        static PyObject *t_FieldImpulseManeuver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldImpulseManeuver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldImpulseManeuver_of_(t_FieldImpulseManeuver *self, PyObject *args);
        static int t_FieldImpulseManeuver_init_(t_FieldImpulseManeuver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldImpulseManeuver_g(t_FieldImpulseManeuver *self, PyObject *args);
        static PyObject *t_FieldImpulseManeuver_getAttitudeOverride(t_FieldImpulseManeuver *self);
        static PyObject *t_FieldImpulseManeuver_getControl3DVectorCostType(t_FieldImpulseManeuver *self);
        static PyObject *t_FieldImpulseManeuver_getDeltaVSat(t_FieldImpulseManeuver *self);
        static PyObject *t_FieldImpulseManeuver_getIsp(t_FieldImpulseManeuver *self);
        static PyObject *t_FieldImpulseManeuver_getTrigger(t_FieldImpulseManeuver *self);
        static PyObject *t_FieldImpulseManeuver_init(t_FieldImpulseManeuver *self, PyObject *args);
        static PyObject *t_FieldImpulseManeuver_get__attitudeOverride(t_FieldImpulseManeuver *self, void *data);
        static PyObject *t_FieldImpulseManeuver_get__control3DVectorCostType(t_FieldImpulseManeuver *self, void *data);
        static PyObject *t_FieldImpulseManeuver_get__deltaVSat(t_FieldImpulseManeuver *self, void *data);
        static PyObject *t_FieldImpulseManeuver_get__isp(t_FieldImpulseManeuver *self, void *data);
        static PyObject *t_FieldImpulseManeuver_get__trigger(t_FieldImpulseManeuver *self, void *data);
        static PyObject *t_FieldImpulseManeuver_get__parameters_(t_FieldImpulseManeuver *self, void *data);
        static PyGetSetDef t_FieldImpulseManeuver__fields_[] = {
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, attitudeOverride),
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, control3DVectorCostType),
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, deltaVSat),
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, isp),
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, trigger),
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldImpulseManeuver__methods_[] = {
          DECLARE_METHOD(t_FieldImpulseManeuver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldImpulseManeuver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldImpulseManeuver, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, getAttitudeOverride, METH_NOARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, getControl3DVectorCostType, METH_NOARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, getDeltaVSat, METH_NOARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, getIsp, METH_NOARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, getTrigger, METH_NOARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldImpulseManeuver)[] = {
          { Py_tp_methods, t_FieldImpulseManeuver__methods_ },
          { Py_tp_init, (void *) t_FieldImpulseManeuver_init_ },
          { Py_tp_getset, t_FieldImpulseManeuver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldImpulseManeuver)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldImpulseManeuver, t_FieldImpulseManeuver, FieldImpulseManeuver);
        PyObject *t_FieldImpulseManeuver::wrap_Object(const FieldImpulseManeuver& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldImpulseManeuver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldImpulseManeuver *self = (t_FieldImpulseManeuver *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldImpulseManeuver::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldImpulseManeuver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldImpulseManeuver *self = (t_FieldImpulseManeuver *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldImpulseManeuver::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldImpulseManeuver), &PY_TYPE_DEF(FieldImpulseManeuver), module, "FieldImpulseManeuver", 0);
        }

        void t_FieldImpulseManeuver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldImpulseManeuver), "class_", make_descriptor(FieldImpulseManeuver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldImpulseManeuver), "wrapfn_", make_descriptor(t_FieldImpulseManeuver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldImpulseManeuver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldImpulseManeuver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldImpulseManeuver::initializeClass, 1)))
            return NULL;
          return t_FieldImpulseManeuver::wrap_Object(FieldImpulseManeuver(((t_FieldImpulseManeuver *) arg)->object.this$));
        }
        static PyObject *t_FieldImpulseManeuver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldImpulseManeuver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldImpulseManeuver_of_(t_FieldImpulseManeuver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldImpulseManeuver_init_(t_FieldImpulseManeuver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldImpulseManeuver object((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldImpulseManeuver(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              FieldImpulseManeuver object((jobject) NULL);

              if (!parseArgs(args, "KkKK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldImpulseManeuver(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::forces::maneuvers::Control3DVectorCostType a4((jobject) NULL);
              PyTypeObject **p4;
              FieldImpulseManeuver object((jobject) NULL);

              if (!parseArgs(args, "KkKKK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_))
              {
                INT_CALL(object = FieldImpulseManeuver(a0, a1, a2, a3, a4));
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

        static PyObject *t_FieldImpulseManeuver_g(t_FieldImpulseManeuver *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldImpulseManeuver), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldImpulseManeuver_getAttitudeOverride(t_FieldImpulseManeuver *self)
        {
          ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_FieldImpulseManeuver_getControl3DVectorCostType(t_FieldImpulseManeuver *self)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
          OBJ_CALL(result = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
        }

        static PyObject *t_FieldImpulseManeuver_getDeltaVSat(t_FieldImpulseManeuver *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getDeltaVSat());
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_FieldImpulseManeuver_getIsp(t_FieldImpulseManeuver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getIsp());
          return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldImpulseManeuver_getTrigger(t_FieldImpulseManeuver *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getTrigger());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_FieldImpulseManeuver_init(t_FieldImpulseManeuver *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldImpulseManeuver), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldImpulseManeuver_get__parameters_(t_FieldImpulseManeuver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldImpulseManeuver_get__attitudeOverride(t_FieldImpulseManeuver *self, void *data)
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_FieldImpulseManeuver_get__control3DVectorCostType(t_FieldImpulseManeuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
          OBJ_CALL(value = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
        }

        static PyObject *t_FieldImpulseManeuver_get__deltaVSat(t_FieldImpulseManeuver *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getDeltaVSat());
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
        }

        static PyObject *t_FieldImpulseManeuver_get__isp(t_FieldImpulseManeuver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getIsp());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldImpulseManeuver_get__trigger(t_FieldImpulseManeuver *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getTrigger());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/SimplexSolver.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *SimplexSolver::class$ = NULL;
        jmethodID *SimplexSolver::mids$ = NULL;
        bool SimplexSolver::live$ = false;

        jclass SimplexSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/SimplexSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_47602ef8408ea361] = env->getMethodID(cls, "<init>", "(DI)V");
            mids$[mid_init$_3191da1710a102eb] = env->getMethodID(cls, "<init>", "(DID)V");
            mids$[mid_doOptimize_adf293b2643f22b0] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");
            mids$[mid_optimize_428d2547a0c45016] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
            mids$[mid_parseOptimizationData_946a92401917c130] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
            mids$[mid_doIteration_92c6ab7f472e44a6] = env->getMethodID(cls, "doIteration", "(Lorg/hipparchus/optim/linear/SimplexTableau;)V");
            mids$[mid_solvePhase1_92c6ab7f472e44a6] = env->getMethodID(cls, "solvePhase1", "(Lorg/hipparchus/optim/linear/SimplexTableau;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SimplexSolver::SimplexSolver() : ::org::hipparchus::optim::linear::LinearOptimizer(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        SimplexSolver::SimplexSolver(jdouble a0) : ::org::hipparchus::optim::linear::LinearOptimizer(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        SimplexSolver::SimplexSolver(jdouble a0, jint a1) : ::org::hipparchus::optim::linear::LinearOptimizer(env->newObject(initializeClass, &mids$, mid_init$_47602ef8408ea361, a0, a1)) {}

        SimplexSolver::SimplexSolver(jdouble a0, jint a1, jdouble a2) : ::org::hipparchus::optim::linear::LinearOptimizer(env->newObject(initializeClass, &mids$, mid_init$_3191da1710a102eb, a0, a1, a2)) {}

        ::org::hipparchus::optim::PointValuePair SimplexSolver::doOptimize() const
        {
          return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_doOptimize_adf293b2643f22b0]));
        }

        ::org::hipparchus::optim::PointValuePair SimplexSolver::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
        {
          return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_428d2547a0c45016], a0.this$));
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
        static PyObject *t_SimplexSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimplexSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimplexSolver_of_(t_SimplexSolver *self, PyObject *args);
        static int t_SimplexSolver_init_(t_SimplexSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SimplexSolver_doOptimize(t_SimplexSolver *self);
        static PyObject *t_SimplexSolver_optimize(t_SimplexSolver *self, PyObject *args);
        static PyObject *t_SimplexSolver_get__parameters_(t_SimplexSolver *self, void *data);
        static PyGetSetDef t_SimplexSolver__fields_[] = {
          DECLARE_GET_FIELD(t_SimplexSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SimplexSolver__methods_[] = {
          DECLARE_METHOD(t_SimplexSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimplexSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimplexSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_SimplexSolver, doOptimize, METH_NOARGS),
          DECLARE_METHOD(t_SimplexSolver, optimize, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimplexSolver)[] = {
          { Py_tp_methods, t_SimplexSolver__methods_ },
          { Py_tp_init, (void *) t_SimplexSolver_init_ },
          { Py_tp_getset, t_SimplexSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimplexSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::optim::linear::LinearOptimizer),
          NULL
        };

        DEFINE_TYPE(SimplexSolver, t_SimplexSolver, SimplexSolver);
        PyObject *t_SimplexSolver::wrap_Object(const SimplexSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SimplexSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SimplexSolver *self = (t_SimplexSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SimplexSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SimplexSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SimplexSolver *self = (t_SimplexSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SimplexSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(SimplexSolver), &PY_TYPE_DEF(SimplexSolver), module, "SimplexSolver", 0);
        }

        void t_SimplexSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimplexSolver), "class_", make_descriptor(SimplexSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimplexSolver), "wrapfn_", make_descriptor(t_SimplexSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimplexSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SimplexSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimplexSolver::initializeClass, 1)))
            return NULL;
          return t_SimplexSolver::wrap_Object(SimplexSolver(((t_SimplexSolver *) arg)->object.this$));
        }
        static PyObject *t_SimplexSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimplexSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SimplexSolver_of_(t_SimplexSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_SimplexSolver_init_(t_SimplexSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              SimplexSolver object((jobject) NULL);

              INT_CALL(object = SimplexSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
              break;
            }
           case 1:
            {
              jdouble a0;
              SimplexSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = SimplexSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jint a1;
              SimplexSolver object((jobject) NULL);

              if (!parseArgs(args, "DI", &a0, &a1))
              {
                INT_CALL(object = SimplexSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jint a1;
              jdouble a2;
              SimplexSolver object((jobject) NULL);

              if (!parseArgs(args, "DID", &a0, &a1, &a2))
              {
                INT_CALL(object = SimplexSolver(a0, a1, a2));
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

        static PyObject *t_SimplexSolver_doOptimize(t_SimplexSolver *self)
        {
          ::org::hipparchus::optim::PointValuePair result((jobject) NULL);
          OBJ_CALL(result = self->object.doOptimize());
          return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
        }

        static PyObject *t_SimplexSolver_optimize(t_SimplexSolver *self, PyObject *args)
        {
          JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
          ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.optimize(a0));
            return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
          }

          return callSuper(PY_TYPE(SimplexSolver), (PyObject *) self, "optimize", args, 2);
        }
        static PyObject *t_SimplexSolver_get__parameters_(t_SimplexSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/NadirPointing.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
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
          mids$[mid_init$_2006ca830c5f735e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/bodies/BodyShape;)V");
          mids$[mid_getTargetPV_ee00ab612436435b] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPV_9e0119a6fef31431] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      NadirPointing::NadirPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::bodies::BodyShape & a1) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_2006ca830c5f735e, a0.this$, a1.this$)) {}

      ::org::orekit::utils::TimeStampedPVCoordinates NadirPointing::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_ee00ab612436435b], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates NadirPointing::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_9e0119a6fef31431], a0.this$, a1.this$, a2.this$));
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
#include "org/orekit/utils/FieldAngularCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/utils/FieldAngularCoordinates.h"
#include "org/orekit/utils/AngularCoordinates.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldAngularCoordinates::class$ = NULL;
      jmethodID *FieldAngularCoordinates::mids$ = NULL;
      bool FieldAngularCoordinates::live$ = false;

      jclass FieldAngularCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldAngularCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_52b7e4a71c1f5acc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)V");
          mids$[mid_init$_00ab28977d6cad95] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_efc6e133321bf38d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/AngularCoordinates;)V");
          mids$[mid_init$_794102ff3ed64d7b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_fe0a9eac1fde176b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;D)V");
          mids$[mid_addOffset_44eedb5739df97b3] = env->getMethodID(cls, "addOffset", "(Lorg/orekit/utils/FieldAngularCoordinates;)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_applyTo_f6b3fdf5ec92a07f] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_applyTo_fdfa06d009a789af] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_applyTo_5954fda0d828683a] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_applyTo_b038abcbf2a1b6eb] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_createFromModifiedRodrigues_ff358948c2fbc568] = env->getStaticMethodID(cls, "createFromModifiedRodrigues", "([[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_estimateRate_2b35a597f76f4c97] = env->getStaticMethodID(cls, "estimateRate", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;D)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_estimateRate_d03d48bfed3b5bc5] = env->getStaticMethodID(cls, "estimateRate", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getIdentity_29a81183f6438266] = env->getStaticMethodID(cls, "getIdentity", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_getModifiedRodrigues_edb85c4da4ced345] = env->getMethodID(cls, "getModifiedRodrigues", "(D)[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRotation_73da4eeccf2b7e14] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getRotationAcceleration_2d64addf4c3391d9] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getRotationRate_2d64addf4c3391d9] = env->getMethodID(cls, "getRotationRate", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_revert_2e8947cffff3985b] = env->getMethodID(cls, "revert", "()Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_rotationShiftedBy_5e711e04bf4f6ce9] = env->getMethodID(cls, "rotationShiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_shiftedBy_d3ff09ba7b3463f1] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_shiftedBy_8ab2fead23207404] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_subtractOffset_44eedb5739df97b3] = env->getMethodID(cls, "subtractOffset", "(Lorg/orekit/utils/FieldAngularCoordinates;)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_toAngularCoordinates_f385f7a363d6ca27] = env->getMethodID(cls, "toAngularCoordinates", "()Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_toDerivativeStructureRotation_787de7775c059c73] = env->getMethodID(cls, "toDerivativeStructureRotation", "(I)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_toUnivariateDerivative1Rotation_73da4eeccf2b7e14] = env->getMethodID(cls, "toUnivariateDerivative1Rotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_toUnivariateDerivative2Rotation_73da4eeccf2b7e14] = env->getMethodID(cls, "toUnivariateDerivative2Rotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAngularCoordinates::FieldAngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_52b7e4a71c1f5acc, a0.this$)) {}

      FieldAngularCoordinates::FieldAngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_00ab28977d6cad95, a0.this$, a1.this$)) {}

      FieldAngularCoordinates::FieldAngularCoordinates(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::AngularCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_efc6e133321bf38d, a0.this$, a1.this$)) {}

      FieldAngularCoordinates::FieldAngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_794102ff3ed64d7b, a0.this$, a1.this$, a2.this$)) {}

      FieldAngularCoordinates::FieldAngularCoordinates(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::orekit::utils::FieldPVCoordinates & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fe0a9eac1fde176b, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

      FieldAngularCoordinates FieldAngularCoordinates::addOffset(const FieldAngularCoordinates & a0) const
      {
        return FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_addOffset_44eedb5739df97b3], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAngularCoordinates::applyTo(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_f6b3fdf5ec92a07f], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAngularCoordinates::applyTo(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_fdfa06d009a789af], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates FieldAngularCoordinates::applyTo(const ::org::orekit::utils::FieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_5954fda0d828683a], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates FieldAngularCoordinates::applyTo(const ::org::orekit::utils::PVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_b038abcbf2a1b6eb], a0.this$));
      }

      FieldAngularCoordinates FieldAngularCoordinates::createFromModifiedRodrigues(const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAngularCoordinates(env->callStaticObjectMethod(cls, mids$[mid_createFromModifiedRodrigues_ff358948c2fbc568], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAngularCoordinates::estimateRate(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_estimateRate_2b35a597f76f4c97], a0.this$, a1.this$, a2));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAngularCoordinates::estimateRate(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_estimateRate_d03d48bfed3b5bc5], a0.this$, a1.this$, a2.this$));
      }

      FieldAngularCoordinates FieldAngularCoordinates::getIdentity(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAngularCoordinates(env->callStaticObjectMethod(cls, mids$[mid_getIdentity_29a81183f6438266], a0.this$));
      }

      JArray< JArray< ::org::hipparchus::CalculusFieldElement > > FieldAngularCoordinates::getModifiedRodrigues(jdouble a0) const
      {
        return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getModifiedRodrigues_edb85c4da4ced345], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAngularCoordinates::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getRotation_73da4eeccf2b7e14]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAngularCoordinates::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_2d64addf4c3391d9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAngularCoordinates::getRotationRate() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRotationRate_2d64addf4c3391d9]));
      }

      FieldAngularCoordinates FieldAngularCoordinates::revert() const
      {
        return FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_revert_2e8947cffff3985b]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAngularCoordinates::rotationShiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationShiftedBy_5e711e04bf4f6ce9], a0.this$));
      }

      FieldAngularCoordinates FieldAngularCoordinates::shiftedBy(jdouble a0) const
      {
        return FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_d3ff09ba7b3463f1], a0));
      }

      FieldAngularCoordinates FieldAngularCoordinates::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_8ab2fead23207404], a0.this$));
      }

      FieldAngularCoordinates FieldAngularCoordinates::subtractOffset(const FieldAngularCoordinates & a0) const
      {
        return FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_subtractOffset_44eedb5739df97b3], a0.this$));
      }

      ::org::orekit::utils::AngularCoordinates FieldAngularCoordinates::toAngularCoordinates() const
      {
        return ::org::orekit::utils::AngularCoordinates(env->callObjectMethod(this$, mids$[mid_toAngularCoordinates_f385f7a363d6ca27]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAngularCoordinates::toDerivativeStructureRotation(jint a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toDerivativeStructureRotation_787de7775c059c73], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAngularCoordinates::toUnivariateDerivative1Rotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1Rotation_73da4eeccf2b7e14]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAngularCoordinates::toUnivariateDerivative2Rotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2Rotation_73da4eeccf2b7e14]));
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
      static PyObject *t_FieldAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_of_(t_FieldAngularCoordinates *self, PyObject *args);
      static int t_FieldAngularCoordinates_init_(t_FieldAngularCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAngularCoordinates_addOffset(t_FieldAngularCoordinates *self, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_applyTo(t_FieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_FieldAngularCoordinates_createFromModifiedRodrigues(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_estimateRate(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAngularCoordinates_getIdentity(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_getModifiedRodrigues(t_FieldAngularCoordinates *self, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_getRotation(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_getRotationAcceleration(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_getRotationRate(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_revert(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_rotationShiftedBy(t_FieldAngularCoordinates *self, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_shiftedBy(t_FieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_FieldAngularCoordinates_subtractOffset(t_FieldAngularCoordinates *self, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_toAngularCoordinates(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_toDerivativeStructureRotation(t_FieldAngularCoordinates *self, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_toUnivariateDerivative1Rotation(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_toUnivariateDerivative2Rotation(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_get__rotation(t_FieldAngularCoordinates *self, void *data);
      static PyObject *t_FieldAngularCoordinates_get__rotationAcceleration(t_FieldAngularCoordinates *self, void *data);
      static PyObject *t_FieldAngularCoordinates_get__rotationRate(t_FieldAngularCoordinates *self, void *data);
      static PyObject *t_FieldAngularCoordinates_get__parameters_(t_FieldAngularCoordinates *self, void *data);
      static PyGetSetDef t_FieldAngularCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAngularCoordinates, rotation),
        DECLARE_GET_FIELD(t_FieldAngularCoordinates, rotationAcceleration),
        DECLARE_GET_FIELD(t_FieldAngularCoordinates, rotationRate),
        DECLARE_GET_FIELD(t_FieldAngularCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAngularCoordinates__methods_[] = {
        DECLARE_METHOD(t_FieldAngularCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAngularCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAngularCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, addOffset, METH_O),
        DECLARE_METHOD(t_FieldAngularCoordinates, applyTo, METH_VARARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, createFromModifiedRodrigues, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAngularCoordinates, estimateRate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAngularCoordinates, getIdentity, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAngularCoordinates, getModifiedRodrigues, METH_O),
        DECLARE_METHOD(t_FieldAngularCoordinates, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, getRotationRate, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, revert, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, rotationShiftedBy, METH_O),
        DECLARE_METHOD(t_FieldAngularCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, subtractOffset, METH_O),
        DECLARE_METHOD(t_FieldAngularCoordinates, toAngularCoordinates, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, toDerivativeStructureRotation, METH_O),
        DECLARE_METHOD(t_FieldAngularCoordinates, toUnivariateDerivative1Rotation, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, toUnivariateDerivative2Rotation, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAngularCoordinates)[] = {
        { Py_tp_methods, t_FieldAngularCoordinates__methods_ },
        { Py_tp_init, (void *) t_FieldAngularCoordinates_init_ },
        { Py_tp_getset, t_FieldAngularCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAngularCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldAngularCoordinates, t_FieldAngularCoordinates, FieldAngularCoordinates);
      PyObject *t_FieldAngularCoordinates::wrap_Object(const FieldAngularCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAngularCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAngularCoordinates *self = (t_FieldAngularCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAngularCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAngularCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAngularCoordinates *self = (t_FieldAngularCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAngularCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAngularCoordinates), &PY_TYPE_DEF(FieldAngularCoordinates), module, "FieldAngularCoordinates", 0);
      }

      void t_FieldAngularCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAngularCoordinates), "class_", make_descriptor(FieldAngularCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAngularCoordinates), "wrapfn_", make_descriptor(t_FieldAngularCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAngularCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAngularCoordinates::initializeClass, 1)))
          return NULL;
        return t_FieldAngularCoordinates::wrap_Object(FieldAngularCoordinates(((t_FieldAngularCoordinates *) arg)->object.this$));
      }
      static PyObject *t_FieldAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAngularCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAngularCoordinates_of_(t_FieldAngularCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAngularCoordinates_init_(t_FieldAngularCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              INT_CALL(object = FieldAngularCoordinates(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::AngularCoordinates a1((jobject) NULL);
            FieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::AngularCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldAngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAngularCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKD", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a4))
            {
              INT_CALL(object = FieldAngularCoordinates(a0, a1, a2, a3, a4));
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

      static PyObject *t_FieldAngularCoordinates_addOffset(t_FieldAngularCoordinates *self, PyObject *arg)
      {
        FieldAngularCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", FieldAngularCoordinates::initializeClass, &a0, &p0, t_FieldAngularCoordinates::parameters_))
        {
          OBJ_CALL(result = self->object.addOffset(a0));
          return t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addOffset", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_applyTo(t_FieldAngularCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "applyTo", args);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_createFromModifiedRodrigues(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "[[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::utils::FieldAngularCoordinates::createFromModifiedRodrigues(a0));
          return t_FieldAngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createFromModifiedRodrigues", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_estimateRate(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KKD", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::utils::FieldAngularCoordinates::estimateRate(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::utils::FieldAngularCoordinates::estimateRate(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "estimateRate", args);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_getIdentity(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::utils::FieldAngularCoordinates::getIdentity(a0));
          return t_FieldAngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getIdentity", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_getModifiedRodrigues(t_FieldAngularCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getModifiedRodrigues(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "getModifiedRodrigues", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_getRotation(t_FieldAngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAngularCoordinates_getRotationAcceleration(t_FieldAngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAngularCoordinates_getRotationRate(t_FieldAngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAngularCoordinates_revert(t_FieldAngularCoordinates *self)
      {
        FieldAngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.revert());
        return t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAngularCoordinates_rotationShiftedBy(t_FieldAngularCoordinates *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.rotationShiftedBy(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "rotationShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_shiftedBy(t_FieldAngularCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldAngularCoordinates result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAngularCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_subtractOffset(t_FieldAngularCoordinates *self, PyObject *arg)
      {
        FieldAngularCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", FieldAngularCoordinates::initializeClass, &a0, &p0, t_FieldAngularCoordinates::parameters_))
        {
          OBJ_CALL(result = self->object.subtractOffset(a0));
          return t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "subtractOffset", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_toAngularCoordinates(t_FieldAngularCoordinates *self)
      {
        ::org::orekit::utils::AngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toAngularCoordinates());
        return ::org::orekit::utils::t_AngularCoordinates::wrap_Object(result);
      }

      static PyObject *t_FieldAngularCoordinates_toDerivativeStructureRotation(t_FieldAngularCoordinates *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructureRotation(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructureRotation", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_toUnivariateDerivative1Rotation(t_FieldAngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1Rotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
      }

      static PyObject *t_FieldAngularCoordinates_toUnivariateDerivative2Rotation(t_FieldAngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2Rotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
      }
      static PyObject *t_FieldAngularCoordinates_get__parameters_(t_FieldAngularCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAngularCoordinates_get__rotation(t_FieldAngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(value);
      }

      static PyObject *t_FieldAngularCoordinates_get__rotationAcceleration(t_FieldAngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldAngularCoordinates_get__rotationRate(t_FieldAngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/CarrierPhase.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/ntrip/CarrierPhase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *CarrierPhase::class$ = NULL;
          jmethodID *CarrierPhase::mids$ = NULL;
          bool CarrierPhase::live$ = false;
          CarrierPhase *CarrierPhase::L1 = NULL;
          CarrierPhase *CarrierPhase::L1_L2 = NULL;
          CarrierPhase *CarrierPhase::NO = NULL;

          jclass CarrierPhase::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/CarrierPhase");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCarrierPhase_14ce0488740d6593] = env->getStaticMethodID(cls, "getCarrierPhase", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/CarrierPhase;");
              mids$[mid_valueOf_14ce0488740d6593] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/CarrierPhase;");
              mids$[mid_values_afb61100453b72d7] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/CarrierPhase;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              L1 = new CarrierPhase(env->getStaticObjectField(cls, "L1", "Lorg/orekit/gnss/metric/ntrip/CarrierPhase;"));
              L1_L2 = new CarrierPhase(env->getStaticObjectField(cls, "L1_L2", "Lorg/orekit/gnss/metric/ntrip/CarrierPhase;"));
              NO = new CarrierPhase(env->getStaticObjectField(cls, "NO", "Lorg/orekit/gnss/metric/ntrip/CarrierPhase;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CarrierPhase CarrierPhase::getCarrierPhase(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CarrierPhase(env->callStaticObjectMethod(cls, mids$[mid_getCarrierPhase_14ce0488740d6593], a0.this$));
          }

          CarrierPhase CarrierPhase::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CarrierPhase(env->callStaticObjectMethod(cls, mids$[mid_valueOf_14ce0488740d6593], a0.this$));
          }

          JArray< CarrierPhase > CarrierPhase::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< CarrierPhase >(env->callStaticObjectMethod(cls, mids$[mid_values_afb61100453b72d7]));
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
          static PyObject *t_CarrierPhase_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CarrierPhase_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CarrierPhase_of_(t_CarrierPhase *self, PyObject *args);
          static PyObject *t_CarrierPhase_getCarrierPhase(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CarrierPhase_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_CarrierPhase_values(PyTypeObject *type);
          static PyObject *t_CarrierPhase_get__parameters_(t_CarrierPhase *self, void *data);
          static PyGetSetDef t_CarrierPhase__fields_[] = {
            DECLARE_GET_FIELD(t_CarrierPhase, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CarrierPhase__methods_[] = {
            DECLARE_METHOD(t_CarrierPhase, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CarrierPhase, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CarrierPhase, of_, METH_VARARGS),
            DECLARE_METHOD(t_CarrierPhase, getCarrierPhase, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CarrierPhase, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CarrierPhase, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CarrierPhase)[] = {
            { Py_tp_methods, t_CarrierPhase__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CarrierPhase__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CarrierPhase)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(CarrierPhase, t_CarrierPhase, CarrierPhase);
          PyObject *t_CarrierPhase::wrap_Object(const CarrierPhase& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CarrierPhase::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CarrierPhase *self = (t_CarrierPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_CarrierPhase::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CarrierPhase::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CarrierPhase *self = (t_CarrierPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_CarrierPhase::install(PyObject *module)
          {
            installType(&PY_TYPE(CarrierPhase), &PY_TYPE_DEF(CarrierPhase), module, "CarrierPhase", 0);
          }

          void t_CarrierPhase::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarrierPhase), "class_", make_descriptor(CarrierPhase::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarrierPhase), "wrapfn_", make_descriptor(t_CarrierPhase::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarrierPhase), "boxfn_", make_descriptor(boxObject));
            env->getClass(CarrierPhase::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarrierPhase), "L1", make_descriptor(t_CarrierPhase::wrap_Object(*CarrierPhase::L1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarrierPhase), "L1_L2", make_descriptor(t_CarrierPhase::wrap_Object(*CarrierPhase::L1_L2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarrierPhase), "NO", make_descriptor(t_CarrierPhase::wrap_Object(*CarrierPhase::NO)));
          }

          static PyObject *t_CarrierPhase_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CarrierPhase::initializeClass, 1)))
              return NULL;
            return t_CarrierPhase::wrap_Object(CarrierPhase(((t_CarrierPhase *) arg)->object.this$));
          }
          static PyObject *t_CarrierPhase_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CarrierPhase::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CarrierPhase_of_(t_CarrierPhase *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_CarrierPhase_getCarrierPhase(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            CarrierPhase result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::CarrierPhase::getCarrierPhase(a0));
              return t_CarrierPhase::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getCarrierPhase", arg);
            return NULL;
          }

          static PyObject *t_CarrierPhase_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            CarrierPhase result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::CarrierPhase::valueOf(a0));
              return t_CarrierPhase::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_CarrierPhase_values(PyTypeObject *type)
          {
            JArray< CarrierPhase > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::CarrierPhase::values());
            return JArray<jobject>(result.this$).wrap(t_CarrierPhase::wrap_jobject);
          }
          static PyObject *t_CarrierPhase_get__parameters_(t_CarrierPhase *self, void *data)
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
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/events/FieldAdaptableInterval.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver.h"
#include "org/hipparchus/ode/events/FieldODEEventHandler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldODEEventDetector::class$ = NULL;
        jmethodID *FieldODEEventDetector::mids$ = NULL;
        bool FieldODEEventDetector::live$ = false;

        jclass FieldODEEventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldODEEventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_8677e670f9e68e2e] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_b77ca012966a5dd0] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/FieldODEEventHandler;");
            mids$[mid_getMaxCheckInterval_e651d05ccb464edb] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/hipparchus/ode/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_412668abc8d889e9] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getSolver_f12d4ed2528168bc] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver;");
            mids$[mid_init_f808a4f21f8be825] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement FieldODEEventDetector::g(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_8677e670f9e68e2e], a0.this$));
        }

        ::org::hipparchus::ode::events::FieldODEEventHandler FieldODEEventDetector::getHandler() const
        {
          return ::org::hipparchus::ode::events::FieldODEEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_b77ca012966a5dd0]));
        }

        ::org::hipparchus::ode::events::FieldAdaptableInterval FieldODEEventDetector::getMaxCheckInterval() const
        {
          return ::org::hipparchus::ode::events::FieldAdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_e651d05ccb464edb]));
        }

        jint FieldODEEventDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_412668abc8d889e9]);
        }

        ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver FieldODEEventDetector::getSolver() const
        {
          return ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver(env->callObjectMethod(this$, mids$[mid_getSolver_f12d4ed2528168bc]));
        }

        void FieldODEEventDetector::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_f808a4f21f8be825], a0.this$, a1.this$);
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
        static PyObject *t_FieldODEEventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEEventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEEventDetector_of_(t_FieldODEEventDetector *self, PyObject *args);
        static PyObject *t_FieldODEEventDetector_g(t_FieldODEEventDetector *self, PyObject *arg);
        static PyObject *t_FieldODEEventDetector_getHandler(t_FieldODEEventDetector *self);
        static PyObject *t_FieldODEEventDetector_getMaxCheckInterval(t_FieldODEEventDetector *self);
        static PyObject *t_FieldODEEventDetector_getMaxIterationCount(t_FieldODEEventDetector *self);
        static PyObject *t_FieldODEEventDetector_getSolver(t_FieldODEEventDetector *self);
        static PyObject *t_FieldODEEventDetector_init(t_FieldODEEventDetector *self, PyObject *args);
        static PyObject *t_FieldODEEventDetector_get__handler(t_FieldODEEventDetector *self, void *data);
        static PyObject *t_FieldODEEventDetector_get__maxCheckInterval(t_FieldODEEventDetector *self, void *data);
        static PyObject *t_FieldODEEventDetector_get__maxIterationCount(t_FieldODEEventDetector *self, void *data);
        static PyObject *t_FieldODEEventDetector_get__solver(t_FieldODEEventDetector *self, void *data);
        static PyObject *t_FieldODEEventDetector_get__parameters_(t_FieldODEEventDetector *self, void *data);
        static PyGetSetDef t_FieldODEEventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEEventDetector, handler),
          DECLARE_GET_FIELD(t_FieldODEEventDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_FieldODEEventDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_FieldODEEventDetector, solver),
          DECLARE_GET_FIELD(t_FieldODEEventDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEEventDetector__methods_[] = {
          DECLARE_METHOD(t_FieldODEEventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEEventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEEventDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEEventDetector, g, METH_O),
          DECLARE_METHOD(t_FieldODEEventDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEEventDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEEventDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEEventDetector, getSolver, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEEventDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEEventDetector)[] = {
          { Py_tp_methods, t_FieldODEEventDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEEventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEEventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEEventDetector, t_FieldODEEventDetector, FieldODEEventDetector);
        PyObject *t_FieldODEEventDetector::wrap_Object(const FieldODEEventDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEEventDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEEventDetector *self = (t_FieldODEEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEEventDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEEventDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEEventDetector *self = (t_FieldODEEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEEventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEEventDetector), &PY_TYPE_DEF(FieldODEEventDetector), module, "FieldODEEventDetector", 0);
        }

        void t_FieldODEEventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEEventDetector), "class_", make_descriptor(FieldODEEventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEEventDetector), "wrapfn_", make_descriptor(t_FieldODEEventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEEventDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEEventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEEventDetector::initializeClass, 1)))
            return NULL;
          return t_FieldODEEventDetector::wrap_Object(FieldODEEventDetector(((t_FieldODEEventDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldODEEventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEEventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEEventDetector_of_(t_FieldODEEventDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEEventDetector_g(t_FieldODEEventDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_FieldODEEventDetector_getHandler(t_FieldODEEventDetector *self)
        {
          ::org::hipparchus::ode::events::FieldODEEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEEventHandler::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldODEEventDetector_getMaxCheckInterval(t_FieldODEEventDetector *self)
        {
          ::org::hipparchus::ode::events::FieldAdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_FieldAdaptableInterval::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldODEEventDetector_getMaxIterationCount(t_FieldODEEventDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldODEEventDetector_getSolver(t_FieldODEEventDetector *self)
        {
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver result((jobject) NULL);
          OBJ_CALL(result = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldODEEventDetector_init(t_FieldODEEventDetector *self, PyObject *args)
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
        static PyObject *t_FieldODEEventDetector_get__parameters_(t_FieldODEEventDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldODEEventDetector_get__handler(t_FieldODEEventDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldODEEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEEventHandler::wrap_Object(value);
        }

        static PyObject *t_FieldODEEventDetector_get__maxCheckInterval(t_FieldODEEventDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldAdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_FieldAdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_FieldODEEventDetector_get__maxIterationCount(t_FieldODEEventDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldODEEventDetector_get__solver(t_FieldODEEventDetector *self, void *data)
        {
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver value((jobject) NULL);
          OBJ_CALL(value = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment.h"
#include "java/util/List.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::class$ = NULL;
        jmethodID *OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::mids$ = NULL;
        bool OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::live$ = false;

        jclass OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3159f48c4c6e4bf2] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/lang/String;ILorg/orekit/frames/Frame;Lorg/orekit/utils/AngularDerivativesFilter;)V");
            mids$[mid_getAngularCoordinates_0d9551367f7ecdef] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");
            mids$[mid_getAttitudeProvider_b44a04493534d299] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
            mids$[mid_getAvailableDerivatives_c2e9b2b1c0db39b3] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
            mids$[mid_getInterpolationMethod_3cffd47377eca18a] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
            mids$[mid_getInterpolationSamples_412668abc8d889e9] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getReferenceFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getStart_7a97f7e149e79afb] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_7a97f7e149e79afb] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment(const ::java::util::List & a0, const ::java::lang::String & a1, jint a2, const ::org::orekit::frames::Frame & a3, const ::org::orekit::utils::AngularDerivativesFilter & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3159f48c4c6e4bf2, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

        ::java::util::List OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getAngularCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAngularCoordinates_0d9551367f7ecdef]));
        }

        ::org::orekit::attitudes::BoundedAttitudeProvider OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::BoundedAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_b44a04493534d299]));
        }

        ::org::orekit::utils::AngularDerivativesFilter OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_c2e9b2b1c0db39b3]));
        }

        ::java::lang::String OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getInterpolationMethod() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_3cffd47377eca18a]));
        }

        jint OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_412668abc8d889e9]);
        }

        ::org::orekit::frames::Frame OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getReferenceFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_6c9bc0a928c56d4e]));
        }

        ::org::orekit::time::AbsoluteDate OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_7a97f7e149e79afb]));
        }

        ::org::orekit::time::AbsoluteDate OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getStop() const
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
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_init_(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getAngularCoordinates(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getAttitudeProvider(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getAvailableDerivatives(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getInterpolationMethod(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getInterpolationSamples(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getReferenceFrame(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getStart(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getStop(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__angularCoordinates(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__attitudeProvider(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__availableDerivatives(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__interpolationMethod(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__interpolationSamples(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__referenceFrame(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__start(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__stop(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyGetSetDef t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, angularCoordinates),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, attitudeProvider),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, availableDerivatives),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, interpolationMethod),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, interpolationSamples),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, referenceFrame),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, start),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment__methods_[] = {
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getAngularCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getAttitudeProvider, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getInterpolationMethod, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getReferenceFrame, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getStart, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment)[] = {
          { Py_tp_methods, t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment__methods_ },
          { Py_tp_init, (void *) t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_init_ },
          { Py_tp_getset, t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment);

        void t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment), &PY_TYPE_DEF(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment), module, "OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment", 0);
        }

        void t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment), "class_", make_descriptor(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment), "wrapfn_", make_descriptor(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::initializeClass, 1)))
            return NULL;
          return t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::wrap_Object(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment(((t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *) arg)->object.this$));
        }
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_init_(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);
          jint a2;
          ::org::orekit::frames::Frame a3((jobject) NULL);
          ::org::orekit::utils::AngularDerivativesFilter a4((jobject) NULL);
          PyTypeObject **p4;
          OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment object((jobject) NULL);

          if (!parseArgs(args, "KsIkK", ::java::util::List::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &a3, &a4, &p4, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
          {
            INT_CALL(object = OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getAngularCoordinates(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAngularCoordinates());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getAttitudeProvider(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::org::orekit::attitudes::BoundedAttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getAvailableDerivatives(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getInterpolationMethod(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getInterpolationMethod());
          return j2p(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getInterpolationSamples(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getReferenceFrame(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getReferenceFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getStart(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getStop(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__angularCoordinates(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAngularCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__attitudeProvider(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__availableDerivatives(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__interpolationMethod(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getInterpolationMethod());
          return j2p(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__interpolationSamples(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__referenceFrame(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getReferenceFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__start(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__stop(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmHeader::class$ = NULL;
            jmethodID *AdmHeader::mids$ = NULL;
            bool AdmHeader::live$ = false;

            jclass AdmHeader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmHeader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AdmHeader::AdmHeader() : ::org::orekit::files::ccsds::section::Header(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}
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
            static PyObject *t_AdmHeader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmHeader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AdmHeader_init_(t_AdmHeader *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_AdmHeader__methods_[] = {
              DECLARE_METHOD(t_AdmHeader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmHeader, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmHeader)[] = {
              { Py_tp_methods, t_AdmHeader__methods_ },
              { Py_tp_init, (void *) t_AdmHeader_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmHeader)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Header),
              NULL
            };

            DEFINE_TYPE(AdmHeader, t_AdmHeader, AdmHeader);

            void t_AdmHeader::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmHeader), &PY_TYPE_DEF(AdmHeader), module, "AdmHeader", 0);
            }

            void t_AdmHeader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmHeader), "class_", make_descriptor(AdmHeader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmHeader), "wrapfn_", make_descriptor(t_AdmHeader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmHeader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdmHeader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmHeader::initializeClass, 1)))
                return NULL;
              return t_AdmHeader::wrap_Object(AdmHeader(((t_AdmHeader *) arg)->object.this$));
            }
            static PyObject *t_AdmHeader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmHeader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AdmHeader_init_(t_AdmHeader *self, PyObject *args, PyObject *kwds)
            {
              AdmHeader object((jobject) NULL);

              INT_CALL(object = AdmHeader());
              self->object = object;

              return 0;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4A0.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4A0::class$ = NULL;
          jmethodID *SubFrame4A0::mids$ = NULL;
          bool SubFrame4A0::live$ = false;

          jclass SubFrame4A0::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4A0");

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
    namespace gnss {
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame4A0_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4A0_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_SubFrame4A0__methods_[] = {
            DECLARE_METHOD(t_SubFrame4A0, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4A0, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4A0)[] = {
            { Py_tp_methods, t_SubFrame4A0__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4A0)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame4A),
            NULL
          };

          DEFINE_TYPE(SubFrame4A0, t_SubFrame4A0, SubFrame4A0);

          void t_SubFrame4A0::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4A0), &PY_TYPE_DEF(SubFrame4A0), module, "SubFrame4A0", 0);
          }

          void t_SubFrame4A0::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A0), "class_", make_descriptor(SubFrame4A0::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A0), "wrapfn_", make_descriptor(t_SubFrame4A0::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A0), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame4A0_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4A0::initializeClass, 1)))
              return NULL;
            return t_SubFrame4A0::wrap_Object(SubFrame4A0(((t_SubFrame4A0 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4A0_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4A0::initializeClass, 0))
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
#include "org/orekit/utils/FieldAbsolutePVCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldAbsolutePVCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *FieldAbsolutePVCoordinatesHermiteInterpolator::mids$ = NULL;
      bool FieldAbsolutePVCoordinatesHermiteInterpolator::live$ = false;

      jclass FieldAbsolutePVCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldAbsolutePVCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_535d1f91a93c8b4d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_03d00ffd0ee81fe0] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_51c833c667e08e0f] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_824f93e8d6b45930] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getFilter_6c4898d6ec0c3837] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_getOutputFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getOutputFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_688bb3c7da5427a7] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/utils/FieldAbsolutePVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAbsolutePVCoordinatesHermiteInterpolator::FieldAbsolutePVCoordinatesHermiteInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_535d1f91a93c8b4d, a0.this$)) {}

      FieldAbsolutePVCoordinatesHermiteInterpolator::FieldAbsolutePVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_03d00ffd0ee81fe0, a0, a1.this$)) {}

      FieldAbsolutePVCoordinatesHermiteInterpolator::FieldAbsolutePVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_51c833c667e08e0f, a0, a1.this$, a2.this$)) {}

      FieldAbsolutePVCoordinatesHermiteInterpolator::FieldAbsolutePVCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_824f93e8d6b45930, a0, a1, a2.this$, a3.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter FieldAbsolutePVCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_6c4898d6ec0c3837]));
      }

      ::org::orekit::frames::Frame FieldAbsolutePVCoordinatesHermiteInterpolator::getOutputFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputFrame_6c9bc0a928c56d4e]));
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
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_of_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_FieldAbsolutePVCoordinatesHermiteInterpolator_init_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_getFilter(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_getOutputFrame(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__filter(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__outputFrame(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__parameters_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_FieldAbsolutePVCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, outputFrame),
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAbsolutePVCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, getOutputFrame, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAbsolutePVCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_FieldAbsolutePVCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_FieldAbsolutePVCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_FieldAbsolutePVCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAbsolutePVCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(FieldAbsolutePVCoordinatesHermiteInterpolator, t_FieldAbsolutePVCoordinatesHermiteInterpolator, FieldAbsolutePVCoordinatesHermiteInterpolator);
      PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_Object(const FieldAbsolutePVCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsolutePVCoordinatesHermiteInterpolator *self = (t_FieldAbsolutePVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsolutePVCoordinatesHermiteInterpolator *self = (t_FieldAbsolutePVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAbsolutePVCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAbsolutePVCoordinatesHermiteInterpolator), &PY_TYPE_DEF(FieldAbsolutePVCoordinatesHermiteInterpolator), module, "FieldAbsolutePVCoordinatesHermiteInterpolator", 0);
      }

      void t_FieldAbsolutePVCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinatesHermiteInterpolator), "class_", make_descriptor(FieldAbsolutePVCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAbsolutePVCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_Object(FieldAbsolutePVCoordinatesHermiteInterpolator(((t_FieldAbsolutePVCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAbsolutePVCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_of_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAbsolutePVCoordinatesHermiteInterpolator_init_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            FieldAbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = FieldAbsolutePVCoordinatesHermiteInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            FieldAbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = FieldAbsolutePVCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinatesHermiteInterpolator(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            FieldAbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinatesHermiteInterpolator(a0, a1, a2, a3));
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

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_getFilter(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_getOutputFrame(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__parameters_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__filter(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__outputFrame(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PropagatorConverter.h"
#include "java/util/List.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PropagatorConverter::class$ = NULL;
        jmethodID *PropagatorConverter::mids$ = NULL;
        bool PropagatorConverter::live$ = false;

        jclass PropagatorConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PropagatorConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_convert_aca0727def0bdfc3] = env->getMethodID(cls, "convert", "(Ljava/util/List;Z[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_e823fa7f61b08ee5] = env->getMethodID(cls, "convert", "(Ljava/util/List;ZLjava/util/List;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_45d78d4eb2e28b70] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DI[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_5aea72ca01fda79c] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DILjava/util/List;)Lorg/orekit/propagation/Propagator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::Propagator PropagatorConverter::convert(const ::java::util::List & a0, jboolean a1, const JArray< ::java::lang::String > & a2) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_aca0727def0bdfc3], a0.this$, a1, a2.this$));
        }

        ::org::orekit::propagation::Propagator PropagatorConverter::convert(const ::java::util::List & a0, jboolean a1, const ::java::util::List & a2) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_e823fa7f61b08ee5], a0.this$, a1, a2.this$));
        }

        ::org::orekit::propagation::Propagator PropagatorConverter::convert(const ::org::orekit::propagation::Propagator & a0, jdouble a1, jint a2, const JArray< ::java::lang::String > & a3) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_45d78d4eb2e28b70], a0.this$, a1, a2, a3.this$));
        }

        ::org::orekit::propagation::Propagator PropagatorConverter::convert(const ::org::orekit::propagation::Propagator & a0, jdouble a1, jint a2, const ::java::util::List & a3) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_5aea72ca01fda79c], a0.this$, a1, a2, a3.this$));
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
        static PyObject *t_PropagatorConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PropagatorConverter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PropagatorConverter_convert(t_PropagatorConverter *self, PyObject *args);

        static PyMethodDef t_PropagatorConverter__methods_[] = {
          DECLARE_METHOD(t_PropagatorConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PropagatorConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PropagatorConverter, convert, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PropagatorConverter)[] = {
          { Py_tp_methods, t_PropagatorConverter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PropagatorConverter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PropagatorConverter, t_PropagatorConverter, PropagatorConverter);

        void t_PropagatorConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(PropagatorConverter), &PY_TYPE_DEF(PropagatorConverter), module, "PropagatorConverter", 0);
        }

        void t_PropagatorConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorConverter), "class_", make_descriptor(PropagatorConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorConverter), "wrapfn_", make_descriptor(t_PropagatorConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PropagatorConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PropagatorConverter::initializeClass, 1)))
            return NULL;
          return t_PropagatorConverter::wrap_Object(PropagatorConverter(((t_PropagatorConverter *) arg)->object.this$));
        }
        static PyObject *t_PropagatorConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PropagatorConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PropagatorConverter_convert(t_PropagatorConverter *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean a1;
              JArray< ::java::lang::String > a2((jobject) NULL);
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "KZ[s", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean a1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "KZK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              ::org::orekit::propagation::Propagator a0((jobject) NULL);
              jdouble a1;
              jint a2;
              JArray< ::java::lang::String > a3((jobject) NULL);
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "kDI[s", ::org::orekit::propagation::Propagator::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::Propagator a0((jobject) NULL);
              jdouble a1;
              jint a2;
              ::java::util::List a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "kDIK", ::org::orekit::propagation::Propagator::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "convert", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/PythonStateMapper.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/Throwable.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonStateMapper::class$ = NULL;
        jmethodID *PythonStateMapper::mids$ = NULL;
        bool PythonStateMapper::live$ = false;

        jclass PythonStateMapper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonStateMapper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f250d8aaa74478ce] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_mapArrayToState_f38e2174d37ac0d2] = env->getMethodID(cls, "mapArrayToState", "(Lorg/orekit/time/AbsoluteDate;[D[DLorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_mapStateToArray_c6e78d5a2304799f] = env->getMethodID(cls, "mapStateToArray", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonStateMapper::PythonStateMapper(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::orbits::OrbitType & a2, const ::org::orekit::orbits::PositionAngleType & a3, const ::org::orekit::attitudes::AttitudeProvider & a4, const ::org::orekit::frames::Frame & a5) : ::org::orekit::propagation::integration::StateMapper(env->newObject(initializeClass, &mids$, mid_init$_f250d8aaa74478ce, a0.this$, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        void PythonStateMapper::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonStateMapper::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonStateMapper::pythonExtension(jlong a0) const
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
      namespace integration {
        static PyObject *t_PythonStateMapper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonStateMapper_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonStateMapper_init_(t_PythonStateMapper *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonStateMapper_finalize(t_PythonStateMapper *self);
        static PyObject *t_PythonStateMapper_pythonExtension(t_PythonStateMapper *self, PyObject *args);
        static jobject JNICALL t_PythonStateMapper_mapArrayToState0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static void JNICALL t_PythonStateMapper_mapStateToArray1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonStateMapper_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonStateMapper_get__self(t_PythonStateMapper *self, void *data);
        static PyGetSetDef t_PythonStateMapper__fields_[] = {
          DECLARE_GET_FIELD(t_PythonStateMapper, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonStateMapper__methods_[] = {
          DECLARE_METHOD(t_PythonStateMapper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonStateMapper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonStateMapper, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonStateMapper, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonStateMapper)[] = {
          { Py_tp_methods, t_PythonStateMapper__methods_ },
          { Py_tp_init, (void *) t_PythonStateMapper_init_ },
          { Py_tp_getset, t_PythonStateMapper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonStateMapper)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::StateMapper),
          NULL
        };

        DEFINE_TYPE(PythonStateMapper, t_PythonStateMapper, PythonStateMapper);

        void t_PythonStateMapper::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonStateMapper), &PY_TYPE_DEF(PythonStateMapper), module, "PythonStateMapper", 1);
        }

        void t_PythonStateMapper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateMapper), "class_", make_descriptor(PythonStateMapper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateMapper), "wrapfn_", make_descriptor(t_PythonStateMapper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateMapper), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonStateMapper::initializeClass);
          JNINativeMethod methods[] = {
            { "mapArrayToState", "(Lorg/orekit/time/AbsoluteDate;[D[DLorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonStateMapper_mapArrayToState0 },
            { "mapStateToArray", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V", (void *) t_PythonStateMapper_mapStateToArray1 },
            { "pythonDecRef", "()V", (void *) t_PythonStateMapper_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonStateMapper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonStateMapper::initializeClass, 1)))
            return NULL;
          return t_PythonStateMapper::wrap_Object(PythonStateMapper(((t_PythonStateMapper *) arg)->object.this$));
        }
        static PyObject *t_PythonStateMapper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonStateMapper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonStateMapper_init_(t_PythonStateMapper *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::orbits::PositionAngleType a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
          ::org::orekit::frames::Frame a5((jobject) NULL);
          PythonStateMapper object((jobject) NULL);

          if (!parseArgs(args, "kDKKkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_, &a3, &p3, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a4, &a5))
          {
            INT_CALL(object = PythonStateMapper(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_PythonStateMapper_finalize(t_PythonStateMapper *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonStateMapper_pythonExtension(t_PythonStateMapper *self, PyObject *args)
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

        static jobject JNICALL t_PythonStateMapper_mapArrayToState0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonStateMapper::mids$[PythonStateMapper::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
          PyObject *o1 = JArray<jdouble>(a1).wrap();
          PyObject *o2 = JArray<jdouble>(a2).wrap();
          PyObject *o3 = ::org::orekit::propagation::t_PropagationType::wrap_Object(::org::orekit::propagation::PropagationType(a3));
          PyObject *result = PyObject_CallMethod(obj, "mapArrayToState", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            throwTypeError("mapArrayToState", result);
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

        static void JNICALL t_PythonStateMapper_mapStateToArray1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonStateMapper::mids$[PythonStateMapper::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = JArray<jdouble>(a1).wrap();
          PyObject *o2 = JArray<jdouble>(a2).wrap();
          PyObject *result = PyObject_CallMethod(obj, "mapStateToArray", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonStateMapper_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonStateMapper::mids$[PythonStateMapper::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonStateMapper::mids$[PythonStateMapper::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonStateMapper_get__self(t_PythonStateMapper *self, void *data)
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
#include "org/orekit/frames/encounter/PythonAbstractEncounterLOF.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *PythonAbstractEncounterLOF::class$ = NULL;
        jmethodID *PythonAbstractEncounterLOF::mids$ = NULL;
        bool PythonAbstractEncounterLOF::live$ = false;

        jclass PythonAbstractEncounterLOF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/PythonAbstractEncounterLOF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_dd80faf626f5319e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;)V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getAxisNormalToCollisionPlane_f88961cca75a2c0a] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getAxisNormalToCollisionPlane_3a465a0c08d1dbdf] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_rotationFromInertial_0158ab79fb625627] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_ea6e3434436b926f] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractEncounterLOF::PythonAbstractEncounterLOF(const ::org::orekit::utils::PVCoordinates & a0) : ::org::orekit::frames::encounter::AbstractEncounterLOF(env->newObject(initializeClass, &mids$, mid_init$_dd80faf626f5319e, a0.this$)) {}

        void PythonAbstractEncounterLOF::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonAbstractEncounterLOF::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonAbstractEncounterLOF::pythonExtension(jlong a0) const
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
    namespace frames {
      namespace encounter {
        static PyObject *t_PythonAbstractEncounterLOF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractEncounterLOF_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractEncounterLOF_init_(t_PythonAbstractEncounterLOF *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractEncounterLOF_finalize(t_PythonAbstractEncounterLOF *self);
        static PyObject *t_PythonAbstractEncounterLOF_pythonExtension(t_PythonAbstractEncounterLOF *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAbstractEncounterLOF_getName2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractEncounterLOF_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractEncounterLOF_rotationFromInertial4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonAbstractEncounterLOF_rotationFromInertial5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static PyObject *t_PythonAbstractEncounterLOF_get__self(t_PythonAbstractEncounterLOF *self, void *data);
        static PyGetSetDef t_PythonAbstractEncounterLOF__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractEncounterLOF, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractEncounterLOF__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractEncounterLOF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractEncounterLOF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractEncounterLOF, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractEncounterLOF, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractEncounterLOF)[] = {
          { Py_tp_methods, t_PythonAbstractEncounterLOF__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractEncounterLOF_init_ },
          { Py_tp_getset, t_PythonAbstractEncounterLOF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractEncounterLOF)[] = {
          &PY_TYPE_DEF(::org::orekit::frames::encounter::AbstractEncounterLOF),
          NULL
        };

        DEFINE_TYPE(PythonAbstractEncounterLOF, t_PythonAbstractEncounterLOF, PythonAbstractEncounterLOF);

        void t_PythonAbstractEncounterLOF::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractEncounterLOF), &PY_TYPE_DEF(PythonAbstractEncounterLOF), module, "PythonAbstractEncounterLOF", 1);
        }

        void t_PythonAbstractEncounterLOF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncounterLOF), "class_", make_descriptor(PythonAbstractEncounterLOF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncounterLOF), "wrapfn_", make_descriptor(t_PythonAbstractEncounterLOF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncounterLOF), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractEncounterLOF::initializeClass);
          JNINativeMethod methods[] = {
            { "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane0 },
            { "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane1 },
            { "getName", "()Ljava/lang/String;", (void *) t_PythonAbstractEncounterLOF_getName2 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractEncounterLOF_pythonDecRef3 },
            { "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonAbstractEncounterLOF_rotationFromInertial4 },
            { "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;", (void *) t_PythonAbstractEncounterLOF_rotationFromInertial5 },
          };
          env->registerNatives(cls, methods, 6);
        }

        static PyObject *t_PythonAbstractEncounterLOF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractEncounterLOF::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractEncounterLOF::wrap_Object(PythonAbstractEncounterLOF(((t_PythonAbstractEncounterLOF *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractEncounterLOF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractEncounterLOF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractEncounterLOF_init_(t_PythonAbstractEncounterLOF *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
          PythonAbstractEncounterLOF object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
          {
            INT_CALL(object = PythonAbstractEncounterLOF(a0));
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

        static PyObject *t_PythonAbstractEncounterLOF_finalize(t_PythonAbstractEncounterLOF *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractEncounterLOF_pythonExtension(t_PythonAbstractEncounterLOF *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getAxisNormalToCollisionPlane", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("getAxisNormalToCollisionPlane", result);
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

        static jobject JNICALL t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *result = PyObject_CallMethod(obj, "getAxisNormalToCollisionPlane", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("getAxisNormalToCollisionPlane", result);
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

        static jobject JNICALL t_PythonAbstractEncounterLOF_getName2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_9e26256fb0d384a2]);
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

        static void JNICALL t_PythonAbstractEncounterLOF_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonAbstractEncounterLOF_rotationFromInertial4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
          PyObject *o0 = ::org::orekit::utils::t_PVCoordinates::wrap_Object(::org::orekit::utils::PVCoordinates(a0));
          PyObject *o1 = ::org::orekit::utils::t_PVCoordinates::wrap_Object(::org::orekit::utils::PVCoordinates(a1));
          PyObject *result = PyObject_CallMethod(obj, "rotationFromInertial", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
          {
            throwTypeError("rotationFromInertial", result);
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

        static jobject JNICALL t_PythonAbstractEncounterLOF_rotationFromInertial5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *o1 = ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(::org::orekit::utils::FieldPVCoordinates(a1));
          PyObject *o2 = ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(::org::orekit::utils::FieldPVCoordinates(a2));
          PyObject *result = PyObject_CallMethod(obj, "rotationFromInertial", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &value))
          {
            throwTypeError("rotationFromInertial", result);
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

        static PyObject *t_PythonAbstractEncounterLOF_get__self(t_PythonAbstractEncounterLOF *self, void *data)
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
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/StaticTransform.h"
#include "org/orekit/frames/FieldTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *TransformProvider::class$ = NULL;
      jmethodID *TransformProvider::mids$ = NULL;
      bool TransformProvider::live$ = false;

      jclass TransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/TransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getStaticTransform_7265a2d9c3b9a38a] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_68fd5b9bb9184393] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransform_df04e3927954349e] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_e70631ba002d9a32] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::StaticTransform TransformProvider::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_7265a2d9c3b9a38a], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform TransformProvider::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_68fd5b9bb9184393], a0.this$));
      }

      ::org::orekit::frames::Transform TransformProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_df04e3927954349e], a0.this$));
      }

      ::org::orekit::frames::FieldTransform TransformProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_e70631ba002d9a32], a0.this$));
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
      static PyObject *t_TransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TransformProvider_getStaticTransform(t_TransformProvider *self, PyObject *args);
      static PyObject *t_TransformProvider_getTransform(t_TransformProvider *self, PyObject *args);

      static PyMethodDef t_TransformProvider__methods_[] = {
        DECLARE_METHOD(t_TransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformProvider, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_TransformProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TransformProvider)[] = {
        { Py_tp_methods, t_TransformProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TransformProvider)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(TransformProvider, t_TransformProvider, TransformProvider);

      void t_TransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(TransformProvider), &PY_TYPE_DEF(TransformProvider), module, "TransformProvider", 0);
      }

      void t_TransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProvider), "class_", make_descriptor(TransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProvider), "wrapfn_", make_descriptor(t_TransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TransformProvider::initializeClass, 1)))
          return NULL;
        return t_TransformProvider::wrap_Object(TransformProvider(((t_TransformProvider *) arg)->object.this$));
      }
      static PyObject *t_TransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TransformProvider_getStaticTransform(t_TransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
        return NULL;
      }

      static PyObject *t_TransformProvider_getTransform(t_TransformProvider *self, PyObject *args)
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
          mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble UnivariateFunction::value(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
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
#include "org/orekit/files/rinex/clock/RinexClockParser.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "org/orekit/files/rinex/clock/RinexClock.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/io/BufferedReader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClockParser::class$ = NULL;
          jmethodID *RinexClockParser::mids$ = NULL;
          bool RinexClockParser::live$ = false;

          jclass RinexClockParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClockParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_parse_70775d8267b42e37] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;)Lorg/orekit/files/rinex/clock/RinexClock;");
              mids$[mid_parse_f636ade7825ced3d] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/rinex/clock/RinexClock;");
              mids$[mid_parse_e9ac07eb307c88c8] = env->getMethodID(cls, "parse", "(Ljava/io/BufferedReader;Ljava/lang/String;)Lorg/orekit/files/rinex/clock/RinexClock;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexClockParser::RinexClockParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          ::org::orekit::files::rinex::clock::RinexClock RinexClockParser::parse(const ::java::io::InputStream & a0) const
          {
            return ::org::orekit::files::rinex::clock::RinexClock(env->callObjectMethod(this$, mids$[mid_parse_70775d8267b42e37], a0.this$));
          }

          ::org::orekit::files::rinex::clock::RinexClock RinexClockParser::parse(const ::java::lang::String & a0) const
          {
            return ::org::orekit::files::rinex::clock::RinexClock(env->callObjectMethod(this$, mids$[mid_parse_f636ade7825ced3d], a0.this$));
          }

          ::org::orekit::files::rinex::clock::RinexClock RinexClockParser::parse(const ::java::io::BufferedReader & a0, const ::java::lang::String & a1) const
          {
            return ::org::orekit::files::rinex::clock::RinexClock(env->callObjectMethod(this$, mids$[mid_parse_e9ac07eb307c88c8], a0.this$, a1.this$));
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
        namespace clock {
          static PyObject *t_RinexClockParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClockParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexClockParser_init_(t_RinexClockParser *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexClockParser_parse(t_RinexClockParser *self, PyObject *args);

          static PyMethodDef t_RinexClockParser__methods_[] = {
            DECLARE_METHOD(t_RinexClockParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClockParser, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClockParser, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClockParser)[] = {
            { Py_tp_methods, t_RinexClockParser__methods_ },
            { Py_tp_init, (void *) t_RinexClockParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClockParser)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexClockParser, t_RinexClockParser, RinexClockParser);

          void t_RinexClockParser::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClockParser), &PY_TYPE_DEF(RinexClockParser), module, "RinexClockParser", 0);
          }

          void t_RinexClockParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClockParser), "class_", make_descriptor(RinexClockParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClockParser), "wrapfn_", make_descriptor(t_RinexClockParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClockParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexClockParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClockParser::initializeClass, 1)))
              return NULL;
            return t_RinexClockParser::wrap_Object(RinexClockParser(((t_RinexClockParser *) arg)->object.this$));
          }
          static PyObject *t_RinexClockParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClockParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexClockParser_init_(t_RinexClockParser *self, PyObject *args, PyObject *kwds)
          {
            RinexClockParser object((jobject) NULL);

            INT_CALL(object = RinexClockParser());
            self->object = object;

            return 0;
          }

          static PyObject *t_RinexClockParser_parse(t_RinexClockParser *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::io::InputStream a0((jobject) NULL);
                ::org::orekit::files::rinex::clock::RinexClock result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::io::InputStream::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::rinex::clock::t_RinexClock::wrap_Object(result);
                }
              }
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::files::rinex::clock::RinexClock result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::rinex::clock::t_RinexClock::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::java::io::BufferedReader a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::org::orekit::files::rinex::clock::RinexClock result((jobject) NULL);

                if (!parseArgs(args, "ks", ::java::io::BufferedReader::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.parse(a0, a1));
                  return ::org::orekit::files::rinex::clock::t_RinexClock::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "parse", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/BeidouMeo.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *BeidouMeo::class$ = NULL;
        jmethodID *BeidouMeo::mids$ = NULL;
        bool BeidouMeo::live$ = false;

        jclass BeidouMeo::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/BeidouMeo");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c9803b569bb20b21] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_2a43991494de952e] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_c46751716d57fe1f] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BeidouMeo::BeidouMeo(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_c9803b569bb20b21, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
        static PyObject *t_BeidouMeo_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BeidouMeo_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BeidouMeo_init_(t_BeidouMeo *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_BeidouMeo__methods_[] = {
          DECLARE_METHOD(t_BeidouMeo, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BeidouMeo, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BeidouMeo)[] = {
          { Py_tp_methods, t_BeidouMeo__methods_ },
          { Py_tp_init, (void *) t_BeidouMeo_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BeidouMeo)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(BeidouMeo, t_BeidouMeo, BeidouMeo);

        void t_BeidouMeo::install(PyObject *module)
        {
          installType(&PY_TYPE(BeidouMeo), &PY_TYPE_DEF(BeidouMeo), module, "BeidouMeo", 0);
        }

        void t_BeidouMeo::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouMeo), "class_", make_descriptor(BeidouMeo::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouMeo), "wrapfn_", make_descriptor(t_BeidouMeo::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouMeo), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BeidouMeo_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BeidouMeo::initializeClass, 1)))
            return NULL;
          return t_BeidouMeo::wrap_Object(BeidouMeo(((t_BeidouMeo *) arg)->object.this$));
        }
        static PyObject *t_BeidouMeo_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BeidouMeo::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BeidouMeo_init_(t_BeidouMeo *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          BeidouMeo object((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = BeidouMeo(a0, a1, a2, a3));
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
#include "org/orekit/forces/empirical/TimeSpanParametricAcceleration.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "java/util/List.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        ::java::lang::Class *TimeSpanParametricAcceleration::class$ = NULL;
        jmethodID *TimeSpanParametricAcceleration::mids$ = NULL;
        bool TimeSpanParametricAcceleration::live$ = false;
        ::java::lang::String *TimeSpanParametricAcceleration::DATE_AFTER = NULL;
        ::java::lang::String *TimeSpanParametricAcceleration::DATE_BEFORE = NULL;

        jclass TimeSpanParametricAcceleration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/empirical/TimeSpanParametricAcceleration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fdf46db75c3e782a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;ZLorg/orekit/forces/empirical/AccelerationModel;)V");
            mids$[mid_init$_b106f18f1129bdba] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/empirical/AccelerationModel;)V");
            mids$[mid_acceleration_b61fb59a041240c6] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_61944e27a39e8290] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_addAccelerationModelValidAfter_9342f723ecfae537] = env->getMethodID(cls, "addAccelerationModelValidAfter", "(Lorg/orekit/forces/empirical/AccelerationModel;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_addAccelerationModelValidBefore_9342f723ecfae537] = env->getMethodID(cls, "addAccelerationModelValidBefore", "(Lorg/orekit/forces/empirical/AccelerationModel;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_extractAccelerationModelRange_cdee4c9b841a225d] = env->getMethodID(cls, "extractAccelerationModelRange", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap;");
            mids$[mid_extractParameters_2a4cb51cb18e4e8b] = env->getMethodID(cls, "extractParameters", "([DLorg/orekit/time/AbsoluteDate;)[D");
            mids$[mid_extractParameters_32c7759b5aba450d] = env->getMethodID(cls, "extractParameters", "([Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getAccelerationModel_d68384122246eccc] = env->getMethodID(cls, "getAccelerationModel", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/empirical/AccelerationModel;");
            mids$[mid_getAccelerationModelSpan_320d9b9cba67eeb8] = env->getMethodID(cls, "getAccelerationModelSpan", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap$Span;");
            mids$[mid_getEventDetectors_d7cce92225eb0db2] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_8130af76f6998f44] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getFirstSpan_2a24ed7b7f6cbca3] = env->getMethodID(cls, "getFirstSpan", "()Lorg/orekit/utils/TimeSpanMap$Span;");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DATE_AFTER = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_AFTER", "Ljava/lang/String;"));
            DATE_BEFORE = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_BEFORE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TimeSpanParametricAcceleration::TimeSpanParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jboolean a1, const ::org::orekit::forces::empirical::AccelerationModel & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fdf46db75c3e782a, a0.this$, a1, a2.this$)) {}

        TimeSpanParametricAcceleration::TimeSpanParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::empirical::AccelerationModel & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b106f18f1129bdba, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D TimeSpanParametricAcceleration::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b61fb59a041240c6], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D TimeSpanParametricAcceleration::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_61944e27a39e8290], a0.this$, a1.this$));
        }

        void TimeSpanParametricAcceleration::addAccelerationModelValidAfter(const ::org::orekit::forces::empirical::AccelerationModel & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addAccelerationModelValidAfter_9342f723ecfae537], a0.this$, a1.this$);
        }

        void TimeSpanParametricAcceleration::addAccelerationModelValidBefore(const ::org::orekit::forces::empirical::AccelerationModel & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addAccelerationModelValidBefore_9342f723ecfae537], a0.this$, a1.this$);
        }

        jboolean TimeSpanParametricAcceleration::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1]);
        }

        ::org::orekit::utils::TimeSpanMap TimeSpanParametricAcceleration::extractAccelerationModelRange(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_extractAccelerationModelRange_cdee4c9b841a225d], a0.this$, a1.this$));
        }

        JArray< jdouble > TimeSpanParametricAcceleration::extractParameters(const JArray< jdouble > & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractParameters_2a4cb51cb18e4e8b], a0.this$, a1.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > TimeSpanParametricAcceleration::extractParameters(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_extractParameters_32c7759b5aba450d], a0.this$, a1.this$));
        }

        ::org::orekit::forces::empirical::AccelerationModel TimeSpanParametricAcceleration::getAccelerationModel(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::forces::empirical::AccelerationModel(env->callObjectMethod(this$, mids$[mid_getAccelerationModel_d68384122246eccc], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap$Span TimeSpanParametricAcceleration::getAccelerationModelSpan(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getAccelerationModelSpan_320d9b9cba67eeb8], a0.this$));
        }

        ::java::util::stream::Stream TimeSpanParametricAcceleration::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_d7cce92225eb0db2]));
        }

        ::java::util::stream::Stream TimeSpanParametricAcceleration::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_8130af76f6998f44], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap$Span TimeSpanParametricAcceleration::getFirstSpan() const
        {
          return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getFirstSpan_2a24ed7b7f6cbca3]));
        }

        ::java::util::List TimeSpanParametricAcceleration::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
        }

        void TimeSpanParametricAcceleration::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
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
    namespace forces {
      namespace empirical {
        static PyObject *t_TimeSpanParametricAcceleration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeSpanParametricAcceleration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TimeSpanParametricAcceleration_init_(t_TimeSpanParametricAcceleration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TimeSpanParametricAcceleration_acceleration(t_TimeSpanParametricAcceleration *self, PyObject *args);
        static PyObject *t_TimeSpanParametricAcceleration_addAccelerationModelValidAfter(t_TimeSpanParametricAcceleration *self, PyObject *args);
        static PyObject *t_TimeSpanParametricAcceleration_addAccelerationModelValidBefore(t_TimeSpanParametricAcceleration *self, PyObject *args);
        static PyObject *t_TimeSpanParametricAcceleration_dependsOnPositionOnly(t_TimeSpanParametricAcceleration *self);
        static PyObject *t_TimeSpanParametricAcceleration_extractAccelerationModelRange(t_TimeSpanParametricAcceleration *self, PyObject *args);
        static PyObject *t_TimeSpanParametricAcceleration_extractParameters(t_TimeSpanParametricAcceleration *self, PyObject *args);
        static PyObject *t_TimeSpanParametricAcceleration_getAccelerationModel(t_TimeSpanParametricAcceleration *self, PyObject *arg);
        static PyObject *t_TimeSpanParametricAcceleration_getAccelerationModelSpan(t_TimeSpanParametricAcceleration *self, PyObject *arg);
        static PyObject *t_TimeSpanParametricAcceleration_getEventDetectors(t_TimeSpanParametricAcceleration *self);
        static PyObject *t_TimeSpanParametricAcceleration_getFieldEventDetectors(t_TimeSpanParametricAcceleration *self, PyObject *arg);
        static PyObject *t_TimeSpanParametricAcceleration_getFirstSpan(t_TimeSpanParametricAcceleration *self);
        static PyObject *t_TimeSpanParametricAcceleration_getParametersDrivers(t_TimeSpanParametricAcceleration *self);
        static PyObject *t_TimeSpanParametricAcceleration_init(t_TimeSpanParametricAcceleration *self, PyObject *args);
        static PyObject *t_TimeSpanParametricAcceleration_get__eventDetectors(t_TimeSpanParametricAcceleration *self, void *data);
        static PyObject *t_TimeSpanParametricAcceleration_get__firstSpan(t_TimeSpanParametricAcceleration *self, void *data);
        static PyObject *t_TimeSpanParametricAcceleration_get__parametersDrivers(t_TimeSpanParametricAcceleration *self, void *data);
        static PyGetSetDef t_TimeSpanParametricAcceleration__fields_[] = {
          DECLARE_GET_FIELD(t_TimeSpanParametricAcceleration, eventDetectors),
          DECLARE_GET_FIELD(t_TimeSpanParametricAcceleration, firstSpan),
          DECLARE_GET_FIELD(t_TimeSpanParametricAcceleration, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TimeSpanParametricAcceleration__methods_[] = {
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, addAccelerationModelValidAfter, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, addAccelerationModelValidBefore, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, extractAccelerationModelRange, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, extractParameters, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, getAccelerationModel, METH_O),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, getAccelerationModelSpan, METH_O),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, getFirstSpan, METH_NOARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TimeSpanParametricAcceleration)[] = {
          { Py_tp_methods, t_TimeSpanParametricAcceleration__methods_ },
          { Py_tp_init, (void *) t_TimeSpanParametricAcceleration_init_ },
          { Py_tp_getset, t_TimeSpanParametricAcceleration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TimeSpanParametricAcceleration)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TimeSpanParametricAcceleration, t_TimeSpanParametricAcceleration, TimeSpanParametricAcceleration);

        void t_TimeSpanParametricAcceleration::install(PyObject *module)
        {
          installType(&PY_TYPE(TimeSpanParametricAcceleration), &PY_TYPE_DEF(TimeSpanParametricAcceleration), module, "TimeSpanParametricAcceleration", 0);
        }

        void t_TimeSpanParametricAcceleration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanParametricAcceleration), "class_", make_descriptor(TimeSpanParametricAcceleration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanParametricAcceleration), "wrapfn_", make_descriptor(t_TimeSpanParametricAcceleration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanParametricAcceleration), "boxfn_", make_descriptor(boxObject));
          env->getClass(TimeSpanParametricAcceleration::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanParametricAcceleration), "DATE_AFTER", make_descriptor(j2p(*TimeSpanParametricAcceleration::DATE_AFTER)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanParametricAcceleration), "DATE_BEFORE", make_descriptor(j2p(*TimeSpanParametricAcceleration::DATE_BEFORE)));
        }

        static PyObject *t_TimeSpanParametricAcceleration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TimeSpanParametricAcceleration::initializeClass, 1)))
            return NULL;
          return t_TimeSpanParametricAcceleration::wrap_Object(TimeSpanParametricAcceleration(((t_TimeSpanParametricAcceleration *) arg)->object.this$));
        }
        static PyObject *t_TimeSpanParametricAcceleration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TimeSpanParametricAcceleration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TimeSpanParametricAcceleration_init_(t_TimeSpanParametricAcceleration *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              jboolean a1;
              ::org::orekit::forces::empirical::AccelerationModel a2((jobject) NULL);
              TimeSpanParametricAcceleration object((jobject) NULL);

              if (!parseArgs(args, "kZk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::empirical::AccelerationModel::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = TimeSpanParametricAcceleration(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::orekit::forces::empirical::AccelerationModel a2((jobject) NULL);
              TimeSpanParametricAcceleration object((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::empirical::AccelerationModel::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = TimeSpanParametricAcceleration(a0, a1, a2));
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

        static PyObject *t_TimeSpanParametricAcceleration_acceleration(t_TimeSpanParametricAcceleration *self, PyObject *args)
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

        static PyObject *t_TimeSpanParametricAcceleration_addAccelerationModelValidAfter(t_TimeSpanParametricAcceleration *self, PyObject *args)
        {
          ::org::orekit::forces::empirical::AccelerationModel a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::forces::empirical::AccelerationModel::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addAccelerationModelValidAfter(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAccelerationModelValidAfter", args);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_addAccelerationModelValidBefore(t_TimeSpanParametricAcceleration *self, PyObject *args)
        {
          ::org::orekit::forces::empirical::AccelerationModel a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::forces::empirical::AccelerationModel::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addAccelerationModelValidBefore(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAccelerationModelValidBefore", args);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_dependsOnPositionOnly(t_TimeSpanParametricAcceleration *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_TimeSpanParametricAcceleration_extractAccelerationModelRange(t_TimeSpanParametricAcceleration *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::TimeSpanMap result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.extractAccelerationModelRange(a0, a1));
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::org::orekit::forces::empirical::PY_TYPE(AccelerationModel));
          }

          PyErr_SetArgsError((PyObject *) self, "extractAccelerationModelRange", args);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_extractParameters(t_TimeSpanParametricAcceleration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.extractParameters(a0, a1));
                return result.wrap();
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.extractParameters(a0, a1));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "extractParameters", args);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_getAccelerationModel(t_TimeSpanParametricAcceleration *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::forces::empirical::AccelerationModel result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getAccelerationModel(a0));
            return ::org::orekit::forces::empirical::t_AccelerationModel::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getAccelerationModel", arg);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_getAccelerationModelSpan(t_TimeSpanParametricAcceleration *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getAccelerationModelSpan(a0));
            return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, ::org::orekit::forces::empirical::PY_TYPE(AccelerationModel));
          }

          PyErr_SetArgsError((PyObject *) self, "getAccelerationModelSpan", arg);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_getEventDetectors(t_TimeSpanParametricAcceleration *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_TimeSpanParametricAcceleration_getFieldEventDetectors(t_TimeSpanParametricAcceleration *self, PyObject *arg)
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

        static PyObject *t_TimeSpanParametricAcceleration_getFirstSpan(t_TimeSpanParametricAcceleration *self)
        {
          ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
          OBJ_CALL(result = self->object.getFirstSpan());
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, ::org::orekit::forces::empirical::PY_TYPE(AccelerationModel));
        }

        static PyObject *t_TimeSpanParametricAcceleration_getParametersDrivers(t_TimeSpanParametricAcceleration *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_TimeSpanParametricAcceleration_init(t_TimeSpanParametricAcceleration *self, PyObject *args)
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

        static PyObject *t_TimeSpanParametricAcceleration_get__eventDetectors(t_TimeSpanParametricAcceleration *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_TimeSpanParametricAcceleration_get__firstSpan(t_TimeSpanParametricAcceleration *self, void *data)
        {
          ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
          OBJ_CALL(value = self->object.getFirstSpan());
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
        }

        static PyObject *t_TimeSpanParametricAcceleration_get__parametersDrivers(t_TimeSpanParametricAcceleration *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresFactory.h"
#include "org/hipparchus/optim/PointVectorValuePair.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/hipparchus/analysis/MultivariateMatrixFunction.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresFactory::class$ = NULL;
            jmethodID *LeastSquaresFactory::mids$ = NULL;
            bool LeastSquaresFactory::live$ = false;

            jclass LeastSquaresFactory::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresFactory");

                mids$ = new jmethodID[max_mid];
                mids$[mid_countEvaluations_186fa1bc193d77f6] = env->getStaticMethodID(cls, "countEvaluations", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;Lorg/hipparchus/util/Incrementor;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_create_1119b2bd6b827dcd] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/optim/ConvergenceChecker;II)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_create_8a37c42f4f10b498] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/optim/ConvergenceChecker;II)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_create_1f611c9d57ffe81d] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;Lorg/hipparchus/analysis/MultivariateMatrixFunction;[D[DLorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/optim/ConvergenceChecker;II)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_create_5217d2d0d728c25d] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/optim/ConvergenceChecker;IIZLorg/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_evaluationChecker_17462b30e1059916] = env->getStaticMethodID(cls, "evaluationChecker", "(Lorg/hipparchus/optim/ConvergenceChecker;)Lorg/hipparchus/optim/ConvergenceChecker;");
                mids$[mid_model_cf0b4a54d3c72188] = env->getStaticMethodID(cls, "model", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;Lorg/hipparchus/analysis/MultivariateMatrixFunction;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");
                mids$[mid_weightDiagonal_e63f7dff9daf56ba] = env->getStaticMethodID(cls, "weightDiagonal", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_weightMatrix_e868c777d4558256] = env->getStaticMethodID(cls, "weightMatrix", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::countEvaluations(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0, const ::org::hipparchus::util::Incrementor & a1)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_countEvaluations_186fa1bc193d77f6], a0.this$, a1.this$));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::create(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::optim::ConvergenceChecker & a3, jint a4, jint a5)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_create_1119b2bd6b827dcd], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::create(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3, const ::org::hipparchus::optim::ConvergenceChecker & a4, jint a5, jint a6)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_create_8a37c42f4f10b498], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::create(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const ::org::hipparchus::analysis::MultivariateMatrixFunction & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3, const ::org::hipparchus::linear::RealMatrix & a4, const ::org::hipparchus::optim::ConvergenceChecker & a5, jint a6, jint a7)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_create_1f611c9d57ffe81d], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6, a7));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::create(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3, const ::org::hipparchus::optim::ConvergenceChecker & a4, jint a5, jint a6, jboolean a7, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator & a8)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_create_5217d2d0d728c25d], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6, a7, a8.this$));
            }

            ::org::hipparchus::optim::ConvergenceChecker LeastSquaresFactory::evaluationChecker(const ::org::hipparchus::optim::ConvergenceChecker & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::ConvergenceChecker(env->callStaticObjectMethod(cls, mids$[mid_evaluationChecker_17462b30e1059916], a0.this$));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction LeastSquaresFactory::model(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const ::org::hipparchus::analysis::MultivariateMatrixFunction & a1)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction(env->callStaticObjectMethod(cls, mids$[mid_model_cf0b4a54d3c72188], a0.this$, a1.this$));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::weightDiagonal(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0, const ::org::hipparchus::linear::RealVector & a1)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_weightDiagonal_e63f7dff9daf56ba], a0.this$, a1.this$));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::weightMatrix(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0, const ::org::hipparchus::linear::RealMatrix & a1)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_weightMatrix_e868c777d4558256], a0.this$, a1.this$));
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
            static PyObject *t_LeastSquaresFactory_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresFactory_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresFactory_countEvaluations(PyTypeObject *type, PyObject *args);
            static PyObject *t_LeastSquaresFactory_create(PyTypeObject *type, PyObject *args);
            static PyObject *t_LeastSquaresFactory_evaluationChecker(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresFactory_model(PyTypeObject *type, PyObject *args);
            static PyObject *t_LeastSquaresFactory_weightDiagonal(PyTypeObject *type, PyObject *args);
            static PyObject *t_LeastSquaresFactory_weightMatrix(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_LeastSquaresFactory__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresFactory, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, countEvaluations, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, create, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, evaluationChecker, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, model, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, weightDiagonal, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, weightMatrix, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresFactory)[] = {
              { Py_tp_methods, t_LeastSquaresFactory__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresFactory)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresFactory, t_LeastSquaresFactory, LeastSquaresFactory);

            void t_LeastSquaresFactory::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresFactory), &PY_TYPE_DEF(LeastSquaresFactory), module, "LeastSquaresFactory", 0);
            }

            void t_LeastSquaresFactory::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresFactory), "class_", make_descriptor(LeastSquaresFactory::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresFactory), "wrapfn_", make_descriptor(t_LeastSquaresFactory::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresFactory), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresFactory_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresFactory::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresFactory::wrap_Object(LeastSquaresFactory(((t_LeastSquaresFactory *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresFactory_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresFactory::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LeastSquaresFactory_countEvaluations(PyTypeObject *type, PyObject *args)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::util::Incrementor a1((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, ::org::hipparchus::util::Incrementor::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::countEvaluations(a0, a1));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "countEvaluations", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresFactory_create(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 6:
                {
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction a0((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a1((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a2((jobject) NULL);
                  ::org::hipparchus::optim::ConvergenceChecker a3((jobject) NULL);
                  PyTypeObject **p3;
                  jint a4;
                  jint a5;
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

                  if (!parseArgs(args, "kkkKII", ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a4, &a5))
                  {
                    OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::create(a0, a1, a2, a3, a4, a5));
                    return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
                  }
                }
                break;
               case 7:
                {
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction a0((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a1((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a2((jobject) NULL);
                  ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
                  ::org::hipparchus::optim::ConvergenceChecker a4((jobject) NULL);
                  PyTypeObject **p4;
                  jint a5;
                  jint a6;
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

                  if (!parseArgs(args, "kkkkKII", ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a5, &a6))
                  {
                    OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::create(a0, a1, a2, a3, a4, a5, a6));
                    return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
                  }
                }
                break;
               case 8:
                {
                  ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
                  ::org::hipparchus::analysis::MultivariateMatrixFunction a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > a3((jobject) NULL);
                  ::org::hipparchus::linear::RealMatrix a4((jobject) NULL);
                  ::org::hipparchus::optim::ConvergenceChecker a5((jobject) NULL);
                  PyTypeObject **p5;
                  jint a6;
                  jint a7;
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

                  if (!parseArgs(args, "kk[D[DkKII", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, ::org::hipparchus::analysis::MultivariateMatrixFunction::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a6, &a7))
                  {
                    OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::create(a0, a1, a2, a3, a4, a5, a6, a7));
                    return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
                  }
                }
                break;
               case 9:
                {
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction a0((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a1((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a2((jobject) NULL);
                  ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
                  ::org::hipparchus::optim::ConvergenceChecker a4((jobject) NULL);
                  PyTypeObject **p4;
                  jint a5;
                  jint a6;
                  jboolean a7;
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator a8((jobject) NULL);
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

                  if (!parseArgs(args, "kkkkKIIZk", ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a5, &a6, &a7, &a8))
                  {
                    OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::create(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                    return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError(type, "create", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresFactory_evaluationChecker(PyTypeObject *type, PyObject *arg)
            {
              ::org::hipparchus::optim::ConvergenceChecker a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::optim::ConvergenceChecker result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::evaluationChecker(a0));
                return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(result, ::org::hipparchus::optim::nonlinear::vector::leastsquares::PY_TYPE(LeastSquaresProblem$Evaluation));
              }

              PyErr_SetArgsError(type, "evaluationChecker", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresFactory_model(PyTypeObject *type, PyObject *args)
            {
              ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
              ::org::hipparchus::analysis::MultivariateMatrixFunction a1((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, ::org::hipparchus::analysis::MultivariateMatrixFunction::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::model(a0, a1));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_MultivariateJacobianFunction::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "model", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresFactory_weightDiagonal(PyTypeObject *type, PyObject *args)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::linear::RealVector a1((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::weightDiagonal(a0, a1));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "weightDiagonal", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresFactory_weightMatrix(PyTypeObject *type, PyObject *args)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::weightMatrix(a0, a1));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "weightMatrix", args);
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
#include "org/hipparchus/analysis/differentiation/DSCompiler.h"
#include "org/hipparchus/analysis/differentiation/DSCompiler.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *DSCompiler::class$ = NULL;
        jmethodID *DSCompiler::mids$ = NULL;
        bool DSCompiler::live$ = false;

        jclass DSCompiler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/DSCompiler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_acos_1c1f3189fcfc20e0] = env->getMethodID(cls, "acos", "([DI[DI)V");
            mids$[mid_acos_e49c38112e0e76c3] = env->getMethodID(cls, "acos", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_acosh_1c1f3189fcfc20e0] = env->getMethodID(cls, "acosh", "([DI[DI)V");
            mids$[mid_acosh_e49c38112e0e76c3] = env->getMethodID(cls, "acosh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_add_75587618ec7584f4] = env->getMethodID(cls, "add", "([DI[DI[DI)V");
            mids$[mid_add_baf86bf3f75c157f] = env->getMethodID(cls, "add", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_asin_1c1f3189fcfc20e0] = env->getMethodID(cls, "asin", "([DI[DI)V");
            mids$[mid_asin_e49c38112e0e76c3] = env->getMethodID(cls, "asin", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_asinh_1c1f3189fcfc20e0] = env->getMethodID(cls, "asinh", "([DI[DI)V");
            mids$[mid_asinh_e49c38112e0e76c3] = env->getMethodID(cls, "asinh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_atan_1c1f3189fcfc20e0] = env->getMethodID(cls, "atan", "([DI[DI)V");
            mids$[mid_atan_e49c38112e0e76c3] = env->getMethodID(cls, "atan", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_atan2_75587618ec7584f4] = env->getMethodID(cls, "atan2", "([DI[DI[DI)V");
            mids$[mid_atan2_baf86bf3f75c157f] = env->getMethodID(cls, "atan2", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_atanh_1c1f3189fcfc20e0] = env->getMethodID(cls, "atanh", "([DI[DI)V");
            mids$[mid_atanh_e49c38112e0e76c3] = env->getMethodID(cls, "atanh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_checkCompatibility_31543c7dfd01f8b0] = env->getMethodID(cls, "checkCompatibility", "(Lorg/hipparchus/analysis/differentiation/DSCompiler;)V");
            mids$[mid_compose_48f17ab706450c14] = env->getMethodID(cls, "compose", "([DI[D[DI)V");
            mids$[mid_compose_2fd24ab0927877dd] = env->getMethodID(cls, "compose", "([Lorg/hipparchus/CalculusFieldElement;I[D[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_compose_2af35987eb3a124f] = env->getMethodID(cls, "compose", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_cos_1c1f3189fcfc20e0] = env->getMethodID(cls, "cos", "([DI[DI)V");
            mids$[mid_cos_e49c38112e0e76c3] = env->getMethodID(cls, "cos", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_cosh_1c1f3189fcfc20e0] = env->getMethodID(cls, "cosh", "([DI[DI)V");
            mids$[mid_cosh_e49c38112e0e76c3] = env->getMethodID(cls, "cosh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_divide_75587618ec7584f4] = env->getMethodID(cls, "divide", "([DI[DI[DI)V");
            mids$[mid_divide_baf86bf3f75c157f] = env->getMethodID(cls, "divide", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_exp_1c1f3189fcfc20e0] = env->getMethodID(cls, "exp", "([DI[DI)V");
            mids$[mid_exp_e49c38112e0e76c3] = env->getMethodID(cls, "exp", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_expm1_1c1f3189fcfc20e0] = env->getMethodID(cls, "expm1", "([DI[DI)V");
            mids$[mid_expm1_e49c38112e0e76c3] = env->getMethodID(cls, "expm1", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_getCompiler_1c6990d1143f2bfa] = env->getStaticMethodID(cls, "getCompiler", "(II)Lorg/hipparchus/analysis/differentiation/DSCompiler;");
            mids$[mid_getFreeParameters_412668abc8d889e9] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getOrder_412668abc8d889e9] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivativeIndex_a15ca216c6412600] = env->getMethodID(cls, "getPartialDerivativeIndex", "([I)I");
            mids$[mid_getPartialDerivativeOrders_014107aa2fd99303] = env->getMethodID(cls, "getPartialDerivativeOrders", "(I)[I");
            mids$[mid_getPartialDerivativeOrdersSum_0092017e99012694] = env->getMethodID(cls, "getPartialDerivativeOrdersSum", "(I)I");
            mids$[mid_getSize_412668abc8d889e9] = env->getMethodID(cls, "getSize", "()I");
            mids$[mid_linearCombination_a010397b8c8ddd12] = env->getMethodID(cls, "linearCombination", "(D[DID[DI[DI)V");
            mids$[mid_linearCombination_b58a6b2ac6694134] = env->getMethodID(cls, "linearCombination", "(D[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_linearCombination_9c02d9e192251577] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_linearCombination_5a58011bde093b17] = env->getMethodID(cls, "linearCombination", "(D[DID[DID[DI[DI)V");
            mids$[mid_linearCombination_ef83a7b16654f97d] = env->getMethodID(cls, "linearCombination", "(D[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_linearCombination_715e4de9dd772ff8] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_linearCombination_29e0d3f2fb9a0b22] = env->getMethodID(cls, "linearCombination", "(D[DID[DID[DID[DI[DI)V");
            mids$[mid_linearCombination_a23caf9dddbae052] = env->getMethodID(cls, "linearCombination", "(D[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_linearCombination_4672370016b14951] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_log_1c1f3189fcfc20e0] = env->getMethodID(cls, "log", "([DI[DI)V");
            mids$[mid_log_e49c38112e0e76c3] = env->getMethodID(cls, "log", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_log10_1c1f3189fcfc20e0] = env->getMethodID(cls, "log10", "([DI[DI)V");
            mids$[mid_log10_e49c38112e0e76c3] = env->getMethodID(cls, "log10", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_log1p_1c1f3189fcfc20e0] = env->getMethodID(cls, "log1p", "([DI[DI)V");
            mids$[mid_log1p_e49c38112e0e76c3] = env->getMethodID(cls, "log1p", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_multiply_75587618ec7584f4] = env->getMethodID(cls, "multiply", "([DI[DI[DI)V");
            mids$[mid_multiply_baf86bf3f75c157f] = env->getMethodID(cls, "multiply", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_pow_53a9a44f8574f356] = env->getMethodID(cls, "pow", "(D[DI[DI)V");
            mids$[mid_pow_54036f87a261541e] = env->getMethodID(cls, "pow", "(D[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_pow_cbb76825a8d4beaf] = env->getMethodID(cls, "pow", "([DID[DI)V");
            mids$[mid_pow_42c221f4031e843c] = env->getMethodID(cls, "pow", "([DII[DI)V");
            mids$[mid_pow_6b3897608c1b0daf] = env->getMethodID(cls, "pow", "([Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_pow_fa2f79333975bc6a] = env->getMethodID(cls, "pow", "([Lorg/hipparchus/CalculusFieldElement;II[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_pow_75587618ec7584f4] = env->getMethodID(cls, "pow", "([DI[DI[DI)V");
            mids$[mid_pow_baf86bf3f75c157f] = env->getMethodID(cls, "pow", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_rebase_935ea0746c2c254c] = env->getMethodID(cls, "rebase", "([DILorg/hipparchus/analysis/differentiation/DSCompiler;[D[DI)V");
            mids$[mid_rebase_97f72aa4cbf1d782] = env->getMethodID(cls, "rebase", "([Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/analysis/differentiation/DSCompiler;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_reciprocal_1c1f3189fcfc20e0] = env->getMethodID(cls, "reciprocal", "([DI[DI)V");
            mids$[mid_reciprocal_e49c38112e0e76c3] = env->getMethodID(cls, "reciprocal", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_remainder_75587618ec7584f4] = env->getMethodID(cls, "remainder", "([DI[DI[DI)V");
            mids$[mid_remainder_baf86bf3f75c157f] = env->getMethodID(cls, "remainder", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_rootN_42c221f4031e843c] = env->getMethodID(cls, "rootN", "([DII[DI)V");
            mids$[mid_rootN_fa2f79333975bc6a] = env->getMethodID(cls, "rootN", "([Lorg/hipparchus/CalculusFieldElement;II[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_sin_1c1f3189fcfc20e0] = env->getMethodID(cls, "sin", "([DI[DI)V");
            mids$[mid_sin_e49c38112e0e76c3] = env->getMethodID(cls, "sin", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_sinCos_75587618ec7584f4] = env->getMethodID(cls, "sinCos", "([DI[DI[DI)V");
            mids$[mid_sinCos_baf86bf3f75c157f] = env->getMethodID(cls, "sinCos", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_sinh_1c1f3189fcfc20e0] = env->getMethodID(cls, "sinh", "([DI[DI)V");
            mids$[mid_sinh_e49c38112e0e76c3] = env->getMethodID(cls, "sinh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_sinhCosh_75587618ec7584f4] = env->getMethodID(cls, "sinhCosh", "([DI[DI[DI)V");
            mids$[mid_sinhCosh_baf86bf3f75c157f] = env->getMethodID(cls, "sinhCosh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_sqrt_1c1f3189fcfc20e0] = env->getMethodID(cls, "sqrt", "([DI[DI)V");
            mids$[mid_sqrt_e49c38112e0e76c3] = env->getMethodID(cls, "sqrt", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_subtract_75587618ec7584f4] = env->getMethodID(cls, "subtract", "([DI[DI[DI)V");
            mids$[mid_subtract_baf86bf3f75c157f] = env->getMethodID(cls, "subtract", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_tan_1c1f3189fcfc20e0] = env->getMethodID(cls, "tan", "([DI[DI)V");
            mids$[mid_tan_e49c38112e0e76c3] = env->getMethodID(cls, "tan", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_tanh_1c1f3189fcfc20e0] = env->getMethodID(cls, "tanh", "([DI[DI)V");
            mids$[mid_tanh_e49c38112e0e76c3] = env->getMethodID(cls, "tanh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_taylor_dc49a22e98ba79cd] = env->getMethodID(cls, "taylor", "([DI[D)D");
            mids$[mid_taylor_a5abf7d562a4421a] = env->getMethodID(cls, "taylor", "([Lorg/hipparchus/CalculusFieldElement;I[D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_taylor_efd8426c8b86fa55] = env->getMethodID(cls, "taylor", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void DSCompiler::acos(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_acos_1c1f3189fcfc20e0], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::acos(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_acos_e49c38112e0e76c3], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::acosh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_acosh_1c1f3189fcfc20e0], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::acosh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_acosh_e49c38112e0e76c3], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::add(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_add_75587618ec7584f4], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::add(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_add_baf86bf3f75c157f], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::asin(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_asin_1c1f3189fcfc20e0], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::asin(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_asin_e49c38112e0e76c3], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::asinh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_asinh_1c1f3189fcfc20e0], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::asinh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_asinh_e49c38112e0e76c3], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::atan(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_atan_1c1f3189fcfc20e0], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::atan(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_atan_e49c38112e0e76c3], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::atan2(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_atan2_75587618ec7584f4], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::atan2(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_atan2_baf86bf3f75c157f], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::atanh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_atanh_1c1f3189fcfc20e0], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::atanh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_atanh_e49c38112e0e76c3], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::checkCompatibility(const DSCompiler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_checkCompatibility_31543c7dfd01f8b0], a0.this$);
        }

        void DSCompiler::compose(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_compose_48f17ab706450c14], a0.this$, a1, a2.this$, a3.this$, a4);
        }

        void DSCompiler::compose(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< jdouble > & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_compose_2fd24ab0927877dd], a0.this$, a1, a2.this$, a3.this$, a4);
        }

        void DSCompiler::compose(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_compose_2af35987eb3a124f], a0.this$, a1, a2.this$, a3.this$, a4);
        }

        void DSCompiler::cos(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_cos_1c1f3189fcfc20e0], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::cos(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_cos_e49c38112e0e76c3], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::cosh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_cosh_1c1f3189fcfc20e0], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::cosh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_cosh_e49c38112e0e76c3], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::divide(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_divide_75587618ec7584f4], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::divide(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_divide_baf86bf3f75c157f], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::exp(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_exp_1c1f3189fcfc20e0], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::exp(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_exp_e49c38112e0e76c3], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::expm1(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_expm1_1c1f3189fcfc20e0], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::expm1(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_expm1_e49c38112e0e76c3], a0.this$, a1, a2.this$, a3);
        }

        DSCompiler DSCompiler::getCompiler(jint a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return DSCompiler(env->callStaticObjectMethod(cls, mids$[mid_getCompiler_1c6990d1143f2bfa], a0, a1));
        }

        jint DSCompiler::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_412668abc8d889e9]);
        }

        jint DSCompiler::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_412668abc8d889e9]);
        }

        jint DSCompiler::getPartialDerivativeIndex(const JArray< jint > & a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getPartialDerivativeIndex_a15ca216c6412600], a0.this$);
        }

        JArray< jint > DSCompiler::getPartialDerivativeOrders(jint a0) const
        {
          return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPartialDerivativeOrders_014107aa2fd99303], a0));
        }

        jint DSCompiler::getPartialDerivativeOrdersSum(jint a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getPartialDerivativeOrdersSum_0092017e99012694], a0);
        }

        jint DSCompiler::getSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getSize_412668abc8d889e9]);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< jdouble > & a1, jint a2, jdouble a3, const JArray< jdouble > & a4, jint a5, const JArray< jdouble > & a6, jint a7) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_a010397b8c8ddd12], a0, a1.this$, a2, a3, a4.this$, a5, a6.this$, a7);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, jdouble a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, const JArray< ::org::hipparchus::CalculusFieldElement > & a6, jint a7) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_b58a6b2ac6694134], a0, a1.this$, a2, a3, a4.this$, a5, a6.this$, a7);
        }

        void DSCompiler::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, const ::org::hipparchus::CalculusFieldElement & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, const JArray< ::org::hipparchus::CalculusFieldElement > & a6, jint a7) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_9c02d9e192251577], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$, a7);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< jdouble > & a1, jint a2, jdouble a3, const JArray< jdouble > & a4, jint a5, jdouble a6, const JArray< jdouble > & a7, jint a8, const JArray< jdouble > & a9, jint a10) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_5a58011bde093b17], a0, a1.this$, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9.this$, a10);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, jdouble a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, jdouble a6, const JArray< ::org::hipparchus::CalculusFieldElement > & a7, jint a8, const JArray< ::org::hipparchus::CalculusFieldElement > & a9, jint a10) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_ef83a7b16654f97d], a0, a1.this$, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9.this$, a10);
        }

        void DSCompiler::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, const ::org::hipparchus::CalculusFieldElement & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, const ::org::hipparchus::CalculusFieldElement & a6, const JArray< ::org::hipparchus::CalculusFieldElement > & a7, jint a8, const JArray< ::org::hipparchus::CalculusFieldElement > & a9, jint a10) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_715e4de9dd772ff8], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$, a7.this$, a8, a9.this$, a10);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< jdouble > & a1, jint a2, jdouble a3, const JArray< jdouble > & a4, jint a5, jdouble a6, const JArray< jdouble > & a7, jint a8, jdouble a9, const JArray< jdouble > & a10, jint a11, const JArray< jdouble > & a12, jint a13) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_29e0d3f2fb9a0b22], a0, a1.this$, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9, a10.this$, a11, a12.this$, a13);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, jdouble a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, jdouble a6, const JArray< ::org::hipparchus::CalculusFieldElement > & a7, jint a8, jdouble a9, const JArray< ::org::hipparchus::CalculusFieldElement > & a10, jint a11, const JArray< ::org::hipparchus::CalculusFieldElement > & a12, jint a13) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_a23caf9dddbae052], a0, a1.this$, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9, a10.this$, a11, a12.this$, a13);
        }

        void DSCompiler::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, const ::org::hipparchus::CalculusFieldElement & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, const ::org::hipparchus::CalculusFieldElement & a6, const JArray< ::org::hipparchus::CalculusFieldElement > & a7, jint a8, const ::org::hipparchus::CalculusFieldElement & a9, const JArray< ::org::hipparchus::CalculusFieldElement > & a10, jint a11, const JArray< ::org::hipparchus::CalculusFieldElement > & a12, jint a13) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_4672370016b14951], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$, a7.this$, a8, a9.this$, a10.this$, a11, a12.this$, a13);
        }

        void DSCompiler::log(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log_1c1f3189fcfc20e0], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::log(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log_e49c38112e0e76c3], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::log10(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log10_1c1f3189fcfc20e0], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::log10(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log10_e49c38112e0e76c3], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::log1p(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log1p_1c1f3189fcfc20e0], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::log1p(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log1p_e49c38112e0e76c3], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::multiply(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_multiply_75587618ec7584f4], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::multiply(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_multiply_baf86bf3f75c157f], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::pow(jdouble a0, const JArray< jdouble > & a1, jint a2, const JArray< jdouble > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_53a9a44f8574f356], a0, a1.this$, a2, a3.this$, a4);
        }

        void DSCompiler::pow(jdouble a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_54036f87a261541e], a0, a1.this$, a2, a3.this$, a4);
        }

        void DSCompiler::pow(const JArray< jdouble > & a0, jint a1, jdouble a2, const JArray< jdouble > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_cbb76825a8d4beaf], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::pow(const JArray< jdouble > & a0, jint a1, jint a2, const JArray< jdouble > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_42c221f4031e843c], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::pow(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_6b3897608c1b0daf], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::pow(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, jint a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_fa2f79333975bc6a], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::pow(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_75587618ec7584f4], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::pow(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_baf86bf3f75c157f], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::rebase(const JArray< jdouble > & a0, jint a1, const DSCompiler & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_rebase_935ea0746c2c254c], a0.this$, a1, a2.this$, a3.this$, a4.this$, a5);
        }

        void DSCompiler::rebase(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const DSCompiler & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_rebase_97f72aa4cbf1d782], a0.this$, a1, a2.this$, a3.this$, a4.this$, a5);
        }

        void DSCompiler::reciprocal(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_reciprocal_1c1f3189fcfc20e0], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::reciprocal(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_reciprocal_e49c38112e0e76c3], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::remainder(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_remainder_75587618ec7584f4], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::remainder(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_remainder_baf86bf3f75c157f], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::rootN(const JArray< jdouble > & a0, jint a1, jint a2, const JArray< jdouble > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_rootN_42c221f4031e843c], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::rootN(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, jint a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_rootN_fa2f79333975bc6a], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::sin(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sin_1c1f3189fcfc20e0], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::sin(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sin_e49c38112e0e76c3], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::sinCos(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_sinCos_75587618ec7584f4], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::sinCos(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_sinCos_baf86bf3f75c157f], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::sinh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sinh_1c1f3189fcfc20e0], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::sinh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sinh_e49c38112e0e76c3], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::sinhCosh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_sinhCosh_75587618ec7584f4], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::sinhCosh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_sinhCosh_baf86bf3f75c157f], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::sqrt(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sqrt_1c1f3189fcfc20e0], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::sqrt(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sqrt_e49c38112e0e76c3], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::subtract(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_subtract_75587618ec7584f4], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::subtract(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_subtract_baf86bf3f75c157f], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::tan(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_tan_1c1f3189fcfc20e0], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::tan(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_tan_e49c38112e0e76c3], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::tanh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_tanh_1c1f3189fcfc20e0], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::tanh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_tanh_e49c38112e0e76c3], a0.this$, a1, a2.this$, a3);
        }

        jdouble DSCompiler::taylor(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_dc49a22e98ba79cd], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::CalculusFieldElement DSCompiler::taylor(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< jdouble > & a2) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_a5abf7d562a4421a], a0.this$, a1, a2.this$));
        }

        ::org::hipparchus::CalculusFieldElement DSCompiler::taylor(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_efd8426c8b86fa55], a0.this$, a1, a2.this$));
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
        static PyObject *t_DSCompiler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSCompiler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSCompiler_acos(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_acosh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_add(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_asin(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_asinh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_atan(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_atan2(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_atanh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_checkCompatibility(t_DSCompiler *self, PyObject *arg);
        static PyObject *t_DSCompiler_compose(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_cos(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_cosh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_divide(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_exp(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_expm1(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_getCompiler(PyTypeObject *type, PyObject *args);
        static PyObject *t_DSCompiler_getFreeParameters(t_DSCompiler *self);
        static PyObject *t_DSCompiler_getOrder(t_DSCompiler *self);
        static PyObject *t_DSCompiler_getPartialDerivativeIndex(t_DSCompiler *self, PyObject *arg);
        static PyObject *t_DSCompiler_getPartialDerivativeOrders(t_DSCompiler *self, PyObject *arg);
        static PyObject *t_DSCompiler_getPartialDerivativeOrdersSum(t_DSCompiler *self, PyObject *arg);
        static PyObject *t_DSCompiler_getSize(t_DSCompiler *self);
        static PyObject *t_DSCompiler_linearCombination(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_log(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_log10(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_log1p(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_multiply(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_pow(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_rebase(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_reciprocal(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_remainder(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_rootN(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_sin(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_sinCos(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_sinh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_sinhCosh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_sqrt(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_subtract(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_tan(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_tanh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_taylor(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_get__freeParameters(t_DSCompiler *self, void *data);
        static PyObject *t_DSCompiler_get__order(t_DSCompiler *self, void *data);
        static PyObject *t_DSCompiler_get__size(t_DSCompiler *self, void *data);
        static PyGetSetDef t_DSCompiler__fields_[] = {
          DECLARE_GET_FIELD(t_DSCompiler, freeParameters),
          DECLARE_GET_FIELD(t_DSCompiler, order),
          DECLARE_GET_FIELD(t_DSCompiler, size),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DSCompiler__methods_[] = {
          DECLARE_METHOD(t_DSCompiler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSCompiler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSCompiler, acos, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, acosh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, add, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, asin, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, asinh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, atan, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, atan2, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, atanh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, checkCompatibility, METH_O),
          DECLARE_METHOD(t_DSCompiler, compose, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, cos, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, cosh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, divide, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, exp, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, expm1, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, getCompiler, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DSCompiler, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_DSCompiler, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_DSCompiler, getPartialDerivativeIndex, METH_O),
          DECLARE_METHOD(t_DSCompiler, getPartialDerivativeOrders, METH_O),
          DECLARE_METHOD(t_DSCompiler, getPartialDerivativeOrdersSum, METH_O),
          DECLARE_METHOD(t_DSCompiler, getSize, METH_NOARGS),
          DECLARE_METHOD(t_DSCompiler, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, log, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, log10, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, log1p, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, multiply, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, pow, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, rebase, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, reciprocal, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, remainder, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, rootN, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, sin, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, sinCos, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, sinh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, sinhCosh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, sqrt, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, subtract, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, tan, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, tanh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, taylor, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSCompiler)[] = {
          { Py_tp_methods, t_DSCompiler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DSCompiler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSCompiler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DSCompiler, t_DSCompiler, DSCompiler);

        void t_DSCompiler::install(PyObject *module)
        {
          installType(&PY_TYPE(DSCompiler), &PY_TYPE_DEF(DSCompiler), module, "DSCompiler", 0);
        }

        void t_DSCompiler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSCompiler), "class_", make_descriptor(DSCompiler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSCompiler), "wrapfn_", make_descriptor(t_DSCompiler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSCompiler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSCompiler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSCompiler::initializeClass, 1)))
            return NULL;
          return t_DSCompiler::wrap_Object(DSCompiler(((t_DSCompiler *) arg)->object.this$));
        }
        static PyObject *t_DSCompiler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSCompiler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DSCompiler_acos(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.acos(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.acos(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acos", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_acosh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.acosh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.acosh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acosh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_add(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.add(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.add(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_asin(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.asin(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.asin(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "asin", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_asinh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.asinh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.asinh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "asinh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_atan(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.atan(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.atan(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "atan", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_atan2(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.atan2(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.atan2(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_atanh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.atanh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.atanh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "atanh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_checkCompatibility(t_DSCompiler *self, PyObject *arg)
        {
          DSCompiler a0((jobject) NULL);

          if (!parseArg(arg, "k", DSCompiler::initializeClass, &a0))
          {
            OBJ_CALL(self->object.checkCompatibility(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "checkCompatibility", arg);
          return NULL;
        }

        static PyObject *t_DSCompiler_compose(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              jint a4;

              if (!parseArgs(args, "[DI[D[DI", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(self->object.compose(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "[KI[D[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.compose(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "[KI[K[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.compose(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "compose", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_cos(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.cos(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.cos(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "cos", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_cosh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.cosh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.cosh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "cosh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_divide(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.divide(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.divide(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_exp(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.exp(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.exp(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "exp", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_expm1(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.expm1(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.expm1(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "expm1", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_getCompiler(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          DSCompiler result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::DSCompiler::getCompiler(a0, a1));
            return t_DSCompiler::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getCompiler", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_getFreeParameters(t_DSCompiler *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DSCompiler_getOrder(t_DSCompiler *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DSCompiler_getPartialDerivativeIndex(t_DSCompiler *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          jint result;

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivativeIndex(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivativeIndex", arg);
          return NULL;
        }

        static PyObject *t_DSCompiler_getPartialDerivativeOrders(t_DSCompiler *self, PyObject *arg)
        {
          jint a0;
          JArray< jint > result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivativeOrders(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivativeOrders", arg);
          return NULL;
        }

        static PyObject *t_DSCompiler_getPartialDerivativeOrdersSum(t_DSCompiler *self, PyObject *arg)
        {
          jint a0;
          jint result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivativeOrdersSum(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivativeOrdersSum", arg);
          return NULL;
        }

        static PyObject *t_DSCompiler_getSize(t_DSCompiler *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DSCompiler_linearCombination(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 8:
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;
              JArray< jdouble > a6((jobject) NULL);
              jint a7;

              if (!parseArgs(args, "D[DID[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              jdouble a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              JArray< ::org::hipparchus::CalculusFieldElement > a6((jobject) NULL);
              PyTypeObject **p6;
              jint a7;

              if (!parseArgs(args, "D[KID[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              JArray< ::org::hipparchus::CalculusFieldElement > a6((jobject) NULL);
              PyTypeObject **p6;
              jint a7;

              if (!parseArgs(args, "K[KIK[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                Py_RETURN_NONE;
              }
            }
            break;
           case 11:
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;
              jdouble a6;
              JArray< jdouble > a7((jobject) NULL);
              jint a8;
              JArray< jdouble > a9((jobject) NULL);
              jint a10;

              if (!parseArgs(args, "D[DID[DID[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              jdouble a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              jdouble a6;
              JArray< ::org::hipparchus::CalculusFieldElement > a7((jobject) NULL);
              PyTypeObject **p7;
              jint a8;
              JArray< ::org::hipparchus::CalculusFieldElement > a9((jobject) NULL);
              PyTypeObject **p9;
              jint a10;

              if (!parseArgs(args, "D[KID[KID[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
              PyTypeObject **p6;
              JArray< ::org::hipparchus::CalculusFieldElement > a7((jobject) NULL);
              PyTypeObject **p7;
              jint a8;
              JArray< ::org::hipparchus::CalculusFieldElement > a9((jobject) NULL);
              PyTypeObject **p9;
              jint a10;

              if (!parseArgs(args, "K[KIK[KIK[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                Py_RETURN_NONE;
              }
            }
            break;
           case 14:
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;
              jdouble a6;
              JArray< jdouble > a7((jobject) NULL);
              jint a8;
              jdouble a9;
              JArray< jdouble > a10((jobject) NULL);
              jint a11;
              JArray< jdouble > a12((jobject) NULL);
              jint a13;

              if (!parseArgs(args, "D[DID[DID[DID[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              jdouble a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              jdouble a6;
              JArray< ::org::hipparchus::CalculusFieldElement > a7((jobject) NULL);
              PyTypeObject **p7;
              jint a8;
              jdouble a9;
              JArray< ::org::hipparchus::CalculusFieldElement > a10((jobject) NULL);
              PyTypeObject **p10;
              jint a11;
              JArray< ::org::hipparchus::CalculusFieldElement > a12((jobject) NULL);
              PyTypeObject **p12;
              jint a13;

              if (!parseArgs(args, "D[KID[KID[KID[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &a9, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
              PyTypeObject **p6;
              JArray< ::org::hipparchus::CalculusFieldElement > a7((jobject) NULL);
              PyTypeObject **p7;
              jint a8;
              ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
              PyTypeObject **p9;
              JArray< ::org::hipparchus::CalculusFieldElement > a10((jobject) NULL);
              PyTypeObject **p10;
              jint a11;
              JArray< ::org::hipparchus::CalculusFieldElement > a12((jobject) NULL);
              PyTypeObject **p12;
              jint a13;

              if (!parseArgs(args, "K[KIK[KIK[KIK[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_log(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.log(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.log(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "log", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_log10(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.log10(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.log10(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "log10", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_log1p(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.log1p(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.log1p(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "log1p", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_multiply(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.multiply(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.multiply(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_pow(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              jint a4;

              if (!parseArgs(args, "[DID[DI", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "[KID[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jint a2;
              JArray< jdouble > a3((jobject) NULL);
              jint a4;

              if (!parseArgs(args, "[DII[DI", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "[KII[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              JArray< jdouble > a3((jobject) NULL);
              jint a4;

              if (!parseArgs(args, "D[DI[DI", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "D[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            break;
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_rebase(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              DSCompiler a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DIk[D[DI", DSCompiler::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.rebase(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              DSCompiler a2((jobject) NULL);
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KIk[K[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, DSCompiler::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.rebase(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "rebase", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_reciprocal(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.reciprocal(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.reciprocal(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "reciprocal", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_remainder(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.remainder(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.remainder(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_rootN(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jint a2;
              JArray< jdouble > a3((jobject) NULL);
              jint a4;

              if (!parseArgs(args, "[DII[DI", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(self->object.rootN(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "[KII[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.rootN(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_sin(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.sin(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.sin(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sin", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_sinCos(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.sinCos(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.sinCos(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sinCos", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_sinh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.sinh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.sinh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sinh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_sinhCosh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.sinhCosh(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.sinhCosh(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sinhCosh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_sqrt(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.sqrt(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.sqrt(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sqrt", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_subtract(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.subtract(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.subtract(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_tan(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.tan(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.tan(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "tan", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_tanh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.tanh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.tanh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "tanh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_taylor(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[DI[D", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.taylor(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[KI[D", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2))
              {
                OBJ_CALL(result = self->object.taylor(a0, a1, a2));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[KI[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.taylor(a0, a1, a2));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_get__freeParameters(t_DSCompiler *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_DSCompiler_get__order(t_DSCompiler *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_DSCompiler_get__size(t_DSCompiler *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSize());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sinex/DcbSatellite.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/files/sinex/DcbDescription.h"
#include "java/lang/String.h"
#include "org/orekit/files/sinex/Dcb.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *DcbSatellite::class$ = NULL;
        jmethodID *DcbSatellite::mids$ = NULL;
        bool DcbSatellite::live$ = false;

        jclass DcbSatellite::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/DcbSatellite");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_getDcbData_aa52836425be0e57] = env->getMethodID(cls, "getDcbData", "()Lorg/orekit/files/sinex/Dcb;");
            mids$[mid_getDescription_4d0641e2232580f1] = env->getMethodID(cls, "getDescription", "()Lorg/orekit/files/sinex/DcbDescription;");
            mids$[mid_getPRN_3cffd47377eca18a] = env->getMethodID(cls, "getPRN", "()Ljava/lang/String;");
            mids$[mid_getSatelliteSytem_8b86408cc2633961] = env->getMethodID(cls, "getSatelliteSytem", "()Lorg/orekit/gnss/SatelliteSystem;");
            mids$[mid_setDescription_c4e21d1fdc63a330] = env->getMethodID(cls, "setDescription", "(Lorg/orekit/files/sinex/DcbDescription;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DcbSatellite::DcbSatellite(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

        ::org::orekit::files::sinex::Dcb DcbSatellite::getDcbData() const
        {
          return ::org::orekit::files::sinex::Dcb(env->callObjectMethod(this$, mids$[mid_getDcbData_aa52836425be0e57]));
        }

        ::org::orekit::files::sinex::DcbDescription DcbSatellite::getDescription() const
        {
          return ::org::orekit::files::sinex::DcbDescription(env->callObjectMethod(this$, mids$[mid_getDescription_4d0641e2232580f1]));
        }

        ::java::lang::String DcbSatellite::getPRN() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPRN_3cffd47377eca18a]));
        }

        ::org::orekit::gnss::SatelliteSystem DcbSatellite::getSatelliteSytem() const
        {
          return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSytem_8b86408cc2633961]));
        }

        void DcbSatellite::setDescription(const ::org::orekit::files::sinex::DcbDescription & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDescription_c4e21d1fdc63a330], a0.this$);
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
      namespace sinex {
        static PyObject *t_DcbSatellite_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DcbSatellite_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DcbSatellite_init_(t_DcbSatellite *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DcbSatellite_getDcbData(t_DcbSatellite *self);
        static PyObject *t_DcbSatellite_getDescription(t_DcbSatellite *self);
        static PyObject *t_DcbSatellite_getPRN(t_DcbSatellite *self);
        static PyObject *t_DcbSatellite_getSatelliteSytem(t_DcbSatellite *self);
        static PyObject *t_DcbSatellite_setDescription(t_DcbSatellite *self, PyObject *arg);
        static PyObject *t_DcbSatellite_get__dcbData(t_DcbSatellite *self, void *data);
        static PyObject *t_DcbSatellite_get__description(t_DcbSatellite *self, void *data);
        static int t_DcbSatellite_set__description(t_DcbSatellite *self, PyObject *arg, void *data);
        static PyObject *t_DcbSatellite_get__pRN(t_DcbSatellite *self, void *data);
        static PyObject *t_DcbSatellite_get__satelliteSytem(t_DcbSatellite *self, void *data);
        static PyGetSetDef t_DcbSatellite__fields_[] = {
          DECLARE_GET_FIELD(t_DcbSatellite, dcbData),
          DECLARE_GETSET_FIELD(t_DcbSatellite, description),
          DECLARE_GET_FIELD(t_DcbSatellite, pRN),
          DECLARE_GET_FIELD(t_DcbSatellite, satelliteSytem),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DcbSatellite__methods_[] = {
          DECLARE_METHOD(t_DcbSatellite, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbSatellite, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbSatellite, getDcbData, METH_NOARGS),
          DECLARE_METHOD(t_DcbSatellite, getDescription, METH_NOARGS),
          DECLARE_METHOD(t_DcbSatellite, getPRN, METH_NOARGS),
          DECLARE_METHOD(t_DcbSatellite, getSatelliteSytem, METH_NOARGS),
          DECLARE_METHOD(t_DcbSatellite, setDescription, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DcbSatellite)[] = {
          { Py_tp_methods, t_DcbSatellite__methods_ },
          { Py_tp_init, (void *) t_DcbSatellite_init_ },
          { Py_tp_getset, t_DcbSatellite__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DcbSatellite)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DcbSatellite, t_DcbSatellite, DcbSatellite);

        void t_DcbSatellite::install(PyObject *module)
        {
          installType(&PY_TYPE(DcbSatellite), &PY_TYPE_DEF(DcbSatellite), module, "DcbSatellite", 0);
        }

        void t_DcbSatellite::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbSatellite), "class_", make_descriptor(DcbSatellite::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbSatellite), "wrapfn_", make_descriptor(t_DcbSatellite::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbSatellite), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DcbSatellite_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DcbSatellite::initializeClass, 1)))
            return NULL;
          return t_DcbSatellite::wrap_Object(DcbSatellite(((t_DcbSatellite *) arg)->object.this$));
        }
        static PyObject *t_DcbSatellite_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DcbSatellite::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DcbSatellite_init_(t_DcbSatellite *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          DcbSatellite object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = DcbSatellite(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DcbSatellite_getDcbData(t_DcbSatellite *self)
        {
          ::org::orekit::files::sinex::Dcb result((jobject) NULL);
          OBJ_CALL(result = self->object.getDcbData());
          return ::org::orekit::files::sinex::t_Dcb::wrap_Object(result);
        }

        static PyObject *t_DcbSatellite_getDescription(t_DcbSatellite *self)
        {
          ::org::orekit::files::sinex::DcbDescription result((jobject) NULL);
          OBJ_CALL(result = self->object.getDescription());
          return ::org::orekit::files::sinex::t_DcbDescription::wrap_Object(result);
        }

        static PyObject *t_DcbSatellite_getPRN(t_DcbSatellite *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getPRN());
          return j2p(result);
        }

        static PyObject *t_DcbSatellite_getSatelliteSytem(t_DcbSatellite *self)
        {
          ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatelliteSytem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
        }

        static PyObject *t_DcbSatellite_setDescription(t_DcbSatellite *self, PyObject *arg)
        {
          ::org::orekit::files::sinex::DcbDescription a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::sinex::DcbDescription::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setDescription(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDescription", arg);
          return NULL;
        }

        static PyObject *t_DcbSatellite_get__dcbData(t_DcbSatellite *self, void *data)
        {
          ::org::orekit::files::sinex::Dcb value((jobject) NULL);
          OBJ_CALL(value = self->object.getDcbData());
          return ::org::orekit::files::sinex::t_Dcb::wrap_Object(value);
        }

        static PyObject *t_DcbSatellite_get__description(t_DcbSatellite *self, void *data)
        {
          ::org::orekit::files::sinex::DcbDescription value((jobject) NULL);
          OBJ_CALL(value = self->object.getDescription());
          return ::org::orekit::files::sinex::t_DcbDescription::wrap_Object(value);
        }
        static int t_DcbSatellite_set__description(t_DcbSatellite *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::sinex::DcbDescription value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::sinex::DcbDescription::initializeClass, &value))
            {
              INT_CALL(self->object.setDescription(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "description", arg);
          return -1;
        }

        static PyObject *t_DcbSatellite_get__pRN(t_DcbSatellite *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getPRN());
          return j2p(value);
        }

        static PyObject *t_DcbSatellite_get__satelliteSytem(t_DcbSatellite *self, void *data)
        {
          ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatelliteSytem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TAIUTCDatFilesLoader$Parser.h"
#include "java/io/IOException.h"
#include "java/util/List.h"
#include "java/io/InputStream.h"
#include "org/orekit/time/OffsetModel.h"
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TAIUTCDatFilesLoader$Parser::class$ = NULL;
      jmethodID *TAIUTCDatFilesLoader$Parser::mids$ = NULL;
      bool TAIUTCDatFilesLoader$Parser::live$ = false;

      jclass TAIUTCDatFilesLoader$Parser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TAIUTCDatFilesLoader$Parser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_parse_e3101d06c7a1bcab] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TAIUTCDatFilesLoader$Parser::TAIUTCDatFilesLoader$Parser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      ::java::util::List TAIUTCDatFilesLoader$Parser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parse_e3101d06c7a1bcab], a0.this$, a1.this$));
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
      static PyObject *t_TAIUTCDatFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TAIUTCDatFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TAIUTCDatFilesLoader$Parser_init_(t_TAIUTCDatFilesLoader$Parser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TAIUTCDatFilesLoader$Parser_parse(t_TAIUTCDatFilesLoader$Parser *self, PyObject *args);

      static PyMethodDef t_TAIUTCDatFilesLoader$Parser__methods_[] = {
        DECLARE_METHOD(t_TAIUTCDatFilesLoader$Parser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TAIUTCDatFilesLoader$Parser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TAIUTCDatFilesLoader$Parser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TAIUTCDatFilesLoader$Parser)[] = {
        { Py_tp_methods, t_TAIUTCDatFilesLoader$Parser__methods_ },
        { Py_tp_init, (void *) t_TAIUTCDatFilesLoader$Parser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TAIUTCDatFilesLoader$Parser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TAIUTCDatFilesLoader$Parser, t_TAIUTCDatFilesLoader$Parser, TAIUTCDatFilesLoader$Parser);

      void t_TAIUTCDatFilesLoader$Parser::install(PyObject *module)
      {
        installType(&PY_TYPE(TAIUTCDatFilesLoader$Parser), &PY_TYPE_DEF(TAIUTCDatFilesLoader$Parser), module, "TAIUTCDatFilesLoader$Parser", 0);
      }

      void t_TAIUTCDatFilesLoader$Parser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader$Parser), "class_", make_descriptor(TAIUTCDatFilesLoader$Parser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader$Parser), "wrapfn_", make_descriptor(t_TAIUTCDatFilesLoader$Parser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader$Parser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TAIUTCDatFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TAIUTCDatFilesLoader$Parser::initializeClass, 1)))
          return NULL;
        return t_TAIUTCDatFilesLoader$Parser::wrap_Object(TAIUTCDatFilesLoader$Parser(((t_TAIUTCDatFilesLoader$Parser *) arg)->object.this$));
      }
      static PyObject *t_TAIUTCDatFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TAIUTCDatFilesLoader$Parser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TAIUTCDatFilesLoader$Parser_init_(t_TAIUTCDatFilesLoader$Parser *self, PyObject *args, PyObject *kwds)
      {
        TAIUTCDatFilesLoader$Parser object((jobject) NULL);

        INT_CALL(object = TAIUTCDatFilesLoader$Parser());
        self->object = object;

        return 0;
      }

      static PyObject *t_TAIUTCDatFilesLoader$Parser_parse(t_TAIUTCDatFilesLoader$Parser *self, PyObject *args)
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
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {

    ::java::lang::Class *FieldElement::class$ = NULL;
    jmethodID *FieldElement::mids$ = NULL;
    bool FieldElement::live$ = false;

    jclass FieldElement::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("org/hipparchus/FieldElement");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_a6cf95a93b365fc9] = env->getMethodID(cls, "add", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_divide_a6cf95a93b365fc9] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_getField_20f98801541dcec1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
        mids$[mid_getReal_557b8123390d8d0c] = env->getMethodID(cls, "getReal", "()D");
        mids$[mid_isZero_89b302893bdbe1f1] = env->getMethodID(cls, "isZero", "()Z");
        mids$[mid_multiply_d40ba91356b6a058] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/FieldElement;");
        mids$[mid_multiply_a6cf95a93b365fc9] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_negate_ce0470d468f80a56] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_reciprocal_ce0470d468f80a56] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_subtract_a6cf95a93b365fc9] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FieldElement FieldElement::add(const FieldElement & a0) const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_add_a6cf95a93b365fc9], a0.this$));
    }

    FieldElement FieldElement::divide(const FieldElement & a0) const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_divide_a6cf95a93b365fc9], a0.this$));
    }

    ::org::hipparchus::Field FieldElement::getField() const
    {
      return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_20f98801541dcec1]));
    }

    jdouble FieldElement::getReal() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getReal_557b8123390d8d0c]);
    }

    jboolean FieldElement::isZero() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isZero_89b302893bdbe1f1]);
    }

    FieldElement FieldElement::multiply(jint a0) const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_multiply_d40ba91356b6a058], a0));
    }

    FieldElement FieldElement::multiply(const FieldElement & a0) const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_multiply_a6cf95a93b365fc9], a0.this$));
    }

    FieldElement FieldElement::negate() const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_negate_ce0470d468f80a56]));
    }

    FieldElement FieldElement::reciprocal() const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_reciprocal_ce0470d468f80a56]));
    }

    FieldElement FieldElement::subtract(const FieldElement & a0) const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_subtract_a6cf95a93b365fc9], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    static PyObject *t_FieldElement_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FieldElement_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FieldElement_of_(t_FieldElement *self, PyObject *args);
    static PyObject *t_FieldElement_add(t_FieldElement *self, PyObject *arg);
    static PyObject *t_FieldElement_divide(t_FieldElement *self, PyObject *arg);
    static PyObject *t_FieldElement_getField(t_FieldElement *self);
    static PyObject *t_FieldElement_getReal(t_FieldElement *self);
    static PyObject *t_FieldElement_isZero(t_FieldElement *self);
    static PyObject *t_FieldElement_multiply(t_FieldElement *self, PyObject *args);
    static PyObject *t_FieldElement_negate(t_FieldElement *self);
    static PyObject *t_FieldElement_reciprocal(t_FieldElement *self);
    static PyObject *t_FieldElement_subtract(t_FieldElement *self, PyObject *arg);
    static PyObject *t_FieldElement_get__field(t_FieldElement *self, void *data);
    static PyObject *t_FieldElement_get__real(t_FieldElement *self, void *data);
    static PyObject *t_FieldElement_get__zero(t_FieldElement *self, void *data);
    static PyObject *t_FieldElement_get__parameters_(t_FieldElement *self, void *data);
    static PyGetSetDef t_FieldElement__fields_[] = {
      DECLARE_GET_FIELD(t_FieldElement, field),
      DECLARE_GET_FIELD(t_FieldElement, real),
      DECLARE_GET_FIELD(t_FieldElement, zero),
      DECLARE_GET_FIELD(t_FieldElement, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_FieldElement__methods_[] = {
      DECLARE_METHOD(t_FieldElement, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FieldElement, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FieldElement, of_, METH_VARARGS),
      DECLARE_METHOD(t_FieldElement, add, METH_O),
      DECLARE_METHOD(t_FieldElement, divide, METH_O),
      DECLARE_METHOD(t_FieldElement, getField, METH_NOARGS),
      DECLARE_METHOD(t_FieldElement, getReal, METH_NOARGS),
      DECLARE_METHOD(t_FieldElement, isZero, METH_NOARGS),
      DECLARE_METHOD(t_FieldElement, multiply, METH_VARARGS),
      DECLARE_METHOD(t_FieldElement, negate, METH_NOARGS),
      DECLARE_METHOD(t_FieldElement, reciprocal, METH_NOARGS),
      DECLARE_METHOD(t_FieldElement, subtract, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FieldElement)[] = {
      { Py_tp_methods, t_FieldElement__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_FieldElement__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FieldElement)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(FieldElement, t_FieldElement, FieldElement);
    PyObject *t_FieldElement::wrap_Object(const FieldElement& object, PyTypeObject *p0)
    {
      PyObject *obj = t_FieldElement::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_FieldElement *self = (t_FieldElement *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_FieldElement::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_FieldElement::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_FieldElement *self = (t_FieldElement *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_FieldElement::install(PyObject *module)
    {
      installType(&PY_TYPE(FieldElement), &PY_TYPE_DEF(FieldElement), module, "FieldElement", 0);
    }

    void t_FieldElement::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElement), "class_", make_descriptor(FieldElement::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElement), "wrapfn_", make_descriptor(t_FieldElement::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElement), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FieldElement_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FieldElement::initializeClass, 1)))
        return NULL;
      return t_FieldElement::wrap_Object(FieldElement(((t_FieldElement *) arg)->object.this$));
    }
    static PyObject *t_FieldElement_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FieldElement::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_FieldElement_of_(t_FieldElement *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_FieldElement_add(t_FieldElement *self, PyObject *arg)
    {
      FieldElement a0((jobject) NULL);
      PyTypeObject **p0;
      FieldElement result((jobject) NULL);

      if (!parseArg(arg, "K", FieldElement::initializeClass, &a0, &p0, t_FieldElement::parameters_))
      {
        OBJ_CALL(result = self->object.add(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "add", arg);
      return NULL;
    }

    static PyObject *t_FieldElement_divide(t_FieldElement *self, PyObject *arg)
    {
      FieldElement a0((jobject) NULL);
      PyTypeObject **p0;
      FieldElement result((jobject) NULL);

      if (!parseArg(arg, "K", FieldElement::initializeClass, &a0, &p0, t_FieldElement::parameters_))
      {
        OBJ_CALL(result = self->object.divide(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "divide", arg);
      return NULL;
    }

    static PyObject *t_FieldElement_getField(t_FieldElement *self)
    {
      ::org::hipparchus::Field result((jobject) NULL);
      OBJ_CALL(result = self->object.getField());
      return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_FieldElement_getReal(t_FieldElement *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.getReal());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_FieldElement_isZero(t_FieldElement *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isZero());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_FieldElement_multiply(t_FieldElement *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          FieldElement result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.multiply(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
          }
        }
        {
          FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          FieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", FieldElement::initializeClass, &a0, &p0, t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.multiply(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "multiply", args);
      return NULL;
    }

    static PyObject *t_FieldElement_negate(t_FieldElement *self)
    {
      FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.negate());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_FieldElement_reciprocal(t_FieldElement *self)
    {
      FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.reciprocal());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_FieldElement_subtract(t_FieldElement *self, PyObject *arg)
    {
      FieldElement a0((jobject) NULL);
      PyTypeObject **p0;
      FieldElement result((jobject) NULL);

      if (!parseArg(arg, "K", FieldElement::initializeClass, &a0, &p0, t_FieldElement::parameters_))
      {
        OBJ_CALL(result = self->object.subtract(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "subtract", arg);
      return NULL;
    }
    static PyObject *t_FieldElement_get__parameters_(t_FieldElement *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_FieldElement_get__field(t_FieldElement *self, void *data)
    {
      ::org::hipparchus::Field value((jobject) NULL);
      OBJ_CALL(value = self->object.getField());
      return ::org::hipparchus::t_Field::wrap_Object(value);
    }

    static PyObject *t_FieldElement_get__real(t_FieldElement *self, void *data)
    {
      jdouble value;
      OBJ_CALL(value = self->object.getReal());
      return PyFloat_FromDouble((double) value);
    }

    static PyObject *t_FieldElement_get__zero(t_FieldElement *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isZero());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/SubPlane.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *SubPlane::class$ = NULL;
          jmethodID *SubPlane::mids$ = NULL;
          bool SubPlane::live$ = false;

          jclass SubPlane::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/SubPlane");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_08c86faf9fec8eaa] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)V");
              mids$[mid_split_ae8e2bbf2389e86e] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
              mids$[mid_buildNew_0ffd07a16ed53139] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubPlane::SubPlane(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_08c86faf9fec8eaa, a0.this$, a1.this$)) {}

          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubPlane::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_ae8e2bbf2389e86e], a0.this$));
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
      namespace euclidean {
        namespace threed {
          static PyObject *t_SubPlane_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubPlane_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubPlane_of_(t_SubPlane *self, PyObject *args);
          static int t_SubPlane_init_(t_SubPlane *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SubPlane_split(t_SubPlane *self, PyObject *args);
          static PyObject *t_SubPlane_get__parameters_(t_SubPlane *self, void *data);
          static PyGetSetDef t_SubPlane__fields_[] = {
            DECLARE_GET_FIELD(t_SubPlane, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubPlane__methods_[] = {
            DECLARE_METHOD(t_SubPlane, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubPlane, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubPlane, of_, METH_VARARGS),
            DECLARE_METHOD(t_SubPlane, split, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubPlane)[] = {
            { Py_tp_methods, t_SubPlane__methods_ },
            { Py_tp_init, (void *) t_SubPlane_init_ },
            { Py_tp_getset, t_SubPlane__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubPlane)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractSubHyperplane),
            NULL
          };

          DEFINE_TYPE(SubPlane, t_SubPlane, SubPlane);
          PyObject *t_SubPlane::wrap_Object(const SubPlane& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubPlane::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubPlane *self = (t_SubPlane *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SubPlane::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubPlane::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubPlane *self = (t_SubPlane *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_SubPlane::install(PyObject *module)
          {
            installType(&PY_TYPE(SubPlane), &PY_TYPE_DEF(SubPlane), module, "SubPlane", 0);
          }

          void t_SubPlane::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubPlane), "class_", make_descriptor(SubPlane::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubPlane), "wrapfn_", make_descriptor(t_SubPlane::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubPlane), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubPlane_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubPlane::initializeClass, 1)))
              return NULL;
            return t_SubPlane::wrap_Object(SubPlane(((t_SubPlane *) arg)->object.this$));
          }
          static PyObject *t_SubPlane_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubPlane::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubPlane_of_(t_SubPlane *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SubPlane_init_(t_SubPlane *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
            PyTypeObject **p1;
            SubPlane object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
            {
              INT_CALL(object = SubPlane(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
              self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SubPlane_split(t_SubPlane *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.split(a0));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D));
            }

            return callSuper(PY_TYPE(SubPlane), (PyObject *) self, "split", args, 2);
          }
          static PyObject *t_SubPlane_get__parameters_(t_SubPlane *self, void *data)
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
#include "org/hipparchus/util/ContinuedFraction.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *ContinuedFraction::class$ = NULL;
      jmethodID *ContinuedFraction::mids$ = NULL;
      bool ContinuedFraction::live$ = false;

      jclass ContinuedFraction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/ContinuedFraction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_evaluate_7e960cd6eee376d8] = env->getMethodID(cls, "evaluate", "(D)D");
          mids$[mid_evaluate_2268d18be49a6087] = env->getMethodID(cls, "evaluate", "(DD)D");
          mids$[mid_evaluate_156ae9d72f1c8533] = env->getMethodID(cls, "evaluate", "(DI)D");
          mids$[mid_evaluate_63ce51364ee6da7c] = env->getMethodID(cls, "evaluate", "(DDI)D");
          mids$[mid_getA_77f9e227e4cf04b4] = env->getMethodID(cls, "getA", "(ID)D");
          mids$[mid_getB_77f9e227e4cf04b4] = env->getMethodID(cls, "getB", "(ID)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble ContinuedFraction::evaluate(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_7e960cd6eee376d8], a0);
      }

      jdouble ContinuedFraction::evaluate(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_2268d18be49a6087], a0, a1);
      }

      jdouble ContinuedFraction::evaluate(jdouble a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_156ae9d72f1c8533], a0, a1);
      }

      jdouble ContinuedFraction::evaluate(jdouble a0, jdouble a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_63ce51364ee6da7c], a0, a1, a2);
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
      static PyObject *t_ContinuedFraction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ContinuedFraction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ContinuedFraction_evaluate(t_ContinuedFraction *self, PyObject *args);

      static PyMethodDef t_ContinuedFraction__methods_[] = {
        DECLARE_METHOD(t_ContinuedFraction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ContinuedFraction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ContinuedFraction, evaluate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ContinuedFraction)[] = {
        { Py_tp_methods, t_ContinuedFraction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ContinuedFraction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ContinuedFraction, t_ContinuedFraction, ContinuedFraction);

      void t_ContinuedFraction::install(PyObject *module)
      {
        installType(&PY_TYPE(ContinuedFraction), &PY_TYPE_DEF(ContinuedFraction), module, "ContinuedFraction", 0);
      }

      void t_ContinuedFraction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ContinuedFraction), "class_", make_descriptor(ContinuedFraction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ContinuedFraction), "wrapfn_", make_descriptor(t_ContinuedFraction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ContinuedFraction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ContinuedFraction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ContinuedFraction::initializeClass, 1)))
          return NULL;
        return t_ContinuedFraction::wrap_Object(ContinuedFraction(((t_ContinuedFraction *) arg)->object.this$));
      }
      static PyObject *t_ContinuedFraction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ContinuedFraction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ContinuedFraction_evaluate(t_ContinuedFraction *self, PyObject *args)
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
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jdouble a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "evaluate", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/ShapiroInterSatelliteRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ShapiroInterSatelliteRangeModifier::class$ = NULL;
          jmethodID *ShapiroInterSatelliteRangeModifier::mids$ = NULL;
          bool ShapiroInterSatelliteRangeModifier::live$ = false;

          jclass ShapiroInterSatelliteRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroInterSatelliteRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroInterSatelliteRangeModifier::ShapiroInterSatelliteRangeModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

          ::java::util::List ShapiroInterSatelliteRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void ShapiroInterSatelliteRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
          static PyObject *t_ShapiroInterSatelliteRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroInterSatelliteRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroInterSatelliteRangeModifier_init_(t_ShapiroInterSatelliteRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroInterSatelliteRangeModifier_getParametersDrivers(t_ShapiroInterSatelliteRangeModifier *self);
          static PyObject *t_ShapiroInterSatelliteRangeModifier_modifyWithoutDerivatives(t_ShapiroInterSatelliteRangeModifier *self, PyObject *arg);
          static PyObject *t_ShapiroInterSatelliteRangeModifier_get__parametersDrivers(t_ShapiroInterSatelliteRangeModifier *self, void *data);
          static PyGetSetDef t_ShapiroInterSatelliteRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroInterSatelliteRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroInterSatelliteRangeModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroInterSatelliteRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroInterSatelliteRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroInterSatelliteRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroInterSatelliteRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroInterSatelliteRangeModifier)[] = {
            { Py_tp_methods, t_ShapiroInterSatelliteRangeModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroInterSatelliteRangeModifier_init_ },
            { Py_tp_getset, t_ShapiroInterSatelliteRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroInterSatelliteRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroInterSatelliteRangeModifier, t_ShapiroInterSatelliteRangeModifier, ShapiroInterSatelliteRangeModifier);

          void t_ShapiroInterSatelliteRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroInterSatelliteRangeModifier), &PY_TYPE_DEF(ShapiroInterSatelliteRangeModifier), module, "ShapiroInterSatelliteRangeModifier", 0);
          }

          void t_ShapiroInterSatelliteRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatelliteRangeModifier), "class_", make_descriptor(ShapiroInterSatelliteRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatelliteRangeModifier), "wrapfn_", make_descriptor(t_ShapiroInterSatelliteRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatelliteRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroInterSatelliteRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroInterSatelliteRangeModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroInterSatelliteRangeModifier::wrap_Object(ShapiroInterSatelliteRangeModifier(((t_ShapiroInterSatelliteRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroInterSatelliteRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroInterSatelliteRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroInterSatelliteRangeModifier_init_(t_ShapiroInterSatelliteRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroInterSatelliteRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroInterSatelliteRangeModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroInterSatelliteRangeModifier_getParametersDrivers(t_ShapiroInterSatelliteRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroInterSatelliteRangeModifier_modifyWithoutDerivatives(t_ShapiroInterSatelliteRangeModifier *self, PyObject *arg)
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

          static PyObject *t_ShapiroInterSatelliteRangeModifier_get__parametersDrivers(t_ShapiroInterSatelliteRangeModifier *self, void *data)
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
#include "org/orekit/forces/radiation/IsotropicRadiationClassicalConvention.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *IsotropicRadiationClassicalConvention::class$ = NULL;
        jmethodID *IsotropicRadiationClassicalConvention::mids$ = NULL;
        bool IsotropicRadiationClassicalConvention::live$ = false;

        jclass IsotropicRadiationClassicalConvention::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/IsotropicRadiationClassicalConvention");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_getRadiationParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
            mids$[mid_radiationPressureAcceleration_122b60d0431fddf5] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_radiationPressureAcceleration_a910b2c2e7db1f82] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IsotropicRadiationClassicalConvention::IsotropicRadiationClassicalConvention(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

        ::java::util::List IsotropicRadiationClassicalConvention::getRadiationParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRadiationParametersDrivers_0d9551367f7ecdef]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D IsotropicRadiationClassicalConvention::radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_122b60d0431fddf5], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IsotropicRadiationClassicalConvention::radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_a910b2c2e7db1f82], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_IsotropicRadiationClassicalConvention_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IsotropicRadiationClassicalConvention_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IsotropicRadiationClassicalConvention_init_(t_IsotropicRadiationClassicalConvention *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IsotropicRadiationClassicalConvention_getRadiationParametersDrivers(t_IsotropicRadiationClassicalConvention *self);
        static PyObject *t_IsotropicRadiationClassicalConvention_radiationPressureAcceleration(t_IsotropicRadiationClassicalConvention *self, PyObject *args);
        static PyObject *t_IsotropicRadiationClassicalConvention_get__radiationParametersDrivers(t_IsotropicRadiationClassicalConvention *self, void *data);
        static PyGetSetDef t_IsotropicRadiationClassicalConvention__fields_[] = {
          DECLARE_GET_FIELD(t_IsotropicRadiationClassicalConvention, radiationParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IsotropicRadiationClassicalConvention__methods_[] = {
          DECLARE_METHOD(t_IsotropicRadiationClassicalConvention, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationClassicalConvention, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationClassicalConvention, getRadiationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_IsotropicRadiationClassicalConvention, radiationPressureAcceleration, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IsotropicRadiationClassicalConvention)[] = {
          { Py_tp_methods, t_IsotropicRadiationClassicalConvention__methods_ },
          { Py_tp_init, (void *) t_IsotropicRadiationClassicalConvention_init_ },
          { Py_tp_getset, t_IsotropicRadiationClassicalConvention__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IsotropicRadiationClassicalConvention)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IsotropicRadiationClassicalConvention, t_IsotropicRadiationClassicalConvention, IsotropicRadiationClassicalConvention);

        void t_IsotropicRadiationClassicalConvention::install(PyObject *module)
        {
          installType(&PY_TYPE(IsotropicRadiationClassicalConvention), &PY_TYPE_DEF(IsotropicRadiationClassicalConvention), module, "IsotropicRadiationClassicalConvention", 0);
        }

        void t_IsotropicRadiationClassicalConvention::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationClassicalConvention), "class_", make_descriptor(IsotropicRadiationClassicalConvention::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationClassicalConvention), "wrapfn_", make_descriptor(t_IsotropicRadiationClassicalConvention::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationClassicalConvention), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IsotropicRadiationClassicalConvention_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IsotropicRadiationClassicalConvention::initializeClass, 1)))
            return NULL;
          return t_IsotropicRadiationClassicalConvention::wrap_Object(IsotropicRadiationClassicalConvention(((t_IsotropicRadiationClassicalConvention *) arg)->object.this$));
        }
        static PyObject *t_IsotropicRadiationClassicalConvention_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IsotropicRadiationClassicalConvention::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IsotropicRadiationClassicalConvention_init_(t_IsotropicRadiationClassicalConvention *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          IsotropicRadiationClassicalConvention object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = IsotropicRadiationClassicalConvention(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IsotropicRadiationClassicalConvention_getRadiationParametersDrivers(t_IsotropicRadiationClassicalConvention *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_IsotropicRadiationClassicalConvention_radiationPressureAcceleration(t_IsotropicRadiationClassicalConvention *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "radiationPressureAcceleration", args);
          return NULL;
        }

        static PyObject *t_IsotropicRadiationClassicalConvention_get__radiationParametersDrivers(t_IsotropicRadiationClassicalConvention *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonUnnormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonUnnormalizedSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *PythonUnnormalizedSphericalHarmonicsProvider::mids$ = NULL;
          bool PythonUnnormalizedSphericalHarmonicsProvider::live$ = false;

          jclass PythonUnnormalizedSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonUnnormalizedSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAe_557b8123390d8d0c] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_412668abc8d889e9] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_412668abc8d889e9] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_7a97f7e149e79afb] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTideSystem_7d9a2a298dcb49fa] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_onDate_a4dc06866e3014fd] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonUnnormalizedSphericalHarmonicsProvider::PythonUnnormalizedSphericalHarmonicsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonUnnormalizedSphericalHarmonicsProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonUnnormalizedSphericalHarmonicsProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonUnnormalizedSphericalHarmonicsProvider::pythonExtension(jlong a0) const
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
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonUnnormalizedSphericalHarmonicsProvider_init_(t_PythonUnnormalizedSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_finalize(t_PythonUnnormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_pythonExtension(t_PythonUnnormalizedSphericalHarmonicsProvider *self, PyObject *args);
          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_onDate6(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_pythonDecRef7(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_get__self(t_PythonUnnormalizedSphericalHarmonicsProvider *self, void *data);
          static PyGetSetDef t_PythonUnnormalizedSphericalHarmonicsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_PythonUnnormalizedSphericalHarmonicsProvider, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonUnnormalizedSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonicsProvider, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonicsProvider, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonUnnormalizedSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_PythonUnnormalizedSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_init_ },
            { Py_tp_getset, t_PythonUnnormalizedSphericalHarmonicsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonUnnormalizedSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonUnnormalizedSphericalHarmonicsProvider, t_PythonUnnormalizedSphericalHarmonicsProvider, PythonUnnormalizedSphericalHarmonicsProvider);

          void t_PythonUnnormalizedSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonUnnormalizedSphericalHarmonicsProvider), &PY_TYPE_DEF(PythonUnnormalizedSphericalHarmonicsProvider), module, "PythonUnnormalizedSphericalHarmonicsProvider", 1);
          }

          void t_PythonUnnormalizedSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnnormalizedSphericalHarmonicsProvider), "class_", make_descriptor(PythonUnnormalizedSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnnormalizedSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_PythonUnnormalizedSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnnormalizedSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonUnnormalizedSphericalHarmonicsProvider::initializeClass);
            JNINativeMethod methods[] = {
              { "getAe", "()D", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_getAe0 },
              { "getMaxDegree", "()I", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_getMaxDegree1 },
              { "getMaxOrder", "()I", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_getMaxOrder2 },
              { "getMu", "()D", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_getMu3 },
              { "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_getReferenceDate4 },
              { "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_getTideSystem5 },
              { "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_onDate6 },
              { "pythonDecRef", "()V", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_pythonDecRef7 },
            };
            env->registerNatives(cls, methods, 8);
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonUnnormalizedSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_PythonUnnormalizedSphericalHarmonicsProvider::wrap_Object(PythonUnnormalizedSphericalHarmonicsProvider(((t_PythonUnnormalizedSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonUnnormalizedSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonUnnormalizedSphericalHarmonicsProvider_init_(t_PythonUnnormalizedSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds)
          {
            PythonUnnormalizedSphericalHarmonicsProvider object((jobject) NULL);

            INT_CALL(object = PythonUnnormalizedSphericalHarmonicsProvider());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_finalize(t_PythonUnnormalizedSphericalHarmonicsProvider *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_pythonExtension(t_PythonUnnormalizedSphericalHarmonicsProvider *self, PyObject *args)
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

          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getAe", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getAe", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jint JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxDegree", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxDegree", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jint JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxOrder", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxOrder", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getMu", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getMu", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getReferenceDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getReferenceDate", result);
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

          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getTideSystem", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, &value))
            {
              throwTypeError("getTideSystem", result);
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

          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_onDate6(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "onDate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &value))
            {
              throwTypeError("onDate", result);
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

          static void JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_pythonDecRef7(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_get__self(t_PythonUnnormalizedSphericalHarmonicsProvider *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/ContinuousScheduler.h"
#include "org/orekit/time/DatesSelector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *ContinuousScheduler::class$ = NULL;
          jmethodID *ContinuousScheduler::mids$ = NULL;
          bool ContinuousScheduler::live$ = false;

          jclass ContinuousScheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/ContinuousScheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_abb76428109f399d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;Lorg/orekit/time/DatesSelector;)V");
              mids$[mid_measurementIsFeasible_981023bfa4a8a093] = env->getMethodID(cls, "measurementIsFeasible", "(Lorg/orekit/time/AbsoluteDate;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ContinuousScheduler::ContinuousScheduler(const ::org::orekit::estimation::measurements::generation::MeasurementBuilder & a0, const ::org::orekit::time::DatesSelector & a1) : ::org::orekit::estimation::measurements::generation::AbstractScheduler(env->newObject(initializeClass, &mids$, mid_init$_abb76428109f399d, a0.this$, a1.this$)) {}

          jboolean ContinuousScheduler::measurementIsFeasible(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_measurementIsFeasible_981023bfa4a8a093], a0.this$);
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
          static PyObject *t_ContinuousScheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ContinuousScheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ContinuousScheduler_of_(t_ContinuousScheduler *self, PyObject *args);
          static int t_ContinuousScheduler_init_(t_ContinuousScheduler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ContinuousScheduler_measurementIsFeasible(t_ContinuousScheduler *self, PyObject *arg);
          static PyObject *t_ContinuousScheduler_get__parameters_(t_ContinuousScheduler *self, void *data);
          static PyGetSetDef t_ContinuousScheduler__fields_[] = {
            DECLARE_GET_FIELD(t_ContinuousScheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ContinuousScheduler__methods_[] = {
            DECLARE_METHOD(t_ContinuousScheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ContinuousScheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ContinuousScheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_ContinuousScheduler, measurementIsFeasible, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ContinuousScheduler)[] = {
            { Py_tp_methods, t_ContinuousScheduler__methods_ },
            { Py_tp_init, (void *) t_ContinuousScheduler_init_ },
            { Py_tp_getset, t_ContinuousScheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ContinuousScheduler)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractScheduler),
            NULL
          };

          DEFINE_TYPE(ContinuousScheduler, t_ContinuousScheduler, ContinuousScheduler);
          PyObject *t_ContinuousScheduler::wrap_Object(const ContinuousScheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ContinuousScheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ContinuousScheduler *self = (t_ContinuousScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ContinuousScheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ContinuousScheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ContinuousScheduler *self = (t_ContinuousScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ContinuousScheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(ContinuousScheduler), &PY_TYPE_DEF(ContinuousScheduler), module, "ContinuousScheduler", 0);
          }

          void t_ContinuousScheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContinuousScheduler), "class_", make_descriptor(ContinuousScheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContinuousScheduler), "wrapfn_", make_descriptor(t_ContinuousScheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContinuousScheduler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ContinuousScheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ContinuousScheduler::initializeClass, 1)))
              return NULL;
            return t_ContinuousScheduler::wrap_Object(ContinuousScheduler(((t_ContinuousScheduler *) arg)->object.this$));
          }
          static PyObject *t_ContinuousScheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ContinuousScheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ContinuousScheduler_of_(t_ContinuousScheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ContinuousScheduler_init_(t_ContinuousScheduler *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DatesSelector a1((jobject) NULL);
            ContinuousScheduler object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::generation::MeasurementBuilder::initializeClass, ::org::orekit::time::DatesSelector::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::parameters_, &a1))
            {
              INT_CALL(object = ContinuousScheduler(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ContinuousScheduler_measurementIsFeasible(t_ContinuousScheduler *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.measurementIsFeasible(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "measurementIsFeasible", arg);
            return NULL;
          }
          static PyObject *t_ContinuousScheduler_get__parameters_(t_ContinuousScheduler *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}

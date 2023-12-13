#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseTroposphericDelayModifier.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseTroposphericDelayModifier::class$ = NULL;
          jmethodID *PhaseTroposphericDelayModifier::mids$ = NULL;
          bool PhaseTroposphericDelayModifier::live$ = false;

          jclass PhaseTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_516bd20115aa9d9d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_f784f7724d44a90a] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseTroposphericDelayModifier::PhaseTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_516bd20115aa9d9d, a0.this$)) {}

          ::java::util::List PhaseTroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void PhaseTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_f784f7724d44a90a], a0.this$);
          }

          void PhaseTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_PhaseTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseTroposphericDelayModifier_init_(t_PhaseTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseTroposphericDelayModifier_getParametersDrivers(t_PhaseTroposphericDelayModifier *self);
          static PyObject *t_PhaseTroposphericDelayModifier_modify(t_PhaseTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_PhaseTroposphericDelayModifier_modifyWithoutDerivatives(t_PhaseTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_PhaseTroposphericDelayModifier_get__parametersDrivers(t_PhaseTroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_PhaseTroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseTroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_PhaseTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseTroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_PhaseTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_PhaseTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_PhaseTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_PhaseTroposphericDelayModifier_init_ },
            { Py_tp_getset, t_PhaseTroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseTroposphericDelayModifier, t_PhaseTroposphericDelayModifier, PhaseTroposphericDelayModifier);

          void t_PhaseTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseTroposphericDelayModifier), &PY_TYPE_DEF(PhaseTroposphericDelayModifier), module, "PhaseTroposphericDelayModifier", 0);
          }

          void t_PhaseTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseTroposphericDelayModifier), "class_", make_descriptor(PhaseTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseTroposphericDelayModifier), "wrapfn_", make_descriptor(t_PhaseTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_PhaseTroposphericDelayModifier::wrap_Object(PhaseTroposphericDelayModifier(((t_PhaseTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_PhaseTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseTroposphericDelayModifier_init_(t_PhaseTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            PhaseTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = PhaseTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseTroposphericDelayModifier_getParametersDrivers(t_PhaseTroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_PhaseTroposphericDelayModifier_modify(t_PhaseTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseTroposphericDelayModifier_modifyWithoutDerivatives(t_PhaseTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseTroposphericDelayModifier_get__parametersDrivers(t_PhaseTroposphericDelayModifier *self, void *data)
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
#include "org/orekit/forces/maneuvers/trigger/PythonAbstractManeuverTriggers.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonAbstractManeuverTriggers::class$ = NULL;
          jmethodID *PythonAbstractManeuverTriggers::mids$ = NULL;
          bool PythonAbstractManeuverTriggers::live$ = false;

          jclass PythonAbstractManeuverTriggers::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonAbstractManeuverTriggers");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getEventDetectors_14e21bf777ff0ccf] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_283ad33581c047a0] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_isFiringOnInitialState_4ef3ef34329e6316] = env->getMethodID(cls, "isFiringOnInitialState", "(Lorg/orekit/propagation/SpacecraftState;Z)Z");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractManeuverTriggers::PythonAbstractManeuverTriggers() : ::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonAbstractManeuverTriggers::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonAbstractManeuverTriggers::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonAbstractManeuverTriggers::pythonExtension(jlong a0) const
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
    namespace forces {
      namespace maneuvers {
        namespace trigger {
          static PyObject *t_PythonAbstractManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractManeuverTriggers_init_(t_PythonAbstractManeuverTriggers *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractManeuverTriggers_finalize(t_PythonAbstractManeuverTriggers *self);
          static PyObject *t_PythonAbstractManeuverTriggers_pythonExtension(t_PythonAbstractManeuverTriggers *self, PyObject *args);
          static jobject JNICALL t_PythonAbstractManeuverTriggers_getEventDetectors0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonAbstractManeuverTriggers_getFieldEventDetectors1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonAbstractManeuverTriggers_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
          static jboolean JNICALL t_PythonAbstractManeuverTriggers_isFiringOnInitialState3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
          static void JNICALL t_PythonAbstractManeuverTriggers_pythonDecRef4(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractManeuverTriggers_get__self(t_PythonAbstractManeuverTriggers *self, void *data);
          static PyGetSetDef t_PythonAbstractManeuverTriggers__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractManeuverTriggers, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractManeuverTriggers__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractManeuverTriggers, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractManeuverTriggers, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractManeuverTriggers, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractManeuverTriggers, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractManeuverTriggers)[] = {
            { Py_tp_methods, t_PythonAbstractManeuverTriggers__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractManeuverTriggers_init_ },
            { Py_tp_getset, t_PythonAbstractManeuverTriggers__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractManeuverTriggers)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers),
            NULL
          };

          DEFINE_TYPE(PythonAbstractManeuverTriggers, t_PythonAbstractManeuverTriggers, PythonAbstractManeuverTriggers);

          void t_PythonAbstractManeuverTriggers::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractManeuverTriggers), &PY_TYPE_DEF(PythonAbstractManeuverTriggers), module, "PythonAbstractManeuverTriggers", 1);
          }

          void t_PythonAbstractManeuverTriggers::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractManeuverTriggers), "class_", make_descriptor(PythonAbstractManeuverTriggers::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractManeuverTriggers), "wrapfn_", make_descriptor(t_PythonAbstractManeuverTriggers::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractManeuverTriggers), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractManeuverTriggers::initializeClass);
            JNINativeMethod methods[] = {
              { "getEventDetectors", "()Ljava/util/stream/Stream;", (void *) t_PythonAbstractManeuverTriggers_getEventDetectors0 },
              { "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;", (void *) t_PythonAbstractManeuverTriggers_getFieldEventDetectors1 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonAbstractManeuverTriggers_getParametersDrivers2 },
              { "isFiringOnInitialState", "(Lorg/orekit/propagation/SpacecraftState;Z)Z", (void *) t_PythonAbstractManeuverTriggers_isFiringOnInitialState3 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractManeuverTriggers_pythonDecRef4 },
            };
            env->registerNatives(cls, methods, 5);
          }

          static PyObject *t_PythonAbstractManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractManeuverTriggers::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractManeuverTriggers::wrap_Object(PythonAbstractManeuverTriggers(((t_PythonAbstractManeuverTriggers *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractManeuverTriggers::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractManeuverTriggers_init_(t_PythonAbstractManeuverTriggers *self, PyObject *args, PyObject *kwds)
          {
            PythonAbstractManeuverTriggers object((jobject) NULL);

            INT_CALL(object = PythonAbstractManeuverTriggers());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAbstractManeuverTriggers_finalize(t_PythonAbstractManeuverTriggers *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractManeuverTriggers_pythonExtension(t_PythonAbstractManeuverTriggers *self, PyObject *args)
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

          static jobject JNICALL t_PythonAbstractManeuverTriggers_getEventDetectors0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::stream::Stream value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getEventDetectors", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
            {
              throwTypeError("getEventDetectors", result);
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

          static jobject JNICALL t_PythonAbstractManeuverTriggers_getFieldEventDetectors1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::stream::Stream value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *result = PyObject_CallMethod(obj, "getFieldEventDetectors", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
            {
              throwTypeError("getFieldEventDetectors", result);
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

          static jobject JNICALL t_PythonAbstractManeuverTriggers_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getParametersDrivers", result);
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

          static jboolean JNICALL t_PythonAbstractManeuverTriggers_isFiringOnInitialState3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jboolean value;
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = (a1 ? Py_True : Py_False);
            PyObject *result = PyObject_CallMethod(obj, "isFiringOnInitialState", "OO", o0, o1);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "Z", &value))
            {
              throwTypeError("isFiringOnInitialState", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jboolean) 0;
          }

          static void JNICALL t_PythonAbstractManeuverTriggers_pythonDecRef4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractManeuverTriggers_get__self(t_PythonAbstractManeuverTriggers *self, void *data)
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
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeSpanMap$Transition.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeSpanMap$Span::class$ = NULL;
      jmethodID *TimeSpanMap$Span::mids$ = NULL;
      bool TimeSpanMap$Span::live$ = false;

      jclass TimeSpanMap$Span::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeSpanMap$Span");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getData_541690f9ee81d3ad] = env->getMethodID(cls, "getData", "()Ljava/lang/Object;");
          mids$[mid_getEnd_c325492395d89b24] = env->getMethodID(cls, "getEnd", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getEndTransition_c754c29f2c04a95a] = env->getMethodID(cls, "getEndTransition", "()Lorg/orekit/utils/TimeSpanMap$Transition;");
          mids$[mid_getStart_c325492395d89b24] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getStartTransition_c754c29f2c04a95a] = env->getMethodID(cls, "getStartTransition", "()Lorg/orekit/utils/TimeSpanMap$Transition;");
          mids$[mid_next_5290b219f9ebfd63] = env->getMethodID(cls, "next", "()Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_previous_5290b219f9ebfd63] = env->getMethodID(cls, "previous", "()Lorg/orekit/utils/TimeSpanMap$Span;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::Object TimeSpanMap$Span::getData() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getData_541690f9ee81d3ad]));
      }

      ::org::orekit::time::AbsoluteDate TimeSpanMap$Span::getEnd() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEnd_c325492395d89b24]));
      }

      ::org::orekit::utils::TimeSpanMap$Transition TimeSpanMap$Span::getEndTransition() const
      {
        return ::org::orekit::utils::TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_getEndTransition_c754c29f2c04a95a]));
      }

      ::org::orekit::time::AbsoluteDate TimeSpanMap$Span::getStart() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_c325492395d89b24]));
      }

      ::org::orekit::utils::TimeSpanMap$Transition TimeSpanMap$Span::getStartTransition() const
      {
        return ::org::orekit::utils::TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_getStartTransition_c754c29f2c04a95a]));
      }

      TimeSpanMap$Span TimeSpanMap$Span::next() const
      {
        return TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_next_5290b219f9ebfd63]));
      }

      TimeSpanMap$Span TimeSpanMap$Span::previous() const
      {
        return TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_previous_5290b219f9ebfd63]));
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
      static PyObject *t_TimeSpanMap$Span_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap$Span_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap$Span_of_(t_TimeSpanMap$Span *self, PyObject *args);
      static PyObject *t_TimeSpanMap$Span_getData(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_getEnd(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_getEndTransition(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_getStart(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_getStartTransition(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_next(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_previous(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_get__data(t_TimeSpanMap$Span *self, void *data);
      static PyObject *t_TimeSpanMap$Span_get__end(t_TimeSpanMap$Span *self, void *data);
      static PyObject *t_TimeSpanMap$Span_get__endTransition(t_TimeSpanMap$Span *self, void *data);
      static PyObject *t_TimeSpanMap$Span_get__start(t_TimeSpanMap$Span *self, void *data);
      static PyObject *t_TimeSpanMap$Span_get__startTransition(t_TimeSpanMap$Span *self, void *data);
      static PyObject *t_TimeSpanMap$Span_get__parameters_(t_TimeSpanMap$Span *self, void *data);
      static PyGetSetDef t_TimeSpanMap$Span__fields_[] = {
        DECLARE_GET_FIELD(t_TimeSpanMap$Span, data),
        DECLARE_GET_FIELD(t_TimeSpanMap$Span, end),
        DECLARE_GET_FIELD(t_TimeSpanMap$Span, endTransition),
        DECLARE_GET_FIELD(t_TimeSpanMap$Span, start),
        DECLARE_GET_FIELD(t_TimeSpanMap$Span, startTransition),
        DECLARE_GET_FIELD(t_TimeSpanMap$Span, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeSpanMap$Span__methods_[] = {
        DECLARE_METHOD(t_TimeSpanMap$Span, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap$Span, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap$Span, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, getData, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, getEnd, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, getEndTransition, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, getStart, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, getStartTransition, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, next, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, previous, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeSpanMap$Span)[] = {
        { Py_tp_methods, t_TimeSpanMap$Span__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeSpanMap$Span__fields_ },
        { Py_tp_iter, (void *) PyObject_SelfIter },
        { Py_tp_iternext, (void *) ((PyObject *(*)(t_TimeSpanMap$Span *)) get_generic_next< t_TimeSpanMap$Span,t_TimeSpanMap$Span,TimeSpanMap$Span >) },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeSpanMap$Span)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeSpanMap$Span, t_TimeSpanMap$Span, TimeSpanMap$Span);
      PyObject *t_TimeSpanMap$Span::wrap_Object(const TimeSpanMap$Span& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap$Span::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap$Span *self = (t_TimeSpanMap$Span *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeSpanMap$Span::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap$Span::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap$Span *self = (t_TimeSpanMap$Span *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeSpanMap$Span::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeSpanMap$Span), &PY_TYPE_DEF(TimeSpanMap$Span), module, "TimeSpanMap$Span", 0);
      }

      void t_TimeSpanMap$Span::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap$Span), "class_", make_descriptor(TimeSpanMap$Span::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap$Span), "wrapfn_", make_descriptor(t_TimeSpanMap$Span::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap$Span), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeSpanMap$Span_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeSpanMap$Span::initializeClass, 1)))
          return NULL;
        return t_TimeSpanMap$Span::wrap_Object(TimeSpanMap$Span(((t_TimeSpanMap$Span *) arg)->object.this$));
      }
      static PyObject *t_TimeSpanMap$Span_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeSpanMap$Span::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeSpanMap$Span_of_(t_TimeSpanMap$Span *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeSpanMap$Span_getData(t_TimeSpanMap$Span *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_TimeSpanMap$Span_getEnd(t_TimeSpanMap$Span *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getEnd());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeSpanMap$Span_getEndTransition(t_TimeSpanMap$Span *self)
      {
        ::org::orekit::utils::TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.getEndTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap$Span_getStart(t_TimeSpanMap$Span *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getStart());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeSpanMap$Span_getStartTransition(t_TimeSpanMap$Span *self)
      {
        ::org::orekit::utils::TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.getStartTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap$Span_next(t_TimeSpanMap$Span *self)
      {
        TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.next());
        return t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap$Span_previous(t_TimeSpanMap$Span *self)
      {
        TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.previous());
        return t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_TimeSpanMap$Span_get__parameters_(t_TimeSpanMap$Span *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeSpanMap$Span_get__data(t_TimeSpanMap$Span *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Span_get__end(t_TimeSpanMap$Span *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getEnd());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Span_get__endTransition(t_TimeSpanMap$Span *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Transition value((jobject) NULL);
        OBJ_CALL(value = self->object.getEndTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Span_get__start(t_TimeSpanMap$Span *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getStart());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Span_get__startTransition(t_TimeSpanMap$Span *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Transition value((jobject) NULL);
        OBJ_CALL(value = self->object.getStartTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/units/PowerTerm.h"
#include "java/lang/Class.h"
#include "java/lang/CharSequence.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        ::java::lang::Class *PowerTerm::class$ = NULL;
        jmethodID *PowerTerm::mids$ = NULL;
        bool PowerTerm::live$ = false;

        jclass PowerTerm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/utils/units/PowerTerm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getBase_9736b107de4781a2] = env->getMethodID(cls, "getBase", "()Ljava/lang/CharSequence;");
            mids$[mid_getExponent_7ab72bcbb3909669] = env->getMethodID(cls, "getExponent", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_getScale_b74f83833fdad017] = env->getMethodID(cls, "getScale", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::CharSequence PowerTerm::getBase() const
        {
          return ::java::lang::CharSequence(env->callObjectMethod(this$, mids$[mid_getBase_9736b107de4781a2]));
        }

        ::org::hipparchus::fraction::Fraction PowerTerm::getExponent() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getExponent_7ab72bcbb3909669]));
        }

        jdouble PowerTerm::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_b74f83833fdad017]);
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
        static PyObject *t_PowerTerm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PowerTerm_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PowerTerm_getBase(t_PowerTerm *self);
        static PyObject *t_PowerTerm_getExponent(t_PowerTerm *self);
        static PyObject *t_PowerTerm_getScale(t_PowerTerm *self);
        static PyObject *t_PowerTerm_get__base(t_PowerTerm *self, void *data);
        static PyObject *t_PowerTerm_get__exponent(t_PowerTerm *self, void *data);
        static PyObject *t_PowerTerm_get__scale(t_PowerTerm *self, void *data);
        static PyGetSetDef t_PowerTerm__fields_[] = {
          DECLARE_GET_FIELD(t_PowerTerm, base),
          DECLARE_GET_FIELD(t_PowerTerm, exponent),
          DECLARE_GET_FIELD(t_PowerTerm, scale),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PowerTerm__methods_[] = {
          DECLARE_METHOD(t_PowerTerm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PowerTerm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PowerTerm, getBase, METH_NOARGS),
          DECLARE_METHOD(t_PowerTerm, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_PowerTerm, getScale, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PowerTerm)[] = {
          { Py_tp_methods, t_PowerTerm__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_PowerTerm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PowerTerm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PowerTerm, t_PowerTerm, PowerTerm);

        void t_PowerTerm::install(PyObject *module)
        {
          installType(&PY_TYPE(PowerTerm), &PY_TYPE_DEF(PowerTerm), module, "PowerTerm", 0);
        }

        void t_PowerTerm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PowerTerm), "class_", make_descriptor(PowerTerm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PowerTerm), "wrapfn_", make_descriptor(t_PowerTerm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PowerTerm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PowerTerm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PowerTerm::initializeClass, 1)))
            return NULL;
          return t_PowerTerm::wrap_Object(PowerTerm(((t_PowerTerm *) arg)->object.this$));
        }
        static PyObject *t_PowerTerm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PowerTerm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PowerTerm_getBase(t_PowerTerm *self)
        {
          ::java::lang::CharSequence result((jobject) NULL);
          OBJ_CALL(result = self->object.getBase());
          return ::java::lang::t_CharSequence::wrap_Object(result);
        }

        static PyObject *t_PowerTerm_getExponent(t_PowerTerm *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getExponent());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_PowerTerm_getScale(t_PowerTerm *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_PowerTerm_get__base(t_PowerTerm *self, void *data)
        {
          ::java::lang::CharSequence value((jobject) NULL);
          OBJ_CALL(value = self->object.getBase());
          return ::java::lang::t_CharSequence::wrap_Object(value);
        }

        static PyObject *t_PowerTerm_get__exponent(t_PowerTerm *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getExponent());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }

        static PyObject *t_PowerTerm_get__scale(t_PowerTerm *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ComplexOrdinaryDifferentialEquation.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ComplexOrdinaryDifferentialEquation::class$ = NULL;
      jmethodID *ComplexOrdinaryDifferentialEquation::mids$ = NULL;
      bool ComplexOrdinaryDifferentialEquation::live$ = false;

      jclass ComplexOrdinaryDifferentialEquation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ComplexOrdinaryDifferentialEquation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_6e8ed7c1b9744549] = env->getMethodID(cls, "computeDerivatives", "(D[Lorg/hipparchus/complex/Complex;)[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_fa5e0f2ce68236ca] = env->getMethodID(cls, "init", "(D[Lorg/hipparchus/complex/Complex;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexOrdinaryDifferentialEquation::computeDerivatives(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1) const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_6e8ed7c1b9744549], a0, a1.this$));
      }

      jint ComplexOrdinaryDifferentialEquation::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
      }

      void ComplexOrdinaryDifferentialEquation::init(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_init_fa5e0f2ce68236ca], a0, a1.this$, a2);
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
      static PyObject *t_ComplexOrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexOrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexOrdinaryDifferentialEquation_computeDerivatives(t_ComplexOrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_ComplexOrdinaryDifferentialEquation_getDimension(t_ComplexOrdinaryDifferentialEquation *self);
      static PyObject *t_ComplexOrdinaryDifferentialEquation_init(t_ComplexOrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_ComplexOrdinaryDifferentialEquation_get__dimension(t_ComplexOrdinaryDifferentialEquation *self, void *data);
      static PyGetSetDef t_ComplexOrdinaryDifferentialEquation__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexOrdinaryDifferentialEquation, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexOrdinaryDifferentialEquation__methods_[] = {
        DECLARE_METHOD(t_ComplexOrdinaryDifferentialEquation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexOrdinaryDifferentialEquation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexOrdinaryDifferentialEquation, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_ComplexOrdinaryDifferentialEquation, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_ComplexOrdinaryDifferentialEquation, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexOrdinaryDifferentialEquation)[] = {
        { Py_tp_methods, t_ComplexOrdinaryDifferentialEquation__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ComplexOrdinaryDifferentialEquation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexOrdinaryDifferentialEquation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexOrdinaryDifferentialEquation, t_ComplexOrdinaryDifferentialEquation, ComplexOrdinaryDifferentialEquation);

      void t_ComplexOrdinaryDifferentialEquation::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexOrdinaryDifferentialEquation), &PY_TYPE_DEF(ComplexOrdinaryDifferentialEquation), module, "ComplexOrdinaryDifferentialEquation", 0);
      }

      void t_ComplexOrdinaryDifferentialEquation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexOrdinaryDifferentialEquation), "class_", make_descriptor(ComplexOrdinaryDifferentialEquation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexOrdinaryDifferentialEquation), "wrapfn_", make_descriptor(t_ComplexOrdinaryDifferentialEquation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexOrdinaryDifferentialEquation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexOrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexOrdinaryDifferentialEquation::initializeClass, 1)))
          return NULL;
        return t_ComplexOrdinaryDifferentialEquation::wrap_Object(ComplexOrdinaryDifferentialEquation(((t_ComplexOrdinaryDifferentialEquation *) arg)->object.this$));
      }
      static PyObject *t_ComplexOrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexOrdinaryDifferentialEquation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ComplexOrdinaryDifferentialEquation_computeDerivatives(t_ComplexOrdinaryDifferentialEquation *self, PyObject *args)
      {
        jdouble a0;
        JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

        if (!parseArgs(args, "D[k", ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_ComplexOrdinaryDifferentialEquation_getDimension(t_ComplexOrdinaryDifferentialEquation *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ComplexOrdinaryDifferentialEquation_init(t_ComplexOrdinaryDifferentialEquation *self, PyObject *args)
      {
        jdouble a0;
        JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
        jdouble a2;

        if (!parseArgs(args, "D[kD", ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.init(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_ComplexOrdinaryDifferentialEquation_get__dimension(t_ComplexOrdinaryDifferentialEquation *self, void *data)
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
#include "java/util/Enumeration.h"
#include "java/util/Iterator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Enumeration::class$ = NULL;
    jmethodID *Enumeration::mids$ = NULL;
    bool Enumeration::live$ = false;

    jclass Enumeration::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Enumeration");

        mids$ = new jmethodID[max_mid];
        mids$[mid_asIterator_fc7780bc5d5b73b0] = env->getMethodID(cls, "asIterator", "()Ljava/util/Iterator;");
        mids$[mid_hasMoreElements_9ab94ac1dc23b105] = env->getMethodID(cls, "hasMoreElements", "()Z");
        mids$[mid_nextElement_541690f9ee81d3ad] = env->getMethodID(cls, "nextElement", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Iterator Enumeration::asIterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_asIterator_fc7780bc5d5b73b0]));
    }

    jboolean Enumeration::hasMoreElements() const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasMoreElements_9ab94ac1dc23b105]);
    }

    ::java::lang::Object Enumeration::nextElement() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_nextElement_541690f9ee81d3ad]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Enumeration_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Enumeration_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Enumeration_of_(t_Enumeration *self, PyObject *args);
    static PyObject *t_Enumeration_asIterator(t_Enumeration *self);
    static PyObject *t_Enumeration_hasMoreElements(t_Enumeration *self);
    static PyObject *t_Enumeration_nextElement(t_Enumeration *self);
    static PyObject *t_Enumeration_get__parameters_(t_Enumeration *self, void *data);
    static PyGetSetDef t_Enumeration__fields_[] = {
      DECLARE_GET_FIELD(t_Enumeration, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Enumeration__methods_[] = {
      DECLARE_METHOD(t_Enumeration, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Enumeration, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Enumeration, of_, METH_VARARGS),
      DECLARE_METHOD(t_Enumeration, asIterator, METH_NOARGS),
      DECLARE_METHOD(t_Enumeration, hasMoreElements, METH_NOARGS),
      DECLARE_METHOD(t_Enumeration, nextElement, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Enumeration)[] = {
      { Py_tp_methods, t_Enumeration__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Enumeration__fields_ },
      { Py_tp_iter, (void *) PyObject_SelfIter },
      { Py_tp_iternext, (void *) ((PyObject *(*)(::java::util::t_Enumeration *)) get_generic_enumeration_next< ::java::util::t_Enumeration,::java::lang::t_Object >) },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Enumeration)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Enumeration, t_Enumeration, Enumeration);
    PyObject *t_Enumeration::wrap_Object(const Enumeration& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Enumeration::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Enumeration *self = (t_Enumeration *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Enumeration::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Enumeration::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Enumeration *self = (t_Enumeration *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Enumeration::install(PyObject *module)
    {
      installType(&PY_TYPE(Enumeration), &PY_TYPE_DEF(Enumeration), module, "Enumeration", 0);
    }

    void t_Enumeration::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Enumeration), "class_", make_descriptor(Enumeration::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Enumeration), "wrapfn_", make_descriptor(t_Enumeration::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Enumeration), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Enumeration_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Enumeration::initializeClass, 1)))
        return NULL;
      return t_Enumeration::wrap_Object(Enumeration(((t_Enumeration *) arg)->object.this$));
    }
    static PyObject *t_Enumeration_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Enumeration::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Enumeration_of_(t_Enumeration *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Enumeration_asIterator(t_Enumeration *self)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = self->object.asIterator());
      return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Enumeration_hasMoreElements(t_Enumeration *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.hasMoreElements());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Enumeration_nextElement(t_Enumeration *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.nextElement());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }
    static PyObject *t_Enumeration_get__parameters_(t_Enumeration *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/FieldUnivariateInterpolator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *FieldUnivariateInterpolator::class$ = NULL;
        jmethodID *FieldUnivariateInterpolator::mids$ = NULL;
        bool FieldUnivariateInterpolator::live$ = false;

        jclass FieldUnivariateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/FieldUnivariateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_interpolate_337882e3ddeb5bf4] = env->getMethodID(cls, "interpolate", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::CalculusFieldUnivariateFunction FieldUnivariateInterpolator::interpolate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::analysis::CalculusFieldUnivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_337882e3ddeb5bf4], a0.this$, a1.this$));
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
        static PyObject *t_FieldUnivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateInterpolator_interpolate(t_FieldUnivariateInterpolator *self, PyObject *args);

        static PyMethodDef t_FieldUnivariateInterpolator__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateInterpolator)[] = {
          { Py_tp_methods, t_FieldUnivariateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateInterpolator, t_FieldUnivariateInterpolator, FieldUnivariateInterpolator);

        void t_FieldUnivariateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateInterpolator), &PY_TYPE_DEF(FieldUnivariateInterpolator), module, "FieldUnivariateInterpolator", 0);
        }

        void t_FieldUnivariateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateInterpolator), "class_", make_descriptor(FieldUnivariateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateInterpolator), "wrapfn_", make_descriptor(t_FieldUnivariateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateInterpolator::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateInterpolator::wrap_Object(FieldUnivariateInterpolator(((t_FieldUnivariateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateInterpolator_interpolate(t_FieldUnivariateInterpolator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::analysis::CalculusFieldUnivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::wrap_Object(result);
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
#include "org/orekit/rugged/adjustment/measurements/SensorToGroundMapping.h"
#include "java/util/Map$Entry.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {

          ::java::lang::Class *SensorToGroundMapping::class$ = NULL;
          jmethodID *SensorToGroundMapping::mids$ = NULL;
          bool SensorToGroundMapping::live$ = false;

          jclass SensorToGroundMapping::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/measurements/SensorToGroundMapping");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_a627ad9c5959309d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_addMapping_6ae7cef74e9c794b] = env->getMethodID(cls, "addMapping", "(Lorg/orekit/rugged/linesensor/SensorPixel;Lorg/orekit/bodies/GeodeticPoint;)V");
              mids$[mid_getMapping_7e8f11dd23d1142c] = env->getMethodID(cls, "getMapping", "()Ljava/util/Set;");
              mids$[mid_getRuggedName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getRuggedName", "()Ljava/lang/String;");
              mids$[mid_getSensorName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSensorName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SensorToGroundMapping::SensorToGroundMapping(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

          SensorToGroundMapping::SensorToGroundMapping(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a627ad9c5959309d, a0.this$, a1.this$)) {}

          void SensorToGroundMapping::addMapping(const ::org::orekit::rugged::linesensor::SensorPixel & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addMapping_6ae7cef74e9c794b], a0.this$, a1.this$);
          }

          ::java::util::Set SensorToGroundMapping::getMapping() const
          {
            return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getMapping_7e8f11dd23d1142c]));
          }

          ::java::lang::String SensorToGroundMapping::getRuggedName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRuggedName_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String SensorToGroundMapping::getSensorName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorName_1c1fa1e935d6cdcf]));
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
    namespace rugged {
      namespace adjustment {
        namespace measurements {
          static PyObject *t_SensorToGroundMapping_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SensorToGroundMapping_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SensorToGroundMapping_init_(t_SensorToGroundMapping *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SensorToGroundMapping_addMapping(t_SensorToGroundMapping *self, PyObject *args);
          static PyObject *t_SensorToGroundMapping_getMapping(t_SensorToGroundMapping *self);
          static PyObject *t_SensorToGroundMapping_getRuggedName(t_SensorToGroundMapping *self);
          static PyObject *t_SensorToGroundMapping_getSensorName(t_SensorToGroundMapping *self);
          static PyObject *t_SensorToGroundMapping_get__mapping(t_SensorToGroundMapping *self, void *data);
          static PyObject *t_SensorToGroundMapping_get__ruggedName(t_SensorToGroundMapping *self, void *data);
          static PyObject *t_SensorToGroundMapping_get__sensorName(t_SensorToGroundMapping *self, void *data);
          static PyGetSetDef t_SensorToGroundMapping__fields_[] = {
            DECLARE_GET_FIELD(t_SensorToGroundMapping, mapping),
            DECLARE_GET_FIELD(t_SensorToGroundMapping, ruggedName),
            DECLARE_GET_FIELD(t_SensorToGroundMapping, sensorName),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SensorToGroundMapping__methods_[] = {
            DECLARE_METHOD(t_SensorToGroundMapping, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorToGroundMapping, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorToGroundMapping, addMapping, METH_VARARGS),
            DECLARE_METHOD(t_SensorToGroundMapping, getMapping, METH_NOARGS),
            DECLARE_METHOD(t_SensorToGroundMapping, getRuggedName, METH_NOARGS),
            DECLARE_METHOD(t_SensorToGroundMapping, getSensorName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SensorToGroundMapping)[] = {
            { Py_tp_methods, t_SensorToGroundMapping__methods_ },
            { Py_tp_init, (void *) t_SensorToGroundMapping_init_ },
            { Py_tp_getset, t_SensorToGroundMapping__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SensorToGroundMapping)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SensorToGroundMapping, t_SensorToGroundMapping, SensorToGroundMapping);

          void t_SensorToGroundMapping::install(PyObject *module)
          {
            installType(&PY_TYPE(SensorToGroundMapping), &PY_TYPE_DEF(SensorToGroundMapping), module, "SensorToGroundMapping", 0);
          }

          void t_SensorToGroundMapping::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToGroundMapping), "class_", make_descriptor(SensorToGroundMapping::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToGroundMapping), "wrapfn_", make_descriptor(t_SensorToGroundMapping::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToGroundMapping), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SensorToGroundMapping_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SensorToGroundMapping::initializeClass, 1)))
              return NULL;
            return t_SensorToGroundMapping::wrap_Object(SensorToGroundMapping(((t_SensorToGroundMapping *) arg)->object.this$));
          }
          static PyObject *t_SensorToGroundMapping_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SensorToGroundMapping::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SensorToGroundMapping_init_(t_SensorToGroundMapping *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                SensorToGroundMapping object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = SensorToGroundMapping(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                SensorToGroundMapping object((jobject) NULL);

                if (!parseArgs(args, "ss", &a0, &a1))
                {
                  INT_CALL(object = SensorToGroundMapping(a0, a1));
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

          static PyObject *t_SensorToGroundMapping_addMapping(t_SensorToGroundMapping *self, PyObject *args)
          {
            ::org::orekit::rugged::linesensor::SensorPixel a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addMapping(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addMapping", args);
            return NULL;
          }

          static PyObject *t_SensorToGroundMapping_getMapping(t_SensorToGroundMapping *self)
          {
            ::java::util::Set result((jobject) NULL);
            OBJ_CALL(result = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(result);
          }

          static PyObject *t_SensorToGroundMapping_getRuggedName(t_SensorToGroundMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRuggedName());
            return j2p(result);
          }

          static PyObject *t_SensorToGroundMapping_getSensorName(t_SensorToGroundMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSensorName());
            return j2p(result);
          }

          static PyObject *t_SensorToGroundMapping_get__mapping(t_SensorToGroundMapping *self, void *data)
          {
            ::java::util::Set value((jobject) NULL);
            OBJ_CALL(value = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(value);
          }

          static PyObject *t_SensorToGroundMapping_get__ruggedName(t_SensorToGroundMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRuggedName());
            return j2p(value);
          }

          static PyObject *t_SensorToGroundMapping_get__sensorName(t_SensorToGroundMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSensorName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/Geoid.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/models/earth/EarthShape.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/ReferenceEllipsoid.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *Geoid::class$ = NULL;
        jmethodID *Geoid::mids$ = NULL;
        bool Geoid::live$ = false;

        jclass Geoid::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/Geoid");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4a44bc3ed7ac722b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;Lorg/orekit/models/earth/ReferenceEllipsoid;)V");
            mids$[mid_getBodyFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getEllipsoid_aa643af2699b886e] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getIntersectionPoint_66b39d6d84447197] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
            mids$[mid_getIntersectionPoint_f1db6d4c78519d48] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_getUndulation_dab1578b184aa9a9] = env->getMethodID(cls, "getUndulation", "(DDLorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_projectToGround_3cbe213b2c291f18] = env->getMethodID(cls, "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_projectToGround_feded476b8bdfcfc] = env->getMethodID(cls, "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transform_6aa36b82e3b80b58] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_transform_a840d9913a98925f] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transform_93de77ed9854e321] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
            mids$[mid_transform_f67fa82bac3192f0] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Geoid::Geoid(const ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider & a0, const ::org::orekit::models::earth::ReferenceEllipsoid & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4a44bc3ed7ac722b, a0.this$, a1.this$)) {}

        ::org::orekit::frames::Frame Geoid::getBodyFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyFrame_2c51111cc6894ba1]));
        }

        ::org::orekit::models::earth::ReferenceEllipsoid Geoid::getEllipsoid() const
        {
          return ::org::orekit::models::earth::ReferenceEllipsoid(env->callObjectMethod(this$, mids$[mid_getEllipsoid_aa643af2699b886e]));
        }

        ::org::orekit::bodies::FieldGeodeticPoint Geoid::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::FieldLine & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
        {
          return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_66b39d6d84447197], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::bodies::GeodeticPoint Geoid::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::Line & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::AbsoluteDate & a3) const
        {
          return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_f1db6d4c78519d48], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        jdouble Geoid::getUndulation(jdouble a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getUndulation_dab1578b184aa9a9], a0, a1, a2.this$);
        }

        ::org::orekit::utils::TimeStampedPVCoordinates Geoid::projectToGround(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_projectToGround_3cbe213b2c291f18], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Geoid::projectToGround(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToGround_feded476b8bdfcfc], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Geoid::transform(const ::org::orekit::bodies::FieldGeodeticPoint & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transform_6aa36b82e3b80b58], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Geoid::transform(const ::org::orekit::bodies::GeodeticPoint & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transform_a840d9913a98925f], a0.this$));
        }

        ::org::orekit::bodies::FieldGeodeticPoint Geoid::transform(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
        {
          return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_93de77ed9854e321], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::bodies::GeodeticPoint Geoid::transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_f67fa82bac3192f0], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_Geoid_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Geoid_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Geoid_init_(t_Geoid *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Geoid_getBodyFrame(t_Geoid *self);
        static PyObject *t_Geoid_getEllipsoid(t_Geoid *self);
        static PyObject *t_Geoid_getIntersectionPoint(t_Geoid *self, PyObject *args);
        static PyObject *t_Geoid_getUndulation(t_Geoid *self, PyObject *args);
        static PyObject *t_Geoid_projectToGround(t_Geoid *self, PyObject *args);
        static PyObject *t_Geoid_transform(t_Geoid *self, PyObject *args);
        static PyObject *t_Geoid_get__bodyFrame(t_Geoid *self, void *data);
        static PyObject *t_Geoid_get__ellipsoid(t_Geoid *self, void *data);
        static PyGetSetDef t_Geoid__fields_[] = {
          DECLARE_GET_FIELD(t_Geoid, bodyFrame),
          DECLARE_GET_FIELD(t_Geoid, ellipsoid),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Geoid__methods_[] = {
          DECLARE_METHOD(t_Geoid, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Geoid, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Geoid, getBodyFrame, METH_NOARGS),
          DECLARE_METHOD(t_Geoid, getEllipsoid, METH_NOARGS),
          DECLARE_METHOD(t_Geoid, getIntersectionPoint, METH_VARARGS),
          DECLARE_METHOD(t_Geoid, getUndulation, METH_VARARGS),
          DECLARE_METHOD(t_Geoid, projectToGround, METH_VARARGS),
          DECLARE_METHOD(t_Geoid, transform, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Geoid)[] = {
          { Py_tp_methods, t_Geoid__methods_ },
          { Py_tp_init, (void *) t_Geoid_init_ },
          { Py_tp_getset, t_Geoid__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Geoid)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Geoid, t_Geoid, Geoid);

        void t_Geoid::install(PyObject *module)
        {
          installType(&PY_TYPE(Geoid), &PY_TYPE_DEF(Geoid), module, "Geoid", 0);
        }

        void t_Geoid::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Geoid), "class_", make_descriptor(Geoid::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Geoid), "wrapfn_", make_descriptor(t_Geoid::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Geoid), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Geoid_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Geoid::initializeClass, 1)))
            return NULL;
          return t_Geoid::wrap_Object(Geoid(((t_Geoid *) arg)->object.this$));
        }
        static PyObject *t_Geoid_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Geoid::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Geoid_init_(t_Geoid *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider a0((jobject) NULL);
          ::org::orekit::models::earth::ReferenceEllipsoid a1((jobject) NULL);
          Geoid object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::models::earth::ReferenceEllipsoid::initializeClass, &a0, &a1))
          {
            INT_CALL(object = Geoid(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Geoid_getBodyFrame(t_Geoid *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getBodyFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_Geoid_getEllipsoid(t_Geoid *self)
        {
          ::org::orekit::models::earth::ReferenceEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getEllipsoid());
          return ::org::orekit::models::earth::t_ReferenceEllipsoid::wrap_Object(result);
        }

        static PyObject *t_Geoid_getIntersectionPoint(t_Geoid *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::frames::Frame a2((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
              ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.getIntersectionPoint(a0, a1, a2, a3));
                return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldLine a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::frames::Frame a2((jobject) NULL);
              ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "KKkK", ::org::hipparchus::geometry::euclidean::threed::FieldLine::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.getIntersectionPoint(a0, a1, a2, a3));
                return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getIntersectionPoint", args);
          return NULL;
        }

        static PyObject *t_Geoid_getUndulation(t_Geoid *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "DDk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getUndulation(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getUndulation", args);
          return NULL;
        }

        static PyObject *t_Geoid_projectToGround(t_Geoid *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.projectToGround(a0, a1));
                return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::org::orekit::frames::Frame a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.projectToGround(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "projectToGround", args);
          return NULL;
        }

        static PyObject *t_Geoid_transform(t_Geoid *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_))
              {
                OBJ_CALL(result = self->object.transform(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.transform(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.transform(a0, a1, a2));
                return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.transform(a0, a1, a2));
                return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transform", args);
          return NULL;
        }

        static PyObject *t_Geoid_get__bodyFrame(t_Geoid *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getBodyFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_Geoid_get__ellipsoid(t_Geoid *self, void *data)
        {
          ::org::orekit::models::earth::ReferenceEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getEllipsoid());
          return ::org::orekit::models::earth::t_ReferenceEllipsoid::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/FieldPoleCorrection.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FieldPoleCorrection::class$ = NULL;
      jmethodID *FieldPoleCorrection::mids$ = NULL;
      bool FieldPoleCorrection::live$ = false;

      jclass FieldPoleCorrection::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FieldPoleCorrection");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e337ae7145f7989c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getXp_81520b552cb3fa26] = env->getMethodID(cls, "getXp", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getYp_81520b552cb3fa26] = env->getMethodID(cls, "getYp", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldPoleCorrection::FieldPoleCorrection(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e337ae7145f7989c, a0.this$, a1.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldPoleCorrection::getXp() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getXp_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldPoleCorrection::getYp() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getYp_81520b552cb3fa26]));
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
      static PyObject *t_FieldPoleCorrection_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPoleCorrection_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPoleCorrection_of_(t_FieldPoleCorrection *self, PyObject *args);
      static int t_FieldPoleCorrection_init_(t_FieldPoleCorrection *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldPoleCorrection_getXp(t_FieldPoleCorrection *self);
      static PyObject *t_FieldPoleCorrection_getYp(t_FieldPoleCorrection *self);
      static PyObject *t_FieldPoleCorrection_get__xp(t_FieldPoleCorrection *self, void *data);
      static PyObject *t_FieldPoleCorrection_get__yp(t_FieldPoleCorrection *self, void *data);
      static PyObject *t_FieldPoleCorrection_get__parameters_(t_FieldPoleCorrection *self, void *data);
      static PyGetSetDef t_FieldPoleCorrection__fields_[] = {
        DECLARE_GET_FIELD(t_FieldPoleCorrection, xp),
        DECLARE_GET_FIELD(t_FieldPoleCorrection, yp),
        DECLARE_GET_FIELD(t_FieldPoleCorrection, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldPoleCorrection__methods_[] = {
        DECLARE_METHOD(t_FieldPoleCorrection, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPoleCorrection, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPoleCorrection, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldPoleCorrection, getXp, METH_NOARGS),
        DECLARE_METHOD(t_FieldPoleCorrection, getYp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldPoleCorrection)[] = {
        { Py_tp_methods, t_FieldPoleCorrection__methods_ },
        { Py_tp_init, (void *) t_FieldPoleCorrection_init_ },
        { Py_tp_getset, t_FieldPoleCorrection__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldPoleCorrection)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldPoleCorrection, t_FieldPoleCorrection, FieldPoleCorrection);
      PyObject *t_FieldPoleCorrection::wrap_Object(const FieldPoleCorrection& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPoleCorrection::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPoleCorrection *self = (t_FieldPoleCorrection *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldPoleCorrection::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPoleCorrection::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPoleCorrection *self = (t_FieldPoleCorrection *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldPoleCorrection::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldPoleCorrection), &PY_TYPE_DEF(FieldPoleCorrection), module, "FieldPoleCorrection", 0);
      }

      void t_FieldPoleCorrection::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPoleCorrection), "class_", make_descriptor(FieldPoleCorrection::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPoleCorrection), "wrapfn_", make_descriptor(t_FieldPoleCorrection::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPoleCorrection), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldPoleCorrection_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldPoleCorrection::initializeClass, 1)))
          return NULL;
        return t_FieldPoleCorrection::wrap_Object(FieldPoleCorrection(((t_FieldPoleCorrection *) arg)->object.this$));
      }
      static PyObject *t_FieldPoleCorrection_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldPoleCorrection::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldPoleCorrection_of_(t_FieldPoleCorrection *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldPoleCorrection_init_(t_FieldPoleCorrection *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        FieldPoleCorrection object((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldPoleCorrection(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldPoleCorrection_getXp(t_FieldPoleCorrection *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getXp());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldPoleCorrection_getYp(t_FieldPoleCorrection *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getYp());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_FieldPoleCorrection_get__parameters_(t_FieldPoleCorrection *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldPoleCorrection_get__xp(t_FieldPoleCorrection *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getXp());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldPoleCorrection_get__yp(t_FieldPoleCorrection *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getYp());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmMetadataKey::class$ = NULL;
              jmethodID *OmmMetadataKey::mids$ = NULL;
              bool OmmMetadataKey::live$ = false;
              OmmMetadataKey *OmmMetadataKey::MEAN_ELEMENT_THEORY = NULL;

              jclass OmmMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_1aa2624f0f391000] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/omm/OmmMetadata;)Z");
                  mids$[mid_valueOf_606e01385a396a20] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey;");
                  mids$[mid_values_a7eff504fe925ecd] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  MEAN_ELEMENT_THEORY = new OmmMetadataKey(env->getStaticObjectField(cls, "MEAN_ELEMENT_THEORY", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OmmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_1aa2624f0f391000], a0.this$, a1.this$, a2.this$);
              }

              OmmMetadataKey OmmMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OmmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_606e01385a396a20], a0.this$));
              }

              JArray< OmmMetadataKey > OmmMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OmmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_a7eff504fe925ecd]));
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
              static PyObject *t_OmmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmMetadataKey_of_(t_OmmMetadataKey *self, PyObject *args);
              static PyObject *t_OmmMetadataKey_process(t_OmmMetadataKey *self, PyObject *args);
              static PyObject *t_OmmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OmmMetadataKey_values(PyTypeObject *type);
              static PyObject *t_OmmMetadataKey_get__parameters_(t_OmmMetadataKey *self, void *data);
              static PyGetSetDef t_OmmMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_OmmMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmMetadataKey__methods_[] = {
                DECLARE_METHOD(t_OmmMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OmmMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OmmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OmmMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmMetadataKey)[] = {
                { Py_tp_methods, t_OmmMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OmmMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OmmMetadataKey, t_OmmMetadataKey, OmmMetadataKey);
              PyObject *t_OmmMetadataKey::wrap_Object(const OmmMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OmmMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmMetadataKey *self = (t_OmmMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OmmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OmmMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmMetadataKey *self = (t_OmmMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OmmMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmMetadataKey), &PY_TYPE_DEF(OmmMetadataKey), module, "OmmMetadataKey", 0);
              }

              void t_OmmMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadataKey), "class_", make_descriptor(OmmMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadataKey), "wrapfn_", make_descriptor(t_OmmMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OmmMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadataKey), "MEAN_ELEMENT_THEORY", make_descriptor(t_OmmMetadataKey::wrap_Object(*OmmMetadataKey::MEAN_ELEMENT_THEORY)));
              }

              static PyObject *t_OmmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_OmmMetadataKey::wrap_Object(OmmMetadataKey(((t_OmmMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_OmmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OmmMetadataKey_of_(t_OmmMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OmmMetadataKey_process(t_OmmMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OmmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OmmMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadataKey::valueOf(a0));
                  return t_OmmMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OmmMetadataKey_values(PyTypeObject *type)
              {
                JArray< OmmMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_OmmMetadataKey::wrap_jobject);
              }
              static PyObject *t_OmmMetadataKey_get__parameters_(t_OmmMetadataKey *self, void *data)
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
#include "org/hipparchus/analysis/function/Ulp.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Ulp::class$ = NULL;
        jmethodID *Ulp::mids$ = NULL;
        bool Ulp::live$ = false;

        jclass Ulp::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Ulp");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Ulp::Ulp() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Ulp::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
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
        static PyObject *t_Ulp_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Ulp_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Ulp_init_(t_Ulp *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Ulp_value(t_Ulp *self, PyObject *arg);

        static PyMethodDef t_Ulp__methods_[] = {
          DECLARE_METHOD(t_Ulp, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ulp, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ulp, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Ulp)[] = {
          { Py_tp_methods, t_Ulp__methods_ },
          { Py_tp_init, (void *) t_Ulp_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Ulp)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Ulp, t_Ulp, Ulp);

        void t_Ulp::install(PyObject *module)
        {
          installType(&PY_TYPE(Ulp), &PY_TYPE_DEF(Ulp), module, "Ulp", 0);
        }

        void t_Ulp::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ulp), "class_", make_descriptor(Ulp::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ulp), "wrapfn_", make_descriptor(t_Ulp::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ulp), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Ulp_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Ulp::initializeClass, 1)))
            return NULL;
          return t_Ulp::wrap_Object(Ulp(((t_Ulp *) arg)->object.this$));
        }
        static PyObject *t_Ulp_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Ulp::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Ulp_init_(t_Ulp *self, PyObject *args, PyObject *kwds)
        {
          Ulp object((jobject) NULL);

          INT_CALL(object = Ulp());
          self->object = object;

          return 0;
        }

        static PyObject *t_Ulp_value(t_Ulp *self, PyObject *arg)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/LazyLoadedGeoMagneticFields.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *LazyLoadedGeoMagneticFields::class$ = NULL;
        jmethodID *LazyLoadedGeoMagneticFields::mids$ = NULL;
        bool LazyLoadedGeoMagneticFields::live$ = false;

        jclass LazyLoadedGeoMagneticFields::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/LazyLoadedGeoMagneticFields");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_71b020e53c8af149] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataProvidersManager;)V");
            mids$[mid_getField_63411221dee4d2d9] = env->getMethodID(cls, "getField", "(Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getIGRF_0b71ae56f8fa5718] = env->getMethodID(cls, "getIGRF", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getWMM_0b71ae56f8fa5718] = env->getMethodID(cls, "getWMM", "(D)Lorg/orekit/models/earth/GeoMagneticField;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LazyLoadedGeoMagneticFields::LazyLoadedGeoMagneticFields(const ::org::orekit::data::DataProvidersManager & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_71b020e53c8af149, a0.this$)) {}

        ::org::orekit::models::earth::GeoMagneticField LazyLoadedGeoMagneticFields::getField(const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a0, jdouble a1) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getField_63411221dee4d2d9], a0.this$, a1));
        }

        ::org::orekit::models::earth::GeoMagneticField LazyLoadedGeoMagneticFields::getIGRF(jdouble a0) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getIGRF_0b71ae56f8fa5718], a0));
        }

        ::org::orekit::models::earth::GeoMagneticField LazyLoadedGeoMagneticFields::getWMM(jdouble a0) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getWMM_0b71ae56f8fa5718], a0));
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
        static PyObject *t_LazyLoadedGeoMagneticFields_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LazyLoadedGeoMagneticFields_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LazyLoadedGeoMagneticFields_init_(t_LazyLoadedGeoMagneticFields *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LazyLoadedGeoMagneticFields_getField(t_LazyLoadedGeoMagneticFields *self, PyObject *args);
        static PyObject *t_LazyLoadedGeoMagneticFields_getIGRF(t_LazyLoadedGeoMagneticFields *self, PyObject *arg);
        static PyObject *t_LazyLoadedGeoMagneticFields_getWMM(t_LazyLoadedGeoMagneticFields *self, PyObject *arg);

        static PyMethodDef t_LazyLoadedGeoMagneticFields__methods_[] = {
          DECLARE_METHOD(t_LazyLoadedGeoMagneticFields, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LazyLoadedGeoMagneticFields, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LazyLoadedGeoMagneticFields, getField, METH_VARARGS),
          DECLARE_METHOD(t_LazyLoadedGeoMagneticFields, getIGRF, METH_O),
          DECLARE_METHOD(t_LazyLoadedGeoMagneticFields, getWMM, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LazyLoadedGeoMagneticFields)[] = {
          { Py_tp_methods, t_LazyLoadedGeoMagneticFields__methods_ },
          { Py_tp_init, (void *) t_LazyLoadedGeoMagneticFields_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LazyLoadedGeoMagneticFields)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LazyLoadedGeoMagneticFields, t_LazyLoadedGeoMagneticFields, LazyLoadedGeoMagneticFields);

        void t_LazyLoadedGeoMagneticFields::install(PyObject *module)
        {
          installType(&PY_TYPE(LazyLoadedGeoMagneticFields), &PY_TYPE_DEF(LazyLoadedGeoMagneticFields), module, "LazyLoadedGeoMagneticFields", 0);
        }

        void t_LazyLoadedGeoMagneticFields::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGeoMagneticFields), "class_", make_descriptor(LazyLoadedGeoMagneticFields::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGeoMagneticFields), "wrapfn_", make_descriptor(t_LazyLoadedGeoMagneticFields::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGeoMagneticFields), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LazyLoadedGeoMagneticFields_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LazyLoadedGeoMagneticFields::initializeClass, 1)))
            return NULL;
          return t_LazyLoadedGeoMagneticFields::wrap_Object(LazyLoadedGeoMagneticFields(((t_LazyLoadedGeoMagneticFields *) arg)->object.this$));
        }
        static PyObject *t_LazyLoadedGeoMagneticFields_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LazyLoadedGeoMagneticFields::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LazyLoadedGeoMagneticFields_init_(t_LazyLoadedGeoMagneticFields *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::data::DataProvidersManager a0((jobject) NULL);
          LazyLoadedGeoMagneticFields object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::data::DataProvidersManager::initializeClass, &a0))
          {
            INT_CALL(object = LazyLoadedGeoMagneticFields(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LazyLoadedGeoMagneticFields_getField(t_LazyLoadedGeoMagneticFields *self, PyObject *args)
        {
          ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArgs(args, "KD", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, &a0, &p0, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getField(a0, a1));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getField", args);
          return NULL;
        }

        static PyObject *t_LazyLoadedGeoMagneticFields_getIGRF(t_LazyLoadedGeoMagneticFields *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getIGRF(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getIGRF", arg);
          return NULL;
        }

        static PyObject *t_LazyLoadedGeoMagneticFields_getWMM(t_LazyLoadedGeoMagneticFields *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getWMM(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getWMM", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/OrderedComplexEigenDecomposition.h"
#include "java/util/Comparator.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *OrderedComplexEigenDecomposition::class$ = NULL;
      jmethodID *OrderedComplexEigenDecomposition::mids$ = NULL;
      bool OrderedComplexEigenDecomposition::live$ = false;

      jclass OrderedComplexEigenDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/OrderedComplexEigenDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_84bd15e0995d0c79] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_103e61a34f552989] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DDD)V");
          mids$[mid_init$_2b9972fbda2b3825] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DDDLjava/util/Comparator;)V");
          mids$[mid_getVT_81d49643ce3a3c0b] = env->getMethodID(cls, "getVT", "()Lorg/hipparchus/linear/FieldMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrderedComplexEigenDecomposition::OrderedComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::org::hipparchus::linear::ComplexEigenDecomposition(env->newObject(initializeClass, &mids$, mid_init$_84bd15e0995d0c79, a0.this$)) {}

      OrderedComplexEigenDecomposition::OrderedComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::linear::ComplexEigenDecomposition(env->newObject(initializeClass, &mids$, mid_init$_103e61a34f552989, a0.this$, a1, a2, a3)) {}

      OrderedComplexEigenDecomposition::OrderedComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, jdouble a2, jdouble a3, const ::java::util::Comparator & a4) : ::org::hipparchus::linear::ComplexEigenDecomposition(env->newObject(initializeClass, &mids$, mid_init$_2b9972fbda2b3825, a0.this$, a1, a2, a3, a4.this$)) {}

      ::org::hipparchus::linear::FieldMatrix OrderedComplexEigenDecomposition::getVT() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getVT_81d49643ce3a3c0b]));
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
      static PyObject *t_OrderedComplexEigenDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrderedComplexEigenDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrderedComplexEigenDecomposition_init_(t_OrderedComplexEigenDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrderedComplexEigenDecomposition_getVT(t_OrderedComplexEigenDecomposition *self, PyObject *args);
      static PyObject *t_OrderedComplexEigenDecomposition_get__vT(t_OrderedComplexEigenDecomposition *self, void *data);
      static PyGetSetDef t_OrderedComplexEigenDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_OrderedComplexEigenDecomposition, vT),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrderedComplexEigenDecomposition__methods_[] = {
        DECLARE_METHOD(t_OrderedComplexEigenDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrderedComplexEigenDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrderedComplexEigenDecomposition, getVT, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrderedComplexEigenDecomposition)[] = {
        { Py_tp_methods, t_OrderedComplexEigenDecomposition__methods_ },
        { Py_tp_init, (void *) t_OrderedComplexEigenDecomposition_init_ },
        { Py_tp_getset, t_OrderedComplexEigenDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrderedComplexEigenDecomposition)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::ComplexEigenDecomposition),
        NULL
      };

      DEFINE_TYPE(OrderedComplexEigenDecomposition, t_OrderedComplexEigenDecomposition, OrderedComplexEigenDecomposition);

      void t_OrderedComplexEigenDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(OrderedComplexEigenDecomposition), &PY_TYPE_DEF(OrderedComplexEigenDecomposition), module, "OrderedComplexEigenDecomposition", 0);
      }

      void t_OrderedComplexEigenDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrderedComplexEigenDecomposition), "class_", make_descriptor(OrderedComplexEigenDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrderedComplexEigenDecomposition), "wrapfn_", make_descriptor(t_OrderedComplexEigenDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrderedComplexEigenDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrderedComplexEigenDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrderedComplexEigenDecomposition::initializeClass, 1)))
          return NULL;
        return t_OrderedComplexEigenDecomposition::wrap_Object(OrderedComplexEigenDecomposition(((t_OrderedComplexEigenDecomposition *) arg)->object.this$));
      }
      static PyObject *t_OrderedComplexEigenDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrderedComplexEigenDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrderedComplexEigenDecomposition_init_(t_OrderedComplexEigenDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            OrderedComplexEigenDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = OrderedComplexEigenDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            jdouble a3;
            OrderedComplexEigenDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kDDD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = OrderedComplexEigenDecomposition(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            jdouble a3;
            ::java::util::Comparator a4((jobject) NULL);
            PyTypeObject **p4;
            OrderedComplexEigenDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kDDDK", ::org::hipparchus::linear::RealMatrix::initializeClass, ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_Comparator::parameters_))
            {
              INT_CALL(object = OrderedComplexEigenDecomposition(a0, a1, a2, a3, a4));
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

      static PyObject *t_OrderedComplexEigenDecomposition_getVT(t_OrderedComplexEigenDecomposition *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getVT());
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
        }

        return callSuper(PY_TYPE(OrderedComplexEigenDecomposition), (PyObject *) self, "getVT", args, 2);
      }

      static PyObject *t_OrderedComplexEigenDecomposition_get__vT(t_OrderedComplexEigenDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getVT());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            ::java::lang::Class *TleGenerationAlgorithm::class$ = NULL;
            jmethodID *TleGenerationAlgorithm::mids$ = NULL;
            bool TleGenerationAlgorithm::live$ = false;

            jclass TleGenerationAlgorithm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_generate_6e4ccfee7888f727] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
                mids$[mid_generate_7dac79832039ea3a] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLE;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::propagation::analytical::tle::FieldTLE TleGenerationAlgorithm::generate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::FieldTLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::FieldTLE(env->callObjectMethod(this$, mids$[mid_generate_6e4ccfee7888f727], a0.this$, a1.this$));
            }

            ::org::orekit::propagation::analytical::tle::TLE TleGenerationAlgorithm::generate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::TLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_generate_7dac79832039ea3a], a0.this$, a1.this$));
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
            static PyObject *t_TleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TleGenerationAlgorithm_generate(t_TleGenerationAlgorithm *self, PyObject *args);

            static PyMethodDef t_TleGenerationAlgorithm__methods_[] = {
              DECLARE_METHOD(t_TleGenerationAlgorithm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TleGenerationAlgorithm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TleGenerationAlgorithm, generate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TleGenerationAlgorithm)[] = {
              { Py_tp_methods, t_TleGenerationAlgorithm__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TleGenerationAlgorithm)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(TleGenerationAlgorithm, t_TleGenerationAlgorithm, TleGenerationAlgorithm);

            void t_TleGenerationAlgorithm::install(PyObject *module)
            {
              installType(&PY_TYPE(TleGenerationAlgorithm), &PY_TYPE_DEF(TleGenerationAlgorithm), module, "TleGenerationAlgorithm", 0);
            }

            void t_TleGenerationAlgorithm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationAlgorithm), "class_", make_descriptor(TleGenerationAlgorithm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationAlgorithm), "wrapfn_", make_descriptor(t_TleGenerationAlgorithm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationAlgorithm), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_TleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TleGenerationAlgorithm::initializeClass, 1)))
                return NULL;
              return t_TleGenerationAlgorithm::wrap_Object(TleGenerationAlgorithm(((t_TleGenerationAlgorithm *) arg)->object.this$));
            }
            static PyObject *t_TleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TleGenerationAlgorithm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TleGenerationAlgorithm_generate(t_TleGenerationAlgorithm *self, PyObject *args)
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
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldElevationDetector.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "org/orekit/propagation/events/FieldElevationDetector.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/ElevationMask.h"
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
            mids$[mid_init$_c973085a7c4e0fab] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_init$_8f6abd8bda6d7bf0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_g_2203631097e94c79] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getElevationMask_ff9e909fac3867c7] = env->getMethodID(cls, "getElevationMask", "()Lorg/orekit/utils/ElevationMask;");
            mids$[mid_getMinElevation_b74f83833fdad017] = env->getMethodID(cls, "getMinElevation", "()D");
            mids$[mid_getRefractionModel_27f78fdf143ae88f] = env->getMethodID(cls, "getRefractionModel", "()Lorg/orekit/models/AtmosphericRefractionModel;");
            mids$[mid_getTopocentricFrame_c2b113ddceb69262] = env->getMethodID(cls, "getTopocentricFrame", "()Lorg/orekit/frames/TopocentricFrame;");
            mids$[mid_withConstantElevation_fa443b12dce07dda] = env->getMethodID(cls, "withConstantElevation", "(D)Lorg/orekit/propagation/events/FieldElevationDetector;");
            mids$[mid_withElevationMask_4169e22902c46375] = env->getMethodID(cls, "withElevationMask", "(Lorg/orekit/utils/ElevationMask;)Lorg/orekit/propagation/events/FieldElevationDetector;");
            mids$[mid_withRefraction_29e4a87242e1e2b4] = env->getMethodID(cls, "withRefraction", "(Lorg/orekit/models/AtmosphericRefractionModel;)Lorg/orekit/propagation/events/FieldElevationDetector;");
            mids$[mid_create_2e347afec08846f1] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldElevationDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldElevationDetector::FieldElevationDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::frames::TopocentricFrame & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_c973085a7c4e0fab, a0.this$, a1.this$)) {}

        FieldElevationDetector::FieldElevationDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::frames::TopocentricFrame & a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_8f6abd8bda6d7bf0, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldElevationDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_2203631097e94c79], a0.this$));
        }

        ::org::orekit::utils::ElevationMask FieldElevationDetector::getElevationMask() const
        {
          return ::org::orekit::utils::ElevationMask(env->callObjectMethod(this$, mids$[mid_getElevationMask_ff9e909fac3867c7]));
        }

        jdouble FieldElevationDetector::getMinElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinElevation_b74f83833fdad017]);
        }

        ::org::orekit::models::AtmosphericRefractionModel FieldElevationDetector::getRefractionModel() const
        {
          return ::org::orekit::models::AtmosphericRefractionModel(env->callObjectMethod(this$, mids$[mid_getRefractionModel_27f78fdf143ae88f]));
        }

        ::org::orekit::frames::TopocentricFrame FieldElevationDetector::getTopocentricFrame() const
        {
          return ::org::orekit::frames::TopocentricFrame(env->callObjectMethod(this$, mids$[mid_getTopocentricFrame_c2b113ddceb69262]));
        }

        FieldElevationDetector FieldElevationDetector::withConstantElevation(jdouble a0) const
        {
          return FieldElevationDetector(env->callObjectMethod(this$, mids$[mid_withConstantElevation_fa443b12dce07dda], a0));
        }

        FieldElevationDetector FieldElevationDetector::withElevationMask(const ::org::orekit::utils::ElevationMask & a0) const
        {
          return FieldElevationDetector(env->callObjectMethod(this$, mids$[mid_withElevationMask_4169e22902c46375], a0.this$));
        }

        FieldElevationDetector FieldElevationDetector::withRefraction(const ::org::orekit::models::AtmosphericRefractionModel & a0) const
        {
          return FieldElevationDetector(env->callObjectMethod(this$, mids$[mid_withRefraction_29e4a87242e1e2b4], a0.this$));
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
#include "org/hipparchus/util/BigRealField.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/util/BigRealField.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/util/BigReal.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *BigRealField::class$ = NULL;
      jmethodID *BigRealField::mids$ = NULL;
      bool BigRealField::live$ = false;

      jclass BigRealField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/BigRealField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getInstance_ab1f2b526cc00b23] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/util/BigRealField;");
          mids$[mid_getOne_152d3c51a3e6d94d] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/util/BigReal;");
          mids$[mid_getRuntimeClass_1aeb0737a960d371] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_152d3c51a3e6d94d] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/util/BigReal;");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean BigRealField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      BigRealField BigRealField::getInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return BigRealField(env->callStaticObjectMethod(cls, mids$[mid_getInstance_ab1f2b526cc00b23]));
      }

      ::org::hipparchus::util::BigReal BigRealField::getOne() const
      {
        return ::org::hipparchus::util::BigReal(env->callObjectMethod(this$, mids$[mid_getOne_152d3c51a3e6d94d]));
      }

      ::java::lang::Class BigRealField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_1aeb0737a960d371]));
      }

      ::org::hipparchus::util::BigReal BigRealField::getZero() const
      {
        return ::org::hipparchus::util::BigReal(env->callObjectMethod(this$, mids$[mid_getZero_152d3c51a3e6d94d]));
      }

      jint BigRealField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
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
      static PyObject *t_BigRealField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigRealField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigRealField_equals(t_BigRealField *self, PyObject *args);
      static PyObject *t_BigRealField_getInstance(PyTypeObject *type);
      static PyObject *t_BigRealField_getOne(t_BigRealField *self);
      static PyObject *t_BigRealField_getRuntimeClass(t_BigRealField *self);
      static PyObject *t_BigRealField_getZero(t_BigRealField *self);
      static PyObject *t_BigRealField_hashCode(t_BigRealField *self, PyObject *args);
      static PyObject *t_BigRealField_get__instance(t_BigRealField *self, void *data);
      static PyObject *t_BigRealField_get__one(t_BigRealField *self, void *data);
      static PyObject *t_BigRealField_get__runtimeClass(t_BigRealField *self, void *data);
      static PyObject *t_BigRealField_get__zero(t_BigRealField *self, void *data);
      static PyGetSetDef t_BigRealField__fields_[] = {
        DECLARE_GET_FIELD(t_BigRealField, instance),
        DECLARE_GET_FIELD(t_BigRealField, one),
        DECLARE_GET_FIELD(t_BigRealField, runtimeClass),
        DECLARE_GET_FIELD(t_BigRealField, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BigRealField__methods_[] = {
        DECLARE_METHOD(t_BigRealField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigRealField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigRealField, equals, METH_VARARGS),
        DECLARE_METHOD(t_BigRealField, getInstance, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_BigRealField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_BigRealField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_BigRealField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_BigRealField, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigRealField)[] = {
        { Py_tp_methods, t_BigRealField__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BigRealField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigRealField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BigRealField, t_BigRealField, BigRealField);

      void t_BigRealField::install(PyObject *module)
      {
        installType(&PY_TYPE(BigRealField), &PY_TYPE_DEF(BigRealField), module, "BigRealField", 0);
      }

      void t_BigRealField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigRealField), "class_", make_descriptor(BigRealField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigRealField), "wrapfn_", make_descriptor(t_BigRealField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigRealField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BigRealField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigRealField::initializeClass, 1)))
          return NULL;
        return t_BigRealField::wrap_Object(BigRealField(((t_BigRealField *) arg)->object.this$));
      }
      static PyObject *t_BigRealField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigRealField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BigRealField_equals(t_BigRealField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(BigRealField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_BigRealField_getInstance(PyTypeObject *type)
      {
        BigRealField result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::BigRealField::getInstance());
        return t_BigRealField::wrap_Object(result);
      }

      static PyObject *t_BigRealField_getOne(t_BigRealField *self)
      {
        ::org::hipparchus::util::BigReal result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::util::t_BigReal::wrap_Object(result);
      }

      static PyObject *t_BigRealField_getRuntimeClass(t_BigRealField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(BigReal));
      }

      static PyObject *t_BigRealField_getZero(t_BigRealField *self)
      {
        ::org::hipparchus::util::BigReal result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::util::t_BigReal::wrap_Object(result);
      }

      static PyObject *t_BigRealField_hashCode(t_BigRealField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BigRealField), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_BigRealField_get__instance(t_BigRealField *self, void *data)
      {
        BigRealField value((jobject) NULL);
        OBJ_CALL(value = self->object.getInstance());
        return t_BigRealField::wrap_Object(value);
      }

      static PyObject *t_BigRealField_get__one(t_BigRealField *self, void *data)
      {
        ::org::hipparchus::util::BigReal value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::util::t_BigReal::wrap_Object(value);
      }

      static PyObject *t_BigRealField_get__runtimeClass(t_BigRealField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_BigRealField_get__zero(t_BigRealField *self, void *data)
      {
        ::org::hipparchus::util::BigReal value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::util::t_BigReal::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/LibrationOrbitType.h"
#include "org/orekit/orbits/LibrationOrbitType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *LibrationOrbitType::class$ = NULL;
      jmethodID *LibrationOrbitType::mids$ = NULL;
      bool LibrationOrbitType::live$ = false;
      LibrationOrbitType *LibrationOrbitType::HALO = NULL;
      LibrationOrbitType *LibrationOrbitType::LYAPUNOV = NULL;

      jclass LibrationOrbitType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/LibrationOrbitType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_71fc06850e21f261] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/orbits/LibrationOrbitType;");
          mids$[mid_values_452fc104e7e92fdd] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/orbits/LibrationOrbitType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          HALO = new LibrationOrbitType(env->getStaticObjectField(cls, "HALO", "Lorg/orekit/orbits/LibrationOrbitType;"));
          LYAPUNOV = new LibrationOrbitType(env->getStaticObjectField(cls, "LYAPUNOV", "Lorg/orekit/orbits/LibrationOrbitType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LibrationOrbitType LibrationOrbitType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LibrationOrbitType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_71fc06850e21f261], a0.this$));
      }

      JArray< LibrationOrbitType > LibrationOrbitType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LibrationOrbitType >(env->callStaticObjectMethod(cls, mids$[mid_values_452fc104e7e92fdd]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_LibrationOrbitType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbitType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbitType_of_(t_LibrationOrbitType *self, PyObject *args);
      static PyObject *t_LibrationOrbitType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LibrationOrbitType_values(PyTypeObject *type);
      static PyObject *t_LibrationOrbitType_get__parameters_(t_LibrationOrbitType *self, void *data);
      static PyGetSetDef t_LibrationOrbitType__fields_[] = {
        DECLARE_GET_FIELD(t_LibrationOrbitType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LibrationOrbitType__methods_[] = {
        DECLARE_METHOD(t_LibrationOrbitType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitType, of_, METH_VARARGS),
        DECLARE_METHOD(t_LibrationOrbitType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LibrationOrbitType)[] = {
        { Py_tp_methods, t_LibrationOrbitType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LibrationOrbitType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LibrationOrbitType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LibrationOrbitType, t_LibrationOrbitType, LibrationOrbitType);
      PyObject *t_LibrationOrbitType::wrap_Object(const LibrationOrbitType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LibrationOrbitType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LibrationOrbitType *self = (t_LibrationOrbitType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LibrationOrbitType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LibrationOrbitType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LibrationOrbitType *self = (t_LibrationOrbitType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LibrationOrbitType::install(PyObject *module)
      {
        installType(&PY_TYPE(LibrationOrbitType), &PY_TYPE_DEF(LibrationOrbitType), module, "LibrationOrbitType", 0);
      }

      void t_LibrationOrbitType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitType), "class_", make_descriptor(LibrationOrbitType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitType), "wrapfn_", make_descriptor(t_LibrationOrbitType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitType), "boxfn_", make_descriptor(boxObject));
        env->getClass(LibrationOrbitType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitType), "HALO", make_descriptor(t_LibrationOrbitType::wrap_Object(*LibrationOrbitType::HALO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitType), "LYAPUNOV", make_descriptor(t_LibrationOrbitType::wrap_Object(*LibrationOrbitType::LYAPUNOV)));
      }

      static PyObject *t_LibrationOrbitType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LibrationOrbitType::initializeClass, 1)))
          return NULL;
        return t_LibrationOrbitType::wrap_Object(LibrationOrbitType(((t_LibrationOrbitType *) arg)->object.this$));
      }
      static PyObject *t_LibrationOrbitType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LibrationOrbitType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LibrationOrbitType_of_(t_LibrationOrbitType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LibrationOrbitType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LibrationOrbitType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::orbits::LibrationOrbitType::valueOf(a0));
          return t_LibrationOrbitType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LibrationOrbitType_values(PyTypeObject *type)
      {
        JArray< LibrationOrbitType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::orbits::LibrationOrbitType::values());
        return JArray<jobject>(result.this$).wrap(t_LibrationOrbitType::wrap_jobject);
      }
      static PyObject *t_LibrationOrbitType_get__parameters_(t_LibrationOrbitType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/PythonFieldManeuverTriggersResetter.h"
#include "org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonFieldManeuverTriggersResetter::class$ = NULL;
          jmethodID *PythonFieldManeuverTriggersResetter::mids$ = NULL;
          bool PythonFieldManeuverTriggersResetter::live$ = false;

          jclass PythonFieldManeuverTriggersResetter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonFieldManeuverTriggersResetter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_maneuverTriggered_871885b409df9d57] = env->getMethodID(cls, "maneuverTriggered", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_resetState_370b1acde6244b7e] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonFieldManeuverTriggersResetter::PythonFieldManeuverTriggersResetter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonFieldManeuverTriggersResetter::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonFieldManeuverTriggersResetter::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonFieldManeuverTriggersResetter::pythonExtension(jlong a0) const
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
    namespace forces {
      namespace maneuvers {
        namespace trigger {
          static PyObject *t_PythonFieldManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldManeuverTriggersResetter_of_(t_PythonFieldManeuverTriggersResetter *self, PyObject *args);
          static int t_PythonFieldManeuverTriggersResetter_init_(t_PythonFieldManeuverTriggersResetter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonFieldManeuverTriggersResetter_finalize(t_PythonFieldManeuverTriggersResetter *self);
          static PyObject *t_PythonFieldManeuverTriggersResetter_pythonExtension(t_PythonFieldManeuverTriggersResetter *self, PyObject *args);
          static void JNICALL t_PythonFieldManeuverTriggersResetter_maneuverTriggered0(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
          static void JNICALL t_PythonFieldManeuverTriggersResetter_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonFieldManeuverTriggersResetter_resetState2(JNIEnv *jenv, jobject jobj, jobject a0);
          static PyObject *t_PythonFieldManeuverTriggersResetter_get__self(t_PythonFieldManeuverTriggersResetter *self, void *data);
          static PyObject *t_PythonFieldManeuverTriggersResetter_get__parameters_(t_PythonFieldManeuverTriggersResetter *self, void *data);
          static PyGetSetDef t_PythonFieldManeuverTriggersResetter__fields_[] = {
            DECLARE_GET_FIELD(t_PythonFieldManeuverTriggersResetter, self),
            DECLARE_GET_FIELD(t_PythonFieldManeuverTriggersResetter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonFieldManeuverTriggersResetter__methods_[] = {
            DECLARE_METHOD(t_PythonFieldManeuverTriggersResetter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldManeuverTriggersResetter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldManeuverTriggersResetter, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonFieldManeuverTriggersResetter, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonFieldManeuverTriggersResetter, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonFieldManeuverTriggersResetter)[] = {
            { Py_tp_methods, t_PythonFieldManeuverTriggersResetter__methods_ },
            { Py_tp_init, (void *) t_PythonFieldManeuverTriggersResetter_init_ },
            { Py_tp_getset, t_PythonFieldManeuverTriggersResetter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonFieldManeuverTriggersResetter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonFieldManeuverTriggersResetter, t_PythonFieldManeuverTriggersResetter, PythonFieldManeuverTriggersResetter);
          PyObject *t_PythonFieldManeuverTriggersResetter::wrap_Object(const PythonFieldManeuverTriggersResetter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonFieldManeuverTriggersResetter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldManeuverTriggersResetter *self = (t_PythonFieldManeuverTriggersResetter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonFieldManeuverTriggersResetter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonFieldManeuverTriggersResetter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldManeuverTriggersResetter *self = (t_PythonFieldManeuverTriggersResetter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonFieldManeuverTriggersResetter::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonFieldManeuverTriggersResetter), &PY_TYPE_DEF(PythonFieldManeuverTriggersResetter), module, "PythonFieldManeuverTriggersResetter", 1);
          }

          void t_PythonFieldManeuverTriggersResetter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldManeuverTriggersResetter), "class_", make_descriptor(PythonFieldManeuverTriggersResetter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldManeuverTriggersResetter), "wrapfn_", make_descriptor(t_PythonFieldManeuverTriggersResetter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldManeuverTriggersResetter), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonFieldManeuverTriggersResetter::initializeClass);
            JNINativeMethod methods[] = {
              { "maneuverTriggered", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V", (void *) t_PythonFieldManeuverTriggersResetter_maneuverTriggered0 },
              { "pythonDecRef", "()V", (void *) t_PythonFieldManeuverTriggersResetter_pythonDecRef1 },
              { "resetState", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldManeuverTriggersResetter_resetState2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonFieldManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonFieldManeuverTriggersResetter::initializeClass, 1)))
              return NULL;
            return t_PythonFieldManeuverTriggersResetter::wrap_Object(PythonFieldManeuverTriggersResetter(((t_PythonFieldManeuverTriggersResetter *) arg)->object.this$));
          }
          static PyObject *t_PythonFieldManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonFieldManeuverTriggersResetter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonFieldManeuverTriggersResetter_of_(t_PythonFieldManeuverTriggersResetter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonFieldManeuverTriggersResetter_init_(t_PythonFieldManeuverTriggersResetter *self, PyObject *args, PyObject *kwds)
          {
            PythonFieldManeuverTriggersResetter object((jobject) NULL);

            INT_CALL(object = PythonFieldManeuverTriggersResetter());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonFieldManeuverTriggersResetter_finalize(t_PythonFieldManeuverTriggersResetter *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonFieldManeuverTriggersResetter_pythonExtension(t_PythonFieldManeuverTriggersResetter *self, PyObject *args)
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

          static void JNICALL t_PythonFieldManeuverTriggersResetter_maneuverTriggered0(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldManeuverTriggersResetter::mids$[PythonFieldManeuverTriggersResetter::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = (a1 ? Py_True : Py_False);
            PyObject *result = PyObject_CallMethod(obj, "maneuverTriggered", "OO", o0, o1);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonFieldManeuverTriggersResetter_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldManeuverTriggersResetter::mids$[PythonFieldManeuverTriggersResetter::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonFieldManeuverTriggersResetter::mids$[PythonFieldManeuverTriggersResetter::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonFieldManeuverTriggersResetter_resetState2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldManeuverTriggersResetter::mids$[PythonFieldManeuverTriggersResetter::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *result = PyObject_CallMethod(obj, "resetState", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
            {
              throwTypeError("resetState", result);
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

          static PyObject *t_PythonFieldManeuverTriggersResetter_get__self(t_PythonFieldManeuverTriggersResetter *self, void *data)
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
          static PyObject *t_PythonFieldManeuverTriggersResetter_get__parameters_(t_PythonFieldManeuverTriggersResetter *self, void *data)
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
#include "org/hipparchus/ode/nonstiff/GraggBulirschStoerIntegrator.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/ode/ODEState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *GraggBulirschStoerIntegrator::class$ = NULL;
        jmethodID *GraggBulirschStoerIntegrator::mids$ = NULL;
        bool GraggBulirschStoerIntegrator::live$ = false;

        jclass GraggBulirschStoerIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/GraggBulirschStoerIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_aa31b8b89ee72c31] = env->getMethodID(cls, "<init>", "(DD[D[D)V");
            mids$[mid_init$_49f4b5153d696ea5] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_integrate_8cb4bf2a0c64fd92] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_setControlFactors_49f4b5153d696ea5] = env->getMethodID(cls, "setControlFactors", "(DDDD)V");
            mids$[mid_setInterpolationControl_0c3d2833aead47e0] = env->getMethodID(cls, "setInterpolationControl", "(ZI)V");
            mids$[mid_setOrderControl_cdd9dee35d124091] = env->getMethodID(cls, "setOrderControl", "(IDD)V");
            mids$[mid_setStabilityCheck_b80334b524dca5c8] = env->getMethodID(cls, "setStabilityCheck", "(ZIID)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GraggBulirschStoerIntegrator::GraggBulirschStoerIntegrator(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) : ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator(env->newObject(initializeClass, &mids$, mid_init$_aa31b8b89ee72c31, a0, a1, a2.this$, a3.this$)) {}

        GraggBulirschStoerIntegrator::GraggBulirschStoerIntegrator(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator(env->newObject(initializeClass, &mids$, mid_init$_49f4b5153d696ea5, a0, a1, a2, a3)) {}

        ::org::hipparchus::ode::ODEStateAndDerivative GraggBulirschStoerIntegrator::integrate(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_8cb4bf2a0c64fd92], a0.this$, a1.this$, a2));
        }

        void GraggBulirschStoerIntegrator::setControlFactors(jdouble a0, jdouble a1, jdouble a2, jdouble a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setControlFactors_49f4b5153d696ea5], a0, a1, a2, a3);
        }

        void GraggBulirschStoerIntegrator::setInterpolationControl(jboolean a0, jint a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setInterpolationControl_0c3d2833aead47e0], a0, a1);
        }

        void GraggBulirschStoerIntegrator::setOrderControl(jint a0, jdouble a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_setOrderControl_cdd9dee35d124091], a0, a1, a2);
        }

        void GraggBulirschStoerIntegrator::setStabilityCheck(jboolean a0, jint a1, jint a2, jdouble a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setStabilityCheck_b80334b524dca5c8], a0, a1, a2, a3);
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
        static PyObject *t_GraggBulirschStoerIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GraggBulirschStoerIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GraggBulirschStoerIntegrator_init_(t_GraggBulirschStoerIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GraggBulirschStoerIntegrator_integrate(t_GraggBulirschStoerIntegrator *self, PyObject *args);
        static PyObject *t_GraggBulirschStoerIntegrator_setControlFactors(t_GraggBulirschStoerIntegrator *self, PyObject *args);
        static PyObject *t_GraggBulirschStoerIntegrator_setInterpolationControl(t_GraggBulirschStoerIntegrator *self, PyObject *args);
        static PyObject *t_GraggBulirschStoerIntegrator_setOrderControl(t_GraggBulirschStoerIntegrator *self, PyObject *args);
        static PyObject *t_GraggBulirschStoerIntegrator_setStabilityCheck(t_GraggBulirschStoerIntegrator *self, PyObject *args);

        static PyMethodDef t_GraggBulirschStoerIntegrator__methods_[] = {
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, setControlFactors, METH_VARARGS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, setInterpolationControl, METH_VARARGS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, setOrderControl, METH_VARARGS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, setStabilityCheck, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GraggBulirschStoerIntegrator)[] = {
          { Py_tp_methods, t_GraggBulirschStoerIntegrator__methods_ },
          { Py_tp_init, (void *) t_GraggBulirschStoerIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GraggBulirschStoerIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator),
          NULL
        };

        DEFINE_TYPE(GraggBulirschStoerIntegrator, t_GraggBulirschStoerIntegrator, GraggBulirschStoerIntegrator);

        void t_GraggBulirschStoerIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(GraggBulirschStoerIntegrator), &PY_TYPE_DEF(GraggBulirschStoerIntegrator), module, "GraggBulirschStoerIntegrator", 0);
        }

        void t_GraggBulirschStoerIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GraggBulirschStoerIntegrator), "class_", make_descriptor(GraggBulirschStoerIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GraggBulirschStoerIntegrator), "wrapfn_", make_descriptor(t_GraggBulirschStoerIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GraggBulirschStoerIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GraggBulirschStoerIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GraggBulirschStoerIntegrator::initializeClass, 1)))
            return NULL;
          return t_GraggBulirschStoerIntegrator::wrap_Object(GraggBulirschStoerIntegrator(((t_GraggBulirschStoerIntegrator *) arg)->object.this$));
        }
        static PyObject *t_GraggBulirschStoerIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GraggBulirschStoerIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GraggBulirschStoerIntegrator_init_(t_GraggBulirschStoerIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              GraggBulirschStoerIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = GraggBulirschStoerIntegrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              GraggBulirschStoerIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = GraggBulirschStoerIntegrator(a0, a1, a2, a3));
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

        static PyObject *t_GraggBulirschStoerIntegrator_integrate(t_GraggBulirschStoerIntegrator *self, PyObject *args)
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

          return callSuper(PY_TYPE(GraggBulirschStoerIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_GraggBulirschStoerIntegrator_setControlFactors(t_GraggBulirschStoerIntegrator *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;

          if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(self->object.setControlFactors(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setControlFactors", args);
          return NULL;
        }

        static PyObject *t_GraggBulirschStoerIntegrator_setInterpolationControl(t_GraggBulirschStoerIntegrator *self, PyObject *args)
        {
          jboolean a0;
          jint a1;

          if (!parseArgs(args, "ZI", &a0, &a1))
          {
            OBJ_CALL(self->object.setInterpolationControl(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInterpolationControl", args);
          return NULL;
        }

        static PyObject *t_GraggBulirschStoerIntegrator_setOrderControl(t_GraggBulirschStoerIntegrator *self, PyObject *args)
        {
          jint a0;
          jdouble a1;
          jdouble a2;

          if (!parseArgs(args, "IDD", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.setOrderControl(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOrderControl", args);
          return NULL;
        }

        static PyObject *t_GraggBulirschStoerIntegrator_setStabilityCheck(t_GraggBulirschStoerIntegrator *self, PyObject *args)
        {
          jboolean a0;
          jint a1;
          jint a2;
          jdouble a3;

          if (!parseArgs(args, "ZIID", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(self->object.setStabilityCheck(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStabilityCheck", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DelaunayArguments.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DelaunayArguments::class$ = NULL;
      jmethodID *DelaunayArguments::mids$ = NULL;
      bool DelaunayArguments::live$ = false;

      jclass DelaunayArguments::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DelaunayArguments");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9feca7a39f4fa032] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDDDDDDDDDDD)V");
          mids$[mid_getD_b74f83833fdad017] = env->getMethodID(cls, "getD", "()D");
          mids$[mid_getDDot_b74f83833fdad017] = env->getMethodID(cls, "getDDot", "()D");
          mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getF_b74f83833fdad017] = env->getMethodID(cls, "getF", "()D");
          mids$[mid_getFDot_b74f83833fdad017] = env->getMethodID(cls, "getFDot", "()D");
          mids$[mid_getGamma_b74f83833fdad017] = env->getMethodID(cls, "getGamma", "()D");
          mids$[mid_getGammaDot_b74f83833fdad017] = env->getMethodID(cls, "getGammaDot", "()D");
          mids$[mid_getL_b74f83833fdad017] = env->getMethodID(cls, "getL", "()D");
          mids$[mid_getLDot_b74f83833fdad017] = env->getMethodID(cls, "getLDot", "()D");
          mids$[mid_getLPrime_b74f83833fdad017] = env->getMethodID(cls, "getLPrime", "()D");
          mids$[mid_getLPrimeDot_b74f83833fdad017] = env->getMethodID(cls, "getLPrimeDot", "()D");
          mids$[mid_getOmega_b74f83833fdad017] = env->getMethodID(cls, "getOmega", "()D");
          mids$[mid_getOmegaDot_b74f83833fdad017] = env->getMethodID(cls, "getOmegaDot", "()D");
          mids$[mid_getTC_b74f83833fdad017] = env->getMethodID(cls, "getTC", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DelaunayArguments::DelaunayArguments(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9feca7a39f4fa032, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13)) {}

      jdouble DelaunayArguments::getD() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getD_b74f83833fdad017]);
      }

      jdouble DelaunayArguments::getDDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDDot_b74f83833fdad017]);
      }

      ::org::orekit::time::AbsoluteDate DelaunayArguments::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
      }

      jdouble DelaunayArguments::getF() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getF_b74f83833fdad017]);
      }

      jdouble DelaunayArguments::getFDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFDot_b74f83833fdad017]);
      }

      jdouble DelaunayArguments::getGamma() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGamma_b74f83833fdad017]);
      }

      jdouble DelaunayArguments::getGammaDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGammaDot_b74f83833fdad017]);
      }

      jdouble DelaunayArguments::getL() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL_b74f83833fdad017]);
      }

      jdouble DelaunayArguments::getLDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLDot_b74f83833fdad017]);
      }

      jdouble DelaunayArguments::getLPrime() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLPrime_b74f83833fdad017]);
      }

      jdouble DelaunayArguments::getLPrimeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLPrimeDot_b74f83833fdad017]);
      }

      jdouble DelaunayArguments::getOmega() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOmega_b74f83833fdad017]);
      }

      jdouble DelaunayArguments::getOmegaDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOmegaDot_b74f83833fdad017]);
      }

      jdouble DelaunayArguments::getTC() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTC_b74f83833fdad017]);
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
      static PyObject *t_DelaunayArguments_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DelaunayArguments_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DelaunayArguments_init_(t_DelaunayArguments *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DelaunayArguments_getD(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getDDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getDate(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getF(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getFDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getGamma(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getGammaDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getL(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getLDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getLPrime(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getLPrimeDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getOmega(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getOmegaDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getTC(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_get__d(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__dDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__date(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__f(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__fDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__gamma(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__gammaDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__l(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__lDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__lPrime(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__lPrimeDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__omega(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__omegaDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__tC(t_DelaunayArguments *self, void *data);
      static PyGetSetDef t_DelaunayArguments__fields_[] = {
        DECLARE_GET_FIELD(t_DelaunayArguments, d),
        DECLARE_GET_FIELD(t_DelaunayArguments, dDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, date),
        DECLARE_GET_FIELD(t_DelaunayArguments, f),
        DECLARE_GET_FIELD(t_DelaunayArguments, fDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, gamma),
        DECLARE_GET_FIELD(t_DelaunayArguments, gammaDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, l),
        DECLARE_GET_FIELD(t_DelaunayArguments, lDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, lPrime),
        DECLARE_GET_FIELD(t_DelaunayArguments, lPrimeDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, omega),
        DECLARE_GET_FIELD(t_DelaunayArguments, omegaDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, tC),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DelaunayArguments__methods_[] = {
        DECLARE_METHOD(t_DelaunayArguments, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DelaunayArguments, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DelaunayArguments, getD, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getDDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getDate, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getF, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getFDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getGamma, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getGammaDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getL, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getLDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getLPrime, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getLPrimeDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getOmega, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getOmegaDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getTC, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DelaunayArguments)[] = {
        { Py_tp_methods, t_DelaunayArguments__methods_ },
        { Py_tp_init, (void *) t_DelaunayArguments_init_ },
        { Py_tp_getset, t_DelaunayArguments__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DelaunayArguments)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DelaunayArguments, t_DelaunayArguments, DelaunayArguments);

      void t_DelaunayArguments::install(PyObject *module)
      {
        installType(&PY_TYPE(DelaunayArguments), &PY_TYPE_DEF(DelaunayArguments), module, "DelaunayArguments", 0);
      }

      void t_DelaunayArguments::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DelaunayArguments), "class_", make_descriptor(DelaunayArguments::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DelaunayArguments), "wrapfn_", make_descriptor(t_DelaunayArguments::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DelaunayArguments), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DelaunayArguments_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DelaunayArguments::initializeClass, 1)))
          return NULL;
        return t_DelaunayArguments::wrap_Object(DelaunayArguments(((t_DelaunayArguments *) arg)->object.this$));
      }
      static PyObject *t_DelaunayArguments_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DelaunayArguments::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DelaunayArguments_init_(t_DelaunayArguments *self, PyObject *args, PyObject *kwds)
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
        jdouble a9;
        jdouble a10;
        jdouble a11;
        jdouble a12;
        jdouble a13;
        DelaunayArguments object((jobject) NULL);

        if (!parseArgs(args, "kDDDDDDDDDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13))
        {
          INT_CALL(object = DelaunayArguments(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DelaunayArguments_getD(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getD());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getDDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getDate(t_DelaunayArguments *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_DelaunayArguments_getF(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getF());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getFDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getFDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getGamma(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getGamma());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getGammaDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getGammaDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getL(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getL());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getLDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getLPrime(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLPrime());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getLPrimeDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLPrimeDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getOmega(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOmega());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getOmegaDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOmegaDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getTC(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTC());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_get__d(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getD());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__dDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__date(t_DelaunayArguments *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_DelaunayArguments_get__f(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getF());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__fDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__gamma(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getGamma());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__gammaDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getGammaDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__l(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getL());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__lDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__lPrime(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLPrime());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__lPrimeDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLPrimeDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__omega(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOmega());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__omegaDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOmegaDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__tC(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTC());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonFieldAdaptableInterval.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonFieldAdaptableInterval::class$ = NULL;
        jmethodID *PythonFieldAdaptableInterval::mids$ = NULL;
        bool PythonFieldAdaptableInterval::live$ = false;

        jclass PythonFieldAdaptableInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonFieldAdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_currentInterval_262a70fffff568ce] = env->getMethodID(cls, "currentInterval", "(Lorg/orekit/propagation/FieldSpacecraftState;)D");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldAdaptableInterval::PythonFieldAdaptableInterval() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonFieldAdaptableInterval::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonFieldAdaptableInterval::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonFieldAdaptableInterval::pythonExtension(jlong a0) const
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
        static PyObject *t_PythonFieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAdaptableInterval_of_(t_PythonFieldAdaptableInterval *self, PyObject *args);
        static int t_PythonFieldAdaptableInterval_init_(t_PythonFieldAdaptableInterval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldAdaptableInterval_finalize(t_PythonFieldAdaptableInterval *self);
        static PyObject *t_PythonFieldAdaptableInterval_pythonExtension(t_PythonFieldAdaptableInterval *self, PyObject *args);
        static jdouble JNICALL t_PythonFieldAdaptableInterval_currentInterval0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldAdaptableInterval_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldAdaptableInterval_get__self(t_PythonFieldAdaptableInterval *self, void *data);
        static PyObject *t_PythonFieldAdaptableInterval_get__parameters_(t_PythonFieldAdaptableInterval *self, void *data);
        static PyGetSetDef t_PythonFieldAdaptableInterval__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldAdaptableInterval, self),
          DECLARE_GET_FIELD(t_PythonFieldAdaptableInterval, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldAdaptableInterval__methods_[] = {
          DECLARE_METHOD(t_PythonFieldAdaptableInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAdaptableInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAdaptableInterval, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldAdaptableInterval, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldAdaptableInterval, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldAdaptableInterval)[] = {
          { Py_tp_methods, t_PythonFieldAdaptableInterval__methods_ },
          { Py_tp_init, (void *) t_PythonFieldAdaptableInterval_init_ },
          { Py_tp_getset, t_PythonFieldAdaptableInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldAdaptableInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldAdaptableInterval, t_PythonFieldAdaptableInterval, PythonFieldAdaptableInterval);
        PyObject *t_PythonFieldAdaptableInterval::wrap_Object(const PythonFieldAdaptableInterval& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAdaptableInterval::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAdaptableInterval *self = (t_PythonFieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldAdaptableInterval::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAdaptableInterval::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAdaptableInterval *self = (t_PythonFieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldAdaptableInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldAdaptableInterval), &PY_TYPE_DEF(PythonFieldAdaptableInterval), module, "PythonFieldAdaptableInterval", 1);
        }

        void t_PythonFieldAdaptableInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdaptableInterval), "class_", make_descriptor(PythonFieldAdaptableInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdaptableInterval), "wrapfn_", make_descriptor(t_PythonFieldAdaptableInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdaptableInterval), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldAdaptableInterval::initializeClass);
          JNINativeMethod methods[] = {
            { "currentInterval", "(Lorg/orekit/propagation/FieldSpacecraftState;)D", (void *) t_PythonFieldAdaptableInterval_currentInterval0 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldAdaptableInterval_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonFieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldAdaptableInterval::initializeClass, 1)))
            return NULL;
          return t_PythonFieldAdaptableInterval::wrap_Object(PythonFieldAdaptableInterval(((t_PythonFieldAdaptableInterval *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldAdaptableInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldAdaptableInterval_of_(t_PythonFieldAdaptableInterval *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldAdaptableInterval_init_(t_PythonFieldAdaptableInterval *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldAdaptableInterval object((jobject) NULL);

          INT_CALL(object = PythonFieldAdaptableInterval());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldAdaptableInterval_finalize(t_PythonFieldAdaptableInterval *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldAdaptableInterval_pythonExtension(t_PythonFieldAdaptableInterval *self, PyObject *args)
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

        static jdouble JNICALL t_PythonFieldAdaptableInterval_currentInterval0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdaptableInterval::mids$[PythonFieldAdaptableInterval::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
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

        static void JNICALL t_PythonFieldAdaptableInterval_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdaptableInterval::mids$[PythonFieldAdaptableInterval::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldAdaptableInterval::mids$[PythonFieldAdaptableInterval::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldAdaptableInterval_get__self(t_PythonFieldAdaptableInterval *self, void *data)
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
        static PyObject *t_PythonFieldAdaptableInterval_get__parameters_(t_PythonFieldAdaptableInterval *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BracketedRealFieldUnivariateSolver$Interval::class$ = NULL;
        jmethodID *BracketedRealFieldUnivariateSolver$Interval::mids$ = NULL;
        bool BracketedRealFieldUnivariateSolver$Interval::live$ = false;

        jclass BracketedRealFieldUnivariateSolver$Interval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c6084435a35e7162] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getLeftAbscissa_81520b552cb3fa26] = env->getMethodID(cls, "getLeftAbscissa", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getLeftValue_81520b552cb3fa26] = env->getMethodID(cls, "getLeftValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getRightAbscissa_81520b552cb3fa26] = env->getMethodID(cls, "getRightAbscissa", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getRightValue_81520b552cb3fa26] = env->getMethodID(cls, "getRightValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getSide_cb62b191271bd043] = env->getMethodID(cls, "getSide", "(Lorg/hipparchus/analysis/solvers/AllowedSolution;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BracketedRealFieldUnivariateSolver$Interval::BracketedRealFieldUnivariateSolver$Interval(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c6084435a35e7162, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver$Interval::getLeftAbscissa() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLeftAbscissa_81520b552cb3fa26]));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver$Interval::getLeftValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLeftValue_81520b552cb3fa26]));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver$Interval::getRightAbscissa() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightAbscissa_81520b552cb3fa26]));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver$Interval::getRightValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightValue_81520b552cb3fa26]));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver$Interval::getSide(const ::org::hipparchus::analysis::solvers::AllowedSolution & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSide_cb62b191271bd043], a0.this$));
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
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_of_(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *args);
        static int t_BracketedRealFieldUnivariateSolver$Interval_init_(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getLeftAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getLeftValue(t_BracketedRealFieldUnivariateSolver$Interval *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getRightAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getRightValue(t_BracketedRealFieldUnivariateSolver$Interval *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getSide(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *arg);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__leftAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__leftValue(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__rightAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__rightValue(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__parameters_(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data);
        static PyGetSetDef t_BracketedRealFieldUnivariateSolver$Interval__fields_[] = {
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver$Interval, leftAbscissa),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver$Interval, leftValue),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver$Interval, rightAbscissa),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver$Interval, rightValue),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver$Interval, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketedRealFieldUnivariateSolver$Interval__methods_[] = {
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, of_, METH_VARARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, getLeftAbscissa, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, getLeftValue, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, getRightAbscissa, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, getRightValue, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, getSide, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketedRealFieldUnivariateSolver$Interval)[] = {
          { Py_tp_methods, t_BracketedRealFieldUnivariateSolver$Interval__methods_ },
          { Py_tp_init, (void *) t_BracketedRealFieldUnivariateSolver$Interval_init_ },
          { Py_tp_getset, t_BracketedRealFieldUnivariateSolver$Interval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketedRealFieldUnivariateSolver$Interval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BracketedRealFieldUnivariateSolver$Interval, t_BracketedRealFieldUnivariateSolver$Interval, BracketedRealFieldUnivariateSolver$Interval);
        PyObject *t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(const BracketedRealFieldUnivariateSolver$Interval& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedRealFieldUnivariateSolver$Interval *self = (t_BracketedRealFieldUnivariateSolver$Interval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BracketedRealFieldUnivariateSolver$Interval::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedRealFieldUnivariateSolver$Interval::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedRealFieldUnivariateSolver$Interval *self = (t_BracketedRealFieldUnivariateSolver$Interval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BracketedRealFieldUnivariateSolver$Interval::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketedRealFieldUnivariateSolver$Interval), &PY_TYPE_DEF(BracketedRealFieldUnivariateSolver$Interval), module, "BracketedRealFieldUnivariateSolver$Interval", 0);
        }

        void t_BracketedRealFieldUnivariateSolver$Interval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver$Interval), "class_", make_descriptor(BracketedRealFieldUnivariateSolver$Interval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver$Interval), "wrapfn_", make_descriptor(t_BracketedRealFieldUnivariateSolver$Interval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver$Interval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketedRealFieldUnivariateSolver$Interval::initializeClass, 1)))
            return NULL;
          return t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(BracketedRealFieldUnivariateSolver$Interval(((t_BracketedRealFieldUnivariateSolver$Interval *) arg)->object.this$));
        }
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketedRealFieldUnivariateSolver$Interval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_of_(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BracketedRealFieldUnivariateSolver$Interval_init_(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          BracketedRealFieldUnivariateSolver$Interval object((jobject) NULL);

          if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = BracketedRealFieldUnivariateSolver$Interval(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getLeftAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getLeftAbscissa());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getLeftValue(t_BracketedRealFieldUnivariateSolver$Interval *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getLeftValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getRightAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getRightAbscissa());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getRightValue(t_BracketedRealFieldUnivariateSolver$Interval *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getRightValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getSide(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::solvers::AllowedSolution a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &p0, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
          {
            OBJ_CALL(result = self->object.getSide(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getSide", arg);
          return NULL;
        }
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__parameters_(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__leftAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getLeftAbscissa());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__leftValue(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getLeftValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__rightAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getRightAbscissa());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__rightValue(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getRightValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader$LineParameters.h"
#include "org/orekit/time/DateComponents.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *MarshallSolarActivityFutureEstimationLoader$LineParameters::class$ = NULL;
            jmethodID *MarshallSolarActivityFutureEstimationLoader$LineParameters::mids$ = NULL;
            bool MarshallSolarActivityFutureEstimationLoader$LineParameters::live$ = false;

            jclass MarshallSolarActivityFutureEstimationLoader$LineParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader$LineParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_compareTo_73ef5c88fa79f2d9] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters;)I");
                mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
                mids$[mid_getAp_b74f83833fdad017] = env->getMethodID(cls, "getAp", "()D");
                mids$[mid_getF107_b74f83833fdad017] = env->getMethodID(cls, "getF107", "()D");
                mids$[mid_getFileDate_357436921b6db81c] = env->getMethodID(cls, "getFileDate", "()Lorg/orekit/time/DateComponents;");
                mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jint MarshallSolarActivityFutureEstimationLoader$LineParameters::compareTo(const ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters & a0) const
            {
              return env->callIntMethod(this$, mids$[mid_compareTo_73ef5c88fa79f2d9], a0.this$);
            }

            jboolean MarshallSolarActivityFutureEstimationLoader$LineParameters::equals(const ::java::lang::Object & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
            }

            jdouble MarshallSolarActivityFutureEstimationLoader$LineParameters::getAp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAp_b74f83833fdad017]);
            }

            jdouble MarshallSolarActivityFutureEstimationLoader$LineParameters::getF107() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF107_b74f83833fdad017]);
            }

            ::org::orekit::time::DateComponents MarshallSolarActivityFutureEstimationLoader$LineParameters::getFileDate() const
            {
              return ::org::orekit::time::DateComponents(env->callObjectMethod(this$, mids$[mid_getFileDate_357436921b6db81c]));
            }

            jint MarshallSolarActivityFutureEstimationLoader$LineParameters::hashCode() const
            {
              return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
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
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_of_(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_compareTo(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_equals(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_getAp(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_getF107(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_getFileDate(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_hashCode(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__ap(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__f107(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__fileDate(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__parameters_(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data);
            static PyGetSetDef t_MarshallSolarActivityFutureEstimationLoader$LineParameters__fields_[] = {
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, ap),
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, f107),
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, fileDate),
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MarshallSolarActivityFutureEstimationLoader$LineParameters__methods_[] = {
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, of_, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, compareTo, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, equals, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, getAp, METH_NOARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, getF107, METH_NOARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, getFileDate, METH_NOARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, hashCode, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MarshallSolarActivityFutureEstimationLoader$LineParameters)[] = {
              { Py_tp_methods, t_MarshallSolarActivityFutureEstimationLoader$LineParameters__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_MarshallSolarActivityFutureEstimationLoader$LineParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MarshallSolarActivityFutureEstimationLoader$LineParameters)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters),
              NULL
            };

            DEFINE_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters, t_MarshallSolarActivityFutureEstimationLoader$LineParameters, MarshallSolarActivityFutureEstimationLoader$LineParameters);
            PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters::wrap_Object(const MarshallSolarActivityFutureEstimationLoader$LineParameters& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimationLoader$LineParameters::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self = (t_MarshallSolarActivityFutureEstimationLoader$LineParameters *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimationLoader$LineParameters::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self = (t_MarshallSolarActivityFutureEstimationLoader$LineParameters *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_MarshallSolarActivityFutureEstimationLoader$LineParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), &PY_TYPE_DEF(MarshallSolarActivityFutureEstimationLoader$LineParameters), module, "MarshallSolarActivityFutureEstimationLoader$LineParameters", 0);
            }

            void t_MarshallSolarActivityFutureEstimationLoader$LineParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), "class_", make_descriptor(MarshallSolarActivityFutureEstimationLoader$LineParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), "wrapfn_", make_descriptor(t_MarshallSolarActivityFutureEstimationLoader$LineParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MarshallSolarActivityFutureEstimationLoader$LineParameters::initializeClass, 1)))
                return NULL;
              return t_MarshallSolarActivityFutureEstimationLoader$LineParameters::wrap_Object(MarshallSolarActivityFutureEstimationLoader$LineParameters(((t_MarshallSolarActivityFutureEstimationLoader$LineParameters *) arg)->object.this$));
            }
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MarshallSolarActivityFutureEstimationLoader$LineParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_of_(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_compareTo(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args)
            {
              ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters a0((jobject) NULL);
              PyTypeObject **p0;
              jint result;

              if (!parseArgs(args, "K", ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters::initializeClass, &a0, &p0, ::org::orekit::models::earth::atmosphere::data::t_AbstractSolarActivityDataLoader$LineParameters::parameters_))
              {
                OBJ_CALL(result = self->object.compareTo(a0));
                return PyLong_FromLong((long) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), (PyObject *) self, "compareTo", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_equals(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args)
            {
              ::java::lang::Object a0((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "o", &a0))
              {
                OBJ_CALL(result = self->object.equals(a0));
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), (PyObject *) self, "equals", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_getAp(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_getF107(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getF107());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_getFileDate(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self)
            {
              ::org::orekit::time::DateComponents result((jobject) NULL);
              OBJ_CALL(result = self->object.getFileDate());
              return ::org::orekit::time::t_DateComponents::wrap_Object(result);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_hashCode(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args)
            {
              jint result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.hashCode());
                return PyLong_FromLong((long) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), (PyObject *) self, "hashCode", args, 2);
            }
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__parameters_(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__ap(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAp());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__f107(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getF107());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__fileDate(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data)
            {
              ::org::orekit::time::DateComponents value((jobject) NULL);
              OBJ_CALL(value = self->object.getFileDate());
              return ::org::orekit::time::t_DateComponents::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/EvaluationRmsChecker.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *EvaluationRmsChecker::class$ = NULL;
            jmethodID *EvaluationRmsChecker::mids$ = NULL;
            bool EvaluationRmsChecker::live$ = false;

            jclass EvaluationRmsChecker::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/EvaluationRmsChecker");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
                mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
                mids$[mid_converged_f1442df915756c9e] = env->getMethodID(cls, "converged", "(ILorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            EvaluationRmsChecker::EvaluationRmsChecker(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

            EvaluationRmsChecker::EvaluationRmsChecker(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

            jboolean EvaluationRmsChecker::converged(jint a0, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a1, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_converged_f1442df915756c9e], a0, a1.this$, a2.this$);
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
            static PyObject *t_EvaluationRmsChecker_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_EvaluationRmsChecker_instance_(PyTypeObject *type, PyObject *arg);
            static int t_EvaluationRmsChecker_init_(t_EvaluationRmsChecker *self, PyObject *args, PyObject *kwds);
            static PyObject *t_EvaluationRmsChecker_converged(t_EvaluationRmsChecker *self, PyObject *args);

            static PyMethodDef t_EvaluationRmsChecker__methods_[] = {
              DECLARE_METHOD(t_EvaluationRmsChecker, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_EvaluationRmsChecker, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_EvaluationRmsChecker, converged, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(EvaluationRmsChecker)[] = {
              { Py_tp_methods, t_EvaluationRmsChecker__methods_ },
              { Py_tp_init, (void *) t_EvaluationRmsChecker_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(EvaluationRmsChecker)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(EvaluationRmsChecker, t_EvaluationRmsChecker, EvaluationRmsChecker);

            void t_EvaluationRmsChecker::install(PyObject *module)
            {
              installType(&PY_TYPE(EvaluationRmsChecker), &PY_TYPE_DEF(EvaluationRmsChecker), module, "EvaluationRmsChecker", 0);
            }

            void t_EvaluationRmsChecker::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(EvaluationRmsChecker), "class_", make_descriptor(EvaluationRmsChecker::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(EvaluationRmsChecker), "wrapfn_", make_descriptor(t_EvaluationRmsChecker::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(EvaluationRmsChecker), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_EvaluationRmsChecker_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, EvaluationRmsChecker::initializeClass, 1)))
                return NULL;
              return t_EvaluationRmsChecker::wrap_Object(EvaluationRmsChecker(((t_EvaluationRmsChecker *) arg)->object.this$));
            }
            static PyObject *t_EvaluationRmsChecker_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, EvaluationRmsChecker::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_EvaluationRmsChecker_init_(t_EvaluationRmsChecker *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  jdouble a0;
                  EvaluationRmsChecker object((jobject) NULL);

                  if (!parseArgs(args, "D", &a0))
                  {
                    INT_CALL(object = EvaluationRmsChecker(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  jdouble a0;
                  jdouble a1;
                  EvaluationRmsChecker object((jobject) NULL);

                  if (!parseArgs(args, "DD", &a0, &a1))
                  {
                    INT_CALL(object = EvaluationRmsChecker(a0, a1));
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

            static PyObject *t_EvaluationRmsChecker_converged(t_EvaluationRmsChecker *self, PyObject *args)
            {
              jint a0;
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation a1((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "Ikk", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation::initializeClass, ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.converged(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "converged", args);
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
#include "org/orekit/rugged/errors/DumpManager.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/orekit/rugged/raster/Tile.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/linesensor/SensorMeanPlaneCrossing.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/frames/Transform.h"
#include "java/io/File.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "java/lang/Boolean.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/rugged/utils/SpacecraftToObservedBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *DumpManager::class$ = NULL;
        jmethodID *DumpManager::mids$ = NULL;
        bool DumpManager::live$ = false;

        jclass DumpManager::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/DumpManager");

            mids$ = new jmethodID[max_mid];
            mids$[mid_activate_7e1d51614d5d6a43] = env->getStaticMethodID(cls, "activate", "(Ljava/io/File;)V");
            mids$[mid_deactivate_a1fa5dae97ea5ed2] = env->getStaticMethodID(cls, "deactivate", "()V");
            mids$[mid_dumpAlgorithm_8b1167f41ac4ce3c] = env->getStaticMethodID(cls, "dumpAlgorithm", "(Lorg/orekit/rugged/api/AlgorithmId;)V");
            mids$[mid_dumpAlgorithm_ab51bbc09b28ea88] = env->getStaticMethodID(cls, "dumpAlgorithm", "(Lorg/orekit/rugged/api/AlgorithmId;D)V");
            mids$[mid_dumpDirectLocation_e523f1929c3efad0] = env->getStaticMethodID(cls, "dumpDirectLocation", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;ZZZ)V");
            mids$[mid_dumpDirectLocationResult_4515bd5fa75778ac] = env->getStaticMethodID(cls, "dumpDirectLocationResult", "(Lorg/orekit/bodies/GeodeticPoint;)V");
            mids$[mid_dumpEllipsoid_035235491296adca] = env->getStaticMethodID(cls, "dumpEllipsoid", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;)V");
            mids$[mid_dumpInverseLocation_17488db61991a7ac] = env->getStaticMethodID(cls, "dumpInverseLocation", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/rugged/utils/ExtendedEllipsoid;IIZZZ)V");
            mids$[mid_dumpInverseLocationResult_adfd45e8c3ea1507] = env->getStaticMethodID(cls, "dumpInverseLocationResult", "(Lorg/orekit/rugged/linesensor/SensorPixel;)V");
            mids$[mid_dumpSensorDatation_ecb00474cdf7cdff] = env->getStaticMethodID(cls, "dumpSensorDatation", "(Lorg/orekit/rugged/linesensor/LineSensor;DLorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_dumpSensorLOS_ae8482ec24eee2cc] = env->getStaticMethodID(cls, "dumpSensorLOS", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/time/AbsoluteDate;ILorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_dumpSensorMeanPlane_8124db4aebed32fc] = env->getStaticMethodID(cls, "dumpSensorMeanPlane", "(Lorg/orekit/rugged/linesensor/SensorMeanPlaneCrossing;)V");
            mids$[mid_dumpSensorRate_ee79a3ff95b4595f] = env->getStaticMethodID(cls, "dumpSensorRate", "(Lorg/orekit/rugged/linesensor/LineSensor;DD)V");
            mids$[mid_dumpTileCell_70369aea716d047a] = env->getStaticMethodID(cls, "dumpTileCell", "(Lorg/orekit/rugged/raster/Tile;IID)V");
            mids$[mid_dumpTransform_67d08d7069a2753f] = env->getStaticMethodID(cls, "dumpTransform", "(Lorg/orekit/rugged/utils/SpacecraftToObservedBody;ILorg/orekit/frames/Transform;Lorg/orekit/frames/Transform;)V");
            mids$[mid_endNicely_a1fa5dae97ea5ed2] = env->getStaticMethodID(cls, "endNicely", "()V");
            mids$[mid_isActive_9ab94ac1dc23b105] = env->getStaticMethodID(cls, "isActive", "()Z");
            mids$[mid_resume_55ba007fb2374d45] = env->getStaticMethodID(cls, "resume", "(Ljava/lang/Boolean;)V");
            mids$[mid_suspend_34d396f05e4572d8] = env->getStaticMethodID(cls, "suspend", "()Ljava/lang/Boolean;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void DumpManager::activate(const ::java::io::File & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_activate_7e1d51614d5d6a43], a0.this$);
        }

        void DumpManager::deactivate()
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_deactivate_a1fa5dae97ea5ed2]);
        }

        void DumpManager::dumpAlgorithm(const ::org::orekit::rugged::api::AlgorithmId & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpAlgorithm_8b1167f41ac4ce3c], a0.this$);
        }

        void DumpManager::dumpAlgorithm(const ::org::orekit::rugged::api::AlgorithmId & a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpAlgorithm_ab51bbc09b28ea88], a0.this$, a1);
        }

        void DumpManager::dumpDirectLocation(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jboolean a3, jboolean a4, jboolean a5)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpDirectLocation_e523f1929c3efad0], a0.this$, a1.this$, a2.this$, a3, a4, a5);
        }

        void DumpManager::dumpDirectLocationResult(const ::org::orekit::bodies::GeodeticPoint & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpDirectLocationResult_4515bd5fa75778ac], a0.this$);
        }

        void DumpManager::dumpEllipsoid(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpEllipsoid_035235491296adca], a0.this$);
        }

        void DumpManager::dumpInverseLocation(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::rugged::utils::ExtendedEllipsoid & a2, jint a3, jint a4, jboolean a5, jboolean a6, jboolean a7)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpInverseLocation_17488db61991a7ac], a0.this$, a1.this$, a2.this$, a3, a4, a5, a6, a7);
        }

        void DumpManager::dumpInverseLocationResult(const ::org::orekit::rugged::linesensor::SensorPixel & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpInverseLocationResult_adfd45e8c3ea1507], a0.this$);
        }

        void DumpManager::dumpSensorDatation(const ::org::orekit::rugged::linesensor::LineSensor & a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpSensorDatation_ecb00474cdf7cdff], a0.this$, a1, a2.this$);
        }

        void DumpManager::dumpSensorLOS(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpSensorLOS_ae8482ec24eee2cc], a0.this$, a1.this$, a2, a3.this$);
        }

        void DumpManager::dumpSensorMeanPlane(const ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpSensorMeanPlane_8124db4aebed32fc], a0.this$);
        }

        void DumpManager::dumpSensorRate(const ::org::orekit::rugged::linesensor::LineSensor & a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpSensorRate_ee79a3ff95b4595f], a0.this$, a1, a2);
        }

        void DumpManager::dumpTileCell(const ::org::orekit::rugged::raster::Tile & a0, jint a1, jint a2, jdouble a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpTileCell_70369aea716d047a], a0.this$, a1, a2, a3);
        }

        void DumpManager::dumpTransform(const ::org::orekit::rugged::utils::SpacecraftToObservedBody & a0, jint a1, const ::org::orekit::frames::Transform & a2, const ::org::orekit::frames::Transform & a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpTransform_67d08d7069a2753f], a0.this$, a1, a2.this$, a3.this$);
        }

        void DumpManager::endNicely()
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_endNicely_a1fa5dae97ea5ed2]);
        }

        jboolean DumpManager::isActive()
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_isActive_9ab94ac1dc23b105]);
        }

        void DumpManager::resume(const ::java::lang::Boolean & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_resume_55ba007fb2374d45], a0.this$);
        }

        ::java::lang::Boolean DumpManager::suspend()
        {
          jclass cls = env->getClass(initializeClass);
          return ::java::lang::Boolean(env->callStaticObjectMethod(cls, mids$[mid_suspend_34d396f05e4572d8]));
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
      namespace errors {
        static PyObject *t_DumpManager_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_activate(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_deactivate(PyTypeObject *type);
        static PyObject *t_DumpManager_dumpAlgorithm(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpDirectLocation(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpDirectLocationResult(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_dumpEllipsoid(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_dumpInverseLocation(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpInverseLocationResult(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_dumpSensorDatation(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpSensorLOS(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpSensorMeanPlane(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_dumpSensorRate(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpTileCell(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpTransform(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_endNicely(PyTypeObject *type);
        static PyObject *t_DumpManager_isActive(PyTypeObject *type);
        static PyObject *t_DumpManager_resume(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_suspend(PyTypeObject *type);
        static PyObject *t_DumpManager_get__active(t_DumpManager *self, void *data);
        static PyGetSetDef t_DumpManager__fields_[] = {
          DECLARE_GET_FIELD(t_DumpManager, active),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DumpManager__methods_[] = {
          DECLARE_METHOD(t_DumpManager, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, activate, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, deactivate, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpAlgorithm, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpDirectLocation, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpDirectLocationResult, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpEllipsoid, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpInverseLocation, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpInverseLocationResult, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpSensorDatation, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpSensorLOS, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpSensorMeanPlane, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpSensorRate, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpTileCell, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpTransform, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, endNicely, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, isActive, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, resume, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, suspend, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DumpManager)[] = {
          { Py_tp_methods, t_DumpManager__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DumpManager__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DumpManager)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DumpManager, t_DumpManager, DumpManager);

        void t_DumpManager::install(PyObject *module)
        {
          installType(&PY_TYPE(DumpManager), &PY_TYPE_DEF(DumpManager), module, "DumpManager", 0);
        }

        void t_DumpManager::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpManager), "class_", make_descriptor(DumpManager::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpManager), "wrapfn_", make_descriptor(t_DumpManager::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpManager), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DumpManager_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DumpManager::initializeClass, 1)))
            return NULL;
          return t_DumpManager::wrap_Object(DumpManager(((t_DumpManager *) arg)->object.this$));
        }
        static PyObject *t_DumpManager_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DumpManager::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DumpManager_activate(PyTypeObject *type, PyObject *arg)
        {
          ::java::io::File a0((jobject) NULL);

          if (!parseArg(arg, "k", ::java::io::File::initializeClass, &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::activate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "activate", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_deactivate(PyTypeObject *type)
        {
          OBJ_CALL(::org::orekit::rugged::errors::DumpManager::deactivate());
          Py_RETURN_NONE;
        }

        static PyObject *t_DumpManager_dumpAlgorithm(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::rugged::api::AlgorithmId a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::rugged::api::AlgorithmId::initializeClass, &a0, &p0, ::org::orekit::rugged::api::t_AlgorithmId::parameters_))
              {
                OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpAlgorithm(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              ::org::orekit::rugged::api::AlgorithmId a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;

              if (!parseArgs(args, "KD", ::org::orekit::rugged::api::AlgorithmId::initializeClass, &a0, &p0, ::org::orekit::rugged::api::t_AlgorithmId::parameters_, &a1))
              {
                OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpAlgorithm(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError(type, "dumpAlgorithm", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpDirectLocation(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          jboolean a3;
          jboolean a4;
          jboolean a5;

          if (!parseArgs(args, "kkkZZZ", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpDirectLocation(a0, a1, a2, a3, a4, a5));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpDirectLocation", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpDirectLocationResult(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpDirectLocationResult(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpDirectLocationResult", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpEllipsoid(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpEllipsoid(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpEllipsoid", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpInverseLocation(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
          ::org::orekit::rugged::utils::ExtendedEllipsoid a2((jobject) NULL);
          jint a3;
          jint a4;
          jboolean a5;
          jboolean a6;
          jboolean a7;

          if (!parseArgs(args, "kkkIIZZZ", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpInverseLocation(a0, a1, a2, a3, a4, a5, a6, a7));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpInverseLocation", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpInverseLocationResult(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::rugged::linesensor::SensorPixel a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpInverseLocationResult(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpInverseLocationResult", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpSensorDatation(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);

          if (!parseArgs(args, "kDk", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpSensorDatation(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpSensorDatation", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpSensorLOS(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jint a2;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);

          if (!parseArgs(args, "kkIk", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpSensorLOS(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpSensorLOS", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpSensorMeanPlane(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing::initializeClass, &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpSensorMeanPlane(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpSensorMeanPlane", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpSensorRate(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          jdouble a1;
          jdouble a2;

          if (!parseArgs(args, "kDD", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpSensorRate(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpSensorRate", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpTileCell(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::raster::Tile a0((jobject) NULL);
          jint a1;
          jint a2;
          jdouble a3;

          if (!parseArgs(args, "kIID", ::org::orekit::rugged::raster::Tile::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpTileCell(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpTileCell", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpTransform(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::utils::SpacecraftToObservedBody a0((jobject) NULL);
          jint a1;
          ::org::orekit::frames::Transform a2((jobject) NULL);
          ::org::orekit::frames::Transform a3((jobject) NULL);

          if (!parseArgs(args, "kIkk", ::org::orekit::rugged::utils::SpacecraftToObservedBody::initializeClass, ::org::orekit::frames::Transform::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpTransform(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpTransform", args);
          return NULL;
        }

        static PyObject *t_DumpManager_endNicely(PyTypeObject *type)
        {
          OBJ_CALL(::org::orekit::rugged::errors::DumpManager::endNicely());
          Py_RETURN_NONE;
        }

        static PyObject *t_DumpManager_isActive(PyTypeObject *type)
        {
          jboolean result;
          OBJ_CALL(result = ::org::orekit::rugged::errors::DumpManager::isActive());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_DumpManager_resume(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::Boolean a0((jobject) NULL);

          if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Boolean), &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::resume(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "resume", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_suspend(PyTypeObject *type)
        {
          ::java::lang::Boolean result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::errors::DumpManager::suspend());
          return ::java::lang::t_Boolean::wrap_Object(result);
        }

        static PyObject *t_DumpManager_get__active(t_DumpManager *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isActive());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/empirical/PolynomialAccelerationModel.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "java/util/List.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        ::java::lang::Class *PolynomialAccelerationModel::class$ = NULL;
        jmethodID *PolynomialAccelerationModel::mids$ = NULL;
        bool PolynomialAccelerationModel::live$ = false;

        jclass PolynomialAccelerationModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/empirical/PolynomialAccelerationModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a43cec9943fac0a4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;I)V");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_signedAmplitude_f867476668f8eb00] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_signedAmplitude_8e86371c61460f23] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/SpacecraftState;[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialAccelerationModel::PolynomialAccelerationModel(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a43cec9943fac0a4, a0.this$, a1.this$, a2)) {}

        ::java::util::List PolynomialAccelerationModel::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
        }

        void PolynomialAccelerationModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
        }

        ::org::hipparchus::CalculusFieldElement PolynomialAccelerationModel::signedAmplitude(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_signedAmplitude_f867476668f8eb00], a0.this$, a1.this$));
        }

        jdouble PolynomialAccelerationModel::signedAmplitude(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_signedAmplitude_8e86371c61460f23], a0.this$, a1.this$);
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
        static PyObject *t_PolynomialAccelerationModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialAccelerationModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialAccelerationModel_init_(t_PolynomialAccelerationModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialAccelerationModel_getParametersDrivers(t_PolynomialAccelerationModel *self);
        static PyObject *t_PolynomialAccelerationModel_init(t_PolynomialAccelerationModel *self, PyObject *args);
        static PyObject *t_PolynomialAccelerationModel_signedAmplitude(t_PolynomialAccelerationModel *self, PyObject *args);
        static PyObject *t_PolynomialAccelerationModel_get__parametersDrivers(t_PolynomialAccelerationModel *self, void *data);
        static PyGetSetDef t_PolynomialAccelerationModel__fields_[] = {
          DECLARE_GET_FIELD(t_PolynomialAccelerationModel, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolynomialAccelerationModel__methods_[] = {
          DECLARE_METHOD(t_PolynomialAccelerationModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialAccelerationModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialAccelerationModel, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialAccelerationModel, init, METH_VARARGS),
          DECLARE_METHOD(t_PolynomialAccelerationModel, signedAmplitude, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialAccelerationModel)[] = {
          { Py_tp_methods, t_PolynomialAccelerationModel__methods_ },
          { Py_tp_init, (void *) t_PolynomialAccelerationModel_init_ },
          { Py_tp_getset, t_PolynomialAccelerationModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialAccelerationModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialAccelerationModel, t_PolynomialAccelerationModel, PolynomialAccelerationModel);

        void t_PolynomialAccelerationModel::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialAccelerationModel), &PY_TYPE_DEF(PolynomialAccelerationModel), module, "PolynomialAccelerationModel", 0);
        }

        void t_PolynomialAccelerationModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialAccelerationModel), "class_", make_descriptor(PolynomialAccelerationModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialAccelerationModel), "wrapfn_", make_descriptor(t_PolynomialAccelerationModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialAccelerationModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialAccelerationModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialAccelerationModel::initializeClass, 1)))
            return NULL;
          return t_PolynomialAccelerationModel::wrap_Object(PolynomialAccelerationModel(((t_PolynomialAccelerationModel *) arg)->object.this$));
        }
        static PyObject *t_PolynomialAccelerationModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialAccelerationModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialAccelerationModel_init_(t_PolynomialAccelerationModel *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jint a2;
          PolynomialAccelerationModel object((jobject) NULL);

          if (!parseArgs(args, "skI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = PolynomialAccelerationModel(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PolynomialAccelerationModel_getParametersDrivers(t_PolynomialAccelerationModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_PolynomialAccelerationModel_init(t_PolynomialAccelerationModel *self, PyObject *args)
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

        static PyObject *t_PolynomialAccelerationModel_signedAmplitude(t_PolynomialAccelerationModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.signedAmplitude(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.signedAmplitude(a0, a1));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "signedAmplitude", args);
          return NULL;
        }

        static PyObject *t_PolynomialAccelerationModel_get__parametersDrivers(t_PolynomialAccelerationModel *self, void *data)
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
#include "org/orekit/models/earth/EarthStandardAtmosphereRefraction.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *EarthStandardAtmosphereRefraction::class$ = NULL;
        jmethodID *EarthStandardAtmosphereRefraction::mids$ = NULL;
        bool EarthStandardAtmosphereRefraction::live$ = false;
        jdouble EarthStandardAtmosphereRefraction::DEFAULT_CORRECTION_FACTOR = (jdouble) 0;
        jdouble EarthStandardAtmosphereRefraction::DEFAULT_PRESSURE = (jdouble) 0;
        jdouble EarthStandardAtmosphereRefraction::DEFAULT_TEMPERATURE = (jdouble) 0;
        jdouble EarthStandardAtmosphereRefraction::STANDARD_ATM_PRESSURE = (jdouble) 0;
        jdouble EarthStandardAtmosphereRefraction::STANDARD_ATM_TEMPERATURE = (jdouble) 0;

        jclass EarthStandardAtmosphereRefraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/EarthStandardAtmosphereRefraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_getPressure_b74f83833fdad017] = env->getMethodID(cls, "getPressure", "()D");
            mids$[mid_getRefraction_04fd0666b613d2ab] = env->getMethodID(cls, "getRefraction", "(D)D");
            mids$[mid_getTemperature_b74f83833fdad017] = env->getMethodID(cls, "getTemperature", "()D");
            mids$[mid_setPressure_8ba9fe7a847cecad] = env->getMethodID(cls, "setPressure", "(D)V");
            mids$[mid_setTemperature_8ba9fe7a847cecad] = env->getMethodID(cls, "setTemperature", "(D)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_CORRECTION_FACTOR = env->getStaticDoubleField(cls, "DEFAULT_CORRECTION_FACTOR");
            DEFAULT_PRESSURE = env->getStaticDoubleField(cls, "DEFAULT_PRESSURE");
            DEFAULT_TEMPERATURE = env->getStaticDoubleField(cls, "DEFAULT_TEMPERATURE");
            STANDARD_ATM_PRESSURE = env->getStaticDoubleField(cls, "STANDARD_ATM_PRESSURE");
            STANDARD_ATM_TEMPERATURE = env->getStaticDoubleField(cls, "STANDARD_ATM_TEMPERATURE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EarthStandardAtmosphereRefraction::EarthStandardAtmosphereRefraction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        EarthStandardAtmosphereRefraction::EarthStandardAtmosphereRefraction(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        jdouble EarthStandardAtmosphereRefraction::getPressure() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPressure_b74f83833fdad017]);
        }

        jdouble EarthStandardAtmosphereRefraction::getRefraction(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRefraction_04fd0666b613d2ab], a0);
        }

        jdouble EarthStandardAtmosphereRefraction::getTemperature() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTemperature_b74f83833fdad017]);
        }

        void EarthStandardAtmosphereRefraction::setPressure(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPressure_8ba9fe7a847cecad], a0);
        }

        void EarthStandardAtmosphereRefraction::setTemperature(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTemperature_8ba9fe7a847cecad], a0);
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
        static PyObject *t_EarthStandardAtmosphereRefraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EarthStandardAtmosphereRefraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EarthStandardAtmosphereRefraction_init_(t_EarthStandardAtmosphereRefraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EarthStandardAtmosphereRefraction_getPressure(t_EarthStandardAtmosphereRefraction *self);
        static PyObject *t_EarthStandardAtmosphereRefraction_getRefraction(t_EarthStandardAtmosphereRefraction *self, PyObject *arg);
        static PyObject *t_EarthStandardAtmosphereRefraction_getTemperature(t_EarthStandardAtmosphereRefraction *self);
        static PyObject *t_EarthStandardAtmosphereRefraction_setPressure(t_EarthStandardAtmosphereRefraction *self, PyObject *arg);
        static PyObject *t_EarthStandardAtmosphereRefraction_setTemperature(t_EarthStandardAtmosphereRefraction *self, PyObject *arg);
        static PyObject *t_EarthStandardAtmosphereRefraction_get__pressure(t_EarthStandardAtmosphereRefraction *self, void *data);
        static int t_EarthStandardAtmosphereRefraction_set__pressure(t_EarthStandardAtmosphereRefraction *self, PyObject *arg, void *data);
        static PyObject *t_EarthStandardAtmosphereRefraction_get__temperature(t_EarthStandardAtmosphereRefraction *self, void *data);
        static int t_EarthStandardAtmosphereRefraction_set__temperature(t_EarthStandardAtmosphereRefraction *self, PyObject *arg, void *data);
        static PyGetSetDef t_EarthStandardAtmosphereRefraction__fields_[] = {
          DECLARE_GETSET_FIELD(t_EarthStandardAtmosphereRefraction, pressure),
          DECLARE_GETSET_FIELD(t_EarthStandardAtmosphereRefraction, temperature),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EarthStandardAtmosphereRefraction__methods_[] = {
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, getPressure, METH_NOARGS),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, getRefraction, METH_O),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, getTemperature, METH_NOARGS),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, setPressure, METH_O),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, setTemperature, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EarthStandardAtmosphereRefraction)[] = {
          { Py_tp_methods, t_EarthStandardAtmosphereRefraction__methods_ },
          { Py_tp_init, (void *) t_EarthStandardAtmosphereRefraction_init_ },
          { Py_tp_getset, t_EarthStandardAtmosphereRefraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EarthStandardAtmosphereRefraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EarthStandardAtmosphereRefraction, t_EarthStandardAtmosphereRefraction, EarthStandardAtmosphereRefraction);

        void t_EarthStandardAtmosphereRefraction::install(PyObject *module)
        {
          installType(&PY_TYPE(EarthStandardAtmosphereRefraction), &PY_TYPE_DEF(EarthStandardAtmosphereRefraction), module, "EarthStandardAtmosphereRefraction", 0);
        }

        void t_EarthStandardAtmosphereRefraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "class_", make_descriptor(EarthStandardAtmosphereRefraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "wrapfn_", make_descriptor(t_EarthStandardAtmosphereRefraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "boxfn_", make_descriptor(boxObject));
          env->getClass(EarthStandardAtmosphereRefraction::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "DEFAULT_CORRECTION_FACTOR", make_descriptor(EarthStandardAtmosphereRefraction::DEFAULT_CORRECTION_FACTOR));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "DEFAULT_PRESSURE", make_descriptor(EarthStandardAtmosphereRefraction::DEFAULT_PRESSURE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "DEFAULT_TEMPERATURE", make_descriptor(EarthStandardAtmosphereRefraction::DEFAULT_TEMPERATURE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "STANDARD_ATM_PRESSURE", make_descriptor(EarthStandardAtmosphereRefraction::STANDARD_ATM_PRESSURE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "STANDARD_ATM_TEMPERATURE", make_descriptor(EarthStandardAtmosphereRefraction::STANDARD_ATM_TEMPERATURE));
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EarthStandardAtmosphereRefraction::initializeClass, 1)))
            return NULL;
          return t_EarthStandardAtmosphereRefraction::wrap_Object(EarthStandardAtmosphereRefraction(((t_EarthStandardAtmosphereRefraction *) arg)->object.this$));
        }
        static PyObject *t_EarthStandardAtmosphereRefraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EarthStandardAtmosphereRefraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EarthStandardAtmosphereRefraction_init_(t_EarthStandardAtmosphereRefraction *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              EarthStandardAtmosphereRefraction object((jobject) NULL);

              INT_CALL(object = EarthStandardAtmosphereRefraction());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              EarthStandardAtmosphereRefraction object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = EarthStandardAtmosphereRefraction(a0, a1));
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

        static PyObject *t_EarthStandardAtmosphereRefraction_getPressure(t_EarthStandardAtmosphereRefraction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPressure());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_getRefraction(t_EarthStandardAtmosphereRefraction *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getRefraction(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getRefraction", arg);
          return NULL;
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_getTemperature(t_EarthStandardAtmosphereRefraction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTemperature());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_setPressure(t_EarthStandardAtmosphereRefraction *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPressure(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPressure", arg);
          return NULL;
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_setTemperature(t_EarthStandardAtmosphereRefraction *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTemperature(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTemperature", arg);
          return NULL;
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_get__pressure(t_EarthStandardAtmosphereRefraction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPressure());
          return PyFloat_FromDouble((double) value);
        }
        static int t_EarthStandardAtmosphereRefraction_set__pressure(t_EarthStandardAtmosphereRefraction *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPressure(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pressure", arg);
          return -1;
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_get__temperature(t_EarthStandardAtmosphereRefraction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTemperature());
          return PyFloat_FromDouble((double) value);
        }
        static int t_EarthStandardAtmosphereRefraction_set__temperature(t_EarthStandardAtmosphereRefraction *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTemperature(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "temperature", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/SequentialBatchLSEstimator.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *SequentialBatchLSEstimator::class$ = NULL;
        jmethodID *SequentialBatchLSEstimator::mids$ = NULL;
        bool SequentialBatchLSEstimator::live$ = false;

        jclass SequentialBatchLSEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/SequentialBatchLSEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8d0ec979a38c50bc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;[Lorg/orekit/propagation/conversion/PropagatorBuilder;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SequentialBatchLSEstimator::SequentialBatchLSEstimator(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::SequentialGaussNewtonOptimizer & a0, const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a1) : ::org::orekit::estimation::leastsquares::BatchLSEstimator(env->newObject(initializeClass, &mids$, mid_init$_8d0ec979a38c50bc, a0.this$, a1.this$)) {}
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
        static PyObject *t_SequentialBatchLSEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SequentialBatchLSEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SequentialBatchLSEstimator_init_(t_SequentialBatchLSEstimator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_SequentialBatchLSEstimator__methods_[] = {
          DECLARE_METHOD(t_SequentialBatchLSEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SequentialBatchLSEstimator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SequentialBatchLSEstimator)[] = {
          { Py_tp_methods, t_SequentialBatchLSEstimator__methods_ },
          { Py_tp_init, (void *) t_SequentialBatchLSEstimator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SequentialBatchLSEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::leastsquares::BatchLSEstimator),
          NULL
        };

        DEFINE_TYPE(SequentialBatchLSEstimator, t_SequentialBatchLSEstimator, SequentialBatchLSEstimator);

        void t_SequentialBatchLSEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(SequentialBatchLSEstimator), &PY_TYPE_DEF(SequentialBatchLSEstimator), module, "SequentialBatchLSEstimator", 0);
        }

        void t_SequentialBatchLSEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SequentialBatchLSEstimator), "class_", make_descriptor(SequentialBatchLSEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SequentialBatchLSEstimator), "wrapfn_", make_descriptor(t_SequentialBatchLSEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SequentialBatchLSEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SequentialBatchLSEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SequentialBatchLSEstimator::initializeClass, 1)))
            return NULL;
          return t_SequentialBatchLSEstimator::wrap_Object(SequentialBatchLSEstimator(((t_SequentialBatchLSEstimator *) arg)->object.this$));
        }
        static PyObject *t_SequentialBatchLSEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SequentialBatchLSEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SequentialBatchLSEstimator_init_(t_SequentialBatchLSEstimator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::SequentialGaussNewtonOptimizer a0((jobject) NULL);
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a1((jobject) NULL);
          SequentialBatchLSEstimator object((jobject) NULL);

          if (!parseArgs(args, "k[k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::SequentialGaussNewtonOptimizer::initializeClass, ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &a0, &a1))
          {
            INT_CALL(object = SequentialBatchLSEstimator(a0, a1));
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$UnitListConsumer.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/units/Unit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$UnitListConsumer::class$ = NULL;
            jmethodID *ParseToken$UnitListConsumer::mids$ = NULL;
            bool ParseToken$UnitListConsumer::live$ = false;

            jclass ParseToken$UnitListConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$UnitListConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_0e7c3032c7c93ed3] = env->getMethodID(cls, "accept", "(Ljava/util/List;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$UnitListConsumer::accept(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_0e7c3032c7c93ed3], a0.this$);
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
            static PyObject *t_ParseToken$UnitListConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$UnitListConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$UnitListConsumer_accept(t_ParseToken$UnitListConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$UnitListConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$UnitListConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$UnitListConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$UnitListConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$UnitListConsumer)[] = {
              { Py_tp_methods, t_ParseToken$UnitListConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$UnitListConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$UnitListConsumer, t_ParseToken$UnitListConsumer, ParseToken$UnitListConsumer);

            void t_ParseToken$UnitListConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$UnitListConsumer), &PY_TYPE_DEF(ParseToken$UnitListConsumer), module, "ParseToken$UnitListConsumer", 0);
            }

            void t_ParseToken$UnitListConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$UnitListConsumer), "class_", make_descriptor(ParseToken$UnitListConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$UnitListConsumer), "wrapfn_", make_descriptor(t_ParseToken$UnitListConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$UnitListConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$UnitListConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$UnitListConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$UnitListConsumer::wrap_Object(ParseToken$UnitListConsumer(((t_ParseToken$UnitListConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$UnitListConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$UnitListConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$UnitListConsumer_accept(t_ParseToken$UnitListConsumer *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
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
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTNewtonianAttractionContext.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldDSSTNewtonianAttractionContext::class$ = NULL;
            jmethodID *FieldDSSTNewtonianAttractionContext::mids$ = NULL;
            bool FieldDSSTNewtonianAttractionContext::live$ = false;

            jclass FieldDSSTNewtonianAttractionContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTNewtonianAttractionContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getGM_81520b552cb3fa26] = env->getMethodID(cls, "getGM", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTNewtonianAttractionContext::getGM() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGM_81520b552cb3fa26]));
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
            static PyObject *t_FieldDSSTNewtonianAttractionContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTNewtonianAttractionContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTNewtonianAttractionContext_of_(t_FieldDSSTNewtonianAttractionContext *self, PyObject *args);
            static PyObject *t_FieldDSSTNewtonianAttractionContext_getGM(t_FieldDSSTNewtonianAttractionContext *self);
            static PyObject *t_FieldDSSTNewtonianAttractionContext_get__gM(t_FieldDSSTNewtonianAttractionContext *self, void *data);
            static PyObject *t_FieldDSSTNewtonianAttractionContext_get__parameters_(t_FieldDSSTNewtonianAttractionContext *self, void *data);
            static PyGetSetDef t_FieldDSSTNewtonianAttractionContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldDSSTNewtonianAttractionContext, gM),
              DECLARE_GET_FIELD(t_FieldDSSTNewtonianAttractionContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldDSSTNewtonianAttractionContext__methods_[] = {
              DECLARE_METHOD(t_FieldDSSTNewtonianAttractionContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTNewtonianAttractionContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTNewtonianAttractionContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldDSSTNewtonianAttractionContext, getGM, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldDSSTNewtonianAttractionContext)[] = {
              { Py_tp_methods, t_FieldDSSTNewtonianAttractionContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldDSSTNewtonianAttractionContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldDSSTNewtonianAttractionContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldDSSTNewtonianAttractionContext, t_FieldDSSTNewtonianAttractionContext, FieldDSSTNewtonianAttractionContext);
            PyObject *t_FieldDSSTNewtonianAttractionContext::wrap_Object(const FieldDSSTNewtonianAttractionContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTNewtonianAttractionContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTNewtonianAttractionContext *self = (t_FieldDSSTNewtonianAttractionContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldDSSTNewtonianAttractionContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTNewtonianAttractionContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTNewtonianAttractionContext *self = (t_FieldDSSTNewtonianAttractionContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldDSSTNewtonianAttractionContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldDSSTNewtonianAttractionContext), &PY_TYPE_DEF(FieldDSSTNewtonianAttractionContext), module, "FieldDSSTNewtonianAttractionContext", 0);
            }

            void t_FieldDSSTNewtonianAttractionContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTNewtonianAttractionContext), "class_", make_descriptor(FieldDSSTNewtonianAttractionContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTNewtonianAttractionContext), "wrapfn_", make_descriptor(t_FieldDSSTNewtonianAttractionContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTNewtonianAttractionContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldDSSTNewtonianAttractionContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldDSSTNewtonianAttractionContext::initializeClass, 1)))
                return NULL;
              return t_FieldDSSTNewtonianAttractionContext::wrap_Object(FieldDSSTNewtonianAttractionContext(((t_FieldDSSTNewtonianAttractionContext *) arg)->object.this$));
            }
            static PyObject *t_FieldDSSTNewtonianAttractionContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldDSSTNewtonianAttractionContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldDSSTNewtonianAttractionContext_of_(t_FieldDSSTNewtonianAttractionContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldDSSTNewtonianAttractionContext_getGM(t_FieldDSSTNewtonianAttractionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getGM());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldDSSTNewtonianAttractionContext_get__parameters_(t_FieldDSSTNewtonianAttractionContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldDSSTNewtonianAttractionContext_get__gM(t_FieldDSSTNewtonianAttractionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getGM());
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
#include "org/orekit/gnss/attitude/AbstractGNSSAttitudeProvider.h"
#include "org/orekit/gnss/attitude/GNSSAttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *AbstractGNSSAttitudeProvider::class$ = NULL;
        jmethodID *AbstractGNSSAttitudeProvider::mids$ = NULL;
        bool AbstractGNSSAttitudeProvider::live$ = false;

        jclass AbstractGNSSAttitudeProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/AbstractGNSSAttitudeProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAttitude_896ee4d68989b1e8] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
            mids$[mid_getAttitude_21845cfb0034fe1c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
            mids$[mid_validityEnd_c325492395d89b24] = env->getMethodID(cls, "validityEnd", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_validityStart_c325492395d89b24] = env->getMethodID(cls, "validityStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getInertialFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getSun_59b14a9bb85bbba5] = env->getMethodID(cls, "getSun", "()Lorg/orekit/utils/ExtendedPVCoordinatesProvider;");
            mids$[mid_correctedYaw_0e415c4bbe3bedab] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
            mids$[mid_correctedYaw_4231606446b6d08a] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::attitudes::FieldAttitude AbstractGNSSAttitudeProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
        {
          return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_896ee4d68989b1e8], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::attitudes::Attitude AbstractGNSSAttitudeProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
        {
          return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_21845cfb0034fe1c], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::time::AbsoluteDate AbstractGNSSAttitudeProvider::validityEnd() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_validityEnd_c325492395d89b24]));
        }

        ::org::orekit::time::AbsoluteDate AbstractGNSSAttitudeProvider::validityStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_validityStart_c325492395d89b24]));
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
      namespace attitude {
        static PyObject *t_AbstractGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractGNSSAttitudeProvider_getAttitude(t_AbstractGNSSAttitudeProvider *self, PyObject *args);
        static PyObject *t_AbstractGNSSAttitudeProvider_validityEnd(t_AbstractGNSSAttitudeProvider *self);
        static PyObject *t_AbstractGNSSAttitudeProvider_validityStart(t_AbstractGNSSAttitudeProvider *self);

        static PyMethodDef t_AbstractGNSSAttitudeProvider__methods_[] = {
          DECLARE_METHOD(t_AbstractGNSSAttitudeProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractGNSSAttitudeProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractGNSSAttitudeProvider, getAttitude, METH_VARARGS),
          DECLARE_METHOD(t_AbstractGNSSAttitudeProvider, validityEnd, METH_NOARGS),
          DECLARE_METHOD(t_AbstractGNSSAttitudeProvider, validityStart, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractGNSSAttitudeProvider)[] = {
          { Py_tp_methods, t_AbstractGNSSAttitudeProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractGNSSAttitudeProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractGNSSAttitudeProvider, t_AbstractGNSSAttitudeProvider, AbstractGNSSAttitudeProvider);

        void t_AbstractGNSSAttitudeProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractGNSSAttitudeProvider), &PY_TYPE_DEF(AbstractGNSSAttitudeProvider), module, "AbstractGNSSAttitudeProvider", 0);
        }

        void t_AbstractGNSSAttitudeProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGNSSAttitudeProvider), "class_", make_descriptor(AbstractGNSSAttitudeProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGNSSAttitudeProvider), "wrapfn_", make_descriptor(t_AbstractGNSSAttitudeProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGNSSAttitudeProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractGNSSAttitudeProvider::initializeClass, 1)))
            return NULL;
          return t_AbstractGNSSAttitudeProvider::wrap_Object(AbstractGNSSAttitudeProvider(((t_AbstractGNSSAttitudeProvider *) arg)->object.this$));
        }
        static PyObject *t_AbstractGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractGNSSAttitudeProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractGNSSAttitudeProvider_getAttitude(t_AbstractGNSSAttitudeProvider *self, PyObject *args)
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

        static PyObject *t_AbstractGNSSAttitudeProvider_validityEnd(t_AbstractGNSSAttitudeProvider *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.validityEnd());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AbstractGNSSAttitudeProvider_validityStart(t_AbstractGNSSAttitudeProvider *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.validityStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
      }
    }
  }
}

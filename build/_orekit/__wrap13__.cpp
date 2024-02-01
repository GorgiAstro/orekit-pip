#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PhaseMinusCodeCycleSlipDetector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PhaseMinusCodeCycleSlipDetector::class$ = NULL;
          jmethodID *PhaseMinusCodeCycleSlipDetector::mids$ = NULL;
          bool PhaseMinusCodeCycleSlipDetector::live$ = false;

          jclass PhaseMinusCodeCycleSlipDetector::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PhaseMinusCodeCycleSlipDetector");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_eb6adaa8ce308c89] = env->getMethodID(cls, "<init>", "(DDII)V");
              mids$[mid_manageData_d75e9b743ecf20cb] = env->getMethodID(cls, "manageData", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseMinusCodeCycleSlipDetector::PhaseMinusCodeCycleSlipDetector(jdouble a0, jdouble a1, jint a2, jint a3) : ::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector(env->newObject(initializeClass, &mids$, mid_init$_eb6adaa8ce308c89, a0, a1, a2, a3)) {}
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
          static PyObject *t_PhaseMinusCodeCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseMinusCodeCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseMinusCodeCycleSlipDetector_init_(t_PhaseMinusCodeCycleSlipDetector *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_PhaseMinusCodeCycleSlipDetector__methods_[] = {
            DECLARE_METHOD(t_PhaseMinusCodeCycleSlipDetector, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseMinusCodeCycleSlipDetector, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseMinusCodeCycleSlipDetector)[] = {
            { Py_tp_methods, t_PhaseMinusCodeCycleSlipDetector__methods_ },
            { Py_tp_init, (void *) t_PhaseMinusCodeCycleSlipDetector_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseMinusCodeCycleSlipDetector)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector),
            NULL
          };

          DEFINE_TYPE(PhaseMinusCodeCycleSlipDetector, t_PhaseMinusCodeCycleSlipDetector, PhaseMinusCodeCycleSlipDetector);

          void t_PhaseMinusCodeCycleSlipDetector::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseMinusCodeCycleSlipDetector), &PY_TYPE_DEF(PhaseMinusCodeCycleSlipDetector), module, "PhaseMinusCodeCycleSlipDetector", 0);
          }

          void t_PhaseMinusCodeCycleSlipDetector::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCycleSlipDetector), "class_", make_descriptor(PhaseMinusCodeCycleSlipDetector::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCycleSlipDetector), "wrapfn_", make_descriptor(t_PhaseMinusCodeCycleSlipDetector::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCycleSlipDetector), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseMinusCodeCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseMinusCodeCycleSlipDetector::initializeClass, 1)))
              return NULL;
            return t_PhaseMinusCodeCycleSlipDetector::wrap_Object(PhaseMinusCodeCycleSlipDetector(((t_PhaseMinusCodeCycleSlipDetector *) arg)->object.this$));
          }
          static PyObject *t_PhaseMinusCodeCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseMinusCodeCycleSlipDetector::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseMinusCodeCycleSlipDetector_init_(t_PhaseMinusCodeCycleSlipDetector *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            jint a3;
            PhaseMinusCodeCycleSlipDetector object((jobject) NULL);

            if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = PhaseMinusCodeCycleSlipDetector(a0, a1, a2, a3));
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/parsing/PythonProcessingState.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *PythonProcessingState::class$ = NULL;
            jmethodID *PythonProcessingState::mids$ = NULL;
            bool PythonProcessingState::live$ = false;

            jclass PythonProcessingState::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/PythonProcessingState");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_processToken_48865e799ebb0b92] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");
                mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonProcessingState::PythonProcessingState() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            void PythonProcessingState::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
            }

            jlong PythonProcessingState::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
            }

            void PythonProcessingState::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
          namespace parsing {
            static PyObject *t_PythonProcessingState_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonProcessingState_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonProcessingState_init_(t_PythonProcessingState *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonProcessingState_finalize(t_PythonProcessingState *self);
            static PyObject *t_PythonProcessingState_pythonExtension(t_PythonProcessingState *self, PyObject *args);
            static jboolean JNICALL t_PythonProcessingState_processToken0(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonProcessingState_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonProcessingState_get__self(t_PythonProcessingState *self, void *data);
            static PyGetSetDef t_PythonProcessingState__fields_[] = {
              DECLARE_GET_FIELD(t_PythonProcessingState, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonProcessingState__methods_[] = {
              DECLARE_METHOD(t_PythonProcessingState, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonProcessingState, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonProcessingState, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonProcessingState, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonProcessingState)[] = {
              { Py_tp_methods, t_PythonProcessingState__methods_ },
              { Py_tp_init, (void *) t_PythonProcessingState_init_ },
              { Py_tp_getset, t_PythonProcessingState__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonProcessingState)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonProcessingState, t_PythonProcessingState, PythonProcessingState);

            void t_PythonProcessingState::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonProcessingState), &PY_TYPE_DEF(PythonProcessingState), module, "PythonProcessingState", 1);
            }

            void t_PythonProcessingState::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonProcessingState), "class_", make_descriptor(PythonProcessingState::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonProcessingState), "wrapfn_", make_descriptor(t_PythonProcessingState::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonProcessingState), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonProcessingState::initializeClass);
              JNINativeMethod methods[] = {
                { "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z", (void *) t_PythonProcessingState_processToken0 },
                { "pythonDecRef", "()V", (void *) t_PythonProcessingState_pythonDecRef1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonProcessingState_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonProcessingState::initializeClass, 1)))
                return NULL;
              return t_PythonProcessingState::wrap_Object(PythonProcessingState(((t_PythonProcessingState *) arg)->object.this$));
            }
            static PyObject *t_PythonProcessingState_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonProcessingState::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonProcessingState_init_(t_PythonProcessingState *self, PyObject *args, PyObject *kwds)
            {
              PythonProcessingState object((jobject) NULL);

              INT_CALL(object = PythonProcessingState());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonProcessingState_finalize(t_PythonProcessingState *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonProcessingState_pythonExtension(t_PythonProcessingState *self, PyObject *args)
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

            static jboolean JNICALL t_PythonProcessingState_processToken0(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonProcessingState::mids$[PythonProcessingState::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *o0 = ::org::orekit::files::ccsds::utils::lexical::t_ParseToken::wrap_Object(::org::orekit::files::ccsds::utils::lexical::ParseToken(a0));
              PyObject *result = PyObject_CallMethod(obj, "processToken", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("processToken", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static void JNICALL t_PythonProcessingState_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonProcessingState::mids$[PythonProcessingState::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonProcessingState::mids$[PythonProcessingState::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonProcessingState_get__self(t_PythonProcessingState *self, void *data)
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
#include "org/orekit/forces/maneuvers/propulsion/PropulsionModel.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PropulsionModel::class$ = NULL;
          jmethodID *PropulsionModel::mids$ = NULL;
          bool PropulsionModel::live$ = false;

          jclass PropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAcceleration_95da8f0fa460fb9b] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/Attitude;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAcceleration_04b081b8909cb072] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/FieldAttitude;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getControl3DVectorCostType_fc9abda16ef946e0] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
              mids$[mid_getEventDetectors_11e4ca8182c1933d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_d3db121d9deb0312] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getMassDerivatives_4222abdadde032f5] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getMassDerivatives_6c8e6cd5d59063ae] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D PropulsionModel::getAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::attitudes::Attitude & a1, const JArray< jdouble > & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_95da8f0fa460fb9b], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PropulsionModel::getAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_04b081b8909cb072], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::forces::maneuvers::Control3DVectorCostType PropulsionModel::getControl3DVectorCostType() const
          {
            return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_fc9abda16ef946e0]));
          }

          ::java::util::stream::Stream PropulsionModel::getEventDetectors() const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_11e4ca8182c1933d]));
          }

          ::java::util::stream::Stream PropulsionModel::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_d3db121d9deb0312], a0.this$));
          }

          jdouble PropulsionModel::getMassDerivatives(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMassDerivatives_4222abdadde032f5], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement PropulsionModel::getMassDerivatives(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMassDerivatives_6c8e6cd5d59063ae], a0.this$, a1.this$));
          }

          ::java::lang::String PropulsionModel::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
          }

          void PropulsionModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
          }

          void PropulsionModel::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_357211ab77703f3f], a0.this$, a1.this$);
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
          static PyObject *t_PropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PropulsionModel_getAcceleration(t_PropulsionModel *self, PyObject *args);
          static PyObject *t_PropulsionModel_getControl3DVectorCostType(t_PropulsionModel *self);
          static PyObject *t_PropulsionModel_getEventDetectors(t_PropulsionModel *self);
          static PyObject *t_PropulsionModel_getFieldEventDetectors(t_PropulsionModel *self, PyObject *arg);
          static PyObject *t_PropulsionModel_getMassDerivatives(t_PropulsionModel *self, PyObject *args);
          static PyObject *t_PropulsionModel_getName(t_PropulsionModel *self);
          static PyObject *t_PropulsionModel_init(t_PropulsionModel *self, PyObject *args);
          static PyObject *t_PropulsionModel_get__control3DVectorCostType(t_PropulsionModel *self, void *data);
          static PyObject *t_PropulsionModel_get__eventDetectors(t_PropulsionModel *self, void *data);
          static PyObject *t_PropulsionModel_get__name(t_PropulsionModel *self, void *data);
          static PyGetSetDef t_PropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_PropulsionModel, control3DVectorCostType),
            DECLARE_GET_FIELD(t_PropulsionModel, eventDetectors),
            DECLARE_GET_FIELD(t_PropulsionModel, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PropulsionModel__methods_[] = {
            DECLARE_METHOD(t_PropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PropulsionModel, getAcceleration, METH_VARARGS),
            DECLARE_METHOD(t_PropulsionModel, getControl3DVectorCostType, METH_NOARGS),
            DECLARE_METHOD(t_PropulsionModel, getEventDetectors, METH_NOARGS),
            DECLARE_METHOD(t_PropulsionModel, getFieldEventDetectors, METH_O),
            DECLARE_METHOD(t_PropulsionModel, getMassDerivatives, METH_VARARGS),
            DECLARE_METHOD(t_PropulsionModel, getName, METH_NOARGS),
            DECLARE_METHOD(t_PropulsionModel, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PropulsionModel)[] = {
            { Py_tp_methods, t_PropulsionModel__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_PropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PropulsionModel)[] = {
            &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
            NULL
          };

          DEFINE_TYPE(PropulsionModel, t_PropulsionModel, PropulsionModel);

          void t_PropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PropulsionModel), &PY_TYPE_DEF(PropulsionModel), module, "PropulsionModel", 0);
          }

          void t_PropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PropulsionModel), "class_", make_descriptor(PropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PropulsionModel), "wrapfn_", make_descriptor(t_PropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PropulsionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PropulsionModel::initializeClass, 1)))
              return NULL;
            return t_PropulsionModel::wrap_Object(PropulsionModel(((t_PropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_PropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PropulsionModel_getAcceleration(t_PropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getAcceleration(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::attitudes::Attitude a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getAcceleration(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getAcceleration", args);
            return NULL;
          }

          static PyObject *t_PropulsionModel_getControl3DVectorCostType(t_PropulsionModel *self)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
            OBJ_CALL(result = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
          }

          static PyObject *t_PropulsionModel_getEventDetectors(t_PropulsionModel *self)
          {
            ::java::util::stream::Stream result((jobject) NULL);
            OBJ_CALL(result = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
          }

          static PyObject *t_PropulsionModel_getFieldEventDetectors(t_PropulsionModel *self, PyObject *arg)
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

          static PyObject *t_PropulsionModel_getMassDerivatives(t_PropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getMassDerivatives(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getMassDerivatives(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getMassDerivatives", args);
            return NULL;
          }

          static PyObject *t_PropulsionModel_getName(t_PropulsionModel *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_PropulsionModel_init(t_PropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
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
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.init(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_PropulsionModel_get__control3DVectorCostType(t_PropulsionModel *self, void *data)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
            OBJ_CALL(value = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
          }

          static PyObject *t_PropulsionModel_get__eventDetectors(t_PropulsionModel *self, void *data)
          {
            ::java::util::stream::Stream value((jobject) NULL);
            OBJ_CALL(value = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(value);
          }

          static PyObject *t_PropulsionModel_get__name(t_PropulsionModel *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "org/orekit/files/ccsds/ndm/tdm/TimetagReference.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "java/lang/Integer.h"
#include "org/orekit/files/ccsds/ndm/tdm/AngleType.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/tdm/TrackingMode.h"
#include "org/orekit/files/ccsds/ndm/tdm/IntegrationReference.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeMode.h"
#include "java/lang/Double.h"
#include "org/orekit/files/ccsds/ndm/tdm/DataQuality.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnits.h"
#include "org/orekit/files/ccsds/ndm/tdm/CorrectionApplied.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmMetadata::class$ = NULL;
            jmethodID *TdmMetadata::mids$ = NULL;
            bool TdmMetadata::live$ = false;

            jclass TdmMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_addEphemerisName_a3e920ca64bbfb6f] = env->getMethodID(cls, "addEphemerisName", "(ILjava/lang/String;)V");
                mids$[mid_addParticipant_a3e920ca64bbfb6f] = env->getMethodID(cls, "addParticipant", "(ILjava/lang/String;)V");
                mids$[mid_addReceiveDelay_4320462275d66e78] = env->getMethodID(cls, "addReceiveDelay", "(ID)V");
                mids$[mid_addTransmitDelay_4320462275d66e78] = env->getMethodID(cls, "addTransmitDelay", "(ID)V");
                mids$[mid_getAngleType_619a24380dac151a] = env->getMethodID(cls, "getAngleType", "()Lorg/orekit/files/ccsds/ndm/tdm/AngleType;");
                mids$[mid_getCorrectionAberrationDiurnal_9981f74b2d109da6] = env->getMethodID(cls, "getCorrectionAberrationDiurnal", "()D");
                mids$[mid_getCorrectionAberrationYearly_9981f74b2d109da6] = env->getMethodID(cls, "getCorrectionAberrationYearly", "()D");
                mids$[mid_getCorrectionAngle1_9981f74b2d109da6] = env->getMethodID(cls, "getCorrectionAngle1", "()D");
                mids$[mid_getCorrectionAngle2_9981f74b2d109da6] = env->getMethodID(cls, "getCorrectionAngle2", "()D");
                mids$[mid_getCorrectionDoppler_9981f74b2d109da6] = env->getMethodID(cls, "getCorrectionDoppler", "()D");
                mids$[mid_getCorrectionMagnitude_9981f74b2d109da6] = env->getMethodID(cls, "getCorrectionMagnitude", "()D");
                mids$[mid_getCorrectionRange_138e545f4642347d] = env->getMethodID(cls, "getCorrectionRange", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)D");
                mids$[mid_getCorrectionRcs_9981f74b2d109da6] = env->getMethodID(cls, "getCorrectionRcs", "()D");
                mids$[mid_getCorrectionReceive_9981f74b2d109da6] = env->getMethodID(cls, "getCorrectionReceive", "()D");
                mids$[mid_getCorrectionTransmit_9981f74b2d109da6] = env->getMethodID(cls, "getCorrectionTransmit", "()D");
                mids$[mid_getCorrectionsApplied_ef22fe8964273249] = env->getMethodID(cls, "getCorrectionsApplied", "()Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;");
                mids$[mid_getDataQuality_1a736d9e6c4cec43] = env->getMethodID(cls, "getDataQuality", "()Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;");
                mids$[mid_getDataTypes_d751c1a57012b438] = env->getMethodID(cls, "getDataTypes", "()Ljava/util/List;");
                mids$[mid_getDopplerCountBias_9981f74b2d109da6] = env->getMethodID(cls, "getDopplerCountBias", "()D");
                mids$[mid_getDopplerCountScale_9981f74b2d109da6] = env->getMethodID(cls, "getDopplerCountScale", "()D");
                mids$[mid_getEphemerisNames_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getEphemerisNames", "()Ljava/util/Map;");
                mids$[mid_getFreqOffset_9981f74b2d109da6] = env->getMethodID(cls, "getFreqOffset", "()D");
                mids$[mid_getIntegrationInterval_9981f74b2d109da6] = env->getMethodID(cls, "getIntegrationInterval", "()D");
                mids$[mid_getIntegrationRef_62aba6fc000f904d] = env->getMethodID(cls, "getIntegrationRef", "()Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;");
                mids$[mid_getInterpolationDegree_d6ab429752e7c267] = env->getMethodID(cls, "getInterpolationDegree", "()I");
                mids$[mid_getInterpolationMethod_d2c8eb4129821f0e] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
                mids$[mid_getMode_2e6f4b656697c13f] = env->getMethodID(cls, "getMode", "()Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;");
                mids$[mid_getParticipants_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getParticipants", "()Ljava/util/Map;");
                mids$[mid_getPath_d6f20bd740dd34cd] = env->getMethodID(cls, "getPath", "()[I");
                mids$[mid_getPath1_d6f20bd740dd34cd] = env->getMethodID(cls, "getPath1", "()[I");
                mids$[mid_getPath2_d6f20bd740dd34cd] = env->getMethodID(cls, "getPath2", "()[I");
                mids$[mid_getRangeMode_422e9bf90325259d] = env->getMethodID(cls, "getRangeMode", "()Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;");
                mids$[mid_getRangeModulus_138e545f4642347d] = env->getMethodID(cls, "getRangeModulus", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)D");
                mids$[mid_getRangeUnits_005cab2b0475811c] = env->getMethodID(cls, "getRangeUnits", "()Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;");
                mids$[mid_getRawCorrectionRange_9981f74b2d109da6] = env->getMethodID(cls, "getRawCorrectionRange", "()D");
                mids$[mid_getRawRangeModulus_9981f74b2d109da6] = env->getMethodID(cls, "getRawRangeModulus", "()D");
                mids$[mid_getReceiveBand_d2c8eb4129821f0e] = env->getMethodID(cls, "getReceiveBand", "()Ljava/lang/String;");
                mids$[mid_getReceiveDelays_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getReceiveDelays", "()Ljava/util/Map;");
                mids$[mid_getReferenceFrame_0fc1562b68204151] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getStartTime_80e11148db499dda] = env->getMethodID(cls, "getStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getStopTime_80e11148db499dda] = env->getMethodID(cls, "getStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getTimetagRef_27f93e75d78a6f80] = env->getMethodID(cls, "getTimetagRef", "()Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;");
                mids$[mid_getTrackId_d2c8eb4129821f0e] = env->getMethodID(cls, "getTrackId", "()Ljava/lang/String;");
                mids$[mid_getTransmitBand_d2c8eb4129821f0e] = env->getMethodID(cls, "getTransmitBand", "()Ljava/lang/String;");
                mids$[mid_getTransmitDelays_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getTransmitDelays", "()Ljava/util/Map;");
                mids$[mid_getTurnaroundDenominator_d6ab429752e7c267] = env->getMethodID(cls, "getTurnaroundDenominator", "()I");
                mids$[mid_getTurnaroundNumerator_d6ab429752e7c267] = env->getMethodID(cls, "getTurnaroundNumerator", "()I");
                mids$[mid_hasDopplerCountRollover_eee3de00fe971136] = env->getMethodID(cls, "hasDopplerCountRollover", "()Z");
                mids$[mid_setAngleType_fbce4736c60f6abb] = env->getMethodID(cls, "setAngleType", "(Lorg/orekit/files/ccsds/ndm/tdm/AngleType;)V");
                mids$[mid_setCorrectionAberrationDiurnal_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCorrectionAberrationDiurnal", "(D)V");
                mids$[mid_setCorrectionAberrationYearly_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCorrectionAberrationYearly", "(D)V");
                mids$[mid_setCorrectionAngle1_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCorrectionAngle1", "(D)V");
                mids$[mid_setCorrectionAngle2_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCorrectionAngle2", "(D)V");
                mids$[mid_setCorrectionDoppler_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCorrectionDoppler", "(D)V");
                mids$[mid_setCorrectionMagnitude_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCorrectionMagnitude", "(D)V");
                mids$[mid_setCorrectionRcs_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCorrectionRcs", "(D)V");
                mids$[mid_setCorrectionReceive_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCorrectionReceive", "(D)V");
                mids$[mid_setCorrectionTransmit_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCorrectionTransmit", "(D)V");
                mids$[mid_setCorrectionsApplied_0ae77d8288ae6785] = env->getMethodID(cls, "setCorrectionsApplied", "(Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;)V");
                mids$[mid_setDataQuality_3458cd32d0980090] = env->getMethodID(cls, "setDataQuality", "(Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;)V");
                mids$[mid_setDataTypes_aa335fea495d60e0] = env->getMethodID(cls, "setDataTypes", "(Ljava/util/List;)V");
                mids$[mid_setDopplerCountBias_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDopplerCountBias", "(D)V");
                mids$[mid_setDopplerCountRollover_b35db77cae58639e] = env->getMethodID(cls, "setDopplerCountRollover", "(Z)V");
                mids$[mid_setDopplerCountScale_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDopplerCountScale", "(D)V");
                mids$[mid_setEphemerisNames_df2bb61624910c2a] = env->getMethodID(cls, "setEphemerisNames", "(Ljava/util/Map;)V");
                mids$[mid_setFreqOffset_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setFreqOffset", "(D)V");
                mids$[mid_setIntegrationInterval_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setIntegrationInterval", "(D)V");
                mids$[mid_setIntegrationRef_b2736fca78ccecd6] = env->getMethodID(cls, "setIntegrationRef", "(Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;)V");
                mids$[mid_setInterpolationDegree_8fd427ab23829bf5] = env->getMethodID(cls, "setInterpolationDegree", "(I)V");
                mids$[mid_setInterpolationMethod_105e1eadb709d9ac] = env->getMethodID(cls, "setInterpolationMethod", "(Ljava/lang/String;)V");
                mids$[mid_setMode_b928dbb5a5094752] = env->getMethodID(cls, "setMode", "(Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;)V");
                mids$[mid_setParticipants_df2bb61624910c2a] = env->getMethodID(cls, "setParticipants", "(Ljava/util/Map;)V");
                mids$[mid_setPath_d43202153dd284f7] = env->getMethodID(cls, "setPath", "([I)V");
                mids$[mid_setPath1_d43202153dd284f7] = env->getMethodID(cls, "setPath1", "([I)V");
                mids$[mid_setPath2_d43202153dd284f7] = env->getMethodID(cls, "setPath2", "([I)V");
                mids$[mid_setRangeMode_711df62c906d850c] = env->getMethodID(cls, "setRangeMode", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;)V");
                mids$[mid_setRangeUnits_3c5bfdcc53ce0556] = env->getMethodID(cls, "setRangeUnits", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;)V");
                mids$[mid_setRawCorrectionRange_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setRawCorrectionRange", "(D)V");
                mids$[mid_setRawRangeModulus_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setRawRangeModulus", "(D)V");
                mids$[mid_setReceiveBand_105e1eadb709d9ac] = env->getMethodID(cls, "setReceiveBand", "(Ljava/lang/String;)V");
                mids$[mid_setReceiveDelays_df2bb61624910c2a] = env->getMethodID(cls, "setReceiveDelays", "(Ljava/util/Map;)V");
                mids$[mid_setReferenceFrame_2c8b859a72c0094e] = env->getMethodID(cls, "setReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_setStartTime_8497861b879c83f7] = env->getMethodID(cls, "setStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setStopTime_8497861b879c83f7] = env->getMethodID(cls, "setStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setTimetagRef_c7db2db518846dc7] = env->getMethodID(cls, "setTimetagRef", "(Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;)V");
                mids$[mid_setTrackId_105e1eadb709d9ac] = env->getMethodID(cls, "setTrackId", "(Ljava/lang/String;)V");
                mids$[mid_setTransmitBand_105e1eadb709d9ac] = env->getMethodID(cls, "setTransmitBand", "(Ljava/lang/String;)V");
                mids$[mid_setTransmitDelays_df2bb61624910c2a] = env->getMethodID(cls, "setTransmitDelays", "(Ljava/util/Map;)V");
                mids$[mid_setTurnaroundDenominator_8fd427ab23829bf5] = env->getMethodID(cls, "setTurnaroundDenominator", "(I)V");
                mids$[mid_setTurnaroundNumerator_8fd427ab23829bf5] = env->getMethodID(cls, "setTurnaroundNumerator", "(I)V");
                mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TdmMetadata::TdmMetadata() : ::org::orekit::files::ccsds::section::Metadata(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            void TdmMetadata::addEphemerisName(jint a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addEphemerisName_a3e920ca64bbfb6f], a0, a1.this$);
            }

            void TdmMetadata::addParticipant(jint a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addParticipant_a3e920ca64bbfb6f], a0, a1.this$);
            }

            void TdmMetadata::addReceiveDelay(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addReceiveDelay_4320462275d66e78], a0, a1);
            }

            void TdmMetadata::addTransmitDelay(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addTransmitDelay_4320462275d66e78], a0, a1);
            }

            ::org::orekit::files::ccsds::ndm::tdm::AngleType TdmMetadata::getAngleType() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::AngleType(env->callObjectMethod(this$, mids$[mid_getAngleType_619a24380dac151a]));
            }

            jdouble TdmMetadata::getCorrectionAberrationDiurnal() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionAberrationDiurnal_9981f74b2d109da6]);
            }

            jdouble TdmMetadata::getCorrectionAberrationYearly() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionAberrationYearly_9981f74b2d109da6]);
            }

            jdouble TdmMetadata::getCorrectionAngle1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionAngle1_9981f74b2d109da6]);
            }

            jdouble TdmMetadata::getCorrectionAngle2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionAngle2_9981f74b2d109da6]);
            }

            jdouble TdmMetadata::getCorrectionDoppler() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionDoppler_9981f74b2d109da6]);
            }

            jdouble TdmMetadata::getCorrectionMagnitude() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionMagnitude_9981f74b2d109da6]);
            }

            jdouble TdmMetadata::getCorrectionRange(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionRange_138e545f4642347d], a0.this$);
            }

            jdouble TdmMetadata::getCorrectionRcs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionRcs_9981f74b2d109da6]);
            }

            jdouble TdmMetadata::getCorrectionReceive() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionReceive_9981f74b2d109da6]);
            }

            jdouble TdmMetadata::getCorrectionTransmit() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionTransmit_9981f74b2d109da6]);
            }

            ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied TdmMetadata::getCorrectionsApplied() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied(env->callObjectMethod(this$, mids$[mid_getCorrectionsApplied_ef22fe8964273249]));
            }

            ::org::orekit::files::ccsds::ndm::tdm::DataQuality TdmMetadata::getDataQuality() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::DataQuality(env->callObjectMethod(this$, mids$[mid_getDataQuality_1a736d9e6c4cec43]));
            }

            ::java::util::List TdmMetadata::getDataTypes() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDataTypes_d751c1a57012b438]));
            }

            jdouble TdmMetadata::getDopplerCountBias() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDopplerCountBias_9981f74b2d109da6]);
            }

            jdouble TdmMetadata::getDopplerCountScale() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDopplerCountScale_9981f74b2d109da6]);
            }

            ::java::util::Map TdmMetadata::getEphemerisNames() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getEphemerisNames_dbcb8bbac6b35e0d]));
            }

            jdouble TdmMetadata::getFreqOffset() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getFreqOffset_9981f74b2d109da6]);
            }

            jdouble TdmMetadata::getIntegrationInterval() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIntegrationInterval_9981f74b2d109da6]);
            }

            ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference TdmMetadata::getIntegrationRef() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference(env->callObjectMethod(this$, mids$[mid_getIntegrationRef_62aba6fc000f904d]));
            }

            jint TdmMetadata::getInterpolationDegree() const
            {
              return env->callIntMethod(this$, mids$[mid_getInterpolationDegree_d6ab429752e7c267]);
            }

            ::java::lang::String TdmMetadata::getInterpolationMethod() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_d2c8eb4129821f0e]));
            }

            ::org::orekit::files::ccsds::ndm::tdm::TrackingMode TdmMetadata::getMode() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::TrackingMode(env->callObjectMethod(this$, mids$[mid_getMode_2e6f4b656697c13f]));
            }

            ::java::util::Map TdmMetadata::getParticipants() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getParticipants_dbcb8bbac6b35e0d]));
            }

            JArray< jint > TdmMetadata::getPath() const
            {
              return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPath_d6f20bd740dd34cd]));
            }

            JArray< jint > TdmMetadata::getPath1() const
            {
              return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPath1_d6f20bd740dd34cd]));
            }

            JArray< jint > TdmMetadata::getPath2() const
            {
              return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPath2_d6f20bd740dd34cd]));
            }

            ::org::orekit::files::ccsds::ndm::tdm::RangeMode TdmMetadata::getRangeMode() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::RangeMode(env->callObjectMethod(this$, mids$[mid_getRangeMode_422e9bf90325259d]));
            }

            jdouble TdmMetadata::getRangeModulus(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRangeModulus_138e545f4642347d], a0.this$);
            }

            ::org::orekit::files::ccsds::ndm::tdm::RangeUnits TdmMetadata::getRangeUnits() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::RangeUnits(env->callObjectMethod(this$, mids$[mid_getRangeUnits_005cab2b0475811c]));
            }

            jdouble TdmMetadata::getRawCorrectionRange() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRawCorrectionRange_9981f74b2d109da6]);
            }

            jdouble TdmMetadata::getRawRangeModulus() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRawRangeModulus_9981f74b2d109da6]);
            }

            ::java::lang::String TdmMetadata::getReceiveBand() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReceiveBand_d2c8eb4129821f0e]));
            }

            ::java::util::Map TdmMetadata::getReceiveDelays() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getReceiveDelays_dbcb8bbac6b35e0d]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade TdmMetadata::getReferenceFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_0fc1562b68204151]));
            }

            ::org::orekit::time::AbsoluteDate TdmMetadata::getStartTime() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartTime_80e11148db499dda]));
            }

            ::org::orekit::time::AbsoluteDate TdmMetadata::getStopTime() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopTime_80e11148db499dda]));
            }

            ::org::orekit::files::ccsds::ndm::tdm::TimetagReference TdmMetadata::getTimetagRef() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::TimetagReference(env->callObjectMethod(this$, mids$[mid_getTimetagRef_27f93e75d78a6f80]));
            }

            ::java::lang::String TdmMetadata::getTrackId() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrackId_d2c8eb4129821f0e]));
            }

            ::java::lang::String TdmMetadata::getTransmitBand() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTransmitBand_d2c8eb4129821f0e]));
            }

            ::java::util::Map TdmMetadata::getTransmitDelays() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getTransmitDelays_dbcb8bbac6b35e0d]));
            }

            jint TdmMetadata::getTurnaroundDenominator() const
            {
              return env->callIntMethod(this$, mids$[mid_getTurnaroundDenominator_d6ab429752e7c267]);
            }

            jint TdmMetadata::getTurnaroundNumerator() const
            {
              return env->callIntMethod(this$, mids$[mid_getTurnaroundNumerator_d6ab429752e7c267]);
            }

            jboolean TdmMetadata::hasDopplerCountRollover() const
            {
              return env->callBooleanMethod(this$, mids$[mid_hasDopplerCountRollover_eee3de00fe971136]);
            }

            void TdmMetadata::setAngleType(const ::org::orekit::files::ccsds::ndm::tdm::AngleType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAngleType_fbce4736c60f6abb], a0.this$);
            }

            void TdmMetadata::setCorrectionAberrationDiurnal(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionAberrationDiurnal_1ad26e8c8c0cd65b], a0);
            }

            void TdmMetadata::setCorrectionAberrationYearly(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionAberrationYearly_1ad26e8c8c0cd65b], a0);
            }

            void TdmMetadata::setCorrectionAngle1(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionAngle1_1ad26e8c8c0cd65b], a0);
            }

            void TdmMetadata::setCorrectionAngle2(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionAngle2_1ad26e8c8c0cd65b], a0);
            }

            void TdmMetadata::setCorrectionDoppler(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionDoppler_1ad26e8c8c0cd65b], a0);
            }

            void TdmMetadata::setCorrectionMagnitude(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionMagnitude_1ad26e8c8c0cd65b], a0);
            }

            void TdmMetadata::setCorrectionRcs(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionRcs_1ad26e8c8c0cd65b], a0);
            }

            void TdmMetadata::setCorrectionReceive(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionReceive_1ad26e8c8c0cd65b], a0);
            }

            void TdmMetadata::setCorrectionTransmit(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionTransmit_1ad26e8c8c0cd65b], a0);
            }

            void TdmMetadata::setCorrectionsApplied(const ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionsApplied_0ae77d8288ae6785], a0.this$);
            }

            void TdmMetadata::setDataQuality(const ::org::orekit::files::ccsds::ndm::tdm::DataQuality & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDataQuality_3458cd32d0980090], a0.this$);
            }

            void TdmMetadata::setDataTypes(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDataTypes_aa335fea495d60e0], a0.this$);
            }

            void TdmMetadata::setDopplerCountBias(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDopplerCountBias_1ad26e8c8c0cd65b], a0);
            }

            void TdmMetadata::setDopplerCountRollover(jboolean a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDopplerCountRollover_b35db77cae58639e], a0);
            }

            void TdmMetadata::setDopplerCountScale(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDopplerCountScale_1ad26e8c8c0cd65b], a0);
            }

            void TdmMetadata::setEphemerisNames(const ::java::util::Map & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEphemerisNames_df2bb61624910c2a], a0.this$);
            }

            void TdmMetadata::setFreqOffset(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFreqOffset_1ad26e8c8c0cd65b], a0);
            }

            void TdmMetadata::setIntegrationInterval(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIntegrationInterval_1ad26e8c8c0cd65b], a0);
            }

            void TdmMetadata::setIntegrationRef(const ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIntegrationRef_b2736fca78ccecd6], a0.this$);
            }

            void TdmMetadata::setInterpolationDegree(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setInterpolationDegree_8fd427ab23829bf5], a0);
            }

            void TdmMetadata::setInterpolationMethod(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setInterpolationMethod_105e1eadb709d9ac], a0.this$);
            }

            void TdmMetadata::setMode(const ::org::orekit::files::ccsds::ndm::tdm::TrackingMode & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMode_b928dbb5a5094752], a0.this$);
            }

            void TdmMetadata::setParticipants(const ::java::util::Map & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setParticipants_df2bb61624910c2a], a0.this$);
            }

            void TdmMetadata::setPath(const JArray< jint > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPath_d43202153dd284f7], a0.this$);
            }

            void TdmMetadata::setPath1(const JArray< jint > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPath1_d43202153dd284f7], a0.this$);
            }

            void TdmMetadata::setPath2(const JArray< jint > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPath2_d43202153dd284f7], a0.this$);
            }

            void TdmMetadata::setRangeMode(const ::org::orekit::files::ccsds::ndm::tdm::RangeMode & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRangeMode_711df62c906d850c], a0.this$);
            }

            void TdmMetadata::setRangeUnits(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnits & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRangeUnits_3c5bfdcc53ce0556], a0.this$);
            }

            void TdmMetadata::setRawCorrectionRange(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRawCorrectionRange_1ad26e8c8c0cd65b], a0);
            }

            void TdmMetadata::setRawRangeModulus(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRawRangeModulus_1ad26e8c8c0cd65b], a0);
            }

            void TdmMetadata::setReceiveBand(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setReceiveBand_105e1eadb709d9ac], a0.this$);
            }

            void TdmMetadata::setReceiveDelays(const ::java::util::Map & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setReceiveDelays_df2bb61624910c2a], a0.this$);
            }

            void TdmMetadata::setReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setReferenceFrame_2c8b859a72c0094e], a0.this$);
            }

            void TdmMetadata::setStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setStartTime_8497861b879c83f7], a0.this$);
            }

            void TdmMetadata::setStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setStopTime_8497861b879c83f7], a0.this$);
            }

            void TdmMetadata::setTimetagRef(const ::org::orekit::files::ccsds::ndm::tdm::TimetagReference & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTimetagRef_c7db2db518846dc7], a0.this$);
            }

            void TdmMetadata::setTrackId(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTrackId_105e1eadb709d9ac], a0.this$);
            }

            void TdmMetadata::setTransmitBand(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTransmitBand_105e1eadb709d9ac], a0.this$);
            }

            void TdmMetadata::setTransmitDelays(const ::java::util::Map & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTransmitDelays_df2bb61624910c2a], a0.this$);
            }

            void TdmMetadata::setTurnaroundDenominator(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTurnaroundDenominator_8fd427ab23829bf5], a0);
            }

            void TdmMetadata::setTurnaroundNumerator(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTurnaroundNumerator_8fd427ab23829bf5], a0);
            }

            void TdmMetadata::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_1ad26e8c8c0cd65b], a0);
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
            static PyObject *t_TdmMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_TdmMetadata_init_(t_TdmMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_TdmMetadata_addEphemerisName(t_TdmMetadata *self, PyObject *args);
            static PyObject *t_TdmMetadata_addParticipant(t_TdmMetadata *self, PyObject *args);
            static PyObject *t_TdmMetadata_addReceiveDelay(t_TdmMetadata *self, PyObject *args);
            static PyObject *t_TdmMetadata_addTransmitDelay(t_TdmMetadata *self, PyObject *args);
            static PyObject *t_TdmMetadata_getAngleType(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionAberrationDiurnal(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionAberrationYearly(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionAngle1(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionAngle2(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionDoppler(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionMagnitude(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionRange(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_getCorrectionRcs(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionReceive(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionTransmit(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionsApplied(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getDataQuality(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getDataTypes(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getDopplerCountBias(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getDopplerCountScale(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getEphemerisNames(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getFreqOffset(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getIntegrationInterval(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getIntegrationRef(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getInterpolationDegree(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getInterpolationMethod(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getMode(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getParticipants(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getPath(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getPath1(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getPath2(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getRangeMode(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getRangeModulus(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_getRangeUnits(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getRawCorrectionRange(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getRawRangeModulus(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getReceiveBand(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getReceiveDelays(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getReferenceFrame(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getStartTime(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getStopTime(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTimetagRef(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTrackId(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTransmitBand(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTransmitDelays(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTurnaroundDenominator(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTurnaroundNumerator(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_hasDopplerCountRollover(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_setAngleType(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionAberrationDiurnal(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionAberrationYearly(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionAngle1(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionAngle2(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionDoppler(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionMagnitude(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionRcs(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionReceive(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionTransmit(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionsApplied(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setDataQuality(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setDataTypes(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setDopplerCountBias(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setDopplerCountRollover(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setDopplerCountScale(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setEphemerisNames(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setFreqOffset(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setIntegrationInterval(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setIntegrationRef(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setInterpolationDegree(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setInterpolationMethod(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setMode(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setParticipants(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setPath(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setPath1(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setPath2(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setRangeMode(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setRangeUnits(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setRawCorrectionRange(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setRawRangeModulus(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setReceiveBand(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setReceiveDelays(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setReferenceFrame(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setStartTime(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setStopTime(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTimetagRef(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTrackId(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTransmitBand(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTransmitDelays(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTurnaroundDenominator(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTurnaroundNumerator(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_validate(t_TdmMetadata *self, PyObject *args);
            static PyObject *t_TdmMetadata_get__angleType(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__angleType(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionAberrationDiurnal(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionAberrationDiurnal(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionAberrationYearly(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionAberrationYearly(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionAngle1(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionAngle1(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionAngle2(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionAngle2(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionDoppler(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionDoppler(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionMagnitude(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionMagnitude(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionRcs(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionRcs(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionReceive(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionReceive(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionTransmit(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionTransmit(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionsApplied(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionsApplied(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__dataQuality(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__dataQuality(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__dataTypes(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__dataTypes(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__dopplerCountBias(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__dopplerCountBias(t_TdmMetadata *self, PyObject *arg, void *data);
            static int t_TdmMetadata_set__dopplerCountRollover(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__dopplerCountScale(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__dopplerCountScale(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__ephemerisNames(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__ephemerisNames(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__freqOffset(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__freqOffset(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__integrationInterval(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__integrationInterval(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__integrationRef(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__integrationRef(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__interpolationDegree(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__interpolationDegree(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__interpolationMethod(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__interpolationMethod(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__mode(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__mode(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__participants(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__participants(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__path(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__path(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__path1(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__path1(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__path2(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__path2(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__rangeMode(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__rangeMode(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__rangeUnits(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__rangeUnits(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__rawCorrectionRange(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__rawCorrectionRange(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__rawRangeModulus(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__rawRangeModulus(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__receiveBand(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__receiveBand(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__receiveDelays(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__receiveDelays(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__referenceFrame(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__referenceFrame(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__startTime(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__startTime(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__stopTime(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__stopTime(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__timetagRef(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__timetagRef(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__trackId(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__trackId(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__transmitBand(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__transmitBand(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__transmitDelays(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__transmitDelays(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__turnaroundDenominator(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__turnaroundDenominator(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__turnaroundNumerator(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__turnaroundNumerator(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_TdmMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_TdmMetadata, angleType),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionAberrationDiurnal),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionAberrationYearly),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionAngle1),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionAngle2),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionDoppler),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionMagnitude),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionRcs),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionReceive),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionTransmit),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionsApplied),
              DECLARE_GETSET_FIELD(t_TdmMetadata, dataQuality),
              DECLARE_GETSET_FIELD(t_TdmMetadata, dataTypes),
              DECLARE_GETSET_FIELD(t_TdmMetadata, dopplerCountBias),
              DECLARE_SET_FIELD(t_TdmMetadata, dopplerCountRollover),
              DECLARE_GETSET_FIELD(t_TdmMetadata, dopplerCountScale),
              DECLARE_GETSET_FIELD(t_TdmMetadata, ephemerisNames),
              DECLARE_GETSET_FIELD(t_TdmMetadata, freqOffset),
              DECLARE_GETSET_FIELD(t_TdmMetadata, integrationInterval),
              DECLARE_GETSET_FIELD(t_TdmMetadata, integrationRef),
              DECLARE_GETSET_FIELD(t_TdmMetadata, interpolationDegree),
              DECLARE_GETSET_FIELD(t_TdmMetadata, interpolationMethod),
              DECLARE_GETSET_FIELD(t_TdmMetadata, mode),
              DECLARE_GETSET_FIELD(t_TdmMetadata, participants),
              DECLARE_GETSET_FIELD(t_TdmMetadata, path),
              DECLARE_GETSET_FIELD(t_TdmMetadata, path1),
              DECLARE_GETSET_FIELD(t_TdmMetadata, path2),
              DECLARE_GETSET_FIELD(t_TdmMetadata, rangeMode),
              DECLARE_GETSET_FIELD(t_TdmMetadata, rangeUnits),
              DECLARE_GETSET_FIELD(t_TdmMetadata, rawCorrectionRange),
              DECLARE_GETSET_FIELD(t_TdmMetadata, rawRangeModulus),
              DECLARE_GETSET_FIELD(t_TdmMetadata, receiveBand),
              DECLARE_GETSET_FIELD(t_TdmMetadata, receiveDelays),
              DECLARE_GETSET_FIELD(t_TdmMetadata, referenceFrame),
              DECLARE_GETSET_FIELD(t_TdmMetadata, startTime),
              DECLARE_GETSET_FIELD(t_TdmMetadata, stopTime),
              DECLARE_GETSET_FIELD(t_TdmMetadata, timetagRef),
              DECLARE_GETSET_FIELD(t_TdmMetadata, trackId),
              DECLARE_GETSET_FIELD(t_TdmMetadata, transmitBand),
              DECLARE_GETSET_FIELD(t_TdmMetadata, transmitDelays),
              DECLARE_GETSET_FIELD(t_TdmMetadata, turnaroundDenominator),
              DECLARE_GETSET_FIELD(t_TdmMetadata, turnaroundNumerator),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TdmMetadata__methods_[] = {
              DECLARE_METHOD(t_TdmMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmMetadata, addEphemerisName, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadata, addParticipant, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadata, addReceiveDelay, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadata, addTransmitDelay, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadata, getAngleType, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionAberrationDiurnal, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionAberrationYearly, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionAngle1, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionAngle2, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionDoppler, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionMagnitude, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionRange, METH_O),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionRcs, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionReceive, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionTransmit, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionsApplied, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getDataQuality, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getDataTypes, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getDopplerCountBias, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getDopplerCountScale, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getEphemerisNames, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getFreqOffset, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getIntegrationInterval, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getIntegrationRef, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getInterpolationDegree, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getInterpolationMethod, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getMode, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getParticipants, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getPath, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getPath1, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getPath2, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getRangeMode, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getRangeModulus, METH_O),
              DECLARE_METHOD(t_TdmMetadata, getRangeUnits, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getRawCorrectionRange, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getRawRangeModulus, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getReceiveBand, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getReceiveDelays, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getReferenceFrame, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getStartTime, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getStopTime, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTimetagRef, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTrackId, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTransmitBand, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTransmitDelays, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTurnaroundDenominator, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTurnaroundNumerator, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, hasDopplerCountRollover, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, setAngleType, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionAberrationDiurnal, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionAberrationYearly, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionAngle1, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionAngle2, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionDoppler, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionMagnitude, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionRcs, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionReceive, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionTransmit, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionsApplied, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setDataQuality, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setDataTypes, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setDopplerCountBias, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setDopplerCountRollover, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setDopplerCountScale, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setEphemerisNames, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setFreqOffset, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setIntegrationInterval, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setIntegrationRef, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setInterpolationDegree, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setInterpolationMethod, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setMode, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setParticipants, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setPath, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setPath1, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setPath2, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setRangeMode, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setRangeUnits, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setRawCorrectionRange, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setRawRangeModulus, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setReceiveBand, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setReceiveDelays, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setReferenceFrame, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setStartTime, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setStopTime, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTimetagRef, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTrackId, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTransmitBand, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTransmitDelays, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTurnaroundDenominator, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTurnaroundNumerator, METH_O),
              DECLARE_METHOD(t_TdmMetadata, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmMetadata)[] = {
              { Py_tp_methods, t_TdmMetadata__methods_ },
              { Py_tp_init, (void *) t_TdmMetadata_init_ },
              { Py_tp_getset, t_TdmMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Metadata),
              NULL
            };

            DEFINE_TYPE(TdmMetadata, t_TdmMetadata, TdmMetadata);

            void t_TdmMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmMetadata), &PY_TYPE_DEF(TdmMetadata), module, "TdmMetadata", 0);
            }

            void t_TdmMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadata), "class_", make_descriptor(TdmMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadata), "wrapfn_", make_descriptor(t_TdmMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_TdmMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmMetadata::initializeClass, 1)))
                return NULL;
              return t_TdmMetadata::wrap_Object(TdmMetadata(((t_TdmMetadata *) arg)->object.this$));
            }
            static PyObject *t_TdmMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_TdmMetadata_init_(t_TdmMetadata *self, PyObject *args, PyObject *kwds)
            {
              TdmMetadata object((jobject) NULL);

              INT_CALL(object = TdmMetadata());
              self->object = object;

              return 0;
            }

            static PyObject *t_TdmMetadata_addEphemerisName(t_TdmMetadata *self, PyObject *args)
            {
              jint a0;
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "Is", &a0, &a1))
              {
                OBJ_CALL(self->object.addEphemerisName(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addEphemerisName", args);
              return NULL;
            }

            static PyObject *t_TdmMetadata_addParticipant(t_TdmMetadata *self, PyObject *args)
            {
              jint a0;
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "Is", &a0, &a1))
              {
                OBJ_CALL(self->object.addParticipant(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addParticipant", args);
              return NULL;
            }

            static PyObject *t_TdmMetadata_addReceiveDelay(t_TdmMetadata *self, PyObject *args)
            {
              jint a0;
              jdouble a1;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(self->object.addReceiveDelay(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addReceiveDelay", args);
              return NULL;
            }

            static PyObject *t_TdmMetadata_addTransmitDelay(t_TdmMetadata *self, PyObject *args)
            {
              jint a0;
              jdouble a1;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(self->object.addTransmitDelay(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addTransmitDelay", args);
              return NULL;
            }

            static PyObject *t_TdmMetadata_getAngleType(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::AngleType result((jobject) NULL);
              OBJ_CALL(result = self->object.getAngleType());
              return ::org::orekit::files::ccsds::ndm::tdm::t_AngleType::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getCorrectionAberrationDiurnal(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionAberrationDiurnal());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionAberrationYearly(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionAberrationYearly());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionAngle1(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionAngle1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionAngle2(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionAngle2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionDoppler(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionDoppler());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionMagnitude(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionMagnitude());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionRange(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getCorrectionRange(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCorrectionRange", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_getCorrectionRcs(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionRcs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionReceive(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionReceive());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionTransmit(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionTransmit());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionsApplied(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied result((jobject) NULL);
              OBJ_CALL(result = self->object.getCorrectionsApplied());
              return ::org::orekit::files::ccsds::ndm::tdm::t_CorrectionApplied::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getDataQuality(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::DataQuality result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataQuality());
              return ::org::orekit::files::ccsds::ndm::tdm::t_DataQuality::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getDataTypes(t_TdmMetadata *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataTypes());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::tdm::PY_TYPE(ObservationType));
            }

            static PyObject *t_TdmMetadata_getDopplerCountBias(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDopplerCountBias());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getDopplerCountScale(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDopplerCountScale());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getEphemerisNames(t_TdmMetadata *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getEphemerisNames());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_TdmMetadata_getFreqOffset(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getFreqOffset());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getIntegrationInterval(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIntegrationInterval());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getIntegrationRef(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference result((jobject) NULL);
              OBJ_CALL(result = self->object.getIntegrationRef());
              return ::org::orekit::files::ccsds::ndm::tdm::t_IntegrationReference::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getInterpolationDegree(t_TdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getInterpolationDegree());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_TdmMetadata_getInterpolationMethod(t_TdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getInterpolationMethod());
              return j2p(result);
            }

            static PyObject *t_TdmMetadata_getMode(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TrackingMode result((jobject) NULL);
              OBJ_CALL(result = self->object.getMode());
              return ::org::orekit::files::ccsds::ndm::tdm::t_TrackingMode::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getParticipants(t_TdmMetadata *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getParticipants());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_TdmMetadata_getPath(t_TdmMetadata *self)
            {
              JArray< jint > result((jobject) NULL);
              OBJ_CALL(result = self->object.getPath());
              return result.wrap();
            }

            static PyObject *t_TdmMetadata_getPath1(t_TdmMetadata *self)
            {
              JArray< jint > result((jobject) NULL);
              OBJ_CALL(result = self->object.getPath1());
              return result.wrap();
            }

            static PyObject *t_TdmMetadata_getPath2(t_TdmMetadata *self)
            {
              JArray< jint > result((jobject) NULL);
              OBJ_CALL(result = self->object.getPath2());
              return result.wrap();
            }

            static PyObject *t_TdmMetadata_getRangeMode(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeMode result((jobject) NULL);
              OBJ_CALL(result = self->object.getRangeMode());
              return ::org::orekit::files::ccsds::ndm::tdm::t_RangeMode::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getRangeModulus(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getRangeModulus(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getRangeModulus", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_getRangeUnits(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnits result((jobject) NULL);
              OBJ_CALL(result = self->object.getRangeUnits());
              return ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnits::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getRawCorrectionRange(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRawCorrectionRange());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getRawRangeModulus(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRawRangeModulus());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getReceiveBand(t_TdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getReceiveBand());
              return j2p(result);
            }

            static PyObject *t_TdmMetadata_getReceiveDelays(t_TdmMetadata *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getReceiveDelays());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::java::lang::PY_TYPE(Double));
            }

            static PyObject *t_TdmMetadata_getReferenceFrame(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getStartTime(t_TdmMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getStartTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getStopTime(t_TdmMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getStopTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getTimetagRef(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TimetagReference result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimetagRef());
              return ::org::orekit::files::ccsds::ndm::tdm::t_TimetagReference::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getTrackId(t_TdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getTrackId());
              return j2p(result);
            }

            static PyObject *t_TdmMetadata_getTransmitBand(t_TdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getTransmitBand());
              return j2p(result);
            }

            static PyObject *t_TdmMetadata_getTransmitDelays(t_TdmMetadata *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getTransmitDelays());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::java::lang::PY_TYPE(Double));
            }

            static PyObject *t_TdmMetadata_getTurnaroundDenominator(t_TdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getTurnaroundDenominator());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_TdmMetadata_getTurnaroundNumerator(t_TdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getTurnaroundNumerator());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_TdmMetadata_hasDopplerCountRollover(t_TdmMetadata *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.hasDopplerCountRollover());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_TdmMetadata_setAngleType(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::AngleType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::AngleType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_AngleType::parameters_))
              {
                OBJ_CALL(self->object.setAngleType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAngleType", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionAberrationDiurnal(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionAberrationDiurnal(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionAberrationDiurnal", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionAberrationYearly(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionAberrationYearly(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionAberrationYearly", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionAngle1(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionAngle1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionAngle1", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionAngle2(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionAngle2(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionAngle2", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionDoppler(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionDoppler(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionDoppler", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionMagnitude(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionMagnitude(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionMagnitude", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionRcs(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionRcs(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionRcs", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionReceive(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionReceive(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionReceive", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionTransmit(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionTransmit(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionTransmit", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionsApplied(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_CorrectionApplied::parameters_))
              {
                OBJ_CALL(self->object.setCorrectionsApplied(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionsApplied", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setDataQuality(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::DataQuality a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::DataQuality::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_DataQuality::parameters_))
              {
                OBJ_CALL(self->object.setDataQuality(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDataQuality", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setDataTypes(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.setDataTypes(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDataTypes", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setDopplerCountBias(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDopplerCountBias(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDopplerCountBias", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setDopplerCountRollover(t_TdmMetadata *self, PyObject *arg)
            {
              jboolean a0;

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(self->object.setDopplerCountRollover(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDopplerCountRollover", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setDopplerCountScale(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDopplerCountScale(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDopplerCountScale", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setEphemerisNames(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::util::Map a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(self->object.setEphemerisNames(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEphemerisNames", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setFreqOffset(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setFreqOffset(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFreqOffset", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setIntegrationInterval(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIntegrationInterval(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIntegrationInterval", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setIntegrationRef(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_IntegrationReference::parameters_))
              {
                OBJ_CALL(self->object.setIntegrationRef(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIntegrationRef", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setInterpolationDegree(t_TdmMetadata *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setInterpolationDegree(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setInterpolationDegree", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setInterpolationMethod(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setInterpolationMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setInterpolationMethod", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setMode(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TrackingMode a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::TrackingMode::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_TrackingMode::parameters_))
              {
                OBJ_CALL(self->object.setMode(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMode", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setParticipants(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::util::Map a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(self->object.setParticipants(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setParticipants", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setPath(t_TdmMetadata *self, PyObject *arg)
            {
              JArray< jint > a0((jobject) NULL);

              if (!parseArg(arg, "[I", &a0))
              {
                OBJ_CALL(self->object.setPath(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPath", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setPath1(t_TdmMetadata *self, PyObject *arg)
            {
              JArray< jint > a0((jobject) NULL);

              if (!parseArg(arg, "[I", &a0))
              {
                OBJ_CALL(self->object.setPath1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPath1", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setPath2(t_TdmMetadata *self, PyObject *arg)
            {
              JArray< jint > a0((jobject) NULL);

              if (!parseArg(arg, "[I", &a0))
              {
                OBJ_CALL(self->object.setPath2(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPath2", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setRangeMode(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeMode a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::RangeMode::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_RangeMode::parameters_))
              {
                OBJ_CALL(self->object.setRangeMode(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRangeMode", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setRangeUnits(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnits a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::RangeUnits::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnits::parameters_))
              {
                OBJ_CALL(self->object.setRangeUnits(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRangeUnits", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setRawCorrectionRange(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRawCorrectionRange(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRawCorrectionRange", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setRawRangeModulus(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRawRangeModulus(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRawRangeModulus", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setReceiveBand(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setReceiveBand(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setReceiveBand", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setReceiveDelays(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::util::Map a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(self->object.setReceiveDelays(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setReceiveDelays", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setReferenceFrame(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setReferenceFrame(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setReferenceFrame", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setStartTime(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setStartTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setStartTime", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setStopTime(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setStopTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setStopTime", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTimetagRef(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TimetagReference a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::TimetagReference::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_TimetagReference::parameters_))
              {
                OBJ_CALL(self->object.setTimetagRef(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTimetagRef", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTrackId(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setTrackId(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTrackId", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTransmitBand(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setTransmitBand(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTransmitBand", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTransmitDelays(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::util::Map a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(self->object.setTransmitDelays(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTransmitDelays", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTurnaroundDenominator(t_TdmMetadata *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setTurnaroundDenominator(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTurnaroundDenominator", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTurnaroundNumerator(t_TdmMetadata *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setTurnaroundNumerator(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTurnaroundNumerator", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_validate(t_TdmMetadata *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(TdmMetadata), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_TdmMetadata_get__angleType(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::AngleType value((jobject) NULL);
              OBJ_CALL(value = self->object.getAngleType());
              return ::org::orekit::files::ccsds::ndm::tdm::t_AngleType::wrap_Object(value);
            }
            static int t_TdmMetadata_set__angleType(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::AngleType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::AngleType::initializeClass, &value))
                {
                  INT_CALL(self->object.setAngleType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "angleType", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionAberrationDiurnal(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionAberrationDiurnal());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionAberrationDiurnal(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionAberrationDiurnal(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionAberrationDiurnal", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionAberrationYearly(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionAberrationYearly());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionAberrationYearly(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionAberrationYearly(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionAberrationYearly", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionAngle1(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionAngle1());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionAngle1(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionAngle1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionAngle1", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionAngle2(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionAngle2());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionAngle2(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionAngle2(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionAngle2", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionDoppler(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionDoppler());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionDoppler(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionDoppler(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionDoppler", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionMagnitude(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionMagnitude());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionMagnitude(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionMagnitude(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionMagnitude", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionRcs(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionRcs());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionRcs(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionRcs(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionRcs", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionReceive(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionReceive());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionReceive(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionReceive(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionReceive", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionTransmit(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionTransmit());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionTransmit(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionTransmit(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionTransmit", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionsApplied(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied value((jobject) NULL);
              OBJ_CALL(value = self->object.getCorrectionsApplied());
              return ::org::orekit::files::ccsds::ndm::tdm::t_CorrectionApplied::wrap_Object(value);
            }
            static int t_TdmMetadata_set__correctionsApplied(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied::initializeClass, &value))
                {
                  INT_CALL(self->object.setCorrectionsApplied(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionsApplied", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__dataQuality(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::DataQuality value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataQuality());
              return ::org::orekit::files::ccsds::ndm::tdm::t_DataQuality::wrap_Object(value);
            }
            static int t_TdmMetadata_set__dataQuality(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::DataQuality value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::DataQuality::initializeClass, &value))
                {
                  INT_CALL(self->object.setDataQuality(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dataQuality", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__dataTypes(t_TdmMetadata *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataTypes());
              return ::java::util::t_List::wrap_Object(value);
            }
            static int t_TdmMetadata_set__dataTypes(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::util::List value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                {
                  INT_CALL(self->object.setDataTypes(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dataTypes", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__dopplerCountBias(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDopplerCountBias());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__dopplerCountBias(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDopplerCountBias(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dopplerCountBias", arg);
              return -1;
            }

            static int t_TdmMetadata_set__dopplerCountRollover(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jboolean value;
                if (!parseArg(arg, "Z", &value))
                {
                  INT_CALL(self->object.setDopplerCountRollover(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dopplerCountRollover", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__dopplerCountScale(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDopplerCountScale());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__dopplerCountScale(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDopplerCountScale(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dopplerCountScale", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__ephemerisNames(t_TdmMetadata *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getEphemerisNames());
              return ::java::util::t_Map::wrap_Object(value);
            }
            static int t_TdmMetadata_set__ephemerisNames(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::util::Map value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::Map::initializeClass, &value))
                {
                  INT_CALL(self->object.setEphemerisNames(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ephemerisNames", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__freqOffset(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getFreqOffset());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__freqOffset(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setFreqOffset(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "freqOffset", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__integrationInterval(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIntegrationInterval());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__integrationInterval(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIntegrationInterval(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "integrationInterval", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__integrationRef(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference value((jobject) NULL);
              OBJ_CALL(value = self->object.getIntegrationRef());
              return ::org::orekit::files::ccsds::ndm::tdm::t_IntegrationReference::wrap_Object(value);
            }
            static int t_TdmMetadata_set__integrationRef(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference::initializeClass, &value))
                {
                  INT_CALL(self->object.setIntegrationRef(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "integrationRef", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__interpolationDegree(t_TdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getInterpolationDegree());
              return PyLong_FromLong((long) value);
            }
            static int t_TdmMetadata_set__interpolationDegree(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setInterpolationDegree(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "interpolationDegree", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__interpolationMethod(t_TdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getInterpolationMethod());
              return j2p(value);
            }
            static int t_TdmMetadata_set__interpolationMethod(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setInterpolationMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "interpolationMethod", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__mode(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TrackingMode value((jobject) NULL);
              OBJ_CALL(value = self->object.getMode());
              return ::org::orekit::files::ccsds::ndm::tdm::t_TrackingMode::wrap_Object(value);
            }
            static int t_TdmMetadata_set__mode(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::TrackingMode value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::TrackingMode::initializeClass, &value))
                {
                  INT_CALL(self->object.setMode(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "mode", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__participants(t_TdmMetadata *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getParticipants());
              return ::java::util::t_Map::wrap_Object(value);
            }
            static int t_TdmMetadata_set__participants(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::util::Map value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::Map::initializeClass, &value))
                {
                  INT_CALL(self->object.setParticipants(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "participants", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__path(t_TdmMetadata *self, void *data)
            {
              JArray< jint > value((jobject) NULL);
              OBJ_CALL(value = self->object.getPath());
              return value.wrap();
            }
            static int t_TdmMetadata_set__path(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jint > value((jobject) NULL);
                if (!parseArg(arg, "[I", &value))
                {
                  INT_CALL(self->object.setPath(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "path", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__path1(t_TdmMetadata *self, void *data)
            {
              JArray< jint > value((jobject) NULL);
              OBJ_CALL(value = self->object.getPath1());
              return value.wrap();
            }
            static int t_TdmMetadata_set__path1(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jint > value((jobject) NULL);
                if (!parseArg(arg, "[I", &value))
                {
                  INT_CALL(self->object.setPath1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "path1", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__path2(t_TdmMetadata *self, void *data)
            {
              JArray< jint > value((jobject) NULL);
              OBJ_CALL(value = self->object.getPath2());
              return value.wrap();
            }
            static int t_TdmMetadata_set__path2(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jint > value((jobject) NULL);
                if (!parseArg(arg, "[I", &value))
                {
                  INT_CALL(self->object.setPath2(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "path2", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__rangeMode(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeMode value((jobject) NULL);
              OBJ_CALL(value = self->object.getRangeMode());
              return ::org::orekit::files::ccsds::ndm::tdm::t_RangeMode::wrap_Object(value);
            }
            static int t_TdmMetadata_set__rangeMode(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::RangeMode value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::RangeMode::initializeClass, &value))
                {
                  INT_CALL(self->object.setRangeMode(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "rangeMode", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__rangeUnits(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnits value((jobject) NULL);
              OBJ_CALL(value = self->object.getRangeUnits());
              return ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnits::wrap_Object(value);
            }
            static int t_TdmMetadata_set__rangeUnits(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::RangeUnits value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::RangeUnits::initializeClass, &value))
                {
                  INT_CALL(self->object.setRangeUnits(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "rangeUnits", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__rawCorrectionRange(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRawCorrectionRange());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__rawCorrectionRange(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRawCorrectionRange(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "rawCorrectionRange", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__rawRangeModulus(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRawRangeModulus());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__rawRangeModulus(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRawRangeModulus(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "rawRangeModulus", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__receiveBand(t_TdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getReceiveBand());
              return j2p(value);
            }
            static int t_TdmMetadata_set__receiveBand(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setReceiveBand(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "receiveBand", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__receiveDelays(t_TdmMetadata *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getReceiveDelays());
              return ::java::util::t_Map::wrap_Object(value);
            }
            static int t_TdmMetadata_set__receiveDelays(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::util::Map value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::Map::initializeClass, &value))
                {
                  INT_CALL(self->object.setReceiveDelays(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "receiveDelays", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__referenceFrame(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_TdmMetadata_set__referenceFrame(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setReferenceFrame(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "referenceFrame", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__startTime(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getStartTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_TdmMetadata_set__startTime(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setStartTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "startTime", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__stopTime(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getStopTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_TdmMetadata_set__stopTime(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setStopTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "stopTime", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__timetagRef(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TimetagReference value((jobject) NULL);
              OBJ_CALL(value = self->object.getTimetagRef());
              return ::org::orekit::files::ccsds::ndm::tdm::t_TimetagReference::wrap_Object(value);
            }
            static int t_TdmMetadata_set__timetagRef(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::TimetagReference value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::TimetagReference::initializeClass, &value))
                {
                  INT_CALL(self->object.setTimetagRef(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "timetagRef", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__trackId(t_TdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getTrackId());
              return j2p(value);
            }
            static int t_TdmMetadata_set__trackId(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setTrackId(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "trackId", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__transmitBand(t_TdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getTransmitBand());
              return j2p(value);
            }
            static int t_TdmMetadata_set__transmitBand(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setTransmitBand(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "transmitBand", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__transmitDelays(t_TdmMetadata *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getTransmitDelays());
              return ::java::util::t_Map::wrap_Object(value);
            }
            static int t_TdmMetadata_set__transmitDelays(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::util::Map value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::Map::initializeClass, &value))
                {
                  INT_CALL(self->object.setTransmitDelays(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "transmitDelays", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__turnaroundDenominator(t_TdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getTurnaroundDenominator());
              return PyLong_FromLong((long) value);
            }
            static int t_TdmMetadata_set__turnaroundDenominator(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setTurnaroundDenominator(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "turnaroundDenominator", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__turnaroundNumerator(t_TdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getTurnaroundNumerator());
              return PyLong_FromLong((long) value);
            }
            static int t_TdmMetadata_set__turnaroundNumerator(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setTurnaroundNumerator(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "turnaroundNumerator", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ImmutableTimeStampedCache.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/utils/TimeStampedCache.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/Collection.h"
#include "org/orekit/utils/ImmutableTimeStampedCache.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ImmutableTimeStampedCache::class$ = NULL;
      jmethodID *ImmutableTimeStampedCache::mids$ = NULL;
      bool ImmutableTimeStampedCache::live$ = false;

      jclass ImmutableTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ImmutableTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1d943e35e7f31ea1] = env->getMethodID(cls, "<init>", "(ILjava/util/Collection;)V");
          mids$[mid_emptyCache_2f7820789ca74a92] = env->getStaticMethodID(cls, "emptyCache", "()Lorg/orekit/utils/ImmutableTimeStampedCache;");
          mids$[mid_getAll_d751c1a57012b438] = env->getMethodID(cls, "getAll", "()Ljava/util/List;");
          mids$[mid_getEarliest_80bbab87cd34ef1a] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getLatest_80bbab87cd34ef1a] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getMaxNeighborsSize_d6ab429752e7c267] = env->getMethodID(cls, "getMaxNeighborsSize", "()I");
          mids$[mid_getNeighbors_ad75bac85cbb88e7] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ImmutableTimeStampedCache::ImmutableTimeStampedCache(jint a0, const ::java::util::Collection & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d943e35e7f31ea1, a0, a1.this$)) {}

      ImmutableTimeStampedCache ImmutableTimeStampedCache::emptyCache()
      {
        jclass cls = env->getClass(initializeClass);
        return ImmutableTimeStampedCache(env->callStaticObjectMethod(cls, mids$[mid_emptyCache_2f7820789ca74a92]));
      }

      ::java::util::List ImmutableTimeStampedCache::getAll() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAll_d751c1a57012b438]));
      }

      ::org::orekit::time::TimeStamped ImmutableTimeStampedCache::getEarliest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getEarliest_80bbab87cd34ef1a]));
      }

      ::org::orekit::time::TimeStamped ImmutableTimeStampedCache::getLatest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getLatest_80bbab87cd34ef1a]));
      }

      jint ImmutableTimeStampedCache::getMaxNeighborsSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxNeighborsSize_d6ab429752e7c267]);
      }

      ::java::util::stream::Stream ImmutableTimeStampedCache::getNeighbors(const ::org::orekit::time::AbsoluteDate & a0, jint a1) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_ad75bac85cbb88e7], a0.this$, a1));
      }

      ::java::lang::String ImmutableTimeStampedCache::toString() const
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
    namespace utils {
      static PyObject *t_ImmutableTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ImmutableTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ImmutableTimeStampedCache_of_(t_ImmutableTimeStampedCache *self, PyObject *args);
      static int t_ImmutableTimeStampedCache_init_(t_ImmutableTimeStampedCache *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ImmutableTimeStampedCache_emptyCache(PyTypeObject *type);
      static PyObject *t_ImmutableTimeStampedCache_getAll(t_ImmutableTimeStampedCache *self);
      static PyObject *t_ImmutableTimeStampedCache_getEarliest(t_ImmutableTimeStampedCache *self);
      static PyObject *t_ImmutableTimeStampedCache_getLatest(t_ImmutableTimeStampedCache *self);
      static PyObject *t_ImmutableTimeStampedCache_getMaxNeighborsSize(t_ImmutableTimeStampedCache *self);
      static PyObject *t_ImmutableTimeStampedCache_getNeighbors(t_ImmutableTimeStampedCache *self, PyObject *args);
      static PyObject *t_ImmutableTimeStampedCache_toString(t_ImmutableTimeStampedCache *self, PyObject *args);
      static PyObject *t_ImmutableTimeStampedCache_get__all(t_ImmutableTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableTimeStampedCache_get__earliest(t_ImmutableTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableTimeStampedCache_get__latest(t_ImmutableTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableTimeStampedCache_get__maxNeighborsSize(t_ImmutableTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableTimeStampedCache_get__parameters_(t_ImmutableTimeStampedCache *self, void *data);
      static PyGetSetDef t_ImmutableTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_ImmutableTimeStampedCache, all),
        DECLARE_GET_FIELD(t_ImmutableTimeStampedCache, earliest),
        DECLARE_GET_FIELD(t_ImmutableTimeStampedCache, latest),
        DECLARE_GET_FIELD(t_ImmutableTimeStampedCache, maxNeighborsSize),
        DECLARE_GET_FIELD(t_ImmutableTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ImmutableTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_ImmutableTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, emptyCache, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, getAll, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, getEarliest, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, getLatest, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, getMaxNeighborsSize, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, getNeighbors, METH_VARARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ImmutableTimeStampedCache)[] = {
        { Py_tp_methods, t_ImmutableTimeStampedCache__methods_ },
        { Py_tp_init, (void *) t_ImmutableTimeStampedCache_init_ },
        { Py_tp_getset, t_ImmutableTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ImmutableTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ImmutableTimeStampedCache, t_ImmutableTimeStampedCache, ImmutableTimeStampedCache);
      PyObject *t_ImmutableTimeStampedCache::wrap_Object(const ImmutableTimeStampedCache& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ImmutableTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ImmutableTimeStampedCache *self = (t_ImmutableTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ImmutableTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ImmutableTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ImmutableTimeStampedCache *self = (t_ImmutableTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ImmutableTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(ImmutableTimeStampedCache), &PY_TYPE_DEF(ImmutableTimeStampedCache), module, "ImmutableTimeStampedCache", 0);
      }

      void t_ImmutableTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableTimeStampedCache), "class_", make_descriptor(ImmutableTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableTimeStampedCache), "wrapfn_", make_descriptor(t_ImmutableTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableTimeStampedCache), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ImmutableTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ImmutableTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_ImmutableTimeStampedCache::wrap_Object(ImmutableTimeStampedCache(((t_ImmutableTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_ImmutableTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ImmutableTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ImmutableTimeStampedCache_of_(t_ImmutableTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_ImmutableTimeStampedCache_init_(t_ImmutableTimeStampedCache *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ImmutableTimeStampedCache object((jobject) NULL);

        if (!parseArgs(args, "IK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          INT_CALL(object = ImmutableTimeStampedCache(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ImmutableTimeStampedCache_emptyCache(PyTypeObject *type)
      {
        ImmutableTimeStampedCache result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::utils::ImmutableTimeStampedCache::emptyCache());
        return t_ImmutableTimeStampedCache::wrap_Object(result);
      }

      static PyObject *t_ImmutableTimeStampedCache_getAll(t_ImmutableTimeStampedCache *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAll());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ImmutableTimeStampedCache_getEarliest(t_ImmutableTimeStampedCache *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarliest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_ImmutableTimeStampedCache_getLatest(t_ImmutableTimeStampedCache *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_ImmutableTimeStampedCache_getMaxNeighborsSize(t_ImmutableTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxNeighborsSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ImmutableTimeStampedCache_getNeighbors(t_ImmutableTimeStampedCache *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jint a1;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArgs(args, "kI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getNeighbors(a0, a1));
          return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getNeighbors", args);
        return NULL;
      }

      static PyObject *t_ImmutableTimeStampedCache_toString(t_ImmutableTimeStampedCache *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(ImmutableTimeStampedCache), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_ImmutableTimeStampedCache_get__parameters_(t_ImmutableTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ImmutableTimeStampedCache_get__all(t_ImmutableTimeStampedCache *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAll());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ImmutableTimeStampedCache_get__earliest(t_ImmutableTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarliest());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_ImmutableTimeStampedCache_get__latest(t_ImmutableTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatest());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_ImmutableTimeStampedCache_get__maxNeighborsSize(t_ImmutableTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxNeighborsSize());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/AdjustmentContext.h"
#include "org/orekit/rugged/adjustment/OptimizerId.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "java/util/Collection.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/adjustment/measurements/Observables.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *AdjustmentContext::class$ = NULL;
        jmethodID *AdjustmentContext::mids$ = NULL;
        bool AdjustmentContext::live$ = false;

        jclass AdjustmentContext::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/AdjustmentContext");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_48f32020a10b9fa6] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;Lorg/orekit/rugged/adjustment/measurements/Observables;)V");
            mids$[mid_estimateFreeParameters_2218ebbd29fd2c3e] = env->getMethodID(cls, "estimateFreeParameters", "(Ljava/util/Collection;ID)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");
            mids$[mid_setOptimizer_3baa1ef9d5c66967] = env->getMethodID(cls, "setOptimizer", "(Lorg/orekit/rugged/adjustment/OptimizerId;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdjustmentContext::AdjustmentContext(const ::java::util::Collection & a0, const ::org::orekit::rugged::adjustment::measurements::Observables & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_48f32020a10b9fa6, a0.this$, a1.this$)) {}

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum AdjustmentContext::estimateFreeParameters(const ::java::util::Collection & a0, jint a1, jdouble a2) const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_estimateFreeParameters_2218ebbd29fd2c3e], a0.this$, a1, a2));
        }

        void AdjustmentContext::setOptimizer(const ::org::orekit::rugged::adjustment::OptimizerId & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOptimizer_3baa1ef9d5c66967], a0.this$);
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
        static PyObject *t_AdjustmentContext_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdjustmentContext_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdjustmentContext_init_(t_AdjustmentContext *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdjustmentContext_estimateFreeParameters(t_AdjustmentContext *self, PyObject *args);
        static PyObject *t_AdjustmentContext_setOptimizer(t_AdjustmentContext *self, PyObject *arg);
        static int t_AdjustmentContext_set__optimizer(t_AdjustmentContext *self, PyObject *arg, void *data);
        static PyGetSetDef t_AdjustmentContext__fields_[] = {
          DECLARE_SET_FIELD(t_AdjustmentContext, optimizer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdjustmentContext__methods_[] = {
          DECLARE_METHOD(t_AdjustmentContext, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdjustmentContext, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdjustmentContext, estimateFreeParameters, METH_VARARGS),
          DECLARE_METHOD(t_AdjustmentContext, setOptimizer, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdjustmentContext)[] = {
          { Py_tp_methods, t_AdjustmentContext__methods_ },
          { Py_tp_init, (void *) t_AdjustmentContext_init_ },
          { Py_tp_getset, t_AdjustmentContext__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdjustmentContext)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdjustmentContext, t_AdjustmentContext, AdjustmentContext);

        void t_AdjustmentContext::install(PyObject *module)
        {
          installType(&PY_TYPE(AdjustmentContext), &PY_TYPE_DEF(AdjustmentContext), module, "AdjustmentContext", 0);
        }

        void t_AdjustmentContext::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdjustmentContext), "class_", make_descriptor(AdjustmentContext::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdjustmentContext), "wrapfn_", make_descriptor(t_AdjustmentContext::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdjustmentContext), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdjustmentContext_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdjustmentContext::initializeClass, 1)))
            return NULL;
          return t_AdjustmentContext::wrap_Object(AdjustmentContext(((t_AdjustmentContext *) arg)->object.this$));
        }
        static PyObject *t_AdjustmentContext_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdjustmentContext::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdjustmentContext_init_(t_AdjustmentContext *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::rugged::adjustment::measurements::Observables a1((jobject) NULL);
          AdjustmentContext object((jobject) NULL);

          if (!parseArgs(args, "Kk", ::java::util::Collection::initializeClass, ::org::orekit::rugged::adjustment::measurements::Observables::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
          {
            INT_CALL(object = AdjustmentContext(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdjustmentContext_estimateFreeParameters(t_AdjustmentContext *self, PyObject *args)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jdouble a2;
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);

          if (!parseArgs(args, "KID", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1, &a2))
          {
            OBJ_CALL(result = self->object.estimateFreeParameters(a0, a1, a2));
            return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimateFreeParameters", args);
          return NULL;
        }

        static PyObject *t_AdjustmentContext_setOptimizer(t_AdjustmentContext *self, PyObject *arg)
        {
          ::org::orekit::rugged::adjustment::OptimizerId a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::rugged::adjustment::OptimizerId::initializeClass, &a0, &p0, ::org::orekit::rugged::adjustment::t_OptimizerId::parameters_))
          {
            OBJ_CALL(self->object.setOptimizer(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOptimizer", arg);
          return NULL;
        }

        static int t_AdjustmentContext_set__optimizer(t_AdjustmentContext *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::rugged::adjustment::OptimizerId value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::rugged::adjustment::OptimizerId::initializeClass, &value))
            {
              INT_CALL(self->object.setOptimizer(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "optimizer", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryState.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *TrajectoryState::class$ = NULL;
              jmethodID *TrajectoryState::mids$ = NULL;
              bool TrajectoryState::live$ = false;

              jclass TrajectoryState::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryState");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_62b537ccbcddb5e1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;Lorg/orekit/time/AbsoluteDate;[D)V");
                  mids$[mid_init$_c1ba554c09126b20] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;Lorg/orekit/time/AbsoluteDate;[Ljava/lang/String;ILjava/util/List;)V");
                  mids$[mid_getAvailableDerivatives_b9dfc27d8c56b5de] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
                  mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getElements_be783177b060994b] = env->getMethodID(cls, "getElements", "()[D");
                  mids$[mid_getType_53d3e424bd18099f] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");
                  mids$[mid_toCartesian_294c6d2de2ee7b4e] = env->getMethodID(cls, "toCartesian", "(Lorg/orekit/bodies/OneAxisEllipsoid;D)Lorg/orekit/utils/TimeStampedPVCoordinates;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              TrajectoryState::TrajectoryState(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType & a0, const ::org::orekit::time::AbsoluteDate & a1, const JArray< jdouble > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_62b537ccbcddb5e1, a0.this$, a1.this$, a2.this$)) {}

              TrajectoryState::TrajectoryState(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType & a0, const ::org::orekit::time::AbsoluteDate & a1, const JArray< ::java::lang::String > & a2, jint a3, const ::java::util::List & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c1ba554c09126b20, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

              ::org::orekit::utils::CartesianDerivativesFilter TrajectoryState::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_b9dfc27d8c56b5de]));
              }

              ::org::orekit::time::AbsoluteDate TrajectoryState::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
              }

              JArray< jdouble > TrajectoryState::getElements() const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getElements_be783177b060994b]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType TrajectoryState::getType() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType(env->callObjectMethod(this$, mids$[mid_getType_53d3e424bd18099f]));
              }

              ::org::orekit::utils::TimeStampedPVCoordinates TrajectoryState::toCartesian(const ::org::orekit::bodies::OneAxisEllipsoid & a0, jdouble a1) const
              {
                return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_toCartesian_294c6d2de2ee7b4e], a0.this$, a1));
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
              static PyObject *t_TrajectoryState_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryState_instance_(PyTypeObject *type, PyObject *arg);
              static int t_TrajectoryState_init_(t_TrajectoryState *self, PyObject *args, PyObject *kwds);
              static PyObject *t_TrajectoryState_getAvailableDerivatives(t_TrajectoryState *self);
              static PyObject *t_TrajectoryState_getDate(t_TrajectoryState *self);
              static PyObject *t_TrajectoryState_getElements(t_TrajectoryState *self);
              static PyObject *t_TrajectoryState_getType(t_TrajectoryState *self);
              static PyObject *t_TrajectoryState_toCartesian(t_TrajectoryState *self, PyObject *args);
              static PyObject *t_TrajectoryState_get__availableDerivatives(t_TrajectoryState *self, void *data);
              static PyObject *t_TrajectoryState_get__date(t_TrajectoryState *self, void *data);
              static PyObject *t_TrajectoryState_get__elements(t_TrajectoryState *self, void *data);
              static PyObject *t_TrajectoryState_get__type(t_TrajectoryState *self, void *data);
              static PyGetSetDef t_TrajectoryState__fields_[] = {
                DECLARE_GET_FIELD(t_TrajectoryState, availableDerivatives),
                DECLARE_GET_FIELD(t_TrajectoryState, date),
                DECLARE_GET_FIELD(t_TrajectoryState, elements),
                DECLARE_GET_FIELD(t_TrajectoryState, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_TrajectoryState__methods_[] = {
                DECLARE_METHOD(t_TrajectoryState, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryState, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryState, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryState, getDate, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryState, getElements, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryState, getType, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryState, toCartesian, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(TrajectoryState)[] = {
                { Py_tp_methods, t_TrajectoryState__methods_ },
                { Py_tp_init, (void *) t_TrajectoryState_init_ },
                { Py_tp_getset, t_TrajectoryState__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(TrajectoryState)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(TrajectoryState, t_TrajectoryState, TrajectoryState);

              void t_TrajectoryState::install(PyObject *module)
              {
                installType(&PY_TYPE(TrajectoryState), &PY_TYPE_DEF(TrajectoryState), module, "TrajectoryState", 0);
              }

              void t_TrajectoryState::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryState), "class_", make_descriptor(TrajectoryState::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryState), "wrapfn_", make_descriptor(t_TrajectoryState::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryState), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_TrajectoryState_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, TrajectoryState::initializeClass, 1)))
                  return NULL;
                return t_TrajectoryState::wrap_Object(TrajectoryState(((t_TrajectoryState *) arg)->object.this$));
              }
              static PyObject *t_TrajectoryState_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, TrajectoryState::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_TrajectoryState_init_(t_TrajectoryState *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 3:
                  {
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                    JArray< jdouble > a2((jobject) NULL);
                    TrajectoryState object((jobject) NULL);

                    if (!parseArgs(args, "Kk[D", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::parameters_, &a1, &a2))
                    {
                      INT_CALL(object = TrajectoryState(a0, a1, a2));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 5:
                  {
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                    JArray< ::java::lang::String > a2((jobject) NULL);
                    jint a3;
                    ::java::util::List a4((jobject) NULL);
                    PyTypeObject **p4;
                    TrajectoryState object((jobject) NULL);

                    if (!parseArgs(args, "Kk[sIK", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::parameters_, &a1, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_))
                    {
                      INT_CALL(object = TrajectoryState(a0, a1, a2, a3, a4));
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

              static PyObject *t_TrajectoryState_getAvailableDerivatives(t_TrajectoryState *self)
              {
                ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_TrajectoryState_getDate(t_TrajectoryState *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_TrajectoryState_getElements(t_TrajectoryState *self)
              {
                JArray< jdouble > result((jobject) NULL);
                OBJ_CALL(result = self->object.getElements());
                return result.wrap();
              }

              static PyObject *t_TrajectoryState_getType(t_TrajectoryState *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(result);
              }

              static PyObject *t_TrajectoryState_toCartesian(t_TrajectoryState *self, PyObject *args)
              {
                ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
                jdouble a1;
                ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.toCartesian(a0, a1));
                  return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "toCartesian", args);
                return NULL;
              }

              static PyObject *t_TrajectoryState_get__availableDerivatives(t_TrajectoryState *self, void *data)
              {
                ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_TrajectoryState_get__date(t_TrajectoryState *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_TrajectoryState_get__elements(t_TrajectoryState *self, void *data)
              {
                JArray< jdouble > value((jobject) NULL);
                OBJ_CALL(value = self->object.getElements());
                return value.wrap();
              }

              static PyObject *t_TrajectoryState_get__type(t_TrajectoryState *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(value);
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
#include "org/hipparchus/analysis/function/Cosh.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Cosh::class$ = NULL;
        jmethodID *Cosh::mids$ = NULL;
        bool Cosh::live$ = false;

        jclass Cosh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Cosh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Cosh::Cosh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Cosh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Cosh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
      namespace function {
        static PyObject *t_Cosh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Cosh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Cosh_init_(t_Cosh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Cosh_value(t_Cosh *self, PyObject *args);

        static PyMethodDef t_Cosh__methods_[] = {
          DECLARE_METHOD(t_Cosh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cosh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cosh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Cosh)[] = {
          { Py_tp_methods, t_Cosh__methods_ },
          { Py_tp_init, (void *) t_Cosh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Cosh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Cosh, t_Cosh, Cosh);

        void t_Cosh::install(PyObject *module)
        {
          installType(&PY_TYPE(Cosh), &PY_TYPE_DEF(Cosh), module, "Cosh", 0);
        }

        void t_Cosh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cosh), "class_", make_descriptor(Cosh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cosh), "wrapfn_", make_descriptor(t_Cosh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cosh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Cosh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Cosh::initializeClass, 1)))
            return NULL;
          return t_Cosh::wrap_Object(Cosh(((t_Cosh *) arg)->object.this$));
        }
        static PyObject *t_Cosh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Cosh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Cosh_init_(t_Cosh *self, PyObject *args, PyObject *kwds)
        {
          Cosh object((jobject) NULL);

          INT_CALL(object = Cosh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Cosh_value(t_Cosh *self, PyObject *args)
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
#include "org/hipparchus/analysis/interpolation/UnivariatePeriodicInterpolator.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *UnivariatePeriodicInterpolator::class$ = NULL;
        jmethodID *UnivariatePeriodicInterpolator::mids$ = NULL;
        bool UnivariatePeriodicInterpolator::live$ = false;
        jint UnivariatePeriodicInterpolator::DEFAULT_EXTEND = (jint) 0;

        jclass UnivariatePeriodicInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/UnivariatePeriodicInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_39191d923302c237] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/interpolation/UnivariateInterpolator;D)V");
            mids$[mid_init$_e2fce805bb0688a0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/interpolation/UnivariateInterpolator;DI)V");
            mids$[mid_interpolate_06c20aa5e0626867] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/UnivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_EXTEND = env->getStaticIntField(cls, "DEFAULT_EXTEND");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariatePeriodicInterpolator::UnivariatePeriodicInterpolator(const ::org::hipparchus::analysis::interpolation::UnivariateInterpolator & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_39191d923302c237, a0.this$, a1)) {}

        UnivariatePeriodicInterpolator::UnivariatePeriodicInterpolator(const ::org::hipparchus::analysis::interpolation::UnivariateInterpolator & a0, jdouble a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e2fce805bb0688a0, a0.this$, a1, a2)) {}

        ::org::hipparchus::analysis::UnivariateFunction UnivariatePeriodicInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::UnivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_06c20aa5e0626867], a0.this$, a1.this$));
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
        static PyObject *t_UnivariatePeriodicInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariatePeriodicInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnivariatePeriodicInterpolator_init_(t_UnivariatePeriodicInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariatePeriodicInterpolator_interpolate(t_UnivariatePeriodicInterpolator *self, PyObject *args);

        static PyMethodDef t_UnivariatePeriodicInterpolator__methods_[] = {
          DECLARE_METHOD(t_UnivariatePeriodicInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariatePeriodicInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariatePeriodicInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariatePeriodicInterpolator)[] = {
          { Py_tp_methods, t_UnivariatePeriodicInterpolator__methods_ },
          { Py_tp_init, (void *) t_UnivariatePeriodicInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariatePeriodicInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariatePeriodicInterpolator, t_UnivariatePeriodicInterpolator, UnivariatePeriodicInterpolator);

        void t_UnivariatePeriodicInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariatePeriodicInterpolator), &PY_TYPE_DEF(UnivariatePeriodicInterpolator), module, "UnivariatePeriodicInterpolator", 0);
        }

        void t_UnivariatePeriodicInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePeriodicInterpolator), "class_", make_descriptor(UnivariatePeriodicInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePeriodicInterpolator), "wrapfn_", make_descriptor(t_UnivariatePeriodicInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePeriodicInterpolator), "boxfn_", make_descriptor(boxObject));
          env->getClass(UnivariatePeriodicInterpolator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePeriodicInterpolator), "DEFAULT_EXTEND", make_descriptor(UnivariatePeriodicInterpolator::DEFAULT_EXTEND));
        }

        static PyObject *t_UnivariatePeriodicInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariatePeriodicInterpolator::initializeClass, 1)))
            return NULL;
          return t_UnivariatePeriodicInterpolator::wrap_Object(UnivariatePeriodicInterpolator(((t_UnivariatePeriodicInterpolator *) arg)->object.this$));
        }
        static PyObject *t_UnivariatePeriodicInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariatePeriodicInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnivariatePeriodicInterpolator_init_(t_UnivariatePeriodicInterpolator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::analysis::interpolation::UnivariateInterpolator a0((jobject) NULL);
              jdouble a1;
              UnivariatePeriodicInterpolator object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::hipparchus::analysis::interpolation::UnivariateInterpolator::initializeClass, &a0, &a1))
              {
                INT_CALL(object = UnivariatePeriodicInterpolator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::analysis::interpolation::UnivariateInterpolator a0((jobject) NULL);
              jdouble a1;
              jint a2;
              UnivariatePeriodicInterpolator object((jobject) NULL);

              if (!parseArgs(args, "kDI", ::org::hipparchus::analysis::interpolation::UnivariateInterpolator::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = UnivariatePeriodicInterpolator(a0, a1, a2));
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

        static PyObject *t_UnivariatePeriodicInterpolator_interpolate(t_UnivariatePeriodicInterpolator *self, PyObject *args)
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
#include "org/hipparchus/ode/nonstiff/DormandPrince853Integrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *DormandPrince853Integrator::class$ = NULL;
        jmethodID *DormandPrince853Integrator::mids$ = NULL;
        bool DormandPrince853Integrator::live$ = false;

        jclass DormandPrince853Integrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/DormandPrince853Integrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e3195482263a60ce] = env->getMethodID(cls, "<init>", "(DD[D[D)V");
            mids$[mid_init$_cd5724127cc72e96] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_getA_eda3f19b8225f78f] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_be783177b060994b] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_be783177b060994b] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_getOrder_d6ab429752e7c267] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_createInterpolator_6bd734435df3b7f2] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/DormandPrince853StateInterpolator;");
            mids$[mid_estimateError_8c458726c8da3a78] = env->getMethodID(cls, "estimateError", "([[D[D[DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince853Integrator::DormandPrince853Integrator(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_e3195482263a60ce, a0, a1, a2.this$, a3.this$)) {}

        DormandPrince853Integrator::DormandPrince853Integrator(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_cd5724127cc72e96, a0, a1, a2, a3)) {}

        JArray< JArray< jdouble > > DormandPrince853Integrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_eda3f19b8225f78f]));
        }

        JArray< jdouble > DormandPrince853Integrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_be783177b060994b]));
        }

        JArray< jdouble > DormandPrince853Integrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_be783177b060994b]));
        }

        jint DormandPrince853Integrator::getOrder() const
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
        static PyObject *t_DormandPrince853Integrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince853Integrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DormandPrince853Integrator_init_(t_DormandPrince853Integrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince853Integrator_getA(t_DormandPrince853Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince853Integrator_getB(t_DormandPrince853Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince853Integrator_getC(t_DormandPrince853Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince853Integrator_getOrder(t_DormandPrince853Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince853Integrator_get__a(t_DormandPrince853Integrator *self, void *data);
        static PyObject *t_DormandPrince853Integrator_get__b(t_DormandPrince853Integrator *self, void *data);
        static PyObject *t_DormandPrince853Integrator_get__c(t_DormandPrince853Integrator *self, void *data);
        static PyObject *t_DormandPrince853Integrator_get__order(t_DormandPrince853Integrator *self, void *data);
        static PyGetSetDef t_DormandPrince853Integrator__fields_[] = {
          DECLARE_GET_FIELD(t_DormandPrince853Integrator, a),
          DECLARE_GET_FIELD(t_DormandPrince853Integrator, b),
          DECLARE_GET_FIELD(t_DormandPrince853Integrator, c),
          DECLARE_GET_FIELD(t_DormandPrince853Integrator, order),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DormandPrince853Integrator__methods_[] = {
          DECLARE_METHOD(t_DormandPrince853Integrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853Integrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853Integrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853Integrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853Integrator, getC, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853Integrator, getOrder, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince853Integrator)[] = {
          { Py_tp_methods, t_DormandPrince853Integrator__methods_ },
          { Py_tp_init, (void *) t_DormandPrince853Integrator_init_ },
          { Py_tp_getset, t_DormandPrince853Integrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince853Integrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(DormandPrince853Integrator, t_DormandPrince853Integrator, DormandPrince853Integrator);

        void t_DormandPrince853Integrator::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince853Integrator), &PY_TYPE_DEF(DormandPrince853Integrator), module, "DormandPrince853Integrator", 0);
        }

        void t_DormandPrince853Integrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853Integrator), "class_", make_descriptor(DormandPrince853Integrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853Integrator), "wrapfn_", make_descriptor(t_DormandPrince853Integrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853Integrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince853Integrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince853Integrator::initializeClass, 1)))
            return NULL;
          return t_DormandPrince853Integrator::wrap_Object(DormandPrince853Integrator(((t_DormandPrince853Integrator *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince853Integrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince853Integrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DormandPrince853Integrator_init_(t_DormandPrince853Integrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              DormandPrince853Integrator object((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = DormandPrince853Integrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              DormandPrince853Integrator object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = DormandPrince853Integrator(a0, a1, a2, a3));
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

        static PyObject *t_DormandPrince853Integrator_getA(t_DormandPrince853Integrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(DormandPrince853Integrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_DormandPrince853Integrator_getB(t_DormandPrince853Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(DormandPrince853Integrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_DormandPrince853Integrator_getC(t_DormandPrince853Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(DormandPrince853Integrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_DormandPrince853Integrator_getOrder(t_DormandPrince853Integrator *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(DormandPrince853Integrator), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_DormandPrince853Integrator_get__a(t_DormandPrince853Integrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_DormandPrince853Integrator_get__b(t_DormandPrince853Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_DormandPrince853Integrator_get__c(t_DormandPrince853Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }

        static PyObject *t_DormandPrince853Integrator_get__order(t_DormandPrince853Integrator *self, void *data)
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgmHeader::class$ = NULL;
              jmethodID *SsrIgmHeader::mids$ = NULL;
              bool SsrIgmHeader::live$ = false;

              jclass SsrIgmHeader::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgmHeader");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getNumberOfSatellites_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfSatellites", "()I");
                  mids$[mid_setNumberOfSatellites_8fd427ab23829bf5] = env->getMethodID(cls, "setNumberOfSatellites", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgmHeader::SsrIgmHeader() : ::org::orekit::gnss::metric::messages::ssr::SsrHeader(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              jint SsrIgmHeader::getNumberOfSatellites() const
              {
                return env->callIntMethod(this$, mids$[mid_getNumberOfSatellites_d6ab429752e7c267]);
              }

              void SsrIgmHeader::setNumberOfSatellites(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNumberOfSatellites_8fd427ab23829bf5], a0);
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
              static PyObject *t_SsrIgmHeader_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgmHeader_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgmHeader_init_(t_SsrIgmHeader *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgmHeader_getNumberOfSatellites(t_SsrIgmHeader *self);
              static PyObject *t_SsrIgmHeader_setNumberOfSatellites(t_SsrIgmHeader *self, PyObject *arg);
              static PyObject *t_SsrIgmHeader_get__numberOfSatellites(t_SsrIgmHeader *self, void *data);
              static int t_SsrIgmHeader_set__numberOfSatellites(t_SsrIgmHeader *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgmHeader__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgmHeader, numberOfSatellites),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgmHeader__methods_[] = {
                DECLARE_METHOD(t_SsrIgmHeader, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgmHeader, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgmHeader, getNumberOfSatellites, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgmHeader, setNumberOfSatellites, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgmHeader)[] = {
                { Py_tp_methods, t_SsrIgmHeader__methods_ },
                { Py_tp_init, (void *) t_SsrIgmHeader_init_ },
                { Py_tp_getset, t_SsrIgmHeader__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgmHeader)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgmHeader, t_SsrIgmHeader, SsrIgmHeader);

              void t_SsrIgmHeader::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgmHeader), &PY_TYPE_DEF(SsrIgmHeader), module, "SsrIgmHeader", 0);
              }

              void t_SsrIgmHeader::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmHeader), "class_", make_descriptor(SsrIgmHeader::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmHeader), "wrapfn_", make_descriptor(t_SsrIgmHeader::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmHeader), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgmHeader_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgmHeader::initializeClass, 1)))
                  return NULL;
                return t_SsrIgmHeader::wrap_Object(SsrIgmHeader(((t_SsrIgmHeader *) arg)->object.this$));
              }
              static PyObject *t_SsrIgmHeader_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgmHeader::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgmHeader_init_(t_SsrIgmHeader *self, PyObject *args, PyObject *kwds)
              {
                SsrIgmHeader object((jobject) NULL);

                INT_CALL(object = SsrIgmHeader());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgmHeader_getNumberOfSatellites(t_SsrIgmHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNumberOfSatellites());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgmHeader_setNumberOfSatellites(t_SsrIgmHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNumberOfSatellites(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNumberOfSatellites", arg);
                return NULL;
              }

              static PyObject *t_SsrIgmHeader_get__numberOfSatellites(t_SsrIgmHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNumberOfSatellites());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgmHeader_set__numberOfSatellites(t_SsrIgmHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNumberOfSatellites(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "numberOfSatellites", arg);
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
#include "org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
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
                mids$[mid_process_95d61c48b1014813] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance;)Z");
                mids$[mid_valueOf_0bccf61626e61b97] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey;");
                mids$[mid_values_b6c0a9f8c9268f4c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey;");

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
              return env->callBooleanMethod(this$, mids$[mid_process_95d61c48b1014813], a0.this$, a1.this$, a2.this$);
            }

            SigmaEigenvectorsCovarianceKey SigmaEigenvectorsCovarianceKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return SigmaEigenvectorsCovarianceKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0bccf61626e61b97], a0.this$));
            }

            JArray< SigmaEigenvectorsCovarianceKey > SigmaEigenvectorsCovarianceKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< SigmaEigenvectorsCovarianceKey >(env->callStaticObjectMethod(cls, mids$[mid_values_b6c0a9f8c9268f4c]));
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
#include "org/hipparchus/stat/descriptive/summary/SumOfLogs.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/summary/SumOfLogs.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {

          ::java::lang::Class *SumOfLogs::class$ = NULL;
          jmethodID *SumOfLogs::mids$ = NULL;
          bool SumOfLogs::live$ = false;

          jclass SumOfLogs::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/summary/SumOfLogs");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_36a30fff2b6ee27c] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/summary/SumOfLogs;)V");
              mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_5d264b3514634302] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/summary/SumOfLogs;");
              mids$[mid_evaluate_620ea098e5f0da00] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_9981f74b2d109da6] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_1ad26e8c8c0cd65b] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SumOfLogs::SumOfLogs() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void SumOfLogs::aggregate(const SumOfLogs & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_36a30fff2b6ee27c], a0.this$);
          }

          void SumOfLogs::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
          }

          SumOfLogs SumOfLogs::copy() const
          {
            return SumOfLogs(env->callObjectMethod(this$, mids$[mid_copy_5d264b3514634302]));
          }

          jdouble SumOfLogs::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_620ea098e5f0da00], a0.this$, a1, a2);
          }

          jlong SumOfLogs::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
          }

          jdouble SumOfLogs::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_9981f74b2d109da6]);
          }

          void SumOfLogs::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_1ad26e8c8c0cd65b], a0);
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
        namespace summary {
          static PyObject *t_SumOfLogs_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SumOfLogs_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SumOfLogs_init_(t_SumOfLogs *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SumOfLogs_aggregate(t_SumOfLogs *self, PyObject *arg);
          static PyObject *t_SumOfLogs_clear(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_copy(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_evaluate(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_getN(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_getResult(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_increment(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_get__n(t_SumOfLogs *self, void *data);
          static PyObject *t_SumOfLogs_get__result(t_SumOfLogs *self, void *data);
          static PyGetSetDef t_SumOfLogs__fields_[] = {
            DECLARE_GET_FIELD(t_SumOfLogs, n),
            DECLARE_GET_FIELD(t_SumOfLogs, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SumOfLogs__methods_[] = {
            DECLARE_METHOD(t_SumOfLogs, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SumOfLogs, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SumOfLogs, aggregate, METH_O),
            DECLARE_METHOD(t_SumOfLogs, clear, METH_VARARGS),
            DECLARE_METHOD(t_SumOfLogs, copy, METH_VARARGS),
            DECLARE_METHOD(t_SumOfLogs, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_SumOfLogs, getN, METH_VARARGS),
            DECLARE_METHOD(t_SumOfLogs, getResult, METH_VARARGS),
            DECLARE_METHOD(t_SumOfLogs, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SumOfLogs)[] = {
            { Py_tp_methods, t_SumOfLogs__methods_ },
            { Py_tp_init, (void *) t_SumOfLogs_init_ },
            { Py_tp_getset, t_SumOfLogs__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SumOfLogs)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(SumOfLogs, t_SumOfLogs, SumOfLogs);

          void t_SumOfLogs::install(PyObject *module)
          {
            installType(&PY_TYPE(SumOfLogs), &PY_TYPE_DEF(SumOfLogs), module, "SumOfLogs", 0);
          }

          void t_SumOfLogs::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SumOfLogs), "class_", make_descriptor(SumOfLogs::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SumOfLogs), "wrapfn_", make_descriptor(t_SumOfLogs::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SumOfLogs), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SumOfLogs_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SumOfLogs::initializeClass, 1)))
              return NULL;
            return t_SumOfLogs::wrap_Object(SumOfLogs(((t_SumOfLogs *) arg)->object.this$));
          }
          static PyObject *t_SumOfLogs_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SumOfLogs::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SumOfLogs_init_(t_SumOfLogs *self, PyObject *args, PyObject *kwds)
          {
            SumOfLogs object((jobject) NULL);

            INT_CALL(object = SumOfLogs());
            self->object = object;

            return 0;
          }

          static PyObject *t_SumOfLogs_aggregate(t_SumOfLogs *self, PyObject *arg)
          {
            SumOfLogs a0((jobject) NULL);

            if (!parseArg(arg, "k", SumOfLogs::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_SumOfLogs_clear(t_SumOfLogs *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_SumOfLogs_copy(t_SumOfLogs *self, PyObject *args)
          {
            SumOfLogs result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_SumOfLogs::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_SumOfLogs_evaluate(t_SumOfLogs *self, PyObject *args)
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

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_SumOfLogs_getN(t_SumOfLogs *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_SumOfLogs_getResult(t_SumOfLogs *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_SumOfLogs_increment(t_SumOfLogs *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_SumOfLogs_get__n(t_SumOfLogs *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_SumOfLogs_get__result(t_SumOfLogs *self, void *data)
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
#include "org/hipparchus/stat/regression/UpdatingMultipleLinearRegression.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/regression/RegressionResults.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *UpdatingMultipleLinearRegression::class$ = NULL;
        jmethodID *UpdatingMultipleLinearRegression::mids$ = NULL;
        bool UpdatingMultipleLinearRegression::live$ = false;

        jclass UpdatingMultipleLinearRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/UpdatingMultipleLinearRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addObservation_19a01fdb4baa56b0] = env->getMethodID(cls, "addObservation", "([DD)V");
            mids$[mid_addObservations_f1517d9a21833345] = env->getMethodID(cls, "addObservations", "([[D[D)V");
            mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_hasIntercept_eee3de00fe971136] = env->getMethodID(cls, "hasIntercept", "()Z");
            mids$[mid_regress_b2f062f0fff197c0] = env->getMethodID(cls, "regress", "()Lorg/hipparchus/stat/regression/RegressionResults;");
            mids$[mid_regress_54420be6ab2acfca] = env->getMethodID(cls, "regress", "([I)Lorg/hipparchus/stat/regression/RegressionResults;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void UpdatingMultipleLinearRegression::addObservation(const JArray< jdouble > & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservation_19a01fdb4baa56b0], a0.this$, a1);
        }

        void UpdatingMultipleLinearRegression::addObservations(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservations_f1517d9a21833345], a0.this$, a1.this$);
        }

        void UpdatingMultipleLinearRegression::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
        }

        jlong UpdatingMultipleLinearRegression::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
        }

        jboolean UpdatingMultipleLinearRegression::hasIntercept() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasIntercept_eee3de00fe971136]);
        }

        ::org::hipparchus::stat::regression::RegressionResults UpdatingMultipleLinearRegression::regress() const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_b2f062f0fff197c0]));
        }

        ::org::hipparchus::stat::regression::RegressionResults UpdatingMultipleLinearRegression::regress(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_54420be6ab2acfca], a0.this$));
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
        static PyObject *t_UpdatingMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UpdatingMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UpdatingMultipleLinearRegression_addObservation(t_UpdatingMultipleLinearRegression *self, PyObject *args);
        static PyObject *t_UpdatingMultipleLinearRegression_addObservations(t_UpdatingMultipleLinearRegression *self, PyObject *args);
        static PyObject *t_UpdatingMultipleLinearRegression_clear(t_UpdatingMultipleLinearRegression *self);
        static PyObject *t_UpdatingMultipleLinearRegression_getN(t_UpdatingMultipleLinearRegression *self);
        static PyObject *t_UpdatingMultipleLinearRegression_hasIntercept(t_UpdatingMultipleLinearRegression *self);
        static PyObject *t_UpdatingMultipleLinearRegression_regress(t_UpdatingMultipleLinearRegression *self, PyObject *args);
        static PyObject *t_UpdatingMultipleLinearRegression_get__n(t_UpdatingMultipleLinearRegression *self, void *data);
        static PyGetSetDef t_UpdatingMultipleLinearRegression__fields_[] = {
          DECLARE_GET_FIELD(t_UpdatingMultipleLinearRegression, n),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UpdatingMultipleLinearRegression__methods_[] = {
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, addObservation, METH_VARARGS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, addObservations, METH_VARARGS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, clear, METH_NOARGS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, getN, METH_NOARGS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, hasIntercept, METH_NOARGS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, regress, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UpdatingMultipleLinearRegression)[] = {
          { Py_tp_methods, t_UpdatingMultipleLinearRegression__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UpdatingMultipleLinearRegression__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UpdatingMultipleLinearRegression)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UpdatingMultipleLinearRegression, t_UpdatingMultipleLinearRegression, UpdatingMultipleLinearRegression);

        void t_UpdatingMultipleLinearRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(UpdatingMultipleLinearRegression), &PY_TYPE_DEF(UpdatingMultipleLinearRegression), module, "UpdatingMultipleLinearRegression", 0);
        }

        void t_UpdatingMultipleLinearRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatingMultipleLinearRegression), "class_", make_descriptor(UpdatingMultipleLinearRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatingMultipleLinearRegression), "wrapfn_", make_descriptor(t_UpdatingMultipleLinearRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatingMultipleLinearRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UpdatingMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UpdatingMultipleLinearRegression::initializeClass, 1)))
            return NULL;
          return t_UpdatingMultipleLinearRegression::wrap_Object(UpdatingMultipleLinearRegression(((t_UpdatingMultipleLinearRegression *) arg)->object.this$));
        }
        static PyObject *t_UpdatingMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UpdatingMultipleLinearRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UpdatingMultipleLinearRegression_addObservation(t_UpdatingMultipleLinearRegression *self, PyObject *args)
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

        static PyObject *t_UpdatingMultipleLinearRegression_addObservations(t_UpdatingMultipleLinearRegression *self, PyObject *args)
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

        static PyObject *t_UpdatingMultipleLinearRegression_clear(t_UpdatingMultipleLinearRegression *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_UpdatingMultipleLinearRegression_getN(t_UpdatingMultipleLinearRegression *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_UpdatingMultipleLinearRegression_hasIntercept(t_UpdatingMultipleLinearRegression *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasIntercept());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_UpdatingMultipleLinearRegression_regress(t_UpdatingMultipleLinearRegression *self, PyObject *args)
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

        static PyObject *t_UpdatingMultipleLinearRegression_get__n(t_UpdatingMultipleLinearRegression *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3Ephemeris.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/sp3/SP3Segment.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Ephemeris::class$ = NULL;
        jmethodID *SP3Ephemeris::mids$ = NULL;
        bool SP3Ephemeris::live$ = false;

        jclass SP3Ephemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Ephemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_37ff8a5fdc395935] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLorg/orekit/frames/Frame;ILorg/orekit/utils/CartesianDerivativesFilter;)V");
            mids$[mid_addCoordinate_36568d3d88672861] = env->getMethodID(cls, "addCoordinate", "(Lorg/orekit/files/sp3/SP3Coordinate;D)V");
            mids$[mid_getAvailableDerivatives_b9dfc27d8c56b5de] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getId_d2c8eb4129821f0e] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getInterpolationSamples_d6ab429752e7c267] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getSegments_d751c1a57012b438] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_80e11148db499dda] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_80e11148db499dda] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Ephemeris::SP3Ephemeris(const ::java::lang::String & a0, jdouble a1, const ::org::orekit::frames::Frame & a2, jint a3, const ::org::orekit::utils::CartesianDerivativesFilter & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_37ff8a5fdc395935, a0.this$, a1, a2.this$, a3, a4.this$)) {}

        void SP3Ephemeris::addCoordinate(const ::org::orekit::files::sp3::SP3Coordinate & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addCoordinate_36568d3d88672861], a0.this$, a1);
        }

        ::org::orekit::utils::CartesianDerivativesFilter SP3Ephemeris::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_b9dfc27d8c56b5de]));
        }

        ::org::orekit::frames::Frame SP3Ephemeris::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
        }

        ::java::lang::String SP3Ephemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_d2c8eb4129821f0e]));
        }

        jint SP3Ephemeris::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_d6ab429752e7c267]);
        }

        jdouble SP3Ephemeris::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
        }

        ::java::util::List SP3Ephemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_d751c1a57012b438]));
        }

        ::org::orekit::time::AbsoluteDate SP3Ephemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_80e11148db499dda]));
        }

        ::org::orekit::time::AbsoluteDate SP3Ephemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_80e11148db499dda]));
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
      namespace sp3 {
        static PyObject *t_SP3Ephemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Ephemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Ephemeris_init_(t_SP3Ephemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Ephemeris_addCoordinate(t_SP3Ephemeris *self, PyObject *args);
        static PyObject *t_SP3Ephemeris_getAvailableDerivatives(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getFrame(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getId(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getInterpolationSamples(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getMu(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getSegments(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getStart(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getStop(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_get__availableDerivatives(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__frame(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__id(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__interpolationSamples(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__mu(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__segments(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__start(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__stop(t_SP3Ephemeris *self, void *data);
        static PyGetSetDef t_SP3Ephemeris__fields_[] = {
          DECLARE_GET_FIELD(t_SP3Ephemeris, availableDerivatives),
          DECLARE_GET_FIELD(t_SP3Ephemeris, frame),
          DECLARE_GET_FIELD(t_SP3Ephemeris, id),
          DECLARE_GET_FIELD(t_SP3Ephemeris, interpolationSamples),
          DECLARE_GET_FIELD(t_SP3Ephemeris, mu),
          DECLARE_GET_FIELD(t_SP3Ephemeris, segments),
          DECLARE_GET_FIELD(t_SP3Ephemeris, start),
          DECLARE_GET_FIELD(t_SP3Ephemeris, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3Ephemeris__methods_[] = {
          DECLARE_METHOD(t_SP3Ephemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Ephemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Ephemeris, addCoordinate, METH_VARARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getMu, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Ephemeris)[] = {
          { Py_tp_methods, t_SP3Ephemeris__methods_ },
          { Py_tp_init, (void *) t_SP3Ephemeris_init_ },
          { Py_tp_getset, t_SP3Ephemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Ephemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Ephemeris, t_SP3Ephemeris, SP3Ephemeris);

        void t_SP3Ephemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Ephemeris), &PY_TYPE_DEF(SP3Ephemeris), module, "SP3Ephemeris", 0);
        }

        void t_SP3Ephemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Ephemeris), "class_", make_descriptor(SP3Ephemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Ephemeris), "wrapfn_", make_descriptor(t_SP3Ephemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Ephemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SP3Ephemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Ephemeris::initializeClass, 1)))
            return NULL;
          return t_SP3Ephemeris::wrap_Object(SP3Ephemeris(((t_SP3Ephemeris *) arg)->object.this$));
        }
        static PyObject *t_SP3Ephemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Ephemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Ephemeris_init_(t_SP3Ephemeris *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::frames::Frame a2((jobject) NULL);
          jint a3;
          ::org::orekit::utils::CartesianDerivativesFilter a4((jobject) NULL);
          PyTypeObject **p4;
          SP3Ephemeris object((jobject) NULL);

          if (!parseArgs(args, "sDkIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
          {
            INT_CALL(object = SP3Ephemeris(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SP3Ephemeris_addCoordinate(t_SP3Ephemeris *self, PyObject *args)
        {
          ::org::orekit::files::sp3::SP3Coordinate a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::orekit::files::sp3::SP3Coordinate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addCoordinate(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addCoordinate", args);
          return NULL;
        }

        static PyObject *t_SP3Ephemeris_getAvailableDerivatives(t_SP3Ephemeris *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_SP3Ephemeris_getFrame(t_SP3Ephemeris *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_SP3Ephemeris_getId(t_SP3Ephemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_SP3Ephemeris_getInterpolationSamples(t_SP3Ephemeris *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3Ephemeris_getMu(t_SP3Ephemeris *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Ephemeris_getSegments(t_SP3Ephemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::sp3::PY_TYPE(SP3Segment));
        }

        static PyObject *t_SP3Ephemeris_getStart(t_SP3Ephemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SP3Ephemeris_getStop(t_SP3Ephemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SP3Ephemeris_get__availableDerivatives(t_SP3Ephemeris *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_SP3Ephemeris_get__frame(t_SP3Ephemeris *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_SP3Ephemeris_get__id(t_SP3Ephemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_SP3Ephemeris_get__interpolationSamples(t_SP3Ephemeris *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SP3Ephemeris_get__mu(t_SP3Ephemeris *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Ephemeris_get__segments(t_SP3Ephemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_SP3Ephemeris_get__start(t_SP3Ephemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SP3Ephemeris_get__stop(t_SP3Ephemeris *self, void *data)
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
#include "org/orekit/propagation/analytical/AbstractAnalyticalGradientConverter.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AbstractAnalyticalGradientConverter::class$ = NULL;
        jmethodID *AbstractAnalyticalGradientConverter::mids$ = NULL;
        bool AbstractAnalyticalGradientConverter::live$ = false;

        jclass AbstractAnalyticalGradientConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AbstractAnalyticalGradientConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getPropagator_4f7a484ba5bae905] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator;");
            mids$[mid_getState_a74be2e38786f3b6] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/FieldSpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator AbstractAnalyticalGradientConverter::getPropagator(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::analysis::differentiation::Gradient > & a1) const
        {
          return ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_4f7a484ba5bae905], a0.this$, a1.this$));
        }

        ::org::orekit::propagation::FieldSpacecraftState AbstractAnalyticalGradientConverter::getState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_a74be2e38786f3b6]));
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
        static PyObject *t_AbstractAnalyticalGradientConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalGradientConverter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalGradientConverter_getPropagator(t_AbstractAnalyticalGradientConverter *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalGradientConverter_getState(t_AbstractAnalyticalGradientConverter *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalGradientConverter_get__state(t_AbstractAnalyticalGradientConverter *self, void *data);
        static PyGetSetDef t_AbstractAnalyticalGradientConverter__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractAnalyticalGradientConverter, state),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractAnalyticalGradientConverter__methods_[] = {
          DECLARE_METHOD(t_AbstractAnalyticalGradientConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalGradientConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalGradientConverter, getPropagator, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalGradientConverter, getState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractAnalyticalGradientConverter)[] = {
          { Py_tp_methods, t_AbstractAnalyticalGradientConverter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractAnalyticalGradientConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractAnalyticalGradientConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractGradientConverter),
          NULL
        };

        DEFINE_TYPE(AbstractAnalyticalGradientConverter, t_AbstractAnalyticalGradientConverter, AbstractAnalyticalGradientConverter);

        void t_AbstractAnalyticalGradientConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractAnalyticalGradientConverter), &PY_TYPE_DEF(AbstractAnalyticalGradientConverter), module, "AbstractAnalyticalGradientConverter", 0);
        }

        void t_AbstractAnalyticalGradientConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalGradientConverter), "class_", make_descriptor(AbstractAnalyticalGradientConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalGradientConverter), "wrapfn_", make_descriptor(t_AbstractAnalyticalGradientConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalGradientConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractAnalyticalGradientConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractAnalyticalGradientConverter::initializeClass, 1)))
            return NULL;
          return t_AbstractAnalyticalGradientConverter::wrap_Object(AbstractAnalyticalGradientConverter(((t_AbstractAnalyticalGradientConverter *) arg)->object.this$));
        }
        static PyObject *t_AbstractAnalyticalGradientConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractAnalyticalGradientConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractAnalyticalGradientConverter_getPropagator(t_AbstractAnalyticalGradientConverter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::analysis::differentiation::Gradient > a1((jobject) NULL);
          ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator result((jobject) NULL);

          if (!parseArgs(args, "K[k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getPropagator(a0, a1));
            return ::org::orekit::propagation::analytical::t_FieldAbstractAnalyticalPropagator::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
          return NULL;
        }

        static PyObject *t_AbstractAnalyticalGradientConverter_getState(t_AbstractAnalyticalGradientConverter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getState());
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
          }

          return callSuper(PY_TYPE(AbstractAnalyticalGradientConverter), (PyObject *) self, "getState", args, 2);
        }

        static PyObject *t_AbstractAnalyticalGradientConverter_get__state(t_AbstractAnalyticalGradientConverter *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/List.h"
#include "java/util/Iterator.h"
#include "java/util/Comparator.h"
#include "java/util/Spliterator.h"
#include "java/util/List.h"
#include "java/util/ListIterator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *List::class$ = NULL;
    jmethodID *List::mids$ = NULL;
    bool List::live$ = false;

    jclass List::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/List");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_72faff9b05f5ed5e] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_add_600fc0bdbd049172] = env->getMethodID(cls, "add", "(ILjava/lang/Object;)V");
        mids$[mid_addAll_61d64368c58b84f3] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_addAll_34282804c6c39090] = env->getMethodID(cls, "addAll", "(ILjava/util/Collection;)Z");
        mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_contains_72faff9b05f5ed5e] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsAll_61d64368c58b84f3] = env->getMethodID(cls, "containsAll", "(Ljava/util/Collection;)Z");
        mids$[mid_copyOf_9f64b1eeb6e673e3] = env->getStaticMethodID(cls, "copyOf", "(Ljava/util/Collection;)Ljava/util/List;");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_35009debda6d2ece] = env->getMethodID(cls, "get", "(I)Ljava/lang/Object;");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_indexOf_9aa1a0d21cdeb90e] = env->getMethodID(cls, "indexOf", "(Ljava/lang/Object;)I");
        mids$[mid_isEmpty_eee3de00fe971136] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_4f613ccd2f803b4b] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_lastIndexOf_9aa1a0d21cdeb90e] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/Object;)I");
        mids$[mid_listIterator_7bb80a6d83d87d72] = env->getMethodID(cls, "listIterator", "()Ljava/util/ListIterator;");
        mids$[mid_listIterator_14737c756caa849d] = env->getMethodID(cls, "listIterator", "(I)Ljava/util/ListIterator;");
        mids$[mid_of_d751c1a57012b438] = env->getStaticMethodID(cls, "of", "()Ljava/util/List;");
        mids$[mid_of_5831821065411121] = env->getStaticMethodID(cls, "of", "([Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_b82a310c35799ced] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_223ae57f7fb5be34] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_c971c25e4cf7777d] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_45f7614730574502] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_cf34a26b338a77eb] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_95b89b076c106793] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_94d43fc2b606ac4d] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_6c770b76ed77d90c] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_1714fef71b2656a6] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_a4ac981f3d0b894d] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_remove_35009debda6d2ece] = env->getMethodID(cls, "remove", "(I)Ljava/lang/Object;");
        mids$[mid_remove_72faff9b05f5ed5e] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_61d64368c58b84f3] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_retainAll_61d64368c58b84f3] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_set_469b6e93ddb5a642] = env->getMethodID(cls, "set", "(ILjava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_size_d6ab429752e7c267] = env->getMethodID(cls, "size", "()I");
        mids$[mid_sort_bee08e6612998c92] = env->getMethodID(cls, "sort", "(Ljava/util/Comparator;)V");
        mids$[mid_spliterator_74c84c40cacaa7be] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_subList_4e3c0741dd4bb632] = env->getMethodID(cls, "subList", "(II)Ljava/util/List;");
        mids$[mid_toArray_2ab86268ef7a6631] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_f4767af6a3829fbc] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean List::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_72faff9b05f5ed5e], a0.this$);
    }

    void List::add(jint a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_add_600fc0bdbd049172], a0, a1.this$);
    }

    jboolean List::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_61d64368c58b84f3], a0.this$);
    }

    jboolean List::addAll(jint a0, const ::java::util::Collection & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_34282804c6c39090], a0, a1.this$);
    }

    void List::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
    }

    jboolean List::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_72faff9b05f5ed5e], a0.this$);
    }

    jboolean List::containsAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsAll_61d64368c58b84f3], a0.this$);
    }

    List List::copyOf(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_copyOf_9f64b1eeb6e673e3], a0.this$));
    }

    jboolean List::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    ::java::lang::Object List::get$(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_35009debda6d2ece], a0));
    }

    jint List::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jint List::indexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_9aa1a0d21cdeb90e], a0.this$);
    }

    jboolean List::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_eee3de00fe971136]);
    }

    ::java::util::Iterator List::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4f613ccd2f803b4b]));
    }

    jint List::lastIndexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_9aa1a0d21cdeb90e], a0.this$);
    }

    ::java::util::ListIterator List::listIterator() const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_7bb80a6d83d87d72]));
    }

    ::java::util::ListIterator List::listIterator(jint a0) const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_14737c756caa849d], a0));
    }

    List List::of()
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_d751c1a57012b438]));
    }

    List List::of(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_5831821065411121], a0.this$));
    }

    List List::of(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_b82a310c35799ced], a0.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_223ae57f7fb5be34], a0.this$, a1.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_c971c25e4cf7777d], a0.this$, a1.this$, a2.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_45f7614730574502], a0.this$, a1.this$, a2.this$, a3.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_cf34a26b338a77eb], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_95b89b076c106793], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_94d43fc2b606ac4d], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_6c770b76ed77d90c], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_1714fef71b2656a6], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_a4ac981f3d0b894d], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$));
    }

    ::java::lang::Object List::remove(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_35009debda6d2ece], a0));
    }

    jboolean List::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_72faff9b05f5ed5e], a0.this$);
    }

    jboolean List::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_61d64368c58b84f3], a0.this$);
    }

    jboolean List::retainAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_61d64368c58b84f3], a0.this$);
    }

    ::java::lang::Object List::set(jint a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_set_469b6e93ddb5a642], a0, a1.this$));
    }

    jint List::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_d6ab429752e7c267]);
    }

    void List::sort(const ::java::util::Comparator & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_sort_bee08e6612998c92], a0.this$);
    }

    ::java::util::Spliterator List::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_74c84c40cacaa7be]));
    }

    List List::subList(jint a0, jint a1) const
    {
      return List(env->callObjectMethod(this$, mids$[mid_subList_4e3c0741dd4bb632], a0, a1));
    }

    JArray< ::java::lang::Object > List::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_2ab86268ef7a6631]));
    }

    JArray< ::java::lang::Object > List::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_f4767af6a3829fbc], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_List_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_List_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_List_of_(t_List *self, PyObject *args);
    static PyObject *t_List_add(t_List *self, PyObject *args);
    static PyObject *t_List_addAll(t_List *self, PyObject *args);
    static PyObject *t_List_clear(t_List *self, PyObject *args);
    static PyObject *t_List_contains(t_List *self, PyObject *args);
    static PyObject *t_List_containsAll(t_List *self, PyObject *args);
    static PyObject *t_List_copyOf(PyTypeObject *type, PyObject *arg);
    static PyObject *t_List_equals(t_List *self, PyObject *args);
    static PyObject *t_List_get(t_List *self, PyObject *arg);
    static PyObject *t_List_hashCode(t_List *self, PyObject *args);
    static PyObject *t_List_indexOf(t_List *self, PyObject *arg);
    static PyObject *t_List_isEmpty(t_List *self, PyObject *args);
    static PyObject *t_List_iterator(t_List *self, PyObject *args);
    static PyObject *t_List_lastIndexOf(t_List *self, PyObject *arg);
    static PyObject *t_List_listIterator(t_List *self, PyObject *args);
    static PyObject *t_List_of(PyTypeObject *type, PyObject *args);
    static PyObject *t_List_remove(t_List *self, PyObject *args);
    static PyObject *t_List_removeAll(t_List *self, PyObject *args);
    static PyObject *t_List_retainAll(t_List *self, PyObject *args);
    static PyObject *t_List_set(t_List *self, PyObject *args);
    static PyObject *t_List_size(t_List *self, PyObject *args);
    static PyObject *t_List_sort(t_List *self, PyObject *arg);
    static PyObject *t_List_spliterator(t_List *self, PyObject *args);
    static PyObject *t_List_subList(t_List *self, PyObject *args);
    static PyObject *t_List_toArray(t_List *self, PyObject *args);
    static PyObject *t_List_get__empty(t_List *self, void *data);
    static PyObject *t_List_get__parameters_(t_List *self, void *data);
    static PyGetSetDef t_List__fields_[] = {
      DECLARE_GET_FIELD(t_List, empty),
      DECLARE_GET_FIELD(t_List, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_List__methods_[] = {
      DECLARE_METHOD(t_List, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_List, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_List, of_, METH_VARARGS),
      DECLARE_METHOD(t_List, add, METH_VARARGS),
      DECLARE_METHOD(t_List, addAll, METH_VARARGS),
      DECLARE_METHOD(t_List, clear, METH_VARARGS),
      DECLARE_METHOD(t_List, contains, METH_VARARGS),
      DECLARE_METHOD(t_List, containsAll, METH_VARARGS),
      DECLARE_METHOD(t_List, copyOf, METH_O | METH_CLASS),
      DECLARE_METHOD(t_List, equals, METH_VARARGS),
      DECLARE_METHOD(t_List, get, METH_O),
      DECLARE_METHOD(t_List, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_List, indexOf, METH_O),
      DECLARE_METHOD(t_List, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_List, iterator, METH_VARARGS),
      DECLARE_METHOD(t_List, lastIndexOf, METH_O),
      DECLARE_METHOD(t_List, listIterator, METH_VARARGS),
      DECLARE_METHOD(t_List, of, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_List, remove, METH_VARARGS),
      DECLARE_METHOD(t_List, removeAll, METH_VARARGS),
      DECLARE_METHOD(t_List, retainAll, METH_VARARGS),
      DECLARE_METHOD(t_List, set, METH_VARARGS),
      DECLARE_METHOD(t_List, size, METH_VARARGS),
      DECLARE_METHOD(t_List, sort, METH_O),
      DECLARE_METHOD(t_List, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_List, subList, METH_VARARGS),
      DECLARE_METHOD(t_List, toArray, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(List)[] = {
      { Py_tp_methods, t_List__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_List__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_List *)) get_generic_iterator< t_List >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(List)[] = {
      &PY_TYPE_DEF(::java::util::Collection),
      NULL
    };

    DEFINE_TYPE(List, t_List, List);
    PyObject *t_List::wrap_Object(const List& object, PyTypeObject *p0)
    {
      PyObject *obj = t_List::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_List *self = (t_List *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_List::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_List::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_List *self = (t_List *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_List::install(PyObject *module)
    {
      installType(&PY_TYPE(List), &PY_TYPE_DEF(List), module, "List", 0);
    }

    void t_List::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(List), "class_", make_descriptor(List::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(List), "wrapfn_", make_descriptor(t_List::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(List), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_List_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, List::initializeClass, 1)))
        return NULL;
      return t_List::wrap_Object(List(((t_List *) arg)->object.this$));
    }
    static PyObject *t_List_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, List::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_List_of_(t_List *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_List_add(t_List *self, PyObject *args)
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

      return callSuper(PY_TYPE(List), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_List_addAll(t_List *self, PyObject *args)
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

      return callSuper(PY_TYPE(List), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_List_clear(t_List *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_List_contains(t_List *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_List_containsAll(t_List *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.containsAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "containsAll", args, 2);
    }

    static PyObject *t_List_copyOf(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      List result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::List::copyOf(a0));
        return t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "copyOf", arg);
      return NULL;
    }

    static PyObject *t_List_equals(t_List *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_List_get(t_List *self, PyObject *arg)
    {
      jint a0;
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "get", arg);
      return NULL;
    }

    static PyObject *t_List_hashCode(t_List *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_List_indexOf(t_List *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.indexOf(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "indexOf", arg);
      return NULL;
    }

    static PyObject *t_List_isEmpty(t_List *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_List_iterator(t_List *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_List_lastIndexOf(t_List *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.lastIndexOf(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "lastIndexOf", arg);
      return NULL;
    }

    static PyObject *t_List_listIterator(t_List *self, PyObject *args)
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

      PyErr_SetArgsError((PyObject *) self, "listIterator", args);
      return NULL;
    }

    static PyObject *t_List_of(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          List result((jobject) NULL);
          OBJ_CALL(result = ::java::util::List::of());
          return t_List::wrap_Object(result);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::List::of(a0));
            return t_List::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = ::java::util::List::of(a0));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "ooo", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "oooo", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 5:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "ooooo", &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 6:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "oooooo", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4, a5));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 7:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "ooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4, a5, a6));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 8:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "oooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4, a5, a6, a7));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 9:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "ooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4, a5, a6, a7, a8));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 10:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "oooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            return t_List::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "of", args);
      return NULL;
    }

    static PyObject *t_List_remove(t_List *self, PyObject *args)
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

      return callSuper(PY_TYPE(List), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_List_removeAll(t_List *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "removeAll", args, 2);
    }

    static PyObject *t_List_retainAll(t_List *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "retainAll", args, 2);
    }

    static PyObject *t_List_set(t_List *self, PyObject *args)
    {
      jint a0;
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "IO", self->parameters[0], &a0, &a1))
      {
        OBJ_CALL(result = self->object.set(a0, a1));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "set", args);
      return NULL;
    }

    static PyObject *t_List_size(t_List *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_List_sort(t_List *self, PyObject *arg)
    {
      ::java::util::Comparator a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArg(arg, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
      {
        OBJ_CALL(self->object.sort(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "sort", arg);
      return NULL;
    }

    static PyObject *t_List_spliterator(t_List *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_List_subList(t_List *self, PyObject *args)
    {
      jint a0;
      jint a1;
      List result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.subList(a0, a1));
        return t_List::wrap_Object(result, self->parameters[0]);
      }

      PyErr_SetArgsError((PyObject *) self, "subList", args);
      return NULL;
    }

    static PyObject *t_List_toArray(t_List *self, PyObject *args)
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

      return callSuper(PY_TYPE(List), (PyObject *) self, "toArray", args, 2);
    }
    static PyObject *t_List_get__parameters_(t_List *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_List_get__empty(t_List *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *TrajectoryStateHistoryMetadataKey::class$ = NULL;
              jmethodID *TrajectoryStateHistoryMetadataKey::mids$ = NULL;
              bool TrajectoryStateHistoryMetadataKey::live$ = false;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::CENTER_NAME = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::COMMENT = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::INTERPOLATION = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::INTERPOLATION_DEGREE = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::ORB_AVERAGING = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::ORB_REVNUM = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::ORB_REVNUM_BASIS = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::PROPAGATOR = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_BASIS = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_BASIS_ID = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_FRAME_EPOCH = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_ID = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_NEXT_ID = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_PREV_ID = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_REF_FRAME = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_TYPE = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_UNITS = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::USEABLE_START_TIME = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::USEABLE_STOP_TIME = NULL;

              jclass TrajectoryStateHistoryMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_8d0aeaccffd2d007] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;)Z");
                  mids$[mid_valueOf_c39e9ea2d84d5c2f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;");
                  mids$[mid_values_c824951edf441f16] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CENTER_NAME = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "CENTER_NAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  COMMENT = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  INTERPOLATION = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  INTERPOLATION_DEGREE = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION_DEGREE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  ORB_AVERAGING = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "ORB_AVERAGING", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  ORB_REVNUM = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "ORB_REVNUM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  ORB_REVNUM_BASIS = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "ORB_REVNUM_BASIS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  PROPAGATOR = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "PROPAGATOR", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_BASIS = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_BASIS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_BASIS_ID = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_BASIS_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_FRAME_EPOCH = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_ID = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_NEXT_ID = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_NEXT_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_PREV_ID = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_PREV_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_REF_FRAME = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_TYPE = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_UNITS = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_UNITS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  USEABLE_START_TIME = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "USEABLE_START_TIME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  USEABLE_STOP_TIME = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "USEABLE_STOP_TIME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean TrajectoryStateHistoryMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_8d0aeaccffd2d007], a0.this$, a1.this$, a2.this$);
              }

              TrajectoryStateHistoryMetadataKey TrajectoryStateHistoryMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return TrajectoryStateHistoryMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c39e9ea2d84d5c2f], a0.this$));
              }

              JArray< TrajectoryStateHistoryMetadataKey > TrajectoryStateHistoryMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< TrajectoryStateHistoryMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_c824951edf441f16]));
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
              static PyObject *t_TrajectoryStateHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_of_(t_TrajectoryStateHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_process(t_TrajectoryStateHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_values(PyTypeObject *type);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_get__parameters_(t_TrajectoryStateHistoryMetadataKey *self, void *data);
              static PyGetSetDef t_TrajectoryStateHistoryMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_TrajectoryStateHistoryMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_TrajectoryStateHistoryMetadataKey__methods_[] = {
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(TrajectoryStateHistoryMetadataKey)[] = {
                { Py_tp_methods, t_TrajectoryStateHistoryMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_TrajectoryStateHistoryMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(TrajectoryStateHistoryMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(TrajectoryStateHistoryMetadataKey, t_TrajectoryStateHistoryMetadataKey, TrajectoryStateHistoryMetadataKey);
              PyObject *t_TrajectoryStateHistoryMetadataKey::wrap_Object(const TrajectoryStateHistoryMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_TrajectoryStateHistoryMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_TrajectoryStateHistoryMetadataKey *self = (t_TrajectoryStateHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_TrajectoryStateHistoryMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_TrajectoryStateHistoryMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_TrajectoryStateHistoryMetadataKey *self = (t_TrajectoryStateHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_TrajectoryStateHistoryMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(TrajectoryStateHistoryMetadataKey), &PY_TYPE_DEF(TrajectoryStateHistoryMetadataKey), module, "TrajectoryStateHistoryMetadataKey", 0);
              }

              void t_TrajectoryStateHistoryMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "class_", make_descriptor(TrajectoryStateHistoryMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "wrapfn_", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(TrajectoryStateHistoryMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "CENTER_NAME", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::CENTER_NAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "COMMENT", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "INTERPOLATION", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::INTERPOLATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "INTERPOLATION_DEGREE", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::INTERPOLATION_DEGREE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "ORB_AVERAGING", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::ORB_AVERAGING)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "ORB_REVNUM", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::ORB_REVNUM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "ORB_REVNUM_BASIS", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::ORB_REVNUM_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "PROPAGATOR", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::PROPAGATOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_BASIS", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_BASIS_ID", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_BASIS_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_FRAME_EPOCH", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_FRAME_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_ID", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_NEXT_ID", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_NEXT_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_PREV_ID", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_REF_FRAME", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_TYPE", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_UNITS", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_UNITS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "USEABLE_START_TIME", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::USEABLE_START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "USEABLE_STOP_TIME", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::USEABLE_STOP_TIME)));
              }

              static PyObject *t_TrajectoryStateHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, TrajectoryStateHistoryMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_TrajectoryStateHistoryMetadataKey::wrap_Object(TrajectoryStateHistoryMetadataKey(((t_TrajectoryStateHistoryMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_TrajectoryStateHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, TrajectoryStateHistoryMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_TrajectoryStateHistoryMetadataKey_of_(t_TrajectoryStateHistoryMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_TrajectoryStateHistoryMetadataKey_process(t_TrajectoryStateHistoryMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                TrajectoryStateHistoryMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadataKey::valueOf(a0));
                  return t_TrajectoryStateHistoryMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_TrajectoryStateHistoryMetadataKey_values(PyTypeObject *type)
              {
                JArray< TrajectoryStateHistoryMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_TrajectoryStateHistoryMetadataKey::wrap_jobject);
              }
              static PyObject *t_TrajectoryStateHistoryMetadataKey_get__parameters_(t_TrajectoryStateHistoryMetadataKey *self, void *data)
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
#include "org/orekit/data/SeriesTerm.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "org/orekit/data/SeriesTerm.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *SeriesTerm::class$ = NULL;
      jmethodID *SeriesTerm::mids$ = NULL;
      bool SeriesTerm::live$ = false;

      jclass SeriesTerm::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/SeriesTerm");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_c65d45c928e07977] = env->getMethodID(cls, "add", "(IIDD)V");
          mids$[mid_buildTerm_066ac2bf8d52cd60] = env->getStaticMethodID(cls, "buildTerm", "(IIIIIIIIIIIIIII)Lorg/orekit/data/SeriesTerm;");
          mids$[mid_derivative_6bcdaa5aa99188a7] = env->getMethodID(cls, "derivative", "(Lorg/orekit/data/BodiesElements;)[D");
          mids$[mid_derivative_2ebca4e2d8d7517f] = env->getMethodID(cls, "derivative", "(Lorg/orekit/data/FieldBodiesElements;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCosCoeff_6d920aab27f0a3d2] = env->getMethodID(cls, "getCosCoeff", "(II)D");
          mids$[mid_getDegree_d938fc64e8c6df2d] = env->getMethodID(cls, "getDegree", "(I)I");
          mids$[mid_getSinCoeff_6d920aab27f0a3d2] = env->getMethodID(cls, "getSinCoeff", "(II)D");
          mids$[mid_value_6bcdaa5aa99188a7] = env->getMethodID(cls, "value", "(Lorg/orekit/data/BodiesElements;)[D");
          mids$[mid_value_2ebca4e2d8d7517f] = env->getMethodID(cls, "value", "(Lorg/orekit/data/FieldBodiesElements;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_argumentDerivative_7212d8ed403494a1] = env->getMethodID(cls, "argumentDerivative", "(Lorg/orekit/data/BodiesElements;)D");
          mids$[mid_argumentDerivative_3cea1ba38c4e1540] = env->getMethodID(cls, "argumentDerivative", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_argument_3cea1ba38c4e1540] = env->getMethodID(cls, "argument", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_argument_7212d8ed403494a1] = env->getMethodID(cls, "argument", "(Lorg/orekit/data/BodiesElements;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void SeriesTerm::add(jint a0, jint a1, jdouble a2, jdouble a3) const
      {
        env->callVoidMethod(this$, mids$[mid_add_c65d45c928e07977], a0, a1, a2, a3);
      }

      SeriesTerm SeriesTerm::buildTerm(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5, jint a6, jint a7, jint a8, jint a9, jint a10, jint a11, jint a12, jint a13, jint a14)
      {
        jclass cls = env->getClass(initializeClass);
        return SeriesTerm(env->callStaticObjectMethod(cls, mids$[mid_buildTerm_066ac2bf8d52cd60], a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14));
      }

      JArray< jdouble > SeriesTerm::derivative(const ::org::orekit::data::BodiesElements & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_derivative_6bcdaa5aa99188a7], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > SeriesTerm::derivative(const ::org::orekit::data::FieldBodiesElements & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_derivative_2ebca4e2d8d7517f], a0.this$));
      }

      jdouble SeriesTerm::getCosCoeff(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCosCoeff_6d920aab27f0a3d2], a0, a1);
      }

      jint SeriesTerm::getDegree(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getDegree_d938fc64e8c6df2d], a0);
      }

      jdouble SeriesTerm::getSinCoeff(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSinCoeff_6d920aab27f0a3d2], a0, a1);
      }

      JArray< jdouble > SeriesTerm::value(const ::org::orekit::data::BodiesElements & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_6bcdaa5aa99188a7], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > SeriesTerm::value(const ::org::orekit::data::FieldBodiesElements & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_2ebca4e2d8d7517f], a0.this$));
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
      static PyObject *t_SeriesTerm_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SeriesTerm_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SeriesTerm_add(t_SeriesTerm *self, PyObject *args);
      static PyObject *t_SeriesTerm_buildTerm(PyTypeObject *type, PyObject *args);
      static PyObject *t_SeriesTerm_derivative(t_SeriesTerm *self, PyObject *args);
      static PyObject *t_SeriesTerm_getCosCoeff(t_SeriesTerm *self, PyObject *args);
      static PyObject *t_SeriesTerm_getDegree(t_SeriesTerm *self, PyObject *arg);
      static PyObject *t_SeriesTerm_getSinCoeff(t_SeriesTerm *self, PyObject *args);
      static PyObject *t_SeriesTerm_value(t_SeriesTerm *self, PyObject *args);

      static PyMethodDef t_SeriesTerm__methods_[] = {
        DECLARE_METHOD(t_SeriesTerm, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SeriesTerm, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SeriesTerm, add, METH_VARARGS),
        DECLARE_METHOD(t_SeriesTerm, buildTerm, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SeriesTerm, derivative, METH_VARARGS),
        DECLARE_METHOD(t_SeriesTerm, getCosCoeff, METH_VARARGS),
        DECLARE_METHOD(t_SeriesTerm, getDegree, METH_O),
        DECLARE_METHOD(t_SeriesTerm, getSinCoeff, METH_VARARGS),
        DECLARE_METHOD(t_SeriesTerm, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SeriesTerm)[] = {
        { Py_tp_methods, t_SeriesTerm__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SeriesTerm)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SeriesTerm, t_SeriesTerm, SeriesTerm);

      void t_SeriesTerm::install(PyObject *module)
      {
        installType(&PY_TYPE(SeriesTerm), &PY_TYPE_DEF(SeriesTerm), module, "SeriesTerm", 0);
      }

      void t_SeriesTerm::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SeriesTerm), "class_", make_descriptor(SeriesTerm::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SeriesTerm), "wrapfn_", make_descriptor(t_SeriesTerm::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SeriesTerm), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SeriesTerm_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SeriesTerm::initializeClass, 1)))
          return NULL;
        return t_SeriesTerm::wrap_Object(SeriesTerm(((t_SeriesTerm *) arg)->object.this$));
      }
      static PyObject *t_SeriesTerm_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SeriesTerm::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SeriesTerm_add(t_SeriesTerm *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;
        jdouble a3;

        if (!parseArgs(args, "IIDD", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(self->object.add(a0, a1, a2, a3));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_SeriesTerm_buildTerm(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;
        jint a6;
        jint a7;
        jint a8;
        jint a9;
        jint a10;
        jint a11;
        jint a12;
        jint a13;
        jint a14;
        SeriesTerm result((jobject) NULL);

        if (!parseArgs(args, "IIIIIIIIIIIIIII", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14))
        {
          OBJ_CALL(result = ::org::orekit::data::SeriesTerm::buildTerm(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14));
          return t_SeriesTerm::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "buildTerm", args);
        return NULL;
      }

      static PyObject *t_SeriesTerm_derivative(t_SeriesTerm *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::data::FieldBodiesElements a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::data::FieldBodiesElements::initializeClass, &a0, &p0, ::org::orekit::data::t_FieldBodiesElements::parameters_))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "derivative", args);
        return NULL;
      }

      static PyObject *t_SeriesTerm_getCosCoeff(t_SeriesTerm *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getCosCoeff(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCosCoeff", args);
        return NULL;
      }

      static PyObject *t_SeriesTerm_getDegree(t_SeriesTerm *self, PyObject *arg)
      {
        jint a0;
        jint result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getDegree(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getDegree", arg);
        return NULL;
      }

      static PyObject *t_SeriesTerm_getSinCoeff(t_SeriesTerm *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSinCoeff(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSinCoeff", args);
        return NULL;
      }

      static PyObject *t_SeriesTerm_value(t_SeriesTerm *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::data::FieldBodiesElements a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::data::FieldBodiesElements::initializeClass, &a0, &p0, ::org::orekit::data::t_FieldBodiesElements::parameters_))
            {
              OBJ_CALL(result = self->object.value(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/ModifierGradientConverter.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ModifierGradientConverter::class$ = NULL;
          jmethodID *ModifierGradientConverter::mids$ = NULL;
          bool ModifierGradientConverter::live$ = false;

          jclass ModifierGradientConverter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ModifierGradientConverter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_15fc1578d17e78a4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;ILorg/orekit/attitudes/AttitudeProvider;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ModifierGradientConverter::ModifierGradientConverter(const ::org::orekit::propagation::SpacecraftState & a0, jint a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::integration::AbstractGradientConverter(env->newObject(initializeClass, &mids$, mid_init$_15fc1578d17e78a4, a0.this$, a1, a2.this$)) {}
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
          static PyObject *t_ModifierGradientConverter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ModifierGradientConverter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ModifierGradientConverter_init_(t_ModifierGradientConverter *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_ModifierGradientConverter__methods_[] = {
            DECLARE_METHOD(t_ModifierGradientConverter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ModifierGradientConverter, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ModifierGradientConverter)[] = {
            { Py_tp_methods, t_ModifierGradientConverter__methods_ },
            { Py_tp_init, (void *) t_ModifierGradientConverter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ModifierGradientConverter)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractGradientConverter),
            NULL
          };

          DEFINE_TYPE(ModifierGradientConverter, t_ModifierGradientConverter, ModifierGradientConverter);

          void t_ModifierGradientConverter::install(PyObject *module)
          {
            installType(&PY_TYPE(ModifierGradientConverter), &PY_TYPE_DEF(ModifierGradientConverter), module, "ModifierGradientConverter", 0);
          }

          void t_ModifierGradientConverter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifierGradientConverter), "class_", make_descriptor(ModifierGradientConverter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifierGradientConverter), "wrapfn_", make_descriptor(t_ModifierGradientConverter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifierGradientConverter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ModifierGradientConverter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ModifierGradientConverter::initializeClass, 1)))
              return NULL;
            return t_ModifierGradientConverter::wrap_Object(ModifierGradientConverter(((t_ModifierGradientConverter *) arg)->object.this$));
          }
          static PyObject *t_ModifierGradientConverter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ModifierGradientConverter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ModifierGradientConverter_init_(t_ModifierGradientConverter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jint a1;
            ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
            ModifierGradientConverter object((jobject) NULL);

            if (!parseArgs(args, "kIk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ModifierGradientConverter(a0, a1, a2));
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmParser.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmDataSubStructureKey::class$ = NULL;
              jmethodID *OcmDataSubStructureKey::mids$ = NULL;
              bool OcmDataSubStructureKey::live$ = false;
              OcmDataSubStructureKey *OcmDataSubStructureKey::COV = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::MAN = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::OD = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::PERT = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::PHYS = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::TRAJ = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::USER = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::cov = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::man = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::od = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::pert = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::phys = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::traj = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::user = NULL;

              jclass OcmDataSubStructureKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_2327ce985328655e] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmParser;)Z");
                  mids$[mid_valueOf_f9afbbd749fc1400] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;");
                  mids$[mid_values_da021e3c8d511a4f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COV = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "COV", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  MAN = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "MAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  OD = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "OD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  PERT = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "PERT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  PHYS = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "PHYS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  TRAJ = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "TRAJ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  USER = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "USER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  cov = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "cov", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  man = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "man", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  od = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "od", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  pert = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "pert", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  phys = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "phys", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  traj = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "traj", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  user = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "user", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OcmDataSubStructureKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser & a1) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_2327ce985328655e], a0.this$, a1.this$);
              }

              OcmDataSubStructureKey OcmDataSubStructureKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OcmDataSubStructureKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f9afbbd749fc1400], a0.this$));
              }

              JArray< OcmDataSubStructureKey > OcmDataSubStructureKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OcmDataSubStructureKey >(env->callStaticObjectMethod(cls, mids$[mid_values_da021e3c8d511a4f]));
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
              static PyObject *t_OcmDataSubStructureKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmDataSubStructureKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmDataSubStructureKey_of_(t_OcmDataSubStructureKey *self, PyObject *args);
              static PyObject *t_OcmDataSubStructureKey_process(t_OcmDataSubStructureKey *self, PyObject *args);
              static PyObject *t_OcmDataSubStructureKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OcmDataSubStructureKey_values(PyTypeObject *type);
              static PyObject *t_OcmDataSubStructureKey_get__parameters_(t_OcmDataSubStructureKey *self, void *data);
              static PyGetSetDef t_OcmDataSubStructureKey__fields_[] = {
                DECLARE_GET_FIELD(t_OcmDataSubStructureKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmDataSubStructureKey__methods_[] = {
                DECLARE_METHOD(t_OcmDataSubStructureKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmDataSubStructureKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmDataSubStructureKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OcmDataSubStructureKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OcmDataSubStructureKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OcmDataSubStructureKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmDataSubStructureKey)[] = {
                { Py_tp_methods, t_OcmDataSubStructureKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OcmDataSubStructureKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmDataSubStructureKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OcmDataSubStructureKey, t_OcmDataSubStructureKey, OcmDataSubStructureKey);
              PyObject *t_OcmDataSubStructureKey::wrap_Object(const OcmDataSubStructureKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmDataSubStructureKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmDataSubStructureKey *self = (t_OcmDataSubStructureKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OcmDataSubStructureKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmDataSubStructureKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmDataSubStructureKey *self = (t_OcmDataSubStructureKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OcmDataSubStructureKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmDataSubStructureKey), &PY_TYPE_DEF(OcmDataSubStructureKey), module, "OcmDataSubStructureKey", 0);
              }

              void t_OcmDataSubStructureKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "class_", make_descriptor(OcmDataSubStructureKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "wrapfn_", make_descriptor(t_OcmDataSubStructureKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OcmDataSubStructureKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "COV", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::COV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "MAN", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::MAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "OD", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::OD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "PERT", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::PERT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "PHYS", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::PHYS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "TRAJ", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::TRAJ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "USER", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::USER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "cov", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::cov)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "man", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::man)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "od", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::od)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "pert", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::pert)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "phys", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::phys)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "traj", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::traj)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "user", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::user)));
              }

              static PyObject *t_OcmDataSubStructureKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmDataSubStructureKey::initializeClass, 1)))
                  return NULL;
                return t_OcmDataSubStructureKey::wrap_Object(OcmDataSubStructureKey(((t_OcmDataSubStructureKey *) arg)->object.this$));
              }
              static PyObject *t_OcmDataSubStructureKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmDataSubStructureKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OcmDataSubStructureKey_of_(t_OcmDataSubStructureKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OcmDataSubStructureKey_process(t_OcmDataSubStructureKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser a1((jobject) NULL);
                PyTypeObject **p1;
                jboolean result;

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmParser::parameters_))
                {
                  OBJ_CALL(result = self->object.process(a0, a1));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OcmDataSubStructureKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OcmDataSubStructureKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmDataSubStructureKey::valueOf(a0));
                  return t_OcmDataSubStructureKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OcmDataSubStructureKey_values(PyTypeObject *type)
              {
                JArray< OcmDataSubStructureKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmDataSubStructureKey::values());
                return JArray<jobject>(result.this$).wrap(t_OcmDataSubStructureKey::wrap_jobject);
              }
              static PyObject *t_OcmDataSubStructureKey_get__parameters_(t_OcmDataSubStructureKey *self, void *data)
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
#include "org/orekit/data/FiltersManager.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/data/DataFilter.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *FiltersManager::class$ = NULL;
      jmethodID *FiltersManager::mids$ = NULL;
      bool FiltersManager::live$ = false;

      jclass FiltersManager::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/FiltersManager");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addFilter_c5b30e242a2124b9] = env->getMethodID(cls, "addFilter", "(Lorg/orekit/data/DataFilter;)V");
          mids$[mid_applyRelevantFilters_4edc3983a04dd819] = env->getMethodID(cls, "applyRelevantFilters", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");
          mids$[mid_clearFilters_ff7cb6c242604316] = env->getMethodID(cls, "clearFilters", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FiltersManager::FiltersManager() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void FiltersManager::addFilter(const ::org::orekit::data::DataFilter & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addFilter_c5b30e242a2124b9], a0.this$);
      }

      ::org::orekit::data::DataSource FiltersManager::applyRelevantFilters(const ::org::orekit::data::DataSource & a0) const
      {
        return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_applyRelevantFilters_4edc3983a04dd819], a0.this$));
      }

      void FiltersManager::clearFilters() const
      {
        env->callVoidMethod(this$, mids$[mid_clearFilters_ff7cb6c242604316]);
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
      static PyObject *t_FiltersManager_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FiltersManager_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FiltersManager_init_(t_FiltersManager *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FiltersManager_addFilter(t_FiltersManager *self, PyObject *arg);
      static PyObject *t_FiltersManager_applyRelevantFilters(t_FiltersManager *self, PyObject *arg);
      static PyObject *t_FiltersManager_clearFilters(t_FiltersManager *self);

      static PyMethodDef t_FiltersManager__methods_[] = {
        DECLARE_METHOD(t_FiltersManager, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FiltersManager, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FiltersManager, addFilter, METH_O),
        DECLARE_METHOD(t_FiltersManager, applyRelevantFilters, METH_O),
        DECLARE_METHOD(t_FiltersManager, clearFilters, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FiltersManager)[] = {
        { Py_tp_methods, t_FiltersManager__methods_ },
        { Py_tp_init, (void *) t_FiltersManager_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FiltersManager)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FiltersManager, t_FiltersManager, FiltersManager);

      void t_FiltersManager::install(PyObject *module)
      {
        installType(&PY_TYPE(FiltersManager), &PY_TYPE_DEF(FiltersManager), module, "FiltersManager", 0);
      }

      void t_FiltersManager::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FiltersManager), "class_", make_descriptor(FiltersManager::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FiltersManager), "wrapfn_", make_descriptor(t_FiltersManager::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FiltersManager), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FiltersManager_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FiltersManager::initializeClass, 1)))
          return NULL;
        return t_FiltersManager::wrap_Object(FiltersManager(((t_FiltersManager *) arg)->object.this$));
      }
      static PyObject *t_FiltersManager_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FiltersManager::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FiltersManager_init_(t_FiltersManager *self, PyObject *args, PyObject *kwds)
      {
        FiltersManager object((jobject) NULL);

        INT_CALL(object = FiltersManager());
        self->object = object;

        return 0;
      }

      static PyObject *t_FiltersManager_addFilter(t_FiltersManager *self, PyObject *arg)
      {
        ::org::orekit::data::DataFilter a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataFilter::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addFilter(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addFilter", arg);
        return NULL;
      }

      static PyObject *t_FiltersManager_applyRelevantFilters(t_FiltersManager *self, PyObject *arg)
      {
        ::org::orekit::data::DataSource a0((jobject) NULL);
        ::org::orekit::data::DataSource result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.applyRelevantFilters(a0));
          return ::org::orekit::data::t_DataSource::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "applyRelevantFilters", arg);
        return NULL;
      }

      static PyObject *t_FiltersManager_clearFilters(t_FiltersManager *self)
      {
        OBJ_CALL(self->object.clearFilters());
        Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GLONASSOrbitalElements::class$ = NULL;
            jmethodID *GLONASSOrbitalElements::mids$ = NULL;
            bool GLONASSOrbitalElements::live$ = false;

            jclass GLONASSOrbitalElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getDeltaI_9981f74b2d109da6] = env->getMethodID(cls, "getDeltaI", "()D");
                mids$[mid_getDeltaT_9981f74b2d109da6] = env->getMethodID(cls, "getDeltaT", "()D");
                mids$[mid_getDeltaTDot_9981f74b2d109da6] = env->getMethodID(cls, "getDeltaTDot", "()D");
                mids$[mid_getE_9981f74b2d109da6] = env->getMethodID(cls, "getE", "()D");
                mids$[mid_getGammaN_9981f74b2d109da6] = env->getMethodID(cls, "getGammaN", "()D");
                mids$[mid_getIOD_d6ab429752e7c267] = env->getMethodID(cls, "getIOD", "()I");
                mids$[mid_getLambda_9981f74b2d109da6] = env->getMethodID(cls, "getLambda", "()D");
                mids$[mid_getN4_d6ab429752e7c267] = env->getMethodID(cls, "getN4", "()I");
                mids$[mid_getNa_d6ab429752e7c267] = env->getMethodID(cls, "getNa", "()I");
                mids$[mid_getPa_9981f74b2d109da6] = env->getMethodID(cls, "getPa", "()D");
                mids$[mid_getTN_9981f74b2d109da6] = env->getMethodID(cls, "getTN", "()D");
                mids$[mid_getTime_9981f74b2d109da6] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getX_9981f74b2d109da6] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXDot_9981f74b2d109da6] = env->getMethodID(cls, "getXDot", "()D");
                mids$[mid_getXDotDot_9981f74b2d109da6] = env->getMethodID(cls, "getXDotDot", "()D");
                mids$[mid_getY_9981f74b2d109da6] = env->getMethodID(cls, "getY", "()D");
                mids$[mid_getYDot_9981f74b2d109da6] = env->getMethodID(cls, "getYDot", "()D");
                mids$[mid_getYDotDot_9981f74b2d109da6] = env->getMethodID(cls, "getYDotDot", "()D");
                mids$[mid_getZ_9981f74b2d109da6] = env->getMethodID(cls, "getZ", "()D");
                mids$[mid_getZDot_9981f74b2d109da6] = env->getMethodID(cls, "getZDot", "()D");
                mids$[mid_getZDotDot_9981f74b2d109da6] = env->getMethodID(cls, "getZDotDot", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble GLONASSOrbitalElements::getDeltaI() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaI_9981f74b2d109da6]);
            }

            jdouble GLONASSOrbitalElements::getDeltaT() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaT_9981f74b2d109da6]);
            }

            jdouble GLONASSOrbitalElements::getDeltaTDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaTDot_9981f74b2d109da6]);
            }

            jdouble GLONASSOrbitalElements::getE() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE_9981f74b2d109da6]);
            }

            jdouble GLONASSOrbitalElements::getGammaN() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGammaN_9981f74b2d109da6]);
            }

            jint GLONASSOrbitalElements::getIOD() const
            {
              return env->callIntMethod(this$, mids$[mid_getIOD_d6ab429752e7c267]);
            }

            jdouble GLONASSOrbitalElements::getLambda() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLambda_9981f74b2d109da6]);
            }

            jint GLONASSOrbitalElements::getN4() const
            {
              return env->callIntMethod(this$, mids$[mid_getN4_d6ab429752e7c267]);
            }

            jint GLONASSOrbitalElements::getNa() const
            {
              return env->callIntMethod(this$, mids$[mid_getNa_d6ab429752e7c267]);
            }

            jdouble GLONASSOrbitalElements::getPa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPa_9981f74b2d109da6]);
            }

            jdouble GLONASSOrbitalElements::getTN() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTN_9981f74b2d109da6]);
            }

            jdouble GLONASSOrbitalElements::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_9981f74b2d109da6]);
            }

            jdouble GLONASSOrbitalElements::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_9981f74b2d109da6]);
            }

            jdouble GLONASSOrbitalElements::getXDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDot_9981f74b2d109da6]);
            }

            jdouble GLONASSOrbitalElements::getXDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDotDot_9981f74b2d109da6]);
            }

            jdouble GLONASSOrbitalElements::getY() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY_9981f74b2d109da6]);
            }

            jdouble GLONASSOrbitalElements::getYDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDot_9981f74b2d109da6]);
            }

            jdouble GLONASSOrbitalElements::getYDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDotDot_9981f74b2d109da6]);
            }

            jdouble GLONASSOrbitalElements::getZ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZ_9981f74b2d109da6]);
            }

            jdouble GLONASSOrbitalElements::getZDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDot_9981f74b2d109da6]);
            }

            jdouble GLONASSOrbitalElements::getZDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDotDot_9981f74b2d109da6]);
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
            static PyObject *t_GLONASSOrbitalElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GLONASSOrbitalElements_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GLONASSOrbitalElements_getDeltaI(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getDeltaT(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getDeltaTDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getE(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getGammaN(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getIOD(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getLambda(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getN4(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getNa(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getPa(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getTN(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getTime(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getX(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getXDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getXDotDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getY(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getYDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getYDotDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getZ(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getZDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getZDotDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_get__deltaI(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__deltaT(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__deltaTDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__e(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__gammaN(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__iOD(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__lambda(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__n4(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__na(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__pa(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__tN(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__time(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__x(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__xDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__xDotDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__y(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__yDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__yDotDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__z(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__zDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__zDotDot(t_GLONASSOrbitalElements *self, void *data);
            static PyGetSetDef t_GLONASSOrbitalElements__fields_[] = {
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, deltaI),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, deltaT),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, deltaTDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, e),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, gammaN),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, iOD),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, lambda),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, n4),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, na),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, pa),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, tN),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, time),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, x),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, xDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, xDotDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, y),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, yDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, yDotDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, z),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, zDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, zDotDot),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GLONASSOrbitalElements__methods_[] = {
              DECLARE_METHOD(t_GLONASSOrbitalElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getDeltaI, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getDeltaT, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getDeltaTDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getE, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getGammaN, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getIOD, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getLambda, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getN4, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getNa, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getPa, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getTN, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getTime, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getX, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getXDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getXDotDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getY, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getYDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getYDotDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getZ, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getZDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getZDotDot, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GLONASSOrbitalElements)[] = {
              { Py_tp_methods, t_GLONASSOrbitalElements__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_GLONASSOrbitalElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GLONASSOrbitalElements)[] = {
              &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
              NULL
            };

            DEFINE_TYPE(GLONASSOrbitalElements, t_GLONASSOrbitalElements, GLONASSOrbitalElements);

            void t_GLONASSOrbitalElements::install(PyObject *module)
            {
              installType(&PY_TYPE(GLONASSOrbitalElements), &PY_TYPE_DEF(GLONASSOrbitalElements), module, "GLONASSOrbitalElements", 0);
            }

            void t_GLONASSOrbitalElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSOrbitalElements), "class_", make_descriptor(GLONASSOrbitalElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSOrbitalElements), "wrapfn_", make_descriptor(t_GLONASSOrbitalElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSOrbitalElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GLONASSOrbitalElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GLONASSOrbitalElements::initializeClass, 1)))
                return NULL;
              return t_GLONASSOrbitalElements::wrap_Object(GLONASSOrbitalElements(((t_GLONASSOrbitalElements *) arg)->object.this$));
            }
            static PyObject *t_GLONASSOrbitalElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GLONASSOrbitalElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_GLONASSOrbitalElements_getDeltaI(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaI());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getDeltaT(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaT());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getDeltaTDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaTDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getE(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getGammaN(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGammaN());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getIOD(t_GLONASSOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIOD());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getLambda(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLambda());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getN4(t_GLONASSOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getN4());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getNa(t_GLONASSOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getNa());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getPa(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getTN(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTN());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getTime(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getX(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getXDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getXDotDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getY(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getYDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getYDotDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getZ(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getZDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getZDotDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_get__deltaI(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaI());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__deltaT(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaT());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__deltaTDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaTDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__e(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__gammaN(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGammaN());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__iOD(t_GLONASSOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIOD());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__lambda(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLambda());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__n4(t_GLONASSOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getN4());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__na(t_GLONASSOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getNa());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__pa(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__tN(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTN());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__time(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__x(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__xDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__xDotDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__y(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__yDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__yDotDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__z(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZ());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__zDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__zDotDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDotDot());
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
#include "org/orekit/rugged/los/LOSBuilder.h"
#include "java/util/List.h"
#include "org/orekit/rugged/los/LOSBuilder.h"
#include "org/orekit/rugged/los/TimeDependentLOS.h"
#include "org/orekit/rugged/los/TimeIndependentLOSTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/los/LOSTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *LOSBuilder::class$ = NULL;
        jmethodID *LOSBuilder::mids$ = NULL;
        bool LOSBuilder::live$ = false;

        jclass LOSBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/LOSBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_aa335fea495d60e0] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
            mids$[mid_addTransform_cd9ed225e90c435e] = env->getMethodID(cls, "addTransform", "(Lorg/orekit/rugged/los/LOSTransform;)Lorg/orekit/rugged/los/LOSBuilder;");
            mids$[mid_addTransform_b4678103b0e536e2] = env->getMethodID(cls, "addTransform", "(Lorg/orekit/rugged/los/TimeIndependentLOSTransform;)Lorg/orekit/rugged/los/LOSBuilder;");
            mids$[mid_build_5623a40dfea509c3] = env->getMethodID(cls, "build", "()Lorg/orekit/rugged/los/TimeDependentLOS;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LOSBuilder::LOSBuilder(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aa335fea495d60e0, a0.this$)) {}

        LOSBuilder LOSBuilder::addTransform(const ::org::orekit::rugged::los::LOSTransform & a0) const
        {
          return LOSBuilder(env->callObjectMethod(this$, mids$[mid_addTransform_cd9ed225e90c435e], a0.this$));
        }

        LOSBuilder LOSBuilder::addTransform(const ::org::orekit::rugged::los::TimeIndependentLOSTransform & a0) const
        {
          return LOSBuilder(env->callObjectMethod(this$, mids$[mid_addTransform_b4678103b0e536e2], a0.this$));
        }

        ::org::orekit::rugged::los::TimeDependentLOS LOSBuilder::build() const
        {
          return ::org::orekit::rugged::los::TimeDependentLOS(env->callObjectMethod(this$, mids$[mid_build_5623a40dfea509c3]));
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
      namespace los {
        static PyObject *t_LOSBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LOSBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LOSBuilder_init_(t_LOSBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LOSBuilder_addTransform(t_LOSBuilder *self, PyObject *args);
        static PyObject *t_LOSBuilder_build(t_LOSBuilder *self);

        static PyMethodDef t_LOSBuilder__methods_[] = {
          DECLARE_METHOD(t_LOSBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LOSBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LOSBuilder, addTransform, METH_VARARGS),
          DECLARE_METHOD(t_LOSBuilder, build, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LOSBuilder)[] = {
          { Py_tp_methods, t_LOSBuilder__methods_ },
          { Py_tp_init, (void *) t_LOSBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LOSBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LOSBuilder, t_LOSBuilder, LOSBuilder);

        void t_LOSBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(LOSBuilder), &PY_TYPE_DEF(LOSBuilder), module, "LOSBuilder", 0);
        }

        void t_LOSBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSBuilder), "class_", make_descriptor(LOSBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSBuilder), "wrapfn_", make_descriptor(t_LOSBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LOSBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LOSBuilder::initializeClass, 1)))
            return NULL;
          return t_LOSBuilder::wrap_Object(LOSBuilder(((t_LOSBuilder *) arg)->object.this$));
        }
        static PyObject *t_LOSBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LOSBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LOSBuilder_init_(t_LOSBuilder *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          LOSBuilder object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = LOSBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LOSBuilder_addTransform(t_LOSBuilder *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::rugged::los::LOSTransform a0((jobject) NULL);
              LOSBuilder result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::rugged::los::LOSTransform::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.addTransform(a0));
                return t_LOSBuilder::wrap_Object(result);
              }
            }
            {
              ::org::orekit::rugged::los::TimeIndependentLOSTransform a0((jobject) NULL);
              LOSBuilder result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::rugged::los::TimeIndependentLOSTransform::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.addTransform(a0));
                return t_LOSBuilder::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addTransform", args);
          return NULL;
        }

        static PyObject *t_LOSBuilder_build(t_LOSBuilder *self)
        {
          ::org::orekit::rugged::los::TimeDependentLOS result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::rugged::los::t_TimeDependentLOS::wrap_Object(result);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/BlockRealMatrix.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/BlockRealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *BlockRealMatrix::class$ = NULL;
      jmethodID *BlockRealMatrix::mids$ = NULL;
      bool BlockRealMatrix::live$ = false;
      jint BlockRealMatrix::BLOCK_SIZE = (jint) 0;

      jclass BlockRealMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/BlockRealMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_11ecdbb5af7ed67d] = env->getMethodID(cls, "<init>", "([[D)V");
          mids$[mid_init$_b5d23e6c0858e8ed] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_init$_3d641a8704e0676c] = env->getMethodID(cls, "<init>", "(II[[DZ)V");
          mids$[mid_add_7935fff4ff8c7980] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/BlockRealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_add_c301739178ffd482] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_addToEntry_e98d7b3e971b6087] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_copy_8319c147ca237495] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_createBlocksLayout_257ef40acf1ad25f] = env->getStaticMethodID(cls, "createBlocksLayout", "(II)[[D");
          mids$[mid_createMatrix_73d598fe24f0c288] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_getColumn_81add9fc9d78d5b9] = env->getMethodID(cls, "getColumn", "(I)[D");
          mids$[mid_getColumnDimension_d6ab429752e7c267] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getColumnMatrix_9763bd9f03a4ccd6] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_getColumnVector_2ea477ed14744e74] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getData_eda3f19b8225f78f] = env->getMethodID(cls, "getData", "()[[D");
          mids$[mid_getEntry_6d920aab27f0a3d2] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getFrobeniusNorm_9981f74b2d109da6] = env->getMethodID(cls, "getFrobeniusNorm", "()D");
          mids$[mid_getNorm1_9981f74b2d109da6] = env->getMethodID(cls, "getNorm1", "()D");
          mids$[mid_getNormInfty_9981f74b2d109da6] = env->getMethodID(cls, "getNormInfty", "()D");
          mids$[mid_getRow_81add9fc9d78d5b9] = env->getMethodID(cls, "getRow", "(I)[D");
          mids$[mid_getRowDimension_d6ab429752e7c267] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getRowMatrix_9763bd9f03a4ccd6] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_getRowVector_2ea477ed14744e74] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getSubMatrix_48d6fd9521359716] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_multiply_7935fff4ff8c7980] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/BlockRealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_multiply_c301739178ffd482] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_multiplyEntry_e98d7b3e971b6087] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_multiplyTransposed_7935fff4ff8c7980] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/BlockRealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_multiplyTransposed_c301739178ffd482] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_operate_51f624c89851da7e] = env->getMethodID(cls, "operate", "([D)[D");
          mids$[mid_preMultiply_51f624c89851da7e] = env->getMethodID(cls, "preMultiply", "([D)[D");
          mids$[mid_scalarAdd_071bd3def5374a3c] = env->getMethodID(cls, "scalarAdd", "(D)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_scalarMultiply_d5a7c13c36e5009c] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_setColumn_9d367e34fba0a5ea] = env->getMethodID(cls, "setColumn", "(I[D)V");
          mids$[mid_setColumnMatrix_f7b5db2ddda2ff4c] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setColumnVector_543485b1a87e5329] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setEntry_e98d7b3e971b6087] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_setRow_9d367e34fba0a5ea] = env->getMethodID(cls, "setRow", "(I[D)V");
          mids$[mid_setRowMatrix_229e5970d58e386e] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/BlockRealMatrix;)V");
          mids$[mid_setRowMatrix_f7b5db2ddda2ff4c] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setRowVector_543485b1a87e5329] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setSubMatrix_5cc0a3799fec1dc7] = env->getMethodID(cls, "setSubMatrix", "([[DII)V");
          mids$[mid_subtract_7935fff4ff8c7980] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/BlockRealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_subtract_c301739178ffd482] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_toBlocksLayout_d9fb07d4cbf99fb5] = env->getStaticMethodID(cls, "toBlocksLayout", "([[D)[[D");
          mids$[mid_transpose_8319c147ca237495] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_transposeMultiply_7935fff4ff8c7980] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/BlockRealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_transposeMultiply_c301739178ffd482] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_walkInOptimizedOrder_a7758d3537e559f7] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_5a884deb680e092c] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_0c89eacb5543486a] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInOptimizedOrder_be1420f911d13599] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_a7758d3537e559f7] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInRowOrder_5a884deb680e092c] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInRowOrder_0c89eacb5543486a] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_be1420f911d13599] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BLOCK_SIZE = env->getStaticIntField(cls, "BLOCK_SIZE");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BlockRealMatrix::BlockRealMatrix(const JArray< JArray< jdouble > > & a0) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_11ecdbb5af7ed67d, a0.this$)) {}

      BlockRealMatrix::BlockRealMatrix(jint a0, jint a1) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_b5d23e6c0858e8ed, a0, a1)) {}

      BlockRealMatrix::BlockRealMatrix(jint a0, jint a1, const JArray< JArray< jdouble > > & a2, jboolean a3) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_3d641a8704e0676c, a0, a1, a2.this$, a3)) {}

      BlockRealMatrix BlockRealMatrix::add(const BlockRealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_add_7935fff4ff8c7980], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::add(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_add_c301739178ffd482], a0.this$));
      }

      void BlockRealMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_e98d7b3e971b6087], a0, a1, a2);
      }

      BlockRealMatrix BlockRealMatrix::copy() const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_copy_8319c147ca237495]));
      }

      JArray< JArray< jdouble > > BlockRealMatrix::createBlocksLayout(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_createBlocksLayout_257ef40acf1ad25f], a0, a1));
      }

      BlockRealMatrix BlockRealMatrix::createMatrix(jint a0, jint a1) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_73d598fe24f0c288], a0, a1));
      }

      JArray< jdouble > BlockRealMatrix::getColumn(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getColumn_81add9fc9d78d5b9], a0));
      }

      jint BlockRealMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_d6ab429752e7c267]);
      }

      BlockRealMatrix BlockRealMatrix::getColumnMatrix(jint a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_9763bd9f03a4ccd6], a0));
      }

      ::org::hipparchus::linear::RealVector BlockRealMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_2ea477ed14744e74], a0));
      }

      JArray< JArray< jdouble > > BlockRealMatrix::getData() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_eda3f19b8225f78f]));
      }

      jdouble BlockRealMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_6d920aab27f0a3d2], a0, a1);
      }

      jdouble BlockRealMatrix::getFrobeniusNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFrobeniusNorm_9981f74b2d109da6]);
      }

      jdouble BlockRealMatrix::getNorm1() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm1_9981f74b2d109da6]);
      }

      jdouble BlockRealMatrix::getNormInfty() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormInfty_9981f74b2d109da6]);
      }

      JArray< jdouble > BlockRealMatrix::getRow(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRow_81add9fc9d78d5b9], a0));
      }

      jint BlockRealMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_d6ab429752e7c267]);
      }

      BlockRealMatrix BlockRealMatrix::getRowMatrix(jint a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_9763bd9f03a4ccd6], a0));
      }

      ::org::hipparchus::linear::RealVector BlockRealMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getRowVector_2ea477ed14744e74], a0));
      }

      BlockRealMatrix BlockRealMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_48d6fd9521359716], a0, a1, a2, a3));
      }

      BlockRealMatrix BlockRealMatrix::multiply(const BlockRealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_7935fff4ff8c7980], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::multiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_c301739178ffd482], a0.this$));
      }

      void BlockRealMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_e98d7b3e971b6087], a0, a1, a2);
      }

      BlockRealMatrix BlockRealMatrix::multiplyTransposed(const BlockRealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_7935fff4ff8c7980], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::multiplyTransposed(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_c301739178ffd482], a0.this$));
      }

      JArray< jdouble > BlockRealMatrix::operate(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_operate_51f624c89851da7e], a0.this$));
      }

      JArray< jdouble > BlockRealMatrix::preMultiply(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_preMultiply_51f624c89851da7e], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::scalarAdd(jdouble a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_071bd3def5374a3c], a0));
      }

      ::org::hipparchus::linear::RealMatrix BlockRealMatrix::scalarMultiply(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_d5a7c13c36e5009c], a0));
      }

      void BlockRealMatrix::setColumn(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_9d367e34fba0a5ea], a0, a1.this$);
      }

      void BlockRealMatrix::setColumnMatrix(jint a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_f7b5db2ddda2ff4c], a0, a1.this$);
      }

      void BlockRealMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_543485b1a87e5329], a0, a1.this$);
      }

      void BlockRealMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_e98d7b3e971b6087], a0, a1, a2);
      }

      void BlockRealMatrix::setRow(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_9d367e34fba0a5ea], a0, a1.this$);
      }

      void BlockRealMatrix::setRowMatrix(jint a0, const BlockRealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_229e5970d58e386e], a0, a1.this$);
      }

      void BlockRealMatrix::setRowMatrix(jint a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_f7b5db2ddda2ff4c], a0, a1.this$);
      }

      void BlockRealMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_543485b1a87e5329], a0, a1.this$);
      }

      void BlockRealMatrix::setSubMatrix(const JArray< JArray< jdouble > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_5cc0a3799fec1dc7], a0.this$, a1, a2);
      }

      BlockRealMatrix BlockRealMatrix::subtract(const BlockRealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_7935fff4ff8c7980], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::subtract(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_c301739178ffd482], a0.this$));
      }

      JArray< JArray< jdouble > > BlockRealMatrix::toBlocksLayout(const JArray< JArray< jdouble > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_toBlocksLayout_d9fb07d4cbf99fb5], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::transpose() const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_transpose_8319c147ca237495]));
      }

      BlockRealMatrix BlockRealMatrix::transposeMultiply(const BlockRealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_7935fff4ff8c7980], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::transposeMultiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_c301739178ffd482], a0.this$));
      }

      jdouble BlockRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_a7758d3537e559f7], a0.this$);
      }

      jdouble BlockRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_5a884deb680e092c], a0.this$);
      }

      jdouble BlockRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_0c89eacb5543486a], a0.this$, a1, a2, a3, a4);
      }

      jdouble BlockRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_be1420f911d13599], a0.this$, a1, a2, a3, a4);
      }

      jdouble BlockRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_a7758d3537e559f7], a0.this$);
      }

      jdouble BlockRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_5a884deb680e092c], a0.this$);
      }

      jdouble BlockRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_0c89eacb5543486a], a0.this$, a1, a2, a3, a4);
      }

      jdouble BlockRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_be1420f911d13599], a0.this$, a1, a2, a3, a4);
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
      static PyObject *t_BlockRealMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BlockRealMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BlockRealMatrix_init_(t_BlockRealMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BlockRealMatrix_add(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_addToEntry(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_copy(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_createBlocksLayout(PyTypeObject *type, PyObject *args);
      static PyObject *t_BlockRealMatrix_createMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getColumn(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getColumnDimension(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getColumnMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getColumnVector(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getData(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getEntry(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getFrobeniusNorm(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getNorm1(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getNormInfty(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getRow(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getRowDimension(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getRowMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getRowVector(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getSubMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_multiply(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_multiplyEntry(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_multiplyTransposed(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_operate(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_preMultiply(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_scalarAdd(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_scalarMultiply(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setColumn(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setColumnMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setColumnVector(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setEntry(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setRow(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setRowMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setRowVector(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setSubMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_subtract(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_toBlocksLayout(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BlockRealMatrix_transpose(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_transposeMultiply(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_walkInOptimizedOrder(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_walkInRowOrder(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_get__columnDimension(t_BlockRealMatrix *self, void *data);
      static PyObject *t_BlockRealMatrix_get__data(t_BlockRealMatrix *self, void *data);
      static PyObject *t_BlockRealMatrix_get__frobeniusNorm(t_BlockRealMatrix *self, void *data);
      static PyObject *t_BlockRealMatrix_get__norm1(t_BlockRealMatrix *self, void *data);
      static PyObject *t_BlockRealMatrix_get__normInfty(t_BlockRealMatrix *self, void *data);
      static PyObject *t_BlockRealMatrix_get__rowDimension(t_BlockRealMatrix *self, void *data);
      static PyGetSetDef t_BlockRealMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_BlockRealMatrix, columnDimension),
        DECLARE_GET_FIELD(t_BlockRealMatrix, data),
        DECLARE_GET_FIELD(t_BlockRealMatrix, frobeniusNorm),
        DECLARE_GET_FIELD(t_BlockRealMatrix, norm1),
        DECLARE_GET_FIELD(t_BlockRealMatrix, normInfty),
        DECLARE_GET_FIELD(t_BlockRealMatrix, rowDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BlockRealMatrix__methods_[] = {
        DECLARE_METHOD(t_BlockRealMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockRealMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockRealMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, createBlocksLayout, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BlockRealMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getColumn, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getData, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getFrobeniusNorm, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getNorm1, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getNormInfty, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getRow, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getRowVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, scalarAdd, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, scalarMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, toBlocksLayout, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockRealMatrix, transpose, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, transposeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BlockRealMatrix)[] = {
        { Py_tp_methods, t_BlockRealMatrix__methods_ },
        { Py_tp_init, (void *) t_BlockRealMatrix_init_ },
        { Py_tp_getset, t_BlockRealMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BlockRealMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractRealMatrix),
        NULL
      };

      DEFINE_TYPE(BlockRealMatrix, t_BlockRealMatrix, BlockRealMatrix);

      void t_BlockRealMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(BlockRealMatrix), &PY_TYPE_DEF(BlockRealMatrix), module, "BlockRealMatrix", 0);
      }

      void t_BlockRealMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockRealMatrix), "class_", make_descriptor(BlockRealMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockRealMatrix), "wrapfn_", make_descriptor(t_BlockRealMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockRealMatrix), "boxfn_", make_descriptor(boxObject));
        env->getClass(BlockRealMatrix::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockRealMatrix), "BLOCK_SIZE", make_descriptor(BlockRealMatrix::BLOCK_SIZE));
      }

      static PyObject *t_BlockRealMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BlockRealMatrix::initializeClass, 1)))
          return NULL;
        return t_BlockRealMatrix::wrap_Object(BlockRealMatrix(((t_BlockRealMatrix *) arg)->object.this$));
      }
      static PyObject *t_BlockRealMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BlockRealMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BlockRealMatrix_init_(t_BlockRealMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< JArray< jdouble > > a0((jobject) NULL);
            BlockRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[D", &a0))
            {
              INT_CALL(object = BlockRealMatrix(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jint a1;
            BlockRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = BlockRealMatrix(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jint a1;
            JArray< JArray< jdouble > > a2((jobject) NULL);
            jboolean a3;
            BlockRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "II[[DZ", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = BlockRealMatrix(a0, a1, a2, a3));
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

      static PyObject *t_BlockRealMatrix_add(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockRealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", BlockRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_BlockRealMatrix_addToEntry(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_BlockRealMatrix_copy(t_BlockRealMatrix *self, PyObject *args)
      {
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_BlockRealMatrix_createBlocksLayout(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::BlockRealMatrix::createBlocksLayout(a0, a1));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError(type, "createBlocksLayout", args);
        return NULL;
      }

      static PyObject *t_BlockRealMatrix_createMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getColumn(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumn(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getColumn", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getColumnDimension(t_BlockRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getColumnMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getColumnMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getColumnVector(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnVector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getColumnVector", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getData(t_BlockRealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getData", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getEntry(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getFrobeniusNorm(t_BlockRealMatrix *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getFrobeniusNorm());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getFrobeniusNorm", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getNorm1(t_BlockRealMatrix *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getNorm1());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getNorm1", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getNormInfty(t_BlockRealMatrix *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getNormInfty());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getNormInfty", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getRow(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getRow", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getRowDimension(t_BlockRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getRowMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getRowMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getRowVector(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowVector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getRowVector", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getSubMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getSubMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_multiply(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockRealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", BlockRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_BlockRealMatrix_multiplyEntry(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_BlockRealMatrix_multiplyTransposed(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockRealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", BlockRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_BlockRealMatrix_operate(t_BlockRealMatrix *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "operate", args, 2);
      }

      static PyObject *t_BlockRealMatrix_preMultiply(t_BlockRealMatrix *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          OBJ_CALL(result = self->object.preMultiply(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "preMultiply", args, 2);
      }

      static PyObject *t_BlockRealMatrix_scalarAdd(t_BlockRealMatrix *self, PyObject *args)
      {
        jdouble a0;
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "scalarAdd", args, 2);
      }

      static PyObject *t_BlockRealMatrix_scalarMultiply(t_BlockRealMatrix *self, PyObject *args)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "scalarMultiply", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setColumn(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setColumn(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setColumn", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setColumnMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setColumnMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setColumnVector(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setColumnVector(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setColumnVector", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setEntry(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setRow(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setRow", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setRowMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            BlockRealMatrix a1((jobject) NULL);

            if (!parseArgs(args, "Ik", BlockRealMatrix::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setRowMatrix(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;
            ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setRowMatrix(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setRowMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setRowVector(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setRowVector(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setRowVector", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setSubMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[DII", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setSubMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_subtract(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockRealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", BlockRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_BlockRealMatrix_toBlocksLayout(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "[[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::BlockRealMatrix::toBlocksLayout(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError(type, "toBlocksLayout", arg);
        return NULL;
      }

      static PyObject *t_BlockRealMatrix_transpose(t_BlockRealMatrix *self, PyObject *args)
      {
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.transpose());
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "transpose", args, 2);
      }

      static PyObject *t_BlockRealMatrix_transposeMultiply(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockRealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", BlockRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_BlockRealMatrix_walkInOptimizedOrder(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "walkInOptimizedOrder", args, 2);
      }

      static PyObject *t_BlockRealMatrix_walkInRowOrder(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "walkInRowOrder", args, 2);
      }

      static PyObject *t_BlockRealMatrix_get__columnDimension(t_BlockRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BlockRealMatrix_get__data(t_BlockRealMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_BlockRealMatrix_get__frobeniusNorm(t_BlockRealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFrobeniusNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BlockRealMatrix_get__norm1(t_BlockRealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm1());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BlockRealMatrix_get__normInfty(t_BlockRealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormInfty());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BlockRealMatrix_get__rowDimension(t_BlockRealMatrix *self, void *data)
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
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {

          ::java::lang::Class *FileFormat::class$ = NULL;
          jmethodID *FileFormat::mids$ = NULL;
          bool FileFormat::live$ = false;
          FileFormat *FileFormat::KVN = NULL;
          FileFormat *FileFormat::XML = NULL;

          jclass FileFormat::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/FileFormat");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_aef4f28716e48353] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/utils/FileFormat;");
              mids$[mid_values_d6b3a969756b54e5] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/utils/FileFormat;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              KVN = new FileFormat(env->getStaticObjectField(cls, "KVN", "Lorg/orekit/files/ccsds/utils/FileFormat;"));
              XML = new FileFormat(env->getStaticObjectField(cls, "XML", "Lorg/orekit/files/ccsds/utils/FileFormat;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FileFormat FileFormat::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FileFormat(env->callStaticObjectMethod(cls, mids$[mid_valueOf_aef4f28716e48353], a0.this$));
          }

          JArray< FileFormat > FileFormat::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< FileFormat >(env->callStaticObjectMethod(cls, mids$[mid_values_d6b3a969756b54e5]));
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
          static PyObject *t_FileFormat_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FileFormat_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FileFormat_of_(t_FileFormat *self, PyObject *args);
          static PyObject *t_FileFormat_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_FileFormat_values(PyTypeObject *type);
          static PyObject *t_FileFormat_get__parameters_(t_FileFormat *self, void *data);
          static PyGetSetDef t_FileFormat__fields_[] = {
            DECLARE_GET_FIELD(t_FileFormat, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FileFormat__methods_[] = {
            DECLARE_METHOD(t_FileFormat, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FileFormat, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FileFormat, of_, METH_VARARGS),
            DECLARE_METHOD(t_FileFormat, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FileFormat, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FileFormat)[] = {
            { Py_tp_methods, t_FileFormat__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FileFormat__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FileFormat)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(FileFormat, t_FileFormat, FileFormat);
          PyObject *t_FileFormat::wrap_Object(const FileFormat& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FileFormat::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FileFormat *self = (t_FileFormat *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FileFormat::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FileFormat::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FileFormat *self = (t_FileFormat *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FileFormat::install(PyObject *module)
          {
            installType(&PY_TYPE(FileFormat), &PY_TYPE_DEF(FileFormat), module, "FileFormat", 0);
          }

          void t_FileFormat::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FileFormat), "class_", make_descriptor(FileFormat::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FileFormat), "wrapfn_", make_descriptor(t_FileFormat::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FileFormat), "boxfn_", make_descriptor(boxObject));
            env->getClass(FileFormat::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(FileFormat), "KVN", make_descriptor(t_FileFormat::wrap_Object(*FileFormat::KVN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FileFormat), "XML", make_descriptor(t_FileFormat::wrap_Object(*FileFormat::XML)));
          }

          static PyObject *t_FileFormat_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FileFormat::initializeClass, 1)))
              return NULL;
            return t_FileFormat::wrap_Object(FileFormat(((t_FileFormat *) arg)->object.this$));
          }
          static PyObject *t_FileFormat_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FileFormat::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FileFormat_of_(t_FileFormat *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FileFormat_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            FileFormat result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::utils::FileFormat::valueOf(a0));
              return t_FileFormat::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_FileFormat_values(PyTypeObject *type)
          {
            JArray< FileFormat > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::utils::FileFormat::values());
            return JArray<jobject>(result.this$).wrap(t_FileFormat::wrap_jobject);
          }
          static PyObject *t_FileFormat_get__parameters_(t_FileFormat *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/TokenType.h"
#include "org/orekit/files/ccsds/utils/lexical/TokenType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *TokenType::class$ = NULL;
            jmethodID *TokenType::mids$ = NULL;
            bool TokenType::live$ = false;
            TokenType *TokenType::ENTRY = NULL;
            TokenType *TokenType::RAW_LINE = NULL;
            TokenType *TokenType::START = NULL;
            TokenType *TokenType::STOP = NULL;

            jclass TokenType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/TokenType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_957f1877d7a484d6] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/utils/lexical/TokenType;");
                mids$[mid_values_c2f903a0341252d1] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/utils/lexical/TokenType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ENTRY = new TokenType(env->getStaticObjectField(cls, "ENTRY", "Lorg/orekit/files/ccsds/utils/lexical/TokenType;"));
                RAW_LINE = new TokenType(env->getStaticObjectField(cls, "RAW_LINE", "Lorg/orekit/files/ccsds/utils/lexical/TokenType;"));
                START = new TokenType(env->getStaticObjectField(cls, "START", "Lorg/orekit/files/ccsds/utils/lexical/TokenType;"));
                STOP = new TokenType(env->getStaticObjectField(cls, "STOP", "Lorg/orekit/files/ccsds/utils/lexical/TokenType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TokenType TokenType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return TokenType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_957f1877d7a484d6], a0.this$));
            }

            JArray< TokenType > TokenType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< TokenType >(env->callStaticObjectMethod(cls, mids$[mid_values_c2f903a0341252d1]));
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
            static PyObject *t_TokenType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TokenType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TokenType_of_(t_TokenType *self, PyObject *args);
            static PyObject *t_TokenType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_TokenType_values(PyTypeObject *type);
            static PyObject *t_TokenType_get__parameters_(t_TokenType *self, void *data);
            static PyGetSetDef t_TokenType__fields_[] = {
              DECLARE_GET_FIELD(t_TokenType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TokenType__methods_[] = {
              DECLARE_METHOD(t_TokenType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TokenType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TokenType, of_, METH_VARARGS),
              DECLARE_METHOD(t_TokenType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_TokenType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TokenType)[] = {
              { Py_tp_methods, t_TokenType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TokenType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TokenType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(TokenType, t_TokenType, TokenType);
            PyObject *t_TokenType::wrap_Object(const TokenType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TokenType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TokenType *self = (t_TokenType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_TokenType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TokenType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TokenType *self = (t_TokenType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_TokenType::install(PyObject *module)
            {
              installType(&PY_TYPE(TokenType), &PY_TYPE_DEF(TokenType), module, "TokenType", 0);
            }

            void t_TokenType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "class_", make_descriptor(TokenType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "wrapfn_", make_descriptor(t_TokenType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "boxfn_", make_descriptor(boxObject));
              env->getClass(TokenType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "ENTRY", make_descriptor(t_TokenType::wrap_Object(*TokenType::ENTRY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "RAW_LINE", make_descriptor(t_TokenType::wrap_Object(*TokenType::RAW_LINE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "START", make_descriptor(t_TokenType::wrap_Object(*TokenType::START)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "STOP", make_descriptor(t_TokenType::wrap_Object(*TokenType::STOP)));
            }

            static PyObject *t_TokenType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TokenType::initializeClass, 1)))
                return NULL;
              return t_TokenType::wrap_Object(TokenType(((t_TokenType *) arg)->object.this$));
            }
            static PyObject *t_TokenType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TokenType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TokenType_of_(t_TokenType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TokenType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              TokenType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::utils::lexical::TokenType::valueOf(a0));
                return t_TokenType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_TokenType_values(PyTypeObject *type)
            {
              JArray< TokenType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::utils::lexical::TokenType::values());
              return JArray<jobject>(result.this$).wrap(t_TokenType::wrap_jobject);
            }
            static PyObject *t_TokenType_get__parameters_(t_TokenType *self, void *data)
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
#include "org/orekit/models/earth/displacement/OceanLoadingCoefficients.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/displacement/Tide.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *OceanLoadingCoefficients::class$ = NULL;
          jmethodID *OceanLoadingCoefficients::mids$ = NULL;
          bool OceanLoadingCoefficients::live$ = false;

          jclass OceanLoadingCoefficients::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/OceanLoadingCoefficients");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ce7c5e10fb653720] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/bodies/GeodeticPoint;[[Lorg/orekit/models/earth/displacement/Tide;[[D[[D[[D[[D[[D[[D)V");
              mids$[mid_getNbSpecies_d6ab429752e7c267] = env->getMethodID(cls, "getNbSpecies", "()I");
              mids$[mid_getNbTides_d938fc64e8c6df2d] = env->getMethodID(cls, "getNbTides", "(I)I");
              mids$[mid_getSiteLocation_bdca252cae79438c] = env->getMethodID(cls, "getSiteLocation", "()Lorg/orekit/bodies/GeodeticPoint;");
              mids$[mid_getSiteName_d2c8eb4129821f0e] = env->getMethodID(cls, "getSiteName", "()Ljava/lang/String;");
              mids$[mid_getSouthAmplitude_6d920aab27f0a3d2] = env->getMethodID(cls, "getSouthAmplitude", "(II)D");
              mids$[mid_getSouthPhase_6d920aab27f0a3d2] = env->getMethodID(cls, "getSouthPhase", "(II)D");
              mids$[mid_getTide_e8d164c6a78ece0c] = env->getMethodID(cls, "getTide", "(II)Lorg/orekit/models/earth/displacement/Tide;");
              mids$[mid_getWestAmplitude_6d920aab27f0a3d2] = env->getMethodID(cls, "getWestAmplitude", "(II)D");
              mids$[mid_getWestPhase_6d920aab27f0a3d2] = env->getMethodID(cls, "getWestPhase", "(II)D");
              mids$[mid_getZenithAmplitude_6d920aab27f0a3d2] = env->getMethodID(cls, "getZenithAmplitude", "(II)D");
              mids$[mid_getZenithPhase_6d920aab27f0a3d2] = env->getMethodID(cls, "getZenithPhase", "(II)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OceanLoadingCoefficients::OceanLoadingCoefficients(const ::java::lang::String & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< JArray< ::org::orekit::models::earth::displacement::Tide > > & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4, const JArray< JArray< jdouble > > & a5, const JArray< JArray< jdouble > > & a6, const JArray< JArray< jdouble > > & a7, const JArray< JArray< jdouble > > & a8) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ce7c5e10fb653720, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

          jint OceanLoadingCoefficients::getNbSpecies() const
          {
            return env->callIntMethod(this$, mids$[mid_getNbSpecies_d6ab429752e7c267]);
          }

          jint OceanLoadingCoefficients::getNbTides(jint a0) const
          {
            return env->callIntMethod(this$, mids$[mid_getNbTides_d938fc64e8c6df2d], a0);
          }

          ::org::orekit::bodies::GeodeticPoint OceanLoadingCoefficients::getSiteLocation() const
          {
            return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getSiteLocation_bdca252cae79438c]));
          }

          ::java::lang::String OceanLoadingCoefficients::getSiteName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSiteName_d2c8eb4129821f0e]));
          }

          jdouble OceanLoadingCoefficients::getSouthAmplitude(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSouthAmplitude_6d920aab27f0a3d2], a0, a1);
          }

          jdouble OceanLoadingCoefficients::getSouthPhase(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSouthPhase_6d920aab27f0a3d2], a0, a1);
          }

          ::org::orekit::models::earth::displacement::Tide OceanLoadingCoefficients::getTide(jint a0, jint a1) const
          {
            return ::org::orekit::models::earth::displacement::Tide(env->callObjectMethod(this$, mids$[mid_getTide_e8d164c6a78ece0c], a0, a1));
          }

          jdouble OceanLoadingCoefficients::getWestAmplitude(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWestAmplitude_6d920aab27f0a3d2], a0, a1);
          }

          jdouble OceanLoadingCoefficients::getWestPhase(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWestPhase_6d920aab27f0a3d2], a0, a1);
          }

          jdouble OceanLoadingCoefficients::getZenithAmplitude(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getZenithAmplitude_6d920aab27f0a3d2], a0, a1);
          }

          jdouble OceanLoadingCoefficients::getZenithPhase(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getZenithPhase_6d920aab27f0a3d2], a0, a1);
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
        namespace displacement {
          static PyObject *t_OceanLoadingCoefficients_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanLoadingCoefficients_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OceanLoadingCoefficients_init_(t_OceanLoadingCoefficients *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OceanLoadingCoefficients_getNbSpecies(t_OceanLoadingCoefficients *self);
          static PyObject *t_OceanLoadingCoefficients_getNbTides(t_OceanLoadingCoefficients *self, PyObject *arg);
          static PyObject *t_OceanLoadingCoefficients_getSiteLocation(t_OceanLoadingCoefficients *self);
          static PyObject *t_OceanLoadingCoefficients_getSiteName(t_OceanLoadingCoefficients *self);
          static PyObject *t_OceanLoadingCoefficients_getSouthAmplitude(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getSouthPhase(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getTide(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getWestAmplitude(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getWestPhase(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getZenithAmplitude(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getZenithPhase(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_get__nbSpecies(t_OceanLoadingCoefficients *self, void *data);
          static PyObject *t_OceanLoadingCoefficients_get__siteLocation(t_OceanLoadingCoefficients *self, void *data);
          static PyObject *t_OceanLoadingCoefficients_get__siteName(t_OceanLoadingCoefficients *self, void *data);
          static PyGetSetDef t_OceanLoadingCoefficients__fields_[] = {
            DECLARE_GET_FIELD(t_OceanLoadingCoefficients, nbSpecies),
            DECLARE_GET_FIELD(t_OceanLoadingCoefficients, siteLocation),
            DECLARE_GET_FIELD(t_OceanLoadingCoefficients, siteName),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OceanLoadingCoefficients__methods_[] = {
            DECLARE_METHOD(t_OceanLoadingCoefficients, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getNbSpecies, METH_NOARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getNbTides, METH_O),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getSiteLocation, METH_NOARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getSiteName, METH_NOARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getSouthAmplitude, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getSouthPhase, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getTide, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getWestAmplitude, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getWestPhase, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getZenithAmplitude, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getZenithPhase, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanLoadingCoefficients)[] = {
            { Py_tp_methods, t_OceanLoadingCoefficients__methods_ },
            { Py_tp_init, (void *) t_OceanLoadingCoefficients_init_ },
            { Py_tp_getset, t_OceanLoadingCoefficients__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanLoadingCoefficients)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OceanLoadingCoefficients, t_OceanLoadingCoefficients, OceanLoadingCoefficients);

          void t_OceanLoadingCoefficients::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanLoadingCoefficients), &PY_TYPE_DEF(OceanLoadingCoefficients), module, "OceanLoadingCoefficients", 0);
          }

          void t_OceanLoadingCoefficients::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficients), "class_", make_descriptor(OceanLoadingCoefficients::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficients), "wrapfn_", make_descriptor(t_OceanLoadingCoefficients::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficients), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OceanLoadingCoefficients_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanLoadingCoefficients::initializeClass, 1)))
              return NULL;
            return t_OceanLoadingCoefficients::wrap_Object(OceanLoadingCoefficients(((t_OceanLoadingCoefficients *) arg)->object.this$));
          }
          static PyObject *t_OceanLoadingCoefficients_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanLoadingCoefficients::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OceanLoadingCoefficients_init_(t_OceanLoadingCoefficients *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            JArray< JArray< ::org::orekit::models::earth::displacement::Tide > > a2((jobject) NULL);
            JArray< JArray< jdouble > > a3((jobject) NULL);
            JArray< JArray< jdouble > > a4((jobject) NULL);
            JArray< JArray< jdouble > > a5((jobject) NULL);
            JArray< JArray< jdouble > > a6((jobject) NULL);
            JArray< JArray< jdouble > > a7((jobject) NULL);
            JArray< JArray< jdouble > > a8((jobject) NULL);
            OceanLoadingCoefficients object((jobject) NULL);

            if (!parseArgs(args, "sk[[k[[D[[D[[D[[D[[D[[D", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::models::earth::displacement::Tide::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
            {
              INT_CALL(object = OceanLoadingCoefficients(a0, a1, a2, a3, a4, a5, a6, a7, a8));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OceanLoadingCoefficients_getNbSpecies(t_OceanLoadingCoefficients *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNbSpecies());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanLoadingCoefficients_getNbTides(t_OceanLoadingCoefficients *self, PyObject *arg)
          {
            jint a0;
            jint result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getNbTides(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getNbTides", arg);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getSiteLocation(t_OceanLoadingCoefficients *self)
          {
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.getSiteLocation());
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
          }

          static PyObject *t_OceanLoadingCoefficients_getSiteName(t_OceanLoadingCoefficients *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSiteName());
            return j2p(result);
          }

          static PyObject *t_OceanLoadingCoefficients_getSouthAmplitude(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSouthAmplitude(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getSouthAmplitude", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getSouthPhase(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSouthPhase(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getSouthPhase", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getTide(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::models::earth::displacement::Tide result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getTide(a0, a1));
              return ::org::orekit::models::earth::displacement::t_Tide::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getTide", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getWestAmplitude(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getWestAmplitude(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWestAmplitude", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getWestPhase(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getWestPhase(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWestPhase", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getZenithAmplitude(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getZenithAmplitude(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getZenithAmplitude", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getZenithPhase(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getZenithPhase(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getZenithPhase", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_get__nbSpecies(t_OceanLoadingCoefficients *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNbSpecies());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_OceanLoadingCoefficients_get__siteLocation(t_OceanLoadingCoefficients *self, void *data)
          {
            ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
            OBJ_CALL(value = self->object.getSiteLocation());
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
          }

          static PyObject *t_OceanLoadingCoefficients_get__siteName(t_OceanLoadingCoefficients *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSiteName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/DataStreamRecord.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "org/orekit/gnss/metric/ntrip/Authentication.h"
#include "org/orekit/gnss/metric/ntrip/DataFormat.h"
#include "org/orekit/gnss/metric/ntrip/StreamedMessage.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/ntrip/NavigationSystem.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/metric/ntrip/CarrierPhase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *DataStreamRecord::class$ = NULL;
          jmethodID *DataStreamRecord::mids$ = NULL;
          bool DataStreamRecord::live$ = false;

          jclass DataStreamRecord::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/DataStreamRecord");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_areFeesRequired_eee3de00fe971136] = env->getMethodID(cls, "areFeesRequired", "()Z");
              mids$[mid_getAuthentication_6de0606d40023783] = env->getMethodID(cls, "getAuthentication", "()Lorg/orekit/gnss/metric/ntrip/Authentication;");
              mids$[mid_getBitRate_d6ab429752e7c267] = env->getMethodID(cls, "getBitRate", "()I");
              mids$[mid_getCarrierPhase_ab5497447f493378] = env->getMethodID(cls, "getCarrierPhase", "()Lorg/orekit/gnss/metric/ntrip/CarrierPhase;");
              mids$[mid_getCompressionEncryption_d2c8eb4129821f0e] = env->getMethodID(cls, "getCompressionEncryption", "()Ljava/lang/String;");
              mids$[mid_getCountry_d2c8eb4129821f0e] = env->getMethodID(cls, "getCountry", "()Ljava/lang/String;");
              mids$[mid_getFormat_6b80d20facb4c62c] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/gnss/metric/ntrip/DataFormat;");
              mids$[mid_getFormatDetails_d751c1a57012b438] = env->getMethodID(cls, "getFormatDetails", "()Ljava/util/List;");
              mids$[mid_getGenerator_d2c8eb4129821f0e] = env->getMethodID(cls, "getGenerator", "()Ljava/lang/String;");
              mids$[mid_getLatitude_9981f74b2d109da6] = env->getMethodID(cls, "getLatitude", "()D");
              mids$[mid_getLongitude_9981f74b2d109da6] = env->getMethodID(cls, "getLongitude", "()D");
              mids$[mid_getMountPoint_d2c8eb4129821f0e] = env->getMethodID(cls, "getMountPoint", "()Ljava/lang/String;");
              mids$[mid_getNavigationSystems_d751c1a57012b438] = env->getMethodID(cls, "getNavigationSystems", "()Ljava/util/List;");
              mids$[mid_getNetwork_d2c8eb4129821f0e] = env->getMethodID(cls, "getNetwork", "()Ljava/lang/String;");
              mids$[mid_getRecordType_6b1d5e4fef5a106c] = env->getMethodID(cls, "getRecordType", "()Lorg/orekit/gnss/metric/ntrip/RecordType;");
              mids$[mid_getSourceIdentifier_d2c8eb4129821f0e] = env->getMethodID(cls, "getSourceIdentifier", "()Ljava/lang/String;");
              mids$[mid_isNMEARequired_eee3de00fe971136] = env->getMethodID(cls, "isNMEARequired", "()Z");
              mids$[mid_isNetworked_eee3de00fe971136] = env->getMethodID(cls, "isNetworked", "()Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DataStreamRecord::DataStreamRecord(const ::java::lang::String & a0) : ::org::orekit::gnss::metric::ntrip::Record(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

          jboolean DataStreamRecord::areFeesRequired() const
          {
            return env->callBooleanMethod(this$, mids$[mid_areFeesRequired_eee3de00fe971136]);
          }

          ::org::orekit::gnss::metric::ntrip::Authentication DataStreamRecord::getAuthentication() const
          {
            return ::org::orekit::gnss::metric::ntrip::Authentication(env->callObjectMethod(this$, mids$[mid_getAuthentication_6de0606d40023783]));
          }

          jint DataStreamRecord::getBitRate() const
          {
            return env->callIntMethod(this$, mids$[mid_getBitRate_d6ab429752e7c267]);
          }

          ::org::orekit::gnss::metric::ntrip::CarrierPhase DataStreamRecord::getCarrierPhase() const
          {
            return ::org::orekit::gnss::metric::ntrip::CarrierPhase(env->callObjectMethod(this$, mids$[mid_getCarrierPhase_ab5497447f493378]));
          }

          ::java::lang::String DataStreamRecord::getCompressionEncryption() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCompressionEncryption_d2c8eb4129821f0e]));
          }

          ::java::lang::String DataStreamRecord::getCountry() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCountry_d2c8eb4129821f0e]));
          }

          ::org::orekit::gnss::metric::ntrip::DataFormat DataStreamRecord::getFormat() const
          {
            return ::org::orekit::gnss::metric::ntrip::DataFormat(env->callObjectMethod(this$, mids$[mid_getFormat_6b80d20facb4c62c]));
          }

          ::java::util::List DataStreamRecord::getFormatDetails() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFormatDetails_d751c1a57012b438]));
          }

          ::java::lang::String DataStreamRecord::getGenerator() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getGenerator_d2c8eb4129821f0e]));
          }

          jdouble DataStreamRecord::getLatitude() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLatitude_9981f74b2d109da6]);
          }

          jdouble DataStreamRecord::getLongitude() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLongitude_9981f74b2d109da6]);
          }

          ::java::lang::String DataStreamRecord::getMountPoint() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMountPoint_d2c8eb4129821f0e]));
          }

          ::java::util::List DataStreamRecord::getNavigationSystems() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNavigationSystems_d751c1a57012b438]));
          }

          ::java::lang::String DataStreamRecord::getNetwork() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNetwork_d2c8eb4129821f0e]));
          }

          ::org::orekit::gnss::metric::ntrip::RecordType DataStreamRecord::getRecordType() const
          {
            return ::org::orekit::gnss::metric::ntrip::RecordType(env->callObjectMethod(this$, mids$[mid_getRecordType_6b1d5e4fef5a106c]));
          }

          ::java::lang::String DataStreamRecord::getSourceIdentifier() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceIdentifier_d2c8eb4129821f0e]));
          }

          jboolean DataStreamRecord::isNMEARequired() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNMEARequired_eee3de00fe971136]);
          }

          jboolean DataStreamRecord::isNetworked() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNetworked_eee3de00fe971136]);
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
          static PyObject *t_DataStreamRecord_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataStreamRecord_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DataStreamRecord_init_(t_DataStreamRecord *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DataStreamRecord_areFeesRequired(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getAuthentication(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getBitRate(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getCarrierPhase(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getCompressionEncryption(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getCountry(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getFormat(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getFormatDetails(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getGenerator(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getLatitude(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getLongitude(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getMountPoint(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getNavigationSystems(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getNetwork(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getRecordType(t_DataStreamRecord *self, PyObject *args);
          static PyObject *t_DataStreamRecord_getSourceIdentifier(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_isNMEARequired(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_isNetworked(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_get__authentication(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__bitRate(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__carrierPhase(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__compressionEncryption(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__country(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__format(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__formatDetails(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__generator(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__latitude(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__longitude(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__mountPoint(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__nMEARequired(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__navigationSystems(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__network(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__networked(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__recordType(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__sourceIdentifier(t_DataStreamRecord *self, void *data);
          static PyGetSetDef t_DataStreamRecord__fields_[] = {
            DECLARE_GET_FIELD(t_DataStreamRecord, authentication),
            DECLARE_GET_FIELD(t_DataStreamRecord, bitRate),
            DECLARE_GET_FIELD(t_DataStreamRecord, carrierPhase),
            DECLARE_GET_FIELD(t_DataStreamRecord, compressionEncryption),
            DECLARE_GET_FIELD(t_DataStreamRecord, country),
            DECLARE_GET_FIELD(t_DataStreamRecord, format),
            DECLARE_GET_FIELD(t_DataStreamRecord, formatDetails),
            DECLARE_GET_FIELD(t_DataStreamRecord, generator),
            DECLARE_GET_FIELD(t_DataStreamRecord, latitude),
            DECLARE_GET_FIELD(t_DataStreamRecord, longitude),
            DECLARE_GET_FIELD(t_DataStreamRecord, mountPoint),
            DECLARE_GET_FIELD(t_DataStreamRecord, nMEARequired),
            DECLARE_GET_FIELD(t_DataStreamRecord, navigationSystems),
            DECLARE_GET_FIELD(t_DataStreamRecord, network),
            DECLARE_GET_FIELD(t_DataStreamRecord, networked),
            DECLARE_GET_FIELD(t_DataStreamRecord, recordType),
            DECLARE_GET_FIELD(t_DataStreamRecord, sourceIdentifier),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DataStreamRecord__methods_[] = {
            DECLARE_METHOD(t_DataStreamRecord, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataStreamRecord, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataStreamRecord, areFeesRequired, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getAuthentication, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getBitRate, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getCarrierPhase, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getCompressionEncryption, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getCountry, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getFormat, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getFormatDetails, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getGenerator, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getLatitude, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getLongitude, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getMountPoint, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getNavigationSystems, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getNetwork, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getRecordType, METH_VARARGS),
            DECLARE_METHOD(t_DataStreamRecord, getSourceIdentifier, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, isNMEARequired, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, isNetworked, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DataStreamRecord)[] = {
            { Py_tp_methods, t_DataStreamRecord__methods_ },
            { Py_tp_init, (void *) t_DataStreamRecord_init_ },
            { Py_tp_getset, t_DataStreamRecord__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DataStreamRecord)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::ntrip::Record),
            NULL
          };

          DEFINE_TYPE(DataStreamRecord, t_DataStreamRecord, DataStreamRecord);

          void t_DataStreamRecord::install(PyObject *module)
          {
            installType(&PY_TYPE(DataStreamRecord), &PY_TYPE_DEF(DataStreamRecord), module, "DataStreamRecord", 0);
          }

          void t_DataStreamRecord::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataStreamRecord), "class_", make_descriptor(DataStreamRecord::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataStreamRecord), "wrapfn_", make_descriptor(t_DataStreamRecord::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataStreamRecord), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DataStreamRecord_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DataStreamRecord::initializeClass, 1)))
              return NULL;
            return t_DataStreamRecord::wrap_Object(DataStreamRecord(((t_DataStreamRecord *) arg)->object.this$));
          }
          static PyObject *t_DataStreamRecord_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DataStreamRecord::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DataStreamRecord_init_(t_DataStreamRecord *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            DataStreamRecord object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = DataStreamRecord(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DataStreamRecord_areFeesRequired(t_DataStreamRecord *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.areFeesRequired());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_DataStreamRecord_getAuthentication(t_DataStreamRecord *self)
          {
            ::org::orekit::gnss::metric::ntrip::Authentication result((jobject) NULL);
            OBJ_CALL(result = self->object.getAuthentication());
            return ::org::orekit::gnss::metric::ntrip::t_Authentication::wrap_Object(result);
          }

          static PyObject *t_DataStreamRecord_getBitRate(t_DataStreamRecord *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getBitRate());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_DataStreamRecord_getCarrierPhase(t_DataStreamRecord *self)
          {
            ::org::orekit::gnss::metric::ntrip::CarrierPhase result((jobject) NULL);
            OBJ_CALL(result = self->object.getCarrierPhase());
            return ::org::orekit::gnss::metric::ntrip::t_CarrierPhase::wrap_Object(result);
          }

          static PyObject *t_DataStreamRecord_getCompressionEncryption(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCompressionEncryption());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_getCountry(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCountry());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_getFormat(t_DataStreamRecord *self)
          {
            ::org::orekit::gnss::metric::ntrip::DataFormat result((jobject) NULL);
            OBJ_CALL(result = self->object.getFormat());
            return ::org::orekit::gnss::metric::ntrip::t_DataFormat::wrap_Object(result);
          }

          static PyObject *t_DataStreamRecord_getFormatDetails(t_DataStreamRecord *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getFormatDetails());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::metric::ntrip::PY_TYPE(StreamedMessage));
          }

          static PyObject *t_DataStreamRecord_getGenerator(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getGenerator());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_getLatitude(t_DataStreamRecord *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLatitude());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_DataStreamRecord_getLongitude(t_DataStreamRecord *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLongitude());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_DataStreamRecord_getMountPoint(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMountPoint());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_getNavigationSystems(t_DataStreamRecord *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getNavigationSystems());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::metric::ntrip::PY_TYPE(NavigationSystem));
          }

          static PyObject *t_DataStreamRecord_getNetwork(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getNetwork());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_getRecordType(t_DataStreamRecord *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getRecordType());
              return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(result);
            }

            return callSuper(PY_TYPE(DataStreamRecord), (PyObject *) self, "getRecordType", args, 2);
          }

          static PyObject *t_DataStreamRecord_getSourceIdentifier(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSourceIdentifier());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_isNMEARequired(t_DataStreamRecord *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNMEARequired());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_DataStreamRecord_isNetworked(t_DataStreamRecord *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNetworked());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_DataStreamRecord_get__authentication(t_DataStreamRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::Authentication value((jobject) NULL);
            OBJ_CALL(value = self->object.getAuthentication());
            return ::org::orekit::gnss::metric::ntrip::t_Authentication::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__bitRate(t_DataStreamRecord *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getBitRate());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_DataStreamRecord_get__carrierPhase(t_DataStreamRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::CarrierPhase value((jobject) NULL);
            OBJ_CALL(value = self->object.getCarrierPhase());
            return ::org::orekit::gnss::metric::ntrip::t_CarrierPhase::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__compressionEncryption(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCompressionEncryption());
            return j2p(value);
          }

          static PyObject *t_DataStreamRecord_get__country(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCountry());
            return j2p(value);
          }

          static PyObject *t_DataStreamRecord_get__format(t_DataStreamRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::DataFormat value((jobject) NULL);
            OBJ_CALL(value = self->object.getFormat());
            return ::org::orekit::gnss::metric::ntrip::t_DataFormat::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__formatDetails(t_DataStreamRecord *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getFormatDetails());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__generator(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getGenerator());
            return j2p(value);
          }

          static PyObject *t_DataStreamRecord_get__latitude(t_DataStreamRecord *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLatitude());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_DataStreamRecord_get__longitude(t_DataStreamRecord *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLongitude());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_DataStreamRecord_get__mountPoint(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMountPoint());
            return j2p(value);
          }

          static PyObject *t_DataStreamRecord_get__nMEARequired(t_DataStreamRecord *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNMEARequired());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_DataStreamRecord_get__navigationSystems(t_DataStreamRecord *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getNavigationSystems());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__network(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getNetwork());
            return j2p(value);
          }

          static PyObject *t_DataStreamRecord_get__networked(t_DataStreamRecord *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNetworked());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_DataStreamRecord_get__recordType(t_DataStreamRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType value((jobject) NULL);
            OBJ_CALL(value = self->object.getRecordType());
            return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__sourceIdentifier(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSourceIdentifier());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3Header.h"
#include "org/orekit/files/sp3/DataUsed.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/files/sp3/SP3FileType.h"
#include "java/lang/String.h"
#include "org/orekit/files/sp3/SP3OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Header::class$ = NULL;
        jmethodID *SP3Header::mids$ = NULL;
        bool SP3Header::live$ = false;
        ::java::lang::String *SP3Header::SP3_FRAME_CENTER_STRING = NULL;

        jclass SP3Header::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Header");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addComment_105e1eadb709d9ac] = env->getMethodID(cls, "addComment", "(Ljava/lang/String;)V");
            mids$[mid_addSatId_105e1eadb709d9ac] = env->getMethodID(cls, "addSatId", "(Ljava/lang/String;)V");
            mids$[mid_getAccuracy_f2fc085ab82846a3] = env->getMethodID(cls, "getAccuracy", "(Ljava/lang/String;)D");
            mids$[mid_getAgency_d2c8eb4129821f0e] = env->getMethodID(cls, "getAgency", "()Ljava/lang/String;");
            mids$[mid_getClockBase_9981f74b2d109da6] = env->getMethodID(cls, "getClockBase", "()D");
            mids$[mid_getComments_d751c1a57012b438] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
            mids$[mid_getCoordinateSystem_d2c8eb4129821f0e] = env->getMethodID(cls, "getCoordinateSystem", "()Ljava/lang/String;");
            mids$[mid_getDataUsed_d751c1a57012b438] = env->getMethodID(cls, "getDataUsed", "()Ljava/util/List;");
            mids$[mid_getDayFraction_9981f74b2d109da6] = env->getMethodID(cls, "getDayFraction", "()D");
            mids$[mid_getEpoch_80e11148db499dda] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getEpochInterval_9981f74b2d109da6] = env->getMethodID(cls, "getEpochInterval", "()D");
            mids$[mid_getFilter_b9dfc27d8c56b5de] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getGpsWeek_d6ab429752e7c267] = env->getMethodID(cls, "getGpsWeek", "()I");
            mids$[mid_getModifiedJulianDay_d6ab429752e7c267] = env->getMethodID(cls, "getModifiedJulianDay", "()I");
            mids$[mid_getNumberOfEpochs_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfEpochs", "()I");
            mids$[mid_getOrbitType_e13a2b7345fcaf41] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/files/sp3/SP3OrbitType;");
            mids$[mid_getOrbitTypeKey_d2c8eb4129821f0e] = env->getMethodID(cls, "getOrbitTypeKey", "()Ljava/lang/String;");
            mids$[mid_getPosVelBase_9981f74b2d109da6] = env->getMethodID(cls, "getPosVelBase", "()D");
            mids$[mid_getSatIds_d751c1a57012b438] = env->getMethodID(cls, "getSatIds", "()Ljava/util/List;");
            mids$[mid_getSecondsOfWeek_9981f74b2d109da6] = env->getMethodID(cls, "getSecondsOfWeek", "()D");
            mids$[mid_getTimeSystem_6110a08bedf3a63d] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/gnss/TimeSystem;");
            mids$[mid_getType_a2d6e1be56280ac0] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/sp3/SP3FileType;");
            mids$[mid_getVersion_153df32fe8b51cb6] = env->getMethodID(cls, "getVersion", "()C");
            mids$[mid_setAccuracy_4320462275d66e78] = env->getMethodID(cls, "setAccuracy", "(ID)V");
            mids$[mid_setAgency_105e1eadb709d9ac] = env->getMethodID(cls, "setAgency", "(Ljava/lang/String;)V");
            mids$[mid_setClockBase_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setClockBase", "(D)V");
            mids$[mid_setCoordinateSystem_105e1eadb709d9ac] = env->getMethodID(cls, "setCoordinateSystem", "(Ljava/lang/String;)V");
            mids$[mid_setDataUsed_aa335fea495d60e0] = env->getMethodID(cls, "setDataUsed", "(Ljava/util/List;)V");
            mids$[mid_setDayFraction_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDayFraction", "(D)V");
            mids$[mid_setEpoch_8497861b879c83f7] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setEpochInterval_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setEpochInterval", "(D)V");
            mids$[mid_setFilter_b30f5228e357f0be] = env->getMethodID(cls, "setFilter", "(Lorg/orekit/utils/CartesianDerivativesFilter;)V");
            mids$[mid_setGpsWeek_8fd427ab23829bf5] = env->getMethodID(cls, "setGpsWeek", "(I)V");
            mids$[mid_setModifiedJulianDay_8fd427ab23829bf5] = env->getMethodID(cls, "setModifiedJulianDay", "(I)V");
            mids$[mid_setNumberOfEpochs_8fd427ab23829bf5] = env->getMethodID(cls, "setNumberOfEpochs", "(I)V");
            mids$[mid_setOrbitTypeKey_105e1eadb709d9ac] = env->getMethodID(cls, "setOrbitTypeKey", "(Ljava/lang/String;)V");
            mids$[mid_setPosVelBase_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setPosVelBase", "(D)V");
            mids$[mid_setSecondsOfWeek_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSecondsOfWeek", "(D)V");
            mids$[mid_setTimeSystem_70481f478101edcd] = env->getMethodID(cls, "setTimeSystem", "(Lorg/orekit/gnss/TimeSystem;)V");
            mids$[mid_setType_26e576b6c2fe990c] = env->getMethodID(cls, "setType", "(Lorg/orekit/files/sp3/SP3FileType;)V");
            mids$[mid_setVersion_e8d07df586815a42] = env->getMethodID(cls, "setVersion", "(C)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            SP3_FRAME_CENTER_STRING = new ::java::lang::String(env->getStaticObjectField(cls, "SP3_FRAME_CENTER_STRING", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Header::SP3Header() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void SP3Header::addComment(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addComment_105e1eadb709d9ac], a0.this$);
        }

        void SP3Header::addSatId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addSatId_105e1eadb709d9ac], a0.this$);
        }

        jdouble SP3Header::getAccuracy(const ::java::lang::String & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAccuracy_f2fc085ab82846a3], a0.this$);
        }

        ::java::lang::String SP3Header::getAgency() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAgency_d2c8eb4129821f0e]));
        }

        jdouble SP3Header::getClockBase() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getClockBase_9981f74b2d109da6]);
        }

        ::java::util::List SP3Header::getComments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_d751c1a57012b438]));
        }

        ::java::lang::String SP3Header::getCoordinateSystem() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCoordinateSystem_d2c8eb4129821f0e]));
        }

        ::java::util::List SP3Header::getDataUsed() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDataUsed_d751c1a57012b438]));
        }

        jdouble SP3Header::getDayFraction() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDayFraction_9981f74b2d109da6]);
        }

        ::org::orekit::time::AbsoluteDate SP3Header::getEpoch() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_80e11148db499dda]));
        }

        jdouble SP3Header::getEpochInterval() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEpochInterval_9981f74b2d109da6]);
        }

        ::org::orekit::utils::CartesianDerivativesFilter SP3Header::getFilter() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_b9dfc27d8c56b5de]));
        }

        jint SP3Header::getGpsWeek() const
        {
          return env->callIntMethod(this$, mids$[mid_getGpsWeek_d6ab429752e7c267]);
        }

        jint SP3Header::getModifiedJulianDay() const
        {
          return env->callIntMethod(this$, mids$[mid_getModifiedJulianDay_d6ab429752e7c267]);
        }

        jint SP3Header::getNumberOfEpochs() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfEpochs_d6ab429752e7c267]);
        }

        ::org::orekit::files::sp3::SP3OrbitType SP3Header::getOrbitType() const
        {
          return ::org::orekit::files::sp3::SP3OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_e13a2b7345fcaf41]));
        }

        ::java::lang::String SP3Header::getOrbitTypeKey() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOrbitTypeKey_d2c8eb4129821f0e]));
        }

        jdouble SP3Header::getPosVelBase() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPosVelBase_9981f74b2d109da6]);
        }

        ::java::util::List SP3Header::getSatIds() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatIds_d751c1a57012b438]));
        }

        jdouble SP3Header::getSecondsOfWeek() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSecondsOfWeek_9981f74b2d109da6]);
        }

        ::org::orekit::gnss::TimeSystem SP3Header::getTimeSystem() const
        {
          return ::org::orekit::gnss::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_6110a08bedf3a63d]));
        }

        ::org::orekit::files::sp3::SP3FileType SP3Header::getType() const
        {
          return ::org::orekit::files::sp3::SP3FileType(env->callObjectMethod(this$, mids$[mid_getType_a2d6e1be56280ac0]));
        }

        jchar SP3Header::getVersion() const
        {
          return env->callCharMethod(this$, mids$[mid_getVersion_153df32fe8b51cb6]);
        }

        void SP3Header::setAccuracy(jint a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setAccuracy_4320462275d66e78], a0, a1);
        }

        void SP3Header::setAgency(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAgency_105e1eadb709d9ac], a0.this$);
        }

        void SP3Header::setClockBase(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setClockBase_1ad26e8c8c0cd65b], a0);
        }

        void SP3Header::setCoordinateSystem(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setCoordinateSystem_105e1eadb709d9ac], a0.this$);
        }

        void SP3Header::setDataUsed(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDataUsed_aa335fea495d60e0], a0.this$);
        }

        void SP3Header::setDayFraction(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDayFraction_1ad26e8c8c0cd65b], a0);
        }

        void SP3Header::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEpoch_8497861b879c83f7], a0.this$);
        }

        void SP3Header::setEpochInterval(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEpochInterval_1ad26e8c8c0cd65b], a0);
        }

        void SP3Header::setFilter(const ::org::orekit::utils::CartesianDerivativesFilter & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setFilter_b30f5228e357f0be], a0.this$);
        }

        void SP3Header::setGpsWeek(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setGpsWeek_8fd427ab23829bf5], a0);
        }

        void SP3Header::setModifiedJulianDay(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setModifiedJulianDay_8fd427ab23829bf5], a0);
        }

        void SP3Header::setNumberOfEpochs(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNumberOfEpochs_8fd427ab23829bf5], a0);
        }

        void SP3Header::setOrbitTypeKey(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOrbitTypeKey_105e1eadb709d9ac], a0.this$);
        }

        void SP3Header::setPosVelBase(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPosVelBase_1ad26e8c8c0cd65b], a0);
        }

        void SP3Header::setSecondsOfWeek(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSecondsOfWeek_1ad26e8c8c0cd65b], a0);
        }

        void SP3Header::setTimeSystem(const ::org::orekit::gnss::TimeSystem & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimeSystem_70481f478101edcd], a0.this$);
        }

        void SP3Header::setType(const ::org::orekit::files::sp3::SP3FileType & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setType_26e576b6c2fe990c], a0.this$);
        }

        void SP3Header::setVersion(jchar a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setVersion_e8d07df586815a42], a0);
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
      namespace sp3 {
        static PyObject *t_SP3Header_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Header_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Header_init_(t_SP3Header *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Header_addComment(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_addSatId(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_getAccuracy(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_getAgency(t_SP3Header *self);
        static PyObject *t_SP3Header_getClockBase(t_SP3Header *self);
        static PyObject *t_SP3Header_getComments(t_SP3Header *self);
        static PyObject *t_SP3Header_getCoordinateSystem(t_SP3Header *self);
        static PyObject *t_SP3Header_getDataUsed(t_SP3Header *self);
        static PyObject *t_SP3Header_getDayFraction(t_SP3Header *self);
        static PyObject *t_SP3Header_getEpoch(t_SP3Header *self);
        static PyObject *t_SP3Header_getEpochInterval(t_SP3Header *self);
        static PyObject *t_SP3Header_getFilter(t_SP3Header *self);
        static PyObject *t_SP3Header_getGpsWeek(t_SP3Header *self);
        static PyObject *t_SP3Header_getModifiedJulianDay(t_SP3Header *self);
        static PyObject *t_SP3Header_getNumberOfEpochs(t_SP3Header *self);
        static PyObject *t_SP3Header_getOrbitType(t_SP3Header *self);
        static PyObject *t_SP3Header_getOrbitTypeKey(t_SP3Header *self);
        static PyObject *t_SP3Header_getPosVelBase(t_SP3Header *self);
        static PyObject *t_SP3Header_getSatIds(t_SP3Header *self);
        static PyObject *t_SP3Header_getSecondsOfWeek(t_SP3Header *self);
        static PyObject *t_SP3Header_getTimeSystem(t_SP3Header *self);
        static PyObject *t_SP3Header_getType(t_SP3Header *self);
        static PyObject *t_SP3Header_getVersion(t_SP3Header *self);
        static PyObject *t_SP3Header_setAccuracy(t_SP3Header *self, PyObject *args);
        static PyObject *t_SP3Header_setAgency(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setClockBase(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setCoordinateSystem(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setDataUsed(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setDayFraction(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setEpoch(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setEpochInterval(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setFilter(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setGpsWeek(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setModifiedJulianDay(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setNumberOfEpochs(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setOrbitTypeKey(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setPosVelBase(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setSecondsOfWeek(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setTimeSystem(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setType(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setVersion(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_get__agency(t_SP3Header *self, void *data);
        static int t_SP3Header_set__agency(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__clockBase(t_SP3Header *self, void *data);
        static int t_SP3Header_set__clockBase(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__comments(t_SP3Header *self, void *data);
        static PyObject *t_SP3Header_get__coordinateSystem(t_SP3Header *self, void *data);
        static int t_SP3Header_set__coordinateSystem(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__dataUsed(t_SP3Header *self, void *data);
        static int t_SP3Header_set__dataUsed(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__dayFraction(t_SP3Header *self, void *data);
        static int t_SP3Header_set__dayFraction(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__epoch(t_SP3Header *self, void *data);
        static int t_SP3Header_set__epoch(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__epochInterval(t_SP3Header *self, void *data);
        static int t_SP3Header_set__epochInterval(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__filter(t_SP3Header *self, void *data);
        static int t_SP3Header_set__filter(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__gpsWeek(t_SP3Header *self, void *data);
        static int t_SP3Header_set__gpsWeek(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__modifiedJulianDay(t_SP3Header *self, void *data);
        static int t_SP3Header_set__modifiedJulianDay(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__numberOfEpochs(t_SP3Header *self, void *data);
        static int t_SP3Header_set__numberOfEpochs(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__orbitType(t_SP3Header *self, void *data);
        static PyObject *t_SP3Header_get__orbitTypeKey(t_SP3Header *self, void *data);
        static int t_SP3Header_set__orbitTypeKey(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__posVelBase(t_SP3Header *self, void *data);
        static int t_SP3Header_set__posVelBase(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__satIds(t_SP3Header *self, void *data);
        static PyObject *t_SP3Header_get__secondsOfWeek(t_SP3Header *self, void *data);
        static int t_SP3Header_set__secondsOfWeek(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__timeSystem(t_SP3Header *self, void *data);
        static int t_SP3Header_set__timeSystem(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__type(t_SP3Header *self, void *data);
        static int t_SP3Header_set__type(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__version(t_SP3Header *self, void *data);
        static int t_SP3Header_set__version(t_SP3Header *self, PyObject *arg, void *data);
        static PyGetSetDef t_SP3Header__fields_[] = {
          DECLARE_GETSET_FIELD(t_SP3Header, agency),
          DECLARE_GETSET_FIELD(t_SP3Header, clockBase),
          DECLARE_GET_FIELD(t_SP3Header, comments),
          DECLARE_GETSET_FIELD(t_SP3Header, coordinateSystem),
          DECLARE_GETSET_FIELD(t_SP3Header, dataUsed),
          DECLARE_GETSET_FIELD(t_SP3Header, dayFraction),
          DECLARE_GETSET_FIELD(t_SP3Header, epoch),
          DECLARE_GETSET_FIELD(t_SP3Header, epochInterval),
          DECLARE_GETSET_FIELD(t_SP3Header, filter),
          DECLARE_GETSET_FIELD(t_SP3Header, gpsWeek),
          DECLARE_GETSET_FIELD(t_SP3Header, modifiedJulianDay),
          DECLARE_GETSET_FIELD(t_SP3Header, numberOfEpochs),
          DECLARE_GET_FIELD(t_SP3Header, orbitType),
          DECLARE_GETSET_FIELD(t_SP3Header, orbitTypeKey),
          DECLARE_GETSET_FIELD(t_SP3Header, posVelBase),
          DECLARE_GET_FIELD(t_SP3Header, satIds),
          DECLARE_GETSET_FIELD(t_SP3Header, secondsOfWeek),
          DECLARE_GETSET_FIELD(t_SP3Header, timeSystem),
          DECLARE_GETSET_FIELD(t_SP3Header, type),
          DECLARE_GETSET_FIELD(t_SP3Header, version),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3Header__methods_[] = {
          DECLARE_METHOD(t_SP3Header, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Header, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Header, addComment, METH_O),
          DECLARE_METHOD(t_SP3Header, addSatId, METH_O),
          DECLARE_METHOD(t_SP3Header, getAccuracy, METH_O),
          DECLARE_METHOD(t_SP3Header, getAgency, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getClockBase, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getComments, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getCoordinateSystem, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getDataUsed, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getDayFraction, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getEpoch, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getEpochInterval, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getFilter, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getGpsWeek, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getModifiedJulianDay, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getNumberOfEpochs, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getOrbitTypeKey, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getPosVelBase, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getSatIds, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getSecondsOfWeek, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getTimeSystem, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getType, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getVersion, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, setAccuracy, METH_VARARGS),
          DECLARE_METHOD(t_SP3Header, setAgency, METH_O),
          DECLARE_METHOD(t_SP3Header, setClockBase, METH_O),
          DECLARE_METHOD(t_SP3Header, setCoordinateSystem, METH_O),
          DECLARE_METHOD(t_SP3Header, setDataUsed, METH_O),
          DECLARE_METHOD(t_SP3Header, setDayFraction, METH_O),
          DECLARE_METHOD(t_SP3Header, setEpoch, METH_O),
          DECLARE_METHOD(t_SP3Header, setEpochInterval, METH_O),
          DECLARE_METHOD(t_SP3Header, setFilter, METH_O),
          DECLARE_METHOD(t_SP3Header, setGpsWeek, METH_O),
          DECLARE_METHOD(t_SP3Header, setModifiedJulianDay, METH_O),
          DECLARE_METHOD(t_SP3Header, setNumberOfEpochs, METH_O),
          DECLARE_METHOD(t_SP3Header, setOrbitTypeKey, METH_O),
          DECLARE_METHOD(t_SP3Header, setPosVelBase, METH_O),
          DECLARE_METHOD(t_SP3Header, setSecondsOfWeek, METH_O),
          DECLARE_METHOD(t_SP3Header, setTimeSystem, METH_O),
          DECLARE_METHOD(t_SP3Header, setType, METH_O),
          DECLARE_METHOD(t_SP3Header, setVersion, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Header)[] = {
          { Py_tp_methods, t_SP3Header__methods_ },
          { Py_tp_init, (void *) t_SP3Header_init_ },
          { Py_tp_getset, t_SP3Header__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Header)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Header, t_SP3Header, SP3Header);

        void t_SP3Header::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Header), &PY_TYPE_DEF(SP3Header), module, "SP3Header", 0);
        }

        void t_SP3Header::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Header), "class_", make_descriptor(SP3Header::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Header), "wrapfn_", make_descriptor(t_SP3Header::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Header), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3Header::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Header), "SP3_FRAME_CENTER_STRING", make_descriptor(j2p(*SP3Header::SP3_FRAME_CENTER_STRING)));
        }

        static PyObject *t_SP3Header_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Header::initializeClass, 1)))
            return NULL;
          return t_SP3Header::wrap_Object(SP3Header(((t_SP3Header *) arg)->object.this$));
        }
        static PyObject *t_SP3Header_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Header::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Header_init_(t_SP3Header *self, PyObject *args, PyObject *kwds)
        {
          SP3Header object((jobject) NULL);

          INT_CALL(object = SP3Header());
          self->object = object;

          return 0;
        }

        static PyObject *t_SP3Header_addComment(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.addComment(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addComment", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_addSatId(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.addSatId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSatId", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_getAccuracy(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getAccuracy(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getAccuracy", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_getAgency(t_SP3Header *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getAgency());
          return j2p(result);
        }

        static PyObject *t_SP3Header_getClockBase(t_SP3Header *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getClockBase());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Header_getComments(t_SP3Header *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComments());
          return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_SP3Header_getCoordinateSystem(t_SP3Header *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoordinateSystem());
          return j2p(result);
        }

        static PyObject *t_SP3Header_getDataUsed(t_SP3Header *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDataUsed());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::sp3::PY_TYPE(DataUsed));
        }

        static PyObject *t_SP3Header_getDayFraction(t_SP3Header *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDayFraction());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Header_getEpoch(t_SP3Header *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SP3Header_getEpochInterval(t_SP3Header *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getEpochInterval());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Header_getFilter(t_SP3Header *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getFilter());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_SP3Header_getGpsWeek(t_SP3Header *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getGpsWeek());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3Header_getModifiedJulianDay(t_SP3Header *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getModifiedJulianDay());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3Header_getNumberOfEpochs(t_SP3Header *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfEpochs());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3Header_getOrbitType(t_SP3Header *self)
        {
          ::org::orekit::files::sp3::SP3OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::files::sp3::t_SP3OrbitType::wrap_Object(result);
        }

        static PyObject *t_SP3Header_getOrbitTypeKey(t_SP3Header *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitTypeKey());
          return j2p(result);
        }

        static PyObject *t_SP3Header_getPosVelBase(t_SP3Header *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPosVelBase());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Header_getSatIds(t_SP3Header *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatIds());
          return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_SP3Header_getSecondsOfWeek(t_SP3Header *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSecondsOfWeek());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Header_getTimeSystem(t_SP3Header *self)
        {
          ::org::orekit::gnss::TimeSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimeSystem());
          return ::org::orekit::gnss::t_TimeSystem::wrap_Object(result);
        }

        static PyObject *t_SP3Header_getType(t_SP3Header *self)
        {
          ::org::orekit::files::sp3::SP3FileType result((jobject) NULL);
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::files::sp3::t_SP3FileType::wrap_Object(result);
        }

        static PyObject *t_SP3Header_getVersion(t_SP3Header *self)
        {
          jchar result;
          OBJ_CALL(result = self->object.getVersion());
          return c2p(result);
        }

        static PyObject *t_SP3Header_setAccuracy(t_SP3Header *self, PyObject *args)
        {
          jint a0;
          jdouble a1;

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(self->object.setAccuracy(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAccuracy", args);
          return NULL;
        }

        static PyObject *t_SP3Header_setAgency(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setAgency(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAgency", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setClockBase(t_SP3Header *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setClockBase(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setClockBase", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setCoordinateSystem(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setCoordinateSystem(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setCoordinateSystem", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setDataUsed(t_SP3Header *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.setDataUsed(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDataUsed", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setDayFraction(t_SP3Header *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setDayFraction(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDayFraction", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setEpoch(t_SP3Header *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setEpoch(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEpoch", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setEpochInterval(t_SP3Header *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setEpochInterval(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEpochInterval", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setFilter(t_SP3Header *self, PyObject *arg)
        {
          ::org::orekit::utils::CartesianDerivativesFilter a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &p0, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
          {
            OBJ_CALL(self->object.setFilter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setFilter", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setGpsWeek(t_SP3Header *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setGpsWeek(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setGpsWeek", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setModifiedJulianDay(t_SP3Header *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setModifiedJulianDay(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setModifiedJulianDay", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setNumberOfEpochs(t_SP3Header *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setNumberOfEpochs(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNumberOfEpochs", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setOrbitTypeKey(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setOrbitTypeKey(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOrbitTypeKey", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setPosVelBase(t_SP3Header *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPosVelBase(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPosVelBase", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setSecondsOfWeek(t_SP3Header *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSecondsOfWeek(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSecondsOfWeek", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setTimeSystem(t_SP3Header *self, PyObject *arg)
        {
          ::org::orekit::gnss::TimeSystem a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::gnss::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_TimeSystem::parameters_))
          {
            OBJ_CALL(self->object.setTimeSystem(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTimeSystem", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setType(t_SP3Header *self, PyObject *arg)
        {
          ::org::orekit::files::sp3::SP3FileType a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::files::sp3::SP3FileType::initializeClass, &a0, &p0, ::org::orekit::files::sp3::t_SP3FileType::parameters_))
          {
            OBJ_CALL(self->object.setType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setType", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setVersion(t_SP3Header *self, PyObject *arg)
        {
          jchar a0;

          if (!parseArg(arg, "C", &a0))
          {
            OBJ_CALL(self->object.setVersion(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setVersion", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_get__agency(t_SP3Header *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getAgency());
          return j2p(value);
        }
        static int t_SP3Header_set__agency(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setAgency(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "agency", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__clockBase(t_SP3Header *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getClockBase());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SP3Header_set__clockBase(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setClockBase(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "clockBase", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__comments(t_SP3Header *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_SP3Header_get__coordinateSystem(t_SP3Header *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoordinateSystem());
          return j2p(value);
        }
        static int t_SP3Header_set__coordinateSystem(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setCoordinateSystem(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "coordinateSystem", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__dataUsed(t_SP3Header *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDataUsed());
          return ::java::util::t_List::wrap_Object(value);
        }
        static int t_SP3Header_set__dataUsed(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::java::util::List value((jobject) NULL);
            if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
            {
              INT_CALL(self->object.setDataUsed(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "dataUsed", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__dayFraction(t_SP3Header *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDayFraction());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SP3Header_set__dayFraction(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setDayFraction(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "dayFraction", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__epoch(t_SP3Header *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_SP3Header_set__epoch(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              INT_CALL(self->object.setEpoch(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "epoch", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__epochInterval(t_SP3Header *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getEpochInterval());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SP3Header_set__epochInterval(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setEpochInterval(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "epochInterval", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__filter(t_SP3Header *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getFilter());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }
        static int t_SP3Header_set__filter(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &value))
            {
              INT_CALL(self->object.setFilter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "filter", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__gpsWeek(t_SP3Header *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getGpsWeek());
          return PyLong_FromLong((long) value);
        }
        static int t_SP3Header_set__gpsWeek(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setGpsWeek(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "gpsWeek", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__modifiedJulianDay(t_SP3Header *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getModifiedJulianDay());
          return PyLong_FromLong((long) value);
        }
        static int t_SP3Header_set__modifiedJulianDay(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setModifiedJulianDay(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "modifiedJulianDay", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__numberOfEpochs(t_SP3Header *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfEpochs());
          return PyLong_FromLong((long) value);
        }
        static int t_SP3Header_set__numberOfEpochs(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setNumberOfEpochs(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "numberOfEpochs", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__orbitType(t_SP3Header *self, void *data)
        {
          ::org::orekit::files::sp3::SP3OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::files::sp3::t_SP3OrbitType::wrap_Object(value);
        }

        static PyObject *t_SP3Header_get__orbitTypeKey(t_SP3Header *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitTypeKey());
          return j2p(value);
        }
        static int t_SP3Header_set__orbitTypeKey(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setOrbitTypeKey(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "orbitTypeKey", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__posVelBase(t_SP3Header *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPosVelBase());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SP3Header_set__posVelBase(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPosVelBase(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "posVelBase", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__satIds(t_SP3Header *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatIds());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_SP3Header_get__secondsOfWeek(t_SP3Header *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSecondsOfWeek());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SP3Header_set__secondsOfWeek(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSecondsOfWeek(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "secondsOfWeek", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__timeSystem(t_SP3Header *self, void *data)
        {
          ::org::orekit::gnss::TimeSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimeSystem());
          return ::org::orekit::gnss::t_TimeSystem::wrap_Object(value);
        }
        static int t_SP3Header_set__timeSystem(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::gnss::TimeSystem value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::gnss::TimeSystem::initializeClass, &value))
            {
              INT_CALL(self->object.setTimeSystem(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "timeSystem", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__type(t_SP3Header *self, void *data)
        {
          ::org::orekit::files::sp3::SP3FileType value((jobject) NULL);
          OBJ_CALL(value = self->object.getType());
          return ::org::orekit::files::sp3::t_SP3FileType::wrap_Object(value);
        }
        static int t_SP3Header_set__type(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::sp3::SP3FileType value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::sp3::SP3FileType::initializeClass, &value))
            {
              INT_CALL(self->object.setType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "type", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__version(t_SP3Header *self, void *data)
        {
          jchar value;
          OBJ_CALL(value = self->object.getVersion());
          return c2p(value);
        }
        static int t_SP3Header_set__version(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jchar value;
            if (!parseArg(arg, "C", &value))
            {
              INT_CALL(self->object.setVersion(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "version", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$MeteorologicalConfiguration.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "org/orekit/files/ilrs/CRDConfiguration$BaseConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$TransponderConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$SystemConfiguration.h"
#include "java/util/Set.h"
#include "org/orekit/files/ilrs/CRDConfiguration$LaserConfiguration.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CRDConfiguration$TimingSystemConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$DetectorConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$SoftwareConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$CalibrationTargetConfiguration.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration::mids$ = NULL;
        bool CRDConfiguration::live$ = false;

        jclass CRDConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addConfigurationRecord_11245a520c9c98e7] = env->getMethodID(cls, "addConfigurationRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$BaseConfiguration;)V");
            mids$[mid_getCalibrationTargetRecord_6e8e873c75001146] = env->getMethodID(cls, "getCalibrationTargetRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$CalibrationTargetConfiguration;");
            mids$[mid_getCalibrationTargetRecord_4b2ea46ed3fc3e9d] = env->getMethodID(cls, "getCalibrationTargetRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$CalibrationTargetConfiguration;");
            mids$[mid_getConfigurationRecord_33f8649bcc299ca9] = env->getMethodID(cls, "getConfigurationRecord", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/CRDConfiguration$BaseConfiguration;");
            mids$[mid_getConfigurationRecordMap_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getConfigurationRecordMap", "()Ljava/util/Map;");
            mids$[mid_getDetectorRecord_392d35737f512715] = env->getMethodID(cls, "getDetectorRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$DetectorConfiguration;");
            mids$[mid_getDetectorRecord_e6f973aab4d967f8] = env->getMethodID(cls, "getDetectorRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$DetectorConfiguration;");
            mids$[mid_getLaserRecord_63d9d008da5c7396] = env->getMethodID(cls, "getLaserRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$LaserConfiguration;");
            mids$[mid_getLaserRecord_0247691365fa7c76] = env->getMethodID(cls, "getLaserRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$LaserConfiguration;");
            mids$[mid_getLastSystemRecord_4483bde962d92750] = env->getMethodID(cls, "getLastSystemRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;");
            mids$[mid_getMeteorologicalRecord_02c143d56de1a9aa] = env->getMethodID(cls, "getMeteorologicalRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$MeteorologicalConfiguration;");
            mids$[mid_getMeteorologicalRecord_3eca2340c6fce9fa] = env->getMethodID(cls, "getMeteorologicalRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$MeteorologicalConfiguration;");
            mids$[mid_getSoftwareRecord_58a9b47752cd2839] = env->getMethodID(cls, "getSoftwareRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$SoftwareConfiguration;");
            mids$[mid_getSoftwareRecord_2ee27eb48b772397] = env->getMethodID(cls, "getSoftwareRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$SoftwareConfiguration;");
            mids$[mid_getSystemConfigurationIds_6b191a9b12c1004b] = env->getMethodID(cls, "getSystemConfigurationIds", "()Ljava/util/Set;");
            mids$[mid_getSystemConfigurationRecords_d751c1a57012b438] = env->getMethodID(cls, "getSystemConfigurationRecords", "()Ljava/util/List;");
            mids$[mid_getSystemRecord_4483bde962d92750] = env->getMethodID(cls, "getSystemRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;");
            mids$[mid_getSystemRecord_37e2c7548a758507] = env->getMethodID(cls, "getSystemRecord", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;");
            mids$[mid_getTimingRecord_3abf7a81b854aeef] = env->getMethodID(cls, "getTimingRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$TimingSystemConfiguration;");
            mids$[mid_getTimingRecord_0f7add600b6f2cb1] = env->getMethodID(cls, "getTimingRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$TimingSystemConfiguration;");
            mids$[mid_getTransponderRecord_fff0218714836f9b] = env->getMethodID(cls, "getTransponderRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$TransponderConfiguration;");
            mids$[mid_getTransponderRecord_250ed8028bb49849] = env->getMethodID(cls, "getTransponderRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$TransponderConfiguration;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration::CRDConfiguration() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void CRDConfiguration::addConfigurationRecord(const ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addConfigurationRecord_11245a520c9c98e7], a0.this$);
        }

        ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration CRDConfiguration::getCalibrationTargetRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration(env->callObjectMethod(this$, mids$[mid_getCalibrationTargetRecord_6e8e873c75001146]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration CRDConfiguration::getCalibrationTargetRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration(env->callObjectMethod(this$, mids$[mid_getCalibrationTargetRecord_4b2ea46ed3fc3e9d], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration CRDConfiguration::getConfigurationRecord(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->callObjectMethod(this$, mids$[mid_getConfigurationRecord_33f8649bcc299ca9], a0.this$));
        }

        ::java::util::Map CRDConfiguration::getConfigurationRecordMap() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getConfigurationRecordMap_dbcb8bbac6b35e0d]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration CRDConfiguration::getDetectorRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration(env->callObjectMethod(this$, mids$[mid_getDetectorRecord_392d35737f512715]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration CRDConfiguration::getDetectorRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration(env->callObjectMethod(this$, mids$[mid_getDetectorRecord_e6f973aab4d967f8], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration CRDConfiguration::getLaserRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration(env->callObjectMethod(this$, mids$[mid_getLaserRecord_63d9d008da5c7396]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration CRDConfiguration::getLaserRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration(env->callObjectMethod(this$, mids$[mid_getLaserRecord_0247691365fa7c76], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration CRDConfiguration::getLastSystemRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration(env->callObjectMethod(this$, mids$[mid_getLastSystemRecord_4483bde962d92750]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration CRDConfiguration::getMeteorologicalRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration(env->callObjectMethod(this$, mids$[mid_getMeteorologicalRecord_02c143d56de1a9aa]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration CRDConfiguration::getMeteorologicalRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration(env->callObjectMethod(this$, mids$[mid_getMeteorologicalRecord_3eca2340c6fce9fa], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration CRDConfiguration::getSoftwareRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration(env->callObjectMethod(this$, mids$[mid_getSoftwareRecord_58a9b47752cd2839]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration CRDConfiguration::getSoftwareRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration(env->callObjectMethod(this$, mids$[mid_getSoftwareRecord_2ee27eb48b772397], a0.this$));
        }

        ::java::util::Set CRDConfiguration::getSystemConfigurationIds() const
        {
          return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationIds_6b191a9b12c1004b]));
        }

        ::java::util::List CRDConfiguration::getSystemConfigurationRecords() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationRecords_d751c1a57012b438]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration CRDConfiguration::getSystemRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration(env->callObjectMethod(this$, mids$[mid_getSystemRecord_4483bde962d92750]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration CRDConfiguration::getSystemRecord(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration(env->callObjectMethod(this$, mids$[mid_getSystemRecord_37e2c7548a758507], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration CRDConfiguration::getTimingRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration(env->callObjectMethod(this$, mids$[mid_getTimingRecord_3abf7a81b854aeef]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration CRDConfiguration::getTimingRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration(env->callObjectMethod(this$, mids$[mid_getTimingRecord_0f7add600b6f2cb1], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration CRDConfiguration::getTransponderRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration(env->callObjectMethod(this$, mids$[mid_getTransponderRecord_fff0218714836f9b]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration CRDConfiguration::getTransponderRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration(env->callObjectMethod(this$, mids$[mid_getTransponderRecord_250ed8028bb49849], a0.this$));
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
        static PyObject *t_CRDConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration_init_(t_CRDConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration_addConfigurationRecord(t_CRDConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration_getCalibrationTargetRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getConfigurationRecord(t_CRDConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration_getConfigurationRecordMap(t_CRDConfiguration *self);
        static PyObject *t_CRDConfiguration_getDetectorRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getLaserRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getLastSystemRecord(t_CRDConfiguration *self);
        static PyObject *t_CRDConfiguration_getMeteorologicalRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getSoftwareRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getSystemConfigurationIds(t_CRDConfiguration *self);
        static PyObject *t_CRDConfiguration_getSystemConfigurationRecords(t_CRDConfiguration *self);
        static PyObject *t_CRDConfiguration_getSystemRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getTimingRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getTransponderRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_get__calibrationTargetRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__configurationRecordMap(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__detectorRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__laserRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__lastSystemRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__meteorologicalRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__softwareRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__systemConfigurationIds(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__systemConfigurationRecords(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__systemRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__timingRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__transponderRecord(t_CRDConfiguration *self, void *data);
        static PyGetSetDef t_CRDConfiguration__fields_[] = {
          DECLARE_GET_FIELD(t_CRDConfiguration, calibrationTargetRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, configurationRecordMap),
          DECLARE_GET_FIELD(t_CRDConfiguration, detectorRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, laserRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, lastSystemRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, meteorologicalRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, softwareRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, systemConfigurationIds),
          DECLARE_GET_FIELD(t_CRDConfiguration, systemConfigurationRecords),
          DECLARE_GET_FIELD(t_CRDConfiguration, systemRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, timingRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, transponderRecord),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration, addConfigurationRecord, METH_O),
          DECLARE_METHOD(t_CRDConfiguration, getCalibrationTargetRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getConfigurationRecord, METH_O),
          DECLARE_METHOD(t_CRDConfiguration, getConfigurationRecordMap, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration, getDetectorRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getLaserRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getLastSystemRecord, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration, getMeteorologicalRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getSoftwareRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getSystemConfigurationIds, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration, getSystemConfigurationRecords, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration, getSystemRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getTimingRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getTransponderRecord, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration, t_CRDConfiguration, CRDConfiguration);

        void t_CRDConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration), &PY_TYPE_DEF(CRDConfiguration), module, "CRDConfiguration", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "CalibrationTargetConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$CalibrationTargetConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "MeteorologicalConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$MeteorologicalConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "SoftwareConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$SoftwareConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "TransponderConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$TransponderConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "TimingSystemConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$TimingSystemConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "DetectorConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$DetectorConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "LaserConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$LaserConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "SystemConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$SystemConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "BaseConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$BaseConfiguration)));
        }

        void t_CRDConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "class_", make_descriptor(CRDConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration::wrap_Object(CRDConfiguration(((t_CRDConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration_init_(t_CRDConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration_addConfigurationRecord(t_CRDConfiguration *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addConfigurationRecord(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addConfigurationRecord", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getCalibrationTargetRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getCalibrationTargetRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$CalibrationTargetConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getCalibrationTargetRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$CalibrationTargetConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getCalibrationTargetRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getConfigurationRecord(t_CRDConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getConfigurationRecord(a0));
            return ::org::orekit::files::ilrs::t_CRDConfiguration$BaseConfiguration::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getConfigurationRecord", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getConfigurationRecordMap(t_CRDConfiguration *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getConfigurationRecordMap());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ilrs::PY_TYPE(CRDConfiguration$BaseConfiguration));
        }

        static PyObject *t_CRDConfiguration_getDetectorRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getDetectorRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$DetectorConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getDetectorRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$DetectorConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getDetectorRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getLaserRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getLaserRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$LaserConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getLaserRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$LaserConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getLaserRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getLastSystemRecord(t_CRDConfiguration *self)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration result((jobject) NULL);
          OBJ_CALL(result = self->object.getLastSystemRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$SystemConfiguration::wrap_Object(result);
        }

        static PyObject *t_CRDConfiguration_getMeteorologicalRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeteorologicalRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$MeteorologicalConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMeteorologicalRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$MeteorologicalConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getMeteorologicalRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getSoftwareRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getSoftwareRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$SoftwareConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getSoftwareRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$SoftwareConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getSoftwareRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getSystemConfigurationIds(t_CRDConfiguration *self)
        {
          ::java::util::Set result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationIds());
          return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_CRDConfiguration_getSystemConfigurationRecords(t_CRDConfiguration *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationRecords());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRDConfiguration$SystemConfiguration));
        }

        static PyObject *t_CRDConfiguration_getSystemRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getSystemRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$SystemConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = self->object.getSystemRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$SystemConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getSystemRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getTimingRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimingRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$TimingSystemConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getTimingRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$TimingSystemConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getTimingRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getTransponderRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getTransponderRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$TransponderConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getTransponderRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$TransponderConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getTransponderRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_get__calibrationTargetRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getCalibrationTargetRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$CalibrationTargetConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__configurationRecordMap(t_CRDConfiguration *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getConfigurationRecordMap());
          return ::java::util::t_Map::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__detectorRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetectorRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$DetectorConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__laserRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getLaserRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$LaserConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__lastSystemRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getLastSystemRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$SystemConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__meteorologicalRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeteorologicalRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$MeteorologicalConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__softwareRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getSoftwareRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$SoftwareConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__systemConfigurationIds(t_CRDConfiguration *self, void *data)
        {
          ::java::util::Set value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationIds());
          return ::java::util::t_Set::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__systemConfigurationRecords(t_CRDConfiguration *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationRecords());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__systemRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$SystemConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__timingRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimingRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$TimingSystemConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__transponderRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getTransponderRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$TransponderConfiguration::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PythonAbstractListCrawler.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/data/ZipJarCrawler.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonAbstractListCrawler::class$ = NULL;
      jmethodID *PythonAbstractListCrawler::mids$ = NULL;
      bool PythonAbstractListCrawler::live$ = false;

      jclass PythonAbstractListCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonAbstractListCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBaseName_60ee6fc56bffa550] = env->getMethodID(cls, "getBaseName", "(Ljava/lang/Object;)Ljava/lang/String;");
          mids$[mid_getCompleteName_60ee6fc56bffa550] = env->getMethodID(cls, "getCompleteName", "(Ljava/lang/Object;)Ljava/lang/String;");
          mids$[mid_getStream_75cd29d23c885e7c] = env->getMethodID(cls, "getStream", "(Ljava/lang/Object;)Ljava/io/InputStream;");
          mids$[mid_getZipJarCrawler_fdb03dd4a838fc17] = env->getMethodID(cls, "getZipJarCrawler", "(Ljava/lang/Object;)Lorg/orekit/data/ZipJarCrawler;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractListCrawler::PythonAbstractListCrawler() : ::org::orekit::data::AbstractListCrawler(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonAbstractListCrawler::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonAbstractListCrawler::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonAbstractListCrawler::pythonExtension(jlong a0) const
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
    namespace data {
      static PyObject *t_PythonAbstractListCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractListCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractListCrawler_of_(t_PythonAbstractListCrawler *self, PyObject *args);
      static int t_PythonAbstractListCrawler_init_(t_PythonAbstractListCrawler *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractListCrawler_finalize(t_PythonAbstractListCrawler *self);
      static PyObject *t_PythonAbstractListCrawler_pythonExtension(t_PythonAbstractListCrawler *self, PyObject *args);
      static jobject JNICALL t_PythonAbstractListCrawler_getBaseName0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAbstractListCrawler_getCompleteName1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAbstractListCrawler_getStream2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAbstractListCrawler_getZipJarCrawler3(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonAbstractListCrawler_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractListCrawler_get__self(t_PythonAbstractListCrawler *self, void *data);
      static PyObject *t_PythonAbstractListCrawler_get__parameters_(t_PythonAbstractListCrawler *self, void *data);
      static PyGetSetDef t_PythonAbstractListCrawler__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractListCrawler, self),
        DECLARE_GET_FIELD(t_PythonAbstractListCrawler, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractListCrawler__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractListCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractListCrawler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractListCrawler, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonAbstractListCrawler, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractListCrawler, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractListCrawler)[] = {
        { Py_tp_methods, t_PythonAbstractListCrawler__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractListCrawler_init_ },
        { Py_tp_getset, t_PythonAbstractListCrawler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractListCrawler)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractListCrawler),
        NULL
      };

      DEFINE_TYPE(PythonAbstractListCrawler, t_PythonAbstractListCrawler, PythonAbstractListCrawler);
      PyObject *t_PythonAbstractListCrawler::wrap_Object(const PythonAbstractListCrawler& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonAbstractListCrawler::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonAbstractListCrawler *self = (t_PythonAbstractListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonAbstractListCrawler::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonAbstractListCrawler::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonAbstractListCrawler *self = (t_PythonAbstractListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonAbstractListCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractListCrawler), &PY_TYPE_DEF(PythonAbstractListCrawler), module, "PythonAbstractListCrawler", 1);
      }

      void t_PythonAbstractListCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractListCrawler), "class_", make_descriptor(PythonAbstractListCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractListCrawler), "wrapfn_", make_descriptor(t_PythonAbstractListCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractListCrawler), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractListCrawler::initializeClass);
        JNINativeMethod methods[] = {
          { "getBaseName", "(Ljava/lang/Object;)Ljava/lang/String;", (void *) t_PythonAbstractListCrawler_getBaseName0 },
          { "getCompleteName", "(Ljava/lang/Object;)Ljava/lang/String;", (void *) t_PythonAbstractListCrawler_getCompleteName1 },
          { "getStream", "(Ljava/lang/Object;)Ljava/io/InputStream;", (void *) t_PythonAbstractListCrawler_getStream2 },
          { "getZipJarCrawler", "(Ljava/lang/Object;)Lorg/orekit/data/ZipJarCrawler;", (void *) t_PythonAbstractListCrawler_getZipJarCrawler3 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractListCrawler_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonAbstractListCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractListCrawler::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractListCrawler::wrap_Object(PythonAbstractListCrawler(((t_PythonAbstractListCrawler *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractListCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractListCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonAbstractListCrawler_of_(t_PythonAbstractListCrawler *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonAbstractListCrawler_init_(t_PythonAbstractListCrawler *self, PyObject *args, PyObject *kwds)
      {
        PythonAbstractListCrawler object((jobject) NULL);

        INT_CALL(object = PythonAbstractListCrawler());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAbstractListCrawler_finalize(t_PythonAbstractListCrawler *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractListCrawler_pythonExtension(t_PythonAbstractListCrawler *self, PyObject *args)
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

      static jobject JNICALL t_PythonAbstractListCrawler_getBaseName0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *o0 = ::java::lang::t_Object::wrap_Object(::java::lang::Object(a0));
        PyObject *result = PyObject_CallMethod(obj, "getBaseName", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getBaseName", result);
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

      static jobject JNICALL t_PythonAbstractListCrawler_getCompleteName1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *o0 = ::java::lang::t_Object::wrap_Object(::java::lang::Object(a0));
        PyObject *result = PyObject_CallMethod(obj, "getCompleteName", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getCompleteName", result);
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

      static jobject JNICALL t_PythonAbstractListCrawler_getStream2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::io::InputStream value((jobject) NULL);
        PyObject *o0 = ::java::lang::t_Object::wrap_Object(::java::lang::Object(a0));
        PyObject *result = PyObject_CallMethod(obj, "getStream", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::io::InputStream::initializeClass, &value))
        {
          throwTypeError("getStream", result);
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

      static jobject JNICALL t_PythonAbstractListCrawler_getZipJarCrawler3(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::data::ZipJarCrawler value((jobject) NULL);
        PyObject *o0 = ::java::lang::t_Object::wrap_Object(::java::lang::Object(a0));
        PyObject *result = PyObject_CallMethod(obj, "getZipJarCrawler", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::data::ZipJarCrawler::initializeClass, &value))
        {
          throwTypeError("getZipJarCrawler", result);
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

      static void JNICALL t_PythonAbstractListCrawler_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractListCrawler_get__self(t_PythonAbstractListCrawler *self, void *data)
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
      static PyObject *t_PythonAbstractListCrawler_get__parameters_(t_PythonAbstractListCrawler *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}

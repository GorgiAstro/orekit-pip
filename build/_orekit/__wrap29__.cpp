#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/GroundReceiverCommonParametersWithoutDerivatives.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
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
            mids$[mid_init$_29f39efa7fe2fa67] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/Transform;Lorg/orekit/utils/TimeStampedPVCoordinates;DLorg/orekit/propagation/SpacecraftState;Lorg/orekit/utils/TimeStampedPVCoordinates;)V");
            mids$[mid_getOffsetToInertialDownlink_631c2f99a847a383] = env->getMethodID(cls, "getOffsetToInertialDownlink", "()Lorg/orekit/frames/Transform;");
            mids$[mid_getState_dd3e4a8d51055f1f] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getStationDownlink_6890805957bea2cd] = env->getMethodID(cls, "getStationDownlink", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getTauD_456d9a2f64d6b28d] = env->getMethodID(cls, "getTauD", "()D");
            mids$[mid_getTransitPV_6890805957bea2cd] = env->getMethodID(cls, "getTransitPV", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getTransitState_dd3e4a8d51055f1f] = env->getMethodID(cls, "getTransitState", "()Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundReceiverCommonParametersWithoutDerivatives::GroundReceiverCommonParametersWithoutDerivatives(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::Transform & a1, const ::org::orekit::utils::TimeStampedPVCoordinates & a2, jdouble a3, const ::org::orekit::propagation::SpacecraftState & a4, const ::org::orekit::utils::TimeStampedPVCoordinates & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_29f39efa7fe2fa67, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5.this$)) {}

        ::org::orekit::frames::Transform GroundReceiverCommonParametersWithoutDerivatives::getOffsetToInertialDownlink() const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getOffsetToInertialDownlink_631c2f99a847a383]));
        }

        ::org::orekit::propagation::SpacecraftState GroundReceiverCommonParametersWithoutDerivatives::getState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_dd3e4a8d51055f1f]));
        }

        ::org::orekit::utils::TimeStampedPVCoordinates GroundReceiverCommonParametersWithoutDerivatives::getStationDownlink() const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getStationDownlink_6890805957bea2cd]));
        }

        jdouble GroundReceiverCommonParametersWithoutDerivatives::getTauD() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTauD_456d9a2f64d6b28d]);
        }

        ::org::orekit::utils::TimeStampedPVCoordinates GroundReceiverCommonParametersWithoutDerivatives::getTransitPV() const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTransitPV_6890805957bea2cd]));
        }

        ::org::orekit::propagation::SpacecraftState GroundReceiverCommonParametersWithoutDerivatives::getTransitState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getTransitState_dd3e4a8d51055f1f]));
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeStateHistoryMetadataKey::class$ = NULL;
              jmethodID *AttitudeStateHistoryMetadataKey::mids$ = NULL;
              bool AttitudeStateHistoryMetadataKey::live$ = false;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::ATT_BASIS = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::ATT_BASIS_ID = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::ATT_ID = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::ATT_PREV_ID = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::ATT_TYPE = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::COMMENT = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::EULER_ROT_SEQ = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::NUMBER_STATES = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::RATE_TYPE = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::REF_FRAME_A = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::REF_FRAME_B = NULL;

              jclass AttitudeStateHistoryMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_e5c91f7e921d2387] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata;)Z");
                  mids$[mid_valueOf_2344b00ad4d4017a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;");
                  mids$[mid_values_23c9c46831adc176] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ATT_BASIS = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "ATT_BASIS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  ATT_BASIS_ID = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "ATT_BASIS_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  ATT_ID = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "ATT_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  ATT_PREV_ID = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "ATT_PREV_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  ATT_TYPE = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "ATT_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  COMMENT = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  EULER_ROT_SEQ = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "EULER_ROT_SEQ", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  NUMBER_STATES = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "NUMBER_STATES", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  RATE_TYPE = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "RATE_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  REF_FRAME_A = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  REF_FRAME_B = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudeStateHistoryMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_e5c91f7e921d2387], a0.this$, a1.this$, a2.this$);
              }

              AttitudeStateHistoryMetadataKey AttitudeStateHistoryMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeStateHistoryMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2344b00ad4d4017a], a0.this$));
              }

              JArray< AttitudeStateHistoryMetadataKey > AttitudeStateHistoryMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeStateHistoryMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_23c9c46831adc176]));
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
              static PyObject *t_AttitudeStateHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadataKey_of_(t_AttitudeStateHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_AttitudeStateHistoryMetadataKey_process(t_AttitudeStateHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_AttitudeStateHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeStateHistoryMetadataKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeStateHistoryMetadataKey_get__parameters_(t_AttitudeStateHistoryMetadataKey *self, void *data);
              static PyGetSetDef t_AttitudeStateHistoryMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeStateHistoryMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeStateHistoryMetadataKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeStateHistoryMetadataKey)[] = {
                { Py_tp_methods, t_AttitudeStateHistoryMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeStateHistoryMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeStateHistoryMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeStateHistoryMetadataKey, t_AttitudeStateHistoryMetadataKey, AttitudeStateHistoryMetadataKey);
              PyObject *t_AttitudeStateHistoryMetadataKey::wrap_Object(const AttitudeStateHistoryMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeStateHistoryMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeStateHistoryMetadataKey *self = (t_AttitudeStateHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeStateHistoryMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeStateHistoryMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeStateHistoryMetadataKey *self = (t_AttitudeStateHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeStateHistoryMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeStateHistoryMetadataKey), &PY_TYPE_DEF(AttitudeStateHistoryMetadataKey), module, "AttitudeStateHistoryMetadataKey", 0);
              }

              void t_AttitudeStateHistoryMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "class_", make_descriptor(AttitudeStateHistoryMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "wrapfn_", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeStateHistoryMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "ATT_BASIS", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::ATT_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "ATT_BASIS_ID", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::ATT_BASIS_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "ATT_ID", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::ATT_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "ATT_PREV_ID", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::ATT_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "ATT_TYPE", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::ATT_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "COMMENT", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "EULER_ROT_SEQ", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::EULER_ROT_SEQ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "NUMBER_STATES", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::NUMBER_STATES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "RATE_TYPE", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::RATE_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "REF_FRAME_A", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "REF_FRAME_B", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::REF_FRAME_B)));
              }

              static PyObject *t_AttitudeStateHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeStateHistoryMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeStateHistoryMetadataKey::wrap_Object(AttitudeStateHistoryMetadataKey(((t_AttitudeStateHistoryMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeStateHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeStateHistoryMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeStateHistoryMetadataKey_of_(t_AttitudeStateHistoryMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeStateHistoryMetadataKey_process(t_AttitudeStateHistoryMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeStateHistoryMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadataKey::valueOf(a0));
                  return t_AttitudeStateHistoryMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeStateHistoryMetadataKey_values(PyTypeObject *type)
              {
                JArray< AttitudeStateHistoryMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeStateHistoryMetadataKey::wrap_jobject);
              }
              static PyObject *t_AttitudeStateHistoryMetadataKey_get__parameters_(t_AttitudeStateHistoryMetadataKey *self, void *data)
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
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *ManeuverTriggersResetter::class$ = NULL;
          jmethodID *ManeuverTriggersResetter::mids$ = NULL;
          bool ManeuverTriggersResetter::live$ = false;

          jclass ManeuverTriggersResetter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_maneuverTriggered_9658cf3eaef14ef5] = env->getMethodID(cls, "maneuverTriggered", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_resetState_81fc6fb6078d2aa7] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void ManeuverTriggersResetter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
          }

          void ManeuverTriggersResetter::maneuverTriggered(const ::org::orekit::propagation::SpacecraftState & a0, jboolean a1) const
          {
            env->callVoidMethod(this$, mids$[mid_maneuverTriggered_9658cf3eaef14ef5], a0.this$, a1);
          }

          ::org::orekit::propagation::SpacecraftState ManeuverTriggersResetter::resetState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_81fc6fb6078d2aa7], a0.this$));
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
          static PyObject *t_ManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ManeuverTriggersResetter_init(t_ManeuverTriggersResetter *self, PyObject *args);
          static PyObject *t_ManeuverTriggersResetter_maneuverTriggered(t_ManeuverTriggersResetter *self, PyObject *args);
          static PyObject *t_ManeuverTriggersResetter_resetState(t_ManeuverTriggersResetter *self, PyObject *arg);

          static PyMethodDef t_ManeuverTriggersResetter__methods_[] = {
            DECLARE_METHOD(t_ManeuverTriggersResetter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ManeuverTriggersResetter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ManeuverTriggersResetter, init, METH_VARARGS),
            DECLARE_METHOD(t_ManeuverTriggersResetter, maneuverTriggered, METH_VARARGS),
            DECLARE_METHOD(t_ManeuverTriggersResetter, resetState, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ManeuverTriggersResetter)[] = {
            { Py_tp_methods, t_ManeuverTriggersResetter__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ManeuverTriggersResetter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ManeuverTriggersResetter, t_ManeuverTriggersResetter, ManeuverTriggersResetter);

          void t_ManeuverTriggersResetter::install(PyObject *module)
          {
            installType(&PY_TYPE(ManeuverTriggersResetter), &PY_TYPE_DEF(ManeuverTriggersResetter), module, "ManeuverTriggersResetter", 0);
          }

          void t_ManeuverTriggersResetter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverTriggersResetter), "class_", make_descriptor(ManeuverTriggersResetter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverTriggersResetter), "wrapfn_", make_descriptor(t_ManeuverTriggersResetter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverTriggersResetter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ManeuverTriggersResetter::initializeClass, 1)))
              return NULL;
            return t_ManeuverTriggersResetter::wrap_Object(ManeuverTriggersResetter(((t_ManeuverTriggersResetter *) arg)->object.this$));
          }
          static PyObject *t_ManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ManeuverTriggersResetter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ManeuverTriggersResetter_init(t_ManeuverTriggersResetter *self, PyObject *args)
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

          static PyObject *t_ManeuverTriggersResetter_maneuverTriggered(t_ManeuverTriggersResetter *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jboolean a1;

            if (!parseArgs(args, "kZ", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.maneuverTriggered(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "maneuverTriggered", args);
            return NULL;
          }

          static PyObject *t_ManeuverTriggersResetter_resetState(t_ManeuverTriggersResetter *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.resetState(a0));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "resetState", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/univariate/BrentOptimizer.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *BrentOptimizer::class$ = NULL;
        jmethodID *BrentOptimizer::mids$ = NULL;
        bool BrentOptimizer::live$ = false;

        jclass BrentOptimizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/BrentOptimizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_f83ff6a8ad92b0e0] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/optim/ConvergenceChecker;)V");
            mids$[mid_doOptimize_d2fe1940144d9faa] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BrentOptimizer::BrentOptimizer(jdouble a0, jdouble a1) : ::org::hipparchus::optim::univariate::UnivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        BrentOptimizer::BrentOptimizer(jdouble a0, jdouble a1, const ::org::hipparchus::optim::ConvergenceChecker & a2) : ::org::hipparchus::optim::univariate::UnivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_f83ff6a8ad92b0e0, a0, a1, a2.this$)) {}
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
        static PyObject *t_BrentOptimizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BrentOptimizer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BrentOptimizer_of_(t_BrentOptimizer *self, PyObject *args);
        static int t_BrentOptimizer_init_(t_BrentOptimizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BrentOptimizer_get__parameters_(t_BrentOptimizer *self, void *data);
        static PyGetSetDef t_BrentOptimizer__fields_[] = {
          DECLARE_GET_FIELD(t_BrentOptimizer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BrentOptimizer__methods_[] = {
          DECLARE_METHOD(t_BrentOptimizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrentOptimizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrentOptimizer, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BrentOptimizer)[] = {
          { Py_tp_methods, t_BrentOptimizer__methods_ },
          { Py_tp_init, (void *) t_BrentOptimizer_init_ },
          { Py_tp_getset, t_BrentOptimizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BrentOptimizer)[] = {
          &PY_TYPE_DEF(::org::hipparchus::optim::univariate::UnivariateOptimizer),
          NULL
        };

        DEFINE_TYPE(BrentOptimizer, t_BrentOptimizer, BrentOptimizer);
        PyObject *t_BrentOptimizer::wrap_Object(const BrentOptimizer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BrentOptimizer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BrentOptimizer *self = (t_BrentOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BrentOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BrentOptimizer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BrentOptimizer *self = (t_BrentOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BrentOptimizer::install(PyObject *module)
        {
          installType(&PY_TYPE(BrentOptimizer), &PY_TYPE_DEF(BrentOptimizer), module, "BrentOptimizer", 0);
        }

        void t_BrentOptimizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrentOptimizer), "class_", make_descriptor(BrentOptimizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrentOptimizer), "wrapfn_", make_descriptor(t_BrentOptimizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrentOptimizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BrentOptimizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BrentOptimizer::initializeClass, 1)))
            return NULL;
          return t_BrentOptimizer::wrap_Object(BrentOptimizer(((t_BrentOptimizer *) arg)->object.this$));
        }
        static PyObject *t_BrentOptimizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BrentOptimizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BrentOptimizer_of_(t_BrentOptimizer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BrentOptimizer_init_(t_BrentOptimizer *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              BrentOptimizer object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = BrentOptimizer(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::univariate::PY_TYPE(UnivariatePointValuePair);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::hipparchus::optim::ConvergenceChecker a2((jobject) NULL);
              PyTypeObject **p2;
              BrentOptimizer object((jobject) NULL);

              if (!parseArgs(args, "DDK", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
              {
                INT_CALL(object = BrentOptimizer(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::univariate::PY_TYPE(UnivariatePointValuePair);
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
        static PyObject *t_BrentOptimizer_get__parameters_(t_BrentOptimizer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/files/ccsds/section/Metadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *Segment::class$ = NULL;
          jmethodID *Segment::mids$ = NULL;
          bool Segment::live$ = false;

          jclass Segment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/Segment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_92756659d76972cf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/Metadata;Lorg/orekit/files/ccsds/section/Data;)V");
              mids$[mid_getData_ffd26f8870766019] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/section/Data;");
              mids$[mid_getMetadata_8ac99fc2374e56b2] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/section/Metadata;");
              mids$[mid_setMetadata_7aaeb8f4e7b7ad8d] = env->getMethodID(cls, "setMetadata", "(Lorg/orekit/files/ccsds/section/Metadata;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Segment::Segment(const ::org::orekit::files::ccsds::section::Metadata & a0, const ::org::orekit::files::ccsds::section::Data & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_92756659d76972cf, a0.this$, a1.this$)) {}

          ::org::orekit::files::ccsds::section::Data Segment::getData() const
          {
            return ::org::orekit::files::ccsds::section::Data(env->callObjectMethod(this$, mids$[mid_getData_ffd26f8870766019]));
          }

          ::org::orekit::files::ccsds::section::Metadata Segment::getMetadata() const
          {
            return ::org::orekit::files::ccsds::section::Metadata(env->callObjectMethod(this$, mids$[mid_getMetadata_8ac99fc2374e56b2]));
          }

          void Segment::setMetadata(const ::org::orekit::files::ccsds::section::Metadata & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMetadata_7aaeb8f4e7b7ad8d], a0.this$);
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
          static PyObject *t_Segment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Segment_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Segment_of_(t_Segment *self, PyObject *args);
          static int t_Segment_init_(t_Segment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Segment_getData(t_Segment *self);
          static PyObject *t_Segment_getMetadata(t_Segment *self);
          static PyObject *t_Segment_setMetadata(t_Segment *self, PyObject *arg);
          static PyObject *t_Segment_get__data(t_Segment *self, void *data);
          static PyObject *t_Segment_get__metadata(t_Segment *self, void *data);
          static int t_Segment_set__metadata(t_Segment *self, PyObject *arg, void *data);
          static PyObject *t_Segment_get__parameters_(t_Segment *self, void *data);
          static PyGetSetDef t_Segment__fields_[] = {
            DECLARE_GET_FIELD(t_Segment, data),
            DECLARE_GETSET_FIELD(t_Segment, metadata),
            DECLARE_GET_FIELD(t_Segment, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Segment__methods_[] = {
            DECLARE_METHOD(t_Segment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Segment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Segment, of_, METH_VARARGS),
            DECLARE_METHOD(t_Segment, getData, METH_NOARGS),
            DECLARE_METHOD(t_Segment, getMetadata, METH_NOARGS),
            DECLARE_METHOD(t_Segment, setMetadata, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Segment)[] = {
            { Py_tp_methods, t_Segment__methods_ },
            { Py_tp_init, (void *) t_Segment_init_ },
            { Py_tp_getset, t_Segment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Segment)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Segment, t_Segment, Segment);
          PyObject *t_Segment::wrap_Object(const Segment& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Segment::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Segment *self = (t_Segment *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_Segment::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Segment::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Segment *self = (t_Segment *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_Segment::install(PyObject *module)
          {
            installType(&PY_TYPE(Segment), &PY_TYPE_DEF(Segment), module, "Segment", 0);
          }

          void t_Segment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "class_", make_descriptor(Segment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "wrapfn_", make_descriptor(t_Segment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Segment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Segment::initializeClass, 1)))
              return NULL;
            return t_Segment::wrap_Object(Segment(((t_Segment *) arg)->object.this$));
          }
          static PyObject *t_Segment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Segment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Segment_of_(t_Segment *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Segment_init_(t_Segment *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::section::Metadata a0((jobject) NULL);
            ::org::orekit::files::ccsds::section::Data a1((jobject) NULL);
            Segment object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::section::Metadata::initializeClass, ::org::orekit::files::ccsds::section::Data::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Segment(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Segment_getData(t_Segment *self)
          {
            ::org::orekit::files::ccsds::section::Data result((jobject) NULL);
            OBJ_CALL(result = self->object.getData());
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::orekit::files::ccsds::section::t_Data::wrap_Object(result);
          }

          static PyObject *t_Segment_getMetadata(t_Segment *self)
          {
            ::org::orekit::files::ccsds::section::Metadata result((jobject) NULL);
            OBJ_CALL(result = self->object.getMetadata());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::ccsds::section::t_Metadata::wrap_Object(result);
          }

          static PyObject *t_Segment_setMetadata(t_Segment *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::section::Metadata a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::section::Metadata::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setMetadata(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMetadata", arg);
            return NULL;
          }
          static PyObject *t_Segment_get__parameters_(t_Segment *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Segment_get__data(t_Segment *self, void *data)
          {
            ::org::orekit::files::ccsds::section::Data value((jobject) NULL);
            OBJ_CALL(value = self->object.getData());
            return ::org::orekit::files::ccsds::section::t_Data::wrap_Object(value);
          }

          static PyObject *t_Segment_get__metadata(t_Segment *self, void *data)
          {
            ::org::orekit::files::ccsds::section::Metadata value((jobject) NULL);
            OBJ_CALL(value = self->object.getMetadata());
            return ::org::orekit::files::ccsds::section::t_Metadata::wrap_Object(value);
          }
          static int t_Segment_set__metadata(t_Segment *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::ccsds::section::Metadata value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::section::Metadata::initializeClass, &value))
              {
                INT_CALL(self->object.setMetadata(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "metadata", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmData.h"
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
                mids$[mid_init$_da1de1cf1f97305e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                mids$[mid_writeRelativeMetadataContent_6f7f8f4354c51157] = env->getMethodID(cls, "writeRelativeMetadataContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;)V");
                mids$[mid_writeSegmentContent_17bd99da1e106002] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CCSDS_CDM_VERS = env->getStaticDoubleField(cls, "CCSDS_CDM_VERS");
                KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmWriter::CdmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1) : ::org::orekit::files::ccsds::ndm::cdm::CdmMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_da1de1cf1f97305e, a0.this$, a1.this$)) {}

            void CdmWriter::writeRelativeMetadataContent(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, jdouble a1, const ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata & a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRelativeMetadataContent_6f7f8f4354c51157], a0.this$, a1, a2.this$);
            }

            void CdmWriter::writeSegmentContent(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, jdouble a1, const ::org::orekit::files::ccsds::section::Segment & a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeSegmentContent_17bd99da1e106002], a0.this$, a1, a2.this$);
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
#include "org/orekit/attitudes/TabulatedLofOffset.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/LOF.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *TabulatedLofOffset::class$ = NULL;
      jmethodID *TabulatedLofOffset::mids$ = NULL;
      bool TabulatedLofOffset::live$ = false;

      jclass TabulatedLofOffset::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/TabulatedLofOffset");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_6e02fb16dd7a6ff1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/LOF;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_2b1f5df11f43165a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/LOF;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_getAttitude_455b5c75f9292826] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_5341a8481841f90c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getMaxDate_aaa854c403487cf3] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_aaa854c403487cf3] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getTable_a6156df500549a58] = env->getMethodID(cls, "getTable", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TabulatedLofOffset::TabulatedLofOffset(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::LOF & a1, const ::java::util::List & a2, jint a3, const ::org::orekit::utils::AngularDerivativesFilter & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6e02fb16dd7a6ff1, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

      TabulatedLofOffset::TabulatedLofOffset(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::LOF & a1, const ::java::util::List & a2, jint a3, const ::org::orekit::utils::AngularDerivativesFilter & a4, const ::org::orekit::time::AbsoluteDate & a5, const ::org::orekit::time::AbsoluteDate & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2b1f5df11f43165a, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5.this$, a6.this$)) {}

      ::org::orekit::attitudes::FieldAttitude TabulatedLofOffset::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_455b5c75f9292826], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude TabulatedLofOffset::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_5341a8481841f90c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::time::AbsoluteDate TabulatedLofOffset::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate TabulatedLofOffset::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_aaa854c403487cf3]));
      }

      ::java::util::List TabulatedLofOffset::getTable() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTable_a6156df500549a58]));
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
      static PyObject *t_TabulatedLofOffset_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TabulatedLofOffset_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TabulatedLofOffset_init_(t_TabulatedLofOffset *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TabulatedLofOffset_getAttitude(t_TabulatedLofOffset *self, PyObject *args);
      static PyObject *t_TabulatedLofOffset_getMaxDate(t_TabulatedLofOffset *self);
      static PyObject *t_TabulatedLofOffset_getMinDate(t_TabulatedLofOffset *self);
      static PyObject *t_TabulatedLofOffset_getTable(t_TabulatedLofOffset *self);
      static PyObject *t_TabulatedLofOffset_get__maxDate(t_TabulatedLofOffset *self, void *data);
      static PyObject *t_TabulatedLofOffset_get__minDate(t_TabulatedLofOffset *self, void *data);
      static PyObject *t_TabulatedLofOffset_get__table(t_TabulatedLofOffset *self, void *data);
      static PyGetSetDef t_TabulatedLofOffset__fields_[] = {
        DECLARE_GET_FIELD(t_TabulatedLofOffset, maxDate),
        DECLARE_GET_FIELD(t_TabulatedLofOffset, minDate),
        DECLARE_GET_FIELD(t_TabulatedLofOffset, table),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TabulatedLofOffset__methods_[] = {
        DECLARE_METHOD(t_TabulatedLofOffset, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TabulatedLofOffset, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TabulatedLofOffset, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_TabulatedLofOffset, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_TabulatedLofOffset, getMinDate, METH_NOARGS),
        DECLARE_METHOD(t_TabulatedLofOffset, getTable, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TabulatedLofOffset)[] = {
        { Py_tp_methods, t_TabulatedLofOffset__methods_ },
        { Py_tp_init, (void *) t_TabulatedLofOffset_init_ },
        { Py_tp_getset, t_TabulatedLofOffset__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TabulatedLofOffset)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TabulatedLofOffset, t_TabulatedLofOffset, TabulatedLofOffset);

      void t_TabulatedLofOffset::install(PyObject *module)
      {
        installType(&PY_TYPE(TabulatedLofOffset), &PY_TYPE_DEF(TabulatedLofOffset), module, "TabulatedLofOffset", 0);
      }

      void t_TabulatedLofOffset::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedLofOffset), "class_", make_descriptor(TabulatedLofOffset::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedLofOffset), "wrapfn_", make_descriptor(t_TabulatedLofOffset::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedLofOffset), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TabulatedLofOffset_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TabulatedLofOffset::initializeClass, 1)))
          return NULL;
        return t_TabulatedLofOffset::wrap_Object(TabulatedLofOffset(((t_TabulatedLofOffset *) arg)->object.this$));
      }
      static PyObject *t_TabulatedLofOffset_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TabulatedLofOffset::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TabulatedLofOffset_init_(t_TabulatedLofOffset *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 5:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::LOF a1((jobject) NULL);
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            jint a3;
            ::org::orekit::utils::AngularDerivativesFilter a4((jobject) NULL);
            PyTypeObject **p4;
            TabulatedLofOffset object((jobject) NULL);

            if (!parseArgs(args, "kkKIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::LOF::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TabulatedLofOffset(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::LOF a1((jobject) NULL);
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            jint a3;
            ::org::orekit::utils::AngularDerivativesFilter a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a6((jobject) NULL);
            TabulatedLofOffset object((jobject) NULL);

            if (!parseArgs(args, "kkKIKkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::LOF::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a5, &a6))
            {
              INT_CALL(object = TabulatedLofOffset(a0, a1, a2, a3, a4, a5, a6));
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

      static PyObject *t_TabulatedLofOffset_getAttitude(t_TabulatedLofOffset *self, PyObject *args)
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

      static PyObject *t_TabulatedLofOffset_getMaxDate(t_TabulatedLofOffset *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TabulatedLofOffset_getMinDate(t_TabulatedLofOffset *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TabulatedLofOffset_getTable(t_TabulatedLofOffset *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getTable());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_TabulatedLofOffset_get__maxDate(t_TabulatedLofOffset *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TabulatedLofOffset_get__minDate(t_TabulatedLofOffset *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TabulatedLofOffset_get__table(t_TabulatedLofOffset *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getTable());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/GravityFieldFactory.h"
#include "org/orekit/forces/gravity/potential/LazyLoadedGravityFields.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/OceanTidesReader.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/PotentialCoefficientsReader.h"
#include "org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *GravityFieldFactory::class$ = NULL;
          jmethodID *GravityFieldFactory::mids$ = NULL;
          bool GravityFieldFactory::live$ = false;
          ::java::lang::String *GravityFieldFactory::EGM_FILENAME = NULL;
          ::java::lang::String *GravityFieldFactory::FES_CHAT_EPSILON_FILENAME = NULL;
          ::java::lang::String *GravityFieldFactory::FES_CNM_SNM_FILENAME = NULL;
          ::java::lang::String *GravityFieldFactory::FES_HF_FILENAME = NULL;
          ::java::lang::String *GravityFieldFactory::GRGS_FILENAME = NULL;
          ::java::lang::String *GravityFieldFactory::ICGEM_FILENAME = NULL;
          ::java::lang::String *GravityFieldFactory::SHM_FILENAME = NULL;

          jclass GravityFieldFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/GravityFieldFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addDefaultOceanTidesReaders_7ae3461a92a43152] = env->getStaticMethodID(cls, "addDefaultOceanTidesReaders", "()V");
              mids$[mid_addDefaultPotentialCoefficientsReaders_7ae3461a92a43152] = env->getStaticMethodID(cls, "addDefaultPotentialCoefficientsReaders", "()V");
              mids$[mid_addOceanTidesReader_a19ff095f5dde418] = env->getStaticMethodID(cls, "addOceanTidesReader", "(Lorg/orekit/forces/gravity/potential/OceanTidesReader;)V");
              mids$[mid_addPotentialCoefficientsReader_c27d2a7feed8b0f7] = env->getStaticMethodID(cls, "addPotentialCoefficientsReader", "(Lorg/orekit/forces/gravity/potential/PotentialCoefficientsReader;)V");
              mids$[mid_clearOceanTidesReaders_7ae3461a92a43152] = env->getStaticMethodID(cls, "clearOceanTidesReaders", "()V");
              mids$[mid_clearPotentialCoefficientsReaders_7ae3461a92a43152] = env->getStaticMethodID(cls, "clearPotentialCoefficientsReaders", "()V");
              mids$[mid_configureOceanLoadDeformationCoefficients_6f5119332010876e] = env->getStaticMethodID(cls, "configureOceanLoadDeformationCoefficients", "(Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;)V");
              mids$[mid_getConstantNormalizedProvider_f23a878f7162aa63] = env->getStaticMethodID(cls, "getConstantNormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getConstantUnnormalizedProvider_4ff4b36d038a4d30] = env->getStaticMethodID(cls, "getConstantUnnormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getGravityFields_4859dab0854ea5fb] = env->getStaticMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/LazyLoadedGravityFields;");
              mids$[mid_getNormalizedProvider_3aeac0fafd85c71f] = env->getStaticMethodID(cls, "getNormalizedProvider", "(Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getNormalizedProvider_cd3e5e7b86486169] = env->getStaticMethodID(cls, "getNormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getNormalizedProvider_4e92c72ca26ca4f1] = env->getStaticMethodID(cls, "getNormalizedProvider", "(DDLorg/orekit/forces/gravity/potential/TideSystem;[[D[[D)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getOceanLoadDeformationCoefficients_7fa94372497f9b33] = env->getStaticMethodID(cls, "getOceanLoadDeformationCoefficients", "()Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;");
              mids$[mid_getOceanTidesWaves_4a0f7788a82593c4] = env->getStaticMethodID(cls, "getOceanTidesWaves", "(II)Ljava/util/List;");
              mids$[mid_getUnnormalizationFactors_f76bfea7a1ff2879] = env->getStaticMethodID(cls, "getUnnormalizationFactors", "(II)[[D");
              mids$[mid_getUnnormalizedProvider_8888b7d9f03b3bbf] = env->getStaticMethodID(cls, "getUnnormalizedProvider", "(Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getUnnormalizedProvider_d3751d16c1e699b1] = env->getStaticMethodID(cls, "getUnnormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getUnnormalizedProvider_8d51d69981863dcd] = env->getStaticMethodID(cls, "getUnnormalizedProvider", "(DDLorg/orekit/forces/gravity/potential/TideSystem;[[D[[D)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_readGravityField_f25139d655c52fed] = env->getStaticMethodID(cls, "readGravityField", "(II)Lorg/orekit/forces/gravity/potential/PotentialCoefficientsReader;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              EGM_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "EGM_FILENAME", "Ljava/lang/String;"));
              FES_CHAT_EPSILON_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "FES_CHAT_EPSILON_FILENAME", "Ljava/lang/String;"));
              FES_CNM_SNM_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "FES_CNM_SNM_FILENAME", "Ljava/lang/String;"));
              FES_HF_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "FES_HF_FILENAME", "Ljava/lang/String;"));
              GRGS_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "GRGS_FILENAME", "Ljava/lang/String;"));
              ICGEM_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "ICGEM_FILENAME", "Ljava/lang/String;"));
              SHM_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "SHM_FILENAME", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void GravityFieldFactory::addDefaultOceanTidesReaders()
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_addDefaultOceanTidesReaders_7ae3461a92a43152]);
          }

          void GravityFieldFactory::addDefaultPotentialCoefficientsReaders()
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_addDefaultPotentialCoefficientsReaders_7ae3461a92a43152]);
          }

          void GravityFieldFactory::addOceanTidesReader(const ::org::orekit::forces::gravity::potential::OceanTidesReader & a0)
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_addOceanTidesReader_a19ff095f5dde418], a0.this$);
          }

          void GravityFieldFactory::addPotentialCoefficientsReader(const ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader & a0)
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_addPotentialCoefficientsReader_c27d2a7feed8b0f7], a0.this$);
          }

          void GravityFieldFactory::clearOceanTidesReaders()
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_clearOceanTidesReaders_7ae3461a92a43152]);
          }

          void GravityFieldFactory::clearPotentialCoefficientsReaders()
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_clearPotentialCoefficientsReaders_7ae3461a92a43152]);
          }

          void GravityFieldFactory::configureOceanLoadDeformationCoefficients(const ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients & a0)
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_configureOceanLoadDeformationCoefficients_6f5119332010876e], a0.this$);
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFieldFactory::getConstantNormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getConstantNormalizedProvider_f23a878f7162aa63], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFieldFactory::getConstantUnnormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getConstantUnnormalizedProvider_4ff4b36d038a4d30], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields GravityFieldFactory::getGravityFields()
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields(env->callStaticObjectMethod(cls, mids$[mid_getGravityFields_4859dab0854ea5fb]));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFieldFactory::getNormalizedProvider(const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getNormalizedProvider_3aeac0fafd85c71f], a0.this$));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFieldFactory::getNormalizedProvider(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getNormalizedProvider_cd3e5e7b86486169], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFieldFactory::getNormalizedProvider(jdouble a0, jdouble a1, const ::org::orekit::forces::gravity::potential::TideSystem & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getNormalizedProvider_4e92c72ca26ca4f1], a0, a1, a2.this$, a3.this$, a4.this$));
          }

          ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients GravityFieldFactory::getOceanLoadDeformationCoefficients()
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients(env->callStaticObjectMethod(cls, mids$[mid_getOceanLoadDeformationCoefficients_7fa94372497f9b33]));
          }

          ::java::util::List GravityFieldFactory::getOceanTidesWaves(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_getOceanTidesWaves_4a0f7788a82593c4], a0, a1));
          }

          JArray< JArray< jdouble > > GravityFieldFactory::getUnnormalizationFactors(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_getUnnormalizationFactors_f76bfea7a1ff2879], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFieldFactory::getUnnormalizedProvider(const ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getUnnormalizedProvider_8888b7d9f03b3bbf], a0.this$));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFieldFactory::getUnnormalizedProvider(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getUnnormalizedProvider_d3751d16c1e699b1], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFieldFactory::getUnnormalizedProvider(jdouble a0, jdouble a1, const ::org::orekit::forces::gravity::potential::TideSystem & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getUnnormalizedProvider_8d51d69981863dcd], a0, a1, a2.this$, a3.this$, a4.this$));
          }

          ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader GravityFieldFactory::readGravityField(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->callStaticObjectMethod(cls, mids$[mid_readGravityField_f25139d655c52fed], a0, a1));
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
          static PyObject *t_GravityFieldFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFieldFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFieldFactory_addDefaultOceanTidesReaders(PyTypeObject *type);
          static PyObject *t_GravityFieldFactory_addDefaultPotentialCoefficientsReaders(PyTypeObject *type);
          static PyObject *t_GravityFieldFactory_addOceanTidesReader(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFieldFactory_addPotentialCoefficientsReader(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFieldFactory_clearOceanTidesReaders(PyTypeObject *type);
          static PyObject *t_GravityFieldFactory_clearPotentialCoefficientsReaders(PyTypeObject *type);
          static PyObject *t_GravityFieldFactory_configureOceanLoadDeformationCoefficients(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFieldFactory_getConstantNormalizedProvider(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_getConstantUnnormalizedProvider(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_getGravityFields(PyTypeObject *type);
          static PyObject *t_GravityFieldFactory_getNormalizedProvider(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_getOceanLoadDeformationCoefficients(PyTypeObject *type);
          static PyObject *t_GravityFieldFactory_getOceanTidesWaves(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_getUnnormalizationFactors(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_getUnnormalizedProvider(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_readGravityField(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_get__gravityFields(t_GravityFieldFactory *self, void *data);
          static PyObject *t_GravityFieldFactory_get__oceanLoadDeformationCoefficients(t_GravityFieldFactory *self, void *data);
          static PyGetSetDef t_GravityFieldFactory__fields_[] = {
            DECLARE_GET_FIELD(t_GravityFieldFactory, gravityFields),
            DECLARE_GET_FIELD(t_GravityFieldFactory, oceanLoadDeformationCoefficients),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GravityFieldFactory__methods_[] = {
            DECLARE_METHOD(t_GravityFieldFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, addDefaultOceanTidesReaders, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, addDefaultPotentialCoefficientsReaders, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, addOceanTidesReader, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, addPotentialCoefficientsReader, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, clearOceanTidesReaders, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, clearPotentialCoefficientsReaders, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, configureOceanLoadDeformationCoefficients, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getConstantNormalizedProvider, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getConstantUnnormalizedProvider, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getGravityFields, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getNormalizedProvider, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getOceanLoadDeformationCoefficients, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getOceanTidesWaves, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getUnnormalizationFactors, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getUnnormalizedProvider, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, readGravityField, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GravityFieldFactory)[] = {
            { Py_tp_methods, t_GravityFieldFactory__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_GravityFieldFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GravityFieldFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GravityFieldFactory, t_GravityFieldFactory, GravityFieldFactory);

          void t_GravityFieldFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(GravityFieldFactory), &PY_TYPE_DEF(GravityFieldFactory), module, "GravityFieldFactory", 0);
          }

          void t_GravityFieldFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "class_", make_descriptor(GravityFieldFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "wrapfn_", make_descriptor(t_GravityFieldFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "boxfn_", make_descriptor(boxObject));
            env->getClass(GravityFieldFactory::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "EGM_FILENAME", make_descriptor(j2p(*GravityFieldFactory::EGM_FILENAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "FES_CHAT_EPSILON_FILENAME", make_descriptor(j2p(*GravityFieldFactory::FES_CHAT_EPSILON_FILENAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "FES_CNM_SNM_FILENAME", make_descriptor(j2p(*GravityFieldFactory::FES_CNM_SNM_FILENAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "FES_HF_FILENAME", make_descriptor(j2p(*GravityFieldFactory::FES_HF_FILENAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "GRGS_FILENAME", make_descriptor(j2p(*GravityFieldFactory::GRGS_FILENAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "ICGEM_FILENAME", make_descriptor(j2p(*GravityFieldFactory::ICGEM_FILENAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "SHM_FILENAME", make_descriptor(j2p(*GravityFieldFactory::SHM_FILENAME)));
          }

          static PyObject *t_GravityFieldFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GravityFieldFactory::initializeClass, 1)))
              return NULL;
            return t_GravityFieldFactory::wrap_Object(GravityFieldFactory(((t_GravityFieldFactory *) arg)->object.this$));
          }
          static PyObject *t_GravityFieldFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GravityFieldFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GravityFieldFactory_addDefaultOceanTidesReaders(PyTypeObject *type)
          {
            OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::addDefaultOceanTidesReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_GravityFieldFactory_addDefaultPotentialCoefficientsReaders(PyTypeObject *type)
          {
            OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::addDefaultPotentialCoefficientsReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_GravityFieldFactory_addOceanTidesReader(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::forces::gravity::potential::OceanTidesReader a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::forces::gravity::potential::OceanTidesReader::initializeClass, &a0))
            {
              OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::addOceanTidesReader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError(type, "addOceanTidesReader", arg);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_addPotentialCoefficientsReader(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader::initializeClass, &a0))
            {
              OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::addPotentialCoefficientsReader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError(type, "addPotentialCoefficientsReader", arg);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_clearOceanTidesReaders(PyTypeObject *type)
          {
            OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::clearOceanTidesReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_GravityFieldFactory_clearPotentialCoefficientsReaders(PyTypeObject *type)
          {
            OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::clearPotentialCoefficientsReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_GravityFieldFactory_configureOceanLoadDeformationCoefficients(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients::initializeClass, &a0, &p0, ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::parameters_))
            {
              OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::configureOceanLoadDeformationCoefficients(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError(type, "configureOceanLoadDeformationCoefficients", arg);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_getConstantNormalizedProvider(PyTypeObject *type, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "IIk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getConstantNormalizedProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getConstantNormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_getConstantUnnormalizedProvider(PyTypeObject *type, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "IIk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getConstantUnnormalizedProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getConstantUnnormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_getGravityFields(PyTypeObject *type)
          {
            ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getGravityFields());
            return ::org::orekit::forces::gravity::potential::t_LazyLoadedGravityFields::wrap_Object(result);
          }

          static PyObject *t_GravityFieldFactory_getNormalizedProvider(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a0((jobject) NULL);
                ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getNormalizedProvider(a0));
                  return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jint a0;
                jint a1;
                ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

                if (!parseArgs(args, "II", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getNormalizedProvider(a0, a1));
                  return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::forces::gravity::potential::TideSystem a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< JArray< jdouble > > a3((jobject) NULL);
                JArray< JArray< jdouble > > a4((jobject) NULL);
                ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

                if (!parseArgs(args, "DDK[[D[[D", ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::forces::gravity::potential::t_TideSystem::parameters_, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getNormalizedProvider(a0, a1, a2, a3, a4));
                  return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "getNormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_getOceanLoadDeformationCoefficients(PyTypeObject *type)
          {
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getOceanLoadDeformationCoefficients());
            return ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::wrap_Object(result);
          }

          static PyObject *t_GravityFieldFactory_getOceanTidesWaves(PyTypeObject *type, PyObject *args)
          {
            jint a0;
            jint a1;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getOceanTidesWaves(a0, a1));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::gravity::potential::PY_TYPE(OceanTidesWave));
            }

            PyErr_SetArgsError(type, "getOceanTidesWaves", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_getUnnormalizationFactors(PyTypeObject *type, PyObject *args)
          {
            jint a0;
            jint a1;
            JArray< JArray< jdouble > > result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getUnnormalizationFactors(a0, a1));
              return JArray<jobject>(result.this$).wrap(NULL);
            }

            PyErr_SetArgsError(type, "getUnnormalizationFactors", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_getUnnormalizedProvider(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider a0((jobject) NULL);
                ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getUnnormalizedProvider(a0));
                  return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jint a0;
                jint a1;
                ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

                if (!parseArgs(args, "II", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getUnnormalizedProvider(a0, a1));
                  return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::forces::gravity::potential::TideSystem a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< JArray< jdouble > > a3((jobject) NULL);
                JArray< JArray< jdouble > > a4((jobject) NULL);
                ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

                if (!parseArgs(args, "DDK[[D[[D", ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::forces::gravity::potential::t_TideSystem::parameters_, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getUnnormalizedProvider(a0, a1, a2, a3, a4));
                  return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "getUnnormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_readGravityField(PyTypeObject *type, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::readGravityField(a0, a1));
              return ::org::orekit::forces::gravity::potential::t_PotentialCoefficientsReader::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "readGravityField", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_get__gravityFields(t_GravityFieldFactory *self, void *data)
          {
            ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields value((jobject) NULL);
            OBJ_CALL(value = self->object.getGravityFields());
            return ::org::orekit::forces::gravity::potential::t_LazyLoadedGravityFields::wrap_Object(value);
          }

          static PyObject *t_GravityFieldFactory_get__oceanLoadDeformationCoefficients(t_GravityFieldFactory *self, void *data)
          {
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients value((jobject) NULL);
            OBJ_CALL(value = self->object.getOceanLoadDeformationCoefficients());
            return ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IntConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IntConsumer::class$ = NULL;
            jmethodID *ParseToken$IntConsumer::mids$ = NULL;
            bool ParseToken$IntConsumer::live$ = false;

            jclass ParseToken$IntConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IntConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_0a2a1ac2721c0336] = env->getMethodID(cls, "accept", "(I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IntConsumer::accept(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_0a2a1ac2721c0336], a0);
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
            static PyObject *t_ParseToken$IntConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IntConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IntConsumer_accept(t_ParseToken$IntConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$IntConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IntConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IntConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IntConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IntConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IntConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IntConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IntConsumer, t_ParseToken$IntConsumer, ParseToken$IntConsumer);

            void t_ParseToken$IntConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IntConsumer), &PY_TYPE_DEF(ParseToken$IntConsumer), module, "ParseToken$IntConsumer", 0);
            }

            void t_ParseToken$IntConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IntConsumer), "class_", make_descriptor(ParseToken$IntConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IntConsumer), "wrapfn_", make_descriptor(t_ParseToken$IntConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IntConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IntConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IntConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IntConsumer::wrap_Object(ParseToken$IntConsumer(((t_ParseToken$IntConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IntConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IntConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IntConsumer_accept(t_ParseToken$IntConsumer *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
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
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *Sphere2D::class$ = NULL;
          jmethodID *Sphere2D::mids$ = NULL;
          bool Sphere2D::live$ = false;
          jdouble Sphere2D::SMALLEST_TOLERANCE = (jdouble) 0;

          jclass Sphere2D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/Sphere2D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_checkTolerance_77e0f9a1f260e2e5] = env->getStaticMethodID(cls, "checkTolerance", "(D)V");
              mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getInstance_990d4b8b64c5346f] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/geometry/spherical/twod/Sphere2D;");
              mids$[mid_getSubSpace_5912521fb294e3a6] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/spherical/oned/Sphere1D;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              SMALLEST_TOLERANCE = env->getStaticDoubleField(cls, "SMALLEST_TOLERANCE");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void Sphere2D::checkTolerance(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_checkTolerance_77e0f9a1f260e2e5], a0);
          }

          jint Sphere2D::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
          }

          Sphere2D Sphere2D::getInstance()
          {
            jclass cls = env->getClass(initializeClass);
            return Sphere2D(env->callStaticObjectMethod(cls, mids$[mid_getInstance_990d4b8b64c5346f]));
          }

          ::org::hipparchus::geometry::spherical::oned::Sphere1D Sphere2D::getSubSpace() const
          {
            return ::org::hipparchus::geometry::spherical::oned::Sphere1D(env->callObjectMethod(this$, mids$[mid_getSubSpace_5912521fb294e3a6]));
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
        namespace twod {
          static PyObject *t_Sphere2D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere2D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere2D_checkTolerance(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere2D_getDimension(t_Sphere2D *self);
          static PyObject *t_Sphere2D_getInstance(PyTypeObject *type);
          static PyObject *t_Sphere2D_getSubSpace(t_Sphere2D *self);
          static PyObject *t_Sphere2D_get__dimension(t_Sphere2D *self, void *data);
          static PyObject *t_Sphere2D_get__instance(t_Sphere2D *self, void *data);
          static PyObject *t_Sphere2D_get__subSpace(t_Sphere2D *self, void *data);
          static PyGetSetDef t_Sphere2D__fields_[] = {
            DECLARE_GET_FIELD(t_Sphere2D, dimension),
            DECLARE_GET_FIELD(t_Sphere2D, instance),
            DECLARE_GET_FIELD(t_Sphere2D, subSpace),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Sphere2D__methods_[] = {
            DECLARE_METHOD(t_Sphere2D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere2D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere2D, checkTolerance, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere2D, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_Sphere2D, getInstance, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_Sphere2D, getSubSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Sphere2D)[] = {
            { Py_tp_methods, t_Sphere2D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Sphere2D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Sphere2D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Sphere2D, t_Sphere2D, Sphere2D);

          void t_Sphere2D::install(PyObject *module)
          {
            installType(&PY_TYPE(Sphere2D), &PY_TYPE_DEF(Sphere2D), module, "Sphere2D", 0);
          }

          void t_Sphere2D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere2D), "class_", make_descriptor(Sphere2D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere2D), "wrapfn_", make_descriptor(t_Sphere2D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere2D), "boxfn_", make_descriptor(boxObject));
            env->getClass(Sphere2D::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere2D), "SMALLEST_TOLERANCE", make_descriptor(Sphere2D::SMALLEST_TOLERANCE));
          }

          static PyObject *t_Sphere2D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Sphere2D::initializeClass, 1)))
              return NULL;
            return t_Sphere2D::wrap_Object(Sphere2D(((t_Sphere2D *) arg)->object.this$));
          }
          static PyObject *t_Sphere2D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Sphere2D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Sphere2D_checkTolerance(PyTypeObject *type, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(::org::hipparchus::geometry::spherical::twod::Sphere2D::checkTolerance(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError(type, "checkTolerance", arg);
            return NULL;
          }

          static PyObject *t_Sphere2D_getDimension(t_Sphere2D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Sphere2D_getInstance(PyTypeObject *type)
          {
            Sphere2D result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::spherical::twod::Sphere2D::getInstance());
            return t_Sphere2D::wrap_Object(result);
          }

          static PyObject *t_Sphere2D_getSubSpace(t_Sphere2D *self)
          {
            ::org::hipparchus::geometry::spherical::oned::Sphere1D result((jobject) NULL);
            OBJ_CALL(result = self->object.getSubSpace());
            return ::org::hipparchus::geometry::spherical::oned::t_Sphere1D::wrap_Object(result);
          }

          static PyObject *t_Sphere2D_get__dimension(t_Sphere2D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Sphere2D_get__instance(t_Sphere2D *self, void *data)
          {
            Sphere2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getInstance());
            return t_Sphere2D::wrap_Object(value);
          }

          static PyObject *t_Sphere2D_get__subSpace(t_Sphere2D *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::oned::Sphere1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getSubSpace());
            return ::org::hipparchus::geometry::spherical::oned::t_Sphere1D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/SimplexSolver.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
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
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_18b1ce6f78e2ded3] = env->getMethodID(cls, "<init>", "(DI)V");
            mids$[mid_init$_4de8786c851b2321] = env->getMethodID(cls, "<init>", "(DID)V");
            mids$[mid_doOptimize_f3368328259a5468] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");
            mids$[mid_optimize_02ecb87ce66bcfc1] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
            mids$[mid_parseOptimizationData_a5cd04a701a45f77] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
            mids$[mid_doIteration_8350434a9a7c6a82] = env->getMethodID(cls, "doIteration", "(Lorg/hipparchus/optim/linear/SimplexTableau;)V");
            mids$[mid_solvePhase1_8350434a9a7c6a82] = env->getMethodID(cls, "solvePhase1", "(Lorg/hipparchus/optim/linear/SimplexTableau;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SimplexSolver::SimplexSolver() : ::org::hipparchus::optim::linear::LinearOptimizer(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        SimplexSolver::SimplexSolver(jdouble a0) : ::org::hipparchus::optim::linear::LinearOptimizer(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        SimplexSolver::SimplexSolver(jdouble a0, jint a1) : ::org::hipparchus::optim::linear::LinearOptimizer(env->newObject(initializeClass, &mids$, mid_init$_18b1ce6f78e2ded3, a0, a1)) {}

        SimplexSolver::SimplexSolver(jdouble a0, jint a1, jdouble a2) : ::org::hipparchus::optim::linear::LinearOptimizer(env->newObject(initializeClass, &mids$, mid_init$_4de8786c851b2321, a0, a1, a2)) {}

        ::org::hipparchus::optim::PointValuePair SimplexSolver::doOptimize() const
        {
          return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_doOptimize_f3368328259a5468]));
        }

        ::org::hipparchus::optim::PointValuePair SimplexSolver::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
        {
          return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_02ecb87ce66bcfc1], a0.this$));
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
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/util/Blendable.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealMatrix::class$ = NULL;
      jmethodID *RealMatrix::mids$ = NULL;
      bool RealMatrix::live$ = false;

      jclass RealMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_e00cd33aedcc5bd0] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_addToEntry_78e41e7b5124a628] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_blendArithmeticallyWith_7a6fbf98ec206240] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/hipparchus/linear/RealMatrix;D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_copy_7116bbecdd8ceb21] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_copySubMatrix_9a9a0c9e43221c5a] = env->getMethodID(cls, "copySubMatrix", "([I[I[[D)V");
          mids$[mid_copySubMatrix_8f6f9022196ddb1c] = env->getMethodID(cls, "copySubMatrix", "(IIII[[D)V");
          mids$[mid_createMatrix_4225756160ad1bc1] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getColumn_eb9cceadce1b2217] = env->getMethodID(cls, "getColumn", "(I)[D");
          mids$[mid_getColumnMatrix_3a4716f77215ee99] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getColumnVector_2cafd1b18558ed5f] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getData_43de1192439efa92] = env->getMethodID(cls, "getData", "()[[D");
          mids$[mid_getEntry_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getFrobeniusNorm_456d9a2f64d6b28d] = env->getMethodID(cls, "getFrobeniusNorm", "()D");
          mids$[mid_getNorm1_456d9a2f64d6b28d] = env->getMethodID(cls, "getNorm1", "()D");
          mids$[mid_getNormInfty_456d9a2f64d6b28d] = env->getMethodID(cls, "getNormInfty", "()D");
          mids$[mid_getRow_eb9cceadce1b2217] = env->getMethodID(cls, "getRow", "(I)[D");
          mids$[mid_getRowMatrix_3a4716f77215ee99] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getRowVector_2cafd1b18558ed5f] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getSubMatrix_6bdc980f8daf4737] = env->getMethodID(cls, "getSubMatrix", "([I[I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getSubMatrix_d4cd53a0b7898ff0] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getTrace_456d9a2f64d6b28d] = env->getMethodID(cls, "getTrace", "()D");
          mids$[mid_map_c303749dfaf56a6d] = env->getMethodID(cls, "map", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_mapToSelf_c303749dfaf56a6d] = env->getMethodID(cls, "mapToSelf", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiply_e00cd33aedcc5bd0] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiplyEntry_78e41e7b5124a628] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_multiplyTransposed_e00cd33aedcc5bd0] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_operate_4b742fe429c22ba8] = env->getMethodID(cls, "operate", "([D)[D");
          mids$[mid_operate_a3e626dfa1abd779] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_power_3a4716f77215ee99] = env->getMethodID(cls, "power", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_preMultiply_4b742fe429c22ba8] = env->getMethodID(cls, "preMultiply", "([D)[D");
          mids$[mid_preMultiply_a3e626dfa1abd779] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_preMultiply_e00cd33aedcc5bd0] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_scalarAdd_2461b653ab91779b] = env->getMethodID(cls, "scalarAdd", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_scalarMultiply_2461b653ab91779b] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_setColumn_7d4f41c65056f174] = env->getMethodID(cls, "setColumn", "(I[D)V");
          mids$[mid_setColumnMatrix_8f1af6d535d298ec] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setColumnVector_dcd0f7fda5e9451c] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setEntry_78e41e7b5124a628] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_setRow_7d4f41c65056f174] = env->getMethodID(cls, "setRow", "(I[D)V");
          mids$[mid_setRowMatrix_8f1af6d535d298ec] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setRowVector_dcd0f7fda5e9451c] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setSubMatrix_a741cdd381e94792] = env->getMethodID(cls, "setSubMatrix", "([[DII)V");
          mids$[mid_subtract_e00cd33aedcc5bd0] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_transpose_7116bbecdd8ceb21] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_transposeMultiply_e00cd33aedcc5bd0] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_walkInColumnOrder_340ddcf983c0c22e] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInColumnOrder_354ebbe7c685c961] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInColumnOrder_56223f2e9b79c5ad] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInColumnOrder_62551289056beecd] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInOptimizedOrder_340ddcf983c0c22e] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_354ebbe7c685c961] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_56223f2e9b79c5ad] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInOptimizedOrder_62551289056beecd] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_340ddcf983c0c22e] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInRowOrder_354ebbe7c685c961] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInRowOrder_56223f2e9b79c5ad] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_62551289056beecd] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RealMatrix RealMatrix::add(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_add_e00cd33aedcc5bd0], a0.this$));
      }

      void RealMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_78e41e7b5124a628], a0, a1, a2);
      }

      RealMatrix RealMatrix::blendArithmeticallyWith(const RealMatrix & a0, jdouble a1) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_7a6fbf98ec206240], a0.this$, a1));
      }

      RealMatrix RealMatrix::copy() const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_copy_7116bbecdd8ceb21]));
      }

      void RealMatrix::copySubMatrix(const JArray< jint > & a0, const JArray< jint > & a1, const JArray< JArray< jdouble > > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_9a9a0c9e43221c5a], a0.this$, a1.this$, a2.this$);
      }

      void RealMatrix::copySubMatrix(jint a0, jint a1, jint a2, jint a3, const JArray< JArray< jdouble > > & a4) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_8f6f9022196ddb1c], a0, a1, a2, a3, a4.this$);
      }

      RealMatrix RealMatrix::createMatrix(jint a0, jint a1) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_4225756160ad1bc1], a0, a1));
      }

      JArray< jdouble > RealMatrix::getColumn(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getColumn_eb9cceadce1b2217], a0));
      }

      RealMatrix RealMatrix::getColumnMatrix(jint a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_3a4716f77215ee99], a0));
      }

      ::org::hipparchus::linear::RealVector RealMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_2cafd1b18558ed5f], a0));
      }

      JArray< JArray< jdouble > > RealMatrix::getData() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_43de1192439efa92]));
      }

      jdouble RealMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_a84e4ee1da3f1ab8], a0, a1);
      }

      jdouble RealMatrix::getFrobeniusNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFrobeniusNorm_456d9a2f64d6b28d]);
      }

      jdouble RealMatrix::getNorm1() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm1_456d9a2f64d6b28d]);
      }

      jdouble RealMatrix::getNormInfty() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormInfty_456d9a2f64d6b28d]);
      }

      JArray< jdouble > RealMatrix::getRow(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRow_eb9cceadce1b2217], a0));
      }

      RealMatrix RealMatrix::getRowMatrix(jint a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_3a4716f77215ee99], a0));
      }

      ::org::hipparchus::linear::RealVector RealMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getRowVector_2cafd1b18558ed5f], a0));
      }

      RealMatrix RealMatrix::getSubMatrix(const JArray< jint > & a0, const JArray< jint > & a1) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_6bdc980f8daf4737], a0.this$, a1.this$));
      }

      RealMatrix RealMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_d4cd53a0b7898ff0], a0, a1, a2, a3));
      }

      jdouble RealMatrix::getTrace() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTrace_456d9a2f64d6b28d]);
      }

      RealMatrix RealMatrix::map(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_map_c303749dfaf56a6d], a0.this$));
      }

      RealMatrix RealMatrix::mapToSelf(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_mapToSelf_c303749dfaf56a6d], a0.this$));
      }

      RealMatrix RealMatrix::multiply(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_e00cd33aedcc5bd0], a0.this$));
      }

      void RealMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_78e41e7b5124a628], a0, a1, a2);
      }

      RealMatrix RealMatrix::multiplyTransposed(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_e00cd33aedcc5bd0], a0.this$));
      }

      JArray< jdouble > RealMatrix::operate(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_operate_4b742fe429c22ba8], a0.this$));
      }

      ::org::hipparchus::linear::RealVector RealMatrix::operate(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_operate_a3e626dfa1abd779], a0.this$));
      }

      RealMatrix RealMatrix::power(jint a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_power_3a4716f77215ee99], a0));
      }

      JArray< jdouble > RealMatrix::preMultiply(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_preMultiply_4b742fe429c22ba8], a0.this$));
      }

      ::org::hipparchus::linear::RealVector RealMatrix::preMultiply(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_preMultiply_a3e626dfa1abd779], a0.this$));
      }

      RealMatrix RealMatrix::preMultiply(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_preMultiply_e00cd33aedcc5bd0], a0.this$));
      }

      RealMatrix RealMatrix::scalarAdd(jdouble a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_2461b653ab91779b], a0));
      }

      RealMatrix RealMatrix::scalarMultiply(jdouble a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_2461b653ab91779b], a0));
      }

      void RealMatrix::setColumn(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_7d4f41c65056f174], a0, a1.this$);
      }

      void RealMatrix::setColumnMatrix(jint a0, const RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_8f1af6d535d298ec], a0, a1.this$);
      }

      void RealMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_dcd0f7fda5e9451c], a0, a1.this$);
      }

      void RealMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_78e41e7b5124a628], a0, a1, a2);
      }

      void RealMatrix::setRow(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_7d4f41c65056f174], a0, a1.this$);
      }

      void RealMatrix::setRowMatrix(jint a0, const RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_8f1af6d535d298ec], a0, a1.this$);
      }

      void RealMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_dcd0f7fda5e9451c], a0, a1.this$);
      }

      void RealMatrix::setSubMatrix(const JArray< JArray< jdouble > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_a741cdd381e94792], a0.this$, a1, a2);
      }

      RealMatrix RealMatrix::subtract(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_e00cd33aedcc5bd0], a0.this$));
      }

      RealMatrix RealMatrix::transpose() const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_transpose_7116bbecdd8ceb21]));
      }

      RealMatrix RealMatrix::transposeMultiply(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_e00cd33aedcc5bd0], a0.this$));
      }

      jdouble RealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_340ddcf983c0c22e], a0.this$);
      }

      jdouble RealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_354ebbe7c685c961], a0.this$);
      }

      jdouble RealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_56223f2e9b79c5ad], a0.this$, a1, a2, a3, a4);
      }

      jdouble RealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_62551289056beecd], a0.this$, a1, a2, a3, a4);
      }

      jdouble RealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_340ddcf983c0c22e], a0.this$);
      }

      jdouble RealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_354ebbe7c685c961], a0.this$);
      }

      jdouble RealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_56223f2e9b79c5ad], a0.this$, a1, a2, a3, a4);
      }

      jdouble RealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_62551289056beecd], a0.this$, a1, a2, a3, a4);
      }

      jdouble RealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_340ddcf983c0c22e], a0.this$);
      }

      jdouble RealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_354ebbe7c685c961], a0.this$);
      }

      jdouble RealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_56223f2e9b79c5ad], a0.this$, a1, a2, a3, a4);
      }

      jdouble RealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_62551289056beecd], a0.this$, a1, a2, a3, a4);
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
      static PyObject *t_RealMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrix_add(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_addToEntry(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_blendArithmeticallyWith(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_copy(t_RealMatrix *self);
      static PyObject *t_RealMatrix_copySubMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_createMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_getColumn(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getColumnMatrix(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getColumnVector(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getData(t_RealMatrix *self);
      static PyObject *t_RealMatrix_getEntry(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_getFrobeniusNorm(t_RealMatrix *self);
      static PyObject *t_RealMatrix_getNorm1(t_RealMatrix *self);
      static PyObject *t_RealMatrix_getNormInfty(t_RealMatrix *self);
      static PyObject *t_RealMatrix_getRow(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getRowMatrix(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getRowVector(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getSubMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_getTrace(t_RealMatrix *self);
      static PyObject *t_RealMatrix_map(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_mapToSelf(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_multiply(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_multiplyEntry(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_multiplyTransposed(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_operate(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_power(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_preMultiply(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_scalarAdd(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_scalarMultiply(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_setColumn(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setColumnMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setColumnVector(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setEntry(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setRow(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setRowMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setRowVector(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setSubMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_subtract(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_transpose(t_RealMatrix *self);
      static PyObject *t_RealMatrix_transposeMultiply(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_walkInColumnOrder(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_walkInOptimizedOrder(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_walkInRowOrder(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_get__data(t_RealMatrix *self, void *data);
      static PyObject *t_RealMatrix_get__frobeniusNorm(t_RealMatrix *self, void *data);
      static PyObject *t_RealMatrix_get__norm1(t_RealMatrix *self, void *data);
      static PyObject *t_RealMatrix_get__normInfty(t_RealMatrix *self, void *data);
      static PyObject *t_RealMatrix_get__trace(t_RealMatrix *self, void *data);
      static PyGetSetDef t_RealMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_RealMatrix, data),
        DECLARE_GET_FIELD(t_RealMatrix, frobeniusNorm),
        DECLARE_GET_FIELD(t_RealMatrix, norm1),
        DECLARE_GET_FIELD(t_RealMatrix, normInfty),
        DECLARE_GET_FIELD(t_RealMatrix, trace),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealMatrix__methods_[] = {
        DECLARE_METHOD(t_RealMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrix, add, METH_O),
        DECLARE_METHOD(t_RealMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, blendArithmeticallyWith, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, copy, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, copySubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, getColumn, METH_O),
        DECLARE_METHOD(t_RealMatrix, getColumnMatrix, METH_O),
        DECLARE_METHOD(t_RealMatrix, getColumnVector, METH_O),
        DECLARE_METHOD(t_RealMatrix, getData, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, getFrobeniusNorm, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, getNorm1, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, getNormInfty, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, getRow, METH_O),
        DECLARE_METHOD(t_RealMatrix, getRowMatrix, METH_O),
        DECLARE_METHOD(t_RealMatrix, getRowVector, METH_O),
        DECLARE_METHOD(t_RealMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, getTrace, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, map, METH_O),
        DECLARE_METHOD(t_RealMatrix, mapToSelf, METH_O),
        DECLARE_METHOD(t_RealMatrix, multiply, METH_O),
        DECLARE_METHOD(t_RealMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, multiplyTransposed, METH_O),
        DECLARE_METHOD(t_RealMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, power, METH_O),
        DECLARE_METHOD(t_RealMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, scalarAdd, METH_O),
        DECLARE_METHOD(t_RealMatrix, scalarMultiply, METH_O),
        DECLARE_METHOD(t_RealMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, subtract, METH_O),
        DECLARE_METHOD(t_RealMatrix, transpose, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, transposeMultiply, METH_O),
        DECLARE_METHOD(t_RealMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealMatrix)[] = {
        { Py_tp_methods, t_RealMatrix__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_RealMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AnyMatrix),
        NULL
      };

      DEFINE_TYPE(RealMatrix, t_RealMatrix, RealMatrix);

      void t_RealMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(RealMatrix), &PY_TYPE_DEF(RealMatrix), module, "RealMatrix", 0);
      }

      void t_RealMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrix), "class_", make_descriptor(RealMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrix), "wrapfn_", make_descriptor(t_RealMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealMatrix::initializeClass, 1)))
          return NULL;
        return t_RealMatrix::wrap_Object(RealMatrix(((t_RealMatrix *) arg)->object.this$));
      }
      static PyObject *t_RealMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealMatrix_add(t_RealMatrix *self, PyObject *arg)
      {
        RealMatrix a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_addToEntry(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addToEntry", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_blendArithmeticallyWith(t_RealMatrix *self, PyObject *args)
      {
        RealMatrix a0((jobject) NULL);
        jdouble a1;
        RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "kD", RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_copy(t_RealMatrix *self)
      {
        RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RealMatrix_copySubMatrix(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            JArray< JArray< jdouble > > a2((jobject) NULL);

            if (!parseArgs(args, "[I[I[[D", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          break;
         case 5:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            JArray< JArray< jdouble > > a4((jobject) NULL);

            if (!parseArgs(args, "IIII[[D", &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySubMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_createMatrix(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "createMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_getColumn(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumn(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getColumn", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getColumnMatrix(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnMatrix", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getColumnVector(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnVector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnVector", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getData(t_RealMatrix *self)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_RealMatrix_getEntry(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_getFrobeniusNorm(t_RealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getFrobeniusNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrix_getNorm1(t_RealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm1());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrix_getNormInfty(t_RealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNormInfty());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrix_getRow(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getRow", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getRowMatrix(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowMatrix", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getRowVector(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowVector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowVector", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getSubMatrix(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1));
              return t_RealMatrix::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
              return t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getSubMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_getTrace(t_RealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTrace());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrix_map(t_RealMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.map(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "map", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_mapToSelf(t_RealMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.mapToSelf(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_multiply(t_RealMatrix *self, PyObject *arg)
      {
        RealMatrix a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_multiplyEntry(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "multiplyEntry", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_multiplyTransposed(t_RealMatrix *self, PyObject *arg)
      {
        RealMatrix a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.multiplyTransposed(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "multiplyTransposed", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_operate(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "operate", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_power(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "power", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_preMultiply(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            RealMatrix a0((jobject) NULL);
            RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "preMultiply", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_scalarAdd(t_RealMatrix *self, PyObject *arg)
      {
        jdouble a0;
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarAdd", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_scalarMultiply(t_RealMatrix *self, PyObject *arg)
      {
        jdouble a0;
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_setColumn(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setColumn(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumn", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setColumnMatrix(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        RealMatrix a1((jobject) NULL);

        if (!parseArgs(args, "Ik", RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setColumnVector(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setColumnVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnVector", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setEntry(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setRow(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRow", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setRowMatrix(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        RealMatrix a1((jobject) NULL);

        if (!parseArgs(args, "Ik", RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setRowMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setRowVector(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setRowVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowVector", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setSubMatrix(t_RealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[DII", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_subtract(t_RealMatrix *self, PyObject *arg)
      {
        RealMatrix a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_transpose(t_RealMatrix *self)
      {
        RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.transpose());
        return t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RealMatrix_transposeMultiply(t_RealMatrix *self, PyObject *arg)
      {
        RealMatrix a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.transposeMultiply(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "transposeMultiply", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_walkInColumnOrder(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
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
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
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
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInColumnOrder", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_walkInOptimizedOrder(t_RealMatrix *self, PyObject *args)
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

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_walkInRowOrder(t_RealMatrix *self, PyObject *args)
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

        PyErr_SetArgsError((PyObject *) self, "walkInRowOrder", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_get__data(t_RealMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_RealMatrix_get__frobeniusNorm(t_RealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFrobeniusNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealMatrix_get__norm1(t_RealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm1());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealMatrix_get__normInfty(t_RealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormInfty());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealMatrix_get__trace(t_RealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTrace());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/PythonMessageWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/files/ccsds/utils/generation/MessageWriter.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *PythonMessageWriter::class$ = NULL;
            jmethodID *PythonMessageWriter::mids$ = NULL;
            bool PythonMessageWriter::live$ = false;

            jclass PythonMessageWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/PythonMessageWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getFormatVersionKey_0090f7797e403f43] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getRoot_0090f7797e403f43] = env->getMethodID(cls, "getRoot", "()Ljava/lang/String;");
                mids$[mid_getVersion_456d9a2f64d6b28d] = env->getMethodID(cls, "getVersion", "()D");
                mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_writeFooter_fb36c2e4ae059ab9] = env->getMethodID(cls, "writeFooter", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
                mids$[mid_writeHeader_31a4dd6b0c8635b6] = env->getMethodID(cls, "writeHeader", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Header;)V");
                mids$[mid_writeSegment_412320e9d7a2723d] = env->getMethodID(cls, "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonMessageWriter::PythonMessageWriter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            void PythonMessageWriter::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
            }

            jlong PythonMessageWriter::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
            }

            void PythonMessageWriter::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
            static PyObject *t_PythonMessageWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonMessageWriter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonMessageWriter_of_(t_PythonMessageWriter *self, PyObject *args);
            static int t_PythonMessageWriter_init_(t_PythonMessageWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonMessageWriter_finalize(t_PythonMessageWriter *self);
            static PyObject *t_PythonMessageWriter_pythonExtension(t_PythonMessageWriter *self, PyObject *args);
            static jobject JNICALL t_PythonMessageWriter_getFormatVersionKey0(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonMessageWriter_getRoot1(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonMessageWriter_getVersion2(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonMessageWriter_pythonDecRef3(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonMessageWriter_writeFooter4(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonMessageWriter_writeHeader5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static void JNICALL t_PythonMessageWriter_writeSegment6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static PyObject *t_PythonMessageWriter_get__self(t_PythonMessageWriter *self, void *data);
            static PyObject *t_PythonMessageWriter_get__parameters_(t_PythonMessageWriter *self, void *data);
            static PyGetSetDef t_PythonMessageWriter__fields_[] = {
              DECLARE_GET_FIELD(t_PythonMessageWriter, self),
              DECLARE_GET_FIELD(t_PythonMessageWriter, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonMessageWriter__methods_[] = {
              DECLARE_METHOD(t_PythonMessageWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonMessageWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonMessageWriter, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonMessageWriter, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonMessageWriter, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonMessageWriter)[] = {
              { Py_tp_methods, t_PythonMessageWriter__methods_ },
              { Py_tp_init, (void *) t_PythonMessageWriter_init_ },
              { Py_tp_getset, t_PythonMessageWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonMessageWriter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonMessageWriter, t_PythonMessageWriter, PythonMessageWriter);
            PyObject *t_PythonMessageWriter::wrap_Object(const PythonMessageWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonMessageWriter::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonMessageWriter *self = (t_PythonMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_PythonMessageWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonMessageWriter::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonMessageWriter *self = (t_PythonMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_PythonMessageWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonMessageWriter), &PY_TYPE_DEF(PythonMessageWriter), module, "PythonMessageWriter", 1);
            }

            void t_PythonMessageWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageWriter), "class_", make_descriptor(PythonMessageWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageWriter), "wrapfn_", make_descriptor(t_PythonMessageWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageWriter), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonMessageWriter::initializeClass);
              JNINativeMethod methods[] = {
                { "getFormatVersionKey", "()Ljava/lang/String;", (void *) t_PythonMessageWriter_getFormatVersionKey0 },
                { "getRoot", "()Ljava/lang/String;", (void *) t_PythonMessageWriter_getRoot1 },
                { "getVersion", "()D", (void *) t_PythonMessageWriter_getVersion2 },
                { "pythonDecRef", "()V", (void *) t_PythonMessageWriter_pythonDecRef3 },
                { "writeFooter", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V", (void *) t_PythonMessageWriter_writeFooter4 },
                { "writeHeader", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Header;)V", (void *) t_PythonMessageWriter_writeHeader5 },
                { "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Segment;)V", (void *) t_PythonMessageWriter_writeSegment6 },
              };
              env->registerNatives(cls, methods, 7);
            }

            static PyObject *t_PythonMessageWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonMessageWriter::initializeClass, 1)))
                return NULL;
              return t_PythonMessageWriter::wrap_Object(PythonMessageWriter(((t_PythonMessageWriter *) arg)->object.this$));
            }
            static PyObject *t_PythonMessageWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonMessageWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonMessageWriter_of_(t_PythonMessageWriter *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonMessageWriter_init_(t_PythonMessageWriter *self, PyObject *args, PyObject *kwds)
            {
              PythonMessageWriter object((jobject) NULL);

              INT_CALL(object = PythonMessageWriter());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonMessageWriter_finalize(t_PythonMessageWriter *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonMessageWriter_pythonExtension(t_PythonMessageWriter *self, PyObject *args)
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

            static jobject JNICALL t_PythonMessageWriter_getFormatVersionKey0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getFormatVersionKey", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getFormatVersionKey", result);
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

            static jobject JNICALL t_PythonMessageWriter_getRoot1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getRoot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getRoot", result);
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

            static jdouble JNICALL t_PythonMessageWriter_getVersion2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getVersion", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getVersion", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static void JNICALL t_PythonMessageWriter_pythonDecRef3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonMessageWriter_writeFooter4(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::generation::t_Generator::wrap_Object(::org::orekit::files::ccsds::utils::generation::Generator(a0));
              PyObject *result = PyObject_CallMethod(obj, "writeFooter", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonMessageWriter_writeHeader5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::generation::t_Generator::wrap_Object(::org::orekit::files::ccsds::utils::generation::Generator(a0));
              PyObject *o1 = ::org::orekit::files::ccsds::section::t_Header::wrap_Object(::org::orekit::files::ccsds::section::Header(a1));
              PyObject *result = PyObject_CallMethod(obj, "writeHeader", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonMessageWriter_writeSegment6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::generation::t_Generator::wrap_Object(::org::orekit::files::ccsds::utils::generation::Generator(a0));
              PyObject *o1 = ::org::orekit::files::ccsds::section::t_Segment::wrap_Object(::org::orekit::files::ccsds::section::Segment(a1));
              PyObject *result = PyObject_CallMethod(obj, "writeSegment", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonMessageWriter_get__self(t_PythonMessageWriter *self, void *data)
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
            static PyObject *t_PythonMessageWriter_get__parameters_(t_PythonMessageWriter *self, void *data)
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
#include "org/orekit/files/general/PythonAttitudeEphemerisSegment.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonAttitudeEphemerisSegment::class$ = NULL;
        jmethodID *PythonAttitudeEphemerisSegment::mids$ = NULL;
        bool PythonAttitudeEphemerisSegment::live$ = false;

        jclass PythonAttitudeEphemerisSegment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonAttitudeEphemerisSegment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getAngularCoordinates_a6156df500549a58] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");
            mids$[mid_getAttitudeProvider_05a2839e8fecde67] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
            mids$[mid_getAvailableDerivatives_c14c1c09874639c8] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
            mids$[mid_getInterpolationMethod_0090f7797e403f43] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
            mids$[mid_getInterpolationSamples_f2f64475e4580546] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getReferenceFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getStart_aaa854c403487cf3] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_aaa854c403487cf3] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAttitudeEphemerisSegment::PythonAttitudeEphemerisSegment() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonAttitudeEphemerisSegment::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonAttitudeEphemerisSegment::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonAttitudeEphemerisSegment::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
        static PyObject *t_PythonAttitudeEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAttitudeEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAttitudeEphemerisSegment_init_(t_PythonAttitudeEphemerisSegment *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAttitudeEphemerisSegment_finalize(t_PythonAttitudeEphemerisSegment *self);
        static PyObject *t_PythonAttitudeEphemerisSegment_pythonExtension(t_PythonAttitudeEphemerisSegment *self, PyObject *args);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getAngularCoordinates0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getAttitudeProvider1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getAvailableDerivatives2(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getInterpolationMethod3(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonAttitudeEphemerisSegment_getInterpolationSamples4(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getReferenceFrame5(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getStart6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getStop7(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAttitudeEphemerisSegment_pythonDecRef8(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAttitudeEphemerisSegment_get__self(t_PythonAttitudeEphemerisSegment *self, void *data);
        static PyGetSetDef t_PythonAttitudeEphemerisSegment__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAttitudeEphemerisSegment, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAttitudeEphemerisSegment__methods_[] = {
          DECLARE_METHOD(t_PythonAttitudeEphemerisSegment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisSegment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisSegment, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisSegment, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeEphemerisSegment)[] = {
          { Py_tp_methods, t_PythonAttitudeEphemerisSegment__methods_ },
          { Py_tp_init, (void *) t_PythonAttitudeEphemerisSegment_init_ },
          { Py_tp_getset, t_PythonAttitudeEphemerisSegment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAttitudeEphemerisSegment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAttitudeEphemerisSegment, t_PythonAttitudeEphemerisSegment, PythonAttitudeEphemerisSegment);

        void t_PythonAttitudeEphemerisSegment::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAttitudeEphemerisSegment), &PY_TYPE_DEF(PythonAttitudeEphemerisSegment), module, "PythonAttitudeEphemerisSegment", 1);
        }

        void t_PythonAttitudeEphemerisSegment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisSegment), "class_", make_descriptor(PythonAttitudeEphemerisSegment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisSegment), "wrapfn_", make_descriptor(t_PythonAttitudeEphemerisSegment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisSegment), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAttitudeEphemerisSegment::initializeClass);
          JNINativeMethod methods[] = {
            { "getAngularCoordinates", "()Ljava/util/List;", (void *) t_PythonAttitudeEphemerisSegment_getAngularCoordinates0 },
            { "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;", (void *) t_PythonAttitudeEphemerisSegment_getAttitudeProvider1 },
            { "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;", (void *) t_PythonAttitudeEphemerisSegment_getAvailableDerivatives2 },
            { "getInterpolationMethod", "()Ljava/lang/String;", (void *) t_PythonAttitudeEphemerisSegment_getInterpolationMethod3 },
            { "getInterpolationSamples", "()I", (void *) t_PythonAttitudeEphemerisSegment_getInterpolationSamples4 },
            { "getReferenceFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonAttitudeEphemerisSegment_getReferenceFrame5 },
            { "getStart", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonAttitudeEphemerisSegment_getStart6 },
            { "getStop", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonAttitudeEphemerisSegment_getStop7 },
            { "pythonDecRef", "()V", (void *) t_PythonAttitudeEphemerisSegment_pythonDecRef8 },
          };
          env->registerNatives(cls, methods, 9);
        }

        static PyObject *t_PythonAttitudeEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAttitudeEphemerisSegment::initializeClass, 1)))
            return NULL;
          return t_PythonAttitudeEphemerisSegment::wrap_Object(PythonAttitudeEphemerisSegment(((t_PythonAttitudeEphemerisSegment *) arg)->object.this$));
        }
        static PyObject *t_PythonAttitudeEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAttitudeEphemerisSegment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAttitudeEphemerisSegment_init_(t_PythonAttitudeEphemerisSegment *self, PyObject *args, PyObject *kwds)
        {
          PythonAttitudeEphemerisSegment object((jobject) NULL);

          INT_CALL(object = PythonAttitudeEphemerisSegment());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAttitudeEphemerisSegment_finalize(t_PythonAttitudeEphemerisSegment *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAttitudeEphemerisSegment_pythonExtension(t_PythonAttitudeEphemerisSegment *self, PyObject *args)
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

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getAngularCoordinates0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getAngularCoordinates", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getAngularCoordinates", result);
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

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getAttitudeProvider1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getAttitudeProvider", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::attitudes::BoundedAttitudeProvider::initializeClass, &value))
          {
            throwTypeError("getAttitudeProvider", result);
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

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getAvailableDerivatives2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getAvailableDerivatives", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &value))
          {
            throwTypeError("getAvailableDerivatives", result);
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

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getInterpolationMethod3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::lang::String value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getInterpolationMethod", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "s", &value))
          {
            throwTypeError("getInterpolationMethod", result);
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

        static jint JNICALL t_PythonAttitudeEphemerisSegment_getInterpolationSamples4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getInterpolationSamples", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getInterpolationSamples", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getReferenceFrame5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::frames::Frame value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getReferenceFrame", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
          {
            throwTypeError("getReferenceFrame", result);
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

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getStart6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getStart", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getStart", result);
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

        static jobject JNICALL t_PythonAttitudeEphemerisSegment_getStop7(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getStop", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getStop", result);
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

        static void JNICALL t_PythonAttitudeEphemerisSegment_pythonDecRef8(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAttitudeEphemerisSegment::mids$[PythonAttitudeEphemerisSegment::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAttitudeEphemerisSegment_get__self(t_PythonAttitudeEphemerisSegment *self, void *data)
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
#include "org/orekit/estimation/iod/IodGauss.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace iod {

        ::java::lang::Class *IodGauss::class$ = NULL;
        jmethodID *IodGauss::mids$ = NULL;
        bool IodGauss::live$ = false;

        jclass IodGauss::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/iod/IodGauss");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_estimate_a883c21ba904ff29] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_304f33cbf7512082] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_4415d9ec26338e78] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IodGauss::IodGauss(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        ::org::orekit::orbits::Orbit IodGauss::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularAzEl & a1, const ::org::orekit::estimation::measurements::AngularAzEl & a2, const ::org::orekit::estimation::measurements::AngularAzEl & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_a883c21ba904ff29], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodGauss::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularRaDec & a1, const ::org::orekit::estimation::measurements::AngularRaDec & a2, const ::org::orekit::estimation::measurements::AngularRaDec & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_304f33cbf7512082], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodGauss::estimate(const ::org::orekit::frames::Frame & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, const ::org::orekit::time::AbsoluteDate & a5, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a6, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a7, const ::org::orekit::time::AbsoluteDate & a8, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a9) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_4415d9ec26338e78], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$));
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
      namespace iod {
        static PyObject *t_IodGauss_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IodGauss_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IodGauss_init_(t_IodGauss *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IodGauss_estimate(t_IodGauss *self, PyObject *args);

        static PyMethodDef t_IodGauss__methods_[] = {
          DECLARE_METHOD(t_IodGauss, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGauss, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGauss, estimate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IodGauss)[] = {
          { Py_tp_methods, t_IodGauss__methods_ },
          { Py_tp_init, (void *) t_IodGauss_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IodGauss)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IodGauss, t_IodGauss, IodGauss);

        void t_IodGauss::install(PyObject *module)
        {
          installType(&PY_TYPE(IodGauss), &PY_TYPE_DEF(IodGauss), module, "IodGauss", 0);
        }

        void t_IodGauss::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGauss), "class_", make_descriptor(IodGauss::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGauss), "wrapfn_", make_descriptor(t_IodGauss::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGauss), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IodGauss_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IodGauss::initializeClass, 1)))
            return NULL;
          return t_IodGauss::wrap_Object(IodGauss(((t_IodGauss *) arg)->object.this$));
        }
        static PyObject *t_IodGauss_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IodGauss::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IodGauss_init_(t_IodGauss *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          IodGauss object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = IodGauss(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IodGauss_estimate(t_IodGauss *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularAzEl a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularAzEl a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularAzEl a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularRaDec a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularRaDec a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularRaDec a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 10:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a6((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a7((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a8((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a9((jobject) NULL);
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkkkk", ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/FieldStopOnDecreasing.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldStopOnDecreasing::class$ = NULL;
          jmethodID *FieldStopOnDecreasing::mids$ = NULL;
          bool FieldStopOnDecreasing::live$ = false;

          jclass FieldStopOnDecreasing::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldStopOnDecreasing");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_9bc9ae10f590e312] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldStopOnDecreasing::FieldStopOnDecreasing() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          ::org::hipparchus::ode::events::Action FieldStopOnDecreasing::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_9bc9ae10f590e312], a0.this$, a1.this$, a2));
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
      namespace events {
        namespace handlers {
          static PyObject *t_FieldStopOnDecreasing_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnDecreasing_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnDecreasing_of_(t_FieldStopOnDecreasing *self, PyObject *args);
          static int t_FieldStopOnDecreasing_init_(t_FieldStopOnDecreasing *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldStopOnDecreasing_eventOccurred(t_FieldStopOnDecreasing *self, PyObject *args);
          static PyObject *t_FieldStopOnDecreasing_get__parameters_(t_FieldStopOnDecreasing *self, void *data);
          static PyGetSetDef t_FieldStopOnDecreasing__fields_[] = {
            DECLARE_GET_FIELD(t_FieldStopOnDecreasing, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldStopOnDecreasing__methods_[] = {
            DECLARE_METHOD(t_FieldStopOnDecreasing, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnDecreasing, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnDecreasing, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldStopOnDecreasing, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldStopOnDecreasing)[] = {
            { Py_tp_methods, t_FieldStopOnDecreasing__methods_ },
            { Py_tp_init, (void *) t_FieldStopOnDecreasing_init_ },
            { Py_tp_getset, t_FieldStopOnDecreasing__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldStopOnDecreasing)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldStopOnDecreasing, t_FieldStopOnDecreasing, FieldStopOnDecreasing);
          PyObject *t_FieldStopOnDecreasing::wrap_Object(const FieldStopOnDecreasing& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnDecreasing::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnDecreasing *self = (t_FieldStopOnDecreasing *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldStopOnDecreasing::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnDecreasing::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnDecreasing *self = (t_FieldStopOnDecreasing *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldStopOnDecreasing::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldStopOnDecreasing), &PY_TYPE_DEF(FieldStopOnDecreasing), module, "FieldStopOnDecreasing", 0);
          }

          void t_FieldStopOnDecreasing::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnDecreasing), "class_", make_descriptor(FieldStopOnDecreasing::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnDecreasing), "wrapfn_", make_descriptor(t_FieldStopOnDecreasing::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnDecreasing), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldStopOnDecreasing_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldStopOnDecreasing::initializeClass, 1)))
              return NULL;
            return t_FieldStopOnDecreasing::wrap_Object(FieldStopOnDecreasing(((t_FieldStopOnDecreasing *) arg)->object.this$));
          }
          static PyObject *t_FieldStopOnDecreasing_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldStopOnDecreasing::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldStopOnDecreasing_of_(t_FieldStopOnDecreasing *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldStopOnDecreasing_init_(t_FieldStopOnDecreasing *self, PyObject *args, PyObject *kwds)
          {
            FieldStopOnDecreasing object((jobject) NULL);

            INT_CALL(object = FieldStopOnDecreasing());
            self->object = object;

            return 0;
          }

          static PyObject *t_FieldStopOnDecreasing_eventOccurred(t_FieldStopOnDecreasing *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::events::FieldEventDetector a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }
          static PyObject *t_FieldStopOnDecreasing_get__parameters_(t_FieldStopOnDecreasing *self, void *data)
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
#include "org/orekit/files/ilrs/CPF$CPFCoordinate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPF$CPFCoordinate::class$ = NULL;
        jmethodID *CPF$CPFCoordinate::mids$ = NULL;
        bool CPF$CPFCoordinate::live$ = false;

        jclass CPF$CPFCoordinate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPF$CPFCoordinate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3914e545b9566de4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;I)V");
            mids$[mid_init$_3390f6f213a62927] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;I)V");
            mids$[mid_getLeap_f2f64475e4580546] = env->getMethodID(cls, "getLeap", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPF$CPFCoordinate::CPF$CPFCoordinate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jint a2) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_3914e545b9566de4, a0.this$, a1.this$, a2)) {}

        CPF$CPFCoordinate::CPF$CPFCoordinate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jint a3) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_3390f6f213a62927, a0.this$, a1.this$, a2.this$, a3)) {}

        jint CPF$CPFCoordinate::getLeap() const
        {
          return env->callIntMethod(this$, mids$[mid_getLeap_f2f64475e4580546]);
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
        static PyObject *t_CPF$CPFCoordinate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPF$CPFCoordinate_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPF$CPFCoordinate_init_(t_CPF$CPFCoordinate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPF$CPFCoordinate_getLeap(t_CPF$CPFCoordinate *self);
        static PyObject *t_CPF$CPFCoordinate_get__leap(t_CPF$CPFCoordinate *self, void *data);
        static PyGetSetDef t_CPF$CPFCoordinate__fields_[] = {
          DECLARE_GET_FIELD(t_CPF$CPFCoordinate, leap),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CPF$CPFCoordinate__methods_[] = {
          DECLARE_METHOD(t_CPF$CPFCoordinate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF$CPFCoordinate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF$CPFCoordinate, getLeap, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPF$CPFCoordinate)[] = {
          { Py_tp_methods, t_CPF$CPFCoordinate__methods_ },
          { Py_tp_init, (void *) t_CPF$CPFCoordinate_init_ },
          { Py_tp_getset, t_CPF$CPFCoordinate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPF$CPFCoordinate)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::TimeStampedPVCoordinates),
          NULL
        };

        DEFINE_TYPE(CPF$CPFCoordinate, t_CPF$CPFCoordinate, CPF$CPFCoordinate);

        void t_CPF$CPFCoordinate::install(PyObject *module)
        {
          installType(&PY_TYPE(CPF$CPFCoordinate), &PY_TYPE_DEF(CPF$CPFCoordinate), module, "CPF$CPFCoordinate", 0);
        }

        void t_CPF$CPFCoordinate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF$CPFCoordinate), "class_", make_descriptor(CPF$CPFCoordinate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF$CPFCoordinate), "wrapfn_", make_descriptor(t_CPF$CPFCoordinate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF$CPFCoordinate), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CPF$CPFCoordinate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPF$CPFCoordinate::initializeClass, 1)))
            return NULL;
          return t_CPF$CPFCoordinate::wrap_Object(CPF$CPFCoordinate(((t_CPF$CPFCoordinate *) arg)->object.this$));
        }
        static PyObject *t_CPF$CPFCoordinate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPF$CPFCoordinate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPF$CPFCoordinate_init_(t_CPF$CPFCoordinate *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              jint a2;
              CPF$CPFCoordinate object((jobject) NULL);

              if (!parseArgs(args, "kkI", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = CPF$CPFCoordinate(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              jint a3;
              CPF$CPFCoordinate object((jobject) NULL);

              if (!parseArgs(args, "kkkI", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = CPF$CPFCoordinate(a0, a1, a2, a3));
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

        static PyObject *t_CPF$CPFCoordinate_getLeap(t_CPF$CPFCoordinate *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getLeap());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CPF$CPFCoordinate_get__leap(t_CPF$CPFCoordinate *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getLeap());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonFrames.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/time/UT1Scale.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/FactoryManagedFrame.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/frames/Predefined.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/VersionedITRF.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/frames/EOPHistory.h"
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
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_buildUncachedITRF_d03d9d841d2585cb] = env->getMethodID(cls, "buildUncachedITRF", "(Lorg/orekit/time/UT1Scale;)Lorg/orekit/frames/Frame;");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getCIRF_7a43fbb334938fb6] = env->getMethodID(cls, "getCIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEME2000_238e1a1a48ce9b9b] = env->getMethodID(cls, "getEME2000", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEOPHistory_7544a283da003d74] = env->getMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getEcliptic_951ab15b750ec500] = env->getMethodID(cls, "getEcliptic", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/Frame;");
          mids$[mid_getFrame_1d8cb946d8760b58] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/frames/Predefined;)Lorg/orekit/frames/Frame;");
          mids$[mid_getGCRF_c8fe21bcdac65bf6] = env->getMethodID(cls, "getGCRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGTOD_e0bf161d9af50163] = env->getMethodID(cls, "getGTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getGTOD_7a43fbb334938fb6] = env->getMethodID(cls, "getGTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getICRF_c8fe21bcdac65bf6] = env->getMethodID(cls, "getICRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getITRF_7a43fbb334938fb6] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getITRF_604147dabe0b6681] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/VersionedITRF;");
          mids$[mid_getITRFEquinox_7a43fbb334938fb6] = env->getMethodID(cls, "getITRFEquinox", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_f41281a5e34c0279] = env->getMethodID(cls, "getMOD", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_e0bf161d9af50163] = env->getMethodID(cls, "getMOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getPZ9011_7a43fbb334938fb6] = env->getMethodID(cls, "getPZ9011", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTEME_238e1a1a48ce9b9b] = env->getMethodID(cls, "getTEME", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_f41281a5e34c0279] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_7a43fbb334938fb6] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_e0bf161d9af50163] = env->getMethodID(cls, "getTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_7a43fbb334938fb6] = env->getMethodID(cls, "getTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getVeis1950_238e1a1a48ce9b9b] = env->getMethodID(cls, "getVeis1950", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFrames::PythonFrames() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonFrames::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonFrames::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonFrames::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
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
#include "org/orekit/estimation/sequential/KalmanEstimator.h"
#include "java/lang/Iterable.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *KalmanEstimator::class$ = NULL;
        jmethodID *KalmanEstimator::mids$ = NULL;
        bool KalmanEstimator::live$ = false;

        jclass KalmanEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/KalmanEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_estimationStep_637ed96db7decac9] = env->getMethodID(cls, "estimationStep", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)[Lorg/orekit/propagation/Propagator;");
            mids$[mid_processMeasurements_0f0906d0fce818f4] = env->getMethodID(cls, "processMeasurements", "(Ljava/lang/Iterable;)[Lorg/orekit/propagation/Propagator;");
            mids$[mid_setObserver_fe6775fb802fa129] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_getKalmanEstimation_69a0a486b7aaf0c0] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< ::org::orekit::propagation::Propagator > KalmanEstimator::estimationStep(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0) const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_estimationStep_637ed96db7decac9], a0.this$));
        }

        JArray< ::org::orekit::propagation::Propagator > KalmanEstimator::processMeasurements(const ::java::lang::Iterable & a0) const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_processMeasurements_0f0906d0fce818f4], a0.this$));
        }

        void KalmanEstimator::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_fe6775fb802fa129], a0.this$);
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
        static PyObject *t_KalmanEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimator_estimationStep(t_KalmanEstimator *self, PyObject *arg);
        static PyObject *t_KalmanEstimator_processMeasurements(t_KalmanEstimator *self, PyObject *arg);
        static PyObject *t_KalmanEstimator_setObserver(t_KalmanEstimator *self, PyObject *arg);
        static int t_KalmanEstimator_set__observer(t_KalmanEstimator *self, PyObject *arg, void *data);
        static PyGetSetDef t_KalmanEstimator__fields_[] = {
          DECLARE_SET_FIELD(t_KalmanEstimator, observer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KalmanEstimator__methods_[] = {
          DECLARE_METHOD(t_KalmanEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimator, estimationStep, METH_O),
          DECLARE_METHOD(t_KalmanEstimator, processMeasurements, METH_O),
          DECLARE_METHOD(t_KalmanEstimator, setObserver, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanEstimator)[] = {
          { Py_tp_methods, t_KalmanEstimator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_KalmanEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractKalmanEstimator),
          NULL
        };

        DEFINE_TYPE(KalmanEstimator, t_KalmanEstimator, KalmanEstimator);

        void t_KalmanEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanEstimator), &PY_TYPE_DEF(KalmanEstimator), module, "KalmanEstimator", 0);
        }

        void t_KalmanEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimator), "class_", make_descriptor(KalmanEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimator), "wrapfn_", make_descriptor(t_KalmanEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanEstimator::initializeClass, 1)))
            return NULL;
          return t_KalmanEstimator::wrap_Object(KalmanEstimator(((t_KalmanEstimator *) arg)->object.this$));
        }
        static PyObject *t_KalmanEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_KalmanEstimator_estimationStep(t_KalmanEstimator *self, PyObject *arg)
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

        static PyObject *t_KalmanEstimator_processMeasurements(t_KalmanEstimator *self, PyObject *arg)
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

        static PyObject *t_KalmanEstimator_setObserver(t_KalmanEstimator *self, PyObject *arg)
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

        static int t_KalmanEstimator_set__observer(t_KalmanEstimator *self, PyObject *arg, void *data)
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
#include "org/hipparchus/optim/linear/LinearConstraint.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/linear/Relationship.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *LinearConstraint::class$ = NULL;
        jmethodID *LinearConstraint::mids$ = NULL;
        bool LinearConstraint::live$ = false;

        jclass LinearConstraint::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/LinearConstraint");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3e9b496656853d8d] = env->getMethodID(cls, "<init>", "([DLorg/hipparchus/optim/linear/Relationship;D)V");
            mids$[mid_init$_fa4e1f5c5df59b6d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/optim/linear/Relationship;D)V");
            mids$[mid_init$_a41a126968e503cd] = env->getMethodID(cls, "<init>", "([DDLorg/hipparchus/optim/linear/Relationship;[DD)V");
            mids$[mid_init$_dbedba0022453ff9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;DLorg/hipparchus/optim/linear/Relationship;Lorg/hipparchus/linear/RealVector;D)V");
            mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getCoefficients_6d9adf1d5b463928] = env->getMethodID(cls, "getCoefficients", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getRelationship_435d5956567f4d61] = env->getMethodID(cls, "getRelationship", "()Lorg/hipparchus/optim/linear/Relationship;");
            mids$[mid_getValue_456d9a2f64d6b28d] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LinearConstraint::LinearConstraint(const JArray< jdouble > & a0, const ::org::hipparchus::optim::linear::Relationship & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3e9b496656853d8d, a0.this$, a1.this$, a2)) {}

        LinearConstraint::LinearConstraint(const ::org::hipparchus::linear::RealVector & a0, const ::org::hipparchus::optim::linear::Relationship & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fa4e1f5c5df59b6d, a0.this$, a1.this$, a2)) {}

        LinearConstraint::LinearConstraint(const JArray< jdouble > & a0, jdouble a1, const ::org::hipparchus::optim::linear::Relationship & a2, const JArray< jdouble > & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a41a126968e503cd, a0.this$, a1, a2.this$, a3.this$, a4)) {}

        LinearConstraint::LinearConstraint(const ::org::hipparchus::linear::RealVector & a0, jdouble a1, const ::org::hipparchus::optim::linear::Relationship & a2, const ::org::hipparchus::linear::RealVector & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dbedba0022453ff9, a0.this$, a1, a2.this$, a3.this$, a4)) {}

        jboolean LinearConstraint::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
        }

        ::org::hipparchus::linear::RealVector LinearConstraint::getCoefficients() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getCoefficients_6d9adf1d5b463928]));
        }

        ::org::hipparchus::optim::linear::Relationship LinearConstraint::getRelationship() const
        {
          return ::org::hipparchus::optim::linear::Relationship(env->callObjectMethod(this$, mids$[mid_getRelationship_435d5956567f4d61]));
        }

        jdouble LinearConstraint::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_456d9a2f64d6b28d]);
        }

        jint LinearConstraint::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
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
        static PyObject *t_LinearConstraint_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LinearConstraint_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LinearConstraint_init_(t_LinearConstraint *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LinearConstraint_equals(t_LinearConstraint *self, PyObject *args);
        static PyObject *t_LinearConstraint_getCoefficients(t_LinearConstraint *self);
        static PyObject *t_LinearConstraint_getRelationship(t_LinearConstraint *self);
        static PyObject *t_LinearConstraint_getValue(t_LinearConstraint *self);
        static PyObject *t_LinearConstraint_hashCode(t_LinearConstraint *self, PyObject *args);
        static PyObject *t_LinearConstraint_get__coefficients(t_LinearConstraint *self, void *data);
        static PyObject *t_LinearConstraint_get__relationship(t_LinearConstraint *self, void *data);
        static PyObject *t_LinearConstraint_get__value(t_LinearConstraint *self, void *data);
        static PyGetSetDef t_LinearConstraint__fields_[] = {
          DECLARE_GET_FIELD(t_LinearConstraint, coefficients),
          DECLARE_GET_FIELD(t_LinearConstraint, relationship),
          DECLARE_GET_FIELD(t_LinearConstraint, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LinearConstraint__methods_[] = {
          DECLARE_METHOD(t_LinearConstraint, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearConstraint, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearConstraint, equals, METH_VARARGS),
          DECLARE_METHOD(t_LinearConstraint, getCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_LinearConstraint, getRelationship, METH_NOARGS),
          DECLARE_METHOD(t_LinearConstraint, getValue, METH_NOARGS),
          DECLARE_METHOD(t_LinearConstraint, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LinearConstraint)[] = {
          { Py_tp_methods, t_LinearConstraint__methods_ },
          { Py_tp_init, (void *) t_LinearConstraint_init_ },
          { Py_tp_getset, t_LinearConstraint__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LinearConstraint)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LinearConstraint, t_LinearConstraint, LinearConstraint);

        void t_LinearConstraint::install(PyObject *module)
        {
          installType(&PY_TYPE(LinearConstraint), &PY_TYPE_DEF(LinearConstraint), module, "LinearConstraint", 0);
        }

        void t_LinearConstraint::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearConstraint), "class_", make_descriptor(LinearConstraint::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearConstraint), "wrapfn_", make_descriptor(t_LinearConstraint::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearConstraint), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LinearConstraint_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LinearConstraint::initializeClass, 1)))
            return NULL;
          return t_LinearConstraint::wrap_Object(LinearConstraint(((t_LinearConstraint *) arg)->object.this$));
        }
        static PyObject *t_LinearConstraint_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LinearConstraint::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LinearConstraint_init_(t_LinearConstraint *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::optim::linear::Relationship a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              LinearConstraint object((jobject) NULL);

              if (!parseArgs(args, "[DKD", ::org::hipparchus::optim::linear::Relationship::initializeClass, &a0, &a1, &p1, ::org::hipparchus::optim::linear::t_Relationship::parameters_, &a2))
              {
                INT_CALL(object = LinearConstraint(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              ::org::hipparchus::optim::linear::Relationship a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              LinearConstraint object((jobject) NULL);

              if (!parseArgs(args, "kKD", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::optim::linear::Relationship::initializeClass, &a0, &a1, &p1, ::org::hipparchus::optim::linear::t_Relationship::parameters_, &a2))
              {
                INT_CALL(object = LinearConstraint(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              JArray< jdouble > a0((jobject) NULL);
              jdouble a1;
              ::org::hipparchus::optim::linear::Relationship a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< jdouble > a3((jobject) NULL);
              jdouble a4;
              LinearConstraint object((jobject) NULL);

              if (!parseArgs(args, "[DDK[DD", ::org::hipparchus::optim::linear::Relationship::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::optim::linear::t_Relationship::parameters_, &a3, &a4))
              {
                INT_CALL(object = LinearConstraint(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              jdouble a1;
              ::org::hipparchus::optim::linear::Relationship a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::linear::RealVector a3((jobject) NULL);
              jdouble a4;
              LinearConstraint object((jobject) NULL);

              if (!parseArgs(args, "kDKkD", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::optim::linear::Relationship::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::optim::linear::t_Relationship::parameters_, &a3, &a4))
              {
                INT_CALL(object = LinearConstraint(a0, a1, a2, a3, a4));
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

        static PyObject *t_LinearConstraint_equals(t_LinearConstraint *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(LinearConstraint), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_LinearConstraint_getCoefficients(t_LinearConstraint *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoefficients());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_LinearConstraint_getRelationship(t_LinearConstraint *self)
        {
          ::org::hipparchus::optim::linear::Relationship result((jobject) NULL);
          OBJ_CALL(result = self->object.getRelationship());
          return ::org::hipparchus::optim::linear::t_Relationship::wrap_Object(result);
        }

        static PyObject *t_LinearConstraint_getValue(t_LinearConstraint *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LinearConstraint_hashCode(t_LinearConstraint *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(LinearConstraint), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_LinearConstraint_get__coefficients(t_LinearConstraint *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoefficients());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_LinearConstraint_get__relationship(t_LinearConstraint *self, void *data)
        {
          ::org::hipparchus::optim::linear::Relationship value((jobject) NULL);
          OBJ_CALL(value = self->object.getRelationship());
          return ::org::hipparchus::optim::linear::t_Relationship::wrap_Object(value);
        }

        static PyObject *t_LinearConstraint_get__value(t_LinearConstraint *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/GNSSPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *GNSSPropagator::class$ = NULL;
          jmethodID *GNSSPropagator::mids$ = NULL;
          bool GNSSPropagator::live$ = false;

          jclass GNSSPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/GNSSPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getECEF_c8fe21bcdac65bf6] = env->getMethodID(cls, "getECEF", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getECI_c8fe21bcdac65bf6] = env->getMethodID(cls, "getECI", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getMU_456d9a2f64d6b28d] = env->getMethodID(cls, "getMU", "()D");
              mids$[mid_getOrbitalElements_2764740e511a3639] = env->getMethodID(cls, "getOrbitalElements", "()Lorg/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements;");
              mids$[mid_propagateInEcef_72289093b5ce53a7] = env->getMethodID(cls, "propagateInEcef", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/PVCoordinates;");
              mids$[mid_resetInitialState_2b88003f931f70a7] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_getMass_e912d21057defe63] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_resetIntermediateState_9658cf3eaef14ef5] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_propagateOrbit_6f58641238e8a9c4] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::Frame GNSSPropagator::getECEF() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECEF_c8fe21bcdac65bf6]));
          }

          ::org::orekit::frames::Frame GNSSPropagator::getECI() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECI_c8fe21bcdac65bf6]));
          }

          ::org::orekit::frames::Frame GNSSPropagator::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
          }

          jdouble GNSSPropagator::getMU() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMU_456d9a2f64d6b28d]);
          }

          ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements GNSSPropagator::getOrbitalElements() const
          {
            return ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements(env->callObjectMethod(this$, mids$[mid_getOrbitalElements_2764740e511a3639]));
          }

          ::org::orekit::utils::PVCoordinates GNSSPropagator::propagateInEcef(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_propagateInEcef_72289093b5ce53a7], a0.this$));
          }

          void GNSSPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_2b88003f931f70a7], a0.this$);
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
          static PyObject *t_GNSSPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GNSSPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GNSSPropagator_getECEF(t_GNSSPropagator *self);
          static PyObject *t_GNSSPropagator_getECI(t_GNSSPropagator *self);
          static PyObject *t_GNSSPropagator_getFrame(t_GNSSPropagator *self, PyObject *args);
          static PyObject *t_GNSSPropagator_getMU(t_GNSSPropagator *self);
          static PyObject *t_GNSSPropagator_getOrbitalElements(t_GNSSPropagator *self);
          static PyObject *t_GNSSPropagator_propagateInEcef(t_GNSSPropagator *self, PyObject *arg);
          static PyObject *t_GNSSPropagator_resetInitialState(t_GNSSPropagator *self, PyObject *args);
          static PyObject *t_GNSSPropagator_get__eCEF(t_GNSSPropagator *self, void *data);
          static PyObject *t_GNSSPropagator_get__eCI(t_GNSSPropagator *self, void *data);
          static PyObject *t_GNSSPropagator_get__frame(t_GNSSPropagator *self, void *data);
          static PyObject *t_GNSSPropagator_get__mU(t_GNSSPropagator *self, void *data);
          static PyObject *t_GNSSPropagator_get__orbitalElements(t_GNSSPropagator *self, void *data);
          static PyGetSetDef t_GNSSPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_GNSSPropagator, eCEF),
            DECLARE_GET_FIELD(t_GNSSPropagator, eCI),
            DECLARE_GET_FIELD(t_GNSSPropagator, frame),
            DECLARE_GET_FIELD(t_GNSSPropagator, mU),
            DECLARE_GET_FIELD(t_GNSSPropagator, orbitalElements),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GNSSPropagator__methods_[] = {
            DECLARE_METHOD(t_GNSSPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GNSSPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GNSSPropagator, getECEF, METH_NOARGS),
            DECLARE_METHOD(t_GNSSPropagator, getECI, METH_NOARGS),
            DECLARE_METHOD(t_GNSSPropagator, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_GNSSPropagator, getMU, METH_NOARGS),
            DECLARE_METHOD(t_GNSSPropagator, getOrbitalElements, METH_NOARGS),
            DECLARE_METHOD(t_GNSSPropagator, propagateInEcef, METH_O),
            DECLARE_METHOD(t_GNSSPropagator, resetInitialState, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GNSSPropagator)[] = {
            { Py_tp_methods, t_GNSSPropagator__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_GNSSPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GNSSPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
            NULL
          };

          DEFINE_TYPE(GNSSPropagator, t_GNSSPropagator, GNSSPropagator);

          void t_GNSSPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(GNSSPropagator), &PY_TYPE_DEF(GNSSPropagator), module, "GNSSPropagator", 0);
          }

          void t_GNSSPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagator), "class_", make_descriptor(GNSSPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagator), "wrapfn_", make_descriptor(t_GNSSPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GNSSPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GNSSPropagator::initializeClass, 1)))
              return NULL;
            return t_GNSSPropagator::wrap_Object(GNSSPropagator(((t_GNSSPropagator *) arg)->object.this$));
          }
          static PyObject *t_GNSSPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GNSSPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GNSSPropagator_getECEF(t_GNSSPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_GNSSPropagator_getECI(t_GNSSPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_GNSSPropagator_getFrame(t_GNSSPropagator *self, PyObject *args)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            return callSuper(PY_TYPE(GNSSPropagator), (PyObject *) self, "getFrame", args, 2);
          }

          static PyObject *t_GNSSPropagator_getMU(t_GNSSPropagator *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMU());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GNSSPropagator_getOrbitalElements(t_GNSSPropagator *self)
          {
            ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_GNSSOrbitalElements::wrap_Object(result);
          }

          static PyObject *t_GNSSPropagator_propagateInEcef(t_GNSSPropagator *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.propagateInEcef(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "propagateInEcef", arg);
            return NULL;
          }

          static PyObject *t_GNSSPropagator_resetInitialState(t_GNSSPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(GNSSPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_GNSSPropagator_get__eCEF(t_GNSSPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GNSSPropagator_get__eCI(t_GNSSPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GNSSPropagator_get__frame(t_GNSSPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GNSSPropagator_get__mU(t_GNSSPropagator *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMU());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_GNSSPropagator_get__orbitalElements(t_GNSSPropagator *self, void *data)
          {
            ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_GNSSOrbitalElements::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/enclosing/Encloser.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "java/lang/Iterable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace enclosing {

        ::java::lang::Class *Encloser::class$ = NULL;
        jmethodID *Encloser::mids$ = NULL;
        bool Encloser::live$ = false;

        jclass Encloser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/enclosing/Encloser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_enclose_bae9cdfb16288f0e] = env->getMethodID(cls, "enclose", "(Ljava/lang/Iterable;)Lorg/hipparchus/geometry/enclosing/EnclosingBall;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::enclosing::EnclosingBall Encloser::enclose(const ::java::lang::Iterable & a0) const
        {
          return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_enclose_bae9cdfb16288f0e], a0.this$));
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
      namespace enclosing {
        static PyObject *t_Encloser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Encloser_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Encloser_of_(t_Encloser *self, PyObject *args);
        static PyObject *t_Encloser_enclose(t_Encloser *self, PyObject *arg);
        static PyObject *t_Encloser_get__parameters_(t_Encloser *self, void *data);
        static PyGetSetDef t_Encloser__fields_[] = {
          DECLARE_GET_FIELD(t_Encloser, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Encloser__methods_[] = {
          DECLARE_METHOD(t_Encloser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Encloser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Encloser, of_, METH_VARARGS),
          DECLARE_METHOD(t_Encloser, enclose, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Encloser)[] = {
          { Py_tp_methods, t_Encloser__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Encloser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Encloser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Encloser, t_Encloser, Encloser);
        PyObject *t_Encloser::wrap_Object(const Encloser& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Encloser::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Encloser *self = (t_Encloser *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_Encloser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Encloser::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Encloser *self = (t_Encloser *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_Encloser::install(PyObject *module)
        {
          installType(&PY_TYPE(Encloser), &PY_TYPE_DEF(Encloser), module, "Encloser", 0);
        }

        void t_Encloser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Encloser), "class_", make_descriptor(Encloser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Encloser), "wrapfn_", make_descriptor(t_Encloser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Encloser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Encloser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Encloser::initializeClass, 1)))
            return NULL;
          return t_Encloser::wrap_Object(Encloser(((t_Encloser *) arg)->object.this$));
        }
        static PyObject *t_Encloser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Encloser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Encloser_of_(t_Encloser *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Encloser_enclose(t_Encloser *self, PyObject *arg)
        {
          ::java::lang::Iterable a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
          {
            OBJ_CALL(result = self->object.enclose(a0));
            return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "enclose", arg);
          return NULL;
        }
        static PyObject *t_Encloser_get__parameters_(t_Encloser *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/ImpulseManeuver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/orekit/forces/maneuvers/ImpulseManeuver.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *ImpulseManeuver::class$ = NULL;
        jmethodID *ImpulseManeuver::mids$ = NULL;
        bool ImpulseManeuver::live$ = false;

        jclass ImpulseManeuver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/ImpulseManeuver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_cf7d4e015d41ac43] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_init$_2ac32a31b9007a99] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_init$_381dc84b05429e3b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/forces/maneuvers/Control3DVectorCostType;)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getAttitudeOverride_5cce95036ae870ba] = env->getMethodID(cls, "getAttitudeOverride", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getControl3DVectorCostType_9fb96072e0d6dbf0] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
            mids$[mid_getDeltaVSat_17a952530a808943] = env->getMethodID(cls, "getDeltaVSat", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getIsp_456d9a2f64d6b28d] = env->getMethodID(cls, "getIsp", "()D");
            mids$[mid_getTrigger_27b528e7858202ed] = env->getMethodID(cls, "getTrigger", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_a1dca21c41aedd19] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/forces/maneuvers/ImpulseManeuver;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ImpulseManeuver::ImpulseManeuver(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_cf7d4e015d41ac43, a0.this$, a1.this$, a2)) {}

        ImpulseManeuver::ImpulseManeuver(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_2ac32a31b9007a99, a0.this$, a1.this$, a2.this$, a3)) {}

        ImpulseManeuver::ImpulseManeuver(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a4) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_381dc84b05429e3b, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

        jdouble ImpulseManeuver::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        ::org::orekit::attitudes::AttitudeProvider ImpulseManeuver::getAttitudeOverride() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeOverride_5cce95036ae870ba]));
        }

        ::org::orekit::forces::maneuvers::Control3DVectorCostType ImpulseManeuver::getControl3DVectorCostType() const
        {
          return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_9fb96072e0d6dbf0]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ImpulseManeuver::getDeltaVSat() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDeltaVSat_17a952530a808943]));
        }

        jdouble ImpulseManeuver::getIsp() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIsp_456d9a2f64d6b28d]);
        }

        ::org::orekit::propagation::events::EventDetector ImpulseManeuver::getTrigger() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getTrigger_27b528e7858202ed]));
        }

        void ImpulseManeuver::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
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
        static PyObject *t_ImpulseManeuver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ImpulseManeuver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ImpulseManeuver_of_(t_ImpulseManeuver *self, PyObject *args);
        static int t_ImpulseManeuver_init_(t_ImpulseManeuver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ImpulseManeuver_g(t_ImpulseManeuver *self, PyObject *args);
        static PyObject *t_ImpulseManeuver_getAttitudeOverride(t_ImpulseManeuver *self);
        static PyObject *t_ImpulseManeuver_getControl3DVectorCostType(t_ImpulseManeuver *self);
        static PyObject *t_ImpulseManeuver_getDeltaVSat(t_ImpulseManeuver *self);
        static PyObject *t_ImpulseManeuver_getIsp(t_ImpulseManeuver *self);
        static PyObject *t_ImpulseManeuver_getTrigger(t_ImpulseManeuver *self);
        static PyObject *t_ImpulseManeuver_init(t_ImpulseManeuver *self, PyObject *args);
        static PyObject *t_ImpulseManeuver_get__attitudeOverride(t_ImpulseManeuver *self, void *data);
        static PyObject *t_ImpulseManeuver_get__control3DVectorCostType(t_ImpulseManeuver *self, void *data);
        static PyObject *t_ImpulseManeuver_get__deltaVSat(t_ImpulseManeuver *self, void *data);
        static PyObject *t_ImpulseManeuver_get__isp(t_ImpulseManeuver *self, void *data);
        static PyObject *t_ImpulseManeuver_get__trigger(t_ImpulseManeuver *self, void *data);
        static PyObject *t_ImpulseManeuver_get__parameters_(t_ImpulseManeuver *self, void *data);
        static PyGetSetDef t_ImpulseManeuver__fields_[] = {
          DECLARE_GET_FIELD(t_ImpulseManeuver, attitudeOverride),
          DECLARE_GET_FIELD(t_ImpulseManeuver, control3DVectorCostType),
          DECLARE_GET_FIELD(t_ImpulseManeuver, deltaVSat),
          DECLARE_GET_FIELD(t_ImpulseManeuver, isp),
          DECLARE_GET_FIELD(t_ImpulseManeuver, trigger),
          DECLARE_GET_FIELD(t_ImpulseManeuver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ImpulseManeuver__methods_[] = {
          DECLARE_METHOD(t_ImpulseManeuver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ImpulseManeuver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ImpulseManeuver, of_, METH_VARARGS),
          DECLARE_METHOD(t_ImpulseManeuver, g, METH_VARARGS),
          DECLARE_METHOD(t_ImpulseManeuver, getAttitudeOverride, METH_NOARGS),
          DECLARE_METHOD(t_ImpulseManeuver, getControl3DVectorCostType, METH_NOARGS),
          DECLARE_METHOD(t_ImpulseManeuver, getDeltaVSat, METH_NOARGS),
          DECLARE_METHOD(t_ImpulseManeuver, getIsp, METH_NOARGS),
          DECLARE_METHOD(t_ImpulseManeuver, getTrigger, METH_NOARGS),
          DECLARE_METHOD(t_ImpulseManeuver, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ImpulseManeuver)[] = {
          { Py_tp_methods, t_ImpulseManeuver__methods_ },
          { Py_tp_init, (void *) t_ImpulseManeuver_init_ },
          { Py_tp_getset, t_ImpulseManeuver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ImpulseManeuver)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ImpulseManeuver, t_ImpulseManeuver, ImpulseManeuver);
        PyObject *t_ImpulseManeuver::wrap_Object(const ImpulseManeuver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ImpulseManeuver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ImpulseManeuver *self = (t_ImpulseManeuver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ImpulseManeuver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ImpulseManeuver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ImpulseManeuver *self = (t_ImpulseManeuver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ImpulseManeuver::install(PyObject *module)
        {
          installType(&PY_TYPE(ImpulseManeuver), &PY_TYPE_DEF(ImpulseManeuver), module, "ImpulseManeuver", 0);
        }

        void t_ImpulseManeuver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ImpulseManeuver), "class_", make_descriptor(ImpulseManeuver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ImpulseManeuver), "wrapfn_", make_descriptor(t_ImpulseManeuver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ImpulseManeuver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ImpulseManeuver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ImpulseManeuver::initializeClass, 1)))
            return NULL;
          return t_ImpulseManeuver::wrap_Object(ImpulseManeuver(((t_ImpulseManeuver *) arg)->object.this$));
        }
        static PyObject *t_ImpulseManeuver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ImpulseManeuver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ImpulseManeuver_of_(t_ImpulseManeuver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ImpulseManeuver_init_(t_ImpulseManeuver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              jdouble a2;
              ImpulseManeuver object((jobject) NULL);

              if (!parseArgs(args, "kkD", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ImpulseManeuver(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::forces::maneuvers::PY_TYPE(ImpulseManeuver);
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              jdouble a3;
              ImpulseManeuver object((jobject) NULL);

              if (!parseArgs(args, "kkkD", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = ImpulseManeuver(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::forces::maneuvers::PY_TYPE(ImpulseManeuver);
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              jdouble a3;
              ::org::orekit::forces::maneuvers::Control3DVectorCostType a4((jobject) NULL);
              PyTypeObject **p4;
              ImpulseManeuver object((jobject) NULL);

              if (!parseArgs(args, "kkkDK", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_))
              {
                INT_CALL(object = ImpulseManeuver(a0, a1, a2, a3, a4));
                self->object = object;
                self->parameters[0] = ::org::orekit::forces::maneuvers::PY_TYPE(ImpulseManeuver);
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

        static PyObject *t_ImpulseManeuver_g(t_ImpulseManeuver *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ImpulseManeuver), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_ImpulseManeuver_getAttitudeOverride(t_ImpulseManeuver *self)
        {
          ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_ImpulseManeuver_getControl3DVectorCostType(t_ImpulseManeuver *self)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
          OBJ_CALL(result = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
        }

        static PyObject *t_ImpulseManeuver_getDeltaVSat(t_ImpulseManeuver *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getDeltaVSat());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_ImpulseManeuver_getIsp(t_ImpulseManeuver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getIsp());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ImpulseManeuver_getTrigger(t_ImpulseManeuver *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getTrigger());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_ImpulseManeuver_init(t_ImpulseManeuver *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(ImpulseManeuver), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_ImpulseManeuver_get__parameters_(t_ImpulseManeuver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ImpulseManeuver_get__attitudeOverride(t_ImpulseManeuver *self, void *data)
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_ImpulseManeuver_get__control3DVectorCostType(t_ImpulseManeuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
          OBJ_CALL(value = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
        }

        static PyObject *t_ImpulseManeuver_get__deltaVSat(t_ImpulseManeuver *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getDeltaVSat());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_ImpulseManeuver_get__isp(t_ImpulseManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getIsp());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ImpulseManeuver_get__trigger(t_ImpulseManeuver *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getTrigger());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/MidpointIntegratorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *MidpointIntegratorBuilder::class$ = NULL;
        jmethodID *MidpointIntegratorBuilder::mids$ = NULL;
        bool MidpointIntegratorBuilder::live$ = false;

        jclass MidpointIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/MidpointIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_501b0015ccc7d54e] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MidpointIntegratorBuilder::MidpointIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator MidpointIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_501b0015ccc7d54e], a0.this$, a1.this$));
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
        static PyObject *t_MidpointIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MidpointIntegratorBuilder_init_(t_MidpointIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MidpointIntegratorBuilder_buildIntegrator(t_MidpointIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_MidpointIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_MidpointIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MidpointIntegratorBuilder)[] = {
          { Py_tp_methods, t_MidpointIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_MidpointIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MidpointIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MidpointIntegratorBuilder, t_MidpointIntegratorBuilder, MidpointIntegratorBuilder);

        void t_MidpointIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(MidpointIntegratorBuilder), &PY_TYPE_DEF(MidpointIntegratorBuilder), module, "MidpointIntegratorBuilder", 0);
        }

        void t_MidpointIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointIntegratorBuilder), "class_", make_descriptor(MidpointIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointIntegratorBuilder), "wrapfn_", make_descriptor(t_MidpointIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MidpointIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MidpointIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_MidpointIntegratorBuilder::wrap_Object(MidpointIntegratorBuilder(((t_MidpointIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_MidpointIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MidpointIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MidpointIntegratorBuilder_init_(t_MidpointIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          MidpointIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = MidpointIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MidpointIntegratorBuilder_buildIntegrator(t_MidpointIntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/estimation/measurements/modifiers/RangeIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeIonosphericDelayModifier::class$ = NULL;
          jmethodID *RangeIonosphericDelayModifier::mids$ = NULL;
          bool RangeIonosphericDelayModifier::live$ = false;

          jclass RangeIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_70ec985998eac326] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_modify_a5896dbcbe782924] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeIonosphericDelayModifier::RangeIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::BaseRangeIonosphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_70ec985998eac326, a0.this$, a1)) {}

          void RangeIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_a5896dbcbe782924], a0.this$);
          }

          void RangeIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
          static PyObject *t_RangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RangeIonosphericDelayModifier_init_(t_RangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeIonosphericDelayModifier_modify(t_RangeIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_RangeIonosphericDelayModifier_modifyWithoutDerivatives(t_RangeIonosphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_RangeIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_RangeIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_RangeIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_RangeIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_RangeIonosphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeIonosphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(RangeIonosphericDelayModifier, t_RangeIonosphericDelayModifier, RangeIonosphericDelayModifier);

          void t_RangeIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeIonosphericDelayModifier), &PY_TYPE_DEF(RangeIonosphericDelayModifier), module, "RangeIonosphericDelayModifier", 0);
          }

          void t_RangeIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeIonosphericDelayModifier), "class_", make_descriptor(RangeIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeIonosphericDelayModifier), "wrapfn_", make_descriptor(t_RangeIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_RangeIonosphericDelayModifier::wrap_Object(RangeIonosphericDelayModifier(((t_RangeIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_RangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RangeIonosphericDelayModifier_init_(t_RangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            RangeIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = RangeIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeIonosphericDelayModifier_modify(t_RangeIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_RangeIonosphericDelayModifier_modifyWithoutDerivatives(t_RangeIonosphericDelayModifier *self, PyObject *arg)
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
#include "org/orekit/estimation/measurements/GroundReceiverMeasurement.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *GroundReceiverMeasurement::class$ = NULL;
        jmethodID *GroundReceiverMeasurement::mids$ = NULL;
        bool GroundReceiverMeasurement::live$ = false;

        jclass GroundReceiverMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/GroundReceiverMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e165cdc92bb6a83c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;ZLorg/orekit/time/AbsoluteDate;[D[D[DLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_0922b0dcca6e1f60] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;ZLorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getGroundStationCoordinates_cb5b9259dadf02c2] = env->getMethodID(cls, "getGroundStationCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/PVCoordinates;");
            mids$[mid_getGroundStationPosition_b070efa02e5e2595] = env->getMethodID(cls, "getGroundStationPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getStation_4a0fede0c03d79b0] = env->getMethodID(cls, "getStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_isTwoWay_e470b6d9e0d979db] = env->getMethodID(cls, "isTwoWay", "()Z");
            mids$[mid_computeCommonParametersWithout_ea56c189b24970f5] = env->getMethodID(cls, "computeCommonParametersWithout", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/GroundReceiverCommonParametersWithoutDerivatives;");
            mids$[mid_computeCommonParametersWithDerivatives_f035d89db5ef654f] = env->getMethodID(cls, "computeCommonParametersWithDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/GroundReceiverCommonParametersWithDerivatives;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundReceiverMeasurement::GroundReceiverMeasurement(const ::org::orekit::estimation::measurements::GroundStation & a0, jboolean a1, const ::org::orekit::time::AbsoluteDate & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, const JArray< jdouble > & a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_e165cdc92bb6a83c, a0.this$, a1, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        GroundReceiverMeasurement::GroundReceiverMeasurement(const ::org::orekit::estimation::measurements::GroundStation & a0, jboolean a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_0922b0dcca6e1f60, a0.this$, a1, a2.this$, a3, a4, a5, a6.this$)) {}

        ::org::orekit::utils::PVCoordinates GroundReceiverMeasurement::getGroundStationCoordinates(const ::org::orekit::frames::Frame & a0) const
        {
          return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getGroundStationCoordinates_cb5b9259dadf02c2], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D GroundReceiverMeasurement::getGroundStationPosition(const ::org::orekit::frames::Frame & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getGroundStationPosition_b070efa02e5e2595], a0.this$));
        }

        ::org::orekit::estimation::measurements::GroundStation GroundReceiverMeasurement::getStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getStation_4a0fede0c03d79b0]));
        }

        jboolean GroundReceiverMeasurement::isTwoWay() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isTwoWay_e470b6d9e0d979db]);
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
        static PyObject *t_GroundReceiverMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundReceiverMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundReceiverMeasurement_of_(t_GroundReceiverMeasurement *self, PyObject *args);
        static int t_GroundReceiverMeasurement_init_(t_GroundReceiverMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundReceiverMeasurement_getGroundStationCoordinates(t_GroundReceiverMeasurement *self, PyObject *arg);
        static PyObject *t_GroundReceiverMeasurement_getGroundStationPosition(t_GroundReceiverMeasurement *self, PyObject *arg);
        static PyObject *t_GroundReceiverMeasurement_getStation(t_GroundReceiverMeasurement *self);
        static PyObject *t_GroundReceiverMeasurement_isTwoWay(t_GroundReceiverMeasurement *self);
        static PyObject *t_GroundReceiverMeasurement_get__station(t_GroundReceiverMeasurement *self, void *data);
        static PyObject *t_GroundReceiverMeasurement_get__twoWay(t_GroundReceiverMeasurement *self, void *data);
        static PyObject *t_GroundReceiverMeasurement_get__parameters_(t_GroundReceiverMeasurement *self, void *data);
        static PyGetSetDef t_GroundReceiverMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_GroundReceiverMeasurement, station),
          DECLARE_GET_FIELD(t_GroundReceiverMeasurement, twoWay),
          DECLARE_GET_FIELD(t_GroundReceiverMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GroundReceiverMeasurement__methods_[] = {
          DECLARE_METHOD(t_GroundReceiverMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundReceiverMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundReceiverMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_GroundReceiverMeasurement, getGroundStationCoordinates, METH_O),
          DECLARE_METHOD(t_GroundReceiverMeasurement, getGroundStationPosition, METH_O),
          DECLARE_METHOD(t_GroundReceiverMeasurement, getStation, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverMeasurement, isTwoWay, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundReceiverMeasurement)[] = {
          { Py_tp_methods, t_GroundReceiverMeasurement__methods_ },
          { Py_tp_init, (void *) t_GroundReceiverMeasurement_init_ },
          { Py_tp_getset, t_GroundReceiverMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundReceiverMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
          NULL
        };

        DEFINE_TYPE(GroundReceiverMeasurement, t_GroundReceiverMeasurement, GroundReceiverMeasurement);
        PyObject *t_GroundReceiverMeasurement::wrap_Object(const GroundReceiverMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GroundReceiverMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GroundReceiverMeasurement *self = (t_GroundReceiverMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GroundReceiverMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GroundReceiverMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GroundReceiverMeasurement *self = (t_GroundReceiverMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GroundReceiverMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundReceiverMeasurement), &PY_TYPE_DEF(GroundReceiverMeasurement), module, "GroundReceiverMeasurement", 0);
        }

        void t_GroundReceiverMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverMeasurement), "class_", make_descriptor(GroundReceiverMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverMeasurement), "wrapfn_", make_descriptor(t_GroundReceiverMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GroundReceiverMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundReceiverMeasurement::initializeClass, 1)))
            return NULL;
          return t_GroundReceiverMeasurement::wrap_Object(GroundReceiverMeasurement(((t_GroundReceiverMeasurement *) arg)->object.this$));
        }
        static PyObject *t_GroundReceiverMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundReceiverMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GroundReceiverMeasurement_of_(t_GroundReceiverMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_GroundReceiverMeasurement_init_(t_GroundReceiverMeasurement *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 7:
            {
              ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
              jboolean a1;
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              JArray< jdouble > a5((jobject) NULL);
              ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
              GroundReceiverMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kZk[D[D[Dk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = GroundReceiverMeasurement(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
              jboolean a1;
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble a3;
              jdouble a4;
              jdouble a5;
              ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
              GroundReceiverMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kZkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = GroundReceiverMeasurement(a0, a1, a2, a3, a4, a5, a6));
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

        static PyObject *t_GroundReceiverMeasurement_getGroundStationCoordinates(t_GroundReceiverMeasurement *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::orekit::utils::PVCoordinates result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getGroundStationCoordinates(a0));
            return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getGroundStationCoordinates", arg);
          return NULL;
        }

        static PyObject *t_GroundReceiverMeasurement_getGroundStationPosition(t_GroundReceiverMeasurement *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getGroundStationPosition(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getGroundStationPosition", arg);
          return NULL;
        }

        static PyObject *t_GroundReceiverMeasurement_getStation(t_GroundReceiverMeasurement *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverMeasurement_isTwoWay(t_GroundReceiverMeasurement *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isTwoWay());
          Py_RETURN_BOOL(result);
        }
        static PyObject *t_GroundReceiverMeasurement_get__parameters_(t_GroundReceiverMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_GroundReceiverMeasurement_get__station(t_GroundReceiverMeasurement *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverMeasurement_get__twoWay(t_GroundReceiverMeasurement *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isTwoWay());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/cr3bp/CR3BPMultipleShooter.h"
#include "java/util/List.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/numerical/cr3bp/STMEquations.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {

          ::java::lang::Class *CR3BPMultipleShooter::class$ = NULL;
          jmethodID *CR3BPMultipleShooter::mids$ = NULL;
          bool CR3BPMultipleShooter::live$ = false;

          jclass CR3BPMultipleShooter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/cr3bp/CR3BPMultipleShooter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ea30a3806cd01d66] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;DI)V");
              mids$[mid_setClosedOrbitConstraint_50a2e0b139e80a58] = env->getMethodID(cls, "setClosedOrbitConstraint", "(Z)V");
              mids$[mid_setEpochFreedom_bc79bc153a2b3c2e] = env->getMethodID(cls, "setEpochFreedom", "(IZ)V");
              mids$[mid_setScaleLength_77e0f9a1f260e2e5] = env->getMethodID(cls, "setScaleLength", "(D)V");
              mids$[mid_setScaleTime_77e0f9a1f260e2e5] = env->getMethodID(cls, "setScaleTime", "(D)V");
              mids$[mid_computeAdditionalConstraints_5c4ec51dfa4e445c] = env->getMethodID(cls, "computeAdditionalConstraints", "(Ljava/util/List;)[D");
              mids$[mid_computeAdditionalJacobianMatrix_8b899bcca8eef41a] = env->getMethodID(cls, "computeAdditionalJacobianMatrix", "(Ljava/util/List;)[[D");
              mids$[mid_getAugmentedInitialState_881fd9055e653db3] = env->getMethodID(cls, "getAugmentedInitialState", "(I)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_getNumberOfConstraints_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfConstraints", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CR3BPMultipleShooter::CR3BPMultipleShooter(const ::java::util::List & a0, const ::java::util::List & a1, const ::java::util::List & a2, jdouble a3, jint a4) : ::org::orekit::utils::AbstractMultipleShooting(env->newObject(initializeClass, &mids$, mid_init$_ea30a3806cd01d66, a0.this$, a1.this$, a2.this$, a3, a4)) {}

          void CR3BPMultipleShooter::setClosedOrbitConstraint(jboolean a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setClosedOrbitConstraint_50a2e0b139e80a58], a0);
          }

          void CR3BPMultipleShooter::setEpochFreedom(jint a0, jboolean a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setEpochFreedom_bc79bc153a2b3c2e], a0, a1);
          }

          void CR3BPMultipleShooter::setScaleLength(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setScaleLength_77e0f9a1f260e2e5], a0);
          }

          void CR3BPMultipleShooter::setScaleTime(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setScaleTime_77e0f9a1f260e2e5], a0);
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
      namespace numerical {
        namespace cr3bp {
          static PyObject *t_CR3BPMultipleShooter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CR3BPMultipleShooter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CR3BPMultipleShooter_init_(t_CR3BPMultipleShooter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CR3BPMultipleShooter_setClosedOrbitConstraint(t_CR3BPMultipleShooter *self, PyObject *arg);
          static PyObject *t_CR3BPMultipleShooter_setEpochFreedom(t_CR3BPMultipleShooter *self, PyObject *args);
          static PyObject *t_CR3BPMultipleShooter_setScaleLength(t_CR3BPMultipleShooter *self, PyObject *args);
          static PyObject *t_CR3BPMultipleShooter_setScaleTime(t_CR3BPMultipleShooter *self, PyObject *args);
          static int t_CR3BPMultipleShooter_set__closedOrbitConstraint(t_CR3BPMultipleShooter *self, PyObject *arg, void *data);
          static int t_CR3BPMultipleShooter_set__scaleLength(t_CR3BPMultipleShooter *self, PyObject *arg, void *data);
          static int t_CR3BPMultipleShooter_set__scaleTime(t_CR3BPMultipleShooter *self, PyObject *arg, void *data);
          static PyGetSetDef t_CR3BPMultipleShooter__fields_[] = {
            DECLARE_SET_FIELD(t_CR3BPMultipleShooter, closedOrbitConstraint),
            DECLARE_SET_FIELD(t_CR3BPMultipleShooter, scaleLength),
            DECLARE_SET_FIELD(t_CR3BPMultipleShooter, scaleTime),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CR3BPMultipleShooter__methods_[] = {
            DECLARE_METHOD(t_CR3BPMultipleShooter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPMultipleShooter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPMultipleShooter, setClosedOrbitConstraint, METH_O),
            DECLARE_METHOD(t_CR3BPMultipleShooter, setEpochFreedom, METH_VARARGS),
            DECLARE_METHOD(t_CR3BPMultipleShooter, setScaleLength, METH_VARARGS),
            DECLARE_METHOD(t_CR3BPMultipleShooter, setScaleTime, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CR3BPMultipleShooter)[] = {
            { Py_tp_methods, t_CR3BPMultipleShooter__methods_ },
            { Py_tp_init, (void *) t_CR3BPMultipleShooter_init_ },
            { Py_tp_getset, t_CR3BPMultipleShooter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CR3BPMultipleShooter)[] = {
            &PY_TYPE_DEF(::org::orekit::utils::AbstractMultipleShooting),
            NULL
          };

          DEFINE_TYPE(CR3BPMultipleShooter, t_CR3BPMultipleShooter, CR3BPMultipleShooter);

          void t_CR3BPMultipleShooter::install(PyObject *module)
          {
            installType(&PY_TYPE(CR3BPMultipleShooter), &PY_TYPE_DEF(CR3BPMultipleShooter), module, "CR3BPMultipleShooter", 0);
          }

          void t_CR3BPMultipleShooter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPMultipleShooter), "class_", make_descriptor(CR3BPMultipleShooter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPMultipleShooter), "wrapfn_", make_descriptor(t_CR3BPMultipleShooter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPMultipleShooter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CR3BPMultipleShooter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CR3BPMultipleShooter::initializeClass, 1)))
              return NULL;
            return t_CR3BPMultipleShooter::wrap_Object(CR3BPMultipleShooter(((t_CR3BPMultipleShooter *) arg)->object.this$));
          }
          static PyObject *t_CR3BPMultipleShooter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CR3BPMultipleShooter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CR3BPMultipleShooter_init_(t_CR3BPMultipleShooter *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            jint a4;
            CR3BPMultipleShooter object((jobject) NULL);

            if (!parseArgs(args, "KKKDI", ::java::util::List::initializeClass, ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &a4))
            {
              INT_CALL(object = CR3BPMultipleShooter(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CR3BPMultipleShooter_setClosedOrbitConstraint(t_CR3BPMultipleShooter *self, PyObject *arg)
          {
            jboolean a0;

            if (!parseArg(arg, "Z", &a0))
            {
              OBJ_CALL(self->object.setClosedOrbitConstraint(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setClosedOrbitConstraint", arg);
            return NULL;
          }

          static PyObject *t_CR3BPMultipleShooter_setEpochFreedom(t_CR3BPMultipleShooter *self, PyObject *args)
          {
            jint a0;
            jboolean a1;

            if (!parseArgs(args, "IZ", &a0, &a1))
            {
              OBJ_CALL(self->object.setEpochFreedom(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(CR3BPMultipleShooter), (PyObject *) self, "setEpochFreedom", args, 2);
          }

          static PyObject *t_CR3BPMultipleShooter_setScaleLength(t_CR3BPMultipleShooter *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.setScaleLength(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(CR3BPMultipleShooter), (PyObject *) self, "setScaleLength", args, 2);
          }

          static PyObject *t_CR3BPMultipleShooter_setScaleTime(t_CR3BPMultipleShooter *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.setScaleTime(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(CR3BPMultipleShooter), (PyObject *) self, "setScaleTime", args, 2);
          }

          static int t_CR3BPMultipleShooter_set__closedOrbitConstraint(t_CR3BPMultipleShooter *self, PyObject *arg, void *data)
          {
            {
              jboolean value;
              if (!parseArg(arg, "Z", &value))
              {
                INT_CALL(self->object.setClosedOrbitConstraint(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "closedOrbitConstraint", arg);
            return -1;
          }

          static int t_CR3BPMultipleShooter_set__scaleLength(t_CR3BPMultipleShooter *self, PyObject *arg, void *data)
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

          static int t_CR3BPMultipleShooter_set__scaleTime(t_CR3BPMultipleShooter *self, PyObject *arg, void *data)
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/SingleLayerModelMappingFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/ionosphere/IonosphericMappingFunction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *SingleLayerModelMappingFunction::class$ = NULL;
          jmethodID *SingleLayerModelMappingFunction::mids$ = NULL;
          bool SingleLayerModelMappingFunction::live$ = false;

          jclass SingleLayerModelMappingFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/SingleLayerModelMappingFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_mappingFactor_0ba5fed9597b693e] = env->getMethodID(cls, "mappingFactor", "(D)D");
              mids$[mid_mappingFactor_d3398190482814dc] = env->getMethodID(cls, "mappingFactor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SingleLayerModelMappingFunction::SingleLayerModelMappingFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          SingleLayerModelMappingFunction::SingleLayerModelMappingFunction(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

          jdouble SingleLayerModelMappingFunction::mappingFactor(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_mappingFactor_0ba5fed9597b693e], a0);
          }

          ::org::hipparchus::CalculusFieldElement SingleLayerModelMappingFunction::mappingFactor(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_mappingFactor_d3398190482814dc], a0.this$));
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
          static PyObject *t_SingleLayerModelMappingFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SingleLayerModelMappingFunction_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SingleLayerModelMappingFunction_init_(t_SingleLayerModelMappingFunction *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SingleLayerModelMappingFunction_mappingFactor(t_SingleLayerModelMappingFunction *self, PyObject *args);

          static PyMethodDef t_SingleLayerModelMappingFunction__methods_[] = {
            DECLARE_METHOD(t_SingleLayerModelMappingFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleLayerModelMappingFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleLayerModelMappingFunction, mappingFactor, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SingleLayerModelMappingFunction)[] = {
            { Py_tp_methods, t_SingleLayerModelMappingFunction__methods_ },
            { Py_tp_init, (void *) t_SingleLayerModelMappingFunction_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SingleLayerModelMappingFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SingleLayerModelMappingFunction, t_SingleLayerModelMappingFunction, SingleLayerModelMappingFunction);

          void t_SingleLayerModelMappingFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(SingleLayerModelMappingFunction), &PY_TYPE_DEF(SingleLayerModelMappingFunction), module, "SingleLayerModelMappingFunction", 0);
          }

          void t_SingleLayerModelMappingFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleLayerModelMappingFunction), "class_", make_descriptor(SingleLayerModelMappingFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleLayerModelMappingFunction), "wrapfn_", make_descriptor(t_SingleLayerModelMappingFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleLayerModelMappingFunction), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SingleLayerModelMappingFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SingleLayerModelMappingFunction::initializeClass, 1)))
              return NULL;
            return t_SingleLayerModelMappingFunction::wrap_Object(SingleLayerModelMappingFunction(((t_SingleLayerModelMappingFunction *) arg)->object.this$));
          }
          static PyObject *t_SingleLayerModelMappingFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SingleLayerModelMappingFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SingleLayerModelMappingFunction_init_(t_SingleLayerModelMappingFunction *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                SingleLayerModelMappingFunction object((jobject) NULL);

                INT_CALL(object = SingleLayerModelMappingFunction());
                self->object = object;
                break;
              }
             case 1:
              {
                jdouble a0;
                SingleLayerModelMappingFunction object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = SingleLayerModelMappingFunction(a0));
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

          static PyObject *t_SingleLayerModelMappingFunction_mappingFactor(t_SingleLayerModelMappingFunction *self, PyObject *args)
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
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
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
              mids$[mid_computeThrustDirection_00b397d023000862] = env->getMethodID(cls, "computeThrustDirection", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustDirectionProvider::computeThrustDirection(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_computeThrustDirection_00b397d023000862], a0.this$, a1.this$, a2.this$));
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

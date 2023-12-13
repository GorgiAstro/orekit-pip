#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/RateElementsType.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/RateElementsType.h"
#include "java/util/List.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *RateElementsType::class$ = NULL;
              jmethodID *RateElementsType::mids$ = NULL;
              bool RateElementsType::live$ = false;
              RateElementsType *RateElementsType::ANGVEL = NULL;
              RateElementsType *RateElementsType::EULER_RATE = NULL;
              RateElementsType *RateElementsType::GYRO_BIAS = NULL;
              RateElementsType *RateElementsType::NONE = NULL;
              RateElementsType *RateElementsType::Q_DOT = NULL;

              jclass RateElementsType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/RateElementsType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_getUnits_e62d3bb06d56d7e3] = env->getMethodID(cls, "getUnits", "()Ljava/util/List;");
                  mids$[mid_toAngular_6080aff118729611] = env->getMethodID(cls, "toAngular", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;Lorg/hipparchus/geometry/euclidean/threed/Rotation;I[D)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
                  mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                  mids$[mid_valueOf_4c716be1c91b249f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;");
                  mids$[mid_values_cee5530ce2a7cda5] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANGVEL = new RateElementsType(env->getStaticObjectField(cls, "ANGVEL", "Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;"));
                  EULER_RATE = new RateElementsType(env->getStaticObjectField(cls, "EULER_RATE", "Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;"));
                  GYRO_BIAS = new RateElementsType(env->getStaticObjectField(cls, "GYRO_BIAS", "Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;"));
                  NONE = new RateElementsType(env->getStaticObjectField(cls, "NONE", "Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;"));
                  Q_DOT = new RateElementsType(env->getStaticObjectField(cls, "Q_DOT", "Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::util::List RateElementsType::getUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUnits_e62d3bb06d56d7e3]));
              }

              ::org::orekit::utils::TimeStampedAngularCoordinates RateElementsType::toAngular(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a1, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a2, jint a3, const JArray< jdouble > & a4) const
              {
                return ::org::orekit::utils::TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_toAngular_6080aff118729611], a0.this$, a1.this$, a2.this$, a3, a4.this$));
              }

              ::java::lang::String RateElementsType::toString() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
              }

              RateElementsType RateElementsType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return RateElementsType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4c716be1c91b249f], a0.this$));
              }

              JArray< RateElementsType > RateElementsType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< RateElementsType >(env->callStaticObjectMethod(cls, mids$[mid_values_cee5530ce2a7cda5]));
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
              static PyObject *t_RateElementsType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RateElementsType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RateElementsType_of_(t_RateElementsType *self, PyObject *args);
              static PyObject *t_RateElementsType_getUnits(t_RateElementsType *self);
              static PyObject *t_RateElementsType_toAngular(t_RateElementsType *self, PyObject *args);
              static PyObject *t_RateElementsType_toString(t_RateElementsType *self, PyObject *args);
              static PyObject *t_RateElementsType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_RateElementsType_values(PyTypeObject *type);
              static PyObject *t_RateElementsType_get__units(t_RateElementsType *self, void *data);
              static PyObject *t_RateElementsType_get__parameters_(t_RateElementsType *self, void *data);
              static PyGetSetDef t_RateElementsType__fields_[] = {
                DECLARE_GET_FIELD(t_RateElementsType, units),
                DECLARE_GET_FIELD(t_RateElementsType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RateElementsType__methods_[] = {
                DECLARE_METHOD(t_RateElementsType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RateElementsType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RateElementsType, of_, METH_VARARGS),
                DECLARE_METHOD(t_RateElementsType, getUnits, METH_NOARGS),
                DECLARE_METHOD(t_RateElementsType, toAngular, METH_VARARGS),
                DECLARE_METHOD(t_RateElementsType, toString, METH_VARARGS),
                DECLARE_METHOD(t_RateElementsType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_RateElementsType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RateElementsType)[] = {
                { Py_tp_methods, t_RateElementsType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_RateElementsType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RateElementsType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(RateElementsType, t_RateElementsType, RateElementsType);
              PyObject *t_RateElementsType::wrap_Object(const RateElementsType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_RateElementsType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RateElementsType *self = (t_RateElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_RateElementsType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_RateElementsType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RateElementsType *self = (t_RateElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_RateElementsType::install(PyObject *module)
              {
                installType(&PY_TYPE(RateElementsType), &PY_TYPE_DEF(RateElementsType), module, "RateElementsType", 0);
              }

              void t_RateElementsType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "class_", make_descriptor(RateElementsType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "wrapfn_", make_descriptor(t_RateElementsType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "boxfn_", make_descriptor(boxObject));
                env->getClass(RateElementsType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "ANGVEL", make_descriptor(t_RateElementsType::wrap_Object(*RateElementsType::ANGVEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "EULER_RATE", make_descriptor(t_RateElementsType::wrap_Object(*RateElementsType::EULER_RATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "GYRO_BIAS", make_descriptor(t_RateElementsType::wrap_Object(*RateElementsType::GYRO_BIAS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "NONE", make_descriptor(t_RateElementsType::wrap_Object(*RateElementsType::NONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "Q_DOT", make_descriptor(t_RateElementsType::wrap_Object(*RateElementsType::Q_DOT)));
              }

              static PyObject *t_RateElementsType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RateElementsType::initializeClass, 1)))
                  return NULL;
                return t_RateElementsType::wrap_Object(RateElementsType(((t_RateElementsType *) arg)->object.this$));
              }
              static PyObject *t_RateElementsType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RateElementsType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_RateElementsType_of_(t_RateElementsType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_RateElementsType_getUnits(t_RateElementsType *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_RateElementsType_toAngular(t_RateElementsType *self, PyObject *args)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::Rotation a2((jobject) NULL);
                jint a3;
                JArray< jdouble > a4((jobject) NULL);
                ::org::orekit::utils::TimeStampedAngularCoordinates result((jobject) NULL);

                if (!parseArgs(args, "kKkI[D", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a2, &a3, &a4))
                {
                  OBJ_CALL(result = self->object.toAngular(a0, a1, a2, a3, a4));
                  return ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "toAngular", args);
                return NULL;
              }

              static PyObject *t_RateElementsType_toString(t_RateElementsType *self, PyObject *args)
              {
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.toString());
                  return j2p(result);
                }

                return callSuper(PY_TYPE(RateElementsType), (PyObject *) self, "toString", args, 2);
              }

              static PyObject *t_RateElementsType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                RateElementsType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::valueOf(a0));
                  return t_RateElementsType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_RateElementsType_values(PyTypeObject *type)
              {
                JArray< RateElementsType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::values());
                return JArray<jobject>(result.this$).wrap(t_RateElementsType::wrap_jobject);
              }
              static PyObject *t_RateElementsType_get__parameters_(t_RateElementsType *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_RateElementsType_get__units(t_RateElementsType *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(value);
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
#include "org/orekit/attitudes/AttitudesSequence.h"
#include "org/orekit/propagation/FieldPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/attitudes/AttitudesSequence$SwitchHandler.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AttitudesSequence::class$ = NULL;
      jmethodID *AttitudesSequence::mids$ = NULL;
      bool AttitudesSequence::live$ = false;

      jclass AttitudesSequence::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AttitudesSequence");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addSwitchingCondition_3344837cede29df1] = env->getMethodID(cls, "addSwitchingCondition", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/propagation/events/EventDetector;ZZDLorg/orekit/utils/AngularDerivativesFilter;Lorg/orekit/attitudes/AttitudesSequence$SwitchHandler;)V");
          mids$[mid_getAttitude_896ee4d68989b1e8] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_21845cfb0034fe1c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitudeRotation_6acae55a2f5d3ab4] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getAttitudeRotation_1bc07ea175743b30] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_registerSwitchEvents_7077d4247ef1c4a5] = env->getMethodID(cls, "registerSwitchEvents", "(Lorg/orekit/propagation/Propagator;)V");
          mids$[mid_registerSwitchEvents_3fe3cc96d879b6c1] = env->getMethodID(cls, "registerSwitchEvents", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/FieldPropagator;)V");
          mids$[mid_resetActiveProvider_8e4d3ea100bc0095] = env->getMethodID(cls, "resetActiveProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AttitudesSequence::AttitudesSequence() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void AttitudesSequence::addSwitchingCondition(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::propagation::events::EventDetector & a2, jboolean a3, jboolean a4, jdouble a5, const ::org::orekit::utils::AngularDerivativesFilter & a6, const ::org::orekit::attitudes::AttitudesSequence$SwitchHandler & a7) const
      {
        env->callVoidMethod(this$, mids$[mid_addSwitchingCondition_3344837cede29df1], a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$, a7.this$);
      }

      ::org::orekit::attitudes::FieldAttitude AttitudesSequence::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_896ee4d68989b1e8], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude AttitudesSequence::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_21845cfb0034fe1c], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation AttitudesSequence::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_6acae55a2f5d3ab4], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AttitudesSequence::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_1bc07ea175743b30], a0.this$, a1.this$, a2.this$));
      }

      void AttitudesSequence::registerSwitchEvents(const ::org::orekit::propagation::Propagator & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_registerSwitchEvents_7077d4247ef1c4a5], a0.this$);
      }

      void AttitudesSequence::registerSwitchEvents(const ::org::hipparchus::Field & a0, const ::org::orekit::propagation::FieldPropagator & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_registerSwitchEvents_3fe3cc96d879b6c1], a0.this$, a1.this$);
      }

      void AttitudesSequence::resetActiveProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_resetActiveProvider_8e4d3ea100bc0095], a0.this$);
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
      static PyObject *t_AttitudesSequence_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudesSequence_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AttitudesSequence_init_(t_AttitudesSequence *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AttitudesSequence_addSwitchingCondition(t_AttitudesSequence *self, PyObject *args);
      static PyObject *t_AttitudesSequence_getAttitude(t_AttitudesSequence *self, PyObject *args);
      static PyObject *t_AttitudesSequence_getAttitudeRotation(t_AttitudesSequence *self, PyObject *args);
      static PyObject *t_AttitudesSequence_registerSwitchEvents(t_AttitudesSequence *self, PyObject *args);
      static PyObject *t_AttitudesSequence_resetActiveProvider(t_AttitudesSequence *self, PyObject *arg);

      static PyMethodDef t_AttitudesSequence__methods_[] = {
        DECLARE_METHOD(t_AttitudesSequence, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudesSequence, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudesSequence, addSwitchingCondition, METH_VARARGS),
        DECLARE_METHOD(t_AttitudesSequence, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_AttitudesSequence, getAttitudeRotation, METH_VARARGS),
        DECLARE_METHOD(t_AttitudesSequence, registerSwitchEvents, METH_VARARGS),
        DECLARE_METHOD(t_AttitudesSequence, resetActiveProvider, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AttitudesSequence)[] = {
        { Py_tp_methods, t_AttitudesSequence__methods_ },
        { Py_tp_init, (void *) t_AttitudesSequence_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AttitudesSequence)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AttitudesSequence, t_AttitudesSequence, AttitudesSequence);

      void t_AttitudesSequence::install(PyObject *module)
      {
        installType(&PY_TYPE(AttitudesSequence), &PY_TYPE_DEF(AttitudesSequence), module, "AttitudesSequence", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence), "SwitchHandler", make_descriptor(&PY_TYPE_DEF(AttitudesSequence$SwitchHandler)));
      }

      void t_AttitudesSequence::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence), "class_", make_descriptor(AttitudesSequence::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence), "wrapfn_", make_descriptor(t_AttitudesSequence::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AttitudesSequence_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AttitudesSequence::initializeClass, 1)))
          return NULL;
        return t_AttitudesSequence::wrap_Object(AttitudesSequence(((t_AttitudesSequence *) arg)->object.this$));
      }
      static PyObject *t_AttitudesSequence_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AttitudesSequence::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AttitudesSequence_init_(t_AttitudesSequence *self, PyObject *args, PyObject *kwds)
      {
        AttitudesSequence object((jobject) NULL);

        INT_CALL(object = AttitudesSequence());
        self->object = object;

        return 0;
      }

      static PyObject *t_AttitudesSequence_addSwitchingCondition(t_AttitudesSequence *self, PyObject *args)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
        ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
        ::org::orekit::propagation::events::EventDetector a2((jobject) NULL);
        jboolean a3;
        jboolean a4;
        jdouble a5;
        ::org::orekit::utils::AngularDerivativesFilter a6((jobject) NULL);
        PyTypeObject **p6;
        ::org::orekit::attitudes::AttitudesSequence$SwitchHandler a7((jobject) NULL);

        if (!parseArgs(args, "kkkZZDKk", ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::org::orekit::attitudes::AttitudesSequence$SwitchHandler::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a7))
        {
          OBJ_CALL(self->object.addSwitchingCondition(a0, a1, a2, a3, a4, a5, a6, a7));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addSwitchingCondition", args);
        return NULL;
      }

      static PyObject *t_AttitudesSequence_getAttitude(t_AttitudesSequence *self, PyObject *args)
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

      static PyObject *t_AttitudesSequence_getAttitudeRotation(t_AttitudesSequence *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
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
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitudeRotation", args);
        return NULL;
      }

      static PyObject *t_AttitudesSequence_registerSwitchEvents(t_AttitudesSequence *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::Propagator a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::Propagator::initializeClass, &a0))
            {
              OBJ_CALL(self->object.registerSwitchEvents(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::FieldPropagator a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::propagation::FieldPropagator::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldPropagator::parameters_))
            {
              OBJ_CALL(self->object.registerSwitchEvents(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "registerSwitchEvents", args);
        return NULL;
      }

      static PyObject *t_AttitudesSequence_resetActiveProvider(t_AttitudesSequence *self, PyObject *arg)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.resetActiveProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "resetActiveProvider", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType.h"
#include "java/util/List.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeElementsType::class$ = NULL;
              jmethodID *AttitudeElementsType::mids$ = NULL;
              bool AttitudeElementsType::live$ = false;
              AttitudeElementsType *AttitudeElementsType::DCM = NULL;
              AttitudeElementsType *AttitudeElementsType::EULER_ANGLES = NULL;
              AttitudeElementsType *AttitudeElementsType::QUATERNION = NULL;

              jclass AttitudeElementsType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_getUnits_e62d3bb06d56d7e3] = env->getMethodID(cls, "getUnits", "()Ljava/util/List;");
                  mids$[mid_toRotation_47406594fa00ef12] = env->getMethodID(cls, "toRotation", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;[D)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
                  mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                  mids$[mid_valueOf_8c3c0048982055b5] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;");
                  mids$[mid_values_f8c6bd7604adea5c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DCM = new AttitudeElementsType(env->getStaticObjectField(cls, "DCM", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;"));
                  EULER_ANGLES = new AttitudeElementsType(env->getStaticObjectField(cls, "EULER_ANGLES", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;"));
                  QUATERNION = new AttitudeElementsType(env->getStaticObjectField(cls, "QUATERNION", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::util::List AttitudeElementsType::getUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUnits_e62d3bb06d56d7e3]));
              }

              ::org::hipparchus::geometry::euclidean::threed::Rotation AttitudeElementsType::toRotation(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0, const JArray< jdouble > & a1) const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_toRotation_47406594fa00ef12], a0.this$, a1.this$));
              }

              ::java::lang::String AttitudeElementsType::toString() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
              }

              AttitudeElementsType AttitudeElementsType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeElementsType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8c3c0048982055b5], a0.this$));
              }

              JArray< AttitudeElementsType > AttitudeElementsType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeElementsType >(env->callStaticObjectMethod(cls, mids$[mid_values_f8c6bd7604adea5c]));
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
              static PyObject *t_AttitudeElementsType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeElementsType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeElementsType_of_(t_AttitudeElementsType *self, PyObject *args);
              static PyObject *t_AttitudeElementsType_getUnits(t_AttitudeElementsType *self);
              static PyObject *t_AttitudeElementsType_toRotation(t_AttitudeElementsType *self, PyObject *args);
              static PyObject *t_AttitudeElementsType_toString(t_AttitudeElementsType *self, PyObject *args);
              static PyObject *t_AttitudeElementsType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeElementsType_values(PyTypeObject *type);
              static PyObject *t_AttitudeElementsType_get__units(t_AttitudeElementsType *self, void *data);
              static PyObject *t_AttitudeElementsType_get__parameters_(t_AttitudeElementsType *self, void *data);
              static PyGetSetDef t_AttitudeElementsType__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeElementsType, units),
                DECLARE_GET_FIELD(t_AttitudeElementsType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeElementsType__methods_[] = {
                DECLARE_METHOD(t_AttitudeElementsType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeElementsType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeElementsType, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeElementsType, getUnits, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeElementsType, toRotation, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeElementsType, toString, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeElementsType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeElementsType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeElementsType)[] = {
                { Py_tp_methods, t_AttitudeElementsType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeElementsType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeElementsType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeElementsType, t_AttitudeElementsType, AttitudeElementsType);
              PyObject *t_AttitudeElementsType::wrap_Object(const AttitudeElementsType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeElementsType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeElementsType *self = (t_AttitudeElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeElementsType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeElementsType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeElementsType *self = (t_AttitudeElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeElementsType::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeElementsType), &PY_TYPE_DEF(AttitudeElementsType), module, "AttitudeElementsType", 0);
              }

              void t_AttitudeElementsType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "class_", make_descriptor(AttitudeElementsType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "wrapfn_", make_descriptor(t_AttitudeElementsType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeElementsType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "DCM", make_descriptor(t_AttitudeElementsType::wrap_Object(*AttitudeElementsType::DCM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "EULER_ANGLES", make_descriptor(t_AttitudeElementsType::wrap_Object(*AttitudeElementsType::EULER_ANGLES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "QUATERNION", make_descriptor(t_AttitudeElementsType::wrap_Object(*AttitudeElementsType::QUATERNION)));
              }

              static PyObject *t_AttitudeElementsType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeElementsType::initializeClass, 1)))
                  return NULL;
                return t_AttitudeElementsType::wrap_Object(AttitudeElementsType(((t_AttitudeElementsType *) arg)->object.this$));
              }
              static PyObject *t_AttitudeElementsType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeElementsType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeElementsType_of_(t_AttitudeElementsType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeElementsType_getUnits(t_AttitudeElementsType *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_AttitudeElementsType_toRotation(t_AttitudeElementsType *self, PyObject *args)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< jdouble > a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

                if (!parseArgs(args, "K[D", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a1))
                {
                  OBJ_CALL(result = self->object.toRotation(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "toRotation", args);
                return NULL;
              }

              static PyObject *t_AttitudeElementsType_toString(t_AttitudeElementsType *self, PyObject *args)
              {
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.toString());
                  return j2p(result);
                }

                return callSuper(PY_TYPE(AttitudeElementsType), (PyObject *) self, "toString", args, 2);
              }

              static PyObject *t_AttitudeElementsType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeElementsType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::valueOf(a0));
                  return t_AttitudeElementsType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeElementsType_values(PyTypeObject *type)
              {
                JArray< AttitudeElementsType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeElementsType::wrap_jobject);
              }
              static PyObject *t_AttitudeElementsType_get__parameters_(t_AttitudeElementsType *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_AttitudeElementsType_get__units(t_AttitudeElementsType *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(value);
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
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1020::class$ = NULL;
              jmethodID *Rtcm1020::mids$ = NULL;
              bool Rtcm1020::live$ = false;

              jclass Rtcm1020::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_3f7b02eb1de4610b] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020Data;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1020::Rtcm1020(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1020Data & a1) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_3f7b02eb1de4610b, a0, a1.this$)) {}
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
              static PyObject *t_Rtcm1020_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1020_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1020_of_(t_Rtcm1020 *self, PyObject *args);
              static int t_Rtcm1020_init_(t_Rtcm1020 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1020_get__parameters_(t_Rtcm1020 *self, void *data);
              static PyGetSetDef t_Rtcm1020__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1020, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1020__methods_[] = {
                DECLARE_METHOD(t_Rtcm1020, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1020, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1020, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1020)[] = {
                { Py_tp_methods, t_Rtcm1020__methods_ },
                { Py_tp_init, (void *) t_Rtcm1020_init_ },
                { Py_tp_getset, t_Rtcm1020__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1020)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1020, t_Rtcm1020, Rtcm1020);
              PyObject *t_Rtcm1020::wrap_Object(const Rtcm1020& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1020::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1020 *self = (t_Rtcm1020 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_Rtcm1020::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1020::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1020 *self = (t_Rtcm1020 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_Rtcm1020::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1020), &PY_TYPE_DEF(Rtcm1020), module, "Rtcm1020", 0);
              }

              void t_Rtcm1020::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1020), "class_", make_descriptor(Rtcm1020::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1020), "wrapfn_", make_descriptor(t_Rtcm1020::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1020), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1020_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1020::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1020::wrap_Object(Rtcm1020(((t_Rtcm1020 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1020_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1020::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1020_of_(t_Rtcm1020 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1020_init_(t_Rtcm1020 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1020Data a1((jobject) NULL);
                Rtcm1020 object((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1020Data::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Rtcm1020(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::ephemeris::PY_TYPE(Rtcm1020Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1020_get__parameters_(t_Rtcm1020 *self, void *data)
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
#include "org/orekit/rugged/raster/TilesCache.h"
#include "org/orekit/rugged/raster/TileFactory.h"
#include "org/orekit/rugged/raster/Tile.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/raster/TileUpdater.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *TilesCache::class$ = NULL;
        jmethodID *TilesCache::mids$ = NULL;
        bool TilesCache::live$ = false;

        jclass TilesCache::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/TilesCache");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c48a31ee49c73abf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/raster/TileFactory;Lorg/orekit/rugged/raster/TileUpdater;I)V");
            mids$[mid_getTile_5edab88b577f0831] = env->getMethodID(cls, "getTile", "(DD)Lorg/orekit/rugged/raster/Tile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TilesCache::TilesCache(const ::org::orekit::rugged::raster::TileFactory & a0, const ::org::orekit::rugged::raster::TileUpdater & a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c48a31ee49c73abf, a0.this$, a1.this$, a2)) {}

        ::org::orekit::rugged::raster::Tile TilesCache::getTile(jdouble a0, jdouble a1) const
        {
          return ::org::orekit::rugged::raster::Tile(env->callObjectMethod(this$, mids$[mid_getTile_5edab88b577f0831], a0, a1));
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
        static PyObject *t_TilesCache_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TilesCache_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TilesCache_of_(t_TilesCache *self, PyObject *args);
        static int t_TilesCache_init_(t_TilesCache *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TilesCache_getTile(t_TilesCache *self, PyObject *args);
        static PyObject *t_TilesCache_get__parameters_(t_TilesCache *self, void *data);
        static PyGetSetDef t_TilesCache__fields_[] = {
          DECLARE_GET_FIELD(t_TilesCache, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TilesCache__methods_[] = {
          DECLARE_METHOD(t_TilesCache, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TilesCache, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TilesCache, of_, METH_VARARGS),
          DECLARE_METHOD(t_TilesCache, getTile, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TilesCache)[] = {
          { Py_tp_methods, t_TilesCache__methods_ },
          { Py_tp_init, (void *) t_TilesCache_init_ },
          { Py_tp_getset, t_TilesCache__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TilesCache)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TilesCache, t_TilesCache, TilesCache);
        PyObject *t_TilesCache::wrap_Object(const TilesCache& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TilesCache::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TilesCache *self = (t_TilesCache *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_TilesCache::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TilesCache::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TilesCache *self = (t_TilesCache *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_TilesCache::install(PyObject *module)
        {
          installType(&PY_TYPE(TilesCache), &PY_TYPE_DEF(TilesCache), module, "TilesCache", 0);
        }

        void t_TilesCache::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TilesCache), "class_", make_descriptor(TilesCache::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TilesCache), "wrapfn_", make_descriptor(t_TilesCache::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TilesCache), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TilesCache_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TilesCache::initializeClass, 1)))
            return NULL;
          return t_TilesCache::wrap_Object(TilesCache(((t_TilesCache *) arg)->object.this$));
        }
        static PyObject *t_TilesCache_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TilesCache::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TilesCache_of_(t_TilesCache *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_TilesCache_init_(t_TilesCache *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::rugged::raster::TileFactory a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::rugged::raster::TileUpdater a1((jobject) NULL);
          jint a2;
          TilesCache object((jobject) NULL);

          if (!parseArgs(args, "KkI", ::org::orekit::rugged::raster::TileFactory::initializeClass, ::org::orekit::rugged::raster::TileUpdater::initializeClass, &a0, &p0, ::org::orekit::rugged::raster::t_TileFactory::parameters_, &a1, &a2))
          {
            INT_CALL(object = TilesCache(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_TilesCache_getTile(t_TilesCache *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::rugged::raster::Tile result((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getTile(a0, a1));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::rugged::raster::t_Tile::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getTile", args);
          return NULL;
        }
        static PyObject *t_TilesCache_get__parameters_(t_TilesCache *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/regression/AbstractMultipleLinearRegression.h"
#include "org/hipparchus/stat/regression/MultipleLinearRegression.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *AbstractMultipleLinearRegression::class$ = NULL;
        jmethodID *AbstractMultipleLinearRegression::mids$ = NULL;
        bool AbstractMultipleLinearRegression::live$ = false;

        jclass AbstractMultipleLinearRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/AbstractMultipleLinearRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_estimateErrorVariance_b74f83833fdad017] = env->getMethodID(cls, "estimateErrorVariance", "()D");
            mids$[mid_estimateRegressandVariance_b74f83833fdad017] = env->getMethodID(cls, "estimateRegressandVariance", "()D");
            mids$[mid_estimateRegressionParameters_25e1757a36c4dde2] = env->getMethodID(cls, "estimateRegressionParameters", "()[D");
            mids$[mid_estimateRegressionParametersStandardErrors_25e1757a36c4dde2] = env->getMethodID(cls, "estimateRegressionParametersStandardErrors", "()[D");
            mids$[mid_estimateRegressionParametersVariance_3b7b373db8e7887f] = env->getMethodID(cls, "estimateRegressionParametersVariance", "()[[D");
            mids$[mid_estimateRegressionStandardError_b74f83833fdad017] = env->getMethodID(cls, "estimateRegressionStandardError", "()D");
            mids$[mid_estimateResiduals_25e1757a36c4dde2] = env->getMethodID(cls, "estimateResiduals", "()[D");
            mids$[mid_isNoIntercept_9ab94ac1dc23b105] = env->getMethodID(cls, "isNoIntercept", "()Z");
            mids$[mid_newSampleData_4484ad1f15b73c7a] = env->getMethodID(cls, "newSampleData", "([DII)V");
            mids$[mid_setNoIntercept_fcb96c98de6fad04] = env->getMethodID(cls, "setNoIntercept", "(Z)V");
            mids$[mid_getY_3a10cc75bd070d84] = env->getMethodID(cls, "getY", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getX_f77d745f2128c391] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_newXSampleData_07adb42ffaa97d31] = env->getMethodID(cls, "newXSampleData", "([[D)V");
            mids$[mid_calculateBeta_3a10cc75bd070d84] = env->getMethodID(cls, "calculateBeta", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_calculateBetaVariance_f77d745f2128c391] = env->getMethodID(cls, "calculateBetaVariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_validateSampleData_8a9d29a6bd2c9070] = env->getMethodID(cls, "validateSampleData", "([[D[D)V");
            mids$[mid_newYSampleData_ab69da052b88f50c] = env->getMethodID(cls, "newYSampleData", "([D)V");
            mids$[mid_calculateResiduals_3a10cc75bd070d84] = env->getMethodID(cls, "calculateResiduals", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_validateCovarianceData_32c2259f7dd7bcaf] = env->getMethodID(cls, "validateCovarianceData", "([[D[[D)V");
            mids$[mid_calculateYVariance_b74f83833fdad017] = env->getMethodID(cls, "calculateYVariance", "()D");
            mids$[mid_calculateErrorVariance_b74f83833fdad017] = env->getMethodID(cls, "calculateErrorVariance", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractMultipleLinearRegression::AbstractMultipleLinearRegression() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble AbstractMultipleLinearRegression::estimateErrorVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_estimateErrorVariance_b74f83833fdad017]);
        }

        jdouble AbstractMultipleLinearRegression::estimateRegressandVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_estimateRegressandVariance_b74f83833fdad017]);
        }

        JArray< jdouble > AbstractMultipleLinearRegression::estimateRegressionParameters() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParameters_25e1757a36c4dde2]));
        }

        JArray< jdouble > AbstractMultipleLinearRegression::estimateRegressionParametersStandardErrors() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParametersStandardErrors_25e1757a36c4dde2]));
        }

        JArray< JArray< jdouble > > AbstractMultipleLinearRegression::estimateRegressionParametersVariance() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParametersVariance_3b7b373db8e7887f]));
        }

        jdouble AbstractMultipleLinearRegression::estimateRegressionStandardError() const
        {
          return env->callDoubleMethod(this$, mids$[mid_estimateRegressionStandardError_b74f83833fdad017]);
        }

        JArray< jdouble > AbstractMultipleLinearRegression::estimateResiduals() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateResiduals_25e1757a36c4dde2]));
        }

        jboolean AbstractMultipleLinearRegression::isNoIntercept() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isNoIntercept_9ab94ac1dc23b105]);
        }

        void AbstractMultipleLinearRegression::newSampleData(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_newSampleData_4484ad1f15b73c7a], a0.this$, a1, a2);
        }

        void AbstractMultipleLinearRegression::setNoIntercept(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNoIntercept_fcb96c98de6fad04], a0);
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
        static PyObject *t_AbstractMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AbstractMultipleLinearRegression_init_(t_AbstractMultipleLinearRegression *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AbstractMultipleLinearRegression_estimateErrorVariance(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressandVariance(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParameters(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParametersStandardErrors(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParametersVariance(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionStandardError(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateResiduals(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_isNoIntercept(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_newSampleData(t_AbstractMultipleLinearRegression *self, PyObject *args);
        static PyObject *t_AbstractMultipleLinearRegression_setNoIntercept(t_AbstractMultipleLinearRegression *self, PyObject *arg);
        static PyObject *t_AbstractMultipleLinearRegression_get__noIntercept(t_AbstractMultipleLinearRegression *self, void *data);
        static int t_AbstractMultipleLinearRegression_set__noIntercept(t_AbstractMultipleLinearRegression *self, PyObject *arg, void *data);
        static PyGetSetDef t_AbstractMultipleLinearRegression__fields_[] = {
          DECLARE_GETSET_FIELD(t_AbstractMultipleLinearRegression, noIntercept),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractMultipleLinearRegression__methods_[] = {
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateErrorVariance, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateRegressandVariance, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateRegressionParameters, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateRegressionParametersStandardErrors, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateRegressionParametersVariance, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateRegressionStandardError, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateResiduals, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, isNoIntercept, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, newSampleData, METH_VARARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, setNoIntercept, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractMultipleLinearRegression)[] = {
          { Py_tp_methods, t_AbstractMultipleLinearRegression__methods_ },
          { Py_tp_init, (void *) t_AbstractMultipleLinearRegression_init_ },
          { Py_tp_getset, t_AbstractMultipleLinearRegression__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractMultipleLinearRegression)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractMultipleLinearRegression, t_AbstractMultipleLinearRegression, AbstractMultipleLinearRegression);

        void t_AbstractMultipleLinearRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractMultipleLinearRegression), &PY_TYPE_DEF(AbstractMultipleLinearRegression), module, "AbstractMultipleLinearRegression", 0);
        }

        void t_AbstractMultipleLinearRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleLinearRegression), "class_", make_descriptor(AbstractMultipleLinearRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleLinearRegression), "wrapfn_", make_descriptor(t_AbstractMultipleLinearRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleLinearRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractMultipleLinearRegression::initializeClass, 1)))
            return NULL;
          return t_AbstractMultipleLinearRegression::wrap_Object(AbstractMultipleLinearRegression(((t_AbstractMultipleLinearRegression *) arg)->object.this$));
        }
        static PyObject *t_AbstractMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractMultipleLinearRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AbstractMultipleLinearRegression_init_(t_AbstractMultipleLinearRegression *self, PyObject *args, PyObject *kwds)
        {
          AbstractMultipleLinearRegression object((jobject) NULL);

          INT_CALL(object = AbstractMultipleLinearRegression());
          self->object = object;

          return 0;
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateErrorVariance(t_AbstractMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.estimateErrorVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressandVariance(t_AbstractMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.estimateRegressandVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParameters(t_AbstractMultipleLinearRegression *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateRegressionParameters());
          return result.wrap();
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParametersStandardErrors(t_AbstractMultipleLinearRegression *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateRegressionParametersStandardErrors());
          return result.wrap();
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParametersVariance(t_AbstractMultipleLinearRegression *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateRegressionParametersVariance());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionStandardError(t_AbstractMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.estimateRegressionStandardError());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateResiduals(t_AbstractMultipleLinearRegression *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateResiduals());
          return result.wrap();
        }

        static PyObject *t_AbstractMultipleLinearRegression_isNoIntercept(t_AbstractMultipleLinearRegression *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isNoIntercept());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractMultipleLinearRegression_newSampleData(t_AbstractMultipleLinearRegression *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.newSampleData(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "newSampleData", args);
          return NULL;
        }

        static PyObject *t_AbstractMultipleLinearRegression_setNoIntercept(t_AbstractMultipleLinearRegression *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setNoIntercept(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNoIntercept", arg);
          return NULL;
        }

        static PyObject *t_AbstractMultipleLinearRegression_get__noIntercept(t_AbstractMultipleLinearRegression *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isNoIntercept());
          Py_RETURN_BOOL(value);
        }
        static int t_AbstractMultipleLinearRegression_set__noIntercept(t_AbstractMultipleLinearRegression *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setNoIntercept(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "noIntercept", arg);
          return -1;
        }
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
          mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble UnivariateFunction::value(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
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
#include "org/hipparchus/special/Beta.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {

      ::java::lang::Class *Beta::class$ = NULL;
      jmethodID *Beta::mids$ = NULL;
      bool Beta::live$ = false;

      jclass Beta::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/special/Beta");

          mids$ = new jmethodID[max_mid];
          mids$[mid_logBeta_99e3200dafc19573] = env->getStaticMethodID(cls, "logBeta", "(DD)D");
          mids$[mid_regularizedBeta_f804f816b79164cb] = env->getStaticMethodID(cls, "regularizedBeta", "(DDD)D");
          mids$[mid_regularizedBeta_08eba2463884b341] = env->getStaticMethodID(cls, "regularizedBeta", "(DDDD)D");
          mids$[mid_regularizedBeta_2d76000a36416433] = env->getStaticMethodID(cls, "regularizedBeta", "(DDDI)D");
          mids$[mid_regularizedBeta_0b772ea14dc134fb] = env->getStaticMethodID(cls, "regularizedBeta", "(DDDDI)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Beta::logBeta(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_logBeta_99e3200dafc19573], a0, a1);
      }

      jdouble Beta::regularizedBeta(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedBeta_f804f816b79164cb], a0, a1, a2);
      }

      jdouble Beta::regularizedBeta(jdouble a0, jdouble a1, jdouble a2, jdouble a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedBeta_08eba2463884b341], a0, a1, a2, a3);
      }

      jdouble Beta::regularizedBeta(jdouble a0, jdouble a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedBeta_2d76000a36416433], a0, a1, a2, a3);
      }

      jdouble Beta::regularizedBeta(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedBeta_0b772ea14dc134fb], a0, a1, a2, a3, a4);
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
      static PyObject *t_Beta_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Beta_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Beta_logBeta(PyTypeObject *type, PyObject *args);
      static PyObject *t_Beta_regularizedBeta(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_Beta__methods_[] = {
        DECLARE_METHOD(t_Beta, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Beta, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Beta, logBeta, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Beta, regularizedBeta, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Beta)[] = {
        { Py_tp_methods, t_Beta__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Beta)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Beta, t_Beta, Beta);

      void t_Beta::install(PyObject *module)
      {
        installType(&PY_TYPE(Beta), &PY_TYPE_DEF(Beta), module, "Beta", 0);
      }

      void t_Beta::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Beta), "class_", make_descriptor(Beta::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Beta), "wrapfn_", make_descriptor(t_Beta::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Beta), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Beta_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Beta::initializeClass, 1)))
          return NULL;
        return t_Beta::wrap_Object(Beta(((t_Beta *) arg)->object.this$));
      }
      static PyObject *t_Beta_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Beta::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Beta_logBeta(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::special::Beta::logBeta(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "logBeta", args);
        return NULL;
      }

      static PyObject *t_Beta_regularizedBeta(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble result;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Beta::regularizedBeta(a0, a1, a2));
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
              OBJ_CALL(result = ::org::hipparchus::special::Beta::regularizedBeta(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jint a3;
            jdouble result;

            if (!parseArgs(args, "DDDI", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Beta::regularizedBeta(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "DDDDI", &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Beta::regularizedBeta(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "regularizedBeta", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D.h"
#include "org/hipparchus/geometry/hull/ConvexHull.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/euclidean/twod/Segment.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {

            ::java::lang::Class *ConvexHull2D::class$ = NULL;
            jmethodID *ConvexHull2D::mids$ = NULL;
            bool ConvexHull2D::live$ = false;

            jclass ConvexHull2D::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_e715a6a566179e6d] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)V");
                mids$[mid_createRegion_3698fd1911856e70] = env->getMethodID(cls, "createRegion", "()Lorg/hipparchus/geometry/partitioning/Region;");
                mids$[mid_getLineSegments_de8474dc301ff82f] = env->getMethodID(cls, "getLineSegments", "()[Lorg/hipparchus/geometry/euclidean/twod/Segment;");
                mids$[mid_getVertices_4d39929bc8263843] = env->getMethodID(cls, "getVertices", "()[Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ConvexHull2D::ConvexHull2D(const JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e715a6a566179e6d, a0.this$, a1)) {}

            ::org::hipparchus::geometry::partitioning::Region ConvexHull2D::createRegion() const
            {
              return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_createRegion_3698fd1911856e70]));
            }

            JArray< ::org::hipparchus::geometry::euclidean::twod::Segment > ConvexHull2D::getLineSegments() const
            {
              return JArray< ::org::hipparchus::geometry::euclidean::twod::Segment >(env->callObjectMethod(this$, mids$[mid_getLineSegments_de8474dc301ff82f]));
            }

            JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > ConvexHull2D::getVertices() const
            {
              return JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D >(env->callObjectMethod(this$, mids$[mid_getVertices_4d39929bc8263843]));
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
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {
            static PyObject *t_ConvexHull2D_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ConvexHull2D_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ConvexHull2D_init_(t_ConvexHull2D *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ConvexHull2D_createRegion(t_ConvexHull2D *self);
            static PyObject *t_ConvexHull2D_getLineSegments(t_ConvexHull2D *self);
            static PyObject *t_ConvexHull2D_getVertices(t_ConvexHull2D *self);
            static PyObject *t_ConvexHull2D_get__lineSegments(t_ConvexHull2D *self, void *data);
            static PyObject *t_ConvexHull2D_get__vertices(t_ConvexHull2D *self, void *data);
            static PyGetSetDef t_ConvexHull2D__fields_[] = {
              DECLARE_GET_FIELD(t_ConvexHull2D, lineSegments),
              DECLARE_GET_FIELD(t_ConvexHull2D, vertices),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ConvexHull2D__methods_[] = {
              DECLARE_METHOD(t_ConvexHull2D, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ConvexHull2D, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ConvexHull2D, createRegion, METH_NOARGS),
              DECLARE_METHOD(t_ConvexHull2D, getLineSegments, METH_NOARGS),
              DECLARE_METHOD(t_ConvexHull2D, getVertices, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ConvexHull2D)[] = {
              { Py_tp_methods, t_ConvexHull2D__methods_ },
              { Py_tp_init, (void *) t_ConvexHull2D_init_ },
              { Py_tp_getset, t_ConvexHull2D__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ConvexHull2D)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ConvexHull2D, t_ConvexHull2D, ConvexHull2D);

            void t_ConvexHull2D::install(PyObject *module)
            {
              installType(&PY_TYPE(ConvexHull2D), &PY_TYPE_DEF(ConvexHull2D), module, "ConvexHull2D", 0);
            }

            void t_ConvexHull2D::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull2D), "class_", make_descriptor(ConvexHull2D::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull2D), "wrapfn_", make_descriptor(t_ConvexHull2D::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull2D), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ConvexHull2D_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ConvexHull2D::initializeClass, 1)))
                return NULL;
              return t_ConvexHull2D::wrap_Object(ConvexHull2D(((t_ConvexHull2D *) arg)->object.this$));
            }
            static PyObject *t_ConvexHull2D_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ConvexHull2D::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ConvexHull2D_init_(t_ConvexHull2D *self, PyObject *args, PyObject *kwds)
            {
              JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > a0((jobject) NULL);
              jdouble a1;
              ConvexHull2D object((jobject) NULL);

              if (!parseArgs(args, "[kD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
              {
                INT_CALL(object = ConvexHull2D(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_ConvexHull2D_createRegion(t_ConvexHull2D *self)
            {
              ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);
              OBJ_CALL(result = self->object.createRegion());
              return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D));
            }

            static PyObject *t_ConvexHull2D_getLineSegments(t_ConvexHull2D *self)
            {
              JArray< ::org::hipparchus::geometry::euclidean::twod::Segment > result((jobject) NULL);
              OBJ_CALL(result = self->object.getLineSegments());
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::geometry::euclidean::twod::t_Segment::wrap_jobject);
            }

            static PyObject *t_ConvexHull2D_getVertices(t_ConvexHull2D *self)
            {
              JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > result((jobject) NULL);
              OBJ_CALL(result = self->object.getVertices());
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_jobject);
            }

            static PyObject *t_ConvexHull2D_get__lineSegments(t_ConvexHull2D *self, void *data)
            {
              JArray< ::org::hipparchus::geometry::euclidean::twod::Segment > value((jobject) NULL);
              OBJ_CALL(value = self->object.getLineSegments());
              return JArray<jobject>(value.this$).wrap(::org::hipparchus::geometry::euclidean::twod::t_Segment::wrap_jobject);
            }

            static PyObject *t_ConvexHull2D_get__vertices(t_ConvexHull2D *self, void *data)
            {
              JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > value((jobject) NULL);
              OBJ_CALL(value = self->object.getVertices());
              return JArray<jobject>(value.this$).wrap(::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_jobject);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/MaxIter.h"
#include "org/hipparchus/optim/MaxIter.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *MaxIter::class$ = NULL;
      jmethodID *MaxIter::mids$ = NULL;
      bool MaxIter::live$ = false;

      jclass MaxIter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/MaxIter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_getMaxIter_55546ef6a647f39b] = env->getMethodID(cls, "getMaxIter", "()I");
          mids$[mid_unlimited_68e420291d6ad5b1] = env->getStaticMethodID(cls, "unlimited", "()Lorg/hipparchus/optim/MaxIter;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MaxIter::MaxIter(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      jint MaxIter::getMaxIter() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxIter_55546ef6a647f39b]);
      }

      MaxIter MaxIter::unlimited()
      {
        jclass cls = env->getClass(initializeClass);
        return MaxIter(env->callStaticObjectMethod(cls, mids$[mid_unlimited_68e420291d6ad5b1]));
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
      static PyObject *t_MaxIter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MaxIter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MaxIter_init_(t_MaxIter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MaxIter_getMaxIter(t_MaxIter *self);
      static PyObject *t_MaxIter_unlimited(PyTypeObject *type);
      static PyObject *t_MaxIter_get__maxIter(t_MaxIter *self, void *data);
      static PyGetSetDef t_MaxIter__fields_[] = {
        DECLARE_GET_FIELD(t_MaxIter, maxIter),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MaxIter__methods_[] = {
        DECLARE_METHOD(t_MaxIter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MaxIter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MaxIter, getMaxIter, METH_NOARGS),
        DECLARE_METHOD(t_MaxIter, unlimited, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MaxIter)[] = {
        { Py_tp_methods, t_MaxIter__methods_ },
        { Py_tp_init, (void *) t_MaxIter_init_ },
        { Py_tp_getset, t_MaxIter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MaxIter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MaxIter, t_MaxIter, MaxIter);

      void t_MaxIter::install(PyObject *module)
      {
        installType(&PY_TYPE(MaxIter), &PY_TYPE_DEF(MaxIter), module, "MaxIter", 0);
      }

      void t_MaxIter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxIter), "class_", make_descriptor(MaxIter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxIter), "wrapfn_", make_descriptor(t_MaxIter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxIter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MaxIter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MaxIter::initializeClass, 1)))
          return NULL;
        return t_MaxIter::wrap_Object(MaxIter(((t_MaxIter *) arg)->object.this$));
      }
      static PyObject *t_MaxIter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MaxIter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MaxIter_init_(t_MaxIter *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        MaxIter object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = MaxIter(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_MaxIter_getMaxIter(t_MaxIter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxIter());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MaxIter_unlimited(PyTypeObject *type)
      {
        MaxIter result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::optim::MaxIter::unlimited());
        return t_MaxIter::wrap_Object(result);
      }

      static PyObject *t_MaxIter_get__maxIter(t_MaxIter *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxIter());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityData.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/models/earth/atmosphere/DTM2000InputParameters.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00InputParameters.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/GenericTimeStampedCache.h"
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *AbstractSolarActivityData::class$ = NULL;
            jmethodID *AbstractSolarActivityData::mids$ = NULL;
            bool AbstractSolarActivityData::live$ = false;

            jclass AbstractSolarActivityData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/AbstractSolarActivityData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_54b84112f8bb03a0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader;Lorg/orekit/time/TimeScale;IDDD)V");
                mids$[mid_getCache_ee138515519e3364] = env->getMethodID(cls, "getCache", "()Lorg/orekit/utils/GenericTimeStampedCache;");
                mids$[mid_getMaxDate_c325492395d89b24] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMinDate_c325492395d89b24] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getSupportedNames_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
                mids$[mid_getUTC_34d3bda0a8989e3e] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/TimeScale;");
                mids$[mid_getLinearInterpolation_85e68520109cae31] = env->getMethodID(cls, "getLinearInterpolation", "(Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityData$LocalSolarActivity;Ljava/util/function/Function;)D");
                mids$[mid_getLinearInterpolation_6bb0710628614626] = env->getMethodID(cls, "getLinearInterpolation", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/function/Function;)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractSolarActivityData::AbstractSolarActivityData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader & a1, const ::org::orekit::time::TimeScale & a2, jint a3, jdouble a4, jdouble a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_54b84112f8bb03a0, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

            ::org::orekit::utils::GenericTimeStampedCache AbstractSolarActivityData::getCache() const
            {
              return ::org::orekit::utils::GenericTimeStampedCache(env->callObjectMethod(this$, mids$[mid_getCache_ee138515519e3364]));
            }

            ::org::orekit::time::AbsoluteDate AbstractSolarActivityData::getMaxDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_c325492395d89b24]));
            }

            ::org::orekit::time::AbsoluteDate AbstractSolarActivityData::getMinDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_c325492395d89b24]));
            }

            ::java::lang::String AbstractSolarActivityData::getSupportedNames() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_1c1fa1e935d6cdcf]));
            }

            ::org::orekit::time::TimeScale AbstractSolarActivityData::getUTC() const
            {
              return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getUTC_34d3bda0a8989e3e]));
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
            static PyObject *t_AbstractSolarActivityData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityData_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityData_of_(t_AbstractSolarActivityData *self, PyObject *args);
            static int t_AbstractSolarActivityData_init_(t_AbstractSolarActivityData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractSolarActivityData_getCache(t_AbstractSolarActivityData *self);
            static PyObject *t_AbstractSolarActivityData_getMaxDate(t_AbstractSolarActivityData *self);
            static PyObject *t_AbstractSolarActivityData_getMinDate(t_AbstractSolarActivityData *self);
            static PyObject *t_AbstractSolarActivityData_getSupportedNames(t_AbstractSolarActivityData *self);
            static PyObject *t_AbstractSolarActivityData_getUTC(t_AbstractSolarActivityData *self);
            static PyObject *t_AbstractSolarActivityData_get__cache(t_AbstractSolarActivityData *self, void *data);
            static PyObject *t_AbstractSolarActivityData_get__maxDate(t_AbstractSolarActivityData *self, void *data);
            static PyObject *t_AbstractSolarActivityData_get__minDate(t_AbstractSolarActivityData *self, void *data);
            static PyObject *t_AbstractSolarActivityData_get__supportedNames(t_AbstractSolarActivityData *self, void *data);
            static PyObject *t_AbstractSolarActivityData_get__uTC(t_AbstractSolarActivityData *self, void *data);
            static PyObject *t_AbstractSolarActivityData_get__parameters_(t_AbstractSolarActivityData *self, void *data);
            static PyGetSetDef t_AbstractSolarActivityData__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractSolarActivityData, cache),
              DECLARE_GET_FIELD(t_AbstractSolarActivityData, maxDate),
              DECLARE_GET_FIELD(t_AbstractSolarActivityData, minDate),
              DECLARE_GET_FIELD(t_AbstractSolarActivityData, supportedNames),
              DECLARE_GET_FIELD(t_AbstractSolarActivityData, uTC),
              DECLARE_GET_FIELD(t_AbstractSolarActivityData, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractSolarActivityData__methods_[] = {
              DECLARE_METHOD(t_AbstractSolarActivityData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityData, of_, METH_VARARGS),
              DECLARE_METHOD(t_AbstractSolarActivityData, getCache, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityData, getMaxDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityData, getMinDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityData, getSupportedNames, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityData, getUTC, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractSolarActivityData)[] = {
              { Py_tp_methods, t_AbstractSolarActivityData__methods_ },
              { Py_tp_init, (void *) t_AbstractSolarActivityData_init_ },
              { Py_tp_getset, t_AbstractSolarActivityData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractSolarActivityData)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractSolarActivityData, t_AbstractSolarActivityData, AbstractSolarActivityData);
            PyObject *t_AbstractSolarActivityData::wrap_Object(const AbstractSolarActivityData& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_AbstractSolarActivityData::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityData *self = (t_AbstractSolarActivityData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_AbstractSolarActivityData::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_AbstractSolarActivityData::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityData *self = (t_AbstractSolarActivityData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_AbstractSolarActivityData::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractSolarActivityData), &PY_TYPE_DEF(AbstractSolarActivityData), module, "AbstractSolarActivityData", 0);
            }

            void t_AbstractSolarActivityData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityData), "class_", make_descriptor(AbstractSolarActivityData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityData), "wrapfn_", make_descriptor(t_AbstractSolarActivityData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityData), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractSolarActivityData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractSolarActivityData::initializeClass, 1)))
                return NULL;
              return t_AbstractSolarActivityData::wrap_Object(AbstractSolarActivityData(((t_AbstractSolarActivityData *) arg)->object.this$));
            }
            static PyObject *t_AbstractSolarActivityData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractSolarActivityData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractSolarActivityData_of_(t_AbstractSolarActivityData *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_AbstractSolarActivityData_init_(t_AbstractSolarActivityData *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::TimeScale a2((jobject) NULL);
              jint a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              AbstractSolarActivityData object((jobject) NULL);

              if (!parseArgs(args, "kKkIDDD", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_AbstractSolarActivityDataLoader::parameters_, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = AbstractSolarActivityData(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractSolarActivityData_getCache(t_AbstractSolarActivityData *self)
            {
              ::org::orekit::utils::GenericTimeStampedCache result((jobject) NULL);
              OBJ_CALL(result = self->object.getCache());
              return ::org::orekit::utils::t_GenericTimeStampedCache::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_AbstractSolarActivityData_getMaxDate(t_AbstractSolarActivityData *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityData_getMinDate(t_AbstractSolarActivityData *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityData_getSupportedNames(t_AbstractSolarActivityData *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getSupportedNames());
              return j2p(result);
            }

            static PyObject *t_AbstractSolarActivityData_getUTC(t_AbstractSolarActivityData *self)
            {
              ::org::orekit::time::TimeScale result((jobject) NULL);
              OBJ_CALL(result = self->object.getUTC());
              return ::org::orekit::time::t_TimeScale::wrap_Object(result);
            }
            static PyObject *t_AbstractSolarActivityData_get__parameters_(t_AbstractSolarActivityData *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AbstractSolarActivityData_get__cache(t_AbstractSolarActivityData *self, void *data)
            {
              ::org::orekit::utils::GenericTimeStampedCache value((jobject) NULL);
              OBJ_CALL(value = self->object.getCache());
              return ::org::orekit::utils::t_GenericTimeStampedCache::wrap_Object(value);
            }

            static PyObject *t_AbstractSolarActivityData_get__maxDate(t_AbstractSolarActivityData *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_AbstractSolarActivityData_get__minDate(t_AbstractSolarActivityData *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_AbstractSolarActivityData_get__supportedNames(t_AbstractSolarActivityData *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getSupportedNames());
              return j2p(value);
            }

            static PyObject *t_AbstractSolarActivityData_get__uTC(t_AbstractSolarActivityData *self, void *data)
            {
              ::org::orekit::time::TimeScale value((jobject) NULL);
              OBJ_CALL(value = self->object.getUTC());
              return ::org::orekit::time::t_TimeScale::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/BaseAbstractFieldUnivariateIntegrator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *BaseAbstractFieldUnivariateIntegrator::class$ = NULL;
        jmethodID *BaseAbstractFieldUnivariateIntegrator::mids$ = NULL;
        bool BaseAbstractFieldUnivariateIntegrator::live$ = false;
        jdouble BaseAbstractFieldUnivariateIntegrator::DEFAULT_ABSOLUTE_ACCURACY = (jdouble) 0;
        jint BaseAbstractFieldUnivariateIntegrator::DEFAULT_MAX_ITERATIONS_COUNT = (jint) 0;
        jint BaseAbstractFieldUnivariateIntegrator::DEFAULT_MIN_ITERATIONS_COUNT = (jint) 0;
        jdouble BaseAbstractFieldUnivariateIntegrator::DEFAULT_RELATIVE_ACCURACY = (jdouble) 0;

        jclass BaseAbstractFieldUnivariateIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/BaseAbstractFieldUnivariateIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_55546ef6a647f39b] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getIterations_55546ef6a647f39b] = env->getMethodID(cls, "getIterations", "()I");
            mids$[mid_getMaximalIterationCount_55546ef6a647f39b] = env->getMethodID(cls, "getMaximalIterationCount", "()I");
            mids$[mid_getMinimalIterationCount_55546ef6a647f39b] = env->getMethodID(cls, "getMinimalIterationCount", "()I");
            mids$[mid_getRelativeAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_integrate_6b15562ea2d5cce9] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_doIntegrate_81520b552cb3fa26] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMin_81520b552cb3fa26] = env->getMethodID(cls, "getMin", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMax_81520b552cb3fa26] = env->getMethodID(cls, "getMax", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_computeObjectiveValue_6e00dc5eb352fe51] = env->getMethodID(cls, "computeObjectiveValue", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_setup_2ce989e8ed78a18c] = env->getMethodID(cls, "setup", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_ABSOLUTE_ACCURACY = env->getStaticDoubleField(cls, "DEFAULT_ABSOLUTE_ACCURACY");
            DEFAULT_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "DEFAULT_MAX_ITERATIONS_COUNT");
            DEFAULT_MIN_ITERATIONS_COUNT = env->getStaticIntField(cls, "DEFAULT_MIN_ITERATIONS_COUNT");
            DEFAULT_RELATIVE_ACCURACY = env->getStaticDoubleField(cls, "DEFAULT_RELATIVE_ACCURACY");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BaseAbstractFieldUnivariateIntegrator::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_b74f83833fdad017]);
        }

        jint BaseAbstractFieldUnivariateIntegrator::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_55546ef6a647f39b]);
        }

        ::org::hipparchus::Field BaseAbstractFieldUnivariateIntegrator::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_04d1f63e17d5c5d4]));
        }

        jint BaseAbstractFieldUnivariateIntegrator::getIterations() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterations_55546ef6a647f39b]);
        }

        jint BaseAbstractFieldUnivariateIntegrator::getMaximalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalIterationCount_55546ef6a647f39b]);
        }

        jint BaseAbstractFieldUnivariateIntegrator::getMinimalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinimalIterationCount_55546ef6a647f39b]);
        }

        jdouble BaseAbstractFieldUnivariateIntegrator::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_b74f83833fdad017]);
        }

        ::org::hipparchus::CalculusFieldElement BaseAbstractFieldUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_6b15562ea2d5cce9], a0, a1.this$, a2.this$, a3.this$));
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
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_of_(t_BaseAbstractFieldUnivariateIntegrator *self, PyObject *args);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getAbsoluteAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getEvaluations(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getField(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getIterations(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getMaximalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getMinimalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getRelativeAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_integrate(t_BaseAbstractFieldUnivariateIntegrator *self, PyObject *args);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__absoluteAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__evaluations(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__field(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__iterations(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__maximalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__minimalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__relativeAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__parameters_(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyGetSetDef t_BaseAbstractFieldUnivariateIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, absoluteAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, evaluations),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, field),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, iterations),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, maximalIterationCount),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, minimalIterationCount),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, relativeAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BaseAbstractFieldUnivariateIntegrator__methods_[] = {
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getField, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getIterations, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getMaximalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getMinimalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, integrate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BaseAbstractFieldUnivariateIntegrator)[] = {
          { Py_tp_methods, t_BaseAbstractFieldUnivariateIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BaseAbstractFieldUnivariateIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BaseAbstractFieldUnivariateIntegrator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BaseAbstractFieldUnivariateIntegrator, t_BaseAbstractFieldUnivariateIntegrator, BaseAbstractFieldUnivariateIntegrator);
        PyObject *t_BaseAbstractFieldUnivariateIntegrator::wrap_Object(const BaseAbstractFieldUnivariateIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseAbstractFieldUnivariateIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseAbstractFieldUnivariateIntegrator *self = (t_BaseAbstractFieldUnivariateIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BaseAbstractFieldUnivariateIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseAbstractFieldUnivariateIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseAbstractFieldUnivariateIntegrator *self = (t_BaseAbstractFieldUnivariateIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BaseAbstractFieldUnivariateIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(BaseAbstractFieldUnivariateIntegrator), &PY_TYPE_DEF(BaseAbstractFieldUnivariateIntegrator), module, "BaseAbstractFieldUnivariateIntegrator", 0);
        }

        void t_BaseAbstractFieldUnivariateIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "class_", make_descriptor(BaseAbstractFieldUnivariateIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "wrapfn_", make_descriptor(t_BaseAbstractFieldUnivariateIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(BaseAbstractFieldUnivariateIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "DEFAULT_ABSOLUTE_ACCURACY", make_descriptor(BaseAbstractFieldUnivariateIntegrator::DEFAULT_ABSOLUTE_ACCURACY));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "DEFAULT_MAX_ITERATIONS_COUNT", make_descriptor(BaseAbstractFieldUnivariateIntegrator::DEFAULT_MAX_ITERATIONS_COUNT));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "DEFAULT_MIN_ITERATIONS_COUNT", make_descriptor(BaseAbstractFieldUnivariateIntegrator::DEFAULT_MIN_ITERATIONS_COUNT));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "DEFAULT_RELATIVE_ACCURACY", make_descriptor(BaseAbstractFieldUnivariateIntegrator::DEFAULT_RELATIVE_ACCURACY));
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BaseAbstractFieldUnivariateIntegrator::initializeClass, 1)))
            return NULL;
          return t_BaseAbstractFieldUnivariateIntegrator::wrap_Object(BaseAbstractFieldUnivariateIntegrator(((t_BaseAbstractFieldUnivariateIntegrator *) arg)->object.this$));
        }
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BaseAbstractFieldUnivariateIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_of_(t_BaseAbstractFieldUnivariateIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getAbsoluteAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getEvaluations(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getField(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getIterations(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getMaximalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getMinimalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getRelativeAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_integrate(t_BaseAbstractFieldUnivariateIntegrator *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "IKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__parameters_(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__absoluteAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__evaluations(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__field(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__iterations(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__maximalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__minimalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__relativeAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldInterpolationGrid.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldInterpolationGrid::class$ = NULL;
            jmethodID *FieldInterpolationGrid::mids$ = NULL;
            bool FieldInterpolationGrid::live$ = false;

            jclass FieldInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getGridPoints_396bc2ac62d7d47a] = env->getMethodID(cls, "getGridPoints", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< ::org::hipparchus::CalculusFieldElement > FieldInterpolationGrid::getGridPoints(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getGridPoints_396bc2ac62d7d47a], a0.this$, a1.this$));
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
            static PyObject *t_FieldInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldInterpolationGrid_of_(t_FieldInterpolationGrid *self, PyObject *args);
            static PyObject *t_FieldInterpolationGrid_getGridPoints(t_FieldInterpolationGrid *self, PyObject *args);
            static PyObject *t_FieldInterpolationGrid_get__parameters_(t_FieldInterpolationGrid *self, void *data);
            static PyGetSetDef t_FieldInterpolationGrid__fields_[] = {
              DECLARE_GET_FIELD(t_FieldInterpolationGrid, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_FieldInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldInterpolationGrid, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldInterpolationGrid, getGridPoints, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldInterpolationGrid)[] = {
              { Py_tp_methods, t_FieldInterpolationGrid__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldInterpolationGrid__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldInterpolationGrid, t_FieldInterpolationGrid, FieldInterpolationGrid);
            PyObject *t_FieldInterpolationGrid::wrap_Object(const FieldInterpolationGrid& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldInterpolationGrid::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldInterpolationGrid *self = (t_FieldInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldInterpolationGrid::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldInterpolationGrid::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldInterpolationGrid *self = (t_FieldInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldInterpolationGrid), &PY_TYPE_DEF(FieldInterpolationGrid), module, "FieldInterpolationGrid", 0);
            }

            void t_FieldInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInterpolationGrid), "class_", make_descriptor(FieldInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInterpolationGrid), "wrapfn_", make_descriptor(t_FieldInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInterpolationGrid), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_FieldInterpolationGrid::wrap_Object(FieldInterpolationGrid(((t_FieldInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_FieldInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldInterpolationGrid_of_(t_FieldInterpolationGrid *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldInterpolationGrid_getGridPoints(t_FieldInterpolationGrid *self, PyObject *args)
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.getGridPoints(a0, a1));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }

              PyErr_SetArgsError((PyObject *) self, "getGridPoints", args);
              return NULL;
            }
            static PyObject *t_FieldInterpolationGrid_get__parameters_(t_FieldInterpolationGrid *self, void *data)
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
#include "org/orekit/forces/gravity/SingleBodyAbsoluteAttraction.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *SingleBodyAbsoluteAttraction::class$ = NULL;
        jmethodID *SingleBodyAbsoluteAttraction::mids$ = NULL;
        bool SingleBodyAbsoluteAttraction::live$ = false;
        ::java::lang::String *SingleBodyAbsoluteAttraction::ATTRACTION_COEFFICIENT_SUFFIX = NULL;

        jclass SingleBodyAbsoluteAttraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/SingleBodyAbsoluteAttraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b5b078eb816ea0c4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_acceleration_20bded0292328743] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_0ce449c67b5ffd9c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ATTRACTION_COEFFICIENT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "ATTRACTION_COEFFICIENT_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SingleBodyAbsoluteAttraction::SingleBodyAbsoluteAttraction(const ::org::orekit::bodies::CelestialBody & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5b078eb816ea0c4, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SingleBodyAbsoluteAttraction::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_20bded0292328743], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D SingleBodyAbsoluteAttraction::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_0ce449c67b5ffd9c], a0.this$, a1.this$));
        }

        jboolean SingleBodyAbsoluteAttraction::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105]);
        }

        ::java::util::List SingleBodyAbsoluteAttraction::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
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
        static PyObject *t_SingleBodyAbsoluteAttraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SingleBodyAbsoluteAttraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SingleBodyAbsoluteAttraction_init_(t_SingleBodyAbsoluteAttraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SingleBodyAbsoluteAttraction_acceleration(t_SingleBodyAbsoluteAttraction *self, PyObject *args);
        static PyObject *t_SingleBodyAbsoluteAttraction_dependsOnPositionOnly(t_SingleBodyAbsoluteAttraction *self);
        static PyObject *t_SingleBodyAbsoluteAttraction_getParametersDrivers(t_SingleBodyAbsoluteAttraction *self);
        static PyObject *t_SingleBodyAbsoluteAttraction_get__parametersDrivers(t_SingleBodyAbsoluteAttraction *self, void *data);
        static PyGetSetDef t_SingleBodyAbsoluteAttraction__fields_[] = {
          DECLARE_GET_FIELD(t_SingleBodyAbsoluteAttraction, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SingleBodyAbsoluteAttraction__methods_[] = {
          DECLARE_METHOD(t_SingleBodyAbsoluteAttraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SingleBodyAbsoluteAttraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SingleBodyAbsoluteAttraction, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_SingleBodyAbsoluteAttraction, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_SingleBodyAbsoluteAttraction, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SingleBodyAbsoluteAttraction)[] = {
          { Py_tp_methods, t_SingleBodyAbsoluteAttraction__methods_ },
          { Py_tp_init, (void *) t_SingleBodyAbsoluteAttraction_init_ },
          { Py_tp_getset, t_SingleBodyAbsoluteAttraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SingleBodyAbsoluteAttraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SingleBodyAbsoluteAttraction, t_SingleBodyAbsoluteAttraction, SingleBodyAbsoluteAttraction);

        void t_SingleBodyAbsoluteAttraction::install(PyObject *module)
        {
          installType(&PY_TYPE(SingleBodyAbsoluteAttraction), &PY_TYPE_DEF(SingleBodyAbsoluteAttraction), module, "SingleBodyAbsoluteAttraction", 0);
        }

        void t_SingleBodyAbsoluteAttraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyAbsoluteAttraction), "class_", make_descriptor(SingleBodyAbsoluteAttraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyAbsoluteAttraction), "wrapfn_", make_descriptor(t_SingleBodyAbsoluteAttraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyAbsoluteAttraction), "boxfn_", make_descriptor(boxObject));
          env->getClass(SingleBodyAbsoluteAttraction::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyAbsoluteAttraction), "ATTRACTION_COEFFICIENT_SUFFIX", make_descriptor(j2p(*SingleBodyAbsoluteAttraction::ATTRACTION_COEFFICIENT_SUFFIX)));
        }

        static PyObject *t_SingleBodyAbsoluteAttraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SingleBodyAbsoluteAttraction::initializeClass, 1)))
            return NULL;
          return t_SingleBodyAbsoluteAttraction::wrap_Object(SingleBodyAbsoluteAttraction(((t_SingleBodyAbsoluteAttraction *) arg)->object.this$));
        }
        static PyObject *t_SingleBodyAbsoluteAttraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SingleBodyAbsoluteAttraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SingleBodyAbsoluteAttraction_init_(t_SingleBodyAbsoluteAttraction *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
          SingleBodyAbsoluteAttraction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &a0))
          {
            INT_CALL(object = SingleBodyAbsoluteAttraction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SingleBodyAbsoluteAttraction_acceleration(t_SingleBodyAbsoluteAttraction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
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
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_SingleBodyAbsoluteAttraction_dependsOnPositionOnly(t_SingleBodyAbsoluteAttraction *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SingleBodyAbsoluteAttraction_getParametersDrivers(t_SingleBodyAbsoluteAttraction *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_SingleBodyAbsoluteAttraction_get__parametersDrivers(t_SingleBodyAbsoluteAttraction *self, void *data)
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
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "java/util/List.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *AttitudeEphemerisFile$AttitudeEphemerisSegment::class$ = NULL;
        jmethodID *AttitudeEphemerisFile$AttitudeEphemerisSegment::mids$ = NULL;
        bool AttitudeEphemerisFile$AttitudeEphemerisSegment::live$ = false;

        jclass AttitudeEphemerisFile$AttitudeEphemerisSegment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAngularCoordinates_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");
            mids$[mid_getAttitudeProvider_fcce29ba1cf2a05e] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
            mids$[mid_getAvailableDerivatives_33d67d456ec94a0c] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
            mids$[mid_getInterpolationMethod_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
            mids$[mid_getInterpolationSamples_55546ef6a647f39b] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getReferenceFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getStart_c325492395d89b24] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_c325492395d89b24] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::List AttitudeEphemerisFile$AttitudeEphemerisSegment::getAngularCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAngularCoordinates_e62d3bb06d56d7e3]));
        }

        ::org::orekit::attitudes::BoundedAttitudeProvider AttitudeEphemerisFile$AttitudeEphemerisSegment::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::BoundedAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_fcce29ba1cf2a05e]));
        }

        ::org::orekit::utils::AngularDerivativesFilter AttitudeEphemerisFile$AttitudeEphemerisSegment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_33d67d456ec94a0c]));
        }

        ::java::lang::String AttitudeEphemerisFile$AttitudeEphemerisSegment::getInterpolationMethod() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_1c1fa1e935d6cdcf]));
        }

        jint AttitudeEphemerisFile$AttitudeEphemerisSegment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_55546ef6a647f39b]);
        }

        ::org::orekit::frames::Frame AttitudeEphemerisFile$AttitudeEphemerisSegment::getReferenceFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_2c51111cc6894ba1]));
        }

        ::org::orekit::time::AbsoluteDate AttitudeEphemerisFile$AttitudeEphemerisSegment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_c325492395d89b24]));
        }

        ::org::orekit::time::AbsoluteDate AttitudeEphemerisFile$AttitudeEphemerisSegment::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_c325492395d89b24]));
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
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_of_(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, PyObject *args);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getAngularCoordinates(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getAttitudeProvider(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getAvailableDerivatives(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getInterpolationMethod(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getInterpolationSamples(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getReferenceFrame(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getStart(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getStop(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__angularCoordinates(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__attitudeProvider(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__availableDerivatives(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__interpolationMethod(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__interpolationSamples(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__referenceFrame(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__start(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__stop(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__parameters_(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data);
        static PyGetSetDef t_AttitudeEphemerisFile$AttitudeEphemerisSegment__fields_[] = {
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, angularCoordinates),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, attitudeProvider),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, availableDerivatives),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, interpolationMethod),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, interpolationSamples),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, referenceFrame),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, start),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, stop),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AttitudeEphemerisFile$AttitudeEphemerisSegment__methods_[] = {
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, of_, METH_VARARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, getAngularCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, getAttitudeProvider, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, getInterpolationMethod, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, getReferenceFrame, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, getStart, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AttitudeEphemerisFile$AttitudeEphemerisSegment)[] = {
          { Py_tp_methods, t_AttitudeEphemerisFile$AttitudeEphemerisSegment__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AttitudeEphemerisFile$AttitudeEphemerisSegment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AttitudeEphemerisFile$AttitudeEphemerisSegment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AttitudeEphemerisFile$AttitudeEphemerisSegment, t_AttitudeEphemerisFile$AttitudeEphemerisSegment, AttitudeEphemerisFile$AttitudeEphemerisSegment);
        PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment::wrap_Object(const AttitudeEphemerisFile$AttitudeEphemerisSegment& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AttitudeEphemerisFile$AttitudeEphemerisSegment::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self = (t_AttitudeEphemerisFile$AttitudeEphemerisSegment *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AttitudeEphemerisFile$AttitudeEphemerisSegment::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self = (t_AttitudeEphemerisFile$AttitudeEphemerisSegment *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AttitudeEphemerisFile$AttitudeEphemerisSegment::install(PyObject *module)
        {
          installType(&PY_TYPE(AttitudeEphemerisFile$AttitudeEphemerisSegment), &PY_TYPE_DEF(AttitudeEphemerisFile$AttitudeEphemerisSegment), module, "AttitudeEphemerisFile$AttitudeEphemerisSegment", 0);
        }

        void t_AttitudeEphemerisFile$AttitudeEphemerisSegment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile$AttitudeEphemerisSegment), "class_", make_descriptor(AttitudeEphemerisFile$AttitudeEphemerisSegment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile$AttitudeEphemerisSegment), "wrapfn_", make_descriptor(t_AttitudeEphemerisFile$AttitudeEphemerisSegment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile$AttitudeEphemerisSegment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AttitudeEphemerisFile$AttitudeEphemerisSegment::initializeClass, 1)))
            return NULL;
          return t_AttitudeEphemerisFile$AttitudeEphemerisSegment::wrap_Object(AttitudeEphemerisFile$AttitudeEphemerisSegment(((t_AttitudeEphemerisFile$AttitudeEphemerisSegment *) arg)->object.this$));
        }
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AttitudeEphemerisFile$AttitudeEphemerisSegment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_of_(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getAngularCoordinates(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAngularCoordinates());
          return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getAttitudeProvider(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self)
        {
          ::org::orekit::attitudes::BoundedAttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getAvailableDerivatives(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self)
        {
          ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getInterpolationMethod(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getInterpolationMethod());
          return j2p(result);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getInterpolationSamples(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getReferenceFrame(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getReferenceFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getStart(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getStop(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__parameters_(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__angularCoordinates(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAngularCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__attitudeProvider(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__availableDerivatives(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__interpolationMethod(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getInterpolationMethod());
          return j2p(value);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__interpolationSamples(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__referenceFrame(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getReferenceFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__start(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__stop(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data)
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
#include "org/orekit/utils/ConstantPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ConstantPVCoordinatesProvider::class$ = NULL;
      jmethodID *ConstantPVCoordinatesProvider::mids$ = NULL;
      bool ConstantPVCoordinatesProvider::live$ = false;

      jclass ConstantPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ConstantPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4da05e3ccc9d9f7d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
          mids$[mid_init$_45ec566ce1bdc68a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_f9d13bb9b3fc3660] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;)V");
          mids$[mid_getPVCoordinates_e5d15ef236cd9ffe] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_42ef2ff6aede2782] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ConstantPVCoordinatesProvider::ConstantPVCoordinatesProvider(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4da05e3ccc9d9f7d, a0.this$, a1.this$)) {}

      ConstantPVCoordinatesProvider::ConstantPVCoordinatesProvider(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_45ec566ce1bdc68a, a0.this$, a1.this$)) {}

      ConstantPVCoordinatesProvider::ConstantPVCoordinatesProvider(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f9d13bb9b3fc3660, a0.this$, a1.this$)) {}

      ::org::orekit::utils::TimeStampedPVCoordinates ConstantPVCoordinatesProvider::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_e5d15ef236cd9ffe], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantPVCoordinatesProvider::getPosition(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_42ef2ff6aede2782], a0.this$, a1.this$));
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
      static PyObject *t_ConstantPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConstantPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ConstantPVCoordinatesProvider_init_(t_ConstantPVCoordinatesProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ConstantPVCoordinatesProvider_getPVCoordinates(t_ConstantPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_ConstantPVCoordinatesProvider_getPosition(t_ConstantPVCoordinatesProvider *self, PyObject *args);

      static PyMethodDef t_ConstantPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_ConstantPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConstantPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConstantPVCoordinatesProvider, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_ConstantPVCoordinatesProvider, getPosition, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ConstantPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_ConstantPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) t_ConstantPVCoordinatesProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ConstantPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ConstantPVCoordinatesProvider, t_ConstantPVCoordinatesProvider, ConstantPVCoordinatesProvider);

      void t_ConstantPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(ConstantPVCoordinatesProvider), &PY_TYPE_DEF(ConstantPVCoordinatesProvider), module, "ConstantPVCoordinatesProvider", 0);
      }

      void t_ConstantPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantPVCoordinatesProvider), "class_", make_descriptor(ConstantPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantPVCoordinatesProvider), "wrapfn_", make_descriptor(t_ConstantPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ConstantPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ConstantPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_ConstantPVCoordinatesProvider::wrap_Object(ConstantPVCoordinatesProvider(((t_ConstantPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_ConstantPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ConstantPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ConstantPVCoordinatesProvider_init_(t_ConstantPVCoordinatesProvider *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
            ConstantPVCoordinatesProvider object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ConstantPVCoordinatesProvider(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ConstantPVCoordinatesProvider object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ConstantPVCoordinatesProvider(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ConstantPVCoordinatesProvider object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ConstantPVCoordinatesProvider(a0, a1));
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

      static PyObject *t_ConstantPVCoordinatesProvider_getPVCoordinates(t_ConstantPVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
          return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_ConstantPVCoordinatesProvider_getPosition(t_ConstantPVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPosition(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GalileoNavigationMessage::class$ = NULL;
            jmethodID *GalileoNavigationMessage::mids$ = NULL;
            bool GalileoNavigationMessage::live$ = false;

            jclass GalileoNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getBGDE1E5a_b74f83833fdad017] = env->getMethodID(cls, "getBGDE1E5a", "()D");
                mids$[mid_getBGDE5bE1_b74f83833fdad017] = env->getMethodID(cls, "getBGDE5bE1", "()D");
                mids$[mid_getDataSource_55546ef6a647f39b] = env->getMethodID(cls, "getDataSource", "()I");
                mids$[mid_getIODNav_55546ef6a647f39b] = env->getMethodID(cls, "getIODNav", "()I");
                mids$[mid_getSisa_b74f83833fdad017] = env->getMethodID(cls, "getSisa", "()D");
                mids$[mid_getSvHealth_b74f83833fdad017] = env->getMethodID(cls, "getSvHealth", "()D");
                mids$[mid_setBGDE1E5a_8ba9fe7a847cecad] = env->getMethodID(cls, "setBGDE1E5a", "(D)V");
                mids$[mid_setBGDE5bE1_8ba9fe7a847cecad] = env->getMethodID(cls, "setBGDE5bE1", "(D)V");
                mids$[mid_setDataSource_44ed599e93e8a30c] = env->getMethodID(cls, "setDataSource", "(I)V");
                mids$[mid_setIODNav_44ed599e93e8a30c] = env->getMethodID(cls, "setIODNav", "(I)V");
                mids$[mid_setSisa_8ba9fe7a847cecad] = env->getMethodID(cls, "setSisa", "(D)V");
                mids$[mid_setSvHealth_8ba9fe7a847cecad] = env->getMethodID(cls, "setSvHealth", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GalileoNavigationMessage::GalileoNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            jdouble GalileoNavigationMessage::getBGDE1E5a() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBGDE1E5a_b74f83833fdad017]);
            }

            jdouble GalileoNavigationMessage::getBGDE5bE1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBGDE5bE1_b74f83833fdad017]);
            }

            jint GalileoNavigationMessage::getDataSource() const
            {
              return env->callIntMethod(this$, mids$[mid_getDataSource_55546ef6a647f39b]);
            }

            jint GalileoNavigationMessage::getIODNav() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODNav_55546ef6a647f39b]);
            }

            jdouble GalileoNavigationMessage::getSisa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSisa_b74f83833fdad017]);
            }

            jdouble GalileoNavigationMessage::getSvHealth() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSvHealth_b74f83833fdad017]);
            }

            void GalileoNavigationMessage::setBGDE1E5a(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setBGDE1E5a_8ba9fe7a847cecad], a0);
            }

            void GalileoNavigationMessage::setBGDE5bE1(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setBGDE5bE1_8ba9fe7a847cecad], a0);
            }

            void GalileoNavigationMessage::setDataSource(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDataSource_44ed599e93e8a30c], a0);
            }

            void GalileoNavigationMessage::setIODNav(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODNav_44ed599e93e8a30c], a0);
            }

            void GalileoNavigationMessage::setSisa(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSisa_8ba9fe7a847cecad], a0);
            }

            void GalileoNavigationMessage::setSvHealth(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvHealth_8ba9fe7a847cecad], a0);
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
            static PyObject *t_GalileoNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GalileoNavigationMessage_init_(t_GalileoNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GalileoNavigationMessage_getBGDE1E5a(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_getBGDE5bE1(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_getDataSource(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_getIODNav(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_getSisa(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_getSvHealth(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_setBGDE1E5a(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_setBGDE5bE1(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_setDataSource(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_setIODNav(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_setSisa(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_setSvHealth(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_get__bGDE1E5a(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__bGDE1E5a(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GalileoNavigationMessage_get__bGDE5bE1(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__bGDE5bE1(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GalileoNavigationMessage_get__dataSource(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__dataSource(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GalileoNavigationMessage_get__iODNav(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__iODNav(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GalileoNavigationMessage_get__sisa(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__sisa(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GalileoNavigationMessage_get__svHealth(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__svHealth(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_GalileoNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, bGDE1E5a),
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, bGDE5bE1),
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, dataSource),
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, iODNav),
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, sisa),
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, svHealth),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GalileoNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_GalileoNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GalileoNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getBGDE1E5a, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getBGDE5bE1, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getDataSource, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getIODNav, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getSisa, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getSvHealth, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, setBGDE1E5a, METH_O),
              DECLARE_METHOD(t_GalileoNavigationMessage, setBGDE5bE1, METH_O),
              DECLARE_METHOD(t_GalileoNavigationMessage, setDataSource, METH_O),
              DECLARE_METHOD(t_GalileoNavigationMessage, setIODNav, METH_O),
              DECLARE_METHOD(t_GalileoNavigationMessage, setSisa, METH_O),
              DECLARE_METHOD(t_GalileoNavigationMessage, setSvHealth, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GalileoNavigationMessage)[] = {
              { Py_tp_methods, t_GalileoNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_GalileoNavigationMessage_init_ },
              { Py_tp_getset, t_GalileoNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GalileoNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage),
              NULL
            };

            DEFINE_TYPE(GalileoNavigationMessage, t_GalileoNavigationMessage, GalileoNavigationMessage);

            void t_GalileoNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(GalileoNavigationMessage), &PY_TYPE_DEF(GalileoNavigationMessage), module, "GalileoNavigationMessage", 0);
            }

            void t_GalileoNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoNavigationMessage), "class_", make_descriptor(GalileoNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoNavigationMessage), "wrapfn_", make_descriptor(t_GalileoNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GalileoNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GalileoNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_GalileoNavigationMessage::wrap_Object(GalileoNavigationMessage(((t_GalileoNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_GalileoNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GalileoNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GalileoNavigationMessage_init_(t_GalileoNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              GalileoNavigationMessage object((jobject) NULL);

              INT_CALL(object = GalileoNavigationMessage());
              self->object = object;

              return 0;
            }

            static PyObject *t_GalileoNavigationMessage_getBGDE1E5a(t_GalileoNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBGDE1E5a());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GalileoNavigationMessage_getBGDE5bE1(t_GalileoNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBGDE5bE1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GalileoNavigationMessage_getDataSource(t_GalileoNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getDataSource());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoNavigationMessage_getIODNav(t_GalileoNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODNav());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoNavigationMessage_getSisa(t_GalileoNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSisa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GalileoNavigationMessage_getSvHealth(t_GalileoNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSvHealth());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GalileoNavigationMessage_setBGDE1E5a(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setBGDE1E5a(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setBGDE1E5a", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_setBGDE5bE1(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setBGDE5bE1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setBGDE5bE1", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_setDataSource(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setDataSource(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDataSource", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_setIODNav(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIODNav(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODNav", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_setSisa(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSisa(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSisa", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_setSvHealth(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSvHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSvHealth", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_get__bGDE1E5a(t_GalileoNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBGDE1E5a());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GalileoNavigationMessage_set__bGDE1E5a(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setBGDE1E5a(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "bGDE1E5a", arg);
              return -1;
            }

            static PyObject *t_GalileoNavigationMessage_get__bGDE5bE1(t_GalileoNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBGDE5bE1());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GalileoNavigationMessage_set__bGDE5bE1(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setBGDE5bE1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "bGDE5bE1", arg);
              return -1;
            }

            static PyObject *t_GalileoNavigationMessage_get__dataSource(t_GalileoNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getDataSource());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoNavigationMessage_set__dataSource(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setDataSource(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dataSource", arg);
              return -1;
            }

            static PyObject *t_GalileoNavigationMessage_get__iODNav(t_GalileoNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODNav());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoNavigationMessage_set__iODNav(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIODNav(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODNav", arg);
              return -1;
            }

            static PyObject *t_GalileoNavigationMessage_get__sisa(t_GalileoNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSisa());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GalileoNavigationMessage_set__sisa(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSisa(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sisa", arg);
              return -1;
            }

            static PyObject *t_GalileoNavigationMessage_get__svHealth(t_GalileoNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSvHealth());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GalileoNavigationMessage_set__svHealth(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSvHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "svHealth", arg);
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
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/antenna/PhaseCenterVariationFunction.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *FrequencyPattern::class$ = NULL;
        jmethodID *FrequencyPattern::mids$ = NULL;
        bool FrequencyPattern::live$ = false;
        FrequencyPattern *FrequencyPattern::ZERO_CORRECTION = NULL;

        jclass FrequencyPattern::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/FrequencyPattern");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6ac45c4ed39b5155] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/gnss/antenna/PhaseCenterVariationFunction;)V");
            mids$[mid_getEccentricities_8b724f8b4fdad1a2] = env->getMethodID(cls, "getEccentricities", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getPhaseCenterVariation_f75a63670951da8a] = env->getMethodID(cls, "getPhaseCenterVariation", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
            mids$[mid_getPhaseCenterVariationFunction_aff2fdaed3c97e17] = env->getMethodID(cls, "getPhaseCenterVariationFunction", "()Lorg/orekit/gnss/antenna/PhaseCenterVariationFunction;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ZERO_CORRECTION = new FrequencyPattern(env->getStaticObjectField(cls, "ZERO_CORRECTION", "Lorg/orekit/gnss/antenna/FrequencyPattern;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FrequencyPattern::FrequencyPattern(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::gnss::antenna::PhaseCenterVariationFunction & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6ac45c4ed39b5155, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D FrequencyPattern::getEccentricities() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEccentricities_8b724f8b4fdad1a2]));
        }

        jdouble FrequencyPattern::getPhaseCenterVariation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPhaseCenterVariation_f75a63670951da8a], a0.this$);
        }

        ::org::orekit::gnss::antenna::PhaseCenterVariationFunction FrequencyPattern::getPhaseCenterVariationFunction() const
        {
          return ::org::orekit::gnss::antenna::PhaseCenterVariationFunction(env->callObjectMethod(this$, mids$[mid_getPhaseCenterVariationFunction_aff2fdaed3c97e17]));
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
        static PyObject *t_FrequencyPattern_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FrequencyPattern_instance_(PyTypeObject *type, PyObject *arg);
        static int t_FrequencyPattern_init_(t_FrequencyPattern *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FrequencyPattern_getEccentricities(t_FrequencyPattern *self);
        static PyObject *t_FrequencyPattern_getPhaseCenterVariation(t_FrequencyPattern *self, PyObject *arg);
        static PyObject *t_FrequencyPattern_getPhaseCenterVariationFunction(t_FrequencyPattern *self);
        static PyObject *t_FrequencyPattern_get__eccentricities(t_FrequencyPattern *self, void *data);
        static PyObject *t_FrequencyPattern_get__phaseCenterVariationFunction(t_FrequencyPattern *self, void *data);
        static PyGetSetDef t_FrequencyPattern__fields_[] = {
          DECLARE_GET_FIELD(t_FrequencyPattern, eccentricities),
          DECLARE_GET_FIELD(t_FrequencyPattern, phaseCenterVariationFunction),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FrequencyPattern__methods_[] = {
          DECLARE_METHOD(t_FrequencyPattern, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FrequencyPattern, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FrequencyPattern, getEccentricities, METH_NOARGS),
          DECLARE_METHOD(t_FrequencyPattern, getPhaseCenterVariation, METH_O),
          DECLARE_METHOD(t_FrequencyPattern, getPhaseCenterVariationFunction, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FrequencyPattern)[] = {
          { Py_tp_methods, t_FrequencyPattern__methods_ },
          { Py_tp_init, (void *) t_FrequencyPattern_init_ },
          { Py_tp_getset, t_FrequencyPattern__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FrequencyPattern)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FrequencyPattern, t_FrequencyPattern, FrequencyPattern);

        void t_FrequencyPattern::install(PyObject *module)
        {
          installType(&PY_TYPE(FrequencyPattern), &PY_TYPE_DEF(FrequencyPattern), module, "FrequencyPattern", 0);
        }

        void t_FrequencyPattern::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FrequencyPattern), "class_", make_descriptor(FrequencyPattern::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FrequencyPattern), "wrapfn_", make_descriptor(t_FrequencyPattern::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FrequencyPattern), "boxfn_", make_descriptor(boxObject));
          env->getClass(FrequencyPattern::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FrequencyPattern), "ZERO_CORRECTION", make_descriptor(t_FrequencyPattern::wrap_Object(*FrequencyPattern::ZERO_CORRECTION)));
        }

        static PyObject *t_FrequencyPattern_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FrequencyPattern::initializeClass, 1)))
            return NULL;
          return t_FrequencyPattern::wrap_Object(FrequencyPattern(((t_FrequencyPattern *) arg)->object.this$));
        }
        static PyObject *t_FrequencyPattern_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FrequencyPattern::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_FrequencyPattern_init_(t_FrequencyPattern *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::orekit::gnss::antenna::PhaseCenterVariationFunction a1((jobject) NULL);
          FrequencyPattern object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::gnss::antenna::PhaseCenterVariationFunction::initializeClass, &a0, &a1))
          {
            INT_CALL(object = FrequencyPattern(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FrequencyPattern_getEccentricities(t_FrequencyPattern *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getEccentricities());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_FrequencyPattern_getPhaseCenterVariation(t_FrequencyPattern *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getPhaseCenterVariation(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPhaseCenterVariation", arg);
          return NULL;
        }

        static PyObject *t_FrequencyPattern_getPhaseCenterVariationFunction(t_FrequencyPattern *self)
        {
          ::org::orekit::gnss::antenna::PhaseCenterVariationFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhaseCenterVariationFunction());
          return ::org::orekit::gnss::antenna::t_PhaseCenterVariationFunction::wrap_Object(result);
        }

        static PyObject *t_FrequencyPattern_get__eccentricities(t_FrequencyPattern *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getEccentricities());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_FrequencyPattern_get__phaseCenterVariationFunction(t_FrequencyPattern *self, void *data)
        {
          ::org::orekit::gnss::antenna::PhaseCenterVariationFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhaseCenterVariationFunction());
          return ::org::orekit::gnss::antenna::t_PhaseCenterVariationFunction::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ordering.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitCovarianceHistoryMetadata::class$ = NULL;
              jmethodID *OrbitCovarianceHistoryMetadata::mids$ = NULL;
              bool OrbitCovarianceHistoryMetadata::live$ = false;

              jclass OrbitCovarianceHistoryMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_02135a6ef25adb4b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_getCovBasis_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCovBasis", "()Ljava/lang/String;");
                  mids$[mid_getCovBasisID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCovBasisID", "()Ljava/lang/String;");
                  mids$[mid_getCovConfidence_b74f83833fdad017] = env->getMethodID(cls, "getCovConfidence", "()D");
                  mids$[mid_getCovFrameEpoch_c325492395d89b24] = env->getMethodID(cls, "getCovFrameEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getCovID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCovID", "()Ljava/lang/String;");
                  mids$[mid_getCovNextID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCovNextID", "()Ljava/lang/String;");
                  mids$[mid_getCovOrdering_3965a9392133c403] = env->getMethodID(cls, "getCovOrdering", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;");
                  mids$[mid_getCovPrevID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCovPrevID", "()Ljava/lang/String;");
                  mids$[mid_getCovReferenceFrame_69d8be1b6b0a1a94] = env->getMethodID(cls, "getCovReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getCovScaleMax_b74f83833fdad017] = env->getMethodID(cls, "getCovScaleMax", "()D");
                  mids$[mid_getCovScaleMin_b74f83833fdad017] = env->getMethodID(cls, "getCovScaleMin", "()D");
                  mids$[mid_getCovType_4eb559a63ad8d46d] = env->getMethodID(cls, "getCovType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");
                  mids$[mid_getCovUnits_e62d3bb06d56d7e3] = env->getMethodID(cls, "getCovUnits", "()Ljava/util/List;");
                  mids$[mid_setCovBasis_734b91ac30d5f9b4] = env->getMethodID(cls, "setCovBasis", "(Ljava/lang/String;)V");
                  mids$[mid_setCovBasisID_734b91ac30d5f9b4] = env->getMethodID(cls, "setCovBasisID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovConfidence_8ba9fe7a847cecad] = env->getMethodID(cls, "setCovConfidence", "(D)V");
                  mids$[mid_setCovFrameEpoch_02135a6ef25adb4b] = env->getMethodID(cls, "setCovFrameEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setCovID_734b91ac30d5f9b4] = env->getMethodID(cls, "setCovID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovNextID_734b91ac30d5f9b4] = env->getMethodID(cls, "setCovNextID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovOrdering_50c4ba031b2387f4] = env->getMethodID(cls, "setCovOrdering", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;)V");
                  mids$[mid_setCovPrevID_734b91ac30d5f9b4] = env->getMethodID(cls, "setCovPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovReferenceFrame_4755133c5c4c59be] = env->getMethodID(cls, "setCovReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setCovScaleMax_8ba9fe7a847cecad] = env->getMethodID(cls, "setCovScaleMax", "(D)V");
                  mids$[mid_setCovScaleMin_8ba9fe7a847cecad] = env->getMethodID(cls, "setCovScaleMin", "(D)V");
                  mids$[mid_setCovType_c891909ddae6c021] = env->getMethodID(cls, "setCovType", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;)V");
                  mids$[mid_setCovUnits_0e7c3032c7c93ed3] = env->getMethodID(cls, "setCovUnits", "(Ljava/util/List;)V");
                  mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitCovarianceHistoryMetadata::OrbitCovarianceHistoryMetadata(const ::org::orekit::time::AbsoluteDate & a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_02135a6ef25adb4b, a0.this$)) {}

              ::java::lang::String OrbitCovarianceHistoryMetadata::getCovBasis() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovBasis_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String OrbitCovarianceHistoryMetadata::getCovBasisID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovBasisID_1c1fa1e935d6cdcf]));
              }

              jdouble OrbitCovarianceHistoryMetadata::getCovConfidence() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getCovConfidence_b74f83833fdad017]);
              }

              ::org::orekit::time::AbsoluteDate OrbitCovarianceHistoryMetadata::getCovFrameEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCovFrameEpoch_c325492395d89b24]));
              }

              ::java::lang::String OrbitCovarianceHistoryMetadata::getCovID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovID_1c1fa1e935d6cdcf]));
              }

              ::java::lang::String OrbitCovarianceHistoryMetadata::getCovNextID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovNextID_1c1fa1e935d6cdcf]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering OrbitCovarianceHistoryMetadata::getCovOrdering() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering(env->callObjectMethod(this$, mids$[mid_getCovOrdering_3965a9392133c403]));
              }

              ::java::lang::String OrbitCovarianceHistoryMetadata::getCovPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovPrevID_1c1fa1e935d6cdcf]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade OrbitCovarianceHistoryMetadata::getCovReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getCovReferenceFrame_69d8be1b6b0a1a94]));
              }

              jdouble OrbitCovarianceHistoryMetadata::getCovScaleMax() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getCovScaleMax_b74f83833fdad017]);
              }

              jdouble OrbitCovarianceHistoryMetadata::getCovScaleMin() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getCovScaleMin_b74f83833fdad017]);
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType OrbitCovarianceHistoryMetadata::getCovType() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType(env->callObjectMethod(this$, mids$[mid_getCovType_4eb559a63ad8d46d]));
              }

              ::java::util::List OrbitCovarianceHistoryMetadata::getCovUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovUnits_e62d3bb06d56d7e3]));
              }

              void OrbitCovarianceHistoryMetadata::setCovBasis(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovBasis_734b91ac30d5f9b4], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovBasisID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovBasisID_734b91ac30d5f9b4], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovConfidence(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovConfidence_8ba9fe7a847cecad], a0);
              }

              void OrbitCovarianceHistoryMetadata::setCovFrameEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovFrameEpoch_02135a6ef25adb4b], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovID_734b91ac30d5f9b4], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovNextID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovNextID_734b91ac30d5f9b4], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovOrdering(const ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovOrdering_50c4ba031b2387f4], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovPrevID_734b91ac30d5f9b4], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovReferenceFrame_4755133c5c4c59be], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovScaleMax(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovScaleMax_8ba9fe7a847cecad], a0);
              }

              void OrbitCovarianceHistoryMetadata::setCovScaleMin(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovScaleMin_8ba9fe7a847cecad], a0);
              }

              void OrbitCovarianceHistoryMetadata::setCovType(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovType_c891909ddae6c021], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::setCovUnits(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovUnits_0e7c3032c7c93ed3], a0.this$);
              }

              void OrbitCovarianceHistoryMetadata::validate(jdouble a0) const
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
            namespace ocm {
              static PyObject *t_OrbitCovarianceHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitCovarianceHistoryMetadata_init_(t_OrbitCovarianceHistoryMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovBasis(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovBasisID(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovConfidence(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovFrameEpoch(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovID(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovNextID(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovOrdering(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovPrevID(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovReferenceFrame(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovScaleMax(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovScaleMin(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovType(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovUnits(t_OrbitCovarianceHistoryMetadata *self);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovBasis(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovBasisID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovConfidence(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovNextID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovOrdering(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovPrevID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovScaleMax(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovScaleMin(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovType(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovUnits(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadata_validate(t_OrbitCovarianceHistoryMetadata *self, PyObject *args);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covBasis(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covBasis(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covBasisID(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covBasisID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covConfidence(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covConfidence(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covID(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covNextID(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covNextID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covOrdering(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covOrdering(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covPrevID(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covPrevID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covScaleMax(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covScaleMax(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covScaleMin(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covScaleMin(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covType(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covType(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covUnits(t_OrbitCovarianceHistoryMetadata *self, void *data);
              static int t_OrbitCovarianceHistoryMetadata_set__covUnits(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_OrbitCovarianceHistoryMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covBasis),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covBasisID),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covConfidence),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covFrameEpoch),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covID),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covNextID),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covOrdering),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covPrevID),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covReferenceFrame),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covScaleMax),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covScaleMin),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covType),
                DECLARE_GETSET_FIELD(t_OrbitCovarianceHistoryMetadata, covUnits),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitCovarianceHistoryMetadata__methods_[] = {
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovBasis, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovBasisID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovConfidence, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovFrameEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovNextID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovOrdering, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovPrevID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovScaleMax, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovScaleMin, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovType, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, getCovUnits, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovBasis, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovBasisID, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovConfidence, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovFrameEpoch, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovID, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovNextID, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovOrdering, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovPrevID, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovReferenceFrame, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovScaleMax, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovScaleMin, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovType, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, setCovUnits, METH_O),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitCovarianceHistoryMetadata)[] = {
                { Py_tp_methods, t_OrbitCovarianceHistoryMetadata__methods_ },
                { Py_tp_init, (void *) t_OrbitCovarianceHistoryMetadata_init_ },
                { Py_tp_getset, t_OrbitCovarianceHistoryMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitCovarianceHistoryMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(OrbitCovarianceHistoryMetadata, t_OrbitCovarianceHistoryMetadata, OrbitCovarianceHistoryMetadata);

              void t_OrbitCovarianceHistoryMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitCovarianceHistoryMetadata), &PY_TYPE_DEF(OrbitCovarianceHistoryMetadata), module, "OrbitCovarianceHistoryMetadata", 0);
              }

              void t_OrbitCovarianceHistoryMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadata), "class_", make_descriptor(OrbitCovarianceHistoryMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadata), "wrapfn_", make_descriptor(t_OrbitCovarianceHistoryMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitCovarianceHistoryMetadata::initializeClass, 1)))
                  return NULL;
                return t_OrbitCovarianceHistoryMetadata::wrap_Object(OrbitCovarianceHistoryMetadata(((t_OrbitCovarianceHistoryMetadata *) arg)->object.this$));
              }
              static PyObject *t_OrbitCovarianceHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitCovarianceHistoryMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitCovarianceHistoryMetadata_init_(t_OrbitCovarianceHistoryMetadata *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                OrbitCovarianceHistoryMetadata object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  INT_CALL(object = OrbitCovarianceHistoryMetadata(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovBasis(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovBasis());
                return j2p(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovBasisID(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovBasisID());
                return j2p(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovConfidence(t_OrbitCovarianceHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getCovConfidence());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovFrameEpoch(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovID(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovID());
                return j2p(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovNextID(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovNextID());
                return j2p(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovOrdering(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovOrdering());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Ordering::wrap_Object(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovPrevID(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovPrevID());
                return j2p(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovReferenceFrame(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovScaleMax(t_OrbitCovarianceHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getCovScaleMax());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovScaleMin(t_OrbitCovarianceHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getCovScaleMin());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovType(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(result);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_getCovUnits(t_OrbitCovarianceHistoryMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovBasis(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovBasis", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovBasisID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovBasisID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovBasisID", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovConfidence(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setCovConfidence(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovConfidence", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCovFrameEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovFrameEpoch", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovID", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovNextID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovNextID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovNextID", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovOrdering(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_Ordering::parameters_))
                {
                  OBJ_CALL(self->object.setCovOrdering(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovOrdering", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovPrevID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovPrevID", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCovReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovScaleMax(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setCovScaleMax(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovScaleMax", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovScaleMin(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setCovScaleMin(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovScaleMin", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovType(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setCovType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovType", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_setCovUnits(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setCovUnits(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovUnits", arg);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_validate(t_OrbitCovarianceHistoryMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OrbitCovarianceHistoryMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covBasis(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovBasis());
                return j2p(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covBasis(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covBasis", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covBasisID(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovBasisID());
                return j2p(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covBasisID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovBasisID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covBasisID", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covConfidence(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getCovConfidence());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covConfidence(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setCovConfidence(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covConfidence", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covFrameEpoch(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovFrameEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covFrameEpoch", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covID(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovID());
                return j2p(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covID", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covNextID(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovNextID());
                return j2p(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covNextID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovNextID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covNextID", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covOrdering(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovOrdering());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Ordering::wrap_Object(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covOrdering(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovOrdering(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covOrdering", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covPrevID(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovPrevID());
                return j2p(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covPrevID(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covPrevID", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covReferenceFrame(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covScaleMax(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getCovScaleMax());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covScaleMax(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setCovScaleMax(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covScaleMax", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covScaleMin(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getCovScaleMin());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covScaleMin(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setCovScaleMin(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covScaleMin", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covType(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covType(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covType", arg);
                return -1;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadata_get__covUnits(t_OrbitCovarianceHistoryMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovUnits());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitCovarianceHistoryMetadata_set__covUnits(t_OrbitCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovUnits(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covUnits", arg);
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
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarD.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldCopolarD::class$ = NULL;
          jmethodID *FieldCopolarD::mids$ = NULL;
          bool FieldCopolarD::live$ = false;

          jclass FieldCopolarD::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldCopolarD");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cd_81520b552cb3fa26] = env->getMethodID(cls, "cd", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_nd_81520b552cb3fa26] = env->getMethodID(cls, "nd", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_sd_81520b552cb3fa26] = env->getMethodID(cls, "sd", "()Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarD::cd() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_cd_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarD::nd() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_nd_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarD::sd() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_sd_81520b552cb3fa26]));
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_FieldCopolarD_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarD_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarD_of_(t_FieldCopolarD *self, PyObject *args);
          static PyObject *t_FieldCopolarD_cd(t_FieldCopolarD *self);
          static PyObject *t_FieldCopolarD_nd(t_FieldCopolarD *self);
          static PyObject *t_FieldCopolarD_sd(t_FieldCopolarD *self);
          static PyObject *t_FieldCopolarD_get__parameters_(t_FieldCopolarD *self, void *data);
          static PyGetSetDef t_FieldCopolarD__fields_[] = {
            DECLARE_GET_FIELD(t_FieldCopolarD, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldCopolarD__methods_[] = {
            DECLARE_METHOD(t_FieldCopolarD, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarD, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarD, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldCopolarD, cd, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarD, nd, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarD, sd, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldCopolarD)[] = {
            { Py_tp_methods, t_FieldCopolarD__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldCopolarD__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldCopolarD)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldCopolarD, t_FieldCopolarD, FieldCopolarD);
          PyObject *t_FieldCopolarD::wrap_Object(const FieldCopolarD& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarD::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarD *self = (t_FieldCopolarD *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldCopolarD::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarD::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarD *self = (t_FieldCopolarD *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldCopolarD::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldCopolarD), &PY_TYPE_DEF(FieldCopolarD), module, "FieldCopolarD", 0);
          }

          void t_FieldCopolarD::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarD), "class_", make_descriptor(FieldCopolarD::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarD), "wrapfn_", make_descriptor(t_FieldCopolarD::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarD), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldCopolarD_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldCopolarD::initializeClass, 1)))
              return NULL;
            return t_FieldCopolarD::wrap_Object(FieldCopolarD(((t_FieldCopolarD *) arg)->object.this$));
          }
          static PyObject *t_FieldCopolarD_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldCopolarD::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldCopolarD_of_(t_FieldCopolarD *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldCopolarD_cd(t_FieldCopolarD *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.cd());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarD_nd(t_FieldCopolarD *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.nd());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarD_sd(t_FieldCopolarD *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.sd());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }
          static PyObject *t_FieldCopolarD_get__parameters_(t_FieldCopolarD *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ScreenVolumeShape::class$ = NULL;
            jmethodID *ScreenVolumeShape::mids$ = NULL;
            bool ScreenVolumeShape::live$ = false;
            ScreenVolumeShape *ScreenVolumeShape::BOX = NULL;
            ScreenVolumeShape *ScreenVolumeShape::ELLIPSOID = NULL;
            ScreenVolumeShape *ScreenVolumeShape::SPHERE = NULL;

            jclass ScreenVolumeShape::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_5044a3f7c7c2f946] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;");
                mids$[mid_values_acc14f78a149c0b4] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                BOX = new ScreenVolumeShape(env->getStaticObjectField(cls, "BOX", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;"));
                ELLIPSOID = new ScreenVolumeShape(env->getStaticObjectField(cls, "ELLIPSOID", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;"));
                SPHERE = new ScreenVolumeShape(env->getStaticObjectField(cls, "SPHERE", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ScreenVolumeShape ScreenVolumeShape::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ScreenVolumeShape(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5044a3f7c7c2f946], a0.this$));
            }

            JArray< ScreenVolumeShape > ScreenVolumeShape::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< ScreenVolumeShape >(env->callStaticObjectMethod(cls, mids$[mid_values_acc14f78a149c0b4]));
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
            static PyObject *t_ScreenVolumeShape_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenVolumeShape_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenVolumeShape_of_(t_ScreenVolumeShape *self, PyObject *args);
            static PyObject *t_ScreenVolumeShape_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_ScreenVolumeShape_values(PyTypeObject *type);
            static PyObject *t_ScreenVolumeShape_get__parameters_(t_ScreenVolumeShape *self, void *data);
            static PyGetSetDef t_ScreenVolumeShape__fields_[] = {
              DECLARE_GET_FIELD(t_ScreenVolumeShape, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ScreenVolumeShape__methods_[] = {
              DECLARE_METHOD(t_ScreenVolumeShape, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeShape, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeShape, of_, METH_VARARGS),
              DECLARE_METHOD(t_ScreenVolumeShape, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeShape, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ScreenVolumeShape)[] = {
              { Py_tp_methods, t_ScreenVolumeShape__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ScreenVolumeShape__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ScreenVolumeShape)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(ScreenVolumeShape, t_ScreenVolumeShape, ScreenVolumeShape);
            PyObject *t_ScreenVolumeShape::wrap_Object(const ScreenVolumeShape& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenVolumeShape::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenVolumeShape *self = (t_ScreenVolumeShape *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ScreenVolumeShape::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenVolumeShape::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenVolumeShape *self = (t_ScreenVolumeShape *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ScreenVolumeShape::install(PyObject *module)
            {
              installType(&PY_TYPE(ScreenVolumeShape), &PY_TYPE_DEF(ScreenVolumeShape), module, "ScreenVolumeShape", 0);
            }

            void t_ScreenVolumeShape::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "class_", make_descriptor(ScreenVolumeShape::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "wrapfn_", make_descriptor(t_ScreenVolumeShape::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "boxfn_", make_descriptor(boxObject));
              env->getClass(ScreenVolumeShape::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "BOX", make_descriptor(t_ScreenVolumeShape::wrap_Object(*ScreenVolumeShape::BOX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "ELLIPSOID", make_descriptor(t_ScreenVolumeShape::wrap_Object(*ScreenVolumeShape::ELLIPSOID)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "SPHERE", make_descriptor(t_ScreenVolumeShape::wrap_Object(*ScreenVolumeShape::SPHERE)));
            }

            static PyObject *t_ScreenVolumeShape_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ScreenVolumeShape::initializeClass, 1)))
                return NULL;
              return t_ScreenVolumeShape::wrap_Object(ScreenVolumeShape(((t_ScreenVolumeShape *) arg)->object.this$));
            }
            static PyObject *t_ScreenVolumeShape_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ScreenVolumeShape::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ScreenVolumeShape_of_(t_ScreenVolumeShape *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ScreenVolumeShape_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ScreenVolumeShape result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape::valueOf(a0));
                return t_ScreenVolumeShape::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_ScreenVolumeShape_values(PyTypeObject *type)
            {
              JArray< ScreenVolumeShape > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape::values());
              return JArray<jobject>(result.this$).wrap(t_ScreenVolumeShape::wrap_jobject);
            }
            static PyObject *t_ScreenVolumeShape_get__parameters_(t_ScreenVolumeShape *self, void *data)
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
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BracketedUnivariateSolver$Interval::class$ = NULL;
        jmethodID *BracketedUnivariateSolver$Interval::mids$ = NULL;
        bool BracketedUnivariateSolver$Interval::live$ = false;

        jclass BracketedUnivariateSolver$Interval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_49f4b5153d696ea5] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_getLeftAbscissa_b74f83833fdad017] = env->getMethodID(cls, "getLeftAbscissa", "()D");
            mids$[mid_getLeftValue_b74f83833fdad017] = env->getMethodID(cls, "getLeftValue", "()D");
            mids$[mid_getRightAbscissa_b74f83833fdad017] = env->getMethodID(cls, "getRightAbscissa", "()D");
            mids$[mid_getRightValue_b74f83833fdad017] = env->getMethodID(cls, "getRightValue", "()D");
            mids$[mid_getSide_76453ee02da91cfc] = env->getMethodID(cls, "getSide", "(Lorg/hipparchus/analysis/solvers/AllowedSolution;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BracketedUnivariateSolver$Interval::BracketedUnivariateSolver$Interval(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_49f4b5153d696ea5, a0, a1, a2, a3)) {}

        jdouble BracketedUnivariateSolver$Interval::getLeftAbscissa() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLeftAbscissa_b74f83833fdad017]);
        }

        jdouble BracketedUnivariateSolver$Interval::getLeftValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLeftValue_b74f83833fdad017]);
        }

        jdouble BracketedUnivariateSolver$Interval::getRightAbscissa() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRightAbscissa_b74f83833fdad017]);
        }

        jdouble BracketedUnivariateSolver$Interval::getRightValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRightValue_b74f83833fdad017]);
        }

        jdouble BracketedUnivariateSolver$Interval::getSide(const ::org::hipparchus::analysis::solvers::AllowedSolution & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSide_76453ee02da91cfc], a0.this$);
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
        static PyObject *t_BracketedUnivariateSolver$Interval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedUnivariateSolver$Interval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedUnivariateSolver$Interval_of_(t_BracketedUnivariateSolver$Interval *self, PyObject *args);
        static int t_BracketedUnivariateSolver$Interval_init_(t_BracketedUnivariateSolver$Interval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BracketedUnivariateSolver$Interval_getLeftAbscissa(t_BracketedUnivariateSolver$Interval *self);
        static PyObject *t_BracketedUnivariateSolver$Interval_getLeftValue(t_BracketedUnivariateSolver$Interval *self);
        static PyObject *t_BracketedUnivariateSolver$Interval_getRightAbscissa(t_BracketedUnivariateSolver$Interval *self);
        static PyObject *t_BracketedUnivariateSolver$Interval_getRightValue(t_BracketedUnivariateSolver$Interval *self);
        static PyObject *t_BracketedUnivariateSolver$Interval_getSide(t_BracketedUnivariateSolver$Interval *self, PyObject *arg);
        static PyObject *t_BracketedUnivariateSolver$Interval_get__leftAbscissa(t_BracketedUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedUnivariateSolver$Interval_get__leftValue(t_BracketedUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedUnivariateSolver$Interval_get__rightAbscissa(t_BracketedUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedUnivariateSolver$Interval_get__rightValue(t_BracketedUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedUnivariateSolver$Interval_get__parameters_(t_BracketedUnivariateSolver$Interval *self, void *data);
        static PyGetSetDef t_BracketedUnivariateSolver$Interval__fields_[] = {
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver$Interval, leftAbscissa),
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver$Interval, leftValue),
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver$Interval, rightAbscissa),
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver$Interval, rightValue),
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver$Interval, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketedUnivariateSolver$Interval__methods_[] = {
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, of_, METH_VARARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, getLeftAbscissa, METH_NOARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, getLeftValue, METH_NOARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, getRightAbscissa, METH_NOARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, getRightValue, METH_NOARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, getSide, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketedUnivariateSolver$Interval)[] = {
          { Py_tp_methods, t_BracketedUnivariateSolver$Interval__methods_ },
          { Py_tp_init, (void *) t_BracketedUnivariateSolver$Interval_init_ },
          { Py_tp_getset, t_BracketedUnivariateSolver$Interval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketedUnivariateSolver$Interval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BracketedUnivariateSolver$Interval, t_BracketedUnivariateSolver$Interval, BracketedUnivariateSolver$Interval);
        PyObject *t_BracketedUnivariateSolver$Interval::wrap_Object(const BracketedUnivariateSolver$Interval& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedUnivariateSolver$Interval::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedUnivariateSolver$Interval *self = (t_BracketedUnivariateSolver$Interval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BracketedUnivariateSolver$Interval::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedUnivariateSolver$Interval::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedUnivariateSolver$Interval *self = (t_BracketedUnivariateSolver$Interval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BracketedUnivariateSolver$Interval::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketedUnivariateSolver$Interval), &PY_TYPE_DEF(BracketedUnivariateSolver$Interval), module, "BracketedUnivariateSolver$Interval", 0);
        }

        void t_BracketedUnivariateSolver$Interval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver$Interval), "class_", make_descriptor(BracketedUnivariateSolver$Interval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver$Interval), "wrapfn_", make_descriptor(t_BracketedUnivariateSolver$Interval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver$Interval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketedUnivariateSolver$Interval::initializeClass, 1)))
            return NULL;
          return t_BracketedUnivariateSolver$Interval::wrap_Object(BracketedUnivariateSolver$Interval(((t_BracketedUnivariateSolver$Interval *) arg)->object.this$));
        }
        static PyObject *t_BracketedUnivariateSolver$Interval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketedUnivariateSolver$Interval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_of_(t_BracketedUnivariateSolver$Interval *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BracketedUnivariateSolver$Interval_init_(t_BracketedUnivariateSolver$Interval *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          BracketedUnivariateSolver$Interval object((jobject) NULL);

          if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = BracketedUnivariateSolver$Interval(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_getLeftAbscissa(t_BracketedUnivariateSolver$Interval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLeftAbscissa());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_getLeftValue(t_BracketedUnivariateSolver$Interval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLeftValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_getRightAbscissa(t_BracketedUnivariateSolver$Interval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRightAbscissa());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_getRightValue(t_BracketedUnivariateSolver$Interval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRightValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_getSide(t_BracketedUnivariateSolver$Interval *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::solvers::AllowedSolution a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &p0, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
          {
            OBJ_CALL(result = self->object.getSide(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getSide", arg);
          return NULL;
        }
        static PyObject *t_BracketedUnivariateSolver$Interval_get__parameters_(t_BracketedUnivariateSolver$Interval *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_get__leftAbscissa(t_BracketedUnivariateSolver$Interval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLeftAbscissa());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_get__leftValue(t_BracketedUnivariateSolver$Interval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLeftValue());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_get__rightAbscissa(t_BracketedUnivariateSolver$Interval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRightAbscissa());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_get__rightValue(t_BracketedUnivariateSolver$Interval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRightValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggers.h"
#include "org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *ManeuverTriggers::class$ = NULL;
          jmethodID *ManeuverTriggers::mids$ = NULL;
          bool ManeuverTriggers::live$ = false;

          jclass ManeuverTriggers::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/ManeuverTriggers");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addResetter_88f6b3eca6f2ace7] = env->getMethodID(cls, "addResetter", "(Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter;)V");
              mids$[mid_addResetter_7abb1f925b31f873] = env->getMethodID(cls, "addResetter", "(Lorg/hipparchus/Field;Lorg/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter;)V");
              mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_isFiring_430b36eccbd3b265] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/AbsoluteDate;[D)Z");
              mids$[mid_isFiring_d98e2ca7f972ae8c] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void ManeuverTriggers::addResetter(const ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addResetter_88f6b3eca6f2ace7], a0.this$);
          }

          void ManeuverTriggers::addResetter(const ::org::hipparchus::Field & a0, const ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addResetter_7abb1f925b31f873], a0.this$, a1.this$);
          }

          ::java::lang::String ManeuverTriggers::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
          }

          void ManeuverTriggers::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
          }

          void ManeuverTriggers::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_96d019f392abf918], a0.this$, a1.this$);
          }

          jboolean ManeuverTriggers::isFiring(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isFiring_430b36eccbd3b265], a0.this$, a1.this$);
          }

          jboolean ManeuverTriggers::isFiring(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isFiring_d98e2ca7f972ae8c], a0.this$, a1.this$);
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
          static PyObject *t_ManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ManeuverTriggers_addResetter(t_ManeuverTriggers *self, PyObject *args);
          static PyObject *t_ManeuverTriggers_getName(t_ManeuverTriggers *self);
          static PyObject *t_ManeuverTriggers_init(t_ManeuverTriggers *self, PyObject *args);
          static PyObject *t_ManeuverTriggers_isFiring(t_ManeuverTriggers *self, PyObject *args);
          static PyObject *t_ManeuverTriggers_get__name(t_ManeuverTriggers *self, void *data);
          static PyGetSetDef t_ManeuverTriggers__fields_[] = {
            DECLARE_GET_FIELD(t_ManeuverTriggers, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ManeuverTriggers__methods_[] = {
            DECLARE_METHOD(t_ManeuverTriggers, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ManeuverTriggers, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ManeuverTriggers, addResetter, METH_VARARGS),
            DECLARE_METHOD(t_ManeuverTriggers, getName, METH_NOARGS),
            DECLARE_METHOD(t_ManeuverTriggers, init, METH_VARARGS),
            DECLARE_METHOD(t_ManeuverTriggers, isFiring, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ManeuverTriggers)[] = {
            { Py_tp_methods, t_ManeuverTriggers__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ManeuverTriggers__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ManeuverTriggers)[] = {
            &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
            NULL
          };

          DEFINE_TYPE(ManeuverTriggers, t_ManeuverTriggers, ManeuverTriggers);

          void t_ManeuverTriggers::install(PyObject *module)
          {
            installType(&PY_TYPE(ManeuverTriggers), &PY_TYPE_DEF(ManeuverTriggers), module, "ManeuverTriggers", 0);
          }

          void t_ManeuverTriggers::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverTriggers), "class_", make_descriptor(ManeuverTriggers::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverTriggers), "wrapfn_", make_descriptor(t_ManeuverTriggers::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverTriggers), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ManeuverTriggers::initializeClass, 1)))
              return NULL;
            return t_ManeuverTriggers::wrap_Object(ManeuverTriggers(((t_ManeuverTriggers *) arg)->object.this$));
          }
          static PyObject *t_ManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ManeuverTriggers::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ManeuverTriggers_addResetter(t_ManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addResetter(a0));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 2:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::forces::maneuvers::trigger::t_FieldManeuverTriggersResetter::parameters_))
                {
                  OBJ_CALL(self->object.addResetter(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "addResetter", args);
            return NULL;
          }

          static PyObject *t_ManeuverTriggers_getName(t_ManeuverTriggers *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_ManeuverTriggers_init(t_ManeuverTriggers *self, PyObject *args)
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

          static PyObject *t_ManeuverTriggers_isFiring(t_ManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "k[D", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.isFiring(a0, a1));
                  Py_RETURN_BOOL(result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                jboolean result;

                if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.isFiring(a0, a1));
                  Py_RETURN_BOOL(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "isFiring", args);
            return NULL;
          }

          static PyObject *t_ManeuverTriggers_get__name(t_ManeuverTriggers *self, void *data)
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
#include "org/orekit/forces/maneuvers/trigger/PythonManeuverTriggers.h"
#include "org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggers.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonManeuverTriggers::class$ = NULL;
          jmethodID *PythonManeuverTriggers::mids$ = NULL;
          bool PythonManeuverTriggers::live$ = false;

          jclass PythonManeuverTriggers::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonManeuverTriggers");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addResetter_88f6b3eca6f2ace7] = env->getMethodID(cls, "addResetter", "(Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter;)V");
              mids$[mid_addResetter_7abb1f925b31f873] = env->getMethodID(cls, "addResetter", "(Lorg/hipparchus/Field;Lorg/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter;)V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getEventDetectors_14e21bf777ff0ccf] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_283ad33581c047a0] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_isFiring_430b36eccbd3b265] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/AbsoluteDate;[D)Z");
              mids$[mid_isFiring_d98e2ca7f972ae8c] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Z");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonManeuverTriggers::PythonManeuverTriggers() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonManeuverTriggers::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonManeuverTriggers::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonManeuverTriggers::pythonExtension(jlong a0) const
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
          static PyObject *t_PythonManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonManeuverTriggers_init_(t_PythonManeuverTriggers *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonManeuverTriggers_finalize(t_PythonManeuverTriggers *self);
          static PyObject *t_PythonManeuverTriggers_pythonExtension(t_PythonManeuverTriggers *self, PyObject *args);
          static void JNICALL t_PythonManeuverTriggers_addResetter0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonManeuverTriggers_addResetter1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonManeuverTriggers_getEventDetectors2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonManeuverTriggers_getFieldEventDetectors3(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonManeuverTriggers_getParametersDrivers4(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonManeuverTriggers_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jboolean JNICALL t_PythonManeuverTriggers_isFiring6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jboolean JNICALL t_PythonManeuverTriggers_isFiring7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonManeuverTriggers_pythonDecRef8(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonManeuverTriggers_get__self(t_PythonManeuverTriggers *self, void *data);
          static PyGetSetDef t_PythonManeuverTriggers__fields_[] = {
            DECLARE_GET_FIELD(t_PythonManeuverTriggers, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonManeuverTriggers__methods_[] = {
            DECLARE_METHOD(t_PythonManeuverTriggers, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonManeuverTriggers, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonManeuverTriggers, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonManeuverTriggers, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonManeuverTriggers)[] = {
            { Py_tp_methods, t_PythonManeuverTriggers__methods_ },
            { Py_tp_init, (void *) t_PythonManeuverTriggers_init_ },
            { Py_tp_getset, t_PythonManeuverTriggers__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonManeuverTriggers)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonManeuverTriggers, t_PythonManeuverTriggers, PythonManeuverTriggers);

          void t_PythonManeuverTriggers::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonManeuverTriggers), &PY_TYPE_DEF(PythonManeuverTriggers), module, "PythonManeuverTriggers", 1);
          }

          void t_PythonManeuverTriggers::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggers), "class_", make_descriptor(PythonManeuverTriggers::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggers), "wrapfn_", make_descriptor(t_PythonManeuverTriggers::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggers), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonManeuverTriggers::initializeClass);
            JNINativeMethod methods[] = {
              { "addResetter", "(Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter;)V", (void *) t_PythonManeuverTriggers_addResetter0 },
              { "addResetter", "(Lorg/hipparchus/Field;Lorg/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter;)V", (void *) t_PythonManeuverTriggers_addResetter1 },
              { "getEventDetectors", "()Ljava/util/stream/Stream;", (void *) t_PythonManeuverTriggers_getEventDetectors2 },
              { "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;", (void *) t_PythonManeuverTriggers_getFieldEventDetectors3 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonManeuverTriggers_getParametersDrivers4 },
              { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonManeuverTriggers_init5 },
              { "isFiring", "(Lorg/orekit/time/AbsoluteDate;[D)Z", (void *) t_PythonManeuverTriggers_isFiring6 },
              { "isFiring", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Z", (void *) t_PythonManeuverTriggers_isFiring7 },
              { "pythonDecRef", "()V", (void *) t_PythonManeuverTriggers_pythonDecRef8 },
            };
            env->registerNatives(cls, methods, 9);
          }

          static PyObject *t_PythonManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonManeuverTriggers::initializeClass, 1)))
              return NULL;
            return t_PythonManeuverTriggers::wrap_Object(PythonManeuverTriggers(((t_PythonManeuverTriggers *) arg)->object.this$));
          }
          static PyObject *t_PythonManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonManeuverTriggers::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonManeuverTriggers_init_(t_PythonManeuverTriggers *self, PyObject *args, PyObject *kwds)
          {
            PythonManeuverTriggers object((jobject) NULL);

            INT_CALL(object = PythonManeuverTriggers());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonManeuverTriggers_finalize(t_PythonManeuverTriggers *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonManeuverTriggers_pythonExtension(t_PythonManeuverTriggers *self, PyObject *args)
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

          static void JNICALL t_PythonManeuverTriggers_addResetter0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::forces::maneuvers::trigger::t_ManeuverTriggersResetter::wrap_Object(::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter(a0));
            PyObject *result = PyObject_CallMethod(obj, "addResetter", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonManeuverTriggers_addResetter1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *o1 = ::org::orekit::forces::maneuvers::trigger::t_FieldManeuverTriggersResetter::wrap_Object(::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter(a1));
            PyObject *result = PyObject_CallMethod(obj, "addResetter", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static jobject JNICALL t_PythonManeuverTriggers_getEventDetectors2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_6c0ce7e438e5ded4]);
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

          static jobject JNICALL t_PythonManeuverTriggers_getFieldEventDetectors3(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_6c0ce7e438e5ded4]);
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

          static jobject JNICALL t_PythonManeuverTriggers_getParametersDrivers4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_6c0ce7e438e5ded4]);
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

          static void JNICALL t_PythonManeuverTriggers_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_6c0ce7e438e5ded4]);
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

          static jboolean JNICALL t_PythonManeuverTriggers_isFiring6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jboolean value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = JArray<jdouble>(a1).wrap();
            PyObject *result = PyObject_CallMethod(obj, "isFiring", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "Z", &value))
            {
              throwTypeError("isFiring", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jboolean) 0;
          }

          static jboolean JNICALL t_PythonManeuverTriggers_isFiring7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jboolean value;
            PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
            PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "isFiring", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "Z", &value))
            {
              throwTypeError("isFiring", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jboolean) 0;
          }

          static void JNICALL t_PythonManeuverTriggers_pythonDecRef8(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonManeuverTriggers_get__self(t_PythonManeuverTriggers *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ocm.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/data/DataContext.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmData.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmSatelliteEphemeris.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *Ocm::class$ = NULL;
              jmethodID *Ocm::mids$ = NULL;
              bool Ocm::live$ = false;
              ::java::lang::String *Ocm::COV_LINE = NULL;
              ::java::lang::String *Ocm::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Ocm::MAN_LINE = NULL;
              ::java::lang::String *Ocm::ROOT = NULL;
              ::java::lang::String *Ocm::TRAJ_LINE = NULL;
              ::java::lang::String *Ocm::UNKNOWN_OBJECT = NULL;

              jclass Ocm::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/Ocm");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_9639e27fba1a1f36] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;D)V");
                  mids$[mid_getData_af84f99ccaa2105d] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmData;");
                  mids$[mid_getMetadata_e957b96fac0918bd] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;");
                  mids$[mid_getSatellites_810bed48fafb0b9a] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COV_LINE = new ::java::lang::String(env->getStaticObjectField(cls, "COV_LINE", "Ljava/lang/String;"));
                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  MAN_LINE = new ::java::lang::String(env->getStaticObjectField(cls, "MAN_LINE", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  TRAJ_LINE = new ::java::lang::String(env->getStaticObjectField(cls, "TRAJ_LINE", "Ljava/lang/String;"));
                  UNKNOWN_OBJECT = new ::java::lang::String(env->getStaticObjectField(cls, "UNKNOWN_OBJECT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Ocm::Ocm(const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3, jdouble a4) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_9639e27fba1a1f36, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              ::org::orekit::files::ccsds::ndm::odm::ocm::OcmData Ocm::getData() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OcmData(env->callObjectMethod(this$, mids$[mid_getData_af84f99ccaa2105d]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata Ocm::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_e957b96fac0918bd]));
              }

              ::java::util::Map Ocm::getSatellites() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_810bed48fafb0b9a]));
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
              static PyObject *t_Ocm_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Ocm_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Ocm_of_(t_Ocm *self, PyObject *args);
              static int t_Ocm_init_(t_Ocm *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Ocm_getData(t_Ocm *self);
              static PyObject *t_Ocm_getMetadata(t_Ocm *self);
              static PyObject *t_Ocm_getSatellites(t_Ocm *self);
              static PyObject *t_Ocm_get__data(t_Ocm *self, void *data);
              static PyObject *t_Ocm_get__metadata(t_Ocm *self, void *data);
              static PyObject *t_Ocm_get__satellites(t_Ocm *self, void *data);
              static PyObject *t_Ocm_get__parameters_(t_Ocm *self, void *data);
              static PyGetSetDef t_Ocm__fields_[] = {
                DECLARE_GET_FIELD(t_Ocm, data),
                DECLARE_GET_FIELD(t_Ocm, metadata),
                DECLARE_GET_FIELD(t_Ocm, satellites),
                DECLARE_GET_FIELD(t_Ocm, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Ocm__methods_[] = {
                DECLARE_METHOD(t_Ocm, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Ocm, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Ocm, of_, METH_VARARGS),
                DECLARE_METHOD(t_Ocm, getData, METH_NOARGS),
                DECLARE_METHOD(t_Ocm, getMetadata, METH_NOARGS),
                DECLARE_METHOD(t_Ocm, getSatellites, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Ocm)[] = {
                { Py_tp_methods, t_Ocm__methods_ },
                { Py_tp_init, (void *) t_Ocm_init_ },
                { Py_tp_getset, t_Ocm__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Ocm)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Ocm, t_Ocm, Ocm);
              PyObject *t_Ocm::wrap_Object(const Ocm& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Ocm::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Ocm *self = (t_Ocm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Ocm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Ocm::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Ocm *self = (t_Ocm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Ocm::install(PyObject *module)
              {
                installType(&PY_TYPE(Ocm), &PY_TYPE_DEF(Ocm), module, "Ocm", 0);
              }

              void t_Ocm::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "class_", make_descriptor(Ocm::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "wrapfn_", make_descriptor(t_Ocm::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "boxfn_", make_descriptor(boxObject));
                env->getClass(Ocm::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "COV_LINE", make_descriptor(j2p(*Ocm::COV_LINE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Ocm::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "MAN_LINE", make_descriptor(j2p(*Ocm::MAN_LINE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "ROOT", make_descriptor(j2p(*Ocm::ROOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "TRAJ_LINE", make_descriptor(j2p(*Ocm::TRAJ_LINE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "UNKNOWN_OBJECT", make_descriptor(j2p(*Ocm::UNKNOWN_OBJECT)));
              }

              static PyObject *t_Ocm_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Ocm::initializeClass, 1)))
                  return NULL;
                return t_Ocm::wrap_Object(Ocm(((t_Ocm *) arg)->object.this$));
              }
              static PyObject *t_Ocm_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Ocm::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Ocm_of_(t_Ocm *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Ocm_init_(t_Ocm *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                jdouble a4;
                Ocm object((jobject) NULL);

                if (!parseArgs(args, "kKKkD", ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3, &a4))
                {
                  INT_CALL(object = Ocm(a0, a1, a2, a3, a4));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Ocm_getData(t_Ocm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmData result((jobject) NULL);
                OBJ_CALL(result = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmData::wrap_Object(result);
              }

              static PyObject *t_Ocm_getMetadata(t_Ocm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmMetadata::wrap_Object(result);
              }

              static PyObject *t_Ocm_getSatellites(t_Ocm *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatellites());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OcmSatelliteEphemeris));
              }
              static PyObject *t_Ocm_get__parameters_(t_Ocm *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Ocm_get__data(t_Ocm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmData value((jobject) NULL);
                OBJ_CALL(value = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmData::wrap_Object(value);
              }

              static PyObject *t_Ocm_get__metadata(t_Ocm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmMetadata::wrap_Object(value);
              }

              static PyObject *t_Ocm_get__satellites(t_Ocm *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSatellites());
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
#include "org/orekit/gnss/rflink/gps/SubFrameDummyAlmanac.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrameDummyAlmanac::class$ = NULL;
          jmethodID *SubFrameDummyAlmanac::mids$ = NULL;
          bool SubFrameDummyAlmanac::live$ = false;

          jclass SubFrameDummyAlmanac::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrameDummyAlmanac");

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
          static PyObject *t_SubFrameDummyAlmanac_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrameDummyAlmanac_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_SubFrameDummyAlmanac__methods_[] = {
            DECLARE_METHOD(t_SubFrameDummyAlmanac, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrameDummyAlmanac, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrameDummyAlmanac)[] = {
            { Py_tp_methods, t_SubFrameDummyAlmanac__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrameDummyAlmanac)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrameDummyAlmanac, t_SubFrameDummyAlmanac, SubFrameDummyAlmanac);

          void t_SubFrameDummyAlmanac::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrameDummyAlmanac), &PY_TYPE_DEF(SubFrameDummyAlmanac), module, "SubFrameDummyAlmanac", 0);
          }

          void t_SubFrameDummyAlmanac::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrameDummyAlmanac), "class_", make_descriptor(SubFrameDummyAlmanac::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrameDummyAlmanac), "wrapfn_", make_descriptor(t_SubFrameDummyAlmanac::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrameDummyAlmanac), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrameDummyAlmanac_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrameDummyAlmanac::initializeClass, 1)))
              return NULL;
            return t_SubFrameDummyAlmanac::wrap_Object(SubFrameDummyAlmanac(((t_SubFrameDummyAlmanac *) arg)->object.this$));
          }
          static PyObject *t_SubFrameDummyAlmanac_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrameDummyAlmanac::initializeClass, 0))
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
#include "org/orekit/propagation/analytical/PythonFieldAbstractAnalyticalPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *PythonFieldAbstractAnalyticalPropagator::class$ = NULL;
        jmethodID *PythonFieldAbstractAnalyticalPropagator::mids$ = NULL;
        bool PythonFieldAbstractAnalyticalPropagator::live$ = false;

        jclass PythonFieldAbstractAnalyticalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/PythonFieldAbstractAnalyticalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c9d3fc8b6e0fe513] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getMass_140b8964300ddedf] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_propagateOrbit_f34a7a94e111b112] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_resetIntermediateState_871885b409df9d57] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldAbstractAnalyticalPropagator::PythonFieldAbstractAnalyticalPropagator(const ::org::hipparchus::Field & a0, const ::org::orekit::attitudes::AttitudeProvider & a1) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_c9d3fc8b6e0fe513, a0.this$, a1.this$)) {}

        void PythonFieldAbstractAnalyticalPropagator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonFieldAbstractAnalyticalPropagator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonFieldAbstractAnalyticalPropagator::pythonExtension(jlong a0) const
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
      namespace analytical {
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_of_(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args);
        static int t_PythonFieldAbstractAnalyticalPropagator_init_(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_finalize(t_PythonFieldAbstractAnalyticalPropagator *self);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_pythonExtension(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args);
        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_getMass0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_getParametersDrivers1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_propagateOrbit2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonFieldAbstractAnalyticalPropagator_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonFieldAbstractAnalyticalPropagator_resetIntermediateState4(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_get__self(t_PythonFieldAbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_get__parameters_(t_PythonFieldAbstractAnalyticalPropagator *self, void *data);
        static PyGetSetDef t_PythonFieldAbstractAnalyticalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldAbstractAnalyticalPropagator, self),
          DECLARE_GET_FIELD(t_PythonFieldAbstractAnalyticalPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldAbstractAnalyticalPropagator__methods_[] = {
          DECLARE_METHOD(t_PythonFieldAbstractAnalyticalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractAnalyticalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractAnalyticalPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldAbstractAnalyticalPropagator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldAbstractAnalyticalPropagator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldAbstractAnalyticalPropagator)[] = {
          { Py_tp_methods, t_PythonFieldAbstractAnalyticalPropagator__methods_ },
          { Py_tp_init, (void *) t_PythonFieldAbstractAnalyticalPropagator_init_ },
          { Py_tp_getset, t_PythonFieldAbstractAnalyticalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldAbstractAnalyticalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(PythonFieldAbstractAnalyticalPropagator, t_PythonFieldAbstractAnalyticalPropagator, PythonFieldAbstractAnalyticalPropagator);
        PyObject *t_PythonFieldAbstractAnalyticalPropagator::wrap_Object(const PythonFieldAbstractAnalyticalPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAbstractAnalyticalPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractAnalyticalPropagator *self = (t_PythonFieldAbstractAnalyticalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldAbstractAnalyticalPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAbstractAnalyticalPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractAnalyticalPropagator *self = (t_PythonFieldAbstractAnalyticalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldAbstractAnalyticalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldAbstractAnalyticalPropagator), &PY_TYPE_DEF(PythonFieldAbstractAnalyticalPropagator), module, "PythonFieldAbstractAnalyticalPropagator", 1);
        }

        void t_PythonFieldAbstractAnalyticalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractAnalyticalPropagator), "class_", make_descriptor(PythonFieldAbstractAnalyticalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractAnalyticalPropagator), "wrapfn_", make_descriptor(t_PythonFieldAbstractAnalyticalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractAnalyticalPropagator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldAbstractAnalyticalPropagator::initializeClass);
          JNINativeMethod methods[] = {
            { "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldAbstractAnalyticalPropagator_getMass0 },
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonFieldAbstractAnalyticalPropagator_getParametersDrivers1 },
            { "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;", (void *) t_PythonFieldAbstractAnalyticalPropagator_propagateOrbit2 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldAbstractAnalyticalPropagator_pythonDecRef3 },
            { "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V", (void *) t_PythonFieldAbstractAnalyticalPropagator_resetIntermediateState4 },
          };
          env->registerNatives(cls, methods, 5);
        }

        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldAbstractAnalyticalPropagator::initializeClass, 1)))
            return NULL;
          return t_PythonFieldAbstractAnalyticalPropagator::wrap_Object(PythonFieldAbstractAnalyticalPropagator(((t_PythonFieldAbstractAnalyticalPropagator *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldAbstractAnalyticalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_of_(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldAbstractAnalyticalPropagator_init_(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
          PythonFieldAbstractAnalyticalPropagator object((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
          {
            INT_CALL(object = PythonFieldAbstractAnalyticalPropagator(a0, a1));
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

        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_finalize(t_PythonFieldAbstractAnalyticalPropagator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_pythonExtension(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_getMass0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
          PyObject *result = PyObject_CallMethod(obj, "getMass", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
          {
            throwTypeError("getMass", result);
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

        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_getParametersDrivers1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_propagateOrbit2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::orbits::FieldOrbit value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
          PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "propagateOrbit", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::orbits::FieldOrbit::initializeClass, &value))
          {
            throwTypeError("propagateOrbit", result);
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

        static void JNICALL t_PythonFieldAbstractAnalyticalPropagator_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonFieldAbstractAnalyticalPropagator_resetIntermediateState4(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = (a1 ? Py_True : Py_False);
          PyObject *result = PyObject_CallMethod(obj, "resetIntermediateState", "OO", o0, o1);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_get__self(t_PythonFieldAbstractAnalyticalPropagator *self, void *data)
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
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_get__parameters_(t_PythonFieldAbstractAnalyticalPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateFunctionPenaltyAdapter.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
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
              mids$[mid_init$_5ad498a9f61006ff] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateFunction;[D[DD[D)V");
              mids$[mid_value_b060e4326765ccf1] = env->getMethodID(cls, "value", "([D)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MultivariateFunctionPenaltyAdapter::MultivariateFunctionPenaltyAdapter(const ::org::hipparchus::analysis::MultivariateFunction & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, jdouble a3, const JArray< jdouble > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5ad498a9f61006ff, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

          jdouble MultivariateFunctionPenaltyAdapter::value(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_value_b060e4326765ccf1], a0.this$);
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
#include "org/orekit/propagation/numerical/FieldNumericalPropagator.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *FieldNumericalPropagator::class$ = NULL;
        jmethodID *FieldNumericalPropagator::mids$ = NULL;
        bool FieldNumericalPropagator::live$ = false;

        jclass FieldNumericalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/FieldNumericalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b32dfc76ba0d0dfd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;)V");
            mids$[mid_init$_fb37e725b65dfde5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_addForceModel_43775e92e64180fc] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/forces/ForceModel;)V");
            mids$[mid_getAllForceModels_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
            mids$[mid_getOrbitType_c7d4737d7afca612] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPVCoordinates_294c5c99690f2356] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_removeForceModels_a1fa5dae97ea5ed2] = env->getMethodID(cls, "removeForceModels", "()V");
            mids$[mid_resetInitialState_54d9efbf99822980] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_setIgnoreCentralAttraction_fcb96c98de6fad04] = env->getMethodID(cls, "setIgnoreCentralAttraction", "(Z)V");
            mids$[mid_setInitialState_54d9efbf99822980] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_setMu_f2b4bfa0af1007e8] = env->getMethodID(cls, "setMu", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setOrbitType_2fa1f3b8966f0286] = env->getMethodID(cls, "setOrbitType", "(Lorg/orekit/orbits/OrbitType;)V");
            mids$[mid_setPositionAngleType_778d09854443b806] = env->getMethodID(cls, "setPositionAngleType", "(Lorg/orekit/orbits/PositionAngleType;)V");
            mids$[mid_tolerances_17b6398a327a83bc] = env->getStaticMethodID(cls, "tolerances", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)[[D");
            mids$[mid_tolerances_0a58f8dda5b45b16] = env->getStaticMethodID(cls, "tolerances", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)[[D");
            mids$[mid_createMapper_23e677752bbdcbdf] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/FieldStateMapper;");
            mids$[mid_getMainStateEquations_f48ddce9ae4b38bb] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/FieldODEIntegrator;)Lorg/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldNumericalPropagator::FieldNumericalPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_b32dfc76ba0d0dfd, a0.this$, a1.this$)) {}

        FieldNumericalPropagator::FieldNumericalPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_fb37e725b65dfde5, a0.this$, a1.this$, a2.this$)) {}

        void FieldNumericalPropagator::addForceModel(const ::org::orekit::forces::ForceModel & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addForceModel_43775e92e64180fc], a0.this$);
        }

        ::java::util::List FieldNumericalPropagator::getAllForceModels() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_e62d3bb06d56d7e3]));
        }

        ::org::orekit::orbits::OrbitType FieldNumericalPropagator::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_c7d4737d7afca612]));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldNumericalPropagator::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_294c5c99690f2356], a0.this$, a1.this$));
        }

        ::org::orekit::orbits::PositionAngleType FieldNumericalPropagator::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_c25055891f180348]));
        }

        void FieldNumericalPropagator::removeForceModels() const
        {
          env->callVoidMethod(this$, mids$[mid_removeForceModels_a1fa5dae97ea5ed2]);
        }

        void FieldNumericalPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_54d9efbf99822980], a0.this$);
        }

        void FieldNumericalPropagator::setIgnoreCentralAttraction(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIgnoreCentralAttraction_fcb96c98de6fad04], a0);
        }

        void FieldNumericalPropagator::setInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialState_54d9efbf99822980], a0.this$);
        }

        void FieldNumericalPropagator::setMu(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMu_f2b4bfa0af1007e8], a0.this$);
        }

        void FieldNumericalPropagator::setOrbitType(const ::org::orekit::orbits::OrbitType & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOrbitType_2fa1f3b8966f0286], a0.this$);
        }

        void FieldNumericalPropagator::setPositionAngleType(const ::org::orekit::orbits::PositionAngleType & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPositionAngleType_778d09854443b806], a0.this$);
        }

        JArray< JArray< jdouble > > FieldNumericalPropagator::tolerances(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::orbits::FieldOrbit & a1, const ::org::orekit::orbits::OrbitType & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_17b6398a327a83bc], a0.this$, a1.this$, a2.this$));
        }

        JArray< JArray< jdouble > > FieldNumericalPropagator::tolerances(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::orbits::OrbitType & a3)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_0a58f8dda5b45b16], a0.this$, a1.this$, a2.this$, a3.this$));
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
        static PyObject *t_FieldNumericalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_of_(t_FieldNumericalPropagator *self, PyObject *args);
        static int t_FieldNumericalPropagator_init_(t_FieldNumericalPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldNumericalPropagator_addForceModel(t_FieldNumericalPropagator *self, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_getAllForceModels(t_FieldNumericalPropagator *self);
        static PyObject *t_FieldNumericalPropagator_getOrbitType(t_FieldNumericalPropagator *self);
        static PyObject *t_FieldNumericalPropagator_getPVCoordinates(t_FieldNumericalPropagator *self, PyObject *args);
        static PyObject *t_FieldNumericalPropagator_getPositionAngleType(t_FieldNumericalPropagator *self);
        static PyObject *t_FieldNumericalPropagator_removeForceModels(t_FieldNumericalPropagator *self);
        static PyObject *t_FieldNumericalPropagator_resetInitialState(t_FieldNumericalPropagator *self, PyObject *args);
        static PyObject *t_FieldNumericalPropagator_setIgnoreCentralAttraction(t_FieldNumericalPropagator *self, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_setInitialState(t_FieldNumericalPropagator *self, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_setMu(t_FieldNumericalPropagator *self, PyObject *args);
        static PyObject *t_FieldNumericalPropagator_setOrbitType(t_FieldNumericalPropagator *self, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_setPositionAngleType(t_FieldNumericalPropagator *self, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_tolerances(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldNumericalPropagator_get__allForceModels(t_FieldNumericalPropagator *self, void *data);
        static int t_FieldNumericalPropagator_set__ignoreCentralAttraction(t_FieldNumericalPropagator *self, PyObject *arg, void *data);
        static int t_FieldNumericalPropagator_set__initialState(t_FieldNumericalPropagator *self, PyObject *arg, void *data);
        static int t_FieldNumericalPropagator_set__mu(t_FieldNumericalPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldNumericalPropagator_get__orbitType(t_FieldNumericalPropagator *self, void *data);
        static int t_FieldNumericalPropagator_set__orbitType(t_FieldNumericalPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldNumericalPropagator_get__positionAngleType(t_FieldNumericalPropagator *self, void *data);
        static int t_FieldNumericalPropagator_set__positionAngleType(t_FieldNumericalPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldNumericalPropagator_get__parameters_(t_FieldNumericalPropagator *self, void *data);
        static PyGetSetDef t_FieldNumericalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldNumericalPropagator, allForceModels),
          DECLARE_SET_FIELD(t_FieldNumericalPropagator, ignoreCentralAttraction),
          DECLARE_SET_FIELD(t_FieldNumericalPropagator, initialState),
          DECLARE_SET_FIELD(t_FieldNumericalPropagator, mu),
          DECLARE_GETSET_FIELD(t_FieldNumericalPropagator, orbitType),
          DECLARE_GETSET_FIELD(t_FieldNumericalPropagator, positionAngleType),
          DECLARE_GET_FIELD(t_FieldNumericalPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldNumericalPropagator__methods_[] = {
          DECLARE_METHOD(t_FieldNumericalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNumericalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNumericalPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, addForceModel, METH_O),
          DECLARE_METHOD(t_FieldNumericalPropagator, getAllForceModels, METH_NOARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, removeForceModels, METH_NOARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, resetInitialState, METH_VARARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, setIgnoreCentralAttraction, METH_O),
          DECLARE_METHOD(t_FieldNumericalPropagator, setInitialState, METH_O),
          DECLARE_METHOD(t_FieldNumericalPropagator, setMu, METH_VARARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, setOrbitType, METH_O),
          DECLARE_METHOD(t_FieldNumericalPropagator, setPositionAngleType, METH_O),
          DECLARE_METHOD(t_FieldNumericalPropagator, tolerances, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldNumericalPropagator)[] = {
          { Py_tp_methods, t_FieldNumericalPropagator__methods_ },
          { Py_tp_init, (void *) t_FieldNumericalPropagator_init_ },
          { Py_tp_getset, t_FieldNumericalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldNumericalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator),
          NULL
        };

        DEFINE_TYPE(FieldNumericalPropagator, t_FieldNumericalPropagator, FieldNumericalPropagator);
        PyObject *t_FieldNumericalPropagator::wrap_Object(const FieldNumericalPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNumericalPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNumericalPropagator *self = (t_FieldNumericalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldNumericalPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNumericalPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNumericalPropagator *self = (t_FieldNumericalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldNumericalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldNumericalPropagator), &PY_TYPE_DEF(FieldNumericalPropagator), module, "FieldNumericalPropagator", 0);
        }

        void t_FieldNumericalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNumericalPropagator), "class_", make_descriptor(FieldNumericalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNumericalPropagator), "wrapfn_", make_descriptor(t_FieldNumericalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNumericalPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldNumericalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldNumericalPropagator::initializeClass, 1)))
            return NULL;
          return t_FieldNumericalPropagator::wrap_Object(FieldNumericalPropagator(((t_FieldNumericalPropagator *) arg)->object.this$));
        }
        static PyObject *t_FieldNumericalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldNumericalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldNumericalPropagator_of_(t_FieldNumericalPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldNumericalPropagator_init_(t_FieldNumericalPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
              PyTypeObject **p1;
              FieldNumericalPropagator object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_))
              {
                INT_CALL(object = FieldNumericalPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
              FieldNumericalPropagator object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_, &a2))
              {
                INT_CALL(object = FieldNumericalPropagator(a0, a1, a2));
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

        static PyObject *t_FieldNumericalPropagator_addForceModel(t_FieldNumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::forces::ForceModel a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::forces::ForceModel::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addForceModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addForceModel", arg);
          return NULL;
        }

        static PyObject *t_FieldNumericalPropagator_getAllForceModels(t_FieldNumericalPropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(ForceModel));
        }

        static PyObject *t_FieldNumericalPropagator_getOrbitType(t_FieldNumericalPropagator *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_FieldNumericalPropagator_getPVCoordinates(t_FieldNumericalPropagator *self, PyObject *args)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldNumericalPropagator), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_FieldNumericalPropagator_getPositionAngleType(t_FieldNumericalPropagator *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_FieldNumericalPropagator_removeForceModels(t_FieldNumericalPropagator *self)
        {
          OBJ_CALL(self->object.removeForceModels());
          Py_RETURN_NONE;
        }

        static PyObject *t_FieldNumericalPropagator_resetInitialState(t_FieldNumericalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldNumericalPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_FieldNumericalPropagator_setIgnoreCentralAttraction(t_FieldNumericalPropagator *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIgnoreCentralAttraction(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIgnoreCentralAttraction", arg);
          return NULL;
        }

        static PyObject *t_FieldNumericalPropagator_setInitialState(t_FieldNumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.setInitialState(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialState", arg);
          return NULL;
        }

        static PyObject *t_FieldNumericalPropagator_setMu(t_FieldNumericalPropagator *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setMu(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldNumericalPropagator), (PyObject *) self, "setMu", args, 2);
        }

        static PyObject *t_FieldNumericalPropagator_setOrbitType(t_FieldNumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::orbits::OrbitType a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(self->object.setOrbitType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOrbitType", arg);
          return NULL;
        }

        static PyObject *t_FieldNumericalPropagator_setPositionAngleType(t_FieldNumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
          {
            OBJ_CALL(self->object.setPositionAngleType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPositionAngleType", arg);
          return NULL;
        }

        static PyObject *t_FieldNumericalPropagator_tolerances(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::FieldOrbit a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::orbits::OrbitType a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::numerical::FieldNumericalPropagator::tolerances(a0, a1, a2));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
            break;
           case 4:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::orbits::OrbitType a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::numerical::FieldNumericalPropagator::tolerances(a0, a1, a2, a3));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
          }

          PyErr_SetArgsError(type, "tolerances", args);
          return NULL;
        }
        static PyObject *t_FieldNumericalPropagator_get__parameters_(t_FieldNumericalPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldNumericalPropagator_get__allForceModels(t_FieldNumericalPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(value);
        }

        static int t_FieldNumericalPropagator_set__ignoreCentralAttraction(t_FieldNumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setIgnoreCentralAttraction(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "ignoreCentralAttraction", arg);
          return -1;
        }

        static int t_FieldNumericalPropagator_set__initialState(t_FieldNumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
            {
              INT_CALL(self->object.setInitialState(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialState", arg);
          return -1;
        }

        static int t_FieldNumericalPropagator_set__mu(t_FieldNumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setMu(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mu", arg);
          return -1;
        }

        static PyObject *t_FieldNumericalPropagator_get__orbitType(t_FieldNumericalPropagator *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }
        static int t_FieldNumericalPropagator_set__orbitType(t_FieldNumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::orbits::OrbitType value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::orbits::OrbitType::initializeClass, &value))
            {
              INT_CALL(self->object.setOrbitType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "orbitType", arg);
          return -1;
        }

        static PyObject *t_FieldNumericalPropagator_get__positionAngleType(t_FieldNumericalPropagator *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }
        static int t_FieldNumericalPropagator_set__positionAngleType(t_FieldNumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::orbits::PositionAngleType::initializeClass, &value))
            {
              INT_CALL(self->object.setPositionAngleType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "positionAngleType", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/section/RinexLabels.h"
#include "org/orekit/files/rinex/section/RinexLabels.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace section {

          ::java::lang::Class *RinexLabels::class$ = NULL;
          jmethodID *RinexLabels::mids$ = NULL;
          bool RinexLabels::live$ = false;
          RinexLabels *RinexLabels::ANTENNA_B_SIGHT_XYZ = NULL;
          RinexLabels *RinexLabels::ANTENNA_DELTA_H_E_N = NULL;
          RinexLabels *RinexLabels::ANTENNA_DELTA_X_Y_Z = NULL;
          RinexLabels *RinexLabels::ANTENNA_PHASE_CENTER = NULL;
          RinexLabels *RinexLabels::ANTENNA_ZERODIR_AZI = NULL;
          RinexLabels *RinexLabels::ANTENNA_ZERODIR_XYZ = NULL;
          RinexLabels *RinexLabels::ANT_NB_TYPE = NULL;
          RinexLabels *RinexLabels::APPROX_POSITION_XYZ = NULL;
          RinexLabels *RinexLabels::CENTER_OF_MASS_XYZ = NULL;
          RinexLabels *RinexLabels::COMMENT = NULL;
          RinexLabels *RinexLabels::DOI = NULL;
          RinexLabels *RinexLabels::END = NULL;
          RinexLabels *RinexLabels::GLONASS_COD_PHS_BIS = NULL;
          RinexLabels *RinexLabels::GLONASS_SLOT_FRQ_NB = NULL;
          RinexLabels *RinexLabels::INTERVAL = NULL;
          RinexLabels *RinexLabels::LEAP_SECONDS = NULL;
          RinexLabels *RinexLabels::LICENSE = NULL;
          RinexLabels *RinexLabels::MARKER_NAME = NULL;
          RinexLabels *RinexLabels::MARKER_NUMBER = NULL;
          RinexLabels *RinexLabels::MARKER_TYPE = NULL;
          RinexLabels *RinexLabels::NB_OF_SATELLITES = NULL;
          RinexLabels *RinexLabels::NB_TYPES_OF_OBSERV = NULL;
          RinexLabels *RinexLabels::OBSERVER_AGENCY = NULL;
          RinexLabels *RinexLabels::OBS_SCALE_FACTOR = NULL;
          RinexLabels *RinexLabels::PRN_NB_OF_OBS = NULL;
          RinexLabels *RinexLabels::PROGRAM = NULL;
          RinexLabels *RinexLabels::RCV_CLOCK_OFFS_APPL = NULL;
          RinexLabels *RinexLabels::REC_NB_TYPE_VERS = NULL;
          RinexLabels *RinexLabels::SIGNAL_STRENGTH_UNIT = NULL;
          RinexLabels *RinexLabels::STATION_INFORMATION = NULL;
          RinexLabels *RinexLabels::SYS_DCBS_APPLIED = NULL;
          RinexLabels *RinexLabels::SYS_NB_TYPES_OF_OBSERV = NULL;
          RinexLabels *RinexLabels::SYS_PCVS_APPLIED = NULL;
          RinexLabels *RinexLabels::SYS_PHASE_SHIFT = NULL;
          RinexLabels *RinexLabels::SYS_SCALE_FACTOR = NULL;
          RinexLabels *RinexLabels::TIME_OF_FIRST_OBS = NULL;
          RinexLabels *RinexLabels::TIME_OF_LAST_OBS = NULL;
          RinexLabels *RinexLabels::VERSION = NULL;
          RinexLabels *RinexLabels::WAVELENGTH_FACT_L1_2 = NULL;

          jclass RinexLabels::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/section/RinexLabels");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getLabel_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLabel", "()Ljava/lang/String;");
              mids$[mid_matches_cde6b28e15c96b75] = env->getMethodID(cls, "matches", "(Ljava/lang/String;)Z");
              mids$[mid_valueOf_054b20b7c728ef4e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/section/RinexLabels;");
              mids$[mid_values_9965677b3e03746d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/section/RinexLabels;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              ANTENNA_B_SIGHT_XYZ = new RinexLabels(env->getStaticObjectField(cls, "ANTENNA_B_SIGHT_XYZ", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              ANTENNA_DELTA_H_E_N = new RinexLabels(env->getStaticObjectField(cls, "ANTENNA_DELTA_H_E_N", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              ANTENNA_DELTA_X_Y_Z = new RinexLabels(env->getStaticObjectField(cls, "ANTENNA_DELTA_X_Y_Z", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              ANTENNA_PHASE_CENTER = new RinexLabels(env->getStaticObjectField(cls, "ANTENNA_PHASE_CENTER", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              ANTENNA_ZERODIR_AZI = new RinexLabels(env->getStaticObjectField(cls, "ANTENNA_ZERODIR_AZI", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              ANTENNA_ZERODIR_XYZ = new RinexLabels(env->getStaticObjectField(cls, "ANTENNA_ZERODIR_XYZ", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              ANT_NB_TYPE = new RinexLabels(env->getStaticObjectField(cls, "ANT_NB_TYPE", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              APPROX_POSITION_XYZ = new RinexLabels(env->getStaticObjectField(cls, "APPROX_POSITION_XYZ", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              CENTER_OF_MASS_XYZ = new RinexLabels(env->getStaticObjectField(cls, "CENTER_OF_MASS_XYZ", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              COMMENT = new RinexLabels(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              DOI = new RinexLabels(env->getStaticObjectField(cls, "DOI", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              END = new RinexLabels(env->getStaticObjectField(cls, "END", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              GLONASS_COD_PHS_BIS = new RinexLabels(env->getStaticObjectField(cls, "GLONASS_COD_PHS_BIS", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              GLONASS_SLOT_FRQ_NB = new RinexLabels(env->getStaticObjectField(cls, "GLONASS_SLOT_FRQ_NB", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              INTERVAL = new RinexLabels(env->getStaticObjectField(cls, "INTERVAL", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              LEAP_SECONDS = new RinexLabels(env->getStaticObjectField(cls, "LEAP_SECONDS", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              LICENSE = new RinexLabels(env->getStaticObjectField(cls, "LICENSE", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              MARKER_NAME = new RinexLabels(env->getStaticObjectField(cls, "MARKER_NAME", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              MARKER_NUMBER = new RinexLabels(env->getStaticObjectField(cls, "MARKER_NUMBER", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              MARKER_TYPE = new RinexLabels(env->getStaticObjectField(cls, "MARKER_TYPE", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              NB_OF_SATELLITES = new RinexLabels(env->getStaticObjectField(cls, "NB_OF_SATELLITES", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              NB_TYPES_OF_OBSERV = new RinexLabels(env->getStaticObjectField(cls, "NB_TYPES_OF_OBSERV", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              OBSERVER_AGENCY = new RinexLabels(env->getStaticObjectField(cls, "OBSERVER_AGENCY", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              OBS_SCALE_FACTOR = new RinexLabels(env->getStaticObjectField(cls, "OBS_SCALE_FACTOR", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              PRN_NB_OF_OBS = new RinexLabels(env->getStaticObjectField(cls, "PRN_NB_OF_OBS", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              PROGRAM = new RinexLabels(env->getStaticObjectField(cls, "PROGRAM", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              RCV_CLOCK_OFFS_APPL = new RinexLabels(env->getStaticObjectField(cls, "RCV_CLOCK_OFFS_APPL", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              REC_NB_TYPE_VERS = new RinexLabels(env->getStaticObjectField(cls, "REC_NB_TYPE_VERS", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              SIGNAL_STRENGTH_UNIT = new RinexLabels(env->getStaticObjectField(cls, "SIGNAL_STRENGTH_UNIT", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              STATION_INFORMATION = new RinexLabels(env->getStaticObjectField(cls, "STATION_INFORMATION", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              SYS_DCBS_APPLIED = new RinexLabels(env->getStaticObjectField(cls, "SYS_DCBS_APPLIED", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              SYS_NB_TYPES_OF_OBSERV = new RinexLabels(env->getStaticObjectField(cls, "SYS_NB_TYPES_OF_OBSERV", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              SYS_PCVS_APPLIED = new RinexLabels(env->getStaticObjectField(cls, "SYS_PCVS_APPLIED", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              SYS_PHASE_SHIFT = new RinexLabels(env->getStaticObjectField(cls, "SYS_PHASE_SHIFT", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              SYS_SCALE_FACTOR = new RinexLabels(env->getStaticObjectField(cls, "SYS_SCALE_FACTOR", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              TIME_OF_FIRST_OBS = new RinexLabels(env->getStaticObjectField(cls, "TIME_OF_FIRST_OBS", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              TIME_OF_LAST_OBS = new RinexLabels(env->getStaticObjectField(cls, "TIME_OF_LAST_OBS", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              VERSION = new RinexLabels(env->getStaticObjectField(cls, "VERSION", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              WAVELENGTH_FACT_L1_2 = new RinexLabels(env->getStaticObjectField(cls, "WAVELENGTH_FACT_L1_2", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String RinexLabels::getLabel() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLabel_1c1fa1e935d6cdcf]));
          }

          jboolean RinexLabels::matches(const ::java::lang::String & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_matches_cde6b28e15c96b75], a0.this$);
          }

          RinexLabels RinexLabels::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RinexLabels(env->callStaticObjectMethod(cls, mids$[mid_valueOf_054b20b7c728ef4e], a0.this$));
          }

          JArray< RinexLabels > RinexLabels::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RinexLabels >(env->callStaticObjectMethod(cls, mids$[mid_values_9965677b3e03746d]));
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
        namespace section {
          static PyObject *t_RinexLabels_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexLabels_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexLabels_of_(t_RinexLabels *self, PyObject *args);
          static PyObject *t_RinexLabels_getLabel(t_RinexLabels *self);
          static PyObject *t_RinexLabels_matches(t_RinexLabels *self, PyObject *arg);
          static PyObject *t_RinexLabels_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RinexLabels_values(PyTypeObject *type);
          static PyObject *t_RinexLabels_get__label(t_RinexLabels *self, void *data);
          static PyObject *t_RinexLabels_get__parameters_(t_RinexLabels *self, void *data);
          static PyGetSetDef t_RinexLabels__fields_[] = {
            DECLARE_GET_FIELD(t_RinexLabels, label),
            DECLARE_GET_FIELD(t_RinexLabels, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexLabels__methods_[] = {
            DECLARE_METHOD(t_RinexLabels, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexLabels, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexLabels, of_, METH_VARARGS),
            DECLARE_METHOD(t_RinexLabels, getLabel, METH_NOARGS),
            DECLARE_METHOD(t_RinexLabels, matches, METH_O),
            DECLARE_METHOD(t_RinexLabels, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RinexLabels, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexLabels)[] = {
            { Py_tp_methods, t_RinexLabels__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RinexLabels__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexLabels)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RinexLabels, t_RinexLabels, RinexLabels);
          PyObject *t_RinexLabels::wrap_Object(const RinexLabels& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexLabels::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexLabels *self = (t_RinexLabels *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RinexLabels::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexLabels::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexLabels *self = (t_RinexLabels *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RinexLabels::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexLabels), &PY_TYPE_DEF(RinexLabels), module, "RinexLabels", 0);
          }

          void t_RinexLabels::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "class_", make_descriptor(RinexLabels::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "wrapfn_", make_descriptor(t_RinexLabels::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "boxfn_", make_descriptor(boxObject));
            env->getClass(RinexLabels::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANTENNA_B_SIGHT_XYZ", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANTENNA_B_SIGHT_XYZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANTENNA_DELTA_H_E_N", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANTENNA_DELTA_H_E_N)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANTENNA_DELTA_X_Y_Z", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANTENNA_DELTA_X_Y_Z)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANTENNA_PHASE_CENTER", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANTENNA_PHASE_CENTER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANTENNA_ZERODIR_AZI", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANTENNA_ZERODIR_AZI)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANTENNA_ZERODIR_XYZ", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANTENNA_ZERODIR_XYZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANT_NB_TYPE", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANT_NB_TYPE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "APPROX_POSITION_XYZ", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::APPROX_POSITION_XYZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "CENTER_OF_MASS_XYZ", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::CENTER_OF_MASS_XYZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "COMMENT", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::COMMENT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "DOI", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::DOI)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "END", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::END)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "GLONASS_COD_PHS_BIS", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::GLONASS_COD_PHS_BIS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "GLONASS_SLOT_FRQ_NB", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::GLONASS_SLOT_FRQ_NB)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "INTERVAL", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::INTERVAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "LEAP_SECONDS", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::LEAP_SECONDS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "LICENSE", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::LICENSE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "MARKER_NAME", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::MARKER_NAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "MARKER_NUMBER", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::MARKER_NUMBER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "MARKER_TYPE", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::MARKER_TYPE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "NB_OF_SATELLITES", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::NB_OF_SATELLITES)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "NB_TYPES_OF_OBSERV", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::NB_TYPES_OF_OBSERV)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "OBSERVER_AGENCY", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::OBSERVER_AGENCY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "OBS_SCALE_FACTOR", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::OBS_SCALE_FACTOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "PRN_NB_OF_OBS", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::PRN_NB_OF_OBS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "PROGRAM", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::PROGRAM)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "RCV_CLOCK_OFFS_APPL", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::RCV_CLOCK_OFFS_APPL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "REC_NB_TYPE_VERS", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::REC_NB_TYPE_VERS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "SIGNAL_STRENGTH_UNIT", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::SIGNAL_STRENGTH_UNIT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "STATION_INFORMATION", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::STATION_INFORMATION)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "SYS_DCBS_APPLIED", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::SYS_DCBS_APPLIED)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "SYS_NB_TYPES_OF_OBSERV", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::SYS_NB_TYPES_OF_OBSERV)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "SYS_PCVS_APPLIED", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::SYS_PCVS_APPLIED)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "SYS_PHASE_SHIFT", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::SYS_PHASE_SHIFT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "SYS_SCALE_FACTOR", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::SYS_SCALE_FACTOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "TIME_OF_FIRST_OBS", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::TIME_OF_FIRST_OBS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "TIME_OF_LAST_OBS", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::TIME_OF_LAST_OBS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "VERSION", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::VERSION)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "WAVELENGTH_FACT_L1_2", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::WAVELENGTH_FACT_L1_2)));
          }

          static PyObject *t_RinexLabels_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexLabels::initializeClass, 1)))
              return NULL;
            return t_RinexLabels::wrap_Object(RinexLabels(((t_RinexLabels *) arg)->object.this$));
          }
          static PyObject *t_RinexLabels_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexLabels::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexLabels_of_(t_RinexLabels *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RinexLabels_getLabel(t_RinexLabels *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLabel());
            return j2p(result);
          }

          static PyObject *t_RinexLabels_matches(t_RinexLabels *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = self->object.matches(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "matches", arg);
            return NULL;
          }

          static PyObject *t_RinexLabels_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RinexLabels result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::section::RinexLabels::valueOf(a0));
              return t_RinexLabels::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RinexLabels_values(PyTypeObject *type)
          {
            JArray< RinexLabels > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::section::RinexLabels::values());
            return JArray<jobject>(result.this$).wrap(t_RinexLabels::wrap_jobject);
          }
          static PyObject *t_RinexLabels_get__parameters_(t_RinexLabels *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_RinexLabels_get__label(t_RinexLabels *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLabel());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FrameAdapter.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FrameAdapter::class$ = NULL;
      jmethodID *FrameAdapter::mids$ = NULL;
      bool FrameAdapter::live$ = false;

      jclass FrameAdapter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FrameAdapter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_237ae1c2ddd68062] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_getPVCoordinates_e5d15ef236cd9ffe] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_294c5c99690f2356] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FrameAdapter::FrameAdapter(const ::org::orekit::frames::Frame & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_237ae1c2ddd68062, a0.this$)) {}

      ::org::orekit::utils::TimeStampedPVCoordinates FrameAdapter::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_e5d15ef236cd9ffe], a0.this$, a1.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FrameAdapter::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_294c5c99690f2356], a0.this$, a1.this$));
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
      static PyObject *t_FrameAdapter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FrameAdapter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FrameAdapter_init_(t_FrameAdapter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FrameAdapter_getPVCoordinates(t_FrameAdapter *self, PyObject *args);

      static PyMethodDef t_FrameAdapter__methods_[] = {
        DECLARE_METHOD(t_FrameAdapter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FrameAdapter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FrameAdapter, getPVCoordinates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FrameAdapter)[] = {
        { Py_tp_methods, t_FrameAdapter__methods_ },
        { Py_tp_init, (void *) t_FrameAdapter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FrameAdapter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FrameAdapter, t_FrameAdapter, FrameAdapter);

      void t_FrameAdapter::install(PyObject *module)
      {
        installType(&PY_TYPE(FrameAdapter), &PY_TYPE_DEF(FrameAdapter), module, "FrameAdapter", 0);
      }

      void t_FrameAdapter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAdapter), "class_", make_descriptor(FrameAdapter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAdapter), "wrapfn_", make_descriptor(t_FrameAdapter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAdapter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FrameAdapter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FrameAdapter::initializeClass, 1)))
          return NULL;
        return t_FrameAdapter::wrap_Object(FrameAdapter(((t_FrameAdapter *) arg)->object.this$));
      }
      static PyObject *t_FrameAdapter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FrameAdapter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FrameAdapter_init_(t_FrameAdapter *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        FrameAdapter object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          INT_CALL(object = FrameAdapter(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FrameAdapter_getPVCoordinates(t_FrameAdapter *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile$EstimationType.h"
#include "org/hipparchus/util/KthSelector.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile$EstimationType.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *Percentile$EstimationType::class$ = NULL;
          jmethodID *Percentile$EstimationType::mids$ = NULL;
          bool Percentile$EstimationType::live$ = false;
          Percentile$EstimationType *Percentile$EstimationType::LEGACY = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_1 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_2 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_3 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_4 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_5 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_6 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_7 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_8 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_9 = NULL;

          jclass Percentile$EstimationType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/Percentile$EstimationType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_evaluate_277b4197ae8b11e0] = env->getMethodID(cls, "evaluate", "([DDLorg/hipparchus/util/KthSelector;)D");
              mids$[mid_valueOf_dc3b80bb31d9b228] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;");
              mids$[mid_values_24f41f3feae5d2c6] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;");
              mids$[mid_evaluate_2cc81657fa5be2fc] = env->getMethodID(cls, "evaluate", "([D[IDLorg/hipparchus/util/KthSelector;)D");
              mids$[mid_estimate_e9cab51bdf58a786] = env->getMethodID(cls, "estimate", "([D[IDILorg/hipparchus/util/KthSelector;)D");
              mids$[mid_index_2eeda88661ae34d3] = env->getMethodID(cls, "index", "(DI)D");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              LEGACY = new Percentile$EstimationType(env->getStaticObjectField(cls, "LEGACY", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_1 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_1", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_2 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_2", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_3 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_3", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_4 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_4", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_5 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_5", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_6 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_6", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_7 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_7", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_8 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_8", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_9 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_9", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble Percentile$EstimationType::evaluate(const JArray< jdouble > & a0, jdouble a1, const ::org::hipparchus::util::KthSelector & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_277b4197ae8b11e0], a0.this$, a1, a2.this$);
          }

          Percentile$EstimationType Percentile$EstimationType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Percentile$EstimationType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_dc3b80bb31d9b228], a0.this$));
          }

          JArray< Percentile$EstimationType > Percentile$EstimationType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< Percentile$EstimationType >(env->callStaticObjectMethod(cls, mids$[mid_values_24f41f3feae5d2c6]));
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
          static PyObject *t_Percentile$EstimationType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Percentile$EstimationType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Percentile$EstimationType_of_(t_Percentile$EstimationType *self, PyObject *args);
          static PyObject *t_Percentile$EstimationType_evaluate(t_Percentile$EstimationType *self, PyObject *args);
          static PyObject *t_Percentile$EstimationType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_Percentile$EstimationType_values(PyTypeObject *type);
          static PyObject *t_Percentile$EstimationType_get__parameters_(t_Percentile$EstimationType *self, void *data);
          static PyGetSetDef t_Percentile$EstimationType__fields_[] = {
            DECLARE_GET_FIELD(t_Percentile$EstimationType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Percentile$EstimationType__methods_[] = {
            DECLARE_METHOD(t_Percentile$EstimationType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Percentile$EstimationType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Percentile$EstimationType, of_, METH_VARARGS),
            DECLARE_METHOD(t_Percentile$EstimationType, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Percentile$EstimationType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Percentile$EstimationType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Percentile$EstimationType)[] = {
            { Py_tp_methods, t_Percentile$EstimationType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Percentile$EstimationType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Percentile$EstimationType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(Percentile$EstimationType, t_Percentile$EstimationType, Percentile$EstimationType);
          PyObject *t_Percentile$EstimationType::wrap_Object(const Percentile$EstimationType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Percentile$EstimationType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Percentile$EstimationType *self = (t_Percentile$EstimationType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Percentile$EstimationType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Percentile$EstimationType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Percentile$EstimationType *self = (t_Percentile$EstimationType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Percentile$EstimationType::install(PyObject *module)
          {
            installType(&PY_TYPE(Percentile$EstimationType), &PY_TYPE_DEF(Percentile$EstimationType), module, "Percentile$EstimationType", 0);
          }

          void t_Percentile$EstimationType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "class_", make_descriptor(Percentile$EstimationType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "wrapfn_", make_descriptor(t_Percentile$EstimationType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "boxfn_", make_descriptor(boxObject));
            env->getClass(Percentile$EstimationType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "LEGACY", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::LEGACY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_1", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_2", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_3", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_3)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_4", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_4)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_5", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_5)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_6", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_6)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_7", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_7)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_8", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_8)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_9", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_9)));
          }

          static PyObject *t_Percentile$EstimationType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Percentile$EstimationType::initializeClass, 1)))
              return NULL;
            return t_Percentile$EstimationType::wrap_Object(Percentile$EstimationType(((t_Percentile$EstimationType *) arg)->object.this$));
          }
          static PyObject *t_Percentile$EstimationType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Percentile$EstimationType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Percentile$EstimationType_of_(t_Percentile$EstimationType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_Percentile$EstimationType_evaluate(t_Percentile$EstimationType *self, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::util::KthSelector a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[DDk", ::org::hipparchus::util::KthSelector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "evaluate", args);
            return NULL;
          }

          static PyObject *t_Percentile$EstimationType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            Percentile$EstimationType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType::valueOf(a0));
              return t_Percentile$EstimationType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_Percentile$EstimationType_values(PyTypeObject *type)
          {
            JArray< Percentile$EstimationType > result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType::values());
            return JArray<jobject>(result.this$).wrap(t_Percentile$EstimationType::wrap_jobject);
          }
          static PyObject *t_Percentile$EstimationType_get__parameters_(t_Percentile$EstimationType *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}

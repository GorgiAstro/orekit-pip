#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/ImpulseManeuver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/forces/maneuvers/ImpulseManeuver.h"
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
            mids$[mid_init$_026e9c39f96053f1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_init$_438004526d4fc079] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_init$_b94e00e001ca26d6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/forces/maneuvers/Control3DVectorCostType;)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getAttitudeOverride_331f12bb6017243b] = env->getMethodID(cls, "getAttitudeOverride", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getControl3DVectorCostType_2eba60c257188b83] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
            mids$[mid_getDeltaVSat_8b724f8b4fdad1a2] = env->getMethodID(cls, "getDeltaVSat", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getIsp_b74f83833fdad017] = env->getMethodID(cls, "getIsp", "()D");
            mids$[mid_getTrigger_9ada55f07f5a223c] = env->getMethodID(cls, "getTrigger", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_3a8f4feff9431f65] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/forces/maneuvers/ImpulseManeuver;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ImpulseManeuver::ImpulseManeuver(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_026e9c39f96053f1, a0.this$, a1.this$, a2)) {}

        ImpulseManeuver::ImpulseManeuver(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_438004526d4fc079, a0.this$, a1.this$, a2.this$, a3)) {}

        ImpulseManeuver::ImpulseManeuver(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a4) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_b94e00e001ca26d6, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

        jdouble ImpulseManeuver::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        ::org::orekit::attitudes::AttitudeProvider ImpulseManeuver::getAttitudeOverride() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeOverride_331f12bb6017243b]));
        }

        ::org::orekit::forces::maneuvers::Control3DVectorCostType ImpulseManeuver::getControl3DVectorCostType() const
        {
          return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_2eba60c257188b83]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ImpulseManeuver::getDeltaVSat() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDeltaVSat_8b724f8b4fdad1a2]));
        }

        jdouble ImpulseManeuver::getIsp() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIsp_b74f83833fdad017]);
        }

        ::org::orekit::propagation::events::EventDetector ImpulseManeuver::getTrigger() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getTrigger_9ada55f07f5a223c]));
        }

        void ImpulseManeuver::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
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
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedFieldPVCoordinates::class$ = NULL;
      jmethodID *TimeStampedFieldPVCoordinates::mids$ = NULL;
      bool TimeStampedFieldPVCoordinates::live$ = false;

      jclass TimeStampedFieldPVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedFieldPVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a8bfd6ad44b787f3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/TimeStampedPVCoordinates;)V");
          mids$[mid_init$_cfc788dca6a8235d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_dc699a7de0f37bf7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_b19b60e39c50b506] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_6994897a320d907d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_8e321282deb95025] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_40c2a76141cc9860] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_d2c8e93461a601ac] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_3cb5ec6833cdf23f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_381a4ecdb8fd3a35] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_b3a0c531ef4cb80d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_1d369cfda8906471] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_afebadf13f26164f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_4b2d668898c102f2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_e54f6b601b347d30] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_47bd782156c58a6e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_fde1eabc1afd00a9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_0302a7d74ec18402] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_9b8d2f22281e263c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_d3ace86dfc4fff67] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_7be77f8a0e6f26b1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_96ee45abc6c523c9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_d6804e188ec0c16f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_3760ed8939cf69da] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_8c5e7fefe4a79b68] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_20e893655c6f85d0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_eeefa546ece94c1c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_34c1cadd913c26a5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_c1896ea3ed563785] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_6f8d22976d3a6e18] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_e58f765a3e221501] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_51644ef4bc2dd8e9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_getDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_shiftedBy_a479dbc1b53ce443] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_shiftedBy_8a2825d4f6c40ffa] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toString_2ee13d9bd10373d0] = env->getMethodID(cls, "toString", "(Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toTimeStampedPVCoordinates_136cc8ba23b21c29] = env->getMethodID(cls, "toTimeStampedPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::TimeStampedPVCoordinates & a1) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_a8bfd6ad44b787f3, a0.this$, a1.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_cfc788dca6a8235d, a0.this$, a1.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_dc699a7de0f37bf7, a0.this$, a1.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_b19b60e39c50b506, a0.this$, a1.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_6994897a320d907d, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_8e321282deb95025, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_40c2a76141cc9860, a0.this$, a1, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_d2c8e93461a601ac, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_3cb5ec6833cdf23f, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_381a4ecdb8fd3a35, a0.this$, a1, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_b3a0c531ef4cb80d, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_1d369cfda8906471, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_afebadf13f26164f, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_4b2d668898c102f2, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_e54f6b601b347d30, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_47bd782156c58a6e, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_fde1eabc1afd00a9, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_0302a7d74ec18402, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_9b8d2f22281e263c, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_d3ace86dfc4fff67, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5, const ::org::orekit::utils::FieldPVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_7be77f8a0e6f26b1, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5, const ::org::orekit::utils::FieldPVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_96ee45abc6c523c9, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::FieldPVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_d6804e188ec0c16f, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::FieldPVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_3760ed8939cf69da, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::PVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_8c5e7fefe4a79b68, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::PVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_20e893655c6f85d0, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5, const ::org::orekit::utils::FieldPVCoordinates & a6, jdouble a7, const ::org::orekit::utils::FieldPVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_eeefa546ece94c1c, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$, a7, a8.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::FieldPVCoordinates & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::orekit::utils::FieldPVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_34c1cadd913c26a5, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::FieldPVCoordinates & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::orekit::utils::FieldPVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_c1896ea3ed563785, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::PVCoordinates & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::orekit::utils::PVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_6f8d22976d3a6e18, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5, const ::org::orekit::utils::FieldPVCoordinates & a6, jdouble a7, const ::org::orekit::utils::FieldPVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_e58f765a3e221501, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$, a7, a8.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::PVCoordinates & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::orekit::utils::PVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_51644ef4bc2dd8e9, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

      ::org::orekit::time::FieldAbsoluteDate TimeStampedFieldPVCoordinates::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_fa23a4301b9c83e7]));
      }

      TimeStampedFieldPVCoordinates TimeStampedFieldPVCoordinates::shiftedBy(jdouble a0) const
      {
        return TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_a479dbc1b53ce443], a0));
      }

      TimeStampedFieldPVCoordinates TimeStampedFieldPVCoordinates::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_8a2825d4f6c40ffa], a0.this$));
      }

      ::java::lang::String TimeStampedFieldPVCoordinates::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String TimeStampedFieldPVCoordinates::toString(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_2ee13d9bd10373d0], a0.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates TimeStampedFieldPVCoordinates::toTimeStampedPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_toTimeStampedPVCoordinates_136cc8ba23b21c29]));
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
      static PyObject *t_TimeStampedFieldPVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldPVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldPVCoordinates_of_(t_TimeStampedFieldPVCoordinates *self, PyObject *args);
      static int t_TimeStampedFieldPVCoordinates_init_(t_TimeStampedFieldPVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedFieldPVCoordinates_getDate(t_TimeStampedFieldPVCoordinates *self);
      static PyObject *t_TimeStampedFieldPVCoordinates_shiftedBy(t_TimeStampedFieldPVCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldPVCoordinates_toString(t_TimeStampedFieldPVCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldPVCoordinates_toTimeStampedPVCoordinates(t_TimeStampedFieldPVCoordinates *self);
      static PyObject *t_TimeStampedFieldPVCoordinates_get__date(t_TimeStampedFieldPVCoordinates *self, void *data);
      static PyObject *t_TimeStampedFieldPVCoordinates_get__parameters_(t_TimeStampedFieldPVCoordinates *self, void *data);
      static PyGetSetDef t_TimeStampedFieldPVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedFieldPVCoordinates, date),
        DECLARE_GET_FIELD(t_TimeStampedFieldPVCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedFieldPVCoordinates__methods_[] = {
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, toString, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, toTimeStampedPVCoordinates, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedFieldPVCoordinates)[] = {
        { Py_tp_methods, t_TimeStampedFieldPVCoordinates__methods_ },
        { Py_tp_init, (void *) t_TimeStampedFieldPVCoordinates_init_ },
        { Py_tp_getset, t_TimeStampedFieldPVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedFieldPVCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::FieldPVCoordinates),
        NULL
      };

      DEFINE_TYPE(TimeStampedFieldPVCoordinates, t_TimeStampedFieldPVCoordinates, TimeStampedFieldPVCoordinates);
      PyObject *t_TimeStampedFieldPVCoordinates::wrap_Object(const TimeStampedFieldPVCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldPVCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldPVCoordinates *self = (t_TimeStampedFieldPVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedFieldPVCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldPVCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldPVCoordinates *self = (t_TimeStampedFieldPVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedFieldPVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedFieldPVCoordinates), &PY_TYPE_DEF(TimeStampedFieldPVCoordinates), module, "TimeStampedFieldPVCoordinates", 0);
      }

      void t_TimeStampedFieldPVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldPVCoordinates), "class_", make_descriptor(TimeStampedFieldPVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldPVCoordinates), "wrapfn_", make_descriptor(t_TimeStampedFieldPVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldPVCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedFieldPVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedFieldPVCoordinates::initializeClass, 1)))
          return NULL;
        return t_TimeStampedFieldPVCoordinates::wrap_Object(TimeStampedFieldPVCoordinates(((t_TimeStampedFieldPVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedFieldPVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedFieldPVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedFieldPVCoordinates_of_(t_TimeStampedFieldPVCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedFieldPVCoordinates_init_(t_TimeStampedFieldPVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedPVCoordinates a1((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KDK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDKDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KDKDK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKkKk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKkKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDKDKDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KDKDKDK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKKKKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::PVCoordinates a6((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKkKkKk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::PVCoordinates a6((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKkKkKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          goto err;
         case 9:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            jdouble a7;
            ::org::orekit::utils::FieldPVCoordinates a8((jobject) NULL);
            PyTypeObject **p8;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDKDKDKDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a7, &a8, &p8, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            ::org::orekit::utils::FieldPVCoordinates a8((jobject) NULL);
            PyTypeObject **p8;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKKKKKKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            ::org::orekit::utils::FieldPVCoordinates a8((jobject) NULL);
            PyTypeObject **p8;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::PVCoordinates a6((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            ::org::orekit::utils::PVCoordinates a8((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKkKkKkKk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            jdouble a7;
            ::org::orekit::utils::FieldPVCoordinates a8((jobject) NULL);
            PyTypeObject **p8;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KDKDKDKDK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a7, &a8, &p8, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::PVCoordinates a6((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            ::org::orekit::utils::PVCoordinates a8((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKkKkKkKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
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

      static PyObject *t_TimeStampedFieldPVCoordinates_getDate(t_TimeStampedFieldPVCoordinates *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeStampedFieldPVCoordinates_shiftedBy(t_TimeStampedFieldPVCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(TimeStampedFieldPVCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_TimeStampedFieldPVCoordinates_toString(t_TimeStampedFieldPVCoordinates *self, PyObject *args)
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
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(TimeStampedFieldPVCoordinates), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TimeStampedFieldPVCoordinates_toTimeStampedPVCoordinates(t_TimeStampedFieldPVCoordinates *self)
      {
        ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toTimeStampedPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
      }
      static PyObject *t_TimeStampedFieldPVCoordinates_get__parameters_(t_TimeStampedFieldPVCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedFieldPVCoordinates_get__date(t_TimeStampedFieldPVCoordinates *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldTaylorMap.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrixDecomposer.h"
#include "org/hipparchus/analysis/differentiation/FieldTaylorMap.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldTaylorMap::class$ = NULL;
        jmethodID *FieldTaylorMap::mids$ = NULL;
        bool FieldTaylorMap::live$ = false;

        jclass FieldTaylorMap::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldTaylorMap");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8356de26692c5649] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)V");
            mids$[mid_init$_aa3d598d86c9a2b6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;III)V");
            mids$[mid_compose_965d6f38bf560791] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/analysis/differentiation/FieldTaylorMap;)Lorg/hipparchus/analysis/differentiation/FieldTaylorMap;");
            mids$[mid_getFunction_1a54109df9c15fac] = env->getMethodID(cls, "getFunction", "(I)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getNbFunctions_55546ef6a647f39b] = env->getMethodID(cls, "getNbFunctions", "()I");
            mids$[mid_getNbParameters_55546ef6a647f39b] = env->getMethodID(cls, "getNbParameters", "()I");
            mids$[mid_getPoint_883be608cfc68c26] = env->getMethodID(cls, "getPoint", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_invert_8fe79baf5efe64ab] = env->getMethodID(cls, "invert", "(Lorg/hipparchus/linear/FieldMatrixDecomposer;)Lorg/hipparchus/analysis/differentiation/FieldTaylorMap;");
            mids$[mid_value_d36b5f4f656d870d] = env->getMethodID(cls, "value", "([D)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_1cc99f34da9b4a7b] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldTaylorMap::FieldTaylorMap(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8356de26692c5649, a0.this$, a1.this$)) {}

        FieldTaylorMap::FieldTaylorMap(const ::org::hipparchus::Field & a0, jint a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aa3d598d86c9a2b6, a0.this$, a1, a2, a3)) {}

        FieldTaylorMap FieldTaylorMap::compose(const FieldTaylorMap & a0) const
        {
          return FieldTaylorMap(env->callObjectMethod(this$, mids$[mid_compose_965d6f38bf560791], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FieldTaylorMap::getFunction(jint a0) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getFunction_1a54109df9c15fac], a0));
        }

        jint FieldTaylorMap::getNbFunctions() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbFunctions_55546ef6a647f39b]);
        }

        jint FieldTaylorMap::getNbParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbParameters_55546ef6a647f39b]);
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldTaylorMap::getPoint() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getPoint_883be608cfc68c26]));
        }

        FieldTaylorMap FieldTaylorMap::invert(const ::org::hipparchus::linear::FieldMatrixDecomposer & a0) const
        {
          return FieldTaylorMap(env->callObjectMethod(this$, mids$[mid_invert_8fe79baf5efe64ab], a0.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldTaylorMap::value(const JArray< jdouble > & a0) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_d36b5f4f656d870d], a0.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldTaylorMap::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_1cc99f34da9b4a7b], a0.this$));
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
        static PyObject *t_FieldTaylorMap_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTaylorMap_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTaylorMap_of_(t_FieldTaylorMap *self, PyObject *args);
        static int t_FieldTaylorMap_init_(t_FieldTaylorMap *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldTaylorMap_compose(t_FieldTaylorMap *self, PyObject *arg);
        static PyObject *t_FieldTaylorMap_getFunction(t_FieldTaylorMap *self, PyObject *arg);
        static PyObject *t_FieldTaylorMap_getNbFunctions(t_FieldTaylorMap *self);
        static PyObject *t_FieldTaylorMap_getNbParameters(t_FieldTaylorMap *self);
        static PyObject *t_FieldTaylorMap_getPoint(t_FieldTaylorMap *self);
        static PyObject *t_FieldTaylorMap_invert(t_FieldTaylorMap *self, PyObject *arg);
        static PyObject *t_FieldTaylorMap_value(t_FieldTaylorMap *self, PyObject *args);
        static PyObject *t_FieldTaylorMap_get__nbFunctions(t_FieldTaylorMap *self, void *data);
        static PyObject *t_FieldTaylorMap_get__nbParameters(t_FieldTaylorMap *self, void *data);
        static PyObject *t_FieldTaylorMap_get__point(t_FieldTaylorMap *self, void *data);
        static PyObject *t_FieldTaylorMap_get__parameters_(t_FieldTaylorMap *self, void *data);
        static PyGetSetDef t_FieldTaylorMap__fields_[] = {
          DECLARE_GET_FIELD(t_FieldTaylorMap, nbFunctions),
          DECLARE_GET_FIELD(t_FieldTaylorMap, nbParameters),
          DECLARE_GET_FIELD(t_FieldTaylorMap, point),
          DECLARE_GET_FIELD(t_FieldTaylorMap, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldTaylorMap__methods_[] = {
          DECLARE_METHOD(t_FieldTaylorMap, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTaylorMap, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTaylorMap, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldTaylorMap, compose, METH_O),
          DECLARE_METHOD(t_FieldTaylorMap, getFunction, METH_O),
          DECLARE_METHOD(t_FieldTaylorMap, getNbFunctions, METH_NOARGS),
          DECLARE_METHOD(t_FieldTaylorMap, getNbParameters, METH_NOARGS),
          DECLARE_METHOD(t_FieldTaylorMap, getPoint, METH_NOARGS),
          DECLARE_METHOD(t_FieldTaylorMap, invert, METH_O),
          DECLARE_METHOD(t_FieldTaylorMap, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldTaylorMap)[] = {
          { Py_tp_methods, t_FieldTaylorMap__methods_ },
          { Py_tp_init, (void *) t_FieldTaylorMap_init_ },
          { Py_tp_getset, t_FieldTaylorMap__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldTaylorMap)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldTaylorMap, t_FieldTaylorMap, FieldTaylorMap);
        PyObject *t_FieldTaylorMap::wrap_Object(const FieldTaylorMap& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTaylorMap::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTaylorMap *self = (t_FieldTaylorMap *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldTaylorMap::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTaylorMap::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTaylorMap *self = (t_FieldTaylorMap *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldTaylorMap::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldTaylorMap), &PY_TYPE_DEF(FieldTaylorMap), module, "FieldTaylorMap", 0);
        }

        void t_FieldTaylorMap::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTaylorMap), "class_", make_descriptor(FieldTaylorMap::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTaylorMap), "wrapfn_", make_descriptor(t_FieldTaylorMap::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTaylorMap), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldTaylorMap_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldTaylorMap::initializeClass, 1)))
            return NULL;
          return t_FieldTaylorMap::wrap_Object(FieldTaylorMap(((t_FieldTaylorMap *) arg)->object.this$));
        }
        static PyObject *t_FieldTaylorMap_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldTaylorMap::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldTaylorMap_of_(t_FieldTaylorMap *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldTaylorMap_init_(t_FieldTaylorMap *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldTaylorMap object((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::parameters_))
              {
                INT_CALL(object = FieldTaylorMap(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              jint a3;
              FieldTaylorMap object((jobject) NULL);

              if (!parseArgs(args, "KIII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = FieldTaylorMap(a0, a1, a2, a3));
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

        static PyObject *t_FieldTaylorMap_compose(t_FieldTaylorMap *self, PyObject *arg)
        {
          FieldTaylorMap a0((jobject) NULL);
          PyTypeObject **p0;
          FieldTaylorMap result((jobject) NULL);

          if (!parseArg(arg, "K", FieldTaylorMap::initializeClass, &a0, &p0, t_FieldTaylorMap::parameters_))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_FieldTaylorMap::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_FieldTaylorMap_getFunction(t_FieldTaylorMap *self, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getFunction(a0));
            return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getFunction", arg);
          return NULL;
        }

        static PyObject *t_FieldTaylorMap_getNbFunctions(t_FieldTaylorMap *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbFunctions());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldTaylorMap_getNbParameters(t_FieldTaylorMap *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldTaylorMap_getPoint(t_FieldTaylorMap *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPoint());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldTaylorMap_invert(t_FieldTaylorMap *self, PyObject *arg)
        {
          ::org::hipparchus::linear::FieldMatrixDecomposer a0((jobject) NULL);
          PyTypeObject **p0;
          FieldTaylorMap result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrixDecomposer::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixDecomposer::parameters_))
          {
            OBJ_CALL(result = self->object.invert(a0));
            return t_FieldTaylorMap::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "invert", arg);
          return NULL;
        }

        static PyObject *t_FieldTaylorMap_value(t_FieldTaylorMap *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
        static PyObject *t_FieldTaylorMap_get__parameters_(t_FieldTaylorMap *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldTaylorMap_get__nbFunctions(t_FieldTaylorMap *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbFunctions());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldTaylorMap_get__nbParameters(t_FieldTaylorMap *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldTaylorMap_get__point(t_FieldTaylorMap *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPoint());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "java/util/List.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/frames/Frame.h"
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

              ::java::lang::Class *OrbitElementsType::class$ = NULL;
              jmethodID *OrbitElementsType::mids$ = NULL;
              bool OrbitElementsType::live$ = false;
              OrbitElementsType *OrbitElementsType::ADBARV = NULL;
              OrbitElementsType *OrbitElementsType::CARTP = NULL;
              OrbitElementsType *OrbitElementsType::CARTPV = NULL;
              OrbitElementsType *OrbitElementsType::CARTPVA = NULL;
              OrbitElementsType *OrbitElementsType::DELAUNAY = NULL;
              OrbitElementsType *OrbitElementsType::DELAUNAYMOD = NULL;
              OrbitElementsType *OrbitElementsType::EIGVAL3EIGVEC3 = NULL;
              OrbitElementsType *OrbitElementsType::EQUINOCTIAL = NULL;
              OrbitElementsType *OrbitElementsType::EQUINOCTIALMOD = NULL;
              OrbitElementsType *OrbitElementsType::GEODETIC = NULL;
              OrbitElementsType *OrbitElementsType::KEPLERIAN = NULL;
              OrbitElementsType *OrbitElementsType::KEPLERIANMEAN = NULL;
              OrbitElementsType *OrbitElementsType::LDBARV = NULL;
              OrbitElementsType *OrbitElementsType::ONSTATION = NULL;
              OrbitElementsType *OrbitElementsType::POINCARE = NULL;

              jclass OrbitElementsType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_getUnits_e62d3bb06d56d7e3] = env->getMethodID(cls, "getUnits", "()Ljava/util/List;");
                  mids$[mid_toCartesian_4dd85cabf914dbd4] = env->getMethodID(cls, "toCartesian", "(Lorg/orekit/time/AbsoluteDate;[DLorg/orekit/bodies/OneAxisEllipsoid;D)Lorg/orekit/utils/TimeStampedPVCoordinates;");
                  mids$[mid_toRawElements_a845a300da8848fb] = env->getMethodID(cls, "toRawElements", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/bodies/OneAxisEllipsoid;D)[D");
                  mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                  mids$[mid_valueOf_b7fa64eebc34c884] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");
                  mids$[mid_values_93fc9cf1c7ca8311] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ADBARV = new OrbitElementsType(env->getStaticObjectField(cls, "ADBARV", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  CARTP = new OrbitElementsType(env->getStaticObjectField(cls, "CARTP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  CARTPV = new OrbitElementsType(env->getStaticObjectField(cls, "CARTPV", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  CARTPVA = new OrbitElementsType(env->getStaticObjectField(cls, "CARTPVA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  DELAUNAY = new OrbitElementsType(env->getStaticObjectField(cls, "DELAUNAY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  DELAUNAYMOD = new OrbitElementsType(env->getStaticObjectField(cls, "DELAUNAYMOD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  EIGVAL3EIGVEC3 = new OrbitElementsType(env->getStaticObjectField(cls, "EIGVAL3EIGVEC3", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  EQUINOCTIAL = new OrbitElementsType(env->getStaticObjectField(cls, "EQUINOCTIAL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  EQUINOCTIALMOD = new OrbitElementsType(env->getStaticObjectField(cls, "EQUINOCTIALMOD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  GEODETIC = new OrbitElementsType(env->getStaticObjectField(cls, "GEODETIC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  KEPLERIAN = new OrbitElementsType(env->getStaticObjectField(cls, "KEPLERIAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  KEPLERIANMEAN = new OrbitElementsType(env->getStaticObjectField(cls, "KEPLERIANMEAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  LDBARV = new OrbitElementsType(env->getStaticObjectField(cls, "LDBARV", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  ONSTATION = new OrbitElementsType(env->getStaticObjectField(cls, "ONSTATION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  POINCARE = new OrbitElementsType(env->getStaticObjectField(cls, "POINCARE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::util::List OrbitElementsType::getUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUnits_e62d3bb06d56d7e3]));
              }

              ::org::orekit::utils::TimeStampedPVCoordinates OrbitElementsType::toCartesian(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) const
              {
                return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_toCartesian_4dd85cabf914dbd4], a0.this$, a1.this$, a2.this$, a3));
              }

              JArray< jdouble > OrbitElementsType::toRawElements(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toRawElements_a845a300da8848fb], a0.this$, a1.this$, a2.this$, a3));
              }

              ::java::lang::String OrbitElementsType::toString() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
              }

              OrbitElementsType OrbitElementsType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitElementsType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b7fa64eebc34c884], a0.this$));
              }

              JArray< OrbitElementsType > OrbitElementsType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitElementsType >(env->callStaticObjectMethod(cls, mids$[mid_values_93fc9cf1c7ca8311]));
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
              static PyObject *t_OrbitElementsType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitElementsType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitElementsType_of_(t_OrbitElementsType *self, PyObject *args);
              static PyObject *t_OrbitElementsType_getUnits(t_OrbitElementsType *self);
              static PyObject *t_OrbitElementsType_toCartesian(t_OrbitElementsType *self, PyObject *args);
              static PyObject *t_OrbitElementsType_toRawElements(t_OrbitElementsType *self, PyObject *args);
              static PyObject *t_OrbitElementsType_toString(t_OrbitElementsType *self, PyObject *args);
              static PyObject *t_OrbitElementsType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitElementsType_values(PyTypeObject *type);
              static PyObject *t_OrbitElementsType_get__units(t_OrbitElementsType *self, void *data);
              static PyObject *t_OrbitElementsType_get__parameters_(t_OrbitElementsType *self, void *data);
              static PyGetSetDef t_OrbitElementsType__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitElementsType, units),
                DECLARE_GET_FIELD(t_OrbitElementsType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitElementsType__methods_[] = {
                DECLARE_METHOD(t_OrbitElementsType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitElementsType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitElementsType, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitElementsType, getUnits, METH_NOARGS),
                DECLARE_METHOD(t_OrbitElementsType, toCartesian, METH_VARARGS),
                DECLARE_METHOD(t_OrbitElementsType, toRawElements, METH_VARARGS),
                DECLARE_METHOD(t_OrbitElementsType, toString, METH_VARARGS),
                DECLARE_METHOD(t_OrbitElementsType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitElementsType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitElementsType)[] = {
                { Py_tp_methods, t_OrbitElementsType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitElementsType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitElementsType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitElementsType, t_OrbitElementsType, OrbitElementsType);
              PyObject *t_OrbitElementsType::wrap_Object(const OrbitElementsType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitElementsType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitElementsType *self = (t_OrbitElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitElementsType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitElementsType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitElementsType *self = (t_OrbitElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitElementsType::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitElementsType), &PY_TYPE_DEF(OrbitElementsType), module, "OrbitElementsType", 0);
              }

              void t_OrbitElementsType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "class_", make_descriptor(OrbitElementsType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "wrapfn_", make_descriptor(t_OrbitElementsType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitElementsType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "ADBARV", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::ADBARV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "CARTP", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::CARTP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "CARTPV", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::CARTPV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "CARTPVA", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::CARTPVA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "DELAUNAY", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::DELAUNAY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "DELAUNAYMOD", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::DELAUNAYMOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "EIGVAL3EIGVEC3", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::EIGVAL3EIGVEC3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "EQUINOCTIAL", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::EQUINOCTIAL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "EQUINOCTIALMOD", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::EQUINOCTIALMOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "GEODETIC", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::GEODETIC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "KEPLERIAN", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::KEPLERIAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "KEPLERIANMEAN", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::KEPLERIANMEAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "LDBARV", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::LDBARV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "ONSTATION", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::ONSTATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitElementsType), "POINCARE", make_descriptor(t_OrbitElementsType::wrap_Object(*OrbitElementsType::POINCARE)));
              }

              static PyObject *t_OrbitElementsType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitElementsType::initializeClass, 1)))
                  return NULL;
                return t_OrbitElementsType::wrap_Object(OrbitElementsType(((t_OrbitElementsType *) arg)->object.this$));
              }
              static PyObject *t_OrbitElementsType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitElementsType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitElementsType_of_(t_OrbitElementsType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitElementsType_getUnits(t_OrbitElementsType *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_OrbitElementsType_toCartesian(t_OrbitElementsType *self, PyObject *args)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
                jdouble a3;
                ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

                if (!parseArgs(args, "k[DkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.toCartesian(a0, a1, a2, a3));
                  return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "toCartesian", args);
                return NULL;
              }

              static PyObject *t_OrbitElementsType_toRawElements(t_OrbitElementsType *self, PyObject *args)
              {
                ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
                ::org::orekit::frames::Frame a1((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
                jdouble a3;
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "kkkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.toRawElements(a0, a1, a2, a3));
                  return result.wrap();
                }

                PyErr_SetArgsError((PyObject *) self, "toRawElements", args);
                return NULL;
              }

              static PyObject *t_OrbitElementsType_toString(t_OrbitElementsType *self, PyObject *args)
              {
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.toString());
                  return j2p(result);
                }

                return callSuper(PY_TYPE(OrbitElementsType), (PyObject *) self, "toString", args, 2);
              }

              static PyObject *t_OrbitElementsType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitElementsType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::valueOf(a0));
                  return t_OrbitElementsType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitElementsType_values(PyTypeObject *type)
              {
                JArray< OrbitElementsType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitElementsType::wrap_jobject);
              }
              static PyObject *t_OrbitElementsType_get__parameters_(t_OrbitElementsType *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OrbitElementsType_get__units(t_OrbitElementsType *self, void *data)
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
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        ::java::lang::Class *AccelerationModel::class$ = NULL;
        jmethodID *AccelerationModel::mids$ = NULL;
        bool AccelerationModel::live$ = false;

        jclass AccelerationModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/empirical/AccelerationModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_signedAmplitude_f867476668f8eb00] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_signedAmplitude_8e86371c61460f23] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/SpacecraftState;[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AccelerationModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
        }

        ::org::hipparchus::CalculusFieldElement AccelerationModel::signedAmplitude(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_signedAmplitude_f867476668f8eb00], a0.this$, a1.this$));
        }

        jdouble AccelerationModel::signedAmplitude(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
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
        static PyObject *t_AccelerationModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AccelerationModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AccelerationModel_init(t_AccelerationModel *self, PyObject *args);
        static PyObject *t_AccelerationModel_signedAmplitude(t_AccelerationModel *self, PyObject *args);

        static PyMethodDef t_AccelerationModel__methods_[] = {
          DECLARE_METHOD(t_AccelerationModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AccelerationModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AccelerationModel, init, METH_VARARGS),
          DECLARE_METHOD(t_AccelerationModel, signedAmplitude, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AccelerationModel)[] = {
          { Py_tp_methods, t_AccelerationModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AccelerationModel)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
          NULL
        };

        DEFINE_TYPE(AccelerationModel, t_AccelerationModel, AccelerationModel);

        void t_AccelerationModel::install(PyObject *module)
        {
          installType(&PY_TYPE(AccelerationModel), &PY_TYPE_DEF(AccelerationModel), module, "AccelerationModel", 0);
        }

        void t_AccelerationModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AccelerationModel), "class_", make_descriptor(AccelerationModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AccelerationModel), "wrapfn_", make_descriptor(t_AccelerationModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AccelerationModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AccelerationModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AccelerationModel::initializeClass, 1)))
            return NULL;
          return t_AccelerationModel::wrap_Object(AccelerationModel(((t_AccelerationModel *) arg)->object.this$));
        }
        static PyObject *t_AccelerationModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AccelerationModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AccelerationModel_init(t_AccelerationModel *self, PyObject *args)
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

        static PyObject *t_AccelerationModel_signedAmplitude(t_AccelerationModel *self, PyObject *args)
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
                mids$[mid_accept_ab69da052b88f50c] = env->getMethodID(cls, "accept", "([D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$DoubleArrayConsumer::accept(const JArray< jdouble > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_ab69da052b88f50c], a0.this$);
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
#include "org/orekit/gnss/attitude/BeidouIGSO.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *BeidouIGSO::class$ = NULL;
        jmethodID *BeidouIGSO::mids$ = NULL;
        bool BeidouIGSO::live$ = false;

        jclass BeidouIGSO::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/BeidouIGSO");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a872ffc4376f5f34] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BeidouIGSO::BeidouIGSO(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::gnss::attitude::BeidouMeo(env->newObject(initializeClass, &mids$, mid_init$_a872ffc4376f5f34, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
        static PyObject *t_BeidouIGSO_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BeidouIGSO_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BeidouIGSO_init_(t_BeidouIGSO *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_BeidouIGSO__methods_[] = {
          DECLARE_METHOD(t_BeidouIGSO, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BeidouIGSO, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BeidouIGSO)[] = {
          { Py_tp_methods, t_BeidouIGSO__methods_ },
          { Py_tp_init, (void *) t_BeidouIGSO_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BeidouIGSO)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::BeidouMeo),
          NULL
        };

        DEFINE_TYPE(BeidouIGSO, t_BeidouIGSO, BeidouIGSO);

        void t_BeidouIGSO::install(PyObject *module)
        {
          installType(&PY_TYPE(BeidouIGSO), &PY_TYPE_DEF(BeidouIGSO), module, "BeidouIGSO", 0);
        }

        void t_BeidouIGSO::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouIGSO), "class_", make_descriptor(BeidouIGSO::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouIGSO), "wrapfn_", make_descriptor(t_BeidouIGSO::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouIGSO), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BeidouIGSO_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BeidouIGSO::initializeClass, 1)))
            return NULL;
          return t_BeidouIGSO::wrap_Object(BeidouIGSO(((t_BeidouIGSO *) arg)->object.this$));
        }
        static PyObject *t_BeidouIGSO_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BeidouIGSO::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BeidouIGSO_init_(t_BeidouIGSO *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          BeidouIGSO object((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = BeidouIGSO(a0, a1, a2, a3));
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
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *EncodedMessage::class$ = NULL;
          jmethodID *EncodedMessage::mids$ = NULL;
          bool EncodedMessage::live$ = false;

          jclass EncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/EncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_extractBits_f4947a88f79e0725] = env->getMethodID(cls, "extractBits", "(I)J");
              mids$[mid_start_a1fa5dae97ea5ed2] = env->getMethodID(cls, "start", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jlong EncodedMessage::extractBits(jint a0) const
          {
            return env->callLongMethod(this$, mids$[mid_extractBits_f4947a88f79e0725], a0);
          }

          void EncodedMessage::start() const
          {
            env->callVoidMethod(this$, mids$[mid_start_a1fa5dae97ea5ed2]);
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
          static PyObject *t_EncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EncodedMessage_extractBits(t_EncodedMessage *self, PyObject *arg);
          static PyObject *t_EncodedMessage_start(t_EncodedMessage *self);

          static PyMethodDef t_EncodedMessage__methods_[] = {
            DECLARE_METHOD(t_EncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EncodedMessage, extractBits, METH_O),
            DECLARE_METHOD(t_EncodedMessage, start, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EncodedMessage)[] = {
            { Py_tp_methods, t_EncodedMessage__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EncodedMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EncodedMessage, t_EncodedMessage, EncodedMessage);

          void t_EncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(EncodedMessage), &PY_TYPE_DEF(EncodedMessage), module, "EncodedMessage", 0);
          }

          void t_EncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EncodedMessage), "class_", make_descriptor(EncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EncodedMessage), "wrapfn_", make_descriptor(t_EncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EncodedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EncodedMessage::initializeClass, 1)))
              return NULL;
            return t_EncodedMessage::wrap_Object(EncodedMessage(((t_EncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_EncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_EncodedMessage_extractBits(t_EncodedMessage *self, PyObject *arg)
          {
            jint a0;
            jlong result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.extractBits(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            PyErr_SetArgsError((PyObject *) self, "extractBits", arg);
            return NULL;
          }

          static PyObject *t_EncodedMessage_start(t_EncodedMessage *self)
          {
            OBJ_CALL(self->object.start());
            Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DefaultIterativeLinearSolverEvent.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DefaultIterativeLinearSolverEvent::class$ = NULL;
      jmethodID *DefaultIterativeLinearSolverEvent::mids$ = NULL;
      bool DefaultIterativeLinearSolverEvent::live$ = false;

      jclass DefaultIterativeLinearSolverEvent::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DefaultIterativeLinearSolverEvent");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_adc4c0569438734f] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;ILorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;D)V");
          mids$[mid_init$_03eca99f46c21907] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;ILorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;D)V");
          mids$[mid_getNormOfResidual_b74f83833fdad017] = env->getMethodID(cls, "getNormOfResidual", "()D");
          mids$[mid_getResidual_3a10cc75bd070d84] = env->getMethodID(cls, "getResidual", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getRightHandSideVector_3a10cc75bd070d84] = env->getMethodID(cls, "getRightHandSideVector", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getSolution_3a10cc75bd070d84] = env->getMethodID(cls, "getSolution", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_providesResidual_9ab94ac1dc23b105] = env->getMethodID(cls, "providesResidual", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DefaultIterativeLinearSolverEvent::DefaultIterativeLinearSolverEvent(const ::java::lang::Object & a0, jint a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3, jdouble a4) : ::org::hipparchus::linear::IterativeLinearSolverEvent(env->newObject(initializeClass, &mids$, mid_init$_adc4c0569438734f, a0.this$, a1, a2.this$, a3.this$, a4)) {}

      DefaultIterativeLinearSolverEvent::DefaultIterativeLinearSolverEvent(const ::java::lang::Object & a0, jint a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3, const ::org::hipparchus::linear::RealVector & a4, jdouble a5) : ::org::hipparchus::linear::IterativeLinearSolverEvent(env->newObject(initializeClass, &mids$, mid_init$_03eca99f46c21907, a0.this$, a1, a2.this$, a3.this$, a4.this$, a5)) {}

      jdouble DefaultIterativeLinearSolverEvent::getNormOfResidual() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormOfResidual_b74f83833fdad017]);
      }

      ::org::hipparchus::linear::RealVector DefaultIterativeLinearSolverEvent::getResidual() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getResidual_3a10cc75bd070d84]));
      }

      ::org::hipparchus::linear::RealVector DefaultIterativeLinearSolverEvent::getRightHandSideVector() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getRightHandSideVector_3a10cc75bd070d84]));
      }

      ::org::hipparchus::linear::RealVector DefaultIterativeLinearSolverEvent::getSolution() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getSolution_3a10cc75bd070d84]));
      }

      jboolean DefaultIterativeLinearSolverEvent::providesResidual() const
      {
        return env->callBooleanMethod(this$, mids$[mid_providesResidual_9ab94ac1dc23b105]);
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
      static PyObject *t_DefaultIterativeLinearSolverEvent_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultIterativeLinearSolverEvent_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DefaultIterativeLinearSolverEvent_init_(t_DefaultIterativeLinearSolverEvent *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DefaultIterativeLinearSolverEvent_getNormOfResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args);
      static PyObject *t_DefaultIterativeLinearSolverEvent_getResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args);
      static PyObject *t_DefaultIterativeLinearSolverEvent_getRightHandSideVector(t_DefaultIterativeLinearSolverEvent *self, PyObject *args);
      static PyObject *t_DefaultIterativeLinearSolverEvent_getSolution(t_DefaultIterativeLinearSolverEvent *self, PyObject *args);
      static PyObject *t_DefaultIterativeLinearSolverEvent_providesResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args);
      static PyObject *t_DefaultIterativeLinearSolverEvent_get__normOfResidual(t_DefaultIterativeLinearSolverEvent *self, void *data);
      static PyObject *t_DefaultIterativeLinearSolverEvent_get__residual(t_DefaultIterativeLinearSolverEvent *self, void *data);
      static PyObject *t_DefaultIterativeLinearSolverEvent_get__rightHandSideVector(t_DefaultIterativeLinearSolverEvent *self, void *data);
      static PyObject *t_DefaultIterativeLinearSolverEvent_get__solution(t_DefaultIterativeLinearSolverEvent *self, void *data);
      static PyGetSetDef t_DefaultIterativeLinearSolverEvent__fields_[] = {
        DECLARE_GET_FIELD(t_DefaultIterativeLinearSolverEvent, normOfResidual),
        DECLARE_GET_FIELD(t_DefaultIterativeLinearSolverEvent, residual),
        DECLARE_GET_FIELD(t_DefaultIterativeLinearSolverEvent, rightHandSideVector),
        DECLARE_GET_FIELD(t_DefaultIterativeLinearSolverEvent, solution),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DefaultIterativeLinearSolverEvent__methods_[] = {
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, getNormOfResidual, METH_VARARGS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, getResidual, METH_VARARGS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, getRightHandSideVector, METH_VARARGS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, getSolution, METH_VARARGS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, providesResidual, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultIterativeLinearSolverEvent)[] = {
        { Py_tp_methods, t_DefaultIterativeLinearSolverEvent__methods_ },
        { Py_tp_init, (void *) t_DefaultIterativeLinearSolverEvent_init_ },
        { Py_tp_getset, t_DefaultIterativeLinearSolverEvent__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultIterativeLinearSolverEvent)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::IterativeLinearSolverEvent),
        NULL
      };

      DEFINE_TYPE(DefaultIterativeLinearSolverEvent, t_DefaultIterativeLinearSolverEvent, DefaultIterativeLinearSolverEvent);

      void t_DefaultIterativeLinearSolverEvent::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultIterativeLinearSolverEvent), &PY_TYPE_DEF(DefaultIterativeLinearSolverEvent), module, "DefaultIterativeLinearSolverEvent", 0);
      }

      void t_DefaultIterativeLinearSolverEvent::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultIterativeLinearSolverEvent), "class_", make_descriptor(DefaultIterativeLinearSolverEvent::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultIterativeLinearSolverEvent), "wrapfn_", make_descriptor(t_DefaultIterativeLinearSolverEvent::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultIterativeLinearSolverEvent), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultIterativeLinearSolverEvent::initializeClass, 1)))
          return NULL;
        return t_DefaultIterativeLinearSolverEvent::wrap_Object(DefaultIterativeLinearSolverEvent(((t_DefaultIterativeLinearSolverEvent *) arg)->object.this$));
      }
      static PyObject *t_DefaultIterativeLinearSolverEvent_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultIterativeLinearSolverEvent::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DefaultIterativeLinearSolverEvent_init_(t_DefaultIterativeLinearSolverEvent *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 5:
          {
            ::java::lang::Object a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            jdouble a4;
            DefaultIterativeLinearSolverEvent object((jobject) NULL);

            if (!parseArgs(args, "oIkkD", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = DefaultIterativeLinearSolverEvent(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::java::lang::Object a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            ::org::hipparchus::linear::RealVector a4((jobject) NULL);
            jdouble a5;
            DefaultIterativeLinearSolverEvent object((jobject) NULL);

            if (!parseArgs(args, "oIkkkD", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = DefaultIterativeLinearSolverEvent(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_DefaultIterativeLinearSolverEvent_getNormOfResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getNormOfResidual());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(DefaultIterativeLinearSolverEvent), (PyObject *) self, "getNormOfResidual", args, 2);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_getResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getResidual());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DefaultIterativeLinearSolverEvent), (PyObject *) self, "getResidual", args, 2);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_getRightHandSideVector(t_DefaultIterativeLinearSolverEvent *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRightHandSideVector());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DefaultIterativeLinearSolverEvent), (PyObject *) self, "getRightHandSideVector", args, 2);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_getSolution(t_DefaultIterativeLinearSolverEvent *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getSolution());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DefaultIterativeLinearSolverEvent), (PyObject *) self, "getSolution", args, 2);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_providesResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.providesResidual());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(DefaultIterativeLinearSolverEvent), (PyObject *) self, "providesResidual", args, 2);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_get__normOfResidual(t_DefaultIterativeLinearSolverEvent *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormOfResidual());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_get__residual(t_DefaultIterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getResidual());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_get__rightHandSideVector(t_DefaultIterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightHandSideVector());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_get__solution(t_DefaultIterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolution());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistory.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovariance.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeCovarianceHistory::class$ = NULL;
              jmethodID *AttitudeCovarianceHistory::mids$ = NULL;
              bool AttitudeCovarianceHistory::live$ = false;

              jclass AttitudeCovarianceHistory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0694642a06bba0c0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata;Ljava/util/List;)V");
                  mids$[mid_getCovariances_e62d3bb06d56d7e3] = env->getMethodID(cls, "getCovariances", "()Ljava/util/List;");
                  mids$[mid_getMetadata_9cf45f3dda76eb07] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeCovarianceHistory::AttitudeCovarianceHistory(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0694642a06bba0c0, a0.this$, a1.this$)) {}

              ::java::util::List AttitudeCovarianceHistory::getCovariances() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovariances_e62d3bb06d56d7e3]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata AttitudeCovarianceHistory::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_9cf45f3dda76eb07]));
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
              static PyObject *t_AttitudeCovarianceHistory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistory_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeCovarianceHistory_init_(t_AttitudeCovarianceHistory *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeCovarianceHistory_getCovariances(t_AttitudeCovarianceHistory *self);
              static PyObject *t_AttitudeCovarianceHistory_getMetadata(t_AttitudeCovarianceHistory *self);
              static PyObject *t_AttitudeCovarianceHistory_get__covariances(t_AttitudeCovarianceHistory *self, void *data);
              static PyObject *t_AttitudeCovarianceHistory_get__metadata(t_AttitudeCovarianceHistory *self, void *data);
              static PyGetSetDef t_AttitudeCovarianceHistory__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeCovarianceHistory, covariances),
                DECLARE_GET_FIELD(t_AttitudeCovarianceHistory, metadata),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeCovarianceHistory__methods_[] = {
                DECLARE_METHOD(t_AttitudeCovarianceHistory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistory, getCovariances, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistory, getMetadata, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeCovarianceHistory)[] = {
                { Py_tp_methods, t_AttitudeCovarianceHistory__methods_ },
                { Py_tp_init, (void *) t_AttitudeCovarianceHistory_init_ },
                { Py_tp_getset, t_AttitudeCovarianceHistory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeCovarianceHistory)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AttitudeCovarianceHistory, t_AttitudeCovarianceHistory, AttitudeCovarianceHistory);

              void t_AttitudeCovarianceHistory::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeCovarianceHistory), &PY_TYPE_DEF(AttitudeCovarianceHistory), module, "AttitudeCovarianceHistory", 0);
              }

              void t_AttitudeCovarianceHistory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistory), "class_", make_descriptor(AttitudeCovarianceHistory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistory), "wrapfn_", make_descriptor(t_AttitudeCovarianceHistory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistory), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeCovarianceHistory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeCovarianceHistory::initializeClass, 1)))
                  return NULL;
                return t_AttitudeCovarianceHistory::wrap_Object(AttitudeCovarianceHistory(((t_AttitudeCovarianceHistory *) arg)->object.this$));
              }
              static PyObject *t_AttitudeCovarianceHistory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeCovarianceHistory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeCovarianceHistory_init_(t_AttitudeCovarianceHistory *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                AttitudeCovarianceHistory object((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = AttitudeCovarianceHistory(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudeCovarianceHistory_getCovariances(t_AttitudeCovarianceHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovariances());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeCovariance));
              }

              static PyObject *t_AttitudeCovarianceHistory_getMetadata(t_AttitudeCovarianceHistory *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceHistoryMetadata::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovarianceHistory_get__covariances(t_AttitudeCovarianceHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovariances());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AttitudeCovarianceHistory_get__metadata(t_AttitudeCovarianceHistory *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceHistoryMetadata::wrap_Object(value);
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
              mids$[mid_combine_12b3dc80befaeb6c] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;");
              mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet MelbourneWubbenaCombination::combine(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet(env->callObjectMethod(this$, mids$[mid_combine_12b3dc80befaeb6c], a0.this$));
          }

          ::java::lang::String MelbourneWubbenaCombination::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
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
#include "org/orekit/estimation/measurements/modifiers/TurnAroundRangeTroposphericDelayModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
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

          ::java::lang::Class *TurnAroundRangeTroposphericDelayModifier::class$ = NULL;
          jmethodID *TurnAroundRangeTroposphericDelayModifier::mids$ = NULL;
          bool TurnAroundRangeTroposphericDelayModifier::live$ = false;

          jclass TurnAroundRangeTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/TurnAroundRangeTroposphericDelayModifier");

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

          TurnAroundRangeTroposphericDelayModifier::TurnAroundRangeTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_516bd20115aa9d9d, a0.this$)) {}

          ::java::util::List TurnAroundRangeTroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void TurnAroundRangeTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_f784f7724d44a90a], a0.this$);
          }

          void TurnAroundRangeTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TurnAroundRangeTroposphericDelayModifier_init_(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_getParametersDrivers(t_TurnAroundRangeTroposphericDelayModifier *self);
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_modify(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_modifyWithoutDerivatives(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_get__parametersDrivers(t_TurnAroundRangeTroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_TurnAroundRangeTroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_TurnAroundRangeTroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TurnAroundRangeTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_TurnAroundRangeTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeTroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TurnAroundRangeTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_TurnAroundRangeTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TurnAroundRangeTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_TurnAroundRangeTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_TurnAroundRangeTroposphericDelayModifier_init_ },
            { Py_tp_getset, t_TurnAroundRangeTroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TurnAroundRangeTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TurnAroundRangeTroposphericDelayModifier, t_TurnAroundRangeTroposphericDelayModifier, TurnAroundRangeTroposphericDelayModifier);

          void t_TurnAroundRangeTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(TurnAroundRangeTroposphericDelayModifier), &PY_TYPE_DEF(TurnAroundRangeTroposphericDelayModifier), module, "TurnAroundRangeTroposphericDelayModifier", 0);
          }

          void t_TurnAroundRangeTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeTroposphericDelayModifier), "class_", make_descriptor(TurnAroundRangeTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeTroposphericDelayModifier), "wrapfn_", make_descriptor(t_TurnAroundRangeTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TurnAroundRangeTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_TurnAroundRangeTroposphericDelayModifier::wrap_Object(TurnAroundRangeTroposphericDelayModifier(((t_TurnAroundRangeTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TurnAroundRangeTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TurnAroundRangeTroposphericDelayModifier_init_(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            TurnAroundRangeTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = TurnAroundRangeTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_getParametersDrivers(t_TurnAroundRangeTroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_modify(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_modifyWithoutDerivatives(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_get__parametersDrivers(t_TurnAroundRangeTroposphericDelayModifier *self, void *data)
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
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
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
            mids$[mid_init$_15adcb0b841ab8b4] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/lang/String;ILorg/orekit/frames/Frame;Lorg/orekit/utils/AngularDerivativesFilter;)V");
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

        OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment(const ::java::util::List & a0, const ::java::lang::String & a1, jint a2, const ::org::orekit::frames::Frame & a3, const ::org::orekit::utils::AngularDerivativesFilter & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_15adcb0b841ab8b4, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

        ::java::util::List OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getAngularCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAngularCoordinates_e62d3bb06d56d7e3]));
        }

        ::org::orekit::attitudes::BoundedAttitudeProvider OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::BoundedAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_fcce29ba1cf2a05e]));
        }

        ::org::orekit::utils::AngularDerivativesFilter OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_33d67d456ec94a0c]));
        }

        ::java::lang::String OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getInterpolationMethod() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_1c1fa1e935d6cdcf]));
        }

        jint OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_55546ef6a647f39b]);
        }

        ::org::orekit::frames::Frame OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getReferenceFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_2c51111cc6894ba1]));
        }

        ::org::orekit::time::AbsoluteDate OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_c325492395d89b24]));
        }

        ::org::orekit::time::AbsoluteDate OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getStop() const
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
#include "org/orekit/estimation/measurements/gnss/PhaseBuilder.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PhaseBuilder::class$ = NULL;
          jmethodID *PhaseBuilder::mids$ = NULL;
          bool PhaseBuilder::live$ = false;

          jclass PhaseBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PhaseBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_29b0152c82670861] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_52c1ca8ee0b0b821] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/gnss/Phase;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseBuilder::PhaseBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, jdouble a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_29b0152c82670861, a0.this$, a1.this$, a2, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::gnss::Phase PhaseBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::Phase(env->callObjectMethod(this$, mids$[mid_build_52c1ca8ee0b0b821], a0.this$, a1.this$));
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
          static PyObject *t_PhaseBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseBuilder_of_(t_PhaseBuilder *self, PyObject *args);
          static int t_PhaseBuilder_init_(t_PhaseBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseBuilder_build(t_PhaseBuilder *self, PyObject *args);
          static PyObject *t_PhaseBuilder_get__parameters_(t_PhaseBuilder *self, void *data);
          static PyGetSetDef t_PhaseBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseBuilder__methods_[] = {
            DECLARE_METHOD(t_PhaseBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PhaseBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseBuilder)[] = {
            { Py_tp_methods, t_PhaseBuilder__methods_ },
            { Py_tp_init, (void *) t_PhaseBuilder_init_ },
            { Py_tp_getset, t_PhaseBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(PhaseBuilder, t_PhaseBuilder, PhaseBuilder);
          PyObject *t_PhaseBuilder::wrap_Object(const PhaseBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PhaseBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PhaseBuilder *self = (t_PhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PhaseBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PhaseBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PhaseBuilder *self = (t_PhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PhaseBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseBuilder), &PY_TYPE_DEF(PhaseBuilder), module, "PhaseBuilder", 0);
          }

          void t_PhaseBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBuilder), "class_", make_descriptor(PhaseBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBuilder), "wrapfn_", make_descriptor(t_PhaseBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseBuilder::initializeClass, 1)))
              return NULL;
            return t_PhaseBuilder::wrap_Object(PhaseBuilder(((t_PhaseBuilder *) arg)->object.this$));
          }
          static PyObject *t_PhaseBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PhaseBuilder_of_(t_PhaseBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PhaseBuilder_init_(t_PhaseBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            jdouble a2;
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            PhaseBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkDDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = PhaseBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(Phase);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseBuilder_build(t_PhaseBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::gnss::Phase result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::gnss::t_Phase::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PhaseBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_PhaseBuilder_get__parameters_(t_PhaseBuilder *self, void *data)
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
#include "org/hipparchus/complex/RootsOfUnity.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *RootsOfUnity::class$ = NULL;
      jmethodID *RootsOfUnity::mids$ = NULL;
      bool RootsOfUnity::live$ = false;

      jclass RootsOfUnity::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/RootsOfUnity");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_computeRoots_44ed599e93e8a30c] = env->getMethodID(cls, "computeRoots", "(I)V");
          mids$[mid_getImaginary_2afcbc21f4e57ab2] = env->getMethodID(cls, "getImaginary", "(I)D");
          mids$[mid_getNumberOfRoots_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfRoots", "()I");
          mids$[mid_getReal_2afcbc21f4e57ab2] = env->getMethodID(cls, "getReal", "(I)D");
          mids$[mid_isCounterClockWise_9ab94ac1dc23b105] = env->getMethodID(cls, "isCounterClockWise", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RootsOfUnity::RootsOfUnity() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void RootsOfUnity::computeRoots(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_computeRoots_44ed599e93e8a30c], a0);
      }

      jdouble RootsOfUnity::getImaginary(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getImaginary_2afcbc21f4e57ab2], a0);
      }

      jint RootsOfUnity::getNumberOfRoots() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfRoots_55546ef6a647f39b]);
      }

      jdouble RootsOfUnity::getReal(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_2afcbc21f4e57ab2], a0);
      }

      jboolean RootsOfUnity::isCounterClockWise() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isCounterClockWise_9ab94ac1dc23b105]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      static PyObject *t_RootsOfUnity_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RootsOfUnity_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RootsOfUnity_init_(t_RootsOfUnity *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RootsOfUnity_computeRoots(t_RootsOfUnity *self, PyObject *arg);
      static PyObject *t_RootsOfUnity_getImaginary(t_RootsOfUnity *self, PyObject *arg);
      static PyObject *t_RootsOfUnity_getNumberOfRoots(t_RootsOfUnity *self);
      static PyObject *t_RootsOfUnity_getReal(t_RootsOfUnity *self, PyObject *arg);
      static PyObject *t_RootsOfUnity_isCounterClockWise(t_RootsOfUnity *self);
      static PyObject *t_RootsOfUnity_get__counterClockWise(t_RootsOfUnity *self, void *data);
      static PyObject *t_RootsOfUnity_get__numberOfRoots(t_RootsOfUnity *self, void *data);
      static PyGetSetDef t_RootsOfUnity__fields_[] = {
        DECLARE_GET_FIELD(t_RootsOfUnity, counterClockWise),
        DECLARE_GET_FIELD(t_RootsOfUnity, numberOfRoots),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RootsOfUnity__methods_[] = {
        DECLARE_METHOD(t_RootsOfUnity, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RootsOfUnity, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RootsOfUnity, computeRoots, METH_O),
        DECLARE_METHOD(t_RootsOfUnity, getImaginary, METH_O),
        DECLARE_METHOD(t_RootsOfUnity, getNumberOfRoots, METH_NOARGS),
        DECLARE_METHOD(t_RootsOfUnity, getReal, METH_O),
        DECLARE_METHOD(t_RootsOfUnity, isCounterClockWise, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RootsOfUnity)[] = {
        { Py_tp_methods, t_RootsOfUnity__methods_ },
        { Py_tp_init, (void *) t_RootsOfUnity_init_ },
        { Py_tp_getset, t_RootsOfUnity__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RootsOfUnity)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RootsOfUnity, t_RootsOfUnity, RootsOfUnity);

      void t_RootsOfUnity::install(PyObject *module)
      {
        installType(&PY_TYPE(RootsOfUnity), &PY_TYPE_DEF(RootsOfUnity), module, "RootsOfUnity", 0);
      }

      void t_RootsOfUnity::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RootsOfUnity), "class_", make_descriptor(RootsOfUnity::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RootsOfUnity), "wrapfn_", make_descriptor(t_RootsOfUnity::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RootsOfUnity), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RootsOfUnity_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RootsOfUnity::initializeClass, 1)))
          return NULL;
        return t_RootsOfUnity::wrap_Object(RootsOfUnity(((t_RootsOfUnity *) arg)->object.this$));
      }
      static PyObject *t_RootsOfUnity_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RootsOfUnity::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RootsOfUnity_init_(t_RootsOfUnity *self, PyObject *args, PyObject *kwds)
      {
        RootsOfUnity object((jobject) NULL);

        INT_CALL(object = RootsOfUnity());
        self->object = object;

        return 0;
      }

      static PyObject *t_RootsOfUnity_computeRoots(t_RootsOfUnity *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.computeRoots(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "computeRoots", arg);
        return NULL;
      }

      static PyObject *t_RootsOfUnity_getImaginary(t_RootsOfUnity *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getImaginary(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getImaginary", arg);
        return NULL;
      }

      static PyObject *t_RootsOfUnity_getNumberOfRoots(t_RootsOfUnity *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfRoots());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RootsOfUnity_getReal(t_RootsOfUnity *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getReal(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getReal", arg);
        return NULL;
      }

      static PyObject *t_RootsOfUnity_isCounterClockWise(t_RootsOfUnity *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isCounterClockWise());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RootsOfUnity_get__counterClockWise(t_RootsOfUnity *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isCounterClockWise());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_RootsOfUnity_get__numberOfRoots(t_RootsOfUnity *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfRoots());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Header.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Data.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm04::class$ = NULL;
              jmethodID *SsrIgm04::mids$ = NULL;
              bool SsrIgm04::live$ = false;

              jclass SsrIgm04::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_81974484c7ea528e] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm04Data_810bed48fafb0b9a] = env->getMethodID(cls, "getSsrIgm04Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm04::SsrIgm04(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm04Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_81974484c7ea528e, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm04::getSsrIgm04Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm04Data_810bed48fafb0b9a]));
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
              static PyObject *t_SsrIgm04_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm04_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm04_of_(t_SsrIgm04 *self, PyObject *args);
              static int t_SsrIgm04_init_(t_SsrIgm04 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm04_getSsrIgm04Data(t_SsrIgm04 *self);
              static PyObject *t_SsrIgm04_get__ssrIgm04Data(t_SsrIgm04 *self, void *data);
              static PyObject *t_SsrIgm04_get__parameters_(t_SsrIgm04 *self, void *data);
              static PyGetSetDef t_SsrIgm04__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm04, ssrIgm04Data),
                DECLARE_GET_FIELD(t_SsrIgm04, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm04__methods_[] = {
                DECLARE_METHOD(t_SsrIgm04, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm04, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm04, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm04, getSsrIgm04Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm04)[] = {
                { Py_tp_methods, t_SsrIgm04__methods_ },
                { Py_tp_init, (void *) t_SsrIgm04_init_ },
                { Py_tp_getset, t_SsrIgm04__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm04)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm04, t_SsrIgm04, SsrIgm04);
              PyObject *t_SsrIgm04::wrap_Object(const SsrIgm04& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm04::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm04 *self = (t_SsrIgm04 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm04::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm04::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm04 *self = (t_SsrIgm04 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm04::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm04), &PY_TYPE_DEF(SsrIgm04), module, "SsrIgm04", 0);
              }

              void t_SsrIgm04::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04), "class_", make_descriptor(SsrIgm04::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04), "wrapfn_", make_descriptor(t_SsrIgm04::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm04_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm04::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm04::wrap_Object(SsrIgm04(((t_SsrIgm04 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm04_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm04::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm04_of_(t_SsrIgm04 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm04_init_(t_SsrIgm04 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm04Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm04 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm04Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm04(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm04Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm04Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm04_getSsrIgm04Data(t_SsrIgm04 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm04Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm04_get__parameters_(t_SsrIgm04 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm04_get__ssrIgm04Data(t_SsrIgm04 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm04Data());
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
#include "org/orekit/propagation/events/ApsideDetector.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/events/ApsideDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *ApsideDetector::class$ = NULL;
        jmethodID *ApsideDetector::mids$ = NULL;
        bool ApsideDetector::live$ = false;

        jclass ApsideDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/ApsideDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_69b47a274eed440d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
            mids$[mid_init$_0cc20f8792bf5502] = env->getMethodID(cls, "<init>", "(DLorg/orekit/orbits/Orbit;)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_create_afa653b2d8569b93] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/ApsideDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ApsideDetector::ApsideDetector(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_69b47a274eed440d, a0.this$)) {}

        ApsideDetector::ApsideDetector(jdouble a0, const ::org::orekit::orbits::Orbit & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_0cc20f8792bf5502, a0, a1.this$)) {}

        jdouble ApsideDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
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
        static PyObject *t_ApsideDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ApsideDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ApsideDetector_of_(t_ApsideDetector *self, PyObject *args);
        static int t_ApsideDetector_init_(t_ApsideDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ApsideDetector_g(t_ApsideDetector *self, PyObject *args);
        static PyObject *t_ApsideDetector_get__parameters_(t_ApsideDetector *self, void *data);
        static PyGetSetDef t_ApsideDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ApsideDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ApsideDetector__methods_[] = {
          DECLARE_METHOD(t_ApsideDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ApsideDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ApsideDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_ApsideDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ApsideDetector)[] = {
          { Py_tp_methods, t_ApsideDetector__methods_ },
          { Py_tp_init, (void *) t_ApsideDetector_init_ },
          { Py_tp_getset, t_ApsideDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ApsideDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ApsideDetector, t_ApsideDetector, ApsideDetector);
        PyObject *t_ApsideDetector::wrap_Object(const ApsideDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ApsideDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ApsideDetector *self = (t_ApsideDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ApsideDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ApsideDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ApsideDetector *self = (t_ApsideDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ApsideDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ApsideDetector), &PY_TYPE_DEF(ApsideDetector), module, "ApsideDetector", 0);
        }

        void t_ApsideDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ApsideDetector), "class_", make_descriptor(ApsideDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ApsideDetector), "wrapfn_", make_descriptor(t_ApsideDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ApsideDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ApsideDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ApsideDetector::initializeClass, 1)))
            return NULL;
          return t_ApsideDetector::wrap_Object(ApsideDetector(((t_ApsideDetector *) arg)->object.this$));
        }
        static PyObject *t_ApsideDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ApsideDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ApsideDetector_of_(t_ApsideDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ApsideDetector_init_(t_ApsideDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ApsideDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
              {
                INT_CALL(object = ApsideDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ApsideDetector);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              ApsideDetector object((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
              {
                INT_CALL(object = ApsideDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ApsideDetector);
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

        static PyObject *t_ApsideDetector_g(t_ApsideDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ApsideDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_ApsideDetector_get__parameters_(t_ApsideDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/complex/FieldComplexField.h"
#include "java/util/List.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *FieldComplex::class$ = NULL;
      jmethodID *FieldComplex::mids$ = NULL;
      bool FieldComplex::live$ = false;

      jclass FieldComplex::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/FieldComplex");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f2b4bfa0af1007e8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_e337ae7145f7989c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_abs_ba578f832ae965ef] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_acos_ba578f832ae965ef] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_acosh_ba578f832ae965ef] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_add_cfbd18691ba7b7af] = env->getMethodID(cls, "add", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_add_ce488f7123d85e8d] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_add_42271350c82bf3fd] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_asin_ba578f832ae965ef] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_asinh_ba578f832ae965ef] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_atan_ba578f832ae965ef] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_atan2_cfbd18691ba7b7af] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_atanh_ba578f832ae965ef] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_cbrt_ba578f832ae965ef] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_ceil_ba578f832ae965ef] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_conjugate_ba578f832ae965ef] = env->getMethodID(cls, "conjugate", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_copySign_cfbd18691ba7b7af] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_copySign_ce488f7123d85e8d] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_cos_ba578f832ae965ef] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_cosh_ba578f832ae965ef] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_divide_cfbd18691ba7b7af] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_divide_ce488f7123d85e8d] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_divide_42271350c82bf3fd] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_equals_3087f5647a28df29] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Z");
          mids$[mid_equals_50b5f38423069828] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;D)Z");
          mids$[mid_equals_a4a562041ee259e7] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;I)Z");
          mids$[mid_equalsWithRelativeTolerance_50b5f38423069828] = env->getStaticMethodID(cls, "equalsWithRelativeTolerance", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;D)Z");
          mids$[mid_exp_ba578f832ae965ef] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_expm1_ba578f832ae965ef] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_floor_ba578f832ae965ef] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getArgument_81520b552cb3fa26] = env->getMethodID(cls, "getArgument", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getField_26ce9b36926acd46] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/complex/FieldComplexField;");
          mids$[mid_getI_29b3449caee8cd64] = env->getStaticMethodID(cls, "getI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getImaginary_81520b552cb3fa26] = env->getMethodID(cls, "getImaginary", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getImaginaryPart_81520b552cb3fa26] = env->getMethodID(cls, "getImaginaryPart", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getInf_29b3449caee8cd64] = env->getStaticMethodID(cls, "getInf", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getMinusI_29b3449caee8cd64] = env->getStaticMethodID(cls, "getMinusI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getMinusOne_29b3449caee8cd64] = env->getStaticMethodID(cls, "getMinusOne", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getNaN_29b3449caee8cd64] = env->getStaticMethodID(cls, "getNaN", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getOne_29b3449caee8cd64] = env->getStaticMethodID(cls, "getOne", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getPartsField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getPartsField", "()Lorg/hipparchus/Field;");
          mids$[mid_getPi_ba578f832ae965ef] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getPi_29b3449caee8cd64] = env->getStaticMethodID(cls, "getPi", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getReal_b74f83833fdad017] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getRealPart_81520b552cb3fa26] = env->getMethodID(cls, "getRealPart", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getZero_29b3449caee8cd64] = env->getStaticMethodID(cls, "getZero", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_cfbd18691ba7b7af] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_isInfinite_9ab94ac1dc23b105] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isMathematicalInteger_9ab94ac1dc23b105] = env->getMethodID(cls, "isMathematicalInteger", "()Z");
          mids$[mid_isNaN_9ab94ac1dc23b105] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_isReal_9ab94ac1dc23b105] = env->getMethodID(cls, "isReal", "()Z");
          mids$[mid_isZero_9ab94ac1dc23b105] = env->getMethodID(cls, "isZero", "()Z");
          mids$[mid_linearCombination_f58fe576c9332e25] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_80ef4a822274046f] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/complex/FieldComplex;[Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_d9560f48e4b68b28] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_cfcea2997bb6f6a6] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_dbf14106a8d9bfae] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_02dcb4e990448695] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_9136abeb8767bc81] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_d8590adf5e8dc2ab] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_log_ba578f832ae965ef] = env->getMethodID(cls, "log", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_log10_ba578f832ae965ef] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_log1p_ba578f832ae965ef] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiply_cfbd18691ba7b7af] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiply_ce488f7123d85e8d] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiply_1a01c34364f69876] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiply_42271350c82bf3fd] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiplyMinusI_ba578f832ae965ef] = env->getMethodID(cls, "multiplyMinusI", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiplyPlusI_ba578f832ae965ef] = env->getMethodID(cls, "multiplyPlusI", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_negate_ba578f832ae965ef] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_newInstance_ce488f7123d85e8d] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_nthRoot_f8cea93815fe5eaa] = env->getMethodID(cls, "nthRoot", "(I)Ljava/util/List;");
          mids$[mid_pow_cfbd18691ba7b7af] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_pow_ce488f7123d85e8d] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_pow_1a01c34364f69876] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_pow_42271350c82bf3fd] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_reciprocal_ba578f832ae965ef] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_remainder_cfbd18691ba7b7af] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_remainder_ce488f7123d85e8d] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_rint_ba578f832ae965ef] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_rootN_1a01c34364f69876] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_scalb_1a01c34364f69876] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_sign_ba578f832ae965ef] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_sin_ba578f832ae965ef] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_sinCos_e434dd780193da2f] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_ba578f832ae965ef] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_sinhCosh_4a1e2142f3481995] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_ba578f832ae965ef] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_sqrt1z_ba578f832ae965ef] = env->getMethodID(cls, "sqrt1z", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_subtract_cfbd18691ba7b7af] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_subtract_ce488f7123d85e8d] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_subtract_42271350c82bf3fd] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_tan_ba578f832ae965ef] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_tanh_ba578f832ae965ef] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_toDegrees_ba578f832ae965ef] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_toRadians_ba578f832ae965ef] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_ulp_ba578f832ae965ef] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_valueOf_42271350c82bf3fd] = env->getStaticMethodID(cls, "valueOf", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_valueOf_6c42f6363408fc6a] = env->getStaticMethodID(cls, "valueOf", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_createComplex_6c42f6363408fc6a] = env->getMethodID(cls, "createComplex", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldComplex::FieldComplex(const ::org::hipparchus::CalculusFieldElement & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f2b4bfa0af1007e8, a0.this$)) {}

      FieldComplex::FieldComplex(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e337ae7145f7989c, a0.this$, a1.this$)) {}

      FieldComplex FieldComplex::abs() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_abs_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::acos() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_acos_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::acosh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_acosh_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::add(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_add_cfbd18691ba7b7af], a0.this$));
      }

      FieldComplex FieldComplex::add(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_add_ce488f7123d85e8d], a0));
      }

      FieldComplex FieldComplex::add(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_add_42271350c82bf3fd], a0.this$));
      }

      FieldComplex FieldComplex::asin() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_asin_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::asinh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_asinh_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::atan() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_atan_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::atan2(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_atan2_cfbd18691ba7b7af], a0.this$));
      }

      FieldComplex FieldComplex::atanh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_atanh_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::cbrt() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_cbrt_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::ceil() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_ceil_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::conjugate() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_conjugate_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::copySign(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_copySign_cfbd18691ba7b7af], a0.this$));
      }

      FieldComplex FieldComplex::copySign(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_copySign_ce488f7123d85e8d], a0));
      }

      FieldComplex FieldComplex::cos() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_cos_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::cosh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_cosh_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::divide(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_divide_cfbd18691ba7b7af], a0.this$));
      }

      FieldComplex FieldComplex::divide(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_divide_ce488f7123d85e8d], a0));
      }

      FieldComplex FieldComplex::divide(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_divide_42271350c82bf3fd], a0.this$));
      }

      jboolean FieldComplex::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      jboolean FieldComplex::equals(const FieldComplex & a0, const FieldComplex & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_3087f5647a28df29], a0.this$, a1.this$);
      }

      jboolean FieldComplex::equals(const FieldComplex & a0, const FieldComplex & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_50b5f38423069828], a0.this$, a1.this$, a2);
      }

      jboolean FieldComplex::equals(const FieldComplex & a0, const FieldComplex & a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_a4a562041ee259e7], a0.this$, a1.this$, a2);
      }

      jboolean FieldComplex::equalsWithRelativeTolerance(const FieldComplex & a0, const FieldComplex & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsWithRelativeTolerance_50b5f38423069828], a0.this$, a1.this$, a2);
      }

      FieldComplex FieldComplex::exp() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_exp_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::expm1() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_expm1_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::floor() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_floor_ba578f832ae965ef]));
      }

      ::org::hipparchus::CalculusFieldElement FieldComplex::getArgument() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getArgument_81520b552cb3fa26]));
      }

      ::org::hipparchus::complex::FieldComplexField FieldComplex::getField() const
      {
        return ::org::hipparchus::complex::FieldComplexField(env->callObjectMethod(this$, mids$[mid_getField_26ce9b36926acd46]));
      }

      FieldComplex FieldComplex::getI(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getI_29b3449caee8cd64], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldComplex::getImaginary() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getImaginary_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldComplex::getImaginaryPart() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getImaginaryPart_81520b552cb3fa26]));
      }

      FieldComplex FieldComplex::getInf(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getInf_29b3449caee8cd64], a0.this$));
      }

      FieldComplex FieldComplex::getMinusI(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getMinusI_29b3449caee8cd64], a0.this$));
      }

      FieldComplex FieldComplex::getMinusOne(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getMinusOne_29b3449caee8cd64], a0.this$));
      }

      FieldComplex FieldComplex::getNaN(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getNaN_29b3449caee8cd64], a0.this$));
      }

      FieldComplex FieldComplex::getOne(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getOne_29b3449caee8cd64], a0.this$));
      }

      ::org::hipparchus::Field FieldComplex::getPartsField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getPartsField_04d1f63e17d5c5d4]));
      }

      FieldComplex FieldComplex::getPi() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_getPi_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::getPi(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getPi_29b3449caee8cd64], a0.this$));
      }

      jdouble FieldComplex::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_b74f83833fdad017]);
      }

      ::org::hipparchus::CalculusFieldElement FieldComplex::getRealPart() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRealPart_81520b552cb3fa26]));
      }

      FieldComplex FieldComplex::getZero(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getZero_29b3449caee8cd64], a0.this$));
      }

      jint FieldComplex::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      FieldComplex FieldComplex::hypot(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_hypot_cfbd18691ba7b7af], a0.this$));
      }

      jboolean FieldComplex::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_9ab94ac1dc23b105]);
      }

      jboolean FieldComplex::isMathematicalInteger() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isMathematicalInteger_9ab94ac1dc23b105]);
      }

      jboolean FieldComplex::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_9ab94ac1dc23b105]);
      }

      jboolean FieldComplex::isReal() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isReal_9ab94ac1dc23b105]);
      }

      jboolean FieldComplex::isZero() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isZero_9ab94ac1dc23b105]);
      }

      FieldComplex FieldComplex::linearCombination(const JArray< jdouble > & a0, const JArray< FieldComplex > & a1) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_f58fe576c9332e25], a0.this$, a1.this$));
      }

      FieldComplex FieldComplex::linearCombination(const JArray< FieldComplex > & a0, const JArray< FieldComplex > & a1) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_80ef4a822274046f], a0.this$, a1.this$));
      }

      FieldComplex FieldComplex::linearCombination(const FieldComplex & a0, const FieldComplex & a1, const FieldComplex & a2, const FieldComplex & a3) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_d9560f48e4b68b28], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      FieldComplex FieldComplex::linearCombination(jdouble a0, const FieldComplex & a1, jdouble a2, const FieldComplex & a3) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_cfcea2997bb6f6a6], a0, a1.this$, a2, a3.this$));
      }

      FieldComplex FieldComplex::linearCombination(const FieldComplex & a0, const FieldComplex & a1, const FieldComplex & a2, const FieldComplex & a3, const FieldComplex & a4, const FieldComplex & a5) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_dbf14106a8d9bfae], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      FieldComplex FieldComplex::linearCombination(jdouble a0, const FieldComplex & a1, jdouble a2, const FieldComplex & a3, jdouble a4, const FieldComplex & a5) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_02dcb4e990448695], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      FieldComplex FieldComplex::linearCombination(const FieldComplex & a0, const FieldComplex & a1, const FieldComplex & a2, const FieldComplex & a3, const FieldComplex & a4, const FieldComplex & a5, const FieldComplex & a6, const FieldComplex & a7) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_9136abeb8767bc81], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      FieldComplex FieldComplex::linearCombination(jdouble a0, const FieldComplex & a1, jdouble a2, const FieldComplex & a3, jdouble a4, const FieldComplex & a5, jdouble a6, const FieldComplex & a7) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_d8590adf5e8dc2ab], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      FieldComplex FieldComplex::log() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_log_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::log10() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_log10_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::log1p() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_log1p_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::multiply(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiply_cfbd18691ba7b7af], a0.this$));
      }

      FieldComplex FieldComplex::multiply(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiply_ce488f7123d85e8d], a0));
      }

      FieldComplex FieldComplex::multiply(jint a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiply_1a01c34364f69876], a0));
      }

      FieldComplex FieldComplex::multiply(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiply_42271350c82bf3fd], a0.this$));
      }

      FieldComplex FieldComplex::multiplyMinusI() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiplyMinusI_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::multiplyPlusI() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiplyPlusI_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::negate() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_negate_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::newInstance(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_newInstance_ce488f7123d85e8d], a0));
      }

      ::java::util::List FieldComplex::nthRoot(jint a0) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_nthRoot_f8cea93815fe5eaa], a0));
      }

      FieldComplex FieldComplex::pow(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_pow_cfbd18691ba7b7af], a0.this$));
      }

      FieldComplex FieldComplex::pow(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_pow_ce488f7123d85e8d], a0));
      }

      FieldComplex FieldComplex::pow(jint a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_pow_1a01c34364f69876], a0));
      }

      FieldComplex FieldComplex::pow(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_pow_42271350c82bf3fd], a0.this$));
      }

      FieldComplex FieldComplex::reciprocal() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_reciprocal_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::remainder(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_remainder_cfbd18691ba7b7af], a0.this$));
      }

      FieldComplex FieldComplex::remainder(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_remainder_ce488f7123d85e8d], a0));
      }

      FieldComplex FieldComplex::rint() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_rint_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::rootN(jint a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_rootN_1a01c34364f69876], a0));
      }

      FieldComplex FieldComplex::scalb(jint a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_scalb_1a01c34364f69876], a0));
      }

      FieldComplex FieldComplex::sign() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_sign_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::sin() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_sin_ba578f832ae965ef]));
      }

      ::org::hipparchus::util::FieldSinCos FieldComplex::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_e434dd780193da2f]));
      }

      FieldComplex FieldComplex::sinh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_sinh_ba578f832ae965ef]));
      }

      ::org::hipparchus::util::FieldSinhCosh FieldComplex::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_4a1e2142f3481995]));
      }

      FieldComplex FieldComplex::sqrt() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_sqrt_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::sqrt1z() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_sqrt1z_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::subtract(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_subtract_cfbd18691ba7b7af], a0.this$));
      }

      FieldComplex FieldComplex::subtract(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_subtract_ce488f7123d85e8d], a0));
      }

      FieldComplex FieldComplex::subtract(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_subtract_42271350c82bf3fd], a0.this$));
      }

      FieldComplex FieldComplex::tan() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_tan_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::tanh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_tanh_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::toDegrees() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_toDegrees_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::toRadians() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_toRadians_ba578f832ae965ef]));
      }

      ::java::lang::String FieldComplex::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }

      FieldComplex FieldComplex::ulp() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_ulp_ba578f832ae965ef]));
      }

      FieldComplex FieldComplex::valueOf(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_valueOf_42271350c82bf3fd], a0.this$));
      }

      FieldComplex FieldComplex::valueOf(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6c42f6363408fc6a], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      static PyObject *t_FieldComplex_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_of_(t_FieldComplex *self, PyObject *args);
      static int t_FieldComplex_init_(t_FieldComplex *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldComplex_abs(t_FieldComplex *self);
      static PyObject *t_FieldComplex_acos(t_FieldComplex *self);
      static PyObject *t_FieldComplex_acosh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_add(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_asin(t_FieldComplex *self);
      static PyObject *t_FieldComplex_asinh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_atan(t_FieldComplex *self);
      static PyObject *t_FieldComplex_atan2(t_FieldComplex *self, PyObject *arg);
      static PyObject *t_FieldComplex_atanh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_cbrt(t_FieldComplex *self);
      static PyObject *t_FieldComplex_ceil(t_FieldComplex *self);
      static PyObject *t_FieldComplex_conjugate(t_FieldComplex *self);
      static PyObject *t_FieldComplex_copySign(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_cos(t_FieldComplex *self);
      static PyObject *t_FieldComplex_cosh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_divide(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_equals(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_equalsWithRelativeTolerance(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldComplex_equals_(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldComplex_exp(t_FieldComplex *self);
      static PyObject *t_FieldComplex_expm1(t_FieldComplex *self);
      static PyObject *t_FieldComplex_floor(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getArgument(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getField(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getI(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getImaginary(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getImaginaryPart(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getInf(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getMinusI(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getMinusOne(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getNaN(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getOne(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getPartsField(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getPi(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getPi_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getReal(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getRealPart(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getZero(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_hashCode(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_hypot(t_FieldComplex *self, PyObject *arg);
      static PyObject *t_FieldComplex_isInfinite(t_FieldComplex *self);
      static PyObject *t_FieldComplex_isMathematicalInteger(t_FieldComplex *self);
      static PyObject *t_FieldComplex_isNaN(t_FieldComplex *self);
      static PyObject *t_FieldComplex_isReal(t_FieldComplex *self);
      static PyObject *t_FieldComplex_isZero(t_FieldComplex *self);
      static PyObject *t_FieldComplex_linearCombination(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_log(t_FieldComplex *self);
      static PyObject *t_FieldComplex_log10(t_FieldComplex *self);
      static PyObject *t_FieldComplex_log1p(t_FieldComplex *self);
      static PyObject *t_FieldComplex_multiply(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_multiplyMinusI(t_FieldComplex *self);
      static PyObject *t_FieldComplex_multiplyPlusI(t_FieldComplex *self);
      static PyObject *t_FieldComplex_negate(t_FieldComplex *self);
      static PyObject *t_FieldComplex_newInstance(t_FieldComplex *self, PyObject *arg);
      static PyObject *t_FieldComplex_nthRoot(t_FieldComplex *self, PyObject *arg);
      static PyObject *t_FieldComplex_pow(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_reciprocal(t_FieldComplex *self);
      static PyObject *t_FieldComplex_remainder(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_rint(t_FieldComplex *self);
      static PyObject *t_FieldComplex_rootN(t_FieldComplex *self, PyObject *arg);
      static PyObject *t_FieldComplex_scalb(t_FieldComplex *self, PyObject *arg);
      static PyObject *t_FieldComplex_sign(t_FieldComplex *self);
      static PyObject *t_FieldComplex_sin(t_FieldComplex *self);
      static PyObject *t_FieldComplex_sinCos(t_FieldComplex *self);
      static PyObject *t_FieldComplex_sinh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_sinhCosh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_sqrt(t_FieldComplex *self);
      static PyObject *t_FieldComplex_sqrt1z(t_FieldComplex *self);
      static PyObject *t_FieldComplex_subtract(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_tan(t_FieldComplex *self);
      static PyObject *t_FieldComplex_tanh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_toDegrees(t_FieldComplex *self);
      static PyObject *t_FieldComplex_toRadians(t_FieldComplex *self);
      static PyObject *t_FieldComplex_toString(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_ulp(t_FieldComplex *self);
      static PyObject *t_FieldComplex_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldComplex_get__argument(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__field(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__imaginary(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__imaginaryPart(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__infinite(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__mathematicalInteger(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__naN(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__partsField(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__pi(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__real(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__realPart(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__zero(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__parameters_(t_FieldComplex *self, void *data);
      static PyGetSetDef t_FieldComplex__fields_[] = {
        DECLARE_GET_FIELD(t_FieldComplex, argument),
        DECLARE_GET_FIELD(t_FieldComplex, field),
        DECLARE_GET_FIELD(t_FieldComplex, imaginary),
        DECLARE_GET_FIELD(t_FieldComplex, imaginaryPart),
        DECLARE_GET_FIELD(t_FieldComplex, infinite),
        DECLARE_GET_FIELD(t_FieldComplex, mathematicalInteger),
        DECLARE_GET_FIELD(t_FieldComplex, naN),
        DECLARE_GET_FIELD(t_FieldComplex, partsField),
        DECLARE_GET_FIELD(t_FieldComplex, pi),
        DECLARE_GET_FIELD(t_FieldComplex, real),
        DECLARE_GET_FIELD(t_FieldComplex, realPart),
        DECLARE_GET_FIELD(t_FieldComplex, zero),
        DECLARE_GET_FIELD(t_FieldComplex, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldComplex__methods_[] = {
        DECLARE_METHOD(t_FieldComplex, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, abs, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, acos, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, acosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, add, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, asin, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, asinh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, atan, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, atan2, METH_O),
        DECLARE_METHOD(t_FieldComplex, atanh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, cbrt, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, ceil, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, conjugate, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, copySign, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, cos, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, cosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, divide, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, equals, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, equalsWithRelativeTolerance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, equals_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, exp, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, expm1, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, floor, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getArgument, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getI, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getImaginary, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getImaginaryPart, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getInf, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getMinusI, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getMinusOne, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getNaN, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getOne, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getPartsField, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getPi, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getPi_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getReal, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getRealPart, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getZero, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, hypot, METH_O),
        DECLARE_METHOD(t_FieldComplex, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, isMathematicalInteger, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, isNaN, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, isReal, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, isZero, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, linearCombination, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, log, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, log10, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, log1p, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, multiply, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, multiplyMinusI, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, multiplyPlusI, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, negate, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, newInstance, METH_O),
        DECLARE_METHOD(t_FieldComplex, nthRoot, METH_O),
        DECLARE_METHOD(t_FieldComplex, pow, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, remainder, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, rint, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, rootN, METH_O),
        DECLARE_METHOD(t_FieldComplex, scalb, METH_O),
        DECLARE_METHOD(t_FieldComplex, sign, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, sin, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, sinCos, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, sinh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, sinhCosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, sqrt, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, sqrt1z, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, subtract, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, tan, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, tanh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, toDegrees, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, toRadians, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, ulp, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, valueOf, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldComplex)[] = {
        { Py_tp_methods, t_FieldComplex__methods_ },
        { Py_tp_init, (void *) t_FieldComplex_init_ },
        { Py_tp_getset, t_FieldComplex__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldComplex)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldComplex, t_FieldComplex, FieldComplex);
      PyObject *t_FieldComplex::wrap_Object(const FieldComplex& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldComplex::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldComplex *self = (t_FieldComplex *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldComplex::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldComplex::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldComplex *self = (t_FieldComplex *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldComplex::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldComplex), &PY_TYPE_DEF(FieldComplex), module, "FieldComplex", 0);
      }

      void t_FieldComplex::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplex), "class_", make_descriptor(FieldComplex::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplex), "wrapfn_", make_descriptor(t_FieldComplex::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplex), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldComplex_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldComplex::initializeClass, 1)))
          return NULL;
        return t_FieldComplex::wrap_Object(FieldComplex(((t_FieldComplex *) arg)->object.this$));
      }
      static PyObject *t_FieldComplex_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldComplex::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldComplex_of_(t_FieldComplex *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldComplex_init_(t_FieldComplex *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldComplex(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldComplex(a0, a1));
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

      static PyObject *t_FieldComplex_abs(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_acos(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.acos());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_acosh(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.acosh());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_add(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_asin(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.asin());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_asinh(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.asinh());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_atan(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.atan());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_atan2(t_FieldComplex *self, PyObject *arg)
      {
        FieldComplex a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
        {
          OBJ_CALL(result = self->object.atan2(a0));
          return t_FieldComplex::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "atan2", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_atanh(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.atanh());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_cbrt(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.cbrt());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_ceil(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.ceil());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_conjugate(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.conjugate());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_copySign(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySign", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_cos(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_cosh(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_divide(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_equals(t_FieldComplex *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldComplex), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_FieldComplex_equalsWithRelativeTolerance(PyTypeObject *type, PyObject *args)
      {
        FieldComplex a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex a1((jobject) NULL);
        PyTypeObject **p1;
        jdouble a2;
        jboolean result;

        if (!parseArgs(args, "KKD", FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::equalsWithRelativeTolerance(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError(type, "equalsWithRelativeTolerance", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_equals_(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean result;

            if (!parseArgs(args, "KK", FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 3:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            jboolean result;

            if (!parseArgs(args, "KKD", FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "KKI", FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "equals_", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_exp(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.exp());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_expm1(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.expm1());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_floor(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.floor());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_getArgument(t_FieldComplex *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getArgument());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldComplex_getField(t_FieldComplex *self)
      {
        ::org::hipparchus::complex::FieldComplexField result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::complex::t_FieldComplexField::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_getI(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getI(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getI", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getImaginary(t_FieldComplex *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getImaginary());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldComplex_getImaginaryPart(t_FieldComplex *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getImaginaryPart());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldComplex_getInf(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getInf(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getInf", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getMinusI(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getMinusI(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getMinusI", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getMinusOne(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getMinusOne(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getMinusOne", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getNaN(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getNaN(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getNaN", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getOne(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getOne(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getOne", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getPartsField(t_FieldComplex *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getPartsField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_getPi(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_getPi_(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getPi(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getPi_", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getReal(t_FieldComplex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_FieldComplex_getRealPart(t_FieldComplex *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getRealPart());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldComplex_getZero(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getZero(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getZero", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_hashCode(t_FieldComplex *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FieldComplex), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_FieldComplex_hypot(t_FieldComplex *self, PyObject *arg)
      {
        FieldComplex a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
        {
          OBJ_CALL(result = self->object.hypot(a0));
          return t_FieldComplex::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "hypot", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_isInfinite(t_FieldComplex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldComplex_isMathematicalInteger(t_FieldComplex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isMathematicalInteger());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldComplex_isNaN(t_FieldComplex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNaN());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldComplex_isReal(t_FieldComplex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isReal());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldComplex_isZero(t_FieldComplex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isZero());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldComplex_linearCombination(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< FieldComplex > a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "[D[K", FieldComplex::initializeClass, &a0, &a1, &p1, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            JArray< FieldComplex > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< FieldComplex > a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "[K[K", FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 4:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex a2((jobject) NULL);
            PyTypeObject **p2;
            FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "KKKK", FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_, &a2, &p2, t_FieldComplex::parameters_, &a3, &p3, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "DKDK", FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &a1, &p1, t_FieldComplex::parameters_, &a2, &a3, &p3, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 6:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex a2((jobject) NULL);
            PyTypeObject **p2;
            FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            FieldComplex a4((jobject) NULL);
            PyTypeObject **p4;
            FieldComplex a5((jobject) NULL);
            PyTypeObject **p5;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "KKKKKK", FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_, &a2, &p2, t_FieldComplex::parameters_, &a3, &p3, t_FieldComplex::parameters_, &a4, &p4, t_FieldComplex::parameters_, &a5, &p5, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldComplex a5((jobject) NULL);
            PyTypeObject **p5;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "DKDKDK", FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &a1, &p1, t_FieldComplex::parameters_, &a2, &a3, &p3, t_FieldComplex::parameters_, &a4, &a5, &p5, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 8:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex a2((jobject) NULL);
            PyTypeObject **p2;
            FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            FieldComplex a4((jobject) NULL);
            PyTypeObject **p4;
            FieldComplex a5((jobject) NULL);
            PyTypeObject **p5;
            FieldComplex a6((jobject) NULL);
            PyTypeObject **p6;
            FieldComplex a7((jobject) NULL);
            PyTypeObject **p7;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKK", FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_, &a2, &p2, t_FieldComplex::parameters_, &a3, &p3, t_FieldComplex::parameters_, &a4, &p4, t_FieldComplex::parameters_, &a5, &p5, t_FieldComplex::parameters_, &a6, &p6, t_FieldComplex::parameters_, &a7, &p7, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldComplex a5((jobject) NULL);
            PyTypeObject **p5;
            jdouble a6;
            FieldComplex a7((jobject) NULL);
            PyTypeObject **p7;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "DKDKDKDK", FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &a1, &p1, t_FieldComplex::parameters_, &a2, &a3, &p3, t_FieldComplex::parameters_, &a4, &a5, &p5, t_FieldComplex::parameters_, &a6, &a7, &p7, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_log(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.log());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_log10(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.log10());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_log1p(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.log1p());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_multiply(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jint a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_multiplyMinusI(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.multiplyMinusI());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_multiplyPlusI(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.multiplyPlusI());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_negate(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_newInstance(t_FieldComplex *self, PyObject *arg)
      {
        jdouble a0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.newInstance(a0));
          return t_FieldComplex::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_nthRoot(t_FieldComplex *self, PyObject *arg)
      {
        jint a0;
        ::java::util::List result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.nthRoot(a0));
          return ::java::util::t_List::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "nthRoot", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_pow(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jint a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_reciprocal(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_remainder(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "remainder", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_rint(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.rint());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_rootN(t_FieldComplex *self, PyObject *arg)
      {
        jint a0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.rootN(a0));
          return t_FieldComplex::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "rootN", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_scalb(t_FieldComplex *self, PyObject *arg)
      {
        jint a0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.scalb(a0));
          return t_FieldComplex::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "scalb", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_sign(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.sign());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_sin(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_sinCos(t_FieldComplex *self)
      {
        ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
        OBJ_CALL(result = self->object.sinCos());
        return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
      }

      static PyObject *t_FieldComplex_sinh(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_sinhCosh(t_FieldComplex *self)
      {
        ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
        OBJ_CALL(result = self->object.sinhCosh());
        return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
      }

      static PyObject *t_FieldComplex_sqrt(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_sqrt1z(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt1z());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_subtract(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_tan(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.tan());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_tanh(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.tanh());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_toDegrees(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.toDegrees());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_toRadians(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.toRadians());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_toString(t_FieldComplex *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldComplex), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldComplex_ulp(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.ulp());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_valueOf(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::valueOf(a0));
              return t_FieldComplex::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::valueOf(a0, a1));
              return t_FieldComplex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "valueOf", args);
        return NULL;
      }
      static PyObject *t_FieldComplex_get__parameters_(t_FieldComplex *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldComplex_get__argument(t_FieldComplex *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getArgument());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__field(t_FieldComplex *self, void *data)
      {
        ::org::hipparchus::complex::FieldComplexField value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::complex::t_FieldComplexField::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__imaginary(t_FieldComplex *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getImaginary());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__imaginaryPart(t_FieldComplex *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getImaginaryPart());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__infinite(t_FieldComplex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_FieldComplex_get__mathematicalInteger(t_FieldComplex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isMathematicalInteger());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_FieldComplex_get__naN(t_FieldComplex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_FieldComplex_get__partsField(t_FieldComplex *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getPartsField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__pi(t_FieldComplex *self, void *data)
      {
        FieldComplex value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return t_FieldComplex::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__real(t_FieldComplex *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_FieldComplex_get__realPart(t_FieldComplex *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getRealPart());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__zero(t_FieldComplex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isZero());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/AGILeapSecondFilesLoader.h"
#include "java/util/List.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AGILeapSecondFilesLoader::class$ = NULL;
      jmethodID *AGILeapSecondFilesLoader::mids$ = NULL;
      bool AGILeapSecondFilesLoader::live$ = false;
      ::java::lang::String *AGILeapSecondFilesLoader::DEFAULT_SUPPORTED_NAMES = NULL;

      jclass AGILeapSecondFilesLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AGILeapSecondFilesLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_0343d25c5af74eca] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_loadOffsets_e62d3bb06d56d7e3] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AGILeapSecondFilesLoader::AGILeapSecondFilesLoader(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

      AGILeapSecondFilesLoader::AGILeapSecondFilesLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_0343d25c5af74eca, a0.this$, a1.this$)) {}

      ::java::util::List AGILeapSecondFilesLoader::loadOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_loadOffsets_e62d3bb06d56d7e3]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/time/AGILeapSecondFilesLoader$Parser.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_AGILeapSecondFilesLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AGILeapSecondFilesLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AGILeapSecondFilesLoader_init_(t_AGILeapSecondFilesLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AGILeapSecondFilesLoader_loadOffsets(t_AGILeapSecondFilesLoader *self);

      static PyMethodDef t_AGILeapSecondFilesLoader__methods_[] = {
        DECLARE_METHOD(t_AGILeapSecondFilesLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AGILeapSecondFilesLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AGILeapSecondFilesLoader, loadOffsets, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AGILeapSecondFilesLoader)[] = {
        { Py_tp_methods, t_AGILeapSecondFilesLoader__methods_ },
        { Py_tp_init, (void *) t_AGILeapSecondFilesLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AGILeapSecondFilesLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(AGILeapSecondFilesLoader, t_AGILeapSecondFilesLoader, AGILeapSecondFilesLoader);

      void t_AGILeapSecondFilesLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(AGILeapSecondFilesLoader), &PY_TYPE_DEF(AGILeapSecondFilesLoader), module, "AGILeapSecondFilesLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader), "Parser", make_descriptor(&PY_TYPE_DEF(AGILeapSecondFilesLoader$Parser)));
      }

      void t_AGILeapSecondFilesLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader), "class_", make_descriptor(AGILeapSecondFilesLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader), "wrapfn_", make_descriptor(t_AGILeapSecondFilesLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader), "boxfn_", make_descriptor(boxObject));
        env->getClass(AGILeapSecondFilesLoader::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*AGILeapSecondFilesLoader::DEFAULT_SUPPORTED_NAMES)));
      }

      static PyObject *t_AGILeapSecondFilesLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AGILeapSecondFilesLoader::initializeClass, 1)))
          return NULL;
        return t_AGILeapSecondFilesLoader::wrap_Object(AGILeapSecondFilesLoader(((t_AGILeapSecondFilesLoader *) arg)->object.this$));
      }
      static PyObject *t_AGILeapSecondFilesLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AGILeapSecondFilesLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AGILeapSecondFilesLoader_init_(t_AGILeapSecondFilesLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            AGILeapSecondFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = AGILeapSecondFilesLoader(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
            AGILeapSecondFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AGILeapSecondFilesLoader(a0, a1));
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

      static PyObject *t_AGILeapSecondFilesLoader_loadOffsets(t_AGILeapSecondFilesLoader *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.loadOffsets());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/drag/AbstractDragForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/ForceModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *AbstractDragForceModel::class$ = NULL;
        jmethodID *AbstractDragForceModel::mids$ = NULL;
        bool AbstractDragForceModel::live$ = false;

        jclass AbstractDragForceModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/AbstractDragForceModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_isVariable_cb8809386317d9d1] = env->getMethodID(cls, "isVariable", "(Lorg/hipparchus/analysis/differentiation/Gradient;I)Z");
            mids$[mid_isVariable_e694c750b6d47f11] = env->getMethodID(cls, "isVariable", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;I)Z");
            mids$[mid_isDSStateDerivative_e6d9e841ca2e035c] = env->getMethodID(cls, "isDSStateDerivative", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");
            mids$[mid_isGradientStateDerivative_e6d9e841ca2e035c] = env->getMethodID(cls, "isGradientStateDerivative", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");
            mids$[mid_getDSDensityWrtStateUsingFiniteDifferences_f0f464f712250667] = env->getMethodID(cls, "getDSDensityWrtStateUsingFiniteDifferences", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getGradientDensityWrtStateUsingFiniteDifferences_ef723df1fde38524] = env->getMethodID(cls, "getGradientDensityWrtStateUsingFiniteDifferences", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/analysis/differentiation/Gradient;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean AbstractDragForceModel::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105]);
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
      namespace drag {
        static PyObject *t_AbstractDragForceModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractDragForceModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractDragForceModel_dependsOnPositionOnly(t_AbstractDragForceModel *self);

        static PyMethodDef t_AbstractDragForceModel__methods_[] = {
          DECLARE_METHOD(t_AbstractDragForceModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractDragForceModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractDragForceModel, dependsOnPositionOnly, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractDragForceModel)[] = {
          { Py_tp_methods, t_AbstractDragForceModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractDragForceModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractDragForceModel, t_AbstractDragForceModel, AbstractDragForceModel);

        void t_AbstractDragForceModel::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractDragForceModel), &PY_TYPE_DEF(AbstractDragForceModel), module, "AbstractDragForceModel", 0);
        }

        void t_AbstractDragForceModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDragForceModel), "class_", make_descriptor(AbstractDragForceModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDragForceModel), "wrapfn_", make_descriptor(t_AbstractDragForceModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDragForceModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractDragForceModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractDragForceModel::initializeClass, 1)))
            return NULL;
          return t_AbstractDragForceModel::wrap_Object(AbstractDragForceModel(((t_AbstractDragForceModel *) arg)->object.this$));
        }
        static PyObject *t_AbstractDragForceModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractDragForceModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractDragForceModel_dependsOnPositionOnly(t_AbstractDragForceModel *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FieldChronologicalComparator.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldChronologicalComparator::class$ = NULL;
      jmethodID *FieldChronologicalComparator::mids$ = NULL;
      bool FieldChronologicalComparator::live$ = false;

      jclass FieldChronologicalComparator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldChronologicalComparator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_compare_242d2d88c0891746] = env->getMethodID(cls, "compare", "(Lorg/orekit/time/FieldTimeStamped;Lorg/orekit/time/FieldTimeStamped;)I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldChronologicalComparator::FieldChronologicalComparator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      jint FieldChronologicalComparator::compare(const ::org::orekit::time::FieldTimeStamped & a0, const ::org::orekit::time::FieldTimeStamped & a1) const
      {
        return env->callIntMethod(this$, mids$[mid_compare_242d2d88c0891746], a0.this$, a1.this$);
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
      static PyObject *t_FieldChronologicalComparator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldChronologicalComparator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldChronologicalComparator_of_(t_FieldChronologicalComparator *self, PyObject *args);
      static int t_FieldChronologicalComparator_init_(t_FieldChronologicalComparator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldChronologicalComparator_compare(t_FieldChronologicalComparator *self, PyObject *args);
      static PyObject *t_FieldChronologicalComparator_get__parameters_(t_FieldChronologicalComparator *self, void *data);
      static PyGetSetDef t_FieldChronologicalComparator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldChronologicalComparator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldChronologicalComparator__methods_[] = {
        DECLARE_METHOD(t_FieldChronologicalComparator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldChronologicalComparator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldChronologicalComparator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldChronologicalComparator, compare, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldChronologicalComparator)[] = {
        { Py_tp_methods, t_FieldChronologicalComparator__methods_ },
        { Py_tp_init, (void *) t_FieldChronologicalComparator_init_ },
        { Py_tp_getset, t_FieldChronologicalComparator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldChronologicalComparator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldChronologicalComparator, t_FieldChronologicalComparator, FieldChronologicalComparator);
      PyObject *t_FieldChronologicalComparator::wrap_Object(const FieldChronologicalComparator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldChronologicalComparator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldChronologicalComparator *self = (t_FieldChronologicalComparator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldChronologicalComparator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldChronologicalComparator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldChronologicalComparator *self = (t_FieldChronologicalComparator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldChronologicalComparator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldChronologicalComparator), &PY_TYPE_DEF(FieldChronologicalComparator), module, "FieldChronologicalComparator", 0);
      }

      void t_FieldChronologicalComparator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldChronologicalComparator), "class_", make_descriptor(FieldChronologicalComparator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldChronologicalComparator), "wrapfn_", make_descriptor(t_FieldChronologicalComparator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldChronologicalComparator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldChronologicalComparator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldChronologicalComparator::initializeClass, 1)))
          return NULL;
        return t_FieldChronologicalComparator::wrap_Object(FieldChronologicalComparator(((t_FieldChronologicalComparator *) arg)->object.this$));
      }
      static PyObject *t_FieldChronologicalComparator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldChronologicalComparator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldChronologicalComparator_of_(t_FieldChronologicalComparator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldChronologicalComparator_init_(t_FieldChronologicalComparator *self, PyObject *args, PyObject *kwds)
      {
        FieldChronologicalComparator object((jobject) NULL);

        INT_CALL(object = FieldChronologicalComparator());
        self->object = object;

        return 0;
      }

      static PyObject *t_FieldChronologicalComparator_compare(t_FieldChronologicalComparator *self, PyObject *args)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::FieldTimeStamped a1((jobject) NULL);
        PyTypeObject **p1;
        jint result;

        if (!parseArgs(args, "KK", ::org::orekit::time::FieldTimeStamped::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.compare(a0, a1));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compare", args);
        return NULL;
      }
      static PyObject *t_FieldChronologicalComparator_get__parameters_(t_FieldChronologicalComparator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmMetadataKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmMetadata.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *OdmMetadataKey::class$ = NULL;
            jmethodID *OdmMetadataKey::mids$ = NULL;
            bool OdmMetadataKey::live$ = false;
            OdmMetadataKey *OdmMetadataKey::OBJECT_NAME = NULL;

            jclass OdmMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/OdmMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_384505cbb3ae16a2] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/OdmMetadata;)Z");
                mids$[mid_valueOf_eca7224a8570b0cc] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/OdmMetadataKey;");
                mids$[mid_values_15b2fbf6e08600b8] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/OdmMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                OBJECT_NAME = new OdmMetadataKey(env->getStaticObjectField(cls, "OBJECT_NAME", "Lorg/orekit/files/ccsds/ndm/odm/OdmMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean OdmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_384505cbb3ae16a2], a0.this$, a1.this$, a2.this$);
            }

            OdmMetadataKey OdmMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return OdmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_eca7224a8570b0cc], a0.this$));
            }

            JArray< OdmMetadataKey > OdmMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< OdmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_15b2fbf6e08600b8]));
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
            static PyObject *t_OdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmMetadataKey_of_(t_OdmMetadataKey *self, PyObject *args);
            static PyObject *t_OdmMetadataKey_process(t_OdmMetadataKey *self, PyObject *args);
            static PyObject *t_OdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_OdmMetadataKey_values(PyTypeObject *type);
            static PyObject *t_OdmMetadataKey_get__parameters_(t_OdmMetadataKey *self, void *data);
            static PyGetSetDef t_OdmMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_OdmMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_OdmMetadataKey__methods_[] = {
              DECLARE_METHOD(t_OdmMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_OdmMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_OdmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_OdmMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OdmMetadataKey)[] = {
              { Py_tp_methods, t_OdmMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_OdmMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OdmMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(OdmMetadataKey, t_OdmMetadataKey, OdmMetadataKey);
            PyObject *t_OdmMetadataKey::wrap_Object(const OdmMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_OdmMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_OdmMetadataKey *self = (t_OdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_OdmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_OdmMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_OdmMetadataKey *self = (t_OdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_OdmMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(OdmMetadataKey), &PY_TYPE_DEF(OdmMetadataKey), module, "OdmMetadataKey", 0);
            }

            void t_OdmMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadataKey), "class_", make_descriptor(OdmMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadataKey), "wrapfn_", make_descriptor(t_OdmMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(OdmMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadataKey), "OBJECT_NAME", make_descriptor(t_OdmMetadataKey::wrap_Object(*OdmMetadataKey::OBJECT_NAME)));
            }

            static PyObject *t_OdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OdmMetadataKey::initializeClass, 1)))
                return NULL;
              return t_OdmMetadataKey::wrap_Object(OdmMetadataKey(((t_OdmMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_OdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OdmMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_OdmMetadataKey_of_(t_OdmMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_OdmMetadataKey_process(t_OdmMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::OdmMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_OdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              OdmMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::OdmMetadataKey::valueOf(a0));
                return t_OdmMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_OdmMetadataKey_values(PyTypeObject *type)
            {
              JArray< OdmMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::OdmMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_OdmMetadataKey::wrap_jobject);
            }
            static PyObject *t_OdmMetadataKey_get__parameters_(t_OdmMetadataKey *self, void *data)
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
#include "org/orekit/files/rinex/clock/RinexClock$ReferenceClock.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClock$ReferenceClock::class$ = NULL;
          jmethodID *RinexClock$ReferenceClock::mids$ = NULL;
          bool RinexClock$ReferenceClock::live$ = false;

          jclass RinexClock$ReferenceClock::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClock$ReferenceClock");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_9c044b1bc256413f] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;DLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_getClockConstraint_b74f83833fdad017] = env->getMethodID(cls, "getClockConstraint", "()D");
              mids$[mid_getClockID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getClockID", "()Ljava/lang/String;");
              mids$[mid_getEndDate_c325492395d89b24] = env->getMethodID(cls, "getEndDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getReferenceName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getReferenceName", "()Ljava/lang/String;");
              mids$[mid_getStartDate_c325492395d89b24] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/AbsoluteDate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexClock$ReferenceClock::RinexClock$ReferenceClock(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2, const ::org::orekit::time::AbsoluteDate & a3, const ::org::orekit::time::AbsoluteDate & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9c044b1bc256413f, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

          jdouble RinexClock$ReferenceClock::getClockConstraint() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockConstraint_b74f83833fdad017]);
          }

          ::java::lang::String RinexClock$ReferenceClock::getClockID() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getClockID_1c1fa1e935d6cdcf]));
          }

          ::org::orekit::time::AbsoluteDate RinexClock$ReferenceClock::getEndDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndDate_c325492395d89b24]));
          }

          ::java::lang::String RinexClock$ReferenceClock::getReferenceName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReferenceName_1c1fa1e935d6cdcf]));
          }

          ::org::orekit::time::AbsoluteDate RinexClock$ReferenceClock::getStartDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartDate_c325492395d89b24]));
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
          static PyObject *t_RinexClock$ReferenceClock_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$ReferenceClock_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexClock$ReferenceClock_init_(t_RinexClock$ReferenceClock *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexClock$ReferenceClock_getClockConstraint(t_RinexClock$ReferenceClock *self);
          static PyObject *t_RinexClock$ReferenceClock_getClockID(t_RinexClock$ReferenceClock *self);
          static PyObject *t_RinexClock$ReferenceClock_getEndDate(t_RinexClock$ReferenceClock *self);
          static PyObject *t_RinexClock$ReferenceClock_getReferenceName(t_RinexClock$ReferenceClock *self);
          static PyObject *t_RinexClock$ReferenceClock_getStartDate(t_RinexClock$ReferenceClock *self);
          static PyObject *t_RinexClock$ReferenceClock_get__clockConstraint(t_RinexClock$ReferenceClock *self, void *data);
          static PyObject *t_RinexClock$ReferenceClock_get__clockID(t_RinexClock$ReferenceClock *self, void *data);
          static PyObject *t_RinexClock$ReferenceClock_get__endDate(t_RinexClock$ReferenceClock *self, void *data);
          static PyObject *t_RinexClock$ReferenceClock_get__referenceName(t_RinexClock$ReferenceClock *self, void *data);
          static PyObject *t_RinexClock$ReferenceClock_get__startDate(t_RinexClock$ReferenceClock *self, void *data);
          static PyGetSetDef t_RinexClock$ReferenceClock__fields_[] = {
            DECLARE_GET_FIELD(t_RinexClock$ReferenceClock, clockConstraint),
            DECLARE_GET_FIELD(t_RinexClock$ReferenceClock, clockID),
            DECLARE_GET_FIELD(t_RinexClock$ReferenceClock, endDate),
            DECLARE_GET_FIELD(t_RinexClock$ReferenceClock, referenceName),
            DECLARE_GET_FIELD(t_RinexClock$ReferenceClock, startDate),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexClock$ReferenceClock__methods_[] = {
            DECLARE_METHOD(t_RinexClock$ReferenceClock, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, getClockConstraint, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, getClockID, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, getEndDate, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, getReferenceName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, getStartDate, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClock$ReferenceClock)[] = {
            { Py_tp_methods, t_RinexClock$ReferenceClock__methods_ },
            { Py_tp_init, (void *) t_RinexClock$ReferenceClock_init_ },
            { Py_tp_getset, t_RinexClock$ReferenceClock__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClock$ReferenceClock)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexClock$ReferenceClock, t_RinexClock$ReferenceClock, RinexClock$ReferenceClock);

          void t_RinexClock$ReferenceClock::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClock$ReferenceClock), &PY_TYPE_DEF(RinexClock$ReferenceClock), module, "RinexClock$ReferenceClock", 0);
          }

          void t_RinexClock$ReferenceClock::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ReferenceClock), "class_", make_descriptor(RinexClock$ReferenceClock::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ReferenceClock), "wrapfn_", make_descriptor(t_RinexClock$ReferenceClock::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ReferenceClock), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexClock$ReferenceClock_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClock$ReferenceClock::initializeClass, 1)))
              return NULL;
            return t_RinexClock$ReferenceClock::wrap_Object(RinexClock$ReferenceClock(((t_RinexClock$ReferenceClock *) arg)->object.this$));
          }
          static PyObject *t_RinexClock$ReferenceClock_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClock$ReferenceClock::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexClock$ReferenceClock_init_(t_RinexClock$ReferenceClock *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            jdouble a2;
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
            RinexClock$ReferenceClock object((jobject) NULL);

            if (!parseArgs(args, "ssDkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = RinexClock$ReferenceClock(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RinexClock$ReferenceClock_getClockConstraint(t_RinexClock$ReferenceClock *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockConstraint());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ReferenceClock_getClockID(t_RinexClock$ReferenceClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getClockID());
            return j2p(result);
          }

          static PyObject *t_RinexClock$ReferenceClock_getEndDate(t_RinexClock$ReferenceClock *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getEndDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexClock$ReferenceClock_getReferenceName(t_RinexClock$ReferenceClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceName());
            return j2p(result);
          }

          static PyObject *t_RinexClock$ReferenceClock_getStartDate(t_RinexClock$ReferenceClock *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getStartDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexClock$ReferenceClock_get__clockConstraint(t_RinexClock$ReferenceClock *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockConstraint());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ReferenceClock_get__clockID(t_RinexClock$ReferenceClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getClockID());
            return j2p(value);
          }

          static PyObject *t_RinexClock$ReferenceClock_get__endDate(t_RinexClock$ReferenceClock *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getEndDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_RinexClock$ReferenceClock_get__referenceName(t_RinexClock$ReferenceClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceName());
            return j2p(value);
          }

          static PyObject *t_RinexClock$ReferenceClock_get__startDate(t_RinexClock$ReferenceClock *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getStartDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/FieldOrbitBlender.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbstractFieldTimeInterpolator$InterpolationData.h"
#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldOrbitBlender::class$ = NULL;
      jmethodID *FieldOrbitBlender::mids$ = NULL;
      bool FieldOrbitBlender::live$ = false;

      jclass FieldOrbitBlender::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldOrbitBlender");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ad76cc6d71d07b73] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;Lorg/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator;Lorg/orekit/frames/Frame;)V");
          mids$[mid_interpolate_1f8205afa87236ec] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/orbits/FieldOrbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldOrbitBlender::FieldOrbitBlender(const ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction & a0, const ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_ad76cc6d71d07b73, a0.this$, a1.this$, a2.this$)) {}

      ::org::orekit::orbits::FieldOrbit FieldOrbitBlender::interpolate(const ::org::orekit::time::AbstractFieldTimeInterpolator$InterpolationData & a0) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_interpolate_1f8205afa87236ec], a0.this$));
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
      static PyObject *t_FieldOrbitBlender_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbitBlender_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbitBlender_of_(t_FieldOrbitBlender *self, PyObject *args);
      static int t_FieldOrbitBlender_init_(t_FieldOrbitBlender *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldOrbitBlender_interpolate(t_FieldOrbitBlender *self, PyObject *args);
      static PyObject *t_FieldOrbitBlender_get__parameters_(t_FieldOrbitBlender *self, void *data);
      static PyGetSetDef t_FieldOrbitBlender__fields_[] = {
        DECLARE_GET_FIELD(t_FieldOrbitBlender, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldOrbitBlender__methods_[] = {
        DECLARE_METHOD(t_FieldOrbitBlender, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbitBlender, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbitBlender, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbitBlender, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldOrbitBlender)[] = {
        { Py_tp_methods, t_FieldOrbitBlender__methods_ },
        { Py_tp_init, (void *) t_FieldOrbitBlender_init_ },
        { Py_tp_getset, t_FieldOrbitBlender__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldOrbitBlender)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::AbstractFieldOrbitInterpolator),
        NULL
      };

      DEFINE_TYPE(FieldOrbitBlender, t_FieldOrbitBlender, FieldOrbitBlender);
      PyObject *t_FieldOrbitBlender::wrap_Object(const FieldOrbitBlender& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbitBlender::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbitBlender *self = (t_FieldOrbitBlender *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldOrbitBlender::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbitBlender::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbitBlender *self = (t_FieldOrbitBlender *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldOrbitBlender::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldOrbitBlender), &PY_TYPE_DEF(FieldOrbitBlender), module, "FieldOrbitBlender", 0);
      }

      void t_FieldOrbitBlender::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitBlender), "class_", make_descriptor(FieldOrbitBlender::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitBlender), "wrapfn_", make_descriptor(t_FieldOrbitBlender::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitBlender), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldOrbitBlender_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldOrbitBlender::initializeClass, 1)))
          return NULL;
        return t_FieldOrbitBlender::wrap_Object(FieldOrbitBlender(((t_FieldOrbitBlender *) arg)->object.this$));
      }
      static PyObject *t_FieldOrbitBlender_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldOrbitBlender::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldOrbitBlender_of_(t_FieldOrbitBlender *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldOrbitBlender_init_(t_FieldOrbitBlender *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::frames::Frame a2((jobject) NULL);
        FieldOrbitBlender object((jobject) NULL);

        if (!parseArgs(args, "KKk", ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction::initializeClass, ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$FieldSmoothStepFunction::parameters_, &a1, &p1, ::org::orekit::propagation::analytical::t_FieldAbstractAnalyticalPropagator::parameters_, &a2))
        {
          INT_CALL(object = FieldOrbitBlender(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldOrbitBlender_interpolate(t_FieldOrbitBlender *self, PyObject *args)
      {
        ::org::orekit::time::AbstractFieldTimeInterpolator$InterpolationData a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::orekit::time::AbstractFieldTimeInterpolator$InterpolationData::initializeClass, &a0, &p0, ::org::orekit::time::t_AbstractFieldTimeInterpolator$InterpolationData::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0));
          return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(FieldOrbitBlender), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_FieldOrbitBlender_get__parameters_(t_FieldOrbitBlender *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/HaltonSequenceGenerator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *HaltonSequenceGenerator::class$ = NULL;
      jmethodID *HaltonSequenceGenerator::mids$ = NULL;
      bool HaltonSequenceGenerator::live$ = false;

      jclass HaltonSequenceGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/HaltonSequenceGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_5f0ee0ef02547c61] = env->getMethodID(cls, "<init>", "(I[I[I)V");
          mids$[mid_getNextIndex_55546ef6a647f39b] = env->getMethodID(cls, "getNextIndex", "()I");
          mids$[mid_nextVector_25e1757a36c4dde2] = env->getMethodID(cls, "nextVector", "()[D");
          mids$[mid_skipTo_bb2a44a76ad252f7] = env->getMethodID(cls, "skipTo", "(I)[D");
          mids$[mid_scramble_aad24acd6036a6f1] = env->getMethodID(cls, "scramble", "(IIII)I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HaltonSequenceGenerator::HaltonSequenceGenerator(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      HaltonSequenceGenerator::HaltonSequenceGenerator(jint a0, const JArray< jint > & a1, const JArray< jint > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5f0ee0ef02547c61, a0, a1.this$, a2.this$)) {}

      jint HaltonSequenceGenerator::getNextIndex() const
      {
        return env->callIntMethod(this$, mids$[mid_getNextIndex_55546ef6a647f39b]);
      }

      JArray< jdouble > HaltonSequenceGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_25e1757a36c4dde2]));
      }

      JArray< jdouble > HaltonSequenceGenerator::skipTo(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_skipTo_bb2a44a76ad252f7], a0));
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
      static PyObject *t_HaltonSequenceGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HaltonSequenceGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_HaltonSequenceGenerator_init_(t_HaltonSequenceGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_HaltonSequenceGenerator_getNextIndex(t_HaltonSequenceGenerator *self);
      static PyObject *t_HaltonSequenceGenerator_nextVector(t_HaltonSequenceGenerator *self);
      static PyObject *t_HaltonSequenceGenerator_skipTo(t_HaltonSequenceGenerator *self, PyObject *arg);
      static PyObject *t_HaltonSequenceGenerator_get__nextIndex(t_HaltonSequenceGenerator *self, void *data);
      static PyGetSetDef t_HaltonSequenceGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_HaltonSequenceGenerator, nextIndex),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_HaltonSequenceGenerator__methods_[] = {
        DECLARE_METHOD(t_HaltonSequenceGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HaltonSequenceGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HaltonSequenceGenerator, getNextIndex, METH_NOARGS),
        DECLARE_METHOD(t_HaltonSequenceGenerator, nextVector, METH_NOARGS),
        DECLARE_METHOD(t_HaltonSequenceGenerator, skipTo, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HaltonSequenceGenerator)[] = {
        { Py_tp_methods, t_HaltonSequenceGenerator__methods_ },
        { Py_tp_init, (void *) t_HaltonSequenceGenerator_init_ },
        { Py_tp_getset, t_HaltonSequenceGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HaltonSequenceGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(HaltonSequenceGenerator, t_HaltonSequenceGenerator, HaltonSequenceGenerator);

      void t_HaltonSequenceGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(HaltonSequenceGenerator), &PY_TYPE_DEF(HaltonSequenceGenerator), module, "HaltonSequenceGenerator", 0);
      }

      void t_HaltonSequenceGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HaltonSequenceGenerator), "class_", make_descriptor(HaltonSequenceGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HaltonSequenceGenerator), "wrapfn_", make_descriptor(t_HaltonSequenceGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HaltonSequenceGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HaltonSequenceGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HaltonSequenceGenerator::initializeClass, 1)))
          return NULL;
        return t_HaltonSequenceGenerator::wrap_Object(HaltonSequenceGenerator(((t_HaltonSequenceGenerator *) arg)->object.this$));
      }
      static PyObject *t_HaltonSequenceGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HaltonSequenceGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_HaltonSequenceGenerator_init_(t_HaltonSequenceGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            HaltonSequenceGenerator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = HaltonSequenceGenerator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            JArray< jint > a1((jobject) NULL);
            JArray< jint > a2((jobject) NULL);
            HaltonSequenceGenerator object((jobject) NULL);

            if (!parseArgs(args, "I[I[I", &a0, &a1, &a2))
            {
              INT_CALL(object = HaltonSequenceGenerator(a0, a1, a2));
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

      static PyObject *t_HaltonSequenceGenerator_getNextIndex(t_HaltonSequenceGenerator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNextIndex());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_HaltonSequenceGenerator_nextVector(t_HaltonSequenceGenerator *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.nextVector());
        return result.wrap();
      }

      static PyObject *t_HaltonSequenceGenerator_skipTo(t_HaltonSequenceGenerator *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.skipTo(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "skipTo", arg);
        return NULL;
      }

      static PyObject *t_HaltonSequenceGenerator_get__nextIndex(t_HaltonSequenceGenerator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNextIndex());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Maneuver.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *Maneuver::class$ = NULL;
              jmethodID *Maneuver::mids$ = NULL;
              bool Maneuver::live$ = false;

              jclass Maneuver::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/Maneuver");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getDeltaMass_b74f83833fdad017] = env->getMethodID(cls, "getDeltaMass", "()D");
                  mids$[mid_getDuration_b74f83833fdad017] = env->getMethodID(cls, "getDuration", "()D");
                  mids$[mid_getEpochStart_c325492395d89b24] = env->getMethodID(cls, "getEpochStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getFrame_69d8be1b6b0a1a94] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getTorque_8b724f8b4fdad1a2] = env->getMethodID(cls, "getTorque", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_setDeltaMass_8ba9fe7a847cecad] = env->getMethodID(cls, "setDeltaMass", "(D)V");
                  mids$[mid_setDuration_8ba9fe7a847cecad] = env->getMethodID(cls, "setDuration", "(D)V");
                  mids$[mid_setEpochStart_02135a6ef25adb4b] = env->getMethodID(cls, "setEpochStart", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setFrame_4755133c5c4c59be] = env->getMethodID(cls, "setFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setTorque_d5322b8b512aeb26] = env->getMethodID(cls, "setTorque", "(ID)V");
                  mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Maneuver::Maneuver() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              jdouble Maneuver::getDeltaMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeltaMass_b74f83833fdad017]);
              }

              jdouble Maneuver::getDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDuration_b74f83833fdad017]);
              }

              ::org::orekit::time::AbsoluteDate Maneuver::getEpochStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochStart_c325492395d89b24]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade Maneuver::getFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrame_69d8be1b6b0a1a94]));
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D Maneuver::getTorque() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTorque_8b724f8b4fdad1a2]));
              }

              void Maneuver::setDeltaMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeltaMass_8ba9fe7a847cecad], a0);
              }

              void Maneuver::setDuration(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDuration_8ba9fe7a847cecad], a0);
              }

              void Maneuver::setEpochStart(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochStart_02135a6ef25adb4b], a0.this$);
              }

              void Maneuver::setFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFrame_4755133c5c4c59be], a0.this$);
              }

              void Maneuver::setTorque(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setTorque_d5322b8b512aeb26], a0, a1);
              }

              void Maneuver::validate(jdouble a0) const
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
          namespace adm {
            namespace apm {
              static PyObject *t_Maneuver_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Maneuver_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Maneuver_init_(t_Maneuver *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Maneuver_getDeltaMass(t_Maneuver *self);
              static PyObject *t_Maneuver_getDuration(t_Maneuver *self);
              static PyObject *t_Maneuver_getEpochStart(t_Maneuver *self);
              static PyObject *t_Maneuver_getFrame(t_Maneuver *self);
              static PyObject *t_Maneuver_getTorque(t_Maneuver *self);
              static PyObject *t_Maneuver_setDeltaMass(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setDuration(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setEpochStart(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setFrame(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setTorque(t_Maneuver *self, PyObject *args);
              static PyObject *t_Maneuver_validate(t_Maneuver *self, PyObject *args);
              static PyObject *t_Maneuver_get__deltaMass(t_Maneuver *self, void *data);
              static int t_Maneuver_set__deltaMass(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__duration(t_Maneuver *self, void *data);
              static int t_Maneuver_set__duration(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__epochStart(t_Maneuver *self, void *data);
              static int t_Maneuver_set__epochStart(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__frame(t_Maneuver *self, void *data);
              static int t_Maneuver_set__frame(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__torque(t_Maneuver *self, void *data);
              static PyGetSetDef t_Maneuver__fields_[] = {
                DECLARE_GETSET_FIELD(t_Maneuver, deltaMass),
                DECLARE_GETSET_FIELD(t_Maneuver, duration),
                DECLARE_GETSET_FIELD(t_Maneuver, epochStart),
                DECLARE_GETSET_FIELD(t_Maneuver, frame),
                DECLARE_GET_FIELD(t_Maneuver, torque),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Maneuver__methods_[] = {
                DECLARE_METHOD(t_Maneuver, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Maneuver, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Maneuver, getDeltaMass, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getDuration, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getEpochStart, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getFrame, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getTorque, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, setDeltaMass, METH_O),
                DECLARE_METHOD(t_Maneuver, setDuration, METH_O),
                DECLARE_METHOD(t_Maneuver, setEpochStart, METH_O),
                DECLARE_METHOD(t_Maneuver, setFrame, METH_O),
                DECLARE_METHOD(t_Maneuver, setTorque, METH_VARARGS),
                DECLARE_METHOD(t_Maneuver, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Maneuver)[] = {
                { Py_tp_methods, t_Maneuver__methods_ },
                { Py_tp_init, (void *) t_Maneuver_init_ },
                { Py_tp_getset, t_Maneuver__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Maneuver)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(Maneuver, t_Maneuver, Maneuver);

              void t_Maneuver::install(PyObject *module)
              {
                installType(&PY_TYPE(Maneuver), &PY_TYPE_DEF(Maneuver), module, "Maneuver", 0);
              }

              void t_Maneuver::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "class_", make_descriptor(Maneuver::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "wrapfn_", make_descriptor(t_Maneuver::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Maneuver_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Maneuver::initializeClass, 1)))
                  return NULL;
                return t_Maneuver::wrap_Object(Maneuver(((t_Maneuver *) arg)->object.this$));
              }
              static PyObject *t_Maneuver_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Maneuver::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Maneuver_init_(t_Maneuver *self, PyObject *args, PyObject *kwds)
              {
                Maneuver object((jobject) NULL);

                INT_CALL(object = Maneuver());
                self->object = object;

                return 0;
              }

              static PyObject *t_Maneuver_getDeltaMass(t_Maneuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeltaMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Maneuver_getDuration(t_Maneuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDuration());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Maneuver_getEpochStart(t_Maneuver *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpochStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_Maneuver_getFrame(t_Maneuver *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_Maneuver_getTorque(t_Maneuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getTorque());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_Maneuver_setDeltaMass(t_Maneuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeltaMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeltaMass", arg);
                return NULL;
              }

              static PyObject *t_Maneuver_setDuration(t_Maneuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDuration(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDuration", arg);
                return NULL;
              }

              static PyObject *t_Maneuver_setEpochStart(t_Maneuver *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setEpochStart(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochStart", arg);
                return NULL;
              }

              static PyObject *t_Maneuver_setFrame(t_Maneuver *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFrame", arg);
                return NULL;
              }

              static PyObject *t_Maneuver_setTorque(t_Maneuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setTorque(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTorque", args);
                return NULL;
              }

              static PyObject *t_Maneuver_validate(t_Maneuver *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(Maneuver), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_Maneuver_get__deltaMass(t_Maneuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeltaMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Maneuver_set__deltaMass(t_Maneuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeltaMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deltaMass", arg);
                return -1;
              }

              static PyObject *t_Maneuver_get__duration(t_Maneuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDuration());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Maneuver_set__duration(t_Maneuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDuration(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "duration", arg);
                return -1;
              }

              static PyObject *t_Maneuver_get__epochStart(t_Maneuver *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getEpochStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_Maneuver_set__epochStart(t_Maneuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEpochStart(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochStart", arg);
                return -1;
              }

              static PyObject *t_Maneuver_get__frame(t_Maneuver *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_Maneuver_set__frame(t_Maneuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "frame", arg);
                return -1;
              }

              static PyObject *t_Maneuver_get__torque(t_Maneuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getTorque());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
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
#include "org/hipparchus/stat/descriptive/rank/Min.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/rank/Min.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *Min::class$ = NULL;
          jmethodID *Min::mids$ = NULL;
          bool Min::live$ = false;

          jclass Min::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/Min");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_f4d24389f0be302e] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/rank/Min;)V");
              mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_2d9e5729438c28f1] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/Min;");
              mids$[mid_evaluate_1567a80062adb31b] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_b74f83833fdad017] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_8ba9fe7a847cecad] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Min::Min() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void Min::aggregate(const Min & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_f4d24389f0be302e], a0.this$);
          }

          void Min::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
          }

          Min Min::copy() const
          {
            return Min(env->callObjectMethod(this$, mids$[mid_copy_2d9e5729438c28f1]));
          }

          jdouble Min::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_1567a80062adb31b], a0.this$, a1, a2);
          }

          jlong Min::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
          }

          jdouble Min::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_b74f83833fdad017]);
          }

          void Min::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_8ba9fe7a847cecad], a0);
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
          static PyObject *t_Min_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Min_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Min_init_(t_Min *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Min_aggregate(t_Min *self, PyObject *arg);
          static PyObject *t_Min_clear(t_Min *self, PyObject *args);
          static PyObject *t_Min_copy(t_Min *self, PyObject *args);
          static PyObject *t_Min_evaluate(t_Min *self, PyObject *args);
          static PyObject *t_Min_getN(t_Min *self, PyObject *args);
          static PyObject *t_Min_getResult(t_Min *self, PyObject *args);
          static PyObject *t_Min_increment(t_Min *self, PyObject *args);
          static PyObject *t_Min_get__n(t_Min *self, void *data);
          static PyObject *t_Min_get__result(t_Min *self, void *data);
          static PyGetSetDef t_Min__fields_[] = {
            DECLARE_GET_FIELD(t_Min, n),
            DECLARE_GET_FIELD(t_Min, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Min__methods_[] = {
            DECLARE_METHOD(t_Min, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Min, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Min, aggregate, METH_O),
            DECLARE_METHOD(t_Min, clear, METH_VARARGS),
            DECLARE_METHOD(t_Min, copy, METH_VARARGS),
            DECLARE_METHOD(t_Min, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Min, getN, METH_VARARGS),
            DECLARE_METHOD(t_Min, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Min, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Min)[] = {
            { Py_tp_methods, t_Min__methods_ },
            { Py_tp_init, (void *) t_Min_init_ },
            { Py_tp_getset, t_Min__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Min)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Min, t_Min, Min);

          void t_Min::install(PyObject *module)
          {
            installType(&PY_TYPE(Min), &PY_TYPE_DEF(Min), module, "Min", 0);
          }

          void t_Min::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Min), "class_", make_descriptor(Min::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Min), "wrapfn_", make_descriptor(t_Min::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Min), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Min_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Min::initializeClass, 1)))
              return NULL;
            return t_Min::wrap_Object(Min(((t_Min *) arg)->object.this$));
          }
          static PyObject *t_Min_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Min::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Min_init_(t_Min *self, PyObject *args, PyObject *kwds)
          {
            Min object((jobject) NULL);

            INT_CALL(object = Min());
            self->object = object;

            return 0;
          }

          static PyObject *t_Min_aggregate(t_Min *self, PyObject *arg)
          {
            Min a0((jobject) NULL);

            if (!parseArg(arg, "k", Min::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Min_clear(t_Min *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Min), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Min_copy(t_Min *self, PyObject *args)
          {
            Min result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Min::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Min), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Min_evaluate(t_Min *self, PyObject *args)
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

            return callSuper(PY_TYPE(Min), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Min_getN(t_Min *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Min), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Min_getResult(t_Min *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Min), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Min_increment(t_Min *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Min), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Min_get__n(t_Min *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Min_get__result(t_Min *self, void *data)
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
#include "org/orekit/propagation/AbstractStateCovarianceInterpolator.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/frames/LOFType.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/time/TimeStampedPair.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbstractTimeInterpolator$InterpolationData.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *AbstractStateCovarianceInterpolator::class$ = NULL;
      jmethodID *AbstractStateCovarianceInterpolator::mids$ = NULL;
      bool AbstractStateCovarianceInterpolator::live$ = false;
      jint AbstractStateCovarianceInterpolator::COLUMN_DIM = (jint) 0;
      ::org::orekit::orbits::PositionAngleType *AbstractStateCovarianceInterpolator::DEFAULT_POSITION_ANGLE = NULL;
      jint AbstractStateCovarianceInterpolator::ROW_DIM = (jint) 0;

      jclass AbstractStateCovarianceInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/AbstractStateCovarianceInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_772c854c91c60aaa] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_50c4488e189fba59] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_getOrbitInterpolator_04638ce011c1f261] = env->getMethodID(cls, "getOrbitInterpolator", "()Lorg/orekit/time/TimeInterpolator;");
          mids$[mid_getOutFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getOutFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getOutLOF_f183bcc89f4a1412] = env->getMethodID(cls, "getOutLOF", "()Lorg/orekit/frames/LOFType;");
          mids$[mid_getOutOrbitType_c7d4737d7afca612] = env->getMethodID(cls, "getOutOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getOutPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getOutPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_interpolate_74ea3235d4212fcd] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/time/TimeStampedPair;");
          mids$[mid_computeInterpolatedCovarianceInOrbitFrame_6e94f93e19d6364d] = env->getMethodID(cls, "computeInterpolatedCovarianceInOrbitFrame", "(Ljava/util/List;Lorg/orekit/orbits/Orbit;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_interpolateOrbit_324b5a3a2e7a2f29] = env->getMethodID(cls, "interpolateOrbit", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/List;)Lorg/orekit/orbits/Orbit;");
          mids$[mid_expressCovarianceInDesiredOutput_1344e03f312298d5] = env->getMethodID(cls, "expressCovarianceInDesiredOutput", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;)Lorg/orekit/time/TimeStampedPair;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          COLUMN_DIM = env->getStaticIntField(cls, "COLUMN_DIM");
          DEFAULT_POSITION_ANGLE = new ::org::orekit::orbits::PositionAngleType(env->getStaticObjectField(cls, "DEFAULT_POSITION_ANGLE", "Lorg/orekit/orbits/PositionAngleType;"));
          ROW_DIM = env->getStaticIntField(cls, "ROW_DIM");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractStateCovarianceInterpolator::AbstractStateCovarianceInterpolator(jint a0, jdouble a1, const ::org::orekit::time::TimeInterpolator & a2, const ::org::orekit::frames::LOFType & a3) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_772c854c91c60aaa, a0, a1, a2.this$, a3.this$)) {}

      AbstractStateCovarianceInterpolator::AbstractStateCovarianceInterpolator(jint a0, jdouble a1, const ::org::orekit::time::TimeInterpolator & a2, const ::org::orekit::frames::Frame & a3, const ::org::orekit::orbits::OrbitType & a4, const ::org::orekit::orbits::PositionAngleType & a5) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_50c4488e189fba59, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      ::org::orekit::time::TimeInterpolator AbstractStateCovarianceInterpolator::getOrbitInterpolator() const
      {
        return ::org::orekit::time::TimeInterpolator(env->callObjectMethod(this$, mids$[mid_getOrbitInterpolator_04638ce011c1f261]));
      }

      ::org::orekit::frames::Frame AbstractStateCovarianceInterpolator::getOutFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutFrame_2c51111cc6894ba1]));
      }

      ::org::orekit::frames::LOFType AbstractStateCovarianceInterpolator::getOutLOF() const
      {
        return ::org::orekit::frames::LOFType(env->callObjectMethod(this$, mids$[mid_getOutLOF_f183bcc89f4a1412]));
      }

      ::org::orekit::orbits::OrbitType AbstractStateCovarianceInterpolator::getOutOrbitType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOutOrbitType_c7d4737d7afca612]));
      }

      ::org::orekit::orbits::PositionAngleType AbstractStateCovarianceInterpolator::getOutPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getOutPositionAngleType_c25055891f180348]));
      }

      ::org::orekit::time::TimeStampedPair AbstractStateCovarianceInterpolator::interpolate(const ::org::orekit::time::AbstractTimeInterpolator$InterpolationData & a0) const
      {
        return ::org::orekit::time::TimeStampedPair(env->callObjectMethod(this$, mids$[mid_interpolate_74ea3235d4212fcd], a0.this$));
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
      static PyObject *t_AbstractStateCovarianceInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractStateCovarianceInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractStateCovarianceInterpolator_of_(t_AbstractStateCovarianceInterpolator *self, PyObject *args);
      static int t_AbstractStateCovarianceInterpolator_init_(t_AbstractStateCovarianceInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractStateCovarianceInterpolator_getOrbitInterpolator(t_AbstractStateCovarianceInterpolator *self);
      static PyObject *t_AbstractStateCovarianceInterpolator_getOutFrame(t_AbstractStateCovarianceInterpolator *self);
      static PyObject *t_AbstractStateCovarianceInterpolator_getOutLOF(t_AbstractStateCovarianceInterpolator *self);
      static PyObject *t_AbstractStateCovarianceInterpolator_getOutOrbitType(t_AbstractStateCovarianceInterpolator *self);
      static PyObject *t_AbstractStateCovarianceInterpolator_getOutPositionAngleType(t_AbstractStateCovarianceInterpolator *self);
      static PyObject *t_AbstractStateCovarianceInterpolator_interpolate(t_AbstractStateCovarianceInterpolator *self, PyObject *args);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__orbitInterpolator(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__outFrame(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__outLOF(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__outOrbitType(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__outPositionAngleType(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__parameters_(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyGetSetDef t_AbstractStateCovarianceInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, orbitInterpolator),
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, outFrame),
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, outLOF),
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, outOrbitType),
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, outPositionAngleType),
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractStateCovarianceInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, getOrbitInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, getOutFrame, METH_NOARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, getOutLOF, METH_NOARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, getOutOrbitType, METH_NOARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, getOutPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractStateCovarianceInterpolator)[] = {
        { Py_tp_methods, t_AbstractStateCovarianceInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbstractStateCovarianceInterpolator_init_ },
        { Py_tp_getset, t_AbstractStateCovarianceInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractStateCovarianceInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(AbstractStateCovarianceInterpolator, t_AbstractStateCovarianceInterpolator, AbstractStateCovarianceInterpolator);
      PyObject *t_AbstractStateCovarianceInterpolator::wrap_Object(const AbstractStateCovarianceInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractStateCovarianceInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractStateCovarianceInterpolator *self = (t_AbstractStateCovarianceInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractStateCovarianceInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractStateCovarianceInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractStateCovarianceInterpolator *self = (t_AbstractStateCovarianceInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractStateCovarianceInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractStateCovarianceInterpolator), &PY_TYPE_DEF(AbstractStateCovarianceInterpolator), module, "AbstractStateCovarianceInterpolator", 0);
      }

      void t_AbstractStateCovarianceInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "class_", make_descriptor(AbstractStateCovarianceInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "wrapfn_", make_descriptor(t_AbstractStateCovarianceInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "boxfn_", make_descriptor(boxObject));
        env->getClass(AbstractStateCovarianceInterpolator::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "COLUMN_DIM", make_descriptor(AbstractStateCovarianceInterpolator::COLUMN_DIM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "DEFAULT_POSITION_ANGLE", make_descriptor(::org::orekit::orbits::t_PositionAngleType::wrap_Object(*AbstractStateCovarianceInterpolator::DEFAULT_POSITION_ANGLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "ROW_DIM", make_descriptor(AbstractStateCovarianceInterpolator::ROW_DIM));
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractStateCovarianceInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbstractStateCovarianceInterpolator::wrap_Object(AbstractStateCovarianceInterpolator(((t_AbstractStateCovarianceInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbstractStateCovarianceInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractStateCovarianceInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_of_(t_AbstractStateCovarianceInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractStateCovarianceInterpolator_init_(t_AbstractStateCovarianceInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::time::TimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::LOFType a3((jobject) NULL);
            PyTypeObject **p3;
            AbstractStateCovarianceInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_TimeInterpolator::parameters_, &a3, &p3, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = AbstractStateCovarianceInterpolator(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::time::TimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::Frame a3((jobject) NULL);
            ::org::orekit::orbits::OrbitType a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::orbits::PositionAngleType a5((jobject) NULL);
            PyTypeObject **p5;
            AbstractStateCovarianceInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDKkKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_TimeInterpolator::parameters_, &a3, &a4, &p4, ::org::orekit::orbits::t_OrbitType::parameters_, &a5, &p5, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = AbstractStateCovarianceInterpolator(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_AbstractStateCovarianceInterpolator_getOrbitInterpolator(t_AbstractStateCovarianceInterpolator *self)
      {
        ::org::orekit::time::TimeInterpolator result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitInterpolator());
        return ::org::orekit::time::t_TimeInterpolator::wrap_Object(result, ::org::orekit::orbits::PY_TYPE(Orbit));
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_getOutFrame(t_AbstractStateCovarianceInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_getOutLOF(t_AbstractStateCovarianceInterpolator *self)
      {
        ::org::orekit::frames::LOFType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutLOF());
        return ::org::orekit::frames::t_LOFType::wrap_Object(result);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_getOutOrbitType(t_AbstractStateCovarianceInterpolator *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_getOutPositionAngleType(t_AbstractStateCovarianceInterpolator *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_interpolate(t_AbstractStateCovarianceInterpolator *self, PyObject *args)
      {
        ::org::orekit::time::AbstractTimeInterpolator$InterpolationData a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::TimeStampedPair result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::orekit::time::AbstractTimeInterpolator$InterpolationData::initializeClass, &a0, &p0, ::org::orekit::time::t_AbstractTimeInterpolator$InterpolationData::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0));
          return ::org::orekit::time::t_TimeStampedPair::wrap_Object(result, ::org::orekit::orbits::PY_TYPE(Orbit), ::org::orekit::propagation::PY_TYPE(StateCovariance));
        }

        return callSuper(PY_TYPE(AbstractStateCovarianceInterpolator), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_AbstractStateCovarianceInterpolator_get__parameters_(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_get__orbitInterpolator(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        ::org::orekit::time::TimeInterpolator value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitInterpolator());
        return ::org::orekit::time::t_TimeInterpolator::wrap_Object(value);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_get__outFrame(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_get__outLOF(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        ::org::orekit::frames::LOFType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutLOF());
        return ::org::orekit::frames::t_LOFType::wrap_Object(value);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_get__outOrbitType(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_get__outPositionAngleType(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/PocMethodFacade.h"
#include "org/orekit/files/ccsds/definitions/PocMethodFacade.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/PocMethodType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *PocMethodFacade::class$ = NULL;
          jmethodID *PocMethodFacade::mids$ = NULL;
          bool PocMethodFacade::live$ = false;

          jclass PocMethodFacade::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/PocMethodFacade");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_73a90f8ff776469b] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/PocMethodType;)V");
              mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getType_ba099cb817b72494] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/definitions/PocMethodType;");
              mids$[mid_parse_ea2ca721d8d2bb9a] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/PocMethodFacade;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PocMethodFacade::PocMethodFacade(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::definitions::PocMethodType & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_73a90f8ff776469b, a0.this$, a1.this$)) {}

          ::java::lang::String PocMethodFacade::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
          }

          ::org::orekit::files::ccsds::definitions::PocMethodType PocMethodFacade::getType() const
          {
            return ::org::orekit::files::ccsds::definitions::PocMethodType(env->callObjectMethod(this$, mids$[mid_getType_ba099cb817b72494]));
          }

          PocMethodFacade PocMethodFacade::parse(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return PocMethodFacade(env->callStaticObjectMethod(cls, mids$[mid_parse_ea2ca721d8d2bb9a], a0.this$));
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
        namespace definitions {
          static PyObject *t_PocMethodFacade_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PocMethodFacade_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PocMethodFacade_init_(t_PocMethodFacade *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PocMethodFacade_getName(t_PocMethodFacade *self);
          static PyObject *t_PocMethodFacade_getType(t_PocMethodFacade *self);
          static PyObject *t_PocMethodFacade_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PocMethodFacade_get__name(t_PocMethodFacade *self, void *data);
          static PyObject *t_PocMethodFacade_get__type(t_PocMethodFacade *self, void *data);
          static PyGetSetDef t_PocMethodFacade__fields_[] = {
            DECLARE_GET_FIELD(t_PocMethodFacade, name),
            DECLARE_GET_FIELD(t_PocMethodFacade, type),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PocMethodFacade__methods_[] = {
            DECLARE_METHOD(t_PocMethodFacade, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PocMethodFacade, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PocMethodFacade, getName, METH_NOARGS),
            DECLARE_METHOD(t_PocMethodFacade, getType, METH_NOARGS),
            DECLARE_METHOD(t_PocMethodFacade, parse, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PocMethodFacade)[] = {
            { Py_tp_methods, t_PocMethodFacade__methods_ },
            { Py_tp_init, (void *) t_PocMethodFacade_init_ },
            { Py_tp_getset, t_PocMethodFacade__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PocMethodFacade)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PocMethodFacade, t_PocMethodFacade, PocMethodFacade);

          void t_PocMethodFacade::install(PyObject *module)
          {
            installType(&PY_TYPE(PocMethodFacade), &PY_TYPE_DEF(PocMethodFacade), module, "PocMethodFacade", 0);
          }

          void t_PocMethodFacade::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodFacade), "class_", make_descriptor(PocMethodFacade::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodFacade), "wrapfn_", make_descriptor(t_PocMethodFacade::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodFacade), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PocMethodFacade_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PocMethodFacade::initializeClass, 1)))
              return NULL;
            return t_PocMethodFacade::wrap_Object(PocMethodFacade(((t_PocMethodFacade *) arg)->object.this$));
          }
          static PyObject *t_PocMethodFacade_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PocMethodFacade::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PocMethodFacade_init_(t_PocMethodFacade *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::files::ccsds::definitions::PocMethodType a1((jobject) NULL);
            PyTypeObject **p1;
            PocMethodFacade object((jobject) NULL);

            if (!parseArgs(args, "sK", ::org::orekit::files::ccsds::definitions::PocMethodType::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::definitions::t_PocMethodType::parameters_))
            {
              INT_CALL(object = PocMethodFacade(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PocMethodFacade_getName(t_PocMethodFacade *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_PocMethodFacade_getType(t_PocMethodFacade *self)
          {
            ::org::orekit::files::ccsds::definitions::PocMethodType result((jobject) NULL);
            OBJ_CALL(result = self->object.getType());
            return ::org::orekit::files::ccsds::definitions::t_PocMethodType::wrap_Object(result);
          }

          static PyObject *t_PocMethodFacade_parse(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            PocMethodFacade result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::PocMethodFacade::parse(a0));
              return t_PocMethodFacade::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_PocMethodFacade_get__name(t_PocMethodFacade *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_PocMethodFacade_get__type(t_PocMethodFacade *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::PocMethodType value((jobject) NULL);
            OBJ_CALL(value = self->object.getType());
            return ::org::orekit::files::ccsds::definitions::t_PocMethodType::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/PythonAbstractMeasurementBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PythonAbstractMeasurementBuilder::class$ = NULL;
          jmethodID *PythonAbstractMeasurementBuilder::mids$ = NULL;
          bool PythonAbstractMeasurementBuilder::live$ = false;

          jclass PythonAbstractMeasurementBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PythonAbstractMeasurementBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4f943d9e98868fa9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;[D[D[Lorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_init$_de1f836ff115aa61] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;DD[Lorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_121e4e49170b7802] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/ObservedMeasurement;");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getBaseWeight_25e1757a36c4dde2] = env->getMethodID(cls, "getBaseWeight", "()[D");
              mids$[mid_getEnd_c325492395d89b24] = env->getMethodID(cls, "getEnd", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getNoise_25e1757a36c4dde2] = env->getMethodID(cls, "getNoise", "()[D");
              mids$[mid_getSatellites_eb47c48e4fca882c] = env->getMethodID(cls, "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_getStart_c325492395d89b24] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTheoreticalStandardDeviation_25e1757a36c4dde2] = env->getMethodID(cls, "getTheoreticalStandardDeviation", "()[D");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractMeasurementBuilder::PythonAbstractMeasurementBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< ::org::orekit::estimation::measurements::ObservableSatellite > & a3) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_4f943d9e98868fa9, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          PythonAbstractMeasurementBuilder::PythonAbstractMeasurementBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, jdouble a1, jdouble a2, const JArray< ::org::orekit::estimation::measurements::ObservableSatellite > & a3) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_de1f836ff115aa61, a0.this$, a1, a2, a3.this$)) {}

          void PythonAbstractMeasurementBuilder::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          JArray< jdouble > PythonAbstractMeasurementBuilder::getBaseWeight() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getBaseWeight_25e1757a36c4dde2]));
          }

          ::org::orekit::time::AbsoluteDate PythonAbstractMeasurementBuilder::getEnd() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEnd_c325492395d89b24]));
          }

          JArray< jdouble > PythonAbstractMeasurementBuilder::getNoise() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getNoise_25e1757a36c4dde2]));
          }

          JArray< ::org::orekit::estimation::measurements::ObservableSatellite > PythonAbstractMeasurementBuilder::getSatellites() const
          {
            return JArray< ::org::orekit::estimation::measurements::ObservableSatellite >(env->callObjectMethod(this$, mids$[mid_getSatellites_eb47c48e4fca882c]));
          }

          ::org::orekit::time::AbsoluteDate PythonAbstractMeasurementBuilder::getStart() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_c325492395d89b24]));
          }

          JArray< jdouble > PythonAbstractMeasurementBuilder::getTheoreticalStandardDeviation() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getTheoreticalStandardDeviation_25e1757a36c4dde2]));
          }

          jlong PythonAbstractMeasurementBuilder::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonAbstractMeasurementBuilder::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        namespace generation {
          static PyObject *t_PythonAbstractMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractMeasurementBuilder_of_(t_PythonAbstractMeasurementBuilder *self, PyObject *args);
          static int t_PythonAbstractMeasurementBuilder_init_(t_PythonAbstractMeasurementBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractMeasurementBuilder_finalize(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_getBaseWeight(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_getEnd(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_getNoise(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_getSatellites(t_PythonAbstractMeasurementBuilder *self, PyObject *args);
          static PyObject *t_PythonAbstractMeasurementBuilder_getStart(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_getTheoreticalStandardDeviation(t_PythonAbstractMeasurementBuilder *self);
          static PyObject *t_PythonAbstractMeasurementBuilder_pythonExtension(t_PythonAbstractMeasurementBuilder *self, PyObject *args);
          static jobject JNICALL t_PythonAbstractMeasurementBuilder_build0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonAbstractMeasurementBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__self(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__baseWeight(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__end(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__noise(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__satellites(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__start(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__theoreticalStandardDeviation(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyObject *t_PythonAbstractMeasurementBuilder_get__parameters_(t_PythonAbstractMeasurementBuilder *self, void *data);
          static PyGetSetDef t_PythonAbstractMeasurementBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, baseWeight),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, end),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, noise),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, satellites),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, start),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, theoreticalStandardDeviation),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, self),
            DECLARE_GET_FIELD(t_PythonAbstractMeasurementBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractMeasurementBuilder__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getBaseWeight, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getEnd, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getNoise, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getSatellites, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getStart, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, getTheoreticalStandardDeviation, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractMeasurementBuilder, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMeasurementBuilder)[] = {
            { Py_tp_methods, t_PythonAbstractMeasurementBuilder__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractMeasurementBuilder_init_ },
            { Py_tp_getset, t_PythonAbstractMeasurementBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractMeasurementBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(PythonAbstractMeasurementBuilder, t_PythonAbstractMeasurementBuilder, PythonAbstractMeasurementBuilder);
          PyObject *t_PythonAbstractMeasurementBuilder::wrap_Object(const PythonAbstractMeasurementBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractMeasurementBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractMeasurementBuilder *self = (t_PythonAbstractMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonAbstractMeasurementBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractMeasurementBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractMeasurementBuilder *self = (t_PythonAbstractMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonAbstractMeasurementBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractMeasurementBuilder), &PY_TYPE_DEF(PythonAbstractMeasurementBuilder), module, "PythonAbstractMeasurementBuilder", 1);
          }

          void t_PythonAbstractMeasurementBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurementBuilder), "class_", make_descriptor(PythonAbstractMeasurementBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurementBuilder), "wrapfn_", make_descriptor(t_PythonAbstractMeasurementBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurementBuilder), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractMeasurementBuilder::initializeClass);
            JNINativeMethod methods[] = {
              { "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/ObservedMeasurement;", (void *) t_PythonAbstractMeasurementBuilder_build0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractMeasurementBuilder_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractMeasurementBuilder::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractMeasurementBuilder::wrap_Object(PythonAbstractMeasurementBuilder(((t_PythonAbstractMeasurementBuilder *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractMeasurementBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_of_(t_PythonAbstractMeasurementBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonAbstractMeasurementBuilder_init_(t_PythonAbstractMeasurementBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                JArray< ::org::orekit::estimation::measurements::ObservableSatellite > a3((jobject) NULL);
                PythonAbstractMeasurementBuilder object((jobject) NULL);

                if (!parseArgs(args, "k[D[D[k", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = PythonAbstractMeasurementBuilder(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                JArray< ::org::orekit::estimation::measurements::ObservableSatellite > a3((jobject) NULL);
                PythonAbstractMeasurementBuilder object((jobject) NULL);

                if (!parseArgs(args, "kDD[k", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = PythonAbstractMeasurementBuilder(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
             default:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_finalize(t_PythonAbstractMeasurementBuilder *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getBaseWeight(t_PythonAbstractMeasurementBuilder *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getBaseWeight());
            return result.wrap();
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getEnd(t_PythonAbstractMeasurementBuilder *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getEnd());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getNoise(t_PythonAbstractMeasurementBuilder *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getNoise());
            return result.wrap();
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getSatellites(t_PythonAbstractMeasurementBuilder *self, PyObject *args)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getSatellites());
              return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
            }

            return callSuper(PY_TYPE(PythonAbstractMeasurementBuilder), (PyObject *) self, "getSatellites", args, 2);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getStart(t_PythonAbstractMeasurementBuilder *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getStart());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_getTheoreticalStandardDeviation(t_PythonAbstractMeasurementBuilder *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getTheoreticalStandardDeviation());
            return result.wrap();
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_pythonExtension(t_PythonAbstractMeasurementBuilder *self, PyObject *args)
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

          static jobject JNICALL t_PythonAbstractMeasurementBuilder_build0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMeasurementBuilder::mids$[PythonAbstractMeasurementBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::estimation::measurements::ObservedMeasurement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::java::util::t_Map::wrap_Object(::java::util::Map(a1));
            PyObject *result = PyObject_CallMethod(obj, "build", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &value))
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

          static void JNICALL t_PythonAbstractMeasurementBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMeasurementBuilder::mids$[PythonAbstractMeasurementBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractMeasurementBuilder::mids$[PythonAbstractMeasurementBuilder::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__self(t_PythonAbstractMeasurementBuilder *self, void *data)
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
          static PyObject *t_PythonAbstractMeasurementBuilder_get__parameters_(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__baseWeight(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getBaseWeight());
            return value.wrap();
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__end(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getEnd());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__noise(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getNoise());
            return value.wrap();
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__satellites(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellites());
            return JArray<jobject>(value.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__start(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getStart());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_PythonAbstractMeasurementBuilder_get__theoreticalStandardDeviation(t_PythonAbstractMeasurementBuilder *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getTheoreticalStandardDeviation());
            return value.wrap();
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/HatchFilter.h"
#include "java/util/ArrayList.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *HatchFilter::class$ = NULL;
          jmethodID *HatchFilter::mids$ = NULL;
          bool HatchFilter::live$ = false;

          jclass HatchFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/HatchFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addToCodeHistory_8ba9fe7a847cecad] = env->getMethodID(cls, "addToCodeHistory", "(D)V");
              mids$[mid_addToSmoothedCodeHistory_8ba9fe7a847cecad] = env->getMethodID(cls, "addToSmoothedCodeHistory", "(D)V");
              mids$[mid_getCodeHistory_664cae6eaa0e211a] = env->getMethodID(cls, "getCodeHistory", "()Ljava/util/ArrayList;");
              mids$[mid_getSmoothedCodeHistory_664cae6eaa0e211a] = env->getMethodID(cls, "getSmoothedCodeHistory", "()Ljava/util/ArrayList;");
              mids$[mid_getThreshold_b74f83833fdad017] = env->getMethodID(cls, "getThreshold", "()D");
              mids$[mid_resetFilterNext_8ba9fe7a847cecad] = env->getMethodID(cls, "resetFilterNext", "(D)V");
              mids$[mid_updatePreviousSmoothedCode_8ba9fe7a847cecad] = env->getMethodID(cls, "updatePreviousSmoothedCode", "(D)V");
              mids$[mid_updatePreviousSmoothingValue_8ba9fe7a847cecad] = env->getMethodID(cls, "updatePreviousSmoothingValue", "(D)V");
              mids$[mid_resetNextBoolean_a1fa5dae97ea5ed2] = env->getMethodID(cls, "resetNextBoolean", "()V");
              mids$[mid_resetK_a1fa5dae97ea5ed2] = env->getMethodID(cls, "resetK", "()V");
              mids$[mid_smoothedCode_99e3200dafc19573] = env->getMethodID(cls, "smoothedCode", "(DD)D");
              mids$[mid_checkValidData_2a725fb08324ea4e] = env->getMethodID(cls, "checkValidData", "(DDZ)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void HatchFilter::addToCodeHistory(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addToCodeHistory_8ba9fe7a847cecad], a0);
          }

          void HatchFilter::addToSmoothedCodeHistory(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addToSmoothedCodeHistory_8ba9fe7a847cecad], a0);
          }

          ::java::util::ArrayList HatchFilter::getCodeHistory() const
          {
            return ::java::util::ArrayList(env->callObjectMethod(this$, mids$[mid_getCodeHistory_664cae6eaa0e211a]));
          }

          ::java::util::ArrayList HatchFilter::getSmoothedCodeHistory() const
          {
            return ::java::util::ArrayList(env->callObjectMethod(this$, mids$[mid_getSmoothedCodeHistory_664cae6eaa0e211a]));
          }

          jdouble HatchFilter::getThreshold() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getThreshold_b74f83833fdad017]);
          }

          void HatchFilter::resetFilterNext(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetFilterNext_8ba9fe7a847cecad], a0);
          }

          void HatchFilter::updatePreviousSmoothedCode(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_updatePreviousSmoothedCode_8ba9fe7a847cecad], a0);
          }

          void HatchFilter::updatePreviousSmoothingValue(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_updatePreviousSmoothingValue_8ba9fe7a847cecad], a0);
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
          static PyObject *t_HatchFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HatchFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HatchFilter_addToCodeHistory(t_HatchFilter *self, PyObject *arg);
          static PyObject *t_HatchFilter_addToSmoothedCodeHistory(t_HatchFilter *self, PyObject *arg);
          static PyObject *t_HatchFilter_getCodeHistory(t_HatchFilter *self);
          static PyObject *t_HatchFilter_getSmoothedCodeHistory(t_HatchFilter *self);
          static PyObject *t_HatchFilter_getThreshold(t_HatchFilter *self);
          static PyObject *t_HatchFilter_resetFilterNext(t_HatchFilter *self, PyObject *arg);
          static PyObject *t_HatchFilter_updatePreviousSmoothedCode(t_HatchFilter *self, PyObject *arg);
          static PyObject *t_HatchFilter_updatePreviousSmoothingValue(t_HatchFilter *self, PyObject *arg);
          static PyObject *t_HatchFilter_get__codeHistory(t_HatchFilter *self, void *data);
          static PyObject *t_HatchFilter_get__smoothedCodeHistory(t_HatchFilter *self, void *data);
          static PyObject *t_HatchFilter_get__threshold(t_HatchFilter *self, void *data);
          static PyGetSetDef t_HatchFilter__fields_[] = {
            DECLARE_GET_FIELD(t_HatchFilter, codeHistory),
            DECLARE_GET_FIELD(t_HatchFilter, smoothedCodeHistory),
            DECLARE_GET_FIELD(t_HatchFilter, threshold),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_HatchFilter__methods_[] = {
            DECLARE_METHOD(t_HatchFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HatchFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HatchFilter, addToCodeHistory, METH_O),
            DECLARE_METHOD(t_HatchFilter, addToSmoothedCodeHistory, METH_O),
            DECLARE_METHOD(t_HatchFilter, getCodeHistory, METH_NOARGS),
            DECLARE_METHOD(t_HatchFilter, getSmoothedCodeHistory, METH_NOARGS),
            DECLARE_METHOD(t_HatchFilter, getThreshold, METH_NOARGS),
            DECLARE_METHOD(t_HatchFilter, resetFilterNext, METH_O),
            DECLARE_METHOD(t_HatchFilter, updatePreviousSmoothedCode, METH_O),
            DECLARE_METHOD(t_HatchFilter, updatePreviousSmoothingValue, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HatchFilter)[] = {
            { Py_tp_methods, t_HatchFilter__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_HatchFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HatchFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(HatchFilter, t_HatchFilter, HatchFilter);

          void t_HatchFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(HatchFilter), &PY_TYPE_DEF(HatchFilter), module, "HatchFilter", 0);
          }

          void t_HatchFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HatchFilter), "class_", make_descriptor(HatchFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HatchFilter), "wrapfn_", make_descriptor(t_HatchFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HatchFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_HatchFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HatchFilter::initializeClass, 1)))
              return NULL;
            return t_HatchFilter::wrap_Object(HatchFilter(((t_HatchFilter *) arg)->object.this$));
          }
          static PyObject *t_HatchFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HatchFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_HatchFilter_addToCodeHistory(t_HatchFilter *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.addToCodeHistory(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addToCodeHistory", arg);
            return NULL;
          }

          static PyObject *t_HatchFilter_addToSmoothedCodeHistory(t_HatchFilter *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.addToSmoothedCodeHistory(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addToSmoothedCodeHistory", arg);
            return NULL;
          }

          static PyObject *t_HatchFilter_getCodeHistory(t_HatchFilter *self)
          {
            ::java::util::ArrayList result((jobject) NULL);
            OBJ_CALL(result = self->object.getCodeHistory());
            return ::java::util::t_ArrayList::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_HatchFilter_getSmoothedCodeHistory(t_HatchFilter *self)
          {
            ::java::util::ArrayList result((jobject) NULL);
            OBJ_CALL(result = self->object.getSmoothedCodeHistory());
            return ::java::util::t_ArrayList::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_HatchFilter_getThreshold(t_HatchFilter *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getThreshold());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_HatchFilter_resetFilterNext(t_HatchFilter *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.resetFilterNext(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "resetFilterNext", arg);
            return NULL;
          }

          static PyObject *t_HatchFilter_updatePreviousSmoothedCode(t_HatchFilter *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.updatePreviousSmoothedCode(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "updatePreviousSmoothedCode", arg);
            return NULL;
          }

          static PyObject *t_HatchFilter_updatePreviousSmoothingValue(t_HatchFilter *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.updatePreviousSmoothingValue(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "updatePreviousSmoothingValue", arg);
            return NULL;
          }

          static PyObject *t_HatchFilter_get__codeHistory(t_HatchFilter *self, void *data)
          {
            ::java::util::ArrayList value((jobject) NULL);
            OBJ_CALL(value = self->object.getCodeHistory());
            return ::java::util::t_ArrayList::wrap_Object(value);
          }

          static PyObject *t_HatchFilter_get__smoothedCodeHistory(t_HatchFilter *self, void *data)
          {
            ::java::util::ArrayList value((jobject) NULL);
            OBJ_CALL(value = self->object.getSmoothedCodeHistory());
            return ::java::util::t_ArrayList::wrap_Object(value);
          }

          static PyObject *t_HatchFilter_get__threshold(t_HatchFilter *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getThreshold());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/util/List.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/complex/ComplexField.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *Complex::class$ = NULL;
      jmethodID *Complex::mids$ = NULL;
      bool Complex::live$ = false;
      Complex *Complex::I = NULL;
      Complex *Complex::INF = NULL;
      Complex *Complex::MINUS_I = NULL;
      Complex *Complex::MINUS_ONE = NULL;
      Complex *Complex::NaN = NULL;
      Complex *Complex::ONE = NULL;
      Complex *Complex::PI = NULL;
      Complex *Complex::ZERO = NULL;

      jclass Complex::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/Complex");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_abs_2f0868cbf8c045d4] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_acos_2f0868cbf8c045d4] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_acosh_2f0868cbf8c045d4] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_add_79e1cb20a2d72b1b] = env->getMethodID(cls, "add", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_add_ecb7aa6c69661c2d] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_asin_2f0868cbf8c045d4] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_asinh_2f0868cbf8c045d4] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_atan_2f0868cbf8c045d4] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_atan2_79e1cb20a2d72b1b] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_atanh_2f0868cbf8c045d4] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_cbrt_2f0868cbf8c045d4] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_ceil_2f0868cbf8c045d4] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_compareTo_a70b43c9dfe4a3cf] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/complex/Complex;)I");
          mids$[mid_conjugate_2f0868cbf8c045d4] = env->getMethodID(cls, "conjugate", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_copySign_79e1cb20a2d72b1b] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_copySign_ecb7aa6c69661c2d] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_cos_2f0868cbf8c045d4] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_cosh_2f0868cbf8c045d4] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_divide_79e1cb20a2d72b1b] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_divide_ecb7aa6c69661c2d] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_equals_77d2d724d5d71872] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Z");
          mids$[mid_equals_3758db5964a6b10b] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;D)Z");
          mids$[mid_equals_99bc12c8f70013a5] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;I)Z");
          mids$[mid_equalsWithRelativeTolerance_3758db5964a6b10b] = env->getStaticMethodID(cls, "equalsWithRelativeTolerance", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;D)Z");
          mids$[mid_exp_2f0868cbf8c045d4] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_expm1_2f0868cbf8c045d4] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_floor_2f0868cbf8c045d4] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_getArgument_b74f83833fdad017] = env->getMethodID(cls, "getArgument", "()D");
          mids$[mid_getField_74589e1538dd146b] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/complex/ComplexField;");
          mids$[mid_getImaginary_b74f83833fdad017] = env->getMethodID(cls, "getImaginary", "()D");
          mids$[mid_getImaginaryPart_b74f83833fdad017] = env->getMethodID(cls, "getImaginaryPart", "()D");
          mids$[mid_getPi_2f0868cbf8c045d4] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_getReal_b74f83833fdad017] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getRealPart_b74f83833fdad017] = env->getMethodID(cls, "getRealPart", "()D");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_79e1cb20a2d72b1b] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_isInfinite_9ab94ac1dc23b105] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isMathematicalInteger_9ab94ac1dc23b105] = env->getMethodID(cls, "isMathematicalInteger", "()Z");
          mids$[mid_isNaN_9ab94ac1dc23b105] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_isReal_9ab94ac1dc23b105] = env->getMethodID(cls, "isReal", "()Z");
          mids$[mid_isZero_9ab94ac1dc23b105] = env->getMethodID(cls, "isZero", "()Z");
          mids$[mid_linearCombination_0c26494d592bd8b5] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_a5dc3f219313d09e] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_08e384c3474bdd1c] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_86872242b0eed80b] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_96b75d8a2ee5e1ae] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_96c46bce0c7550fb] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_a50e8f12c77e88f2] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_14c924fe18af6773] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_log_2f0868cbf8c045d4] = env->getMethodID(cls, "log", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_log10_2f0868cbf8c045d4] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_log1p_2f0868cbf8c045d4] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_multiply_79e1cb20a2d72b1b] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_multiply_ecb7aa6c69661c2d] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_multiply_98a65fafe34db74b] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/complex/Complex;");
          mids$[mid_multiplyMinusI_2f0868cbf8c045d4] = env->getMethodID(cls, "multiplyMinusI", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_multiplyPlusI_2f0868cbf8c045d4] = env->getMethodID(cls, "multiplyPlusI", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_negate_2f0868cbf8c045d4] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_newInstance_ecb7aa6c69661c2d] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_norm_b74f83833fdad017] = env->getMethodID(cls, "norm", "()D");
          mids$[mid_nthRoot_f8cea93815fe5eaa] = env->getMethodID(cls, "nthRoot", "(I)Ljava/util/List;");
          mids$[mid_pow_79e1cb20a2d72b1b] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_pow_ecb7aa6c69661c2d] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_pow_98a65fafe34db74b] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/complex/Complex;");
          mids$[mid_reciprocal_2f0868cbf8c045d4] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_remainder_79e1cb20a2d72b1b] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_remainder_ecb7aa6c69661c2d] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_rint_2f0868cbf8c045d4] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_rootN_98a65fafe34db74b] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/complex/Complex;");
          mids$[mid_scalb_98a65fafe34db74b] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/complex/Complex;");
          mids$[mid_sign_2f0868cbf8c045d4] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_sin_2f0868cbf8c045d4] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_sinCos_e434dd780193da2f] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_2f0868cbf8c045d4] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_sinhCosh_4a1e2142f3481995] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_2f0868cbf8c045d4] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_sqrt1z_2f0868cbf8c045d4] = env->getMethodID(cls, "sqrt1z", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_subtract_79e1cb20a2d72b1b] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_subtract_ecb7aa6c69661c2d] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_tan_2f0868cbf8c045d4] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_tanh_2f0868cbf8c045d4] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_toDegrees_2f0868cbf8c045d4] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_toRadians_2f0868cbf8c045d4] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_ulp_2f0868cbf8c045d4] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_valueOf_ecb7aa6c69661c2d] = env->getStaticMethodID(cls, "valueOf", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_valueOf_f8506c9007df888f] = env->getStaticMethodID(cls, "valueOf", "(DD)Lorg/hipparchus/complex/Complex;");
          mids$[mid_createComplex_f8506c9007df888f] = env->getMethodID(cls, "createComplex", "(DD)Lorg/hipparchus/complex/Complex;");
          mids$[mid_readResolve_541690f9ee81d3ad] = env->getMethodID(cls, "readResolve", "()Ljava/lang/Object;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          I = new Complex(env->getStaticObjectField(cls, "I", "Lorg/hipparchus/complex/Complex;"));
          INF = new Complex(env->getStaticObjectField(cls, "INF", "Lorg/hipparchus/complex/Complex;"));
          MINUS_I = new Complex(env->getStaticObjectField(cls, "MINUS_I", "Lorg/hipparchus/complex/Complex;"));
          MINUS_ONE = new Complex(env->getStaticObjectField(cls, "MINUS_ONE", "Lorg/hipparchus/complex/Complex;"));
          NaN = new Complex(env->getStaticObjectField(cls, "NaN", "Lorg/hipparchus/complex/Complex;"));
          ONE = new Complex(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/complex/Complex;"));
          PI = new Complex(env->getStaticObjectField(cls, "PI", "Lorg/hipparchus/complex/Complex;"));
          ZERO = new Complex(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/complex/Complex;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Complex::Complex(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

      Complex::Complex(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

      Complex Complex::abs() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_abs_2f0868cbf8c045d4]));
      }

      Complex Complex::acos() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_acos_2f0868cbf8c045d4]));
      }

      Complex Complex::acosh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_acosh_2f0868cbf8c045d4]));
      }

      Complex Complex::add(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_add_79e1cb20a2d72b1b], a0.this$));
      }

      Complex Complex::add(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_add_ecb7aa6c69661c2d], a0));
      }

      Complex Complex::asin() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_asin_2f0868cbf8c045d4]));
      }

      Complex Complex::asinh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_asinh_2f0868cbf8c045d4]));
      }

      Complex Complex::atan() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_atan_2f0868cbf8c045d4]));
      }

      Complex Complex::atan2(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_atan2_79e1cb20a2d72b1b], a0.this$));
      }

      Complex Complex::atanh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_atanh_2f0868cbf8c045d4]));
      }

      Complex Complex::cbrt() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_cbrt_2f0868cbf8c045d4]));
      }

      Complex Complex::ceil() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_ceil_2f0868cbf8c045d4]));
      }

      jint Complex::compareTo(const Complex & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_a70b43c9dfe4a3cf], a0.this$);
      }

      Complex Complex::conjugate() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_conjugate_2f0868cbf8c045d4]));
      }

      Complex Complex::copySign(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_copySign_79e1cb20a2d72b1b], a0.this$));
      }

      Complex Complex::copySign(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_copySign_ecb7aa6c69661c2d], a0));
      }

      Complex Complex::cos() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_cos_2f0868cbf8c045d4]));
      }

      Complex Complex::cosh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_cosh_2f0868cbf8c045d4]));
      }

      Complex Complex::divide(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_divide_79e1cb20a2d72b1b], a0.this$));
      }

      Complex Complex::divide(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_divide_ecb7aa6c69661c2d], a0));
      }

      jboolean Complex::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      jboolean Complex::equals(const Complex & a0, const Complex & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_77d2d724d5d71872], a0.this$, a1.this$);
      }

      jboolean Complex::equals(const Complex & a0, const Complex & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_3758db5964a6b10b], a0.this$, a1.this$, a2);
      }

      jboolean Complex::equals(const Complex & a0, const Complex & a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_99bc12c8f70013a5], a0.this$, a1.this$, a2);
      }

      jboolean Complex::equalsWithRelativeTolerance(const Complex & a0, const Complex & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsWithRelativeTolerance_3758db5964a6b10b], a0.this$, a1.this$, a2);
      }

      Complex Complex::exp() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_exp_2f0868cbf8c045d4]));
      }

      Complex Complex::expm1() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_expm1_2f0868cbf8c045d4]));
      }

      Complex Complex::floor() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_floor_2f0868cbf8c045d4]));
      }

      jdouble Complex::getArgument() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getArgument_b74f83833fdad017]);
      }

      ::org::hipparchus::complex::ComplexField Complex::getField() const
      {
        return ::org::hipparchus::complex::ComplexField(env->callObjectMethod(this$, mids$[mid_getField_74589e1538dd146b]));
      }

      jdouble Complex::getImaginary() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getImaginary_b74f83833fdad017]);
      }

      jdouble Complex::getImaginaryPart() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getImaginaryPart_b74f83833fdad017]);
      }

      Complex Complex::getPi() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_getPi_2f0868cbf8c045d4]));
      }

      jdouble Complex::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_b74f83833fdad017]);
      }

      jdouble Complex::getRealPart() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRealPart_b74f83833fdad017]);
      }

      jint Complex::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      Complex Complex::hypot(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_hypot_79e1cb20a2d72b1b], a0.this$));
      }

      jboolean Complex::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_9ab94ac1dc23b105]);
      }

      jboolean Complex::isMathematicalInteger() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isMathematicalInteger_9ab94ac1dc23b105]);
      }

      jboolean Complex::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_9ab94ac1dc23b105]);
      }

      jboolean Complex::isReal() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isReal_9ab94ac1dc23b105]);
      }

      jboolean Complex::isZero() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isZero_9ab94ac1dc23b105]);
      }

      Complex Complex::linearCombination(const JArray< jdouble > & a0, const JArray< Complex > & a1) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_0c26494d592bd8b5], a0.this$, a1.this$));
      }

      Complex Complex::linearCombination(const JArray< Complex > & a0, const JArray< Complex > & a1) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_a5dc3f219313d09e], a0.this$, a1.this$));
      }

      Complex Complex::linearCombination(const Complex & a0, const Complex & a1, const Complex & a2, const Complex & a3) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_08e384c3474bdd1c], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      Complex Complex::linearCombination(jdouble a0, const Complex & a1, jdouble a2, const Complex & a3) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_86872242b0eed80b], a0, a1.this$, a2, a3.this$));
      }

      Complex Complex::linearCombination(const Complex & a0, const Complex & a1, const Complex & a2, const Complex & a3, const Complex & a4, const Complex & a5) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_96b75d8a2ee5e1ae], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      Complex Complex::linearCombination(jdouble a0, const Complex & a1, jdouble a2, const Complex & a3, jdouble a4, const Complex & a5) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_96c46bce0c7550fb], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      Complex Complex::linearCombination(const Complex & a0, const Complex & a1, const Complex & a2, const Complex & a3, const Complex & a4, const Complex & a5, const Complex & a6, const Complex & a7) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_a50e8f12c77e88f2], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      Complex Complex::linearCombination(jdouble a0, const Complex & a1, jdouble a2, const Complex & a3, jdouble a4, const Complex & a5, jdouble a6, const Complex & a7) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_14c924fe18af6773], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      Complex Complex::log() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_log_2f0868cbf8c045d4]));
      }

      Complex Complex::log10() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_log10_2f0868cbf8c045d4]));
      }

      Complex Complex::log1p() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_log1p_2f0868cbf8c045d4]));
      }

      Complex Complex::multiply(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_multiply_79e1cb20a2d72b1b], a0.this$));
      }

      Complex Complex::multiply(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_multiply_ecb7aa6c69661c2d], a0));
      }

      Complex Complex::multiply(jint a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_multiply_98a65fafe34db74b], a0));
      }

      Complex Complex::multiplyMinusI() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_multiplyMinusI_2f0868cbf8c045d4]));
      }

      Complex Complex::multiplyPlusI() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_multiplyPlusI_2f0868cbf8c045d4]));
      }

      Complex Complex::negate() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_negate_2f0868cbf8c045d4]));
      }

      Complex Complex::newInstance(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_newInstance_ecb7aa6c69661c2d], a0));
      }

      jdouble Complex::norm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_norm_b74f83833fdad017]);
      }

      ::java::util::List Complex::nthRoot(jint a0) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_nthRoot_f8cea93815fe5eaa], a0));
      }

      Complex Complex::pow(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_pow_79e1cb20a2d72b1b], a0.this$));
      }

      Complex Complex::pow(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_pow_ecb7aa6c69661c2d], a0));
      }

      Complex Complex::pow(jint a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_pow_98a65fafe34db74b], a0));
      }

      Complex Complex::reciprocal() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_reciprocal_2f0868cbf8c045d4]));
      }

      Complex Complex::remainder(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_remainder_79e1cb20a2d72b1b], a0.this$));
      }

      Complex Complex::remainder(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_remainder_ecb7aa6c69661c2d], a0));
      }

      Complex Complex::rint() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_rint_2f0868cbf8c045d4]));
      }

      Complex Complex::rootN(jint a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_rootN_98a65fafe34db74b], a0));
      }

      Complex Complex::scalb(jint a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_scalb_98a65fafe34db74b], a0));
      }

      Complex Complex::sign() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_sign_2f0868cbf8c045d4]));
      }

      Complex Complex::sin() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_sin_2f0868cbf8c045d4]));
      }

      ::org::hipparchus::util::FieldSinCos Complex::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_e434dd780193da2f]));
      }

      Complex Complex::sinh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_sinh_2f0868cbf8c045d4]));
      }

      ::org::hipparchus::util::FieldSinhCosh Complex::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_4a1e2142f3481995]));
      }

      Complex Complex::sqrt() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_sqrt_2f0868cbf8c045d4]));
      }

      Complex Complex::sqrt1z() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_sqrt1z_2f0868cbf8c045d4]));
      }

      Complex Complex::subtract(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_subtract_79e1cb20a2d72b1b], a0.this$));
      }

      Complex Complex::subtract(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_subtract_ecb7aa6c69661c2d], a0));
      }

      Complex Complex::tan() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_tan_2f0868cbf8c045d4]));
      }

      Complex Complex::tanh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_tanh_2f0868cbf8c045d4]));
      }

      Complex Complex::toDegrees() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_toDegrees_2f0868cbf8c045d4]));
      }

      Complex Complex::toRadians() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_toRadians_2f0868cbf8c045d4]));
      }

      ::java::lang::String Complex::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }

      Complex Complex::ulp() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_ulp_2f0868cbf8c045d4]));
      }

      Complex Complex::valueOf(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Complex(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ecb7aa6c69661c2d], a0));
      }

      Complex Complex::valueOf(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Complex(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f8506c9007df888f], a0, a1));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      static PyObject *t_Complex_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Complex_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Complex_init_(t_Complex *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Complex_abs(t_Complex *self);
      static PyObject *t_Complex_acos(t_Complex *self);
      static PyObject *t_Complex_acosh(t_Complex *self);
      static PyObject *t_Complex_add(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_asin(t_Complex *self);
      static PyObject *t_Complex_asinh(t_Complex *self);
      static PyObject *t_Complex_atan(t_Complex *self);
      static PyObject *t_Complex_atan2(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_atanh(t_Complex *self);
      static PyObject *t_Complex_cbrt(t_Complex *self);
      static PyObject *t_Complex_ceil(t_Complex *self);
      static PyObject *t_Complex_compareTo(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_conjugate(t_Complex *self);
      static PyObject *t_Complex_copySign(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_cos(t_Complex *self);
      static PyObject *t_Complex_cosh(t_Complex *self);
      static PyObject *t_Complex_divide(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_equals(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_equalsWithRelativeTolerance(PyTypeObject *type, PyObject *args);
      static PyObject *t_Complex_equals_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Complex_exp(t_Complex *self);
      static PyObject *t_Complex_expm1(t_Complex *self);
      static PyObject *t_Complex_floor(t_Complex *self);
      static PyObject *t_Complex_getArgument(t_Complex *self);
      static PyObject *t_Complex_getField(t_Complex *self);
      static PyObject *t_Complex_getImaginary(t_Complex *self);
      static PyObject *t_Complex_getImaginaryPart(t_Complex *self);
      static PyObject *t_Complex_getPi(t_Complex *self);
      static PyObject *t_Complex_getReal(t_Complex *self);
      static PyObject *t_Complex_getRealPart(t_Complex *self);
      static PyObject *t_Complex_hashCode(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_hypot(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_isInfinite(t_Complex *self);
      static PyObject *t_Complex_isMathematicalInteger(t_Complex *self);
      static PyObject *t_Complex_isNaN(t_Complex *self);
      static PyObject *t_Complex_isReal(t_Complex *self);
      static PyObject *t_Complex_isZero(t_Complex *self);
      static PyObject *t_Complex_linearCombination(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_log(t_Complex *self);
      static PyObject *t_Complex_log10(t_Complex *self);
      static PyObject *t_Complex_log1p(t_Complex *self);
      static PyObject *t_Complex_multiply(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_multiplyMinusI(t_Complex *self);
      static PyObject *t_Complex_multiplyPlusI(t_Complex *self);
      static PyObject *t_Complex_negate(t_Complex *self);
      static PyObject *t_Complex_newInstance(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_norm(t_Complex *self);
      static PyObject *t_Complex_nthRoot(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_pow(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_reciprocal(t_Complex *self);
      static PyObject *t_Complex_remainder(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_rint(t_Complex *self);
      static PyObject *t_Complex_rootN(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_scalb(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_sign(t_Complex *self);
      static PyObject *t_Complex_sin(t_Complex *self);
      static PyObject *t_Complex_sinCos(t_Complex *self);
      static PyObject *t_Complex_sinh(t_Complex *self);
      static PyObject *t_Complex_sinhCosh(t_Complex *self);
      static PyObject *t_Complex_sqrt(t_Complex *self);
      static PyObject *t_Complex_sqrt1z(t_Complex *self);
      static PyObject *t_Complex_subtract(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_tan(t_Complex *self);
      static PyObject *t_Complex_tanh(t_Complex *self);
      static PyObject *t_Complex_toDegrees(t_Complex *self);
      static PyObject *t_Complex_toRadians(t_Complex *self);
      static PyObject *t_Complex_toString(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_ulp(t_Complex *self);
      static PyObject *t_Complex_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_Complex_get__argument(t_Complex *self, void *data);
      static PyObject *t_Complex_get__field(t_Complex *self, void *data);
      static PyObject *t_Complex_get__imaginary(t_Complex *self, void *data);
      static PyObject *t_Complex_get__imaginaryPart(t_Complex *self, void *data);
      static PyObject *t_Complex_get__infinite(t_Complex *self, void *data);
      static PyObject *t_Complex_get__mathematicalInteger(t_Complex *self, void *data);
      static PyObject *t_Complex_get__naN(t_Complex *self, void *data);
      static PyObject *t_Complex_get__pi(t_Complex *self, void *data);
      static PyObject *t_Complex_get__real(t_Complex *self, void *data);
      static PyObject *t_Complex_get__realPart(t_Complex *self, void *data);
      static PyObject *t_Complex_get__zero(t_Complex *self, void *data);
      static PyGetSetDef t_Complex__fields_[] = {
        DECLARE_GET_FIELD(t_Complex, argument),
        DECLARE_GET_FIELD(t_Complex, field),
        DECLARE_GET_FIELD(t_Complex, imaginary),
        DECLARE_GET_FIELD(t_Complex, imaginaryPart),
        DECLARE_GET_FIELD(t_Complex, infinite),
        DECLARE_GET_FIELD(t_Complex, mathematicalInteger),
        DECLARE_GET_FIELD(t_Complex, naN),
        DECLARE_GET_FIELD(t_Complex, pi),
        DECLARE_GET_FIELD(t_Complex, real),
        DECLARE_GET_FIELD(t_Complex, realPart),
        DECLARE_GET_FIELD(t_Complex, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Complex__methods_[] = {
        DECLARE_METHOD(t_Complex, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Complex, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Complex, abs, METH_NOARGS),
        DECLARE_METHOD(t_Complex, acos, METH_NOARGS),
        DECLARE_METHOD(t_Complex, acosh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, add, METH_VARARGS),
        DECLARE_METHOD(t_Complex, asin, METH_NOARGS),
        DECLARE_METHOD(t_Complex, asinh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, atan, METH_NOARGS),
        DECLARE_METHOD(t_Complex, atan2, METH_O),
        DECLARE_METHOD(t_Complex, atanh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, cbrt, METH_NOARGS),
        DECLARE_METHOD(t_Complex, ceil, METH_NOARGS),
        DECLARE_METHOD(t_Complex, compareTo, METH_O),
        DECLARE_METHOD(t_Complex, conjugate, METH_NOARGS),
        DECLARE_METHOD(t_Complex, copySign, METH_VARARGS),
        DECLARE_METHOD(t_Complex, cos, METH_NOARGS),
        DECLARE_METHOD(t_Complex, cosh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, divide, METH_VARARGS),
        DECLARE_METHOD(t_Complex, equals, METH_VARARGS),
        DECLARE_METHOD(t_Complex, equalsWithRelativeTolerance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Complex, equals_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Complex, exp, METH_NOARGS),
        DECLARE_METHOD(t_Complex, expm1, METH_NOARGS),
        DECLARE_METHOD(t_Complex, floor, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getArgument, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getField, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getImaginary, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getImaginaryPart, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getPi, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getReal, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getRealPart, METH_NOARGS),
        DECLARE_METHOD(t_Complex, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Complex, hypot, METH_O),
        DECLARE_METHOD(t_Complex, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_Complex, isMathematicalInteger, METH_NOARGS),
        DECLARE_METHOD(t_Complex, isNaN, METH_NOARGS),
        DECLARE_METHOD(t_Complex, isReal, METH_NOARGS),
        DECLARE_METHOD(t_Complex, isZero, METH_NOARGS),
        DECLARE_METHOD(t_Complex, linearCombination, METH_VARARGS),
        DECLARE_METHOD(t_Complex, log, METH_NOARGS),
        DECLARE_METHOD(t_Complex, log10, METH_NOARGS),
        DECLARE_METHOD(t_Complex, log1p, METH_NOARGS),
        DECLARE_METHOD(t_Complex, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Complex, multiplyMinusI, METH_NOARGS),
        DECLARE_METHOD(t_Complex, multiplyPlusI, METH_NOARGS),
        DECLARE_METHOD(t_Complex, negate, METH_NOARGS),
        DECLARE_METHOD(t_Complex, newInstance, METH_O),
        DECLARE_METHOD(t_Complex, norm, METH_NOARGS),
        DECLARE_METHOD(t_Complex, nthRoot, METH_O),
        DECLARE_METHOD(t_Complex, pow, METH_VARARGS),
        DECLARE_METHOD(t_Complex, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_Complex, remainder, METH_VARARGS),
        DECLARE_METHOD(t_Complex, rint, METH_NOARGS),
        DECLARE_METHOD(t_Complex, rootN, METH_O),
        DECLARE_METHOD(t_Complex, scalb, METH_O),
        DECLARE_METHOD(t_Complex, sign, METH_NOARGS),
        DECLARE_METHOD(t_Complex, sin, METH_NOARGS),
        DECLARE_METHOD(t_Complex, sinCos, METH_NOARGS),
        DECLARE_METHOD(t_Complex, sinh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, sinhCosh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, sqrt, METH_NOARGS),
        DECLARE_METHOD(t_Complex, sqrt1z, METH_NOARGS),
        DECLARE_METHOD(t_Complex, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Complex, tan, METH_NOARGS),
        DECLARE_METHOD(t_Complex, tanh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, toDegrees, METH_NOARGS),
        DECLARE_METHOD(t_Complex, toRadians, METH_NOARGS),
        DECLARE_METHOD(t_Complex, toString, METH_VARARGS),
        DECLARE_METHOD(t_Complex, ulp, METH_NOARGS),
        DECLARE_METHOD(t_Complex, valueOf, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Complex)[] = {
        { Py_tp_methods, t_Complex__methods_ },
        { Py_tp_init, (void *) t_Complex_init_ },
        { Py_tp_getset, t_Complex__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Complex)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Complex, t_Complex, Complex);

      void t_Complex::install(PyObject *module)
      {
        installType(&PY_TYPE(Complex), &PY_TYPE_DEF(Complex), module, "Complex", 0);
      }

      void t_Complex::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "class_", make_descriptor(Complex::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "wrapfn_", make_descriptor(t_Complex::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "boxfn_", make_descriptor(boxObject));
        env->getClass(Complex::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "I", make_descriptor(t_Complex::wrap_Object(*Complex::I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "INF", make_descriptor(t_Complex::wrap_Object(*Complex::INF)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "MINUS_I", make_descriptor(t_Complex::wrap_Object(*Complex::MINUS_I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "MINUS_ONE", make_descriptor(t_Complex::wrap_Object(*Complex::MINUS_ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "NaN", make_descriptor(t_Complex::wrap_Object(*Complex::NaN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "ONE", make_descriptor(t_Complex::wrap_Object(*Complex::ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "PI", make_descriptor(t_Complex::wrap_Object(*Complex::PI)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "ZERO", make_descriptor(t_Complex::wrap_Object(*Complex::ZERO)));
      }

      static PyObject *t_Complex_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Complex::initializeClass, 1)))
          return NULL;
        return t_Complex::wrap_Object(Complex(((t_Complex *) arg)->object.this$));
      }
      static PyObject *t_Complex_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Complex::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Complex_init_(t_Complex *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            Complex object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = Complex(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jdouble a0;
            jdouble a1;
            Complex object((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              INT_CALL(object = Complex(a0, a1));
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

      static PyObject *t_Complex_abs(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_acos(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.acos());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_acosh(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.acosh());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_add(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Complex_asin(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.asin());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_asinh(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.asinh());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_atan(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.atan());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_atan2(t_Complex *self, PyObject *arg)
      {
        Complex a0((jobject) NULL);
        Complex result((jobject) NULL);

        if (!parseArg(arg, "k", Complex::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.atan2(a0));
          return t_Complex::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "atan2", arg);
        return NULL;
      }

      static PyObject *t_Complex_atanh(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.atanh());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_cbrt(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.cbrt());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_ceil(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.ceil());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_compareTo(t_Complex *self, PyObject *arg)
      {
        Complex a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", Complex::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_Complex_conjugate(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.conjugate());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_copySign(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySign", args);
        return NULL;
      }

      static PyObject *t_Complex_cos(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_cosh(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_divide(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_Complex_equals(t_Complex *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Complex), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Complex_equalsWithRelativeTolerance(PyTypeObject *type, PyObject *args)
      {
        Complex a0((jobject) NULL);
        Complex a1((jobject) NULL);
        jdouble a2;
        jboolean result;

        if (!parseArgs(args, "kkD", Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::Complex::equalsWithRelativeTolerance(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError(type, "equalsWithRelativeTolerance", args);
        return NULL;
      }

      static PyObject *t_Complex_equals_(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            Complex a0((jobject) NULL);
            Complex a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "kk", Complex::initializeClass, Complex::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::Complex::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 3:
          {
            Complex a0((jobject) NULL);
            Complex a1((jobject) NULL);
            jdouble a2;
            jboolean result;

            if (!parseArgs(args, "kkD", Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::Complex::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            Complex a0((jobject) NULL);
            Complex a1((jobject) NULL);
            jint a2;
            jboolean result;

            if (!parseArgs(args, "kkI", Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::Complex::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "equals_", args);
        return NULL;
      }

      static PyObject *t_Complex_exp(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.exp());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_expm1(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.expm1());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_floor(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.floor());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_getArgument(t_Complex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getArgument());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Complex_getField(t_Complex *self)
      {
        ::org::hipparchus::complex::ComplexField result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::complex::t_ComplexField::wrap_Object(result);
      }

      static PyObject *t_Complex_getImaginary(t_Complex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getImaginary());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Complex_getImaginaryPart(t_Complex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getImaginaryPart());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Complex_getPi(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_getReal(t_Complex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Complex_getRealPart(t_Complex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRealPart());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Complex_hashCode(t_Complex *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Complex), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Complex_hypot(t_Complex *self, PyObject *arg)
      {
        Complex a0((jobject) NULL);
        Complex result((jobject) NULL);

        if (!parseArg(arg, "k", Complex::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.hypot(a0));
          return t_Complex::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hypot", arg);
        return NULL;
      }

      static PyObject *t_Complex_isInfinite(t_Complex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Complex_isMathematicalInteger(t_Complex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isMathematicalInteger());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Complex_isNaN(t_Complex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNaN());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Complex_isReal(t_Complex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isReal());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Complex_isZero(t_Complex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isZero());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Complex_linearCombination(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< Complex > a1((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "[D[k", Complex::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            JArray< Complex > a0((jobject) NULL);
            JArray< Complex > a1((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "[k[k", Complex::initializeClass, Complex::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Complex::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            Complex a0((jobject) NULL);
            Complex a1((jobject) NULL);
            Complex a2((jobject) NULL);
            Complex a3((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "kkkk", Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex a1((jobject) NULL);
            jdouble a2;
            Complex a3((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "DkDk", Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Complex::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            Complex a0((jobject) NULL);
            Complex a1((jobject) NULL);
            Complex a2((jobject) NULL);
            Complex a3((jobject) NULL);
            Complex a4((jobject) NULL);
            Complex a5((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "kkkkkk", Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex a1((jobject) NULL);
            jdouble a2;
            Complex a3((jobject) NULL);
            jdouble a4;
            Complex a5((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "DkDkDk", Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Complex::wrap_Object(result);
            }
          }
          break;
         case 8:
          {
            Complex a0((jobject) NULL);
            Complex a1((jobject) NULL);
            Complex a2((jobject) NULL);
            Complex a3((jobject) NULL);
            Complex a4((jobject) NULL);
            Complex a5((jobject) NULL);
            Complex a6((jobject) NULL);
            Complex a7((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "kkkkkkkk", Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex a1((jobject) NULL);
            jdouble a2;
            Complex a3((jobject) NULL);
            jdouble a4;
            Complex a5((jobject) NULL);
            jdouble a6;
            Complex a7((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "DkDkDkDk", Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_Complex_log(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.log());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_log10(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.log10());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_log1p(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.log1p());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_multiply(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jint a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Complex_multiplyMinusI(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.multiplyMinusI());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_multiplyPlusI(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.multiplyPlusI());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_negate(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_newInstance(t_Complex *self, PyObject *arg)
      {
        jdouble a0;
        Complex result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.newInstance(a0));
          return t_Complex::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
        return NULL;
      }

      static PyObject *t_Complex_norm(t_Complex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.norm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Complex_nthRoot(t_Complex *self, PyObject *arg)
      {
        jint a0;
        ::java::util::List result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.nthRoot(a0));
          return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
        }

        PyErr_SetArgsError((PyObject *) self, "nthRoot", arg);
        return NULL;
      }

      static PyObject *t_Complex_pow(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jint a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_Complex_reciprocal(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_remainder(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "remainder", args);
        return NULL;
      }

      static PyObject *t_Complex_rint(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.rint());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_rootN(t_Complex *self, PyObject *arg)
      {
        jint a0;
        Complex result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.rootN(a0));
          return t_Complex::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "rootN", arg);
        return NULL;
      }

      static PyObject *t_Complex_scalb(t_Complex *self, PyObject *arg)
      {
        jint a0;
        Complex result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.scalb(a0));
          return t_Complex::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalb", arg);
        return NULL;
      }

      static PyObject *t_Complex_sign(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.sign());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_sin(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_sinCos(t_Complex *self)
      {
        ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
        OBJ_CALL(result = self->object.sinCos());
        return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_Complex_sinh(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_sinhCosh(t_Complex *self)
      {
        ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
        OBJ_CALL(result = self->object.sinhCosh());
        return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_Complex_sqrt(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_sqrt1z(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt1z());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_subtract(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Complex_tan(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.tan());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_tanh(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.tanh());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_toDegrees(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.toDegrees());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_toRadians(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.toRadians());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_toString(t_Complex *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Complex), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Complex_ulp(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.ulp());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_valueOf(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::Complex::valueOf(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            jdouble a1;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::Complex::valueOf(a0, a1));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "valueOf", args);
        return NULL;
      }

      static PyObject *t_Complex_get__argument(t_Complex *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getArgument());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Complex_get__field(t_Complex *self, void *data)
      {
        ::org::hipparchus::complex::ComplexField value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::complex::t_ComplexField::wrap_Object(value);
      }

      static PyObject *t_Complex_get__imaginary(t_Complex *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getImaginary());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Complex_get__imaginaryPart(t_Complex *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getImaginaryPart());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Complex_get__infinite(t_Complex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Complex_get__mathematicalInteger(t_Complex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isMathematicalInteger());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Complex_get__naN(t_Complex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Complex_get__pi(t_Complex *self, void *data)
      {
        Complex value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return t_Complex::wrap_Object(value);
      }

      static PyObject *t_Complex_get__real(t_Complex *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Complex_get__realPart(t_Complex *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRealPart());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Complex_get__zero(t_Complex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isZero());
        Py_RETURN_BOOL(value);
      }
    }
  }
}

#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/LOF.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
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
              mids$[mid_buildFromCustomAttitude_2a509cacd8992176] = env->getStaticMethodID(cls, "buildFromCustomAttitude", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;");
              mids$[mid_buildFromDirectionInFrame_4a60dc91196dbefd] = env->getStaticMethodID(cls, "buildFromDirectionInFrame", "(Lorg/orekit/frames/Frame;Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;");
              mids$[mid_buildFromDirectionInLOF_1bbcb025902b2173] = env->getStaticMethodID(cls, "buildFromDirectionInLOF", "(Lorg/orekit/frames/LOF;Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;");
              mids$[mid_buildFromFixedDirectionInSatelliteFrame_68ee83b4aa4b2362] = env->getStaticMethodID(cls, "buildFromFixedDirectionInSatelliteFrame", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;");
              mids$[mid_getAttitude_5341a8481841f90c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
              mids$[mid_getAttitude_455b5c75f9292826] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
              mids$[mid_getManeuverAttitudeProvider_5cce95036ae870ba] = env->getMethodID(cls, "getManeuverAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
              mids$[mid_getThrusterAxisInSatelliteFrame_17a952530a808943] = env->getMethodID(cls, "getThrusterAxisInSatelliteFrame", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAttitudeFromFrame_5341a8481841f90c] = env->getMethodID(cls, "getAttitudeFromFrame", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ThrustDirectionAndAttitudeProvider ThrustDirectionAndAttitudeProvider::buildFromCustomAttitude(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ThrustDirectionAndAttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_buildFromCustomAttitude_2a509cacd8992176], a0.this$, a1.this$));
          }

          ThrustDirectionAndAttitudeProvider ThrustDirectionAndAttitudeProvider::buildFromDirectionInFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ThrustDirectionAndAttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_buildFromDirectionInFrame_4a60dc91196dbefd], a0.this$, a1.this$, a2.this$));
          }

          ThrustDirectionAndAttitudeProvider ThrustDirectionAndAttitudeProvider::buildFromDirectionInLOF(const ::org::orekit::frames::LOF & a0, const ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ThrustDirectionAndAttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_buildFromDirectionInLOF_1bbcb025902b2173], a0.this$, a1.this$, a2.this$));
          }

          ThrustDirectionAndAttitudeProvider ThrustDirectionAndAttitudeProvider::buildFromFixedDirectionInSatelliteFrame(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ThrustDirectionAndAttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_buildFromFixedDirectionInSatelliteFrame_68ee83b4aa4b2362], a0.this$));
          }

          ::org::orekit::attitudes::Attitude ThrustDirectionAndAttitudeProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_5341a8481841f90c], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::attitudes::FieldAttitude ThrustDirectionAndAttitudeProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_455b5c75f9292826], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::attitudes::AttitudeProvider ThrustDirectionAndAttitudeProvider::getManeuverAttitudeProvider() const
          {
            return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getManeuverAttitudeProvider_5cce95036ae870ba]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustDirectionAndAttitudeProvider::getThrusterAxisInSatelliteFrame() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrusterAxisInSatelliteFrame_17a952530a808943]));
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
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/FieldAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FieldAttitude::class$ = NULL;
      jmethodID *FieldAttitude::mids$ = NULL;
      bool FieldAttitude::live$ = false;

      jclass FieldAttitude::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FieldAttitude");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e3fb72cc27e6c483] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)V");
          mids$[mid_init$_fb1376e69ffb8e6e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/attitudes/Attitude;)V");
          mids$[mid_init$_14ad51624d1f3f8d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldAngularCoordinates;)V");
          mids$[mid_init$_dd1b2a9192d06339] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_1b16afdc0eb26364] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/Field;)V");
          mids$[mid_getDate_09b0a926600dfc14] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getOrientation_3a64e8ea05af639a] = env->getMethodID(cls, "getOrientation", "()Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
          mids$[mid_getReferenceFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getRotation_ac4489fdef1c3aef] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getRotationAcceleration_5791f80683b5227e] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getSpin_5791f80683b5227e] = env->getMethodID(cls, "getSpin", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_shiftedBy_1bb050278f5e3878] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_shiftedBy_a33d86f54ca7c82b] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_toAttitude_78dca83e076ede35] = env->getMethodID(cls, "toAttitude", "()Lorg/orekit/attitudes/Attitude;");
          mids$[mid_withReferenceFrame_5ada39731d5e8f52] = env->getMethodID(cls, "withReferenceFrame", "(Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAttitude::FieldAttitude(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::TimeStampedFieldAngularCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e3fb72cc27e6c483, a0.this$, a1.this$)) {}

      FieldAttitude::FieldAttitude(const ::org::hipparchus::Field & a0, const ::org::orekit::attitudes::Attitude & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fb1376e69ffb8e6e, a0.this$, a1.this$)) {}

      FieldAttitude::FieldAttitude(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::FieldAngularCoordinates & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_14ad51624d1f3f8d, a0.this$, a1.this$, a2.this$)) {}

      FieldAttitude::FieldAttitude(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dd1b2a9192d06339, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldAttitude::FieldAttitude(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, const ::org::hipparchus::Field & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1b16afdc0eb26364, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      ::org::orekit::time::FieldAbsoluteDate FieldAttitude::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_09b0a926600dfc14]));
      }

      ::org::orekit::utils::TimeStampedFieldAngularCoordinates FieldAttitude::getOrientation() const
      {
        return ::org::orekit::utils::TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_getOrientation_3a64e8ea05af639a]));
      }

      ::org::orekit::frames::Frame FieldAttitude::getReferenceFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_c8fe21bcdac65bf6]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAttitude::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getRotation_ac4489fdef1c3aef]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAttitude::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_5791f80683b5227e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAttitude::getSpin() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getSpin_5791f80683b5227e]));
      }

      FieldAttitude FieldAttitude::shiftedBy(jdouble a0) const
      {
        return FieldAttitude(env->callObjectMethod(this$, mids$[mid_shiftedBy_1bb050278f5e3878], a0));
      }

      FieldAttitude FieldAttitude::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldAttitude(env->callObjectMethod(this$, mids$[mid_shiftedBy_a33d86f54ca7c82b], a0.this$));
      }

      ::org::orekit::attitudes::Attitude FieldAttitude::toAttitude() const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_toAttitude_78dca83e076ede35]));
      }

      FieldAttitude FieldAttitude::withReferenceFrame(const ::org::orekit::frames::Frame & a0) const
      {
        return FieldAttitude(env->callObjectMethod(this$, mids$[mid_withReferenceFrame_5ada39731d5e8f52], a0.this$));
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
      static PyObject *t_FieldAttitude_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAttitude_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAttitude_of_(t_FieldAttitude *self, PyObject *args);
      static int t_FieldAttitude_init_(t_FieldAttitude *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAttitude_getDate(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_getOrientation(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_getReferenceFrame(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_getRotation(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_getRotationAcceleration(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_getSpin(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_shiftedBy(t_FieldAttitude *self, PyObject *args);
      static PyObject *t_FieldAttitude_toAttitude(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_withReferenceFrame(t_FieldAttitude *self, PyObject *arg);
      static PyObject *t_FieldAttitude_get__date(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__orientation(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__referenceFrame(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__rotation(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__rotationAcceleration(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__spin(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__parameters_(t_FieldAttitude *self, void *data);
      static PyGetSetDef t_FieldAttitude__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAttitude, date),
        DECLARE_GET_FIELD(t_FieldAttitude, orientation),
        DECLARE_GET_FIELD(t_FieldAttitude, referenceFrame),
        DECLARE_GET_FIELD(t_FieldAttitude, rotation),
        DECLARE_GET_FIELD(t_FieldAttitude, rotationAcceleration),
        DECLARE_GET_FIELD(t_FieldAttitude, spin),
        DECLARE_GET_FIELD(t_FieldAttitude, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAttitude__methods_[] = {
        DECLARE_METHOD(t_FieldAttitude, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAttitude, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAttitude, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAttitude, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, getOrientation, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, getReferenceFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, getSpin, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldAttitude, toAttitude, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, withReferenceFrame, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAttitude)[] = {
        { Py_tp_methods, t_FieldAttitude__methods_ },
        { Py_tp_init, (void *) t_FieldAttitude_init_ },
        { Py_tp_getset, t_FieldAttitude__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAttitude)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldAttitude, t_FieldAttitude, FieldAttitude);
      PyObject *t_FieldAttitude::wrap_Object(const FieldAttitude& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAttitude::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAttitude *self = (t_FieldAttitude *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAttitude::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAttitude::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAttitude *self = (t_FieldAttitude *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAttitude::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAttitude), &PY_TYPE_DEF(FieldAttitude), module, "FieldAttitude", 0);
      }

      void t_FieldAttitude::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitude), "class_", make_descriptor(FieldAttitude::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitude), "wrapfn_", make_descriptor(t_FieldAttitude::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitude), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAttitude_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAttitude::initializeClass, 1)))
          return NULL;
        return t_FieldAttitude::wrap_Object(FieldAttitude(((t_FieldAttitude *) arg)->object.this$));
      }
      static PyObject *t_FieldAttitude_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAttitude::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAttitude_of_(t_FieldAttitude *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAttitude_init_(t_FieldAttitude *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldAngularCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAttitude object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::TimeStampedFieldAngularCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::parameters_))
            {
              INT_CALL(object = FieldAttitude(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            FieldAttitude object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldAttitude(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::FieldAngularCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAttitude object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::FieldAngularCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::org::orekit::utils::t_FieldAngularCoordinates::parameters_))
            {
              INT_CALL(object = FieldAttitude(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a4((jobject) NULL);
            PyTypeObject **p4;
            FieldAttitude object((jobject) NULL);

            if (!parseArgs(args, "KkKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a4, &p4, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAttitude(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
            ::org::hipparchus::Field a5((jobject) NULL);
            PyTypeObject **p5;
            FieldAttitude object((jobject) NULL);

            if (!parseArgs(args, "KkkkkK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &a3, &a4, &a5, &p5, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldAttitude(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_FieldAttitude_getDate(t_FieldAttitude *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAttitude_getOrientation(t_FieldAttitude *self)
      {
        ::org::orekit::utils::TimeStampedFieldAngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrientation());
        return ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAttitude_getReferenceFrame(t_FieldAttitude *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldAttitude_getRotation(t_FieldAttitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAttitude_getRotationAcceleration(t_FieldAttitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAttitude_getSpin(t_FieldAttitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpin());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAttitude_shiftedBy(t_FieldAttitude *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAttitude::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAttitude::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldAttitude_toAttitude(t_FieldAttitude *self)
      {
        ::org::orekit::attitudes::Attitude result((jobject) NULL);
        OBJ_CALL(result = self->object.toAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
      }

      static PyObject *t_FieldAttitude_withReferenceFrame(t_FieldAttitude *self, PyObject *arg)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        FieldAttitude result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.withReferenceFrame(a0));
          return t_FieldAttitude::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "withReferenceFrame", arg);
        return NULL;
      }
      static PyObject *t_FieldAttitude_get__parameters_(t_FieldAttitude *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAttitude_get__date(t_FieldAttitude *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldAttitude_get__orientation(t_FieldAttitude *self, void *data)
      {
        ::org::orekit::utils::TimeStampedFieldAngularCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrientation());
        return ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldAttitude_get__referenceFrame(t_FieldAttitude *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldAttitude_get__rotation(t_FieldAttitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(value);
      }

      static PyObject *t_FieldAttitude_get__rotationAcceleration(t_FieldAttitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldAttitude_get__spin(t_FieldAttitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpin());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/raster/Tile.h"
#include "org/orekit/rugged/raster/Tile$Location.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *Tile::class$ = NULL;
        jmethodID *Tile::mids$ = NULL;
        bool Tile::live$ = false;

        jclass Tile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/Tile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_cellIntersection_2421dbb15f4ac362] = env->getMethodID(cls, "cellIntersection", "(Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;II)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_getElevationAtIndices_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getElevationAtIndices", "(II)D");
            mids$[mid_getFloorLatitudeIndex_12ebab281ee35c98] = env->getMethodID(cls, "getFloorLatitudeIndex", "(D)I");
            mids$[mid_getFloorLongitudeIndex_12ebab281ee35c98] = env->getMethodID(cls, "getFloorLongitudeIndex", "(D)I");
            mids$[mid_getLatitudeAtIndex_b772323fc98b7293] = env->getMethodID(cls, "getLatitudeAtIndex", "(I)D");
            mids$[mid_getLatitudeRows_f2f64475e4580546] = env->getMethodID(cls, "getLatitudeRows", "()I");
            mids$[mid_getLatitudeStep_456d9a2f64d6b28d] = env->getMethodID(cls, "getLatitudeStep", "()D");
            mids$[mid_getLocation_fb92501bac4b7f46] = env->getMethodID(cls, "getLocation", "(DD)Lorg/orekit/rugged/raster/Tile$Location;");
            mids$[mid_getLongitudeAtIndex_b772323fc98b7293] = env->getMethodID(cls, "getLongitudeAtIndex", "(I)D");
            mids$[mid_getLongitudeColumns_f2f64475e4580546] = env->getMethodID(cls, "getLongitudeColumns", "()I");
            mids$[mid_getLongitudeStep_456d9a2f64d6b28d] = env->getMethodID(cls, "getLongitudeStep", "()D");
            mids$[mid_getMaxElevation_456d9a2f64d6b28d] = env->getMethodID(cls, "getMaxElevation", "()D");
            mids$[mid_getMaxElevationLatitudeIndex_f2f64475e4580546] = env->getMethodID(cls, "getMaxElevationLatitudeIndex", "()I");
            mids$[mid_getMaxElevationLongitudeIndex_f2f64475e4580546] = env->getMethodID(cls, "getMaxElevationLongitudeIndex", "()I");
            mids$[mid_getMaximumLatitude_456d9a2f64d6b28d] = env->getMethodID(cls, "getMaximumLatitude", "()D");
            mids$[mid_getMaximumLongitude_456d9a2f64d6b28d] = env->getMethodID(cls, "getMaximumLongitude", "()D");
            mids$[mid_getMinElevation_456d9a2f64d6b28d] = env->getMethodID(cls, "getMinElevation", "()D");
            mids$[mid_getMinElevationLatitudeIndex_f2f64475e4580546] = env->getMethodID(cls, "getMinElevationLatitudeIndex", "()I");
            mids$[mid_getMinElevationLongitudeIndex_f2f64475e4580546] = env->getMethodID(cls, "getMinElevationLongitudeIndex", "()I");
            mids$[mid_getMinimumLatitude_456d9a2f64d6b28d] = env->getMethodID(cls, "getMinimumLatitude", "()D");
            mids$[mid_getMinimumLongitude_456d9a2f64d6b28d] = env->getMethodID(cls, "getMinimumLongitude", "()D");
            mids$[mid_interpolateElevation_824133ce4aec3505] = env->getMethodID(cls, "interpolateElevation", "(DD)D");
            mids$[mid_tileUpdateCompleted_7ae3461a92a43152] = env->getMethodID(cls, "tileUpdateCompleted", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint Tile::cellIntersection(const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jint a2, jint a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_cellIntersection_2421dbb15f4ac362], a0.this$, a1.this$, a2, a3));
        }

        jdouble Tile::getElevationAtIndices(jint a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevationAtIndices_a84e4ee1da3f1ab8], a0, a1);
        }

        jint Tile::getFloorLatitudeIndex(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getFloorLatitudeIndex_12ebab281ee35c98], a0);
        }

        jint Tile::getFloorLongitudeIndex(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getFloorLongitudeIndex_12ebab281ee35c98], a0);
        }

        jdouble Tile::getLatitudeAtIndex(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitudeAtIndex_b772323fc98b7293], a0);
        }

        jint Tile::getLatitudeRows() const
        {
          return env->callIntMethod(this$, mids$[mid_getLatitudeRows_f2f64475e4580546]);
        }

        jdouble Tile::getLatitudeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitudeStep_456d9a2f64d6b28d]);
        }

        ::org::orekit::rugged::raster::Tile$Location Tile::getLocation(jdouble a0, jdouble a1) const
        {
          return ::org::orekit::rugged::raster::Tile$Location(env->callObjectMethod(this$, mids$[mid_getLocation_fb92501bac4b7f46], a0, a1));
        }

        jdouble Tile::getLongitudeAtIndex(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitudeAtIndex_b772323fc98b7293], a0);
        }

        jint Tile::getLongitudeColumns() const
        {
          return env->callIntMethod(this$, mids$[mid_getLongitudeColumns_f2f64475e4580546]);
        }

        jdouble Tile::getLongitudeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitudeStep_456d9a2f64d6b28d]);
        }

        jdouble Tile::getMaxElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxElevation_456d9a2f64d6b28d]);
        }

        jint Tile::getMaxElevationLatitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxElevationLatitudeIndex_f2f64475e4580546]);
        }

        jint Tile::getMaxElevationLongitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxElevationLongitudeIndex_f2f64475e4580546]);
        }

        jdouble Tile::getMaximumLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaximumLatitude_456d9a2f64d6b28d]);
        }

        jdouble Tile::getMaximumLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaximumLongitude_456d9a2f64d6b28d]);
        }

        jdouble Tile::getMinElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinElevation_456d9a2f64d6b28d]);
        }

        jint Tile::getMinElevationLatitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinElevationLatitudeIndex_f2f64475e4580546]);
        }

        jint Tile::getMinElevationLongitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinElevationLongitudeIndex_f2f64475e4580546]);
        }

        jdouble Tile::getMinimumLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinimumLatitude_456d9a2f64d6b28d]);
        }

        jdouble Tile::getMinimumLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinimumLongitude_456d9a2f64d6b28d]);
        }

        jdouble Tile::interpolateElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_interpolateElevation_824133ce4aec3505], a0, a1);
        }

        void Tile::tileUpdateCompleted() const
        {
          env->callVoidMethod(this$, mids$[mid_tileUpdateCompleted_7ae3461a92a43152]);
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
        static PyObject *t_Tile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tile_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tile_cellIntersection(t_Tile *self, PyObject *args);
        static PyObject *t_Tile_getElevationAtIndices(t_Tile *self, PyObject *args);
        static PyObject *t_Tile_getFloorLatitudeIndex(t_Tile *self, PyObject *arg);
        static PyObject *t_Tile_getFloorLongitudeIndex(t_Tile *self, PyObject *arg);
        static PyObject *t_Tile_getLatitudeAtIndex(t_Tile *self, PyObject *arg);
        static PyObject *t_Tile_getLatitudeRows(t_Tile *self);
        static PyObject *t_Tile_getLatitudeStep(t_Tile *self);
        static PyObject *t_Tile_getLocation(t_Tile *self, PyObject *args);
        static PyObject *t_Tile_getLongitudeAtIndex(t_Tile *self, PyObject *arg);
        static PyObject *t_Tile_getLongitudeColumns(t_Tile *self);
        static PyObject *t_Tile_getLongitudeStep(t_Tile *self);
        static PyObject *t_Tile_getMaxElevation(t_Tile *self);
        static PyObject *t_Tile_getMaxElevationLatitudeIndex(t_Tile *self);
        static PyObject *t_Tile_getMaxElevationLongitudeIndex(t_Tile *self);
        static PyObject *t_Tile_getMaximumLatitude(t_Tile *self);
        static PyObject *t_Tile_getMaximumLongitude(t_Tile *self);
        static PyObject *t_Tile_getMinElevation(t_Tile *self);
        static PyObject *t_Tile_getMinElevationLatitudeIndex(t_Tile *self);
        static PyObject *t_Tile_getMinElevationLongitudeIndex(t_Tile *self);
        static PyObject *t_Tile_getMinimumLatitude(t_Tile *self);
        static PyObject *t_Tile_getMinimumLongitude(t_Tile *self);
        static PyObject *t_Tile_interpolateElevation(t_Tile *self, PyObject *args);
        static PyObject *t_Tile_tileUpdateCompleted(t_Tile *self);
        static PyObject *t_Tile_get__latitudeRows(t_Tile *self, void *data);
        static PyObject *t_Tile_get__latitudeStep(t_Tile *self, void *data);
        static PyObject *t_Tile_get__longitudeColumns(t_Tile *self, void *data);
        static PyObject *t_Tile_get__longitudeStep(t_Tile *self, void *data);
        static PyObject *t_Tile_get__maxElevation(t_Tile *self, void *data);
        static PyObject *t_Tile_get__maxElevationLatitudeIndex(t_Tile *self, void *data);
        static PyObject *t_Tile_get__maxElevationLongitudeIndex(t_Tile *self, void *data);
        static PyObject *t_Tile_get__maximumLatitude(t_Tile *self, void *data);
        static PyObject *t_Tile_get__maximumLongitude(t_Tile *self, void *data);
        static PyObject *t_Tile_get__minElevation(t_Tile *self, void *data);
        static PyObject *t_Tile_get__minElevationLatitudeIndex(t_Tile *self, void *data);
        static PyObject *t_Tile_get__minElevationLongitudeIndex(t_Tile *self, void *data);
        static PyObject *t_Tile_get__minimumLatitude(t_Tile *self, void *data);
        static PyObject *t_Tile_get__minimumLongitude(t_Tile *self, void *data);
        static PyGetSetDef t_Tile__fields_[] = {
          DECLARE_GET_FIELD(t_Tile, latitudeRows),
          DECLARE_GET_FIELD(t_Tile, latitudeStep),
          DECLARE_GET_FIELD(t_Tile, longitudeColumns),
          DECLARE_GET_FIELD(t_Tile, longitudeStep),
          DECLARE_GET_FIELD(t_Tile, maxElevation),
          DECLARE_GET_FIELD(t_Tile, maxElevationLatitudeIndex),
          DECLARE_GET_FIELD(t_Tile, maxElevationLongitudeIndex),
          DECLARE_GET_FIELD(t_Tile, maximumLatitude),
          DECLARE_GET_FIELD(t_Tile, maximumLongitude),
          DECLARE_GET_FIELD(t_Tile, minElevation),
          DECLARE_GET_FIELD(t_Tile, minElevationLatitudeIndex),
          DECLARE_GET_FIELD(t_Tile, minElevationLongitudeIndex),
          DECLARE_GET_FIELD(t_Tile, minimumLatitude),
          DECLARE_GET_FIELD(t_Tile, minimumLongitude),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Tile__methods_[] = {
          DECLARE_METHOD(t_Tile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tile, cellIntersection, METH_VARARGS),
          DECLARE_METHOD(t_Tile, getElevationAtIndices, METH_VARARGS),
          DECLARE_METHOD(t_Tile, getFloorLatitudeIndex, METH_O),
          DECLARE_METHOD(t_Tile, getFloorLongitudeIndex, METH_O),
          DECLARE_METHOD(t_Tile, getLatitudeAtIndex, METH_O),
          DECLARE_METHOD(t_Tile, getLatitudeRows, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getLatitudeStep, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getLocation, METH_VARARGS),
          DECLARE_METHOD(t_Tile, getLongitudeAtIndex, METH_O),
          DECLARE_METHOD(t_Tile, getLongitudeColumns, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getLongitudeStep, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMaxElevation, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMaxElevationLatitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMaxElevationLongitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMaximumLatitude, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMaximumLongitude, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMinElevation, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMinElevationLatitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMinElevationLongitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMinimumLatitude, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMinimumLongitude, METH_NOARGS),
          DECLARE_METHOD(t_Tile, interpolateElevation, METH_VARARGS),
          DECLARE_METHOD(t_Tile, tileUpdateCompleted, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Tile)[] = {
          { Py_tp_methods, t_Tile__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Tile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Tile)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::raster::UpdatableTile),
          NULL
        };

        DEFINE_TYPE(Tile, t_Tile, Tile);

        void t_Tile::install(PyObject *module)
        {
          installType(&PY_TYPE(Tile), &PY_TYPE_DEF(Tile), module, "Tile", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "Location", make_descriptor(&PY_TYPE_DEF(Tile$Location)));
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

        static PyObject *t_Tile_cellIntersection(t_Tile *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jint a2;
          jint a3;
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkII", ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.cellIntersection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "cellIntersection", args);
          return NULL;
        }

        static PyObject *t_Tile_getElevationAtIndices(t_Tile *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getElevationAtIndices(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevationAtIndices", args);
          return NULL;
        }

        static PyObject *t_Tile_getFloorLatitudeIndex(t_Tile *self, PyObject *arg)
        {
          jdouble a0;
          jint result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getFloorLatitudeIndex(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFloorLatitudeIndex", arg);
          return NULL;
        }

        static PyObject *t_Tile_getFloorLongitudeIndex(t_Tile *self, PyObject *arg)
        {
          jdouble a0;
          jint result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getFloorLongitudeIndex(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFloorLongitudeIndex", arg);
          return NULL;
        }

        static PyObject *t_Tile_getLatitudeAtIndex(t_Tile *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getLatitudeAtIndex(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLatitudeAtIndex", arg);
          return NULL;
        }

        static PyObject *t_Tile_getLatitudeRows(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getLatitudeRows());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getLatitudeStep(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLatitudeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getLocation(t_Tile *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::rugged::raster::Tile$Location result((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getLocation(a0, a1));
            return ::org::orekit::rugged::raster::t_Tile$Location::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLocation", args);
          return NULL;
        }

        static PyObject *t_Tile_getLongitudeAtIndex(t_Tile *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getLongitudeAtIndex(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLongitudeAtIndex", arg);
          return NULL;
        }

        static PyObject *t_Tile_getLongitudeColumns(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getLongitudeColumns());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getLongitudeStep(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLongitudeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMaxElevation(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMaxElevationLatitudeIndex(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxElevationLatitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getMaxElevationLongitudeIndex(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxElevationLongitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getMaximumLatitude(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaximumLatitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMaximumLongitude(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaximumLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMinElevation(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMinElevationLatitudeIndex(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinElevationLatitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getMinElevationLongitudeIndex(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinElevationLongitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getMinimumLatitude(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinimumLatitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMinimumLongitude(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinimumLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_interpolateElevation(t_Tile *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolateElevation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolateElevation", args);
          return NULL;
        }

        static PyObject *t_Tile_tileUpdateCompleted(t_Tile *self)
        {
          OBJ_CALL(self->object.tileUpdateCompleted());
          Py_RETURN_NONE;
        }

        static PyObject *t_Tile_get__latitudeRows(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getLatitudeRows());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__latitudeStep(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLatitudeStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__longitudeColumns(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getLongitudeColumns());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__longitudeStep(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLongitudeStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__maxElevation(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__maxElevationLatitudeIndex(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxElevationLatitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__maxElevationLongitudeIndex(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxElevationLongitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__maximumLatitude(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaximumLatitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__maximumLongitude(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaximumLongitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__minElevation(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__minElevationLatitudeIndex(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinElevationLatitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__minElevationLongitudeIndex(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinElevationLongitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__minimumLatitude(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinimumLatitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__minimumLongitude(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinimumLongitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/Range.h"
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
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockRangeModifier::RelativisticClockRangeModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          ::java::util::List RelativisticClockRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void RelativisticClockRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
#include "org/orekit/propagation/numerical/cr3bp/STMEquations.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {

          ::java::lang::Class *STMEquations::class$ = NULL;
          jmethodID *STMEquations::mids$ = NULL;
          bool STMEquations::live$ = false;

          jclass STMEquations::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/cr3bp/STMEquations");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b154ccffb790db99] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;)V");
              mids$[mid_combinedDerivatives_32bde69742c0babb] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;");
              mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getStateTransitionMatrix_63aee3ce1e412e46] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_setInitialPhi_81fc6fb6078d2aa7] = env->getMethodID(cls, "setInitialPhi", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          STMEquations::STMEquations(const ::org::orekit::bodies::CR3BPSystem & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b154ccffb790db99, a0.this$)) {}

          ::org::orekit::propagation::integration::CombinedDerivatives STMEquations::combinedDerivatives(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::orekit::propagation::integration::CombinedDerivatives(env->callObjectMethod(this$, mids$[mid_combinedDerivatives_32bde69742c0babb], a0.this$));
          }

          jint STMEquations::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
          }

          ::java::lang::String STMEquations::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
          }

          ::org::hipparchus::linear::RealMatrix STMEquations::getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_63aee3ce1e412e46], a0.this$));
          }

          ::org::orekit::propagation::SpacecraftState STMEquations::setInitialPhi(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_setInitialPhi_81fc6fb6078d2aa7], a0.this$));
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
          static PyObject *t_STMEquations_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_STMEquations_instance_(PyTypeObject *type, PyObject *arg);
          static int t_STMEquations_init_(t_STMEquations *self, PyObject *args, PyObject *kwds);
          static PyObject *t_STMEquations_combinedDerivatives(t_STMEquations *self, PyObject *arg);
          static PyObject *t_STMEquations_getDimension(t_STMEquations *self);
          static PyObject *t_STMEquations_getName(t_STMEquations *self);
          static PyObject *t_STMEquations_getStateTransitionMatrix(t_STMEquations *self, PyObject *arg);
          static PyObject *t_STMEquations_setInitialPhi(t_STMEquations *self, PyObject *arg);
          static PyObject *t_STMEquations_get__dimension(t_STMEquations *self, void *data);
          static int t_STMEquations_set__initialPhi(t_STMEquations *self, PyObject *arg, void *data);
          static PyObject *t_STMEquations_get__name(t_STMEquations *self, void *data);
          static PyGetSetDef t_STMEquations__fields_[] = {
            DECLARE_GET_FIELD(t_STMEquations, dimension),
            DECLARE_SET_FIELD(t_STMEquations, initialPhi),
            DECLARE_GET_FIELD(t_STMEquations, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_STMEquations__methods_[] = {
            DECLARE_METHOD(t_STMEquations, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_STMEquations, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_STMEquations, combinedDerivatives, METH_O),
            DECLARE_METHOD(t_STMEquations, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_STMEquations, getName, METH_NOARGS),
            DECLARE_METHOD(t_STMEquations, getStateTransitionMatrix, METH_O),
            DECLARE_METHOD(t_STMEquations, setInitialPhi, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(STMEquations)[] = {
            { Py_tp_methods, t_STMEquations__methods_ },
            { Py_tp_init, (void *) t_STMEquations_init_ },
            { Py_tp_getset, t_STMEquations__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(STMEquations)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(STMEquations, t_STMEquations, STMEquations);

          void t_STMEquations::install(PyObject *module)
          {
            installType(&PY_TYPE(STMEquations), &PY_TYPE_DEF(STMEquations), module, "STMEquations", 0);
          }

          void t_STMEquations::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(STMEquations), "class_", make_descriptor(STMEquations::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(STMEquations), "wrapfn_", make_descriptor(t_STMEquations::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(STMEquations), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_STMEquations_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, STMEquations::initializeClass, 1)))
              return NULL;
            return t_STMEquations::wrap_Object(STMEquations(((t_STMEquations *) arg)->object.this$));
          }
          static PyObject *t_STMEquations_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, STMEquations::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_STMEquations_init_(t_STMEquations *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
            STMEquations object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::bodies::CR3BPSystem::initializeClass, &a0))
            {
              INT_CALL(object = STMEquations(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_STMEquations_combinedDerivatives(t_STMEquations *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::integration::CombinedDerivatives result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.combinedDerivatives(a0));
              return ::org::orekit::propagation::integration::t_CombinedDerivatives::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "combinedDerivatives", arg);
            return NULL;
          }

          static PyObject *t_STMEquations_getDimension(t_STMEquations *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_STMEquations_getName(t_STMEquations *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_STMEquations_getStateTransitionMatrix(t_STMEquations *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStateTransitionMatrix(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getStateTransitionMatrix", arg);
            return NULL;
          }

          static PyObject *t_STMEquations_setInitialPhi(t_STMEquations *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.setInitialPhi(a0));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "setInitialPhi", arg);
            return NULL;
          }

          static PyObject *t_STMEquations_get__dimension(t_STMEquations *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static int t_STMEquations_set__initialPhi(t_STMEquations *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
              {
                INT_CALL(self->object.setInitialPhi(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "initialPhi", arg);
            return -1;
          }

          static PyObject *t_STMEquations_get__name(t_STMEquations *self, void *data)
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
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *RawSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *RawSphericalHarmonicsProvider::mids$ = NULL;
          bool RawSphericalHarmonicsProvider::live$ = false;

          jclass RawSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_onDate_e337a8de1b487ef8] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider$RawSphericalHarmonics RawSphericalHarmonicsProvider::onDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider$RawSphericalHarmonics(env->callObjectMethod(this$, mids$[mid_onDate_e337a8de1b487ef8], a0.this$));
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
          static PyObject *t_RawSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RawSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RawSphericalHarmonicsProvider_onDate(t_RawSphericalHarmonicsProvider *self, PyObject *arg);

          static PyMethodDef t_RawSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider, onDate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RawSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_RawSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RawSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::SphericalHarmonicsProvider),
            NULL
          };

          DEFINE_TYPE(RawSphericalHarmonicsProvider, t_RawSphericalHarmonicsProvider, RawSphericalHarmonicsProvider);

          void t_RawSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(RawSphericalHarmonicsProvider), &PY_TYPE_DEF(RawSphericalHarmonicsProvider), module, "RawSphericalHarmonicsProvider", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider), "RawSphericalHarmonics", make_descriptor(&PY_TYPE_DEF(RawSphericalHarmonicsProvider$RawSphericalHarmonics)));
          }

          void t_RawSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider), "class_", make_descriptor(RawSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_RawSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RawSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RawSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_RawSphericalHarmonicsProvider::wrap_Object(RawSphericalHarmonicsProvider(((t_RawSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_RawSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RawSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RawSphericalHarmonicsProvider_onDate(t_RawSphericalHarmonicsProvider *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider$RawSphericalHarmonics result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.onDate(a0));
              return ::org::orekit::forces::gravity::potential::t_RawSphericalHarmonicsProvider$RawSphericalHarmonics::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "onDate", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/Preconditioner.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {

            ::java::lang::Class *NonLinearConjugateGradientOptimizer::class$ = NULL;
            jmethodID *NonLinearConjugateGradientOptimizer::mids$ = NULL;
            bool NonLinearConjugateGradientOptimizer::live$ = false;

            jclass NonLinearConjugateGradientOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_87776ef79d570227] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;Lorg/hipparchus/optim/ConvergenceChecker;)V");
                mids$[mid_init$_00e8813f35870892] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;Lorg/hipparchus/optim/ConvergenceChecker;DDD)V");
                mids$[mid_init$_a1f43ea40443b9fe] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;Lorg/hipparchus/optim/ConvergenceChecker;DDDLorg/hipparchus/optim/nonlinear/scalar/gradient/Preconditioner;)V");
                mids$[mid_optimize_02ecb87ce66bcfc1] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_doOptimize_f3368328259a5468] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_parseOptimizationData_a5cd04a701a45f77] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            NonLinearConjugateGradientOptimizer::NonLinearConjugateGradientOptimizer(const ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula & a0, const ::org::hipparchus::optim::ConvergenceChecker & a1) : ::org::hipparchus::optim::nonlinear::scalar::GradientMultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_87776ef79d570227, a0.this$, a1.this$)) {}

            NonLinearConjugateGradientOptimizer::NonLinearConjugateGradientOptimizer(const ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula & a0, const ::org::hipparchus::optim::ConvergenceChecker & a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::optim::nonlinear::scalar::GradientMultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_00e8813f35870892, a0.this$, a1.this$, a2, a3, a4)) {}

            NonLinearConjugateGradientOptimizer::NonLinearConjugateGradientOptimizer(const ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula & a0, const ::org::hipparchus::optim::ConvergenceChecker & a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::optim::nonlinear::scalar::gradient::Preconditioner & a5) : ::org::hipparchus::optim::nonlinear::scalar::GradientMultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_a1f43ea40443b9fe, a0.this$, a1.this$, a2, a3, a4, a5.this$)) {}

            ::org::hipparchus::optim::PointValuePair NonLinearConjugateGradientOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
            {
              return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_02ecb87ce66bcfc1], a0.this$));
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
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$IdentityPreconditioner.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {
            static PyObject *t_NonLinearConjugateGradientOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer_of_(t_NonLinearConjugateGradientOptimizer *self, PyObject *args);
            static int t_NonLinearConjugateGradientOptimizer_init_(t_NonLinearConjugateGradientOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_NonLinearConjugateGradientOptimizer_optimize(t_NonLinearConjugateGradientOptimizer *self, PyObject *args);
            static PyObject *t_NonLinearConjugateGradientOptimizer_get__parameters_(t_NonLinearConjugateGradientOptimizer *self, void *data);
            static PyGetSetDef t_NonLinearConjugateGradientOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_NonLinearConjugateGradientOptimizer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_NonLinearConjugateGradientOptimizer__methods_[] = {
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer, of_, METH_VARARGS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer, optimize, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(NonLinearConjugateGradientOptimizer)[] = {
              { Py_tp_methods, t_NonLinearConjugateGradientOptimizer__methods_ },
              { Py_tp_init, (void *) t_NonLinearConjugateGradientOptimizer_init_ },
              { Py_tp_getset, t_NonLinearConjugateGradientOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(NonLinearConjugateGradientOptimizer)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::GradientMultivariateOptimizer),
              NULL
            };

            DEFINE_TYPE(NonLinearConjugateGradientOptimizer, t_NonLinearConjugateGradientOptimizer, NonLinearConjugateGradientOptimizer);
            PyObject *t_NonLinearConjugateGradientOptimizer::wrap_Object(const NonLinearConjugateGradientOptimizer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer *self = (t_NonLinearConjugateGradientOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_NonLinearConjugateGradientOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer *self = (t_NonLinearConjugateGradientOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_NonLinearConjugateGradientOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(NonLinearConjugateGradientOptimizer), &PY_TYPE_DEF(NonLinearConjugateGradientOptimizer), module, "NonLinearConjugateGradientOptimizer", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer), "IdentityPreconditioner", make_descriptor(&PY_TYPE_DEF(NonLinearConjugateGradientOptimizer$IdentityPreconditioner)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer), "Formula", make_descriptor(&PY_TYPE_DEF(NonLinearConjugateGradientOptimizer$Formula)));
            }

            void t_NonLinearConjugateGradientOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer), "class_", make_descriptor(NonLinearConjugateGradientOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer), "wrapfn_", make_descriptor(t_NonLinearConjugateGradientOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, NonLinearConjugateGradientOptimizer::initializeClass, 1)))
                return NULL;
              return t_NonLinearConjugateGradientOptimizer::wrap_Object(NonLinearConjugateGradientOptimizer(((t_NonLinearConjugateGradientOptimizer *) arg)->object.this$));
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, NonLinearConjugateGradientOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer_of_(t_NonLinearConjugateGradientOptimizer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_NonLinearConjugateGradientOptimizer_init_(t_NonLinearConjugateGradientOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::optim::ConvergenceChecker a1((jobject) NULL);
                  PyTypeObject **p1;
                  NonLinearConjugateGradientOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "KK", ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::nonlinear::scalar::gradient::t_NonLinearConjugateGradientOptimizer$Formula::parameters_, &a1, &p1, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
                  {
                    INT_CALL(object = NonLinearConjugateGradientOptimizer(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 5:
                {
                  ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::optim::ConvergenceChecker a1((jobject) NULL);
                  PyTypeObject **p1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  NonLinearConjugateGradientOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "KKDDD", ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::nonlinear::scalar::gradient::t_NonLinearConjugateGradientOptimizer$Formula::parameters_, &a1, &p1, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a2, &a3, &a4))
                  {
                    INT_CALL(object = NonLinearConjugateGradientOptimizer(a0, a1, a2, a3, a4));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 6:
                {
                  ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::optim::ConvergenceChecker a1((jobject) NULL);
                  PyTypeObject **p1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  ::org::hipparchus::optim::nonlinear::scalar::gradient::Preconditioner a5((jobject) NULL);
                  NonLinearConjugateGradientOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "KKDDDk", ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, ::org::hipparchus::optim::nonlinear::scalar::gradient::Preconditioner::initializeClass, &a0, &p0, ::org::hipparchus::optim::nonlinear::scalar::gradient::t_NonLinearConjugateGradientOptimizer$Formula::parameters_, &a1, &p1, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a2, &a3, &a4, &a5))
                  {
                    INT_CALL(object = NonLinearConjugateGradientOptimizer(a0, a1, a2, a3, a4, a5));
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

            static PyObject *t_NonLinearConjugateGradientOptimizer_optimize(t_NonLinearConjugateGradientOptimizer *self, PyObject *args)
            {
              JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
              ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.optimize(a0));
                return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
              }

              return callSuper(PY_TYPE(NonLinearConjugateGradientOptimizer), (PyObject *) self, "optimize", args, 2);
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer_get__parameters_(t_NonLinearConjugateGradientOptimizer *self, void *data)
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
#include "org/hipparchus/analysis/FieldMultivariateVectorFunction.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/CalculusFieldMultivariateVectorFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldMultivariateVectorFunction::class$ = NULL;
      jmethodID *FieldMultivariateVectorFunction::mids$ = NULL;
      bool FieldMultivariateVectorFunction::live$ = false;

      jclass FieldMultivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldMultivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldMultivariateVectorFunction_380a7b8fc0bebdfe] = env->getMethodID(cls, "toCalculusFieldMultivariateVectorFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldMultivariateVectorFunction;");
          mids$[mid_value_45349640cfb1ab66] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldMultivariateVectorFunction FieldMultivariateVectorFunction::toCalculusFieldMultivariateVectorFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldMultivariateVectorFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldMultivariateVectorFunction_380a7b8fc0bebdfe], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldMultivariateVectorFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_45349640cfb1ab66], a0.this$));
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
      static PyObject *t_FieldMultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateVectorFunction_toCalculusFieldMultivariateVectorFunction(t_FieldMultivariateVectorFunction *self, PyObject *arg);
      static PyObject *t_FieldMultivariateVectorFunction_value(t_FieldMultivariateVectorFunction *self, PyObject *arg);

      static PyMethodDef t_FieldMultivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_FieldMultivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateVectorFunction, toCalculusFieldMultivariateVectorFunction, METH_O),
        DECLARE_METHOD(t_FieldMultivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMultivariateVectorFunction)[] = {
        { Py_tp_methods, t_FieldMultivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMultivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMultivariateVectorFunction, t_FieldMultivariateVectorFunction, FieldMultivariateVectorFunction);

      void t_FieldMultivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMultivariateVectorFunction), &PY_TYPE_DEF(FieldMultivariateVectorFunction), module, "FieldMultivariateVectorFunction", 0);
      }

      void t_FieldMultivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateVectorFunction), "class_", make_descriptor(FieldMultivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateVectorFunction), "wrapfn_", make_descriptor(t_FieldMultivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMultivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_FieldMultivariateVectorFunction::wrap_Object(FieldMultivariateVectorFunction(((t_FieldMultivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldMultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMultivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMultivariateVectorFunction_toCalculusFieldMultivariateVectorFunction(t_FieldMultivariateVectorFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldMultivariateVectorFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldMultivariateVectorFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldMultivariateVectorFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldMultivariateVectorFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldMultivariateVectorFunction_value(t_FieldMultivariateVectorFunction *self, PyObject *arg)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
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
            mids$[mid_init$_ebc26dcaf4761286] = env->getMethodID(cls, "<init>", "([D)V");
            mids$[mid_add_08f5b27de6522ba7] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_antiDerivative_9acb2e9dad3cd99d] = env->getMethodID(cls, "antiDerivative", "()Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_degree_f2f64475e4580546] = env->getMethodID(cls, "degree", "()I");
            mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getCoefficients_7cdc325af0834901] = env->getMethodID(cls, "getCoefficients", "()[D");
            mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_integrate_824133ce4aec3505] = env->getMethodID(cls, "integrate", "(DD)D");
            mids$[mid_multiply_08f5b27de6522ba7] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_negate_9acb2e9dad3cd99d] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_polynomialDerivative_9acb2e9dad3cd99d] = env->getMethodID(cls, "polynomialDerivative", "()Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_subtract_08f5b27de6522ba7] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_d3398190482814dc] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");
            mids$[mid_evaluate_926a8b9763aa0b21] = env->getStaticMethodID(cls, "evaluate", "([DD)D");
            mids$[mid_differentiate_4b742fe429c22ba8] = env->getStaticMethodID(cls, "differentiate", "([D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialFunction::PolynomialFunction(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ebc26dcaf4761286, a0.this$)) {}

        PolynomialFunction PolynomialFunction::add(const PolynomialFunction & a0) const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_add_08f5b27de6522ba7], a0.this$));
        }

        PolynomialFunction PolynomialFunction::antiDerivative() const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_antiDerivative_9acb2e9dad3cd99d]));
        }

        jint PolynomialFunction::degree() const
        {
          return env->callIntMethod(this$, mids$[mid_degree_f2f64475e4580546]);
        }

        jboolean PolynomialFunction::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
        }

        JArray< jdouble > PolynomialFunction::getCoefficients() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCoefficients_7cdc325af0834901]));
        }

        jint PolynomialFunction::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
        }

        jdouble PolynomialFunction::integrate(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_integrate_824133ce4aec3505], a0, a1);
        }

        PolynomialFunction PolynomialFunction::multiply(const PolynomialFunction & a0) const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_multiply_08f5b27de6522ba7], a0.this$));
        }

        PolynomialFunction PolynomialFunction::negate() const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_negate_9acb2e9dad3cd99d]));
        }

        PolynomialFunction PolynomialFunction::polynomialDerivative() const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_polynomialDerivative_9acb2e9dad3cd99d]));
        }

        PolynomialFunction PolynomialFunction::subtract(const PolynomialFunction & a0) const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_subtract_08f5b27de6522ba7], a0.this$));
        }

        ::java::lang::String PolynomialFunction::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
        }

        jdouble PolynomialFunction::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::CalculusFieldElement PolynomialFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_d3398190482814dc], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::Derivative PolynomialFunction::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
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
#include "org/hipparchus/stat/descriptive/vector/VectorialStorelessStatistic.h"
#include "org/hipparchus/stat/descriptive/StorelessMultivariateStatistic.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/StorelessUnivariateStatistic.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace vector {

          ::java::lang::Class *VectorialStorelessStatistic::class$ = NULL;
          jmethodID *VectorialStorelessStatistic::mids$ = NULL;
          bool VectorialStorelessStatistic::live$ = false;

          jclass VectorialStorelessStatistic::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/vector/VectorialStorelessStatistic");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5a48054a38617aaa] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/stat/descriptive/StorelessUnivariateStatistic;)V");
              mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_7cdc325af0834901] = env->getMethodID(cls, "getResult", "()[D");
              mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_increment_ebc26dcaf4761286] = env->getMethodID(cls, "increment", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          VectorialStorelessStatistic::VectorialStorelessStatistic(jint a0, const ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5a48054a38617aaa, a0, a1.this$)) {}

          void VectorialStorelessStatistic::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
          }

          jboolean VectorialStorelessStatistic::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
          }

          jint VectorialStorelessStatistic::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
          }

          jlong VectorialStorelessStatistic::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
          }

          JArray< jdouble > VectorialStorelessStatistic::getResult() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getResult_7cdc325af0834901]));
          }

          jint VectorialStorelessStatistic::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
          }

          void VectorialStorelessStatistic::increment(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_ebc26dcaf4761286], a0.this$);
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
        namespace vector {
          static PyObject *t_VectorialStorelessStatistic_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_VectorialStorelessStatistic_instance_(PyTypeObject *type, PyObject *arg);
          static int t_VectorialStorelessStatistic_init_(t_VectorialStorelessStatistic *self, PyObject *args, PyObject *kwds);
          static PyObject *t_VectorialStorelessStatistic_clear(t_VectorialStorelessStatistic *self);
          static PyObject *t_VectorialStorelessStatistic_equals(t_VectorialStorelessStatistic *self, PyObject *args);
          static PyObject *t_VectorialStorelessStatistic_getDimension(t_VectorialStorelessStatistic *self);
          static PyObject *t_VectorialStorelessStatistic_getN(t_VectorialStorelessStatistic *self);
          static PyObject *t_VectorialStorelessStatistic_getResult(t_VectorialStorelessStatistic *self);
          static PyObject *t_VectorialStorelessStatistic_hashCode(t_VectorialStorelessStatistic *self, PyObject *args);
          static PyObject *t_VectorialStorelessStatistic_increment(t_VectorialStorelessStatistic *self, PyObject *arg);
          static PyObject *t_VectorialStorelessStatistic_get__dimension(t_VectorialStorelessStatistic *self, void *data);
          static PyObject *t_VectorialStorelessStatistic_get__n(t_VectorialStorelessStatistic *self, void *data);
          static PyObject *t_VectorialStorelessStatistic_get__result(t_VectorialStorelessStatistic *self, void *data);
          static PyGetSetDef t_VectorialStorelessStatistic__fields_[] = {
            DECLARE_GET_FIELD(t_VectorialStorelessStatistic, dimension),
            DECLARE_GET_FIELD(t_VectorialStorelessStatistic, n),
            DECLARE_GET_FIELD(t_VectorialStorelessStatistic, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_VectorialStorelessStatistic__methods_[] = {
            DECLARE_METHOD(t_VectorialStorelessStatistic, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, clear, METH_NOARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, equals, METH_VARARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, getN, METH_NOARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, getResult, METH_NOARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, increment, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(VectorialStorelessStatistic)[] = {
            { Py_tp_methods, t_VectorialStorelessStatistic__methods_ },
            { Py_tp_init, (void *) t_VectorialStorelessStatistic_init_ },
            { Py_tp_getset, t_VectorialStorelessStatistic__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(VectorialStorelessStatistic)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(VectorialStorelessStatistic, t_VectorialStorelessStatistic, VectorialStorelessStatistic);

          void t_VectorialStorelessStatistic::install(PyObject *module)
          {
            installType(&PY_TYPE(VectorialStorelessStatistic), &PY_TYPE_DEF(VectorialStorelessStatistic), module, "VectorialStorelessStatistic", 0);
          }

          void t_VectorialStorelessStatistic::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialStorelessStatistic), "class_", make_descriptor(VectorialStorelessStatistic::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialStorelessStatistic), "wrapfn_", make_descriptor(t_VectorialStorelessStatistic::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialStorelessStatistic), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_VectorialStorelessStatistic_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, VectorialStorelessStatistic::initializeClass, 1)))
              return NULL;
            return t_VectorialStorelessStatistic::wrap_Object(VectorialStorelessStatistic(((t_VectorialStorelessStatistic *) arg)->object.this$));
          }
          static PyObject *t_VectorialStorelessStatistic_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, VectorialStorelessStatistic::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_VectorialStorelessStatistic_init_(t_VectorialStorelessStatistic *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic a1((jobject) NULL);
            VectorialStorelessStatistic object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic::initializeClass, &a0, &a1))
            {
              INT_CALL(object = VectorialStorelessStatistic(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_VectorialStorelessStatistic_clear(t_VectorialStorelessStatistic *self)
          {
            OBJ_CALL(self->object.clear());
            Py_RETURN_NONE;
          }

          static PyObject *t_VectorialStorelessStatistic_equals(t_VectorialStorelessStatistic *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(VectorialStorelessStatistic), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_VectorialStorelessStatistic_getDimension(t_VectorialStorelessStatistic *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_VectorialStorelessStatistic_getN(t_VectorialStorelessStatistic *self)
          {
            jlong result;
            OBJ_CALL(result = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }

          static PyObject *t_VectorialStorelessStatistic_getResult(t_VectorialStorelessStatistic *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getResult());
            return result.wrap();
          }

          static PyObject *t_VectorialStorelessStatistic_hashCode(t_VectorialStorelessStatistic *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(VectorialStorelessStatistic), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_VectorialStorelessStatistic_increment(t_VectorialStorelessStatistic *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "increment", arg);
            return NULL;
          }

          static PyObject *t_VectorialStorelessStatistic_get__dimension(t_VectorialStorelessStatistic *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_VectorialStorelessStatistic_get__n(t_VectorialStorelessStatistic *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_VectorialStorelessStatistic_get__result(t_VectorialStorelessStatistic *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getResult());
            return value.wrap();
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/FundamentalNutationArguments.h"
#include "org/orekit/time/TimeScales.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeScale.h"
#include "java/io/InputStream.h"
#include "java/io/Serializable.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *FundamentalNutationArguments::class$ = NULL;
      jmethodID *FundamentalNutationArguments::mids$ = NULL;
      bool FundamentalNutationArguments::live$ = false;

      jclass FundamentalNutationArguments::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/FundamentalNutationArguments");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_84a22072d23326c4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScale;Ljava/util/List;)V");
          mids$[mid_init$_f6344200159c44ac] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScale;Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_init$_83820303330a596d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScale;Ljava/util/List;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_init$_2fb096956bb6d46b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScale;Ljava/io/InputStream;Ljava/lang/String;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_evaluateAll_efb9570f1b0522e0] = env->getMethodID(cls, "evaluateAll", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/data/BodiesElements;");
          mids$[mid_evaluateAll_918facbfb636cf26] = env->getMethodID(cls, "evaluateAll", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/data/FieldBodiesElements;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FundamentalNutationArguments::FundamentalNutationArguments(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::time::TimeScale & a1, const ::java::util::List & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_84a22072d23326c4, a0.this$, a1.this$, a2.this$)) {}

      FundamentalNutationArguments::FundamentalNutationArguments(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::time::TimeScale & a1, const ::java::io::InputStream & a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f6344200159c44ac, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FundamentalNutationArguments::FundamentalNutationArguments(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::time::TimeScale & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeScales & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_83820303330a596d, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FundamentalNutationArguments::FundamentalNutationArguments(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::time::TimeScale & a1, const ::java::io::InputStream & a2, const ::java::lang::String & a3, const ::org::orekit::time::TimeScales & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2fb096956bb6d46b, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::data::BodiesElements FundamentalNutationArguments::evaluateAll(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::data::BodiesElements(env->callObjectMethod(this$, mids$[mid_evaluateAll_efb9570f1b0522e0], a0.this$));
      }

      ::org::orekit::data::FieldBodiesElements FundamentalNutationArguments::evaluateAll(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::data::FieldBodiesElements(env->callObjectMethod(this$, mids$[mid_evaluateAll_918facbfb636cf26], a0.this$));
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
      static PyObject *t_FundamentalNutationArguments_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FundamentalNutationArguments_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FundamentalNutationArguments_init_(t_FundamentalNutationArguments *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FundamentalNutationArguments_evaluateAll(t_FundamentalNutationArguments *self, PyObject *args);

      static PyMethodDef t_FundamentalNutationArguments__methods_[] = {
        DECLARE_METHOD(t_FundamentalNutationArguments, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FundamentalNutationArguments, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FundamentalNutationArguments, evaluateAll, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FundamentalNutationArguments)[] = {
        { Py_tp_methods, t_FundamentalNutationArguments__methods_ },
        { Py_tp_init, (void *) t_FundamentalNutationArguments_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FundamentalNutationArguments)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FundamentalNutationArguments, t_FundamentalNutationArguments, FundamentalNutationArguments);

      void t_FundamentalNutationArguments::install(PyObject *module)
      {
        installType(&PY_TYPE(FundamentalNutationArguments), &PY_TYPE_DEF(FundamentalNutationArguments), module, "FundamentalNutationArguments", 0);
      }

      void t_FundamentalNutationArguments::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FundamentalNutationArguments), "class_", make_descriptor(FundamentalNutationArguments::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FundamentalNutationArguments), "wrapfn_", make_descriptor(t_FundamentalNutationArguments::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FundamentalNutationArguments), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FundamentalNutationArguments_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FundamentalNutationArguments::initializeClass, 1)))
          return NULL;
        return t_FundamentalNutationArguments::wrap_Object(FundamentalNutationArguments(((t_FundamentalNutationArguments *) arg)->object.this$));
      }
      static PyObject *t_FundamentalNutationArguments_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FundamentalNutationArguments::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FundamentalNutationArguments_init_(t_FundamentalNutationArguments *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            FundamentalNutationArguments object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = FundamentalNutationArguments(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::io::InputStream a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            FundamentalNutationArguments object((jobject) NULL);

            if (!parseArgs(args, "Kkks", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::java::io::InputStream::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &a3))
            {
              INT_CALL(object = FundamentalNutationArguments(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::TimeScales a3((jobject) NULL);
            FundamentalNutationArguments object((jobject) NULL);

            if (!parseArgs(args, "KkKk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_, &a3))
            {
              INT_CALL(object = FundamentalNutationArguments(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::io::InputStream a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ::org::orekit::time::TimeScales a4((jobject) NULL);
            FundamentalNutationArguments object((jobject) NULL);

            if (!parseArgs(args, "Kkksk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::java::io::InputStream::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = FundamentalNutationArguments(a0, a1, a2, a3, a4));
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

      static PyObject *t_FundamentalNutationArguments_evaluateAll(t_FundamentalNutationArguments *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::data::BodiesElements result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.evaluateAll(a0));
              return ::org::orekit::data::t_BodiesElements::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::data::FieldBodiesElements result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.evaluateAll(a0));
              return ::org::orekit::data::t_FieldBodiesElements::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "evaluateAll", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AbstractVariableStepFieldIntegratorBuilder.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AbstractVariableStepFieldIntegratorBuilder::class$ = NULL;
        jmethodID *AbstractVariableStepFieldIntegratorBuilder::mids$ = NULL;
        bool AbstractVariableStepFieldIntegratorBuilder::live$ = false;

        jclass AbstractVariableStepFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AbstractVariableStepFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildIntegrator_79616f78bb6df44f] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::AbstractFieldIntegrator AbstractVariableStepFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_79616f78bb6df44f], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_of_(t_AbstractVariableStepFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_buildIntegrator(t_AbstractVariableStepFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_get__parameters_(t_AbstractVariableStepFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_AbstractVariableStepFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractVariableStepFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractVariableStepFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AbstractVariableStepFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractVariableStepFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractVariableStepFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractVariableStepFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractVariableStepFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_AbstractVariableStepFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractVariableStepFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractVariableStepFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(AbstractVariableStepFieldIntegratorBuilder, t_AbstractVariableStepFieldIntegratorBuilder, AbstractVariableStepFieldIntegratorBuilder);
        PyObject *t_AbstractVariableStepFieldIntegratorBuilder::wrap_Object(const AbstractVariableStepFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractVariableStepFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractVariableStepFieldIntegratorBuilder *self = (t_AbstractVariableStepFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractVariableStepFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractVariableStepFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractVariableStepFieldIntegratorBuilder *self = (t_AbstractVariableStepFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractVariableStepFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractVariableStepFieldIntegratorBuilder), &PY_TYPE_DEF(AbstractVariableStepFieldIntegratorBuilder), module, "AbstractVariableStepFieldIntegratorBuilder", 0);
        }

        void t_AbstractVariableStepFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractVariableStepFieldIntegratorBuilder), "class_", make_descriptor(AbstractVariableStepFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractVariableStepFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_AbstractVariableStepFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractVariableStepFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractVariableStepFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AbstractVariableStepFieldIntegratorBuilder::wrap_Object(AbstractVariableStepFieldIntegratorBuilder(((t_AbstractVariableStepFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractVariableStepFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_of_(t_AbstractVariableStepFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_buildIntegrator(t_AbstractVariableStepFieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(AbstractVariableStepFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_get__parameters_(t_AbstractVariableStepFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/util/Locale.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *Localizable::class$ = NULL;
      jmethodID *Localizable::mids$ = NULL;
      bool Localizable::live$ = false;

      jclass Localizable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/Localizable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_bab3be9b232acc5a] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_0090f7797e403f43] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String Localizable::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_bab3be9b232acc5a], a0.this$));
      }

      ::java::lang::String Localizable::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_0090f7797e403f43]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_Localizable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Localizable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Localizable_getLocalizedString(t_Localizable *self, PyObject *arg);
      static PyObject *t_Localizable_getSourceString(t_Localizable *self);
      static PyObject *t_Localizable_get__sourceString(t_Localizable *self, void *data);
      static PyGetSetDef t_Localizable__fields_[] = {
        DECLARE_GET_FIELD(t_Localizable, sourceString),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Localizable__methods_[] = {
        DECLARE_METHOD(t_Localizable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Localizable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Localizable, getLocalizedString, METH_O),
        DECLARE_METHOD(t_Localizable, getSourceString, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Localizable)[] = {
        { Py_tp_methods, t_Localizable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Localizable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Localizable)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(Localizable, t_Localizable, Localizable);

      void t_Localizable::install(PyObject *module)
      {
        installType(&PY_TYPE(Localizable), &PY_TYPE_DEF(Localizable), module, "Localizable", 0);
      }

      void t_Localizable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Localizable), "class_", make_descriptor(Localizable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Localizable), "wrapfn_", make_descriptor(t_Localizable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Localizable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Localizable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Localizable::initializeClass, 1)))
          return NULL;
        return t_Localizable::wrap_Object(Localizable(((t_Localizable *) arg)->object.this$));
      }
      static PyObject *t_Localizable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Localizable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Localizable_getLocalizedString(t_Localizable *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLocalizedString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLocalizedString", arg);
        return NULL;
      }

      static PyObject *t_Localizable_getSourceString(t_Localizable *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_Localizable_get__sourceString(t_Localizable *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSourceString());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sinex/Station.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/files/sinex/Station$ReferenceSystem.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *Station::class$ = NULL;
        jmethodID *Station::mids$ = NULL;
        bool Station::live$ = false;

        jclass Station::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/Station");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addAntennaTypeValidAfter_aaa3235462d82b75] = env->getMethodID(cls, "addAntennaTypeValidAfter", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_addAntennaTypeValidBefore_aaa3235462d82b75] = env->getMethodID(cls, "addAntennaTypeValidBefore", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_addStationEccentricitiesValidAfter_acc79527de855735] = env->getMethodID(cls, "addStationEccentricitiesValidAfter", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_addStationEccentricitiesValidBefore_acc79527de855735] = env->getMethodID(cls, "addStationEccentricitiesValidBefore", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_getAntennaType_f6573813807bab89] = env->getMethodID(cls, "getAntennaType", "(Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
            mids$[mid_getAntennaTypeTimeSpanMap_afbf756dd3c251fe] = env->getMethodID(cls, "getAntennaTypeTimeSpanMap", "()Lorg/orekit/utils/TimeSpanMap;");
            mids$[mid_getDomes_0090f7797e403f43] = env->getMethodID(cls, "getDomes", "()Ljava/lang/String;");
            mids$[mid_getEccRefSystem_f10ce42652085eb3] = env->getMethodID(cls, "getEccRefSystem", "()Lorg/orekit/files/sinex/Station$ReferenceSystem;");
            mids$[mid_getEccentricities_71c51b45829333ce] = env->getMethodID(cls, "getEccentricities", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getEccentricitiesTimeSpanMap_afbf756dd3c251fe] = env->getMethodID(cls, "getEccentricitiesTimeSpanMap", "()Lorg/orekit/utils/TimeSpanMap;");
            mids$[mid_getEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getPosition_17a952530a808943] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getSiteCode_0090f7797e403f43] = env->getMethodID(cls, "getSiteCode", "()Ljava/lang/String;");
            mids$[mid_getValidFrom_aaa854c403487cf3] = env->getMethodID(cls, "getValidFrom", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getValidUntil_aaa854c403487cf3] = env->getMethodID(cls, "getValidUntil", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getVelocity_17a952530a808943] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_setDomes_e939c6558ae8d313] = env->getMethodID(cls, "setDomes", "(Ljava/lang/String;)V");
            mids$[mid_setEccRefSystem_12e1c39738d286bc] = env->getMethodID(cls, "setEccRefSystem", "(Lorg/orekit/files/sinex/Station$ReferenceSystem;)V");
            mids$[mid_setEpoch_e82d68cd9f886886] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setPosition_a94622407b723689] = env->getMethodID(cls, "setPosition", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_setSiteCode_e939c6558ae8d313] = env->getMethodID(cls, "setSiteCode", "(Ljava/lang/String;)V");
            mids$[mid_setValidFrom_e82d68cd9f886886] = env->getMethodID(cls, "setValidFrom", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setValidUntil_e82d68cd9f886886] = env->getMethodID(cls, "setValidUntil", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setVelocity_a94622407b723689] = env->getMethodID(cls, "setVelocity", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Station::Station() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void Station::addAntennaTypeValidAfter(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addAntennaTypeValidAfter_aaa3235462d82b75], a0.this$, a1.this$);
        }

        void Station::addAntennaTypeValidBefore(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addAntennaTypeValidBefore_aaa3235462d82b75], a0.this$, a1.this$);
        }

        void Station::addStationEccentricitiesValidAfter(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addStationEccentricitiesValidAfter_acc79527de855735], a0.this$, a1.this$);
        }

        void Station::addStationEccentricitiesValidBefore(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addStationEccentricitiesValidBefore_acc79527de855735], a0.this$, a1.this$);
        }

        ::java::lang::String Station::getAntennaType(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAntennaType_f6573813807bab89], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap Station::getAntennaTypeTimeSpanMap() const
        {
          return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getAntennaTypeTimeSpanMap_afbf756dd3c251fe]));
        }

        ::java::lang::String Station::getDomes() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDomes_0090f7797e403f43]));
        }

        ::org::orekit::files::sinex::Station$ReferenceSystem Station::getEccRefSystem() const
        {
          return ::org::orekit::files::sinex::Station$ReferenceSystem(env->callObjectMethod(this$, mids$[mid_getEccRefSystem_f10ce42652085eb3]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Station::getEccentricities(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEccentricities_71c51b45829333ce], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap Station::getEccentricitiesTimeSpanMap() const
        {
          return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getEccentricitiesTimeSpanMap_afbf756dd3c251fe]));
        }

        ::org::orekit::time::AbsoluteDate Station::getEpoch() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_aaa854c403487cf3]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Station::getPosition() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_17a952530a808943]));
        }

        ::java::lang::String Station::getSiteCode() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSiteCode_0090f7797e403f43]));
        }

        ::org::orekit::time::AbsoluteDate Station::getValidFrom() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getValidFrom_aaa854c403487cf3]));
        }

        ::org::orekit::time::AbsoluteDate Station::getValidUntil() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getValidUntil_aaa854c403487cf3]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Station::getVelocity() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_17a952530a808943]));
        }

        void Station::setDomes(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDomes_e939c6558ae8d313], a0.this$);
        }

        void Station::setEccRefSystem(const ::org::orekit::files::sinex::Station$ReferenceSystem & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEccRefSystem_12e1c39738d286bc], a0.this$);
        }

        void Station::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEpoch_e82d68cd9f886886], a0.this$);
        }

        void Station::setPosition(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPosition_a94622407b723689], a0.this$);
        }

        void Station::setSiteCode(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSiteCode_e939c6558ae8d313], a0.this$);
        }

        void Station::setValidFrom(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setValidFrom_e82d68cd9f886886], a0.this$);
        }

        void Station::setValidUntil(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setValidUntil_e82d68cd9f886886], a0.this$);
        }

        void Station::setVelocity(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setVelocity_a94622407b723689], a0.this$);
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
        static PyObject *t_Station_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Station_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Station_init_(t_Station *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Station_addAntennaTypeValidAfter(t_Station *self, PyObject *args);
        static PyObject *t_Station_addAntennaTypeValidBefore(t_Station *self, PyObject *args);
        static PyObject *t_Station_addStationEccentricitiesValidAfter(t_Station *self, PyObject *args);
        static PyObject *t_Station_addStationEccentricitiesValidBefore(t_Station *self, PyObject *args);
        static PyObject *t_Station_getAntennaType(t_Station *self, PyObject *arg);
        static PyObject *t_Station_getAntennaTypeTimeSpanMap(t_Station *self);
        static PyObject *t_Station_getDomes(t_Station *self);
        static PyObject *t_Station_getEccRefSystem(t_Station *self);
        static PyObject *t_Station_getEccentricities(t_Station *self, PyObject *arg);
        static PyObject *t_Station_getEccentricitiesTimeSpanMap(t_Station *self);
        static PyObject *t_Station_getEpoch(t_Station *self);
        static PyObject *t_Station_getPosition(t_Station *self);
        static PyObject *t_Station_getSiteCode(t_Station *self);
        static PyObject *t_Station_getValidFrom(t_Station *self);
        static PyObject *t_Station_getValidUntil(t_Station *self);
        static PyObject *t_Station_getVelocity(t_Station *self);
        static PyObject *t_Station_setDomes(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setEccRefSystem(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setEpoch(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setPosition(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setSiteCode(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setValidFrom(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setValidUntil(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setVelocity(t_Station *self, PyObject *arg);
        static PyObject *t_Station_get__antennaTypeTimeSpanMap(t_Station *self, void *data);
        static PyObject *t_Station_get__domes(t_Station *self, void *data);
        static int t_Station_set__domes(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__eccRefSystem(t_Station *self, void *data);
        static int t_Station_set__eccRefSystem(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__eccentricitiesTimeSpanMap(t_Station *self, void *data);
        static PyObject *t_Station_get__epoch(t_Station *self, void *data);
        static int t_Station_set__epoch(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__position(t_Station *self, void *data);
        static int t_Station_set__position(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__siteCode(t_Station *self, void *data);
        static int t_Station_set__siteCode(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__validFrom(t_Station *self, void *data);
        static int t_Station_set__validFrom(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__validUntil(t_Station *self, void *data);
        static int t_Station_set__validUntil(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__velocity(t_Station *self, void *data);
        static int t_Station_set__velocity(t_Station *self, PyObject *arg, void *data);
        static PyGetSetDef t_Station__fields_[] = {
          DECLARE_GET_FIELD(t_Station, antennaTypeTimeSpanMap),
          DECLARE_GETSET_FIELD(t_Station, domes),
          DECLARE_GETSET_FIELD(t_Station, eccRefSystem),
          DECLARE_GET_FIELD(t_Station, eccentricitiesTimeSpanMap),
          DECLARE_GETSET_FIELD(t_Station, epoch),
          DECLARE_GETSET_FIELD(t_Station, position),
          DECLARE_GETSET_FIELD(t_Station, siteCode),
          DECLARE_GETSET_FIELD(t_Station, validFrom),
          DECLARE_GETSET_FIELD(t_Station, validUntil),
          DECLARE_GETSET_FIELD(t_Station, velocity),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Station__methods_[] = {
          DECLARE_METHOD(t_Station, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Station, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Station, addAntennaTypeValidAfter, METH_VARARGS),
          DECLARE_METHOD(t_Station, addAntennaTypeValidBefore, METH_VARARGS),
          DECLARE_METHOD(t_Station, addStationEccentricitiesValidAfter, METH_VARARGS),
          DECLARE_METHOD(t_Station, addStationEccentricitiesValidBefore, METH_VARARGS),
          DECLARE_METHOD(t_Station, getAntennaType, METH_O),
          DECLARE_METHOD(t_Station, getAntennaTypeTimeSpanMap, METH_NOARGS),
          DECLARE_METHOD(t_Station, getDomes, METH_NOARGS),
          DECLARE_METHOD(t_Station, getEccRefSystem, METH_NOARGS),
          DECLARE_METHOD(t_Station, getEccentricities, METH_O),
          DECLARE_METHOD(t_Station, getEccentricitiesTimeSpanMap, METH_NOARGS),
          DECLARE_METHOD(t_Station, getEpoch, METH_NOARGS),
          DECLARE_METHOD(t_Station, getPosition, METH_NOARGS),
          DECLARE_METHOD(t_Station, getSiteCode, METH_NOARGS),
          DECLARE_METHOD(t_Station, getValidFrom, METH_NOARGS),
          DECLARE_METHOD(t_Station, getValidUntil, METH_NOARGS),
          DECLARE_METHOD(t_Station, getVelocity, METH_NOARGS),
          DECLARE_METHOD(t_Station, setDomes, METH_O),
          DECLARE_METHOD(t_Station, setEccRefSystem, METH_O),
          DECLARE_METHOD(t_Station, setEpoch, METH_O),
          DECLARE_METHOD(t_Station, setPosition, METH_O),
          DECLARE_METHOD(t_Station, setSiteCode, METH_O),
          DECLARE_METHOD(t_Station, setValidFrom, METH_O),
          DECLARE_METHOD(t_Station, setValidUntil, METH_O),
          DECLARE_METHOD(t_Station, setVelocity, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Station)[] = {
          { Py_tp_methods, t_Station__methods_ },
          { Py_tp_init, (void *) t_Station_init_ },
          { Py_tp_getset, t_Station__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Station)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Station, t_Station, Station);

        void t_Station::install(PyObject *module)
        {
          installType(&PY_TYPE(Station), &PY_TYPE_DEF(Station), module, "Station", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station), "ReferenceSystem", make_descriptor(&PY_TYPE_DEF(Station$ReferenceSystem)));
        }

        void t_Station::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station), "class_", make_descriptor(Station::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station), "wrapfn_", make_descriptor(t_Station::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Station_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Station::initializeClass, 1)))
            return NULL;
          return t_Station::wrap_Object(Station(((t_Station *) arg)->object.this$));
        }
        static PyObject *t_Station_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Station::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Station_init_(t_Station *self, PyObject *args, PyObject *kwds)
        {
          Station object((jobject) NULL);

          INT_CALL(object = Station());
          self->object = object;

          return 0;
        }

        static PyObject *t_Station_addAntennaTypeValidAfter(t_Station *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addAntennaTypeValidAfter(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAntennaTypeValidAfter", args);
          return NULL;
        }

        static PyObject *t_Station_addAntennaTypeValidBefore(t_Station *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addAntennaTypeValidBefore(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAntennaTypeValidBefore", args);
          return NULL;
        }

        static PyObject *t_Station_addStationEccentricitiesValidAfter(t_Station *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addStationEccentricitiesValidAfter(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addStationEccentricitiesValidAfter", args);
          return NULL;
        }

        static PyObject *t_Station_addStationEccentricitiesValidBefore(t_Station *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addStationEccentricitiesValidBefore(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addStationEccentricitiesValidBefore", args);
          return NULL;
        }

        static PyObject *t_Station_getAntennaType(t_Station *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getAntennaType(a0));
            return j2p(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getAntennaType", arg);
          return NULL;
        }

        static PyObject *t_Station_getAntennaTypeTimeSpanMap(t_Station *self)
        {
          ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
          OBJ_CALL(result = self->object.getAntennaTypeTimeSpanMap());
          return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_Station_getDomes(t_Station *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDomes());
          return j2p(result);
        }

        static PyObject *t_Station_getEccRefSystem(t_Station *self)
        {
          ::org::orekit::files::sinex::Station$ReferenceSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getEccRefSystem());
          return ::org::orekit::files::sinex::t_Station$ReferenceSystem::wrap_Object(result);
        }

        static PyObject *t_Station_getEccentricities(t_Station *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getEccentricities(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEccentricities", arg);
          return NULL;
        }

        static PyObject *t_Station_getEccentricitiesTimeSpanMap(t_Station *self)
        {
          ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
          OBJ_CALL(result = self->object.getEccentricitiesTimeSpanMap());
          return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D));
        }

        static PyObject *t_Station_getEpoch(t_Station *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Station_getPosition(t_Station *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_Station_getSiteCode(t_Station *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSiteCode());
          return j2p(result);
        }

        static PyObject *t_Station_getValidFrom(t_Station *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getValidFrom());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Station_getValidUntil(t_Station *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getValidUntil());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Station_getVelocity(t_Station *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getVelocity());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_Station_setDomes(t_Station *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setDomes(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDomes", arg);
          return NULL;
        }

        static PyObject *t_Station_setEccRefSystem(t_Station *self, PyObject *arg)
        {
          ::org::orekit::files::sinex::Station$ReferenceSystem a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::files::sinex::Station$ReferenceSystem::initializeClass, &a0, &p0, ::org::orekit::files::sinex::t_Station$ReferenceSystem::parameters_))
          {
            OBJ_CALL(self->object.setEccRefSystem(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEccRefSystem", arg);
          return NULL;
        }

        static PyObject *t_Station_setEpoch(t_Station *self, PyObject *arg)
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

        static PyObject *t_Station_setPosition(t_Station *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setPosition(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPosition", arg);
          return NULL;
        }

        static PyObject *t_Station_setSiteCode(t_Station *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setSiteCode(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSiteCode", arg);
          return NULL;
        }

        static PyObject *t_Station_setValidFrom(t_Station *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setValidFrom(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setValidFrom", arg);
          return NULL;
        }

        static PyObject *t_Station_setValidUntil(t_Station *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setValidUntil(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setValidUntil", arg);
          return NULL;
        }

        static PyObject *t_Station_setVelocity(t_Station *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setVelocity(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setVelocity", arg);
          return NULL;
        }

        static PyObject *t_Station_get__antennaTypeTimeSpanMap(t_Station *self, void *data)
        {
          ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
          OBJ_CALL(value = self->object.getAntennaTypeTimeSpanMap());
          return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
        }

        static PyObject *t_Station_get__domes(t_Station *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getDomes());
          return j2p(value);
        }
        static int t_Station_set__domes(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setDomes(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "domes", arg);
          return -1;
        }

        static PyObject *t_Station_get__eccRefSystem(t_Station *self, void *data)
        {
          ::org::orekit::files::sinex::Station$ReferenceSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getEccRefSystem());
          return ::org::orekit::files::sinex::t_Station$ReferenceSystem::wrap_Object(value);
        }
        static int t_Station_set__eccRefSystem(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::sinex::Station$ReferenceSystem value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::sinex::Station$ReferenceSystem::initializeClass, &value))
            {
              INT_CALL(self->object.setEccRefSystem(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "eccRefSystem", arg);
          return -1;
        }

        static PyObject *t_Station_get__eccentricitiesTimeSpanMap(t_Station *self, void *data)
        {
          ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
          OBJ_CALL(value = self->object.getEccentricitiesTimeSpanMap());
          return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
        }

        static PyObject *t_Station_get__epoch(t_Station *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_Station_set__epoch(t_Station *self, PyObject *arg, void *data)
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

        static PyObject *t_Station_get__position(t_Station *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
        static int t_Station_set__position(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              INT_CALL(self->object.setPosition(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "position", arg);
          return -1;
        }

        static PyObject *t_Station_get__siteCode(t_Station *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSiteCode());
          return j2p(value);
        }
        static int t_Station_set__siteCode(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setSiteCode(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "siteCode", arg);
          return -1;
        }

        static PyObject *t_Station_get__validFrom(t_Station *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getValidFrom());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_Station_set__validFrom(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              INT_CALL(self->object.setValidFrom(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "validFrom", arg);
          return -1;
        }

        static PyObject *t_Station_get__validUntil(t_Station *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getValidUntil());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_Station_set__validUntil(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              INT_CALL(self->object.setValidUntil(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "validUntil", arg);
          return -1;
        }

        static PyObject *t_Station_get__velocity(t_Station *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getVelocity());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
        static int t_Station_set__velocity(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              INT_CALL(self->object.setVelocity(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "velocity", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *AdditionalStateProvider::class$ = NULL;
      jmethodID *AdditionalStateProvider::mids$ = NULL;
      bool AdditionalStateProvider::live$ = false;

      jclass AdditionalStateProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/AdditionalStateProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAdditionalState_137d7db4f3f987f7] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_yields_97634138963fb58a] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > AdditionalStateProvider::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_137d7db4f3f987f7], a0.this$));
      }

      ::java::lang::String AdditionalStateProvider::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      void AdditionalStateProvider::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
      }

      jboolean AdditionalStateProvider::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_yields_97634138963fb58a], a0.this$);
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
      static PyObject *t_AdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AdditionalStateProvider_getAdditionalState(t_AdditionalStateProvider *self, PyObject *arg);
      static PyObject *t_AdditionalStateProvider_getName(t_AdditionalStateProvider *self);
      static PyObject *t_AdditionalStateProvider_init(t_AdditionalStateProvider *self, PyObject *args);
      static PyObject *t_AdditionalStateProvider_yields(t_AdditionalStateProvider *self, PyObject *arg);
      static PyObject *t_AdditionalStateProvider_get__name(t_AdditionalStateProvider *self, void *data);
      static PyGetSetDef t_AdditionalStateProvider__fields_[] = {
        DECLARE_GET_FIELD(t_AdditionalStateProvider, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AdditionalStateProvider__methods_[] = {
        DECLARE_METHOD(t_AdditionalStateProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AdditionalStateProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AdditionalStateProvider, getAdditionalState, METH_O),
        DECLARE_METHOD(t_AdditionalStateProvider, getName, METH_NOARGS),
        DECLARE_METHOD(t_AdditionalStateProvider, init, METH_VARARGS),
        DECLARE_METHOD(t_AdditionalStateProvider, yields, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AdditionalStateProvider)[] = {
        { Py_tp_methods, t_AdditionalStateProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AdditionalStateProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AdditionalStateProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AdditionalStateProvider, t_AdditionalStateProvider, AdditionalStateProvider);

      void t_AdditionalStateProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(AdditionalStateProvider), &PY_TYPE_DEF(AdditionalStateProvider), module, "AdditionalStateProvider", 0);
      }

      void t_AdditionalStateProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalStateProvider), "class_", make_descriptor(AdditionalStateProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalStateProvider), "wrapfn_", make_descriptor(t_AdditionalStateProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalStateProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AdditionalStateProvider::initializeClass, 1)))
          return NULL;
        return t_AdditionalStateProvider::wrap_Object(AdditionalStateProvider(((t_AdditionalStateProvider *) arg)->object.this$));
      }
      static PyObject *t_AdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AdditionalStateProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AdditionalStateProvider_getAdditionalState(t_AdditionalStateProvider *self, PyObject *arg)
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

      static PyObject *t_AdditionalStateProvider_getName(t_AdditionalStateProvider *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_AdditionalStateProvider_init(t_AdditionalStateProvider *self, PyObject *args)
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

      static PyObject *t_AdditionalStateProvider_yields(t_AdditionalStateProvider *self, PyObject *arg)
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

      static PyObject *t_AdditionalStateProvider_get__name(t_AdditionalStateProvider *self, void *data)
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
#include "org/orekit/attitudes/TargetPointing.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *TargetPointing::class$ = NULL;
      jmethodID *TargetPointing::mids$ = NULL;
      bool TargetPointing::live$ = false;

      jclass TargetPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/TargetPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b8aeac3750b09066] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_2fafedf077c543d8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/BodyShape;)V");
          mids$[mid_getTargetPV_ab0341569f219f18] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPV_99b96e260ceb5fe3] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TargetPointing::TargetPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_b8aeac3750b09066, a0.this$, a1.this$, a2.this$)) {}

      TargetPointing::TargetPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::bodies::BodyShape & a2) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_2fafedf077c543d8, a0.this$, a1.this$, a2.this$)) {}

      ::org::orekit::utils::TimeStampedPVCoordinates TargetPointing::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_ab0341569f219f18], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates TargetPointing::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_99b96e260ceb5fe3], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_TargetPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TargetPointing_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TargetPointing_init_(t_TargetPointing *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TargetPointing_getTargetPV(t_TargetPointing *self, PyObject *args);

      static PyMethodDef t_TargetPointing__methods_[] = {
        DECLARE_METHOD(t_TargetPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TargetPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TargetPointing, getTargetPV, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TargetPointing)[] = {
        { Py_tp_methods, t_TargetPointing__methods_ },
        { Py_tp_init, (void *) t_TargetPointing_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TargetPointing)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(TargetPointing, t_TargetPointing, TargetPointing);

      void t_TargetPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(TargetPointing), &PY_TYPE_DEF(TargetPointing), module, "TargetPointing", 0);
      }

      void t_TargetPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TargetPointing), "class_", make_descriptor(TargetPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TargetPointing), "wrapfn_", make_descriptor(t_TargetPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TargetPointing), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TargetPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TargetPointing::initializeClass, 1)))
          return NULL;
        return t_TargetPointing::wrap_Object(TargetPointing(((t_TargetPointing *) arg)->object.this$));
      }
      static PyObject *t_TargetPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TargetPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TargetPointing_init_(t_TargetPointing *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            TargetPointing object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TargetPointing(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::orekit::bodies::BodyShape a2((jobject) NULL);
            TargetPointing object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TargetPointing(a0, a1, a2));
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

      static PyObject *t_TargetPointing_getTargetPV(t_TargetPointing *self, PyObject *args)
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
#include "org/hipparchus/linear/CholeskyDecomposer.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *CholeskyDecomposer::class$ = NULL;
      jmethodID *CholeskyDecomposer::mids$ = NULL;
      bool CholeskyDecomposer::live$ = false;

      jclass CholeskyDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/CholeskyDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_decompose_4196bcb69ccaa8a4] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CholeskyDecomposer::CholeskyDecomposer(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

      ::org::hipparchus::linear::DecompositionSolver CholeskyDecomposer::decompose(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_4196bcb69ccaa8a4], a0.this$));
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
      static PyObject *t_CholeskyDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CholeskyDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CholeskyDecomposer_init_(t_CholeskyDecomposer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CholeskyDecomposer_decompose(t_CholeskyDecomposer *self, PyObject *arg);

      static PyMethodDef t_CholeskyDecomposer__methods_[] = {
        DECLARE_METHOD(t_CholeskyDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CholeskyDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CholeskyDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CholeskyDecomposer)[] = {
        { Py_tp_methods, t_CholeskyDecomposer__methods_ },
        { Py_tp_init, (void *) t_CholeskyDecomposer_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CholeskyDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CholeskyDecomposer, t_CholeskyDecomposer, CholeskyDecomposer);

      void t_CholeskyDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(CholeskyDecomposer), &PY_TYPE_DEF(CholeskyDecomposer), module, "CholeskyDecomposer", 0);
      }

      void t_CholeskyDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposer), "class_", make_descriptor(CholeskyDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposer), "wrapfn_", make_descriptor(t_CholeskyDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CholeskyDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CholeskyDecomposer::initializeClass, 1)))
          return NULL;
        return t_CholeskyDecomposer::wrap_Object(CholeskyDecomposer(((t_CholeskyDecomposer *) arg)->object.this$));
      }
      static PyObject *t_CholeskyDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CholeskyDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CholeskyDecomposer_init_(t_CholeskyDecomposer *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        CholeskyDecomposer object((jobject) NULL);

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          INT_CALL(object = CholeskyDecomposer(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_CholeskyDecomposer_decompose(t_CholeskyDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/IterativeLinearSolverEvent.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *IterativeLinearSolverEvent::class$ = NULL;
      jmethodID *IterativeLinearSolverEvent::mids$ = NULL;
      bool IterativeLinearSolverEvent::live$ = false;

      jclass IterativeLinearSolverEvent::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/IterativeLinearSolverEvent");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_de63e03d5189e405] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;I)V");
          mids$[mid_getNormOfResidual_456d9a2f64d6b28d] = env->getMethodID(cls, "getNormOfResidual", "()D");
          mids$[mid_getResidual_6d9adf1d5b463928] = env->getMethodID(cls, "getResidual", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getRightHandSideVector_6d9adf1d5b463928] = env->getMethodID(cls, "getRightHandSideVector", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getSolution_6d9adf1d5b463928] = env->getMethodID(cls, "getSolution", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_providesResidual_e470b6d9e0d979db] = env->getMethodID(cls, "providesResidual", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      IterativeLinearSolverEvent::IterativeLinearSolverEvent(const ::java::lang::Object & a0, jint a1) : ::org::hipparchus::util::IterationEvent(env->newObject(initializeClass, &mids$, mid_init$_de63e03d5189e405, a0.this$, a1)) {}

      jdouble IterativeLinearSolverEvent::getNormOfResidual() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormOfResidual_456d9a2f64d6b28d]);
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolverEvent::getResidual() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getResidual_6d9adf1d5b463928]));
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolverEvent::getRightHandSideVector() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getRightHandSideVector_6d9adf1d5b463928]));
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolverEvent::getSolution() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getSolution_6d9adf1d5b463928]));
      }

      jboolean IterativeLinearSolverEvent::providesResidual() const
      {
        return env->callBooleanMethod(this$, mids$[mid_providesResidual_e470b6d9e0d979db]);
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
      static PyObject *t_IterativeLinearSolverEvent_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterativeLinearSolverEvent_instance_(PyTypeObject *type, PyObject *arg);
      static int t_IterativeLinearSolverEvent_init_(t_IterativeLinearSolverEvent *self, PyObject *args, PyObject *kwds);
      static PyObject *t_IterativeLinearSolverEvent_getNormOfResidual(t_IterativeLinearSolverEvent *self);
      static PyObject *t_IterativeLinearSolverEvent_getResidual(t_IterativeLinearSolverEvent *self);
      static PyObject *t_IterativeLinearSolverEvent_getRightHandSideVector(t_IterativeLinearSolverEvent *self);
      static PyObject *t_IterativeLinearSolverEvent_getSolution(t_IterativeLinearSolverEvent *self);
      static PyObject *t_IterativeLinearSolverEvent_providesResidual(t_IterativeLinearSolverEvent *self);
      static PyObject *t_IterativeLinearSolverEvent_get__normOfResidual(t_IterativeLinearSolverEvent *self, void *data);
      static PyObject *t_IterativeLinearSolverEvent_get__residual(t_IterativeLinearSolverEvent *self, void *data);
      static PyObject *t_IterativeLinearSolverEvent_get__rightHandSideVector(t_IterativeLinearSolverEvent *self, void *data);
      static PyObject *t_IterativeLinearSolverEvent_get__solution(t_IterativeLinearSolverEvent *self, void *data);
      static PyGetSetDef t_IterativeLinearSolverEvent__fields_[] = {
        DECLARE_GET_FIELD(t_IterativeLinearSolverEvent, normOfResidual),
        DECLARE_GET_FIELD(t_IterativeLinearSolverEvent, residual),
        DECLARE_GET_FIELD(t_IterativeLinearSolverEvent, rightHandSideVector),
        DECLARE_GET_FIELD(t_IterativeLinearSolverEvent, solution),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IterativeLinearSolverEvent__methods_[] = {
        DECLARE_METHOD(t_IterativeLinearSolverEvent, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, getNormOfResidual, METH_NOARGS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, getResidual, METH_NOARGS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, getRightHandSideVector, METH_NOARGS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, getSolution, METH_NOARGS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, providesResidual, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IterativeLinearSolverEvent)[] = {
        { Py_tp_methods, t_IterativeLinearSolverEvent__methods_ },
        { Py_tp_init, (void *) t_IterativeLinearSolverEvent_init_ },
        { Py_tp_getset, t_IterativeLinearSolverEvent__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IterativeLinearSolverEvent)[] = {
        &PY_TYPE_DEF(::org::hipparchus::util::IterationEvent),
        NULL
      };

      DEFINE_TYPE(IterativeLinearSolverEvent, t_IterativeLinearSolverEvent, IterativeLinearSolverEvent);

      void t_IterativeLinearSolverEvent::install(PyObject *module)
      {
        installType(&PY_TYPE(IterativeLinearSolverEvent), &PY_TYPE_DEF(IterativeLinearSolverEvent), module, "IterativeLinearSolverEvent", 0);
      }

      void t_IterativeLinearSolverEvent::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolverEvent), "class_", make_descriptor(IterativeLinearSolverEvent::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolverEvent), "wrapfn_", make_descriptor(t_IterativeLinearSolverEvent::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolverEvent), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IterativeLinearSolverEvent_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IterativeLinearSolverEvent::initializeClass, 1)))
          return NULL;
        return t_IterativeLinearSolverEvent::wrap_Object(IterativeLinearSolverEvent(((t_IterativeLinearSolverEvent *) arg)->object.this$));
      }
      static PyObject *t_IterativeLinearSolverEvent_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IterativeLinearSolverEvent::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_IterativeLinearSolverEvent_init_(t_IterativeLinearSolverEvent *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        jint a1;
        IterativeLinearSolverEvent object((jobject) NULL);

        if (!parseArgs(args, "oI", &a0, &a1))
        {
          INT_CALL(object = IterativeLinearSolverEvent(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_IterativeLinearSolverEvent_getNormOfResidual(t_IterativeLinearSolverEvent *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNormOfResidual());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_IterativeLinearSolverEvent_getResidual(t_IterativeLinearSolverEvent *self)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.getResidual());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
      }

      static PyObject *t_IterativeLinearSolverEvent_getRightHandSideVector(t_IterativeLinearSolverEvent *self)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.getRightHandSideVector());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
      }

      static PyObject *t_IterativeLinearSolverEvent_getSolution(t_IterativeLinearSolverEvent *self)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolution());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
      }

      static PyObject *t_IterativeLinearSolverEvent_providesResidual(t_IterativeLinearSolverEvent *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.providesResidual());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_IterativeLinearSolverEvent_get__normOfResidual(t_IterativeLinearSolverEvent *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormOfResidual());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_IterativeLinearSolverEvent_get__residual(t_IterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getResidual());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_IterativeLinearSolverEvent_get__rightHandSideVector(t_IterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightHandSideVector());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_IterativeLinearSolverEvent_get__solution(t_IterativeLinearSolverEvent *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/data/IRNSSNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *IRNSSNavigationMessage::class$ = NULL;
            jmethodID *IRNSSNavigationMessage::mids$ = NULL;
            bool IRNSSNavigationMessage::live$ = false;

            jclass IRNSSNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/IRNSSNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getIODEC_f2f64475e4580546] = env->getMethodID(cls, "getIODEC", "()I");
                mids$[mid_getSvHealth_456d9a2f64d6b28d] = env->getMethodID(cls, "getSvHealth", "()D");
                mids$[mid_getTGD_456d9a2f64d6b28d] = env->getMethodID(cls, "getTGD", "()D");
                mids$[mid_getURA_456d9a2f64d6b28d] = env->getMethodID(cls, "getURA", "()D");
                mids$[mid_setIODEC_77e0f9a1f260e2e5] = env->getMethodID(cls, "setIODEC", "(D)V");
                mids$[mid_setSvHealth_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSvHealth", "(D)V");
                mids$[mid_setTGD_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTGD", "(D)V");
                mids$[mid_setURA_77e0f9a1f260e2e5] = env->getMethodID(cls, "setURA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            IRNSSNavigationMessage::IRNSSNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            jint IRNSSNavigationMessage::getIODEC() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODEC_f2f64475e4580546]);
            }

            jdouble IRNSSNavigationMessage::getSvHealth() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSvHealth_456d9a2f64d6b28d]);
            }

            jdouble IRNSSNavigationMessage::getTGD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD_456d9a2f64d6b28d]);
            }

            jdouble IRNSSNavigationMessage::getURA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getURA_456d9a2f64d6b28d]);
            }

            void IRNSSNavigationMessage::setIODEC(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODEC_77e0f9a1f260e2e5], a0);
            }

            void IRNSSNavigationMessage::setSvHealth(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvHealth_77e0f9a1f260e2e5], a0);
            }

            void IRNSSNavigationMessage::setTGD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTGD_77e0f9a1f260e2e5], a0);
            }

            void IRNSSNavigationMessage::setURA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setURA_77e0f9a1f260e2e5], a0);
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
            static PyObject *t_IRNSSNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_IRNSSNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_IRNSSNavigationMessage_init_(t_IRNSSNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_IRNSSNavigationMessage_getIODEC(t_IRNSSNavigationMessage *self);
            static PyObject *t_IRNSSNavigationMessage_getSvHealth(t_IRNSSNavigationMessage *self);
            static PyObject *t_IRNSSNavigationMessage_getTGD(t_IRNSSNavigationMessage *self);
            static PyObject *t_IRNSSNavigationMessage_getURA(t_IRNSSNavigationMessage *self);
            static PyObject *t_IRNSSNavigationMessage_setIODEC(t_IRNSSNavigationMessage *self, PyObject *arg);
            static PyObject *t_IRNSSNavigationMessage_setSvHealth(t_IRNSSNavigationMessage *self, PyObject *arg);
            static PyObject *t_IRNSSNavigationMessage_setTGD(t_IRNSSNavigationMessage *self, PyObject *arg);
            static PyObject *t_IRNSSNavigationMessage_setURA(t_IRNSSNavigationMessage *self, PyObject *arg);
            static PyObject *t_IRNSSNavigationMessage_get__iODEC(t_IRNSSNavigationMessage *self, void *data);
            static int t_IRNSSNavigationMessage_set__iODEC(t_IRNSSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_IRNSSNavigationMessage_get__svHealth(t_IRNSSNavigationMessage *self, void *data);
            static int t_IRNSSNavigationMessage_set__svHealth(t_IRNSSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_IRNSSNavigationMessage_get__tGD(t_IRNSSNavigationMessage *self, void *data);
            static int t_IRNSSNavigationMessage_set__tGD(t_IRNSSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_IRNSSNavigationMessage_get__uRA(t_IRNSSNavigationMessage *self, void *data);
            static int t_IRNSSNavigationMessage_set__uRA(t_IRNSSNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_IRNSSNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_IRNSSNavigationMessage, iODEC),
              DECLARE_GETSET_FIELD(t_IRNSSNavigationMessage, svHealth),
              DECLARE_GETSET_FIELD(t_IRNSSNavigationMessage, tGD),
              DECLARE_GETSET_FIELD(t_IRNSSNavigationMessage, uRA),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_IRNSSNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_IRNSSNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IRNSSNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IRNSSNavigationMessage, getIODEC, METH_NOARGS),
              DECLARE_METHOD(t_IRNSSNavigationMessage, getSvHealth, METH_NOARGS),
              DECLARE_METHOD(t_IRNSSNavigationMessage, getTGD, METH_NOARGS),
              DECLARE_METHOD(t_IRNSSNavigationMessage, getURA, METH_NOARGS),
              DECLARE_METHOD(t_IRNSSNavigationMessage, setIODEC, METH_O),
              DECLARE_METHOD(t_IRNSSNavigationMessage, setSvHealth, METH_O),
              DECLARE_METHOD(t_IRNSSNavigationMessage, setTGD, METH_O),
              DECLARE_METHOD(t_IRNSSNavigationMessage, setURA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(IRNSSNavigationMessage)[] = {
              { Py_tp_methods, t_IRNSSNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_IRNSSNavigationMessage_init_ },
              { Py_tp_getset, t_IRNSSNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(IRNSSNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage),
              NULL
            };

            DEFINE_TYPE(IRNSSNavigationMessage, t_IRNSSNavigationMessage, IRNSSNavigationMessage);

            void t_IRNSSNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(IRNSSNavigationMessage), &PY_TYPE_DEF(IRNSSNavigationMessage), module, "IRNSSNavigationMessage", 0);
            }

            void t_IRNSSNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSNavigationMessage), "class_", make_descriptor(IRNSSNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSNavigationMessage), "wrapfn_", make_descriptor(t_IRNSSNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_IRNSSNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, IRNSSNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_IRNSSNavigationMessage::wrap_Object(IRNSSNavigationMessage(((t_IRNSSNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_IRNSSNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, IRNSSNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_IRNSSNavigationMessage_init_(t_IRNSSNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              IRNSSNavigationMessage object((jobject) NULL);

              INT_CALL(object = IRNSSNavigationMessage());
              self->object = object;

              return 0;
            }

            static PyObject *t_IRNSSNavigationMessage_getIODEC(t_IRNSSNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODEC());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_IRNSSNavigationMessage_getSvHealth(t_IRNSSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSvHealth());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_IRNSSNavigationMessage_getTGD(t_IRNSSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_IRNSSNavigationMessage_getURA(t_IRNSSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getURA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_IRNSSNavigationMessage_setIODEC(t_IRNSSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIODEC(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODEC", arg);
              return NULL;
            }

            static PyObject *t_IRNSSNavigationMessage_setSvHealth(t_IRNSSNavigationMessage *self, PyObject *arg)
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

            static PyObject *t_IRNSSNavigationMessage_setTGD(t_IRNSSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTGD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTGD", arg);
              return NULL;
            }

            static PyObject *t_IRNSSNavigationMessage_setURA(t_IRNSSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setURA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setURA", arg);
              return NULL;
            }

            static PyObject *t_IRNSSNavigationMessage_get__iODEC(t_IRNSSNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODEC());
              return PyLong_FromLong((long) value);
            }
            static int t_IRNSSNavigationMessage_set__iODEC(t_IRNSSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIODEC(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODEC", arg);
              return -1;
            }

            static PyObject *t_IRNSSNavigationMessage_get__svHealth(t_IRNSSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSvHealth());
              return PyFloat_FromDouble((double) value);
            }
            static int t_IRNSSNavigationMessage_set__svHealth(t_IRNSSNavigationMessage *self, PyObject *arg, void *data)
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

            static PyObject *t_IRNSSNavigationMessage_get__tGD(t_IRNSSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD());
              return PyFloat_FromDouble((double) value);
            }
            static int t_IRNSSNavigationMessage_set__tGD(t_IRNSSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTGD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tGD", arg);
              return -1;
            }

            static PyObject *t_IRNSSNavigationMessage_get__uRA(t_IRNSSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getURA());
              return PyFloat_FromDouble((double) value);
            }
            static int t_IRNSSNavigationMessage_set__uRA(t_IRNSSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setURA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uRA", arg);
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedForm.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTJ2SquaredClosedForm::class$ = NULL;
            jmethodID *DSSTJ2SquaredClosedForm::mids$ = NULL;
            bool DSSTJ2SquaredClosedForm::live$ = false;

            jclass DSSTJ2SquaredClosedForm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedForm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_88d62ea1ed5772f0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
                mids$[mid_getMeanElementRate_5265bce9e9da3506] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanElementRate_3b4b4fe187ad73ff] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_74f227e9e3e51225] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_46b1d1d9daf3396d] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_8109c1a27d4471d3] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_6839803ab3ef216d] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_8df221610d0cb785] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTJ2SquaredClosedForm::DSSTJ2SquaredClosedForm(const ::org::orekit::propagation::semianalytical::dsst::forces::J2SquaredModel & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_88d62ea1ed5772f0, a0.this$, a1.this$)) {}

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTJ2SquaredClosedForm::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_5265bce9e9da3506], a0.this$, a1.this$, a2.this$));
            }

            JArray< jdouble > DSSTJ2SquaredClosedForm::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_3b4b4fe187ad73ff], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTJ2SquaredClosedForm::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
            }

            ::java::util::List DSSTJ2SquaredClosedForm::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_74f227e9e3e51225], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTJ2SquaredClosedForm::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_46b1d1d9daf3396d], a0.this$, a1.this$, a2.this$));
            }

            void DSSTJ2SquaredClosedForm::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_8109c1a27d4471d3], a0.this$);
            }

            void DSSTJ2SquaredClosedForm::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_6839803ab3ef216d], a0.this$, a1.this$);
            }

            void DSSTJ2SquaredClosedForm::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_8df221610d0cb785], a0.this$, a1.this$);
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
            static PyObject *t_DSSTJ2SquaredClosedForm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTJ2SquaredClosedForm_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTJ2SquaredClosedForm_init_(t_DSSTJ2SquaredClosedForm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTJ2SquaredClosedForm_getMeanElementRate(t_DSSTJ2SquaredClosedForm *self, PyObject *args);
            static PyObject *t_DSSTJ2SquaredClosedForm_getParametersDrivers(t_DSSTJ2SquaredClosedForm *self);
            static PyObject *t_DSSTJ2SquaredClosedForm_initializeShortPeriodTerms(t_DSSTJ2SquaredClosedForm *self, PyObject *args);
            static PyObject *t_DSSTJ2SquaredClosedForm_registerAttitudeProvider(t_DSSTJ2SquaredClosedForm *self, PyObject *arg);
            static PyObject *t_DSSTJ2SquaredClosedForm_updateShortPeriodTerms(t_DSSTJ2SquaredClosedForm *self, PyObject *args);
            static PyObject *t_DSSTJ2SquaredClosedForm_get__parametersDrivers(t_DSSTJ2SquaredClosedForm *self, void *data);
            static PyGetSetDef t_DSSTJ2SquaredClosedForm__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTJ2SquaredClosedForm, parametersDrivers),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTJ2SquaredClosedForm__methods_[] = {
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTJ2SquaredClosedForm)[] = {
              { Py_tp_methods, t_DSSTJ2SquaredClosedForm__methods_ },
              { Py_tp_init, (void *) t_DSSTJ2SquaredClosedForm_init_ },
              { Py_tp_getset, t_DSSTJ2SquaredClosedForm__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTJ2SquaredClosedForm)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DSSTJ2SquaredClosedForm, t_DSSTJ2SquaredClosedForm, DSSTJ2SquaredClosedForm);

            void t_DSSTJ2SquaredClosedForm::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTJ2SquaredClosedForm), &PY_TYPE_DEF(DSSTJ2SquaredClosedForm), module, "DSSTJ2SquaredClosedForm", 0);
            }

            void t_DSSTJ2SquaredClosedForm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTJ2SquaredClosedForm), "class_", make_descriptor(DSSTJ2SquaredClosedForm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTJ2SquaredClosedForm), "wrapfn_", make_descriptor(t_DSSTJ2SquaredClosedForm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTJ2SquaredClosedForm), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTJ2SquaredClosedForm::initializeClass, 1)))
                return NULL;
              return t_DSSTJ2SquaredClosedForm::wrap_Object(DSSTJ2SquaredClosedForm(((t_DSSTJ2SquaredClosedForm *) arg)->object.this$));
            }
            static PyObject *t_DSSTJ2SquaredClosedForm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTJ2SquaredClosedForm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTJ2SquaredClosedForm_init_(t_DSSTJ2SquaredClosedForm *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::forces::J2SquaredModel a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              DSSTJ2SquaredClosedForm object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::propagation::semianalytical::dsst::forces::J2SquaredModel::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1))
              {
                INT_CALL(object = DSSTJ2SquaredClosedForm(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_getMeanElementRate(t_DSSTJ2SquaredClosedForm *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return result.wrap();
                  }
                }
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getMeanElementRate", args);
              return NULL;
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_getParametersDrivers(t_DSSTJ2SquaredClosedForm *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_initializeShortPeriodTerms(t_DSSTJ2SquaredClosedForm *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< jdouble > a2((jobject) NULL);
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "kK[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(ShortPeriodTerms));
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_registerAttitudeProvider(t_DSSTJ2SquaredClosedForm *self, PyObject *arg)
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(self->object.registerAttitudeProvider(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "registerAttitudeProvider", arg);
              return NULL;
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_updateShortPeriodTerms(t_DSSTJ2SquaredClosedForm *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);

                  if (!parseArgs(args, "[D[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::orekit::propagation::FieldSpacecraftState > a1((jobject) NULL);
                  PyTypeObject **p1;

                  if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "updateShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_get__parametersDrivers(t_DSSTJ2SquaredClosedForm *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/FieldSpacecraftStateInterpolator.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/util/Optional.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "org/orekit/time/TimeStampedField.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/FieldAbsolutePVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldSpacecraftStateInterpolator::class$ = NULL;
      jmethodID *FieldSpacecraftStateInterpolator::mids$ = NULL;
      bool FieldSpacecraftStateInterpolator::live$ = false;

      jclass FieldSpacecraftStateInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldSpacecraftStateInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b1992bd1bb70f476] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_2ec8e00deddf59e8] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_4806cf42a7c4464d] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_c113313c707bf3d9] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_8874babef770dcb7] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_f5be9a20c1bf69c8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldTimeInterpolator;Lorg/orekit/time/FieldTimeInterpolator;Lorg/orekit/time/FieldTimeInterpolator;Lorg/orekit/time/FieldTimeInterpolator;Lorg/orekit/time/FieldTimeInterpolator;)V");
          mids$[mid_getAbsPVAInterpolator_c56b7edc0c3c7d86] = env->getMethodID(cls, "getAbsPVAInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getAdditionalStateInterpolator_c56b7edc0c3c7d86] = env->getMethodID(cls, "getAdditionalStateInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getAttitudeInterpolator_c56b7edc0c3c7d86] = env->getMethodID(cls, "getAttitudeInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getMassInterpolator_c56b7edc0c3c7d86] = env->getMethodID(cls, "getMassInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getNbInterpolationPoints_f2f64475e4580546] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getOrbitInterpolator_c56b7edc0c3c7d86] = env->getMethodID(cls, "getOrbitInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getOutputFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getOutputFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getSubInterpolators_a6156df500549a58] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_b85587e735f13c79] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_interpolate_b78e440b930977cb] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/propagation/FieldSpacecraftState;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_b1992bd1bb70f476, a0.this$)) {}

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_2ec8e00deddf59e8, a0, a1.this$)) {}

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_4806cf42a7c4464d, a0, a1.this$, a2.this$)) {}

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_c113313c707bf3d9, a0, a1, a2.this$, a3.this$)) {}

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3, const ::org::orekit::utils::CartesianDerivativesFilter & a4, const ::org::orekit::utils::AngularDerivativesFilter & a5) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_8874babef770dcb7, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldTimeInterpolator & a1, const ::org::orekit::time::FieldTimeInterpolator & a2, const ::org::orekit::time::FieldTimeInterpolator & a3, const ::org::orekit::time::FieldTimeInterpolator & a4, const ::org::orekit::time::FieldTimeInterpolator & a5) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_f5be9a20c1bf69c8, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      ::java::util::Optional FieldSpacecraftStateInterpolator::getAbsPVAInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAbsPVAInterpolator_c56b7edc0c3c7d86]));
      }

      ::java::util::Optional FieldSpacecraftStateInterpolator::getAdditionalStateInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAdditionalStateInterpolator_c56b7edc0c3c7d86]));
      }

      ::java::util::Optional FieldSpacecraftStateInterpolator::getAttitudeInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAttitudeInterpolator_c56b7edc0c3c7d86]));
      }

      ::java::util::Optional FieldSpacecraftStateInterpolator::getMassInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getMassInterpolator_c56b7edc0c3c7d86]));
      }

      jint FieldSpacecraftStateInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_f2f64475e4580546]);
      }

      ::java::util::Optional FieldSpacecraftStateInterpolator::getOrbitInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getOrbitInterpolator_c56b7edc0c3c7d86]));
      }

      ::org::orekit::frames::Frame FieldSpacecraftStateInterpolator::getOutputFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputFrame_c8fe21bcdac65bf6]));
      }

      ::java::util::List FieldSpacecraftStateInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_a6156df500549a58]));
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldSpacecraftStateInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_interpolate_b85587e735f13c79], a0.this$, a1.this$));
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
      static PyObject *t_FieldSpacecraftStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSpacecraftStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSpacecraftStateInterpolator_of_(t_FieldSpacecraftStateInterpolator *self, PyObject *args);
      static int t_FieldSpacecraftStateInterpolator_init_(t_FieldSpacecraftStateInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldSpacecraftStateInterpolator_getAbsPVAInterpolator(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getAdditionalStateInterpolator(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getAttitudeInterpolator(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getMassInterpolator(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getNbInterpolationPoints(t_FieldSpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_FieldSpacecraftStateInterpolator_getOrbitInterpolator(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getOutputFrame(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getSubInterpolators(t_FieldSpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_FieldSpacecraftStateInterpolator_interpolate(t_FieldSpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__absPVAInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__additionalStateInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__attitudeInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__massInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__nbInterpolationPoints(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__orbitInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__outputFrame(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__subInterpolators(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__parameters_(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyGetSetDef t_FieldSpacecraftStateInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, absPVAInterpolator),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, additionalStateInterpolator),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, attitudeInterpolator),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, massInterpolator),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, nbInterpolationPoints),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, orbitInterpolator),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, outputFrame),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldSpacecraftStateInterpolator__methods_[] = {
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getAbsPVAInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getAdditionalStateInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getAttitudeInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getMassInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getNbInterpolationPoints, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getOrbitInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getOutputFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getSubInterpolators, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldSpacecraftStateInterpolator)[] = {
        { Py_tp_methods, t_FieldSpacecraftStateInterpolator__methods_ },
        { Py_tp_init, (void *) t_FieldSpacecraftStateInterpolator_init_ },
        { Py_tp_getset, t_FieldSpacecraftStateInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldSpacecraftStateInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(FieldSpacecraftStateInterpolator, t_FieldSpacecraftStateInterpolator, FieldSpacecraftStateInterpolator);
      PyObject *t_FieldSpacecraftStateInterpolator::wrap_Object(const FieldSpacecraftStateInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSpacecraftStateInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSpacecraftStateInterpolator *self = (t_FieldSpacecraftStateInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldSpacecraftStateInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSpacecraftStateInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSpacecraftStateInterpolator *self = (t_FieldSpacecraftStateInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldSpacecraftStateInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldSpacecraftStateInterpolator), &PY_TYPE_DEF(FieldSpacecraftStateInterpolator), module, "FieldSpacecraftStateInterpolator", 0);
      }

      void t_FieldSpacecraftStateInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftStateInterpolator), "class_", make_descriptor(FieldSpacecraftStateInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftStateInterpolator), "wrapfn_", make_descriptor(t_FieldSpacecraftStateInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftStateInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldSpacecraftStateInterpolator::initializeClass, 1)))
          return NULL;
        return t_FieldSpacecraftStateInterpolator::wrap_Object(FieldSpacecraftStateInterpolator(((t_FieldSpacecraftStateInterpolator *) arg)->object.this$));
      }
      static PyObject *t_FieldSpacecraftStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldSpacecraftStateInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_of_(t_FieldSpacecraftStateInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldSpacecraftStateInterpolator_init_(t_FieldSpacecraftStateInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ikk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0, a1, a2));
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
            ::org::orekit::frames::Frame a3((jobject) NULL);
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::frames::Frame a3((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::utils::AngularDerivativesFilter a5((jobject) NULL);
            PyTypeObject **p5;
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkkKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a5, &p5, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::FieldTimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::FieldTimeInterpolator a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::time::FieldTimeInterpolator a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::time::FieldTimeInterpolator a5((jobject) NULL);
            PyTypeObject **p5;
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "kKKKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldTimeInterpolator::parameters_, &a2, &p2, ::org::orekit::time::t_FieldTimeInterpolator::parameters_, &a3, &p3, ::org::orekit::time::t_FieldTimeInterpolator::parameters_, &a4, &p4, ::org::orekit::time::t_FieldTimeInterpolator::parameters_, &a5, &p5, ::org::orekit::time::t_FieldTimeInterpolator::parameters_))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_FieldSpacecraftStateInterpolator_getAbsPVAInterpolator(t_FieldSpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbsPVAInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getAdditionalStateInterpolator(t_FieldSpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getAttitudeInterpolator(t_FieldSpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getMassInterpolator(t_FieldSpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getMassInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getNbInterpolationPoints(t_FieldSpacecraftStateInterpolator *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getNbInterpolationPoints());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FieldSpacecraftStateInterpolator), (PyObject *) self, "getNbInterpolationPoints", args, 2);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getOrbitInterpolator(t_FieldSpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getOutputFrame(t_FieldSpacecraftStateInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getSubInterpolators(t_FieldSpacecraftStateInterpolator *self, PyObject *args)
      {
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getSubInterpolators());
          return ::java::util::t_List::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldSpacecraftStateInterpolator), (PyObject *) self, "getSubInterpolators", args, 2);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_interpolate(t_FieldSpacecraftStateInterpolator *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0, a1));
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(FieldSpacecraftStateInterpolator), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_FieldSpacecraftStateInterpolator_get__parameters_(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__absPVAInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbsPVAInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__additionalStateInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__attitudeInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__massInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getMassInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__nbInterpolationPoints(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__orbitInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__outputFrame(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__subInterpolators(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/FractionFormat.h"
#include "java/lang/StringBuffer.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/text/FieldPosition.h"
#include "org/hipparchus/fraction/FractionFormat.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/text/ParsePosition.h"
#include "java/lang/String.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *FractionFormat::class$ = NULL;
      jmethodID *FractionFormat::mids$ = NULL;
      bool FractionFormat::live$ = false;

      jclass FractionFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/FractionFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_695a782f9c7823f6] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_4c0f990589d379b7] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_format_c19c8e97de8c2158] = env->getMethodID(cls, "format", "(Lorg/hipparchus/fraction/Fraction;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_format_e231795b026d93db] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_formatFraction_4b44e5dbe2a42d26] = env->getStaticMethodID(cls, "formatFraction", "(Lorg/hipparchus/fraction/Fraction;)Ljava/lang/String;");
          mids$[mid_getAvailableLocales_81e8fdf65840780c] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getImproperInstance_50702bcb1992920e] = env->getStaticMethodID(cls, "getImproperInstance", "()Lorg/hipparchus/fraction/FractionFormat;");
          mids$[mid_getImproperInstance_a582bf44d92cfcc0] = env->getStaticMethodID(cls, "getImproperInstance", "(Ljava/util/Locale;)Lorg/hipparchus/fraction/FractionFormat;");
          mids$[mid_getProperInstance_50702bcb1992920e] = env->getStaticMethodID(cls, "getProperInstance", "()Lorg/hipparchus/fraction/FractionFormat;");
          mids$[mid_getProperInstance_a582bf44d92cfcc0] = env->getStaticMethodID(cls, "getProperInstance", "(Ljava/util/Locale;)Lorg/hipparchus/fraction/FractionFormat;");
          mids$[mid_parse_1e8dfd0587c9f00e] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_parse_7b370dc16c7b13a9] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_getDefaultNumberFormat_d34e2e8dd35583a0] = env->getStaticMethodID(cls, "getDefaultNumberFormat", "()Ljava/text/NumberFormat;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FractionFormat::FractionFormat() : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      FractionFormat::FractionFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_695a782f9c7823f6, a0.this$)) {}

      FractionFormat::FractionFormat(const ::java::text::NumberFormat & a0, const ::java::text::NumberFormat & a1) : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_4c0f990589d379b7, a0.this$, a1.this$)) {}

      ::java::lang::StringBuffer FractionFormat::format(const ::org::hipparchus::fraction::Fraction & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_c19c8e97de8c2158], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::StringBuffer FractionFormat::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_e231795b026d93db], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::String FractionFormat::formatFraction(const ::org::hipparchus::fraction::Fraction & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_formatFraction_4b44e5dbe2a42d26], a0.this$));
      }

      JArray< ::java::util::Locale > FractionFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_81e8fdf65840780c]));
      }

      FractionFormat FractionFormat::getImproperInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return FractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getImproperInstance_50702bcb1992920e]));
      }

      FractionFormat FractionFormat::getImproperInstance(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getImproperInstance_a582bf44d92cfcc0], a0.this$));
      }

      FractionFormat FractionFormat::getProperInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return FractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getProperInstance_50702bcb1992920e]));
      }

      FractionFormat FractionFormat::getProperInstance(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getProperInstance_a582bf44d92cfcc0], a0.this$));
      }

      ::org::hipparchus::fraction::Fraction FractionFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_parse_1e8dfd0587c9f00e], a0.this$));
      }

      ::org::hipparchus::fraction::Fraction FractionFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_parse_7b370dc16c7b13a9], a0.this$, a1.this$));
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
      static PyObject *t_FractionFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FractionFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FractionFormat_init_(t_FractionFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FractionFormat_format(t_FractionFormat *self, PyObject *args);
      static PyObject *t_FractionFormat_formatFraction(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FractionFormat_getAvailableLocales(PyTypeObject *type, PyObject *args);
      static PyObject *t_FractionFormat_getImproperInstance(PyTypeObject *type, PyObject *args);
      static PyObject *t_FractionFormat_getProperInstance(PyTypeObject *type, PyObject *args);
      static PyObject *t_FractionFormat_parse(t_FractionFormat *self, PyObject *args);
      static PyObject *t_FractionFormat_get__availableLocales(t_FractionFormat *self, void *data);
      static PyObject *t_FractionFormat_get__improperInstance(t_FractionFormat *self, void *data);
      static PyObject *t_FractionFormat_get__properInstance(t_FractionFormat *self, void *data);
      static PyGetSetDef t_FractionFormat__fields_[] = {
        DECLARE_GET_FIELD(t_FractionFormat, availableLocales),
        DECLARE_GET_FIELD(t_FractionFormat, improperInstance),
        DECLARE_GET_FIELD(t_FractionFormat, properInstance),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FractionFormat__methods_[] = {
        DECLARE_METHOD(t_FractionFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_FractionFormat, formatFraction, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, getAvailableLocales, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, getImproperInstance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, getProperInstance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FractionFormat)[] = {
        { Py_tp_methods, t_FractionFormat__methods_ },
        { Py_tp_init, (void *) t_FractionFormat_init_ },
        { Py_tp_getset, t_FractionFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FractionFormat)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fraction::AbstractFormat),
        NULL
      };

      DEFINE_TYPE(FractionFormat, t_FractionFormat, FractionFormat);

      void t_FractionFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(FractionFormat), &PY_TYPE_DEF(FractionFormat), module, "FractionFormat", 0);
      }

      void t_FractionFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionFormat), "class_", make_descriptor(FractionFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionFormat), "wrapfn_", make_descriptor(t_FractionFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FractionFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FractionFormat::initializeClass, 1)))
          return NULL;
        return t_FractionFormat::wrap_Object(FractionFormat(((t_FractionFormat *) arg)->object.this$));
      }
      static PyObject *t_FractionFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FractionFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FractionFormat_init_(t_FractionFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            FractionFormat object((jobject) NULL);

            INT_CALL(object = FractionFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            FractionFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = FractionFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            FractionFormat object((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1))
            {
              INT_CALL(object = FractionFormat(a0, a1));
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

      static PyObject *t_FractionFormat_format(t_FractionFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::fraction::Fraction a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::fraction::Fraction::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
          {
            ::java::lang::Object a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "okk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(FractionFormat), (PyObject *) self, "format", args, 2);
      }

      static PyObject *t_FractionFormat_formatFraction(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::fraction::Fraction a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::fraction::Fraction::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::formatFraction(a0));
          return j2p(result);
        }

        PyErr_SetArgsError(type, "formatFraction", arg);
        return NULL;
      }

      static PyObject *t_FractionFormat_getAvailableLocales(PyTypeObject *type, PyObject *args)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::getAvailableLocales());
          return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
        }

        return callSuper(type, "getAvailableLocales", args, 2);
      }

      static PyObject *t_FractionFormat_getImproperInstance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            FractionFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::getImproperInstance());
            return t_FractionFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            FractionFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::getImproperInstance(a0));
              return t_FractionFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getImproperInstance", args);
        return NULL;
      }

      static PyObject *t_FractionFormat_getProperInstance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            FractionFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::getProperInstance());
            return t_FractionFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            FractionFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::getProperInstance(a0));
              return t_FractionFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getProperInstance", args);
        return NULL;
      }

      static PyObject *t_FractionFormat_parse(t_FractionFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::fraction::Fraction result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::fraction::Fraction result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(FractionFormat), (PyObject *) self, "parse", args, 2);
      }

      static PyObject *t_FractionFormat_get__availableLocales(t_FractionFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_FractionFormat_get__improperInstance(t_FractionFormat *self, void *data)
      {
        FractionFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getImproperInstance());
        return t_FractionFormat::wrap_Object(value);
      }

      static PyObject *t_FractionFormat_get__properInstance(t_FractionFormat *self, void *data)
      {
        FractionFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getProperInstance());
        return t_FractionFormat::wrap_Object(value);
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
                mids$[mid_getGridPoints_492e97ecdce43bb1] = env->getMethodID(cls, "getGridPoints", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< ::org::hipparchus::CalculusFieldElement > FieldInterpolationGrid::getGridPoints(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getGridPoints_492e97ecdce43bb1], a0.this$, a1.this$));
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
#include "org/hipparchus/analysis/MultivariateMatrixFunction.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *MultivariateMatrixFunction::class$ = NULL;
      jmethodID *MultivariateMatrixFunction::mids$ = NULL;
      bool MultivariateMatrixFunction::live$ = false;

      jclass MultivariateMatrixFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/MultivariateMatrixFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_ac05399a8b81d1af] = env->getMethodID(cls, "value", "([D)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< jdouble > > MultivariateMatrixFunction::value(const JArray< jdouble > & a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_value_ac05399a8b81d1af], a0.this$));
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
      static PyObject *t_MultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateMatrixFunction_value(t_MultivariateMatrixFunction *self, PyObject *arg);

      static PyMethodDef t_MultivariateMatrixFunction__methods_[] = {
        DECLARE_METHOD(t_MultivariateMatrixFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateMatrixFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateMatrixFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultivariateMatrixFunction)[] = {
        { Py_tp_methods, t_MultivariateMatrixFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultivariateMatrixFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultivariateMatrixFunction, t_MultivariateMatrixFunction, MultivariateMatrixFunction);

      void t_MultivariateMatrixFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(MultivariateMatrixFunction), &PY_TYPE_DEF(MultivariateMatrixFunction), module, "MultivariateMatrixFunction", 0);
      }

      void t_MultivariateMatrixFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateMatrixFunction), "class_", make_descriptor(MultivariateMatrixFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateMatrixFunction), "wrapfn_", make_descriptor(t_MultivariateMatrixFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateMatrixFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultivariateMatrixFunction::initializeClass, 1)))
          return NULL;
        return t_MultivariateMatrixFunction::wrap_Object(MultivariateMatrixFunction(((t_MultivariateMatrixFunction *) arg)->object.this$));
      }
      static PyObject *t_MultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultivariateMatrixFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultivariateMatrixFunction_value(t_MultivariateMatrixFunction *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/ConstantRealDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *ConstantRealDistribution::class$ = NULL;
        jmethodID *ConstantRealDistribution::mids$ = NULL;
        bool ConstantRealDistribution::live$ = false;

        jclass ConstantRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/ConstantRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_cumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_0ba5fed9597b693e] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConstantRealDistribution::ConstantRealDistribution(jdouble a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        jdouble ConstantRealDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_0ba5fed9597b693e], a0);
        }

        jdouble ConstantRealDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_0ba5fed9597b693e], a0);
        }

        jdouble ConstantRealDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble ConstantRealDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        jdouble ConstantRealDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_456d9a2f64d6b28d]);
        }

        jdouble ConstantRealDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_456d9a2f64d6b28d]);
        }

        jdouble ConstantRealDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e], a0);
        }

        jboolean ConstantRealDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
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
        static PyObject *t_ConstantRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConstantRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConstantRealDistribution_init_(t_ConstantRealDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConstantRealDistribution_cumulativeProbability(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_density(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_getNumericalMean(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_getNumericalVariance(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_getSupportLowerBound(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_getSupportUpperBound(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_inverseCumulativeProbability(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_isSupportConnected(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_get__numericalMean(t_ConstantRealDistribution *self, void *data);
        static PyObject *t_ConstantRealDistribution_get__numericalVariance(t_ConstantRealDistribution *self, void *data);
        static PyObject *t_ConstantRealDistribution_get__supportConnected(t_ConstantRealDistribution *self, void *data);
        static PyObject *t_ConstantRealDistribution_get__supportLowerBound(t_ConstantRealDistribution *self, void *data);
        static PyObject *t_ConstantRealDistribution_get__supportUpperBound(t_ConstantRealDistribution *self, void *data);
        static PyGetSetDef t_ConstantRealDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_ConstantRealDistribution, numericalMean),
          DECLARE_GET_FIELD(t_ConstantRealDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_ConstantRealDistribution, supportConnected),
          DECLARE_GET_FIELD(t_ConstantRealDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_ConstantRealDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConstantRealDistribution__methods_[] = {
          DECLARE_METHOD(t_ConstantRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantRealDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConstantRealDistribution)[] = {
          { Py_tp_methods, t_ConstantRealDistribution__methods_ },
          { Py_tp_init, (void *) t_ConstantRealDistribution_init_ },
          { Py_tp_getset, t_ConstantRealDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConstantRealDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(ConstantRealDistribution, t_ConstantRealDistribution, ConstantRealDistribution);

        void t_ConstantRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(ConstantRealDistribution), &PY_TYPE_DEF(ConstantRealDistribution), module, "ConstantRealDistribution", 0);
        }

        void t_ConstantRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantRealDistribution), "class_", make_descriptor(ConstantRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantRealDistribution), "wrapfn_", make_descriptor(t_ConstantRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConstantRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConstantRealDistribution::initializeClass, 1)))
            return NULL;
          return t_ConstantRealDistribution::wrap_Object(ConstantRealDistribution(((t_ConstantRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_ConstantRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConstantRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConstantRealDistribution_init_(t_ConstantRealDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ConstantRealDistribution object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ConstantRealDistribution(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ConstantRealDistribution_cumulativeProbability(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_density(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_getNumericalMean(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_getNumericalVariance(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_getSupportLowerBound(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_getSupportUpperBound(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_inverseCumulativeProbability(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_isSupportConnected(t_ConstantRealDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_get__numericalMean(t_ConstantRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantRealDistribution_get__numericalVariance(t_ConstantRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantRealDistribution_get__supportConnected(t_ConstantRealDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ConstantRealDistribution_get__supportLowerBound(t_ConstantRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantRealDistribution_get__supportUpperBound(t_ConstantRealDistribution *self, void *data)
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
#include "org/orekit/rugged/intersection/BasicScanAlgorithm.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/raster/TileUpdater.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {

        ::java::lang::Class *BasicScanAlgorithm::class$ = NULL;
        jmethodID *BasicScanAlgorithm::mids$ = NULL;
        bool BasicScanAlgorithm::live$ = false;

        jclass BasicScanAlgorithm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/BasicScanAlgorithm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3914898390d9812d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/raster/TileUpdater;I)V");
            mids$[mid_getAlgorithmId_41b1271dfac9173f] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getElevation_824133ce4aec3505] = env->getMethodID(cls, "getElevation", "(DD)D");
            mids$[mid_intersection_465c95e4cb53bef3] = env->getMethodID(cls, "intersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_refineIntersection_0b100883a4ceff82] = env->getMethodID(cls, "refineIntersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BasicScanAlgorithm::BasicScanAlgorithm(const ::org::orekit::rugged::raster::TileUpdater & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3914898390d9812d, a0.this$, a1)) {}

        ::org::orekit::rugged::api::AlgorithmId BasicScanAlgorithm::getAlgorithmId() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_41b1271dfac9173f]));
        }

        jdouble BasicScanAlgorithm::getElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_824133ce4aec3505], a0, a1);
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint BasicScanAlgorithm::intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_intersection_465c95e4cb53bef3], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint BasicScanAlgorithm::refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_refineIntersection_0b100883a4ceff82], a0.this$, a1.this$, a2.this$, a3.this$));
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
      namespace intersection {
        static PyObject *t_BasicScanAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BasicScanAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BasicScanAlgorithm_init_(t_BasicScanAlgorithm *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BasicScanAlgorithm_getAlgorithmId(t_BasicScanAlgorithm *self);
        static PyObject *t_BasicScanAlgorithm_getElevation(t_BasicScanAlgorithm *self, PyObject *args);
        static PyObject *t_BasicScanAlgorithm_intersection(t_BasicScanAlgorithm *self, PyObject *args);
        static PyObject *t_BasicScanAlgorithm_refineIntersection(t_BasicScanAlgorithm *self, PyObject *args);
        static PyObject *t_BasicScanAlgorithm_get__algorithmId(t_BasicScanAlgorithm *self, void *data);
        static PyGetSetDef t_BasicScanAlgorithm__fields_[] = {
          DECLARE_GET_FIELD(t_BasicScanAlgorithm, algorithmId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BasicScanAlgorithm__methods_[] = {
          DECLARE_METHOD(t_BasicScanAlgorithm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BasicScanAlgorithm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BasicScanAlgorithm, getAlgorithmId, METH_NOARGS),
          DECLARE_METHOD(t_BasicScanAlgorithm, getElevation, METH_VARARGS),
          DECLARE_METHOD(t_BasicScanAlgorithm, intersection, METH_VARARGS),
          DECLARE_METHOD(t_BasicScanAlgorithm, refineIntersection, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BasicScanAlgorithm)[] = {
          { Py_tp_methods, t_BasicScanAlgorithm__methods_ },
          { Py_tp_init, (void *) t_BasicScanAlgorithm_init_ },
          { Py_tp_getset, t_BasicScanAlgorithm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BasicScanAlgorithm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BasicScanAlgorithm, t_BasicScanAlgorithm, BasicScanAlgorithm);

        void t_BasicScanAlgorithm::install(PyObject *module)
        {
          installType(&PY_TYPE(BasicScanAlgorithm), &PY_TYPE_DEF(BasicScanAlgorithm), module, "BasicScanAlgorithm", 0);
        }

        void t_BasicScanAlgorithm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BasicScanAlgorithm), "class_", make_descriptor(BasicScanAlgorithm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BasicScanAlgorithm), "wrapfn_", make_descriptor(t_BasicScanAlgorithm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BasicScanAlgorithm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BasicScanAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BasicScanAlgorithm::initializeClass, 1)))
            return NULL;
          return t_BasicScanAlgorithm::wrap_Object(BasicScanAlgorithm(((t_BasicScanAlgorithm *) arg)->object.this$));
        }
        static PyObject *t_BasicScanAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BasicScanAlgorithm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BasicScanAlgorithm_init_(t_BasicScanAlgorithm *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::rugged::raster::TileUpdater a0((jobject) NULL);
          jint a1;
          BasicScanAlgorithm object((jobject) NULL);

          if (!parseArgs(args, "kI", ::org::orekit::rugged::raster::TileUpdater::initializeClass, &a0, &a1))
          {
            INT_CALL(object = BasicScanAlgorithm(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BasicScanAlgorithm_getAlgorithmId(t_BasicScanAlgorithm *self)
        {
          ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
        }

        static PyObject *t_BasicScanAlgorithm_getElevation(t_BasicScanAlgorithm *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getElevation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevation", args);
          return NULL;
        }

        static PyObject *t_BasicScanAlgorithm_intersection(t_BasicScanAlgorithm *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.intersection(a0, a1, a2));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "intersection", args);
          return NULL;
        }

        static PyObject *t_BasicScanAlgorithm_refineIntersection(t_BasicScanAlgorithm *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a3((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.refineIntersection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "refineIntersection", args);
          return NULL;
        }

        static PyObject *t_BasicScanAlgorithm_get__algorithmId(t_BasicScanAlgorithm *self, void *data)
        {
          ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$SessionStatistics.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$SessionStatistics::class$ = NULL;
        jmethodID *CRD$SessionStatistics::mids$ = NULL;
        bool CRD$SessionStatistics::live$ = false;

        jclass CRD$SessionStatistics::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$SessionStatistics");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_831f3f00a1bc7698] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDDDI)V");
            mids$[mid_getDataQulityIndicator_f2f64475e4580546] = env->getMethodID(cls, "getDataQulityIndicator", "()I");
            mids$[mid_getKurtosis_456d9a2f64d6b28d] = env->getMethodID(cls, "getKurtosis", "()D");
            mids$[mid_getPeakMinusMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getPeakMinusMean", "()D");
            mids$[mid_getRms_456d9a2f64d6b28d] = env->getMethodID(cls, "getRms", "()D");
            mids$[mid_getSkewness_456d9a2f64d6b28d] = env->getMethodID(cls, "getSkewness", "()D");
            mids$[mid_getSystemConfigurationId_0090f7797e403f43] = env->getMethodID(cls, "getSystemConfigurationId", "()Ljava/lang/String;");
            mids$[mid_toCrdString_0090f7797e403f43] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$SessionStatistics::CRD$SessionStatistics(const ::java::lang::String & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jint a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_831f3f00a1bc7698, a0.this$, a1, a2, a3, a4, a5)) {}

        jint CRD$SessionStatistics::getDataQulityIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getDataQulityIndicator_f2f64475e4580546]);
        }

        jdouble CRD$SessionStatistics::getKurtosis() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getKurtosis_456d9a2f64d6b28d]);
        }

        jdouble CRD$SessionStatistics::getPeakMinusMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPeakMinusMean_456d9a2f64d6b28d]);
        }

        jdouble CRD$SessionStatistics::getRms() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRms_456d9a2f64d6b28d]);
        }

        jdouble CRD$SessionStatistics::getSkewness() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSkewness_456d9a2f64d6b28d]);
        }

        ::java::lang::String CRD$SessionStatistics::getSystemConfigurationId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationId_0090f7797e403f43]));
        }

        ::java::lang::String CRD$SessionStatistics::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_0090f7797e403f43]));
        }

        ::java::lang::String CRD$SessionStatistics::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
        static PyObject *t_CRD$SessionStatistics_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$SessionStatistics_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$SessionStatistics_init_(t_CRD$SessionStatistics *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$SessionStatistics_getDataQulityIndicator(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_getKurtosis(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_getPeakMinusMean(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_getRms(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_getSkewness(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_getSystemConfigurationId(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_toCrdString(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_toString(t_CRD$SessionStatistics *self, PyObject *args);
        static PyObject *t_CRD$SessionStatistics_get__dataQulityIndicator(t_CRD$SessionStatistics *self, void *data);
        static PyObject *t_CRD$SessionStatistics_get__kurtosis(t_CRD$SessionStatistics *self, void *data);
        static PyObject *t_CRD$SessionStatistics_get__peakMinusMean(t_CRD$SessionStatistics *self, void *data);
        static PyObject *t_CRD$SessionStatistics_get__rms(t_CRD$SessionStatistics *self, void *data);
        static PyObject *t_CRD$SessionStatistics_get__skewness(t_CRD$SessionStatistics *self, void *data);
        static PyObject *t_CRD$SessionStatistics_get__systemConfigurationId(t_CRD$SessionStatistics *self, void *data);
        static PyGetSetDef t_CRD$SessionStatistics__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, dataQulityIndicator),
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, kurtosis),
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, peakMinusMean),
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, rms),
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, skewness),
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, systemConfigurationId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$SessionStatistics__methods_[] = {
          DECLARE_METHOD(t_CRD$SessionStatistics, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$SessionStatistics, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getDataQulityIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getKurtosis, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getPeakMinusMean, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getRms, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getSkewness, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getSystemConfigurationId, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, toCrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$SessionStatistics)[] = {
          { Py_tp_methods, t_CRD$SessionStatistics__methods_ },
          { Py_tp_init, (void *) t_CRD$SessionStatistics_init_ },
          { Py_tp_getset, t_CRD$SessionStatistics__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$SessionStatistics)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$SessionStatistics, t_CRD$SessionStatistics, CRD$SessionStatistics);

        void t_CRD$SessionStatistics::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$SessionStatistics), &PY_TYPE_DEF(CRD$SessionStatistics), module, "CRD$SessionStatistics", 0);
        }

        void t_CRD$SessionStatistics::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$SessionStatistics), "class_", make_descriptor(CRD$SessionStatistics::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$SessionStatistics), "wrapfn_", make_descriptor(t_CRD$SessionStatistics::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$SessionStatistics), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$SessionStatistics_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$SessionStatistics::initializeClass, 1)))
            return NULL;
          return t_CRD$SessionStatistics::wrap_Object(CRD$SessionStatistics(((t_CRD$SessionStatistics *) arg)->object.this$));
        }
        static PyObject *t_CRD$SessionStatistics_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$SessionStatistics::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$SessionStatistics_init_(t_CRD$SessionStatistics *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          jdouble a3;
          jdouble a4;
          jint a5;
          CRD$SessionStatistics object((jobject) NULL);

          if (!parseArgs(args, "sDDDDI", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = CRD$SessionStatistics(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$SessionStatistics_getDataQulityIndicator(t_CRD$SessionStatistics *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDataQulityIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$SessionStatistics_getKurtosis(t_CRD$SessionStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getKurtosis());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$SessionStatistics_getPeakMinusMean(t_CRD$SessionStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPeakMinusMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$SessionStatistics_getRms(t_CRD$SessionStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRms());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$SessionStatistics_getSkewness(t_CRD$SessionStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSkewness());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$SessionStatistics_getSystemConfigurationId(t_CRD$SessionStatistics *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationId());
          return j2p(result);
        }

        static PyObject *t_CRD$SessionStatistics_toCrdString(t_CRD$SessionStatistics *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$SessionStatistics_toString(t_CRD$SessionStatistics *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$SessionStatistics), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$SessionStatistics_get__dataQulityIndicator(t_CRD$SessionStatistics *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDataQulityIndicator());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$SessionStatistics_get__kurtosis(t_CRD$SessionStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getKurtosis());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$SessionStatistics_get__peakMinusMean(t_CRD$SessionStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPeakMinusMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$SessionStatistics_get__rms(t_CRD$SessionStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRms());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$SessionStatistics_get__skewness(t_CRD$SessionStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSkewness());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$SessionStatistics_get__systemConfigurationId(t_CRD$SessionStatistics *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationId());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::class$ = NULL;
          jmethodID *UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::mids$ = NULL;
          bool UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::live$ = false;

          jclass UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getUnnormalizedCnm_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getUnnormalizedCnm", "(II)D");
              mids$[mid_getUnnormalizedSnm_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getUnnormalizedSnm", "(II)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::getUnnormalizedCnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getUnnormalizedCnm_a84e4ee1da3f1ab8], a0, a1);
          }

          jdouble UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::getUnnormalizedSnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getUnnormalizedSnm_a84e4ee1da3f1ab8], a0, a1);
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
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_getUnnormalizedCnm(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics *self, PyObject *args);
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_getUnnormalizedSnm(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics *self, PyObject *args);

          static PyMethodDef t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics__methods_[] = {
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, getUnnormalizedCnm, METH_VARARGS),
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, getUnnormalizedSnm, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics)[] = {
            { Py_tp_methods, t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics)[] = {
            &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
            NULL
          };

          DEFINE_TYPE(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics);

          void t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::install(PyObject *module)
          {
            installType(&PY_TYPE(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics), &PY_TYPE_DEF(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics), module, "UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics", 0);
          }

          void t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics), "class_", make_descriptor(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics), "wrapfn_", make_descriptor(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, 1)))
              return NULL;
            return t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::wrap_Object(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics(((t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics *) arg)->object.this$));
          }
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_getUnnormalizedCnm(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getUnnormalizedCnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getUnnormalizedCnm", args);
            return NULL;
          }

          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_getUnnormalizedSnm(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getUnnormalizedSnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getUnnormalizedSnm", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/Skewness.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/moment/Skewness.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *Skewness::class$ = NULL;
          jmethodID *Skewness::mids$ = NULL;
          bool Skewness::live$ = false;

          jclass Skewness::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/Skewness");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_ab268e07756e92a4] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/Skewness;");
              mids$[mid_evaluate_0a7ff474793a505a] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_456d9a2f64d6b28d] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_77e0f9a1f260e2e5] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Skewness::Skewness() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void Skewness::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
          }

          Skewness Skewness::copy() const
          {
            return Skewness(env->callObjectMethod(this$, mids$[mid_copy_ab268e07756e92a4]));
          }

          jdouble Skewness::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_0a7ff474793a505a], a0.this$, a1, a2);
          }

          jlong Skewness::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
          }

          jdouble Skewness::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_456d9a2f64d6b28d]);
          }

          void Skewness::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_77e0f9a1f260e2e5], a0);
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
        namespace moment {
          static PyObject *t_Skewness_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Skewness_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Skewness_init_(t_Skewness *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Skewness_clear(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_copy(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_evaluate(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_getN(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_getResult(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_increment(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_get__n(t_Skewness *self, void *data);
          static PyObject *t_Skewness_get__result(t_Skewness *self, void *data);
          static PyGetSetDef t_Skewness__fields_[] = {
            DECLARE_GET_FIELD(t_Skewness, n),
            DECLARE_GET_FIELD(t_Skewness, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Skewness__methods_[] = {
            DECLARE_METHOD(t_Skewness, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Skewness, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Skewness, clear, METH_VARARGS),
            DECLARE_METHOD(t_Skewness, copy, METH_VARARGS),
            DECLARE_METHOD(t_Skewness, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Skewness, getN, METH_VARARGS),
            DECLARE_METHOD(t_Skewness, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Skewness, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Skewness)[] = {
            { Py_tp_methods, t_Skewness__methods_ },
            { Py_tp_init, (void *) t_Skewness_init_ },
            { Py_tp_getset, t_Skewness__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Skewness)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Skewness, t_Skewness, Skewness);

          void t_Skewness::install(PyObject *module)
          {
            installType(&PY_TYPE(Skewness), &PY_TYPE_DEF(Skewness), module, "Skewness", 0);
          }

          void t_Skewness::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Skewness), "class_", make_descriptor(Skewness::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Skewness), "wrapfn_", make_descriptor(t_Skewness::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Skewness), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Skewness_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Skewness::initializeClass, 1)))
              return NULL;
            return t_Skewness::wrap_Object(Skewness(((t_Skewness *) arg)->object.this$));
          }
          static PyObject *t_Skewness_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Skewness::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Skewness_init_(t_Skewness *self, PyObject *args, PyObject *kwds)
          {
            Skewness object((jobject) NULL);

            INT_CALL(object = Skewness());
            self->object = object;

            return 0;
          }

          static PyObject *t_Skewness_clear(t_Skewness *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Skewness_copy(t_Skewness *self, PyObject *args)
          {
            Skewness result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Skewness::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Skewness_evaluate(t_Skewness *self, PyObject *args)
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

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Skewness_getN(t_Skewness *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Skewness_getResult(t_Skewness *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Skewness_increment(t_Skewness *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Skewness_get__n(t_Skewness *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Skewness_get__result(t_Skewness *self, void *data)
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

#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/LofOffsetPointing.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *LofOffsetPointing::class$ = NULL;
      jmethodID *LofOffsetPointing::mids$ = NULL;
      bool LofOffsetPointing::live$ = false;

      jclass LofOffsetPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/LofOffsetPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_6abc8a02d40636af] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/bodies/BodyShape;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_getAttitude_aab1c6ab68ffdcbb] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_a02177519e1b6a45] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitudeRotation_494718838b66cf03] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getAttitudeRotation_267252ddff45220c] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getTargetPV_19719ebf0495cd86] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPV_11bfbaf3cce3e66c] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LofOffsetPointing::LofOffsetPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::bodies::BodyShape & a1, const ::org::orekit::attitudes::AttitudeProvider & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_6abc8a02d40636af, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      ::org::orekit::attitudes::FieldAttitude LofOffsetPointing::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_aab1c6ab68ffdcbb], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude LofOffsetPointing::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_a02177519e1b6a45], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LofOffsetPointing::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_494718838b66cf03], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LofOffsetPointing::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_267252ddff45220c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates LofOffsetPointing::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_19719ebf0495cd86], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates LofOffsetPointing::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_11bfbaf3cce3e66c], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_LofOffsetPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LofOffsetPointing_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LofOffsetPointing_init_(t_LofOffsetPointing *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LofOffsetPointing_getAttitude(t_LofOffsetPointing *self, PyObject *args);
      static PyObject *t_LofOffsetPointing_getAttitudeRotation(t_LofOffsetPointing *self, PyObject *args);
      static PyObject *t_LofOffsetPointing_getTargetPV(t_LofOffsetPointing *self, PyObject *args);

      static PyMethodDef t_LofOffsetPointing__methods_[] = {
        DECLARE_METHOD(t_LofOffsetPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LofOffsetPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LofOffsetPointing, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_LofOffsetPointing, getAttitudeRotation, METH_VARARGS),
        DECLARE_METHOD(t_LofOffsetPointing, getTargetPV, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LofOffsetPointing)[] = {
        { Py_tp_methods, t_LofOffsetPointing__methods_ },
        { Py_tp_init, (void *) t_LofOffsetPointing_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LofOffsetPointing)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(LofOffsetPointing, t_LofOffsetPointing, LofOffsetPointing);

      void t_LofOffsetPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(LofOffsetPointing), &PY_TYPE_DEF(LofOffsetPointing), module, "LofOffsetPointing", 0);
      }

      void t_LofOffsetPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LofOffsetPointing), "class_", make_descriptor(LofOffsetPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LofOffsetPointing), "wrapfn_", make_descriptor(t_LofOffsetPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LofOffsetPointing), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LofOffsetPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LofOffsetPointing::initializeClass, 1)))
          return NULL;
        return t_LofOffsetPointing::wrap_Object(LofOffsetPointing(((t_LofOffsetPointing *) arg)->object.this$));
      }
      static PyObject *t_LofOffsetPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LofOffsetPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LofOffsetPointing_init_(t_LofOffsetPointing *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::bodies::BodyShape a1((jobject) NULL);
        ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
        LofOffsetPointing object((jobject) NULL);

        if (!parseArgs(args, "kkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = LofOffsetPointing(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LofOffsetPointing_getAttitude(t_LofOffsetPointing *self, PyObject *args)
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

        return callSuper(PY_TYPE(LofOffsetPointing), (PyObject *) self, "getAttitude", args, 2);
      }

      static PyObject *t_LofOffsetPointing_getAttitudeRotation(t_LofOffsetPointing *self, PyObject *args)
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

        return callSuper(PY_TYPE(LofOffsetPointing), (PyObject *) self, "getAttitudeRotation", args, 2);
      }

      static PyObject *t_LofOffsetPointing_getTargetPV(t_LofOffsetPointing *self, PyObject *args)
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
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020Data.h"
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
                  mids$[mid_init$_2e90a886a11e1715] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020Data;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1020::Rtcm1020(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1020Data & a1) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_2e90a886a11e1715, a0, a1.this$)) {}
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
#include "org/orekit/propagation/events/handlers/FieldContinueOnEvent.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldContinueOnEvent::class$ = NULL;
          jmethodID *FieldContinueOnEvent::mids$ = NULL;
          bool FieldContinueOnEvent::live$ = false;

          jclass FieldContinueOnEvent::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldContinueOnEvent");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_094737664b369b83] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldContinueOnEvent::FieldContinueOnEvent() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          ::org::hipparchus::ode::events::Action FieldContinueOnEvent::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_094737664b369b83], a0.this$, a1.this$, a2));
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
          static PyObject *t_FieldContinueOnEvent_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldContinueOnEvent_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldContinueOnEvent_of_(t_FieldContinueOnEvent *self, PyObject *args);
          static int t_FieldContinueOnEvent_init_(t_FieldContinueOnEvent *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldContinueOnEvent_eventOccurred(t_FieldContinueOnEvent *self, PyObject *args);
          static PyObject *t_FieldContinueOnEvent_get__parameters_(t_FieldContinueOnEvent *self, void *data);
          static PyGetSetDef t_FieldContinueOnEvent__fields_[] = {
            DECLARE_GET_FIELD(t_FieldContinueOnEvent, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldContinueOnEvent__methods_[] = {
            DECLARE_METHOD(t_FieldContinueOnEvent, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldContinueOnEvent, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldContinueOnEvent, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldContinueOnEvent, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldContinueOnEvent)[] = {
            { Py_tp_methods, t_FieldContinueOnEvent__methods_ },
            { Py_tp_init, (void *) t_FieldContinueOnEvent_init_ },
            { Py_tp_getset, t_FieldContinueOnEvent__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldContinueOnEvent)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldContinueOnEvent, t_FieldContinueOnEvent, FieldContinueOnEvent);
          PyObject *t_FieldContinueOnEvent::wrap_Object(const FieldContinueOnEvent& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldContinueOnEvent::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldContinueOnEvent *self = (t_FieldContinueOnEvent *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldContinueOnEvent::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldContinueOnEvent::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldContinueOnEvent *self = (t_FieldContinueOnEvent *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldContinueOnEvent::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldContinueOnEvent), &PY_TYPE_DEF(FieldContinueOnEvent), module, "FieldContinueOnEvent", 0);
          }

          void t_FieldContinueOnEvent::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinueOnEvent), "class_", make_descriptor(FieldContinueOnEvent::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinueOnEvent), "wrapfn_", make_descriptor(t_FieldContinueOnEvent::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinueOnEvent), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldContinueOnEvent_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldContinueOnEvent::initializeClass, 1)))
              return NULL;
            return t_FieldContinueOnEvent::wrap_Object(FieldContinueOnEvent(((t_FieldContinueOnEvent *) arg)->object.this$));
          }
          static PyObject *t_FieldContinueOnEvent_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldContinueOnEvent::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldContinueOnEvent_of_(t_FieldContinueOnEvent *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldContinueOnEvent_init_(t_FieldContinueOnEvent *self, PyObject *args, PyObject *kwds)
          {
            FieldContinueOnEvent object((jobject) NULL);

            INT_CALL(object = FieldContinueOnEvent());
            self->object = object;

            return 0;
          }

          static PyObject *t_FieldContinueOnEvent_eventOccurred(t_FieldContinueOnEvent *self, PyObject *args)
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
          static PyObject *t_FieldContinueOnEvent_get__parameters_(t_FieldContinueOnEvent *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/GHmsjPolynomials.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *GHmsjPolynomials::class$ = NULL;
            jmethodID *GHmsjPolynomials::mids$ = NULL;
            bool GHmsjPolynomials::live$ = false;

            jclass GHmsjPolynomials::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/GHmsjPolynomials");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_c203f28d1ff5514f] = env->getMethodID(cls, "<init>", "(DDDDI)V");
                mids$[mid_getGmsj_d692aeb156453fed] = env->getMethodID(cls, "getGmsj", "(III)D");
                mids$[mid_getHmsj_d692aeb156453fed] = env->getMethodID(cls, "getHmsj", "(III)D");
                mids$[mid_getdGmsdAlpha_d692aeb156453fed] = env->getMethodID(cls, "getdGmsdAlpha", "(III)D");
                mids$[mid_getdGmsdBeta_d692aeb156453fed] = env->getMethodID(cls, "getdGmsdBeta", "(III)D");
                mids$[mid_getdGmsdh_d692aeb156453fed] = env->getMethodID(cls, "getdGmsdh", "(III)D");
                mids$[mid_getdGmsdk_d692aeb156453fed] = env->getMethodID(cls, "getdGmsdk", "(III)D");
                mids$[mid_getdHmsdAlpha_d692aeb156453fed] = env->getMethodID(cls, "getdHmsdAlpha", "(III)D");
                mids$[mid_getdHmsdBeta_d692aeb156453fed] = env->getMethodID(cls, "getdHmsdBeta", "(III)D");
                mids$[mid_getdHmsdh_d692aeb156453fed] = env->getMethodID(cls, "getdHmsdh", "(III)D");
                mids$[mid_getdHmsdk_d692aeb156453fed] = env->getMethodID(cls, "getdHmsdk", "(III)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GHmsjPolynomials::GHmsjPolynomials(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c203f28d1ff5514f, a0, a1, a2, a3, a4)) {}

            jdouble GHmsjPolynomials::getGmsj(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGmsj_d692aeb156453fed], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getHmsj(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHmsj_d692aeb156453fed], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdGmsdAlpha(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGmsdAlpha_d692aeb156453fed], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdGmsdBeta(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGmsdBeta_d692aeb156453fed], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdGmsdh(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGmsdh_d692aeb156453fed], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdGmsdk(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGmsdk_d692aeb156453fed], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdHmsdAlpha(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHmsdAlpha_d692aeb156453fed], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdHmsdBeta(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHmsdBeta_d692aeb156453fed], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdHmsdh(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHmsdh_d692aeb156453fed], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdHmsdk(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHmsdk_d692aeb156453fed], a0, a1, a2);
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
            static PyObject *t_GHmsjPolynomials_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GHmsjPolynomials_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GHmsjPolynomials_init_(t_GHmsjPolynomials *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GHmsjPolynomials_getGmsj(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getHmsj(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdGmsdAlpha(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdGmsdBeta(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdGmsdh(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdGmsdk(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdHmsdAlpha(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdHmsdBeta(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdHmsdh(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdHmsdk(t_GHmsjPolynomials *self, PyObject *args);

            static PyMethodDef t_GHmsjPolynomials__methods_[] = {
              DECLARE_METHOD(t_GHmsjPolynomials, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GHmsjPolynomials, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GHmsjPolynomials, getGmsj, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getHmsj, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdGmsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdGmsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdGmsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdGmsdk, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdHmsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdHmsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdHmsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdHmsdk, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GHmsjPolynomials)[] = {
              { Py_tp_methods, t_GHmsjPolynomials__methods_ },
              { Py_tp_init, (void *) t_GHmsjPolynomials_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GHmsjPolynomials)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GHmsjPolynomials, t_GHmsjPolynomials, GHmsjPolynomials);

            void t_GHmsjPolynomials::install(PyObject *module)
            {
              installType(&PY_TYPE(GHmsjPolynomials), &PY_TYPE_DEF(GHmsjPolynomials), module, "GHmsjPolynomials", 0);
            }

            void t_GHmsjPolynomials::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHmsjPolynomials), "class_", make_descriptor(GHmsjPolynomials::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHmsjPolynomials), "wrapfn_", make_descriptor(t_GHmsjPolynomials::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHmsjPolynomials), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GHmsjPolynomials_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GHmsjPolynomials::initializeClass, 1)))
                return NULL;
              return t_GHmsjPolynomials::wrap_Object(GHmsjPolynomials(((t_GHmsjPolynomials *) arg)->object.this$));
            }
            static PyObject *t_GHmsjPolynomials_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GHmsjPolynomials::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GHmsjPolynomials_init_(t_GHmsjPolynomials *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jint a4;
              GHmsjPolynomials object((jobject) NULL);

              if (!parseArgs(args, "DDDDI", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = GHmsjPolynomials(a0, a1, a2, a3, a4));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_GHmsjPolynomials_getGmsj(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getGmsj(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getGmsj", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getHmsj(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getHmsj(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getHmsj", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdGmsdAlpha(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdAlpha(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdGmsdBeta(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdBeta(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdGmsdh(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdh(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdh", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdGmsdk(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdk(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdk", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdHmsdAlpha(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdAlpha(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdHmsdBeta(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdBeta(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdHmsdh(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdh(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdh", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdHmsdk(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdk(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdk", args);
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
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/frames/ITRFVersion$Converter.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ITRFVersion::class$ = NULL;
      jmethodID *ITRFVersion::mids$ = NULL;
      bool ITRFVersion::live$ = false;
      ITRFVersion *ITRFVersion::ITRF_1988 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1989 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1990 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1991 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1992 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1993 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1994 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1996 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1997 = NULL;
      ITRFVersion *ITRFVersion::ITRF_2000 = NULL;
      ITRFVersion *ITRFVersion::ITRF_2005 = NULL;
      ITRFVersion *ITRFVersion::ITRF_2008 = NULL;
      ITRFVersion *ITRFVersion::ITRF_2014 = NULL;
      ITRFVersion *ITRFVersion::ITRF_2020 = NULL;

      jclass ITRFVersion::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ITRFVersion");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getConverter_8a4ab2ce3d169bb5] = env->getStaticMethodID(cls, "getConverter", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/frames/ITRFVersion;)Lorg/orekit/frames/ITRFVersion$Converter;");
          mids$[mid_getConverter_ad937c11bb9748a4] = env->getStaticMethodID(cls, "getConverter", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/frames/ITRFVersion;Lorg/orekit/time/TimeScale;)Lorg/orekit/frames/ITRFVersion$Converter;");
          mids$[mid_getITRFVersion_e0fa84c7f77505c0] = env->getStaticMethodID(cls, "getITRFVersion", "(Ljava/lang/String;)Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getITRFVersion_926723985e2777cb] = env->getStaticMethodID(cls, "getITRFVersion", "(I)Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getLast_4865f340ec39b9c4] = env->getStaticMethodID(cls, "getLast", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getYear_d6ab429752e7c267] = env->getMethodID(cls, "getYear", "()I");
          mids$[mid_valueOf_e0fa84c7f77505c0] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_values_f692e2a97a822a9b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/ITRFVersion;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ITRF_1988 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1988", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1989 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1989", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1990 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1990", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1991 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1991", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1992 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1992", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1993 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1993", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1994 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1994", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1996 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1996", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1997 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1997", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_2000 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_2000", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_2005 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_2005", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_2008 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_2008", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_2014 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_2014", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_2020 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_2020", "Lorg/orekit/frames/ITRFVersion;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::ITRFVersion$Converter ITRFVersion::getConverter(const ITRFVersion & a0, const ITRFVersion & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::ITRFVersion$Converter(env->callStaticObjectMethod(cls, mids$[mid_getConverter_8a4ab2ce3d169bb5], a0.this$, a1.this$));
      }

      ::org::orekit::frames::ITRFVersion$Converter ITRFVersion::getConverter(const ITRFVersion & a0, const ITRFVersion & a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::ITRFVersion$Converter(env->callStaticObjectMethod(cls, mids$[mid_getConverter_ad937c11bb9748a4], a0.this$, a1.this$, a2.this$));
      }

      ITRFVersion ITRFVersion::getITRFVersion(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ITRFVersion(env->callStaticObjectMethod(cls, mids$[mid_getITRFVersion_e0fa84c7f77505c0], a0.this$));
      }

      ITRFVersion ITRFVersion::getITRFVersion(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ITRFVersion(env->callStaticObjectMethod(cls, mids$[mid_getITRFVersion_926723985e2777cb], a0));
      }

      ITRFVersion ITRFVersion::getLast()
      {
        jclass cls = env->getClass(initializeClass);
        return ITRFVersion(env->callStaticObjectMethod(cls, mids$[mid_getLast_4865f340ec39b9c4]));
      }

      ::java::lang::String ITRFVersion::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      jint ITRFVersion::getYear() const
      {
        return env->callIntMethod(this$, mids$[mid_getYear_d6ab429752e7c267]);
      }

      ITRFVersion ITRFVersion::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ITRFVersion(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e0fa84c7f77505c0], a0.this$));
      }

      JArray< ITRFVersion > ITRFVersion::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ITRFVersion >(env->callStaticObjectMethod(cls, mids$[mid_values_f692e2a97a822a9b]));
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
      static PyObject *t_ITRFVersion_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersion_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersion_of_(t_ITRFVersion *self, PyObject *args);
      static PyObject *t_ITRFVersion_getConverter(PyTypeObject *type, PyObject *args);
      static PyObject *t_ITRFVersion_getITRFVersion(PyTypeObject *type, PyObject *args);
      static PyObject *t_ITRFVersion_getLast(PyTypeObject *type);
      static PyObject *t_ITRFVersion_getName(t_ITRFVersion *self);
      static PyObject *t_ITRFVersion_getYear(t_ITRFVersion *self);
      static PyObject *t_ITRFVersion_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_ITRFVersion_values(PyTypeObject *type);
      static PyObject *t_ITRFVersion_get__last(t_ITRFVersion *self, void *data);
      static PyObject *t_ITRFVersion_get__name(t_ITRFVersion *self, void *data);
      static PyObject *t_ITRFVersion_get__year(t_ITRFVersion *self, void *data);
      static PyObject *t_ITRFVersion_get__parameters_(t_ITRFVersion *self, void *data);
      static PyGetSetDef t_ITRFVersion__fields_[] = {
        DECLARE_GET_FIELD(t_ITRFVersion, last),
        DECLARE_GET_FIELD(t_ITRFVersion, name),
        DECLARE_GET_FIELD(t_ITRFVersion, year),
        DECLARE_GET_FIELD(t_ITRFVersion, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ITRFVersion__methods_[] = {
        DECLARE_METHOD(t_ITRFVersion, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, of_, METH_VARARGS),
        DECLARE_METHOD(t_ITRFVersion, getConverter, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, getITRFVersion, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, getLast, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, getName, METH_NOARGS),
        DECLARE_METHOD(t_ITRFVersion, getYear, METH_NOARGS),
        DECLARE_METHOD(t_ITRFVersion, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ITRFVersion)[] = {
        { Py_tp_methods, t_ITRFVersion__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ITRFVersion__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ITRFVersion)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(ITRFVersion, t_ITRFVersion, ITRFVersion);
      PyObject *t_ITRFVersion::wrap_Object(const ITRFVersion& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ITRFVersion::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ITRFVersion *self = (t_ITRFVersion *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ITRFVersion::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ITRFVersion::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ITRFVersion *self = (t_ITRFVersion *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ITRFVersion::install(PyObject *module)
      {
        installType(&PY_TYPE(ITRFVersion), &PY_TYPE_DEF(ITRFVersion), module, "ITRFVersion", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "Converter", make_descriptor(&PY_TYPE_DEF(ITRFVersion$Converter)));
      }

      void t_ITRFVersion::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "class_", make_descriptor(ITRFVersion::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "wrapfn_", make_descriptor(t_ITRFVersion::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "boxfn_", make_descriptor(boxObject));
        env->getClass(ITRFVersion::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1988", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1988)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1989", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1989)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1990", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1990)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1991", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1991)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1992", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1992)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1993", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1993)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1994", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1994)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1996", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1997", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1997)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_2000", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_2000)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_2005", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_2005)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_2008", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_2008)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_2014", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_2014)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_2020", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_2020)));
      }

      static PyObject *t_ITRFVersion_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ITRFVersion::initializeClass, 1)))
          return NULL;
        return t_ITRFVersion::wrap_Object(ITRFVersion(((t_ITRFVersion *) arg)->object.this$));
      }
      static PyObject *t_ITRFVersion_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ITRFVersion::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ITRFVersion_of_(t_ITRFVersion *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_ITRFVersion_getConverter(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ITRFVersion a0((jobject) NULL);
            PyTypeObject **p0;
            ITRFVersion a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::ITRFVersion$Converter result((jobject) NULL);

            if (!parseArgs(args, "KK", ITRFVersion::initializeClass, ITRFVersion::initializeClass, &a0, &p0, t_ITRFVersion::parameters_, &a1, &p1, t_ITRFVersion::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::getConverter(a0, a1));
              return ::org::orekit::frames::t_ITRFVersion$Converter::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ITRFVersion a0((jobject) NULL);
            PyTypeObject **p0;
            ITRFVersion a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            ::org::orekit::frames::ITRFVersion$Converter result((jobject) NULL);

            if (!parseArgs(args, "KKk", ITRFVersion::initializeClass, ITRFVersion::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, t_ITRFVersion::parameters_, &a1, &p1, t_ITRFVersion::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::getConverter(a0, a1, a2));
              return ::org::orekit::frames::t_ITRFVersion$Converter::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getConverter", args);
        return NULL;
      }

      static PyObject *t_ITRFVersion_getITRFVersion(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ITRFVersion result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::getITRFVersion(a0));
              return t_ITRFVersion::wrap_Object(result);
            }
          }
          {
            jint a0;
            ITRFVersion result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::getITRFVersion(a0));
              return t_ITRFVersion::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getITRFVersion", args);
        return NULL;
      }

      static PyObject *t_ITRFVersion_getLast(PyTypeObject *type)
      {
        ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::getLast());
        return t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_ITRFVersion_getName(t_ITRFVersion *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_ITRFVersion_getYear(t_ITRFVersion *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getYear());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ITRFVersion_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ITRFVersion result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::valueOf(a0));
          return t_ITRFVersion::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_ITRFVersion_values(PyTypeObject *type)
      {
        JArray< ITRFVersion > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::values());
        return JArray<jobject>(result.this$).wrap(t_ITRFVersion::wrap_jobject);
      }
      static PyObject *t_ITRFVersion_get__parameters_(t_ITRFVersion *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ITRFVersion_get__last(t_ITRFVersion *self, void *data)
      {
        ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getLast());
        return t_ITRFVersion::wrap_Object(value);
      }

      static PyObject *t_ITRFVersion_get__name(t_ITRFVersion *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_ITRFVersion_get__year(t_ITRFVersion *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getYear());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/GlonassUserRangeAccuracy.h"
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *GlonassUserRangeAccuracy::class$ = NULL;
            jmethodID *GlonassUserRangeAccuracy::mids$ = NULL;
            bool GlonassUserRangeAccuracy::live$ = false;

            jclass GlonassUserRangeAccuracy::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/GlonassUserRangeAccuracy");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getAccuracy", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GlonassUserRangeAccuracy::GlonassUserRangeAccuracy(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

            jdouble GlonassUserRangeAccuracy::getAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAccuracy_9981f74b2d109da6]);
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
          namespace common {
            static PyObject *t_GlonassUserRangeAccuracy_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GlonassUserRangeAccuracy_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GlonassUserRangeAccuracy_init_(t_GlonassUserRangeAccuracy *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GlonassUserRangeAccuracy_getAccuracy(t_GlonassUserRangeAccuracy *self);
            static PyObject *t_GlonassUserRangeAccuracy_get__accuracy(t_GlonassUserRangeAccuracy *self, void *data);
            static PyGetSetDef t_GlonassUserRangeAccuracy__fields_[] = {
              DECLARE_GET_FIELD(t_GlonassUserRangeAccuracy, accuracy),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GlonassUserRangeAccuracy__methods_[] = {
              DECLARE_METHOD(t_GlonassUserRangeAccuracy, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GlonassUserRangeAccuracy, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GlonassUserRangeAccuracy, getAccuracy, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GlonassUserRangeAccuracy)[] = {
              { Py_tp_methods, t_GlonassUserRangeAccuracy__methods_ },
              { Py_tp_init, (void *) t_GlonassUserRangeAccuracy_init_ },
              { Py_tp_getset, t_GlonassUserRangeAccuracy__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GlonassUserRangeAccuracy)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GlonassUserRangeAccuracy, t_GlonassUserRangeAccuracy, GlonassUserRangeAccuracy);

            void t_GlonassUserRangeAccuracy::install(PyObject *module)
            {
              installType(&PY_TYPE(GlonassUserRangeAccuracy), &PY_TYPE_DEF(GlonassUserRangeAccuracy), module, "GlonassUserRangeAccuracy", 0);
            }

            void t_GlonassUserRangeAccuracy::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassUserRangeAccuracy), "class_", make_descriptor(GlonassUserRangeAccuracy::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassUserRangeAccuracy), "wrapfn_", make_descriptor(t_GlonassUserRangeAccuracy::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassUserRangeAccuracy), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GlonassUserRangeAccuracy_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GlonassUserRangeAccuracy::initializeClass, 1)))
                return NULL;
              return t_GlonassUserRangeAccuracy::wrap_Object(GlonassUserRangeAccuracy(((t_GlonassUserRangeAccuracy *) arg)->object.this$));
            }
            static PyObject *t_GlonassUserRangeAccuracy_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GlonassUserRangeAccuracy::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GlonassUserRangeAccuracy_init_(t_GlonassUserRangeAccuracy *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              GlonassUserRangeAccuracy object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = GlonassUserRangeAccuracy(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_GlonassUserRangeAccuracy_getAccuracy(t_GlonassUserRangeAccuracy *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GlonassUserRangeAccuracy_get__accuracy(t_GlonassUserRangeAccuracy *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAccuracy());
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
#include "org/orekit/forces/maneuvers/trigger/PythonFieldManeuverTriggersResetter.h"
#include "java/lang/Throwable.h"
#include "org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
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
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_maneuverTriggered_e90aea08a7a0ab5e] = env->getMethodID(cls, "maneuverTriggered", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_resetState_59bc90ab93a43079] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonFieldManeuverTriggersResetter::PythonFieldManeuverTriggersResetter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonFieldManeuverTriggersResetter::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonFieldManeuverTriggersResetter::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonFieldManeuverTriggersResetter::pythonExtension(jlong a0) const
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldManeuverTriggersResetter::mids$[PythonFieldManeuverTriggersResetter::mid_pythonExtension_42c72b98e3c2e08a]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldManeuverTriggersResetter::mids$[PythonFieldManeuverTriggersResetter::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonFieldManeuverTriggersResetter::mids$[PythonFieldManeuverTriggersResetter::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonFieldManeuverTriggersResetter_resetState2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldManeuverTriggersResetter::mids$[PythonFieldManeuverTriggersResetter::mid_pythonExtension_42c72b98e3c2e08a]);
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
#include "java/text/Format.h"
#include "java/lang/StringBuffer.h"
#include "java/text/ParseException.h"
#include "java/io/Serializable.h"
#include "java/text/FieldPosition.h"
#include "java/text/ParsePosition.h"
#include "java/lang/Class.h"
#include "java/lang/Cloneable.h"
#include "java/lang/String.h"
#include "java/text/AttributedCharacterIterator.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *Format::class$ = NULL;
    jmethodID *Format::mids$ = NULL;
    bool Format::live$ = false;

    jclass Format::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/Format");

        mids$ = new jmethodID[max_mid];
        mids$[mid_clone_704a5bee58538972] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_format_60ee6fc56bffa550] = env->getMethodID(cls, "format", "(Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_format_8a939fb9d04314c2] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_formatToCharacterIterator_22f522baf2fb71d1] = env->getMethodID(cls, "formatToCharacterIterator", "(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;");
        mids$[mid_parseObject_bb1ff484ae64c57e] = env->getMethodID(cls, "parseObject", "(Ljava/lang/String;)Ljava/lang/Object;");
        mids$[mid_parseObject_43b97b9c23ff173e] = env->getMethodID(cls, "parseObject", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::Object Format::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_704a5bee58538972]));
    }

    ::java::lang::String Format::format(const ::java::lang::Object & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_60ee6fc56bffa550], a0.this$));
    }

    ::java::lang::StringBuffer Format::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_8a939fb9d04314c2], a0.this$, a1.this$, a2.this$));
    }

    ::java::text::AttributedCharacterIterator Format::formatToCharacterIterator(const ::java::lang::Object & a0) const
    {
      return ::java::text::AttributedCharacterIterator(env->callObjectMethod(this$, mids$[mid_formatToCharacterIterator_22f522baf2fb71d1], a0.this$));
    }

    ::java::lang::Object Format::parseObject(const ::java::lang::String & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_parseObject_bb1ff484ae64c57e], a0.this$));
    }

    ::java::lang::Object Format::parseObject(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_parseObject_43b97b9c23ff173e], a0.this$, a1.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_Format_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Format_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Format_clone(t_Format *self);
    static PyObject *t_Format_format(t_Format *self, PyObject *args);
    static PyObject *t_Format_formatToCharacterIterator(t_Format *self, PyObject *arg);
    static PyObject *t_Format_parseObject(t_Format *self, PyObject *args);

    static PyMethodDef t_Format__methods_[] = {
      DECLARE_METHOD(t_Format, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Format, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Format, clone, METH_NOARGS),
      DECLARE_METHOD(t_Format, format, METH_VARARGS),
      DECLARE_METHOD(t_Format, formatToCharacterIterator, METH_O),
      DECLARE_METHOD(t_Format, parseObject, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Format)[] = {
      { Py_tp_methods, t_Format__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Format)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Format, t_Format, Format);

    void t_Format::install(PyObject *module)
    {
      installType(&PY_TYPE(Format), &PY_TYPE_DEF(Format), module, "Format", 0);
    }

    void t_Format::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Format), "class_", make_descriptor(Format::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Format), "wrapfn_", make_descriptor(t_Format::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Format), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Format_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Format::initializeClass, 1)))
        return NULL;
      return t_Format::wrap_Object(Format(((t_Format *) arg)->object.this$));
    }
    static PyObject *t_Format_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Format::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Format_clone(t_Format *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Format_format(t_Format *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.format(a0));
            return j2p(result);
          }
        }
        break;
       case 3:
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

      PyErr_SetArgsError((PyObject *) self, "format", args);
      return NULL;
    }

    static PyObject *t_Format_formatToCharacterIterator(t_Format *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::text::AttributedCharacterIterator result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.formatToCharacterIterator(a0));
        return ::java::text::t_AttributedCharacterIterator::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "formatToCharacterIterator", arg);
      return NULL;
    }

    static PyObject *t_Format_parseObject(t_Format *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.parseObject(a0));
            return ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::text::ParsePosition a1((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.parseObject(a0, a1));
            return ::java::lang::t_Object::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "parseObject", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/GroundReceiverMeasurement.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
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
            mids$[mid_init$_4b32275f454debe9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;ZLorg/orekit/time/AbsoluteDate;[D[D[DLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_c2b759d1b43bb582] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;ZLorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getGroundStationCoordinates_40801dad0fb52423] = env->getMethodID(cls, "getGroundStationCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/PVCoordinates;");
            mids$[mid_getGroundStationPosition_5996cdbecf4f0d06] = env->getMethodID(cls, "getGroundStationPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getStation_f8d3ef5d49da0d87] = env->getMethodID(cls, "getStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_isTwoWay_eee3de00fe971136] = env->getMethodID(cls, "isTwoWay", "()Z");
            mids$[mid_computeCommonParametersWithout_8840f6bb9bb72260] = env->getMethodID(cls, "computeCommonParametersWithout", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/GroundReceiverCommonParametersWithoutDerivatives;");
            mids$[mid_computeCommonParametersWithDerivatives_e7e18dd9e92cc83c] = env->getMethodID(cls, "computeCommonParametersWithDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/GroundReceiverCommonParametersWithDerivatives;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundReceiverMeasurement::GroundReceiverMeasurement(const ::org::orekit::estimation::measurements::GroundStation & a0, jboolean a1, const ::org::orekit::time::AbsoluteDate & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, const JArray< jdouble > & a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_4b32275f454debe9, a0.this$, a1, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        GroundReceiverMeasurement::GroundReceiverMeasurement(const ::org::orekit::estimation::measurements::GroundStation & a0, jboolean a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_c2b759d1b43bb582, a0.this$, a1, a2.this$, a3, a4, a5, a6.this$)) {}

        ::org::orekit::utils::PVCoordinates GroundReceiverMeasurement::getGroundStationCoordinates(const ::org::orekit::frames::Frame & a0) const
        {
          return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getGroundStationCoordinates_40801dad0fb52423], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D GroundReceiverMeasurement::getGroundStationPosition(const ::org::orekit::frames::Frame & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getGroundStationPosition_5996cdbecf4f0d06], a0.this$));
        }

        ::org::orekit::estimation::measurements::GroundStation GroundReceiverMeasurement::getStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getStation_f8d3ef5d49da0d87]));
        }

        jboolean GroundReceiverMeasurement::isTwoWay() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isTwoWay_eee3de00fe971136]);
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
#include "org/orekit/files/sp3/SP3OrbitType.h"
#include "org/orekit/files/sp3/SP3OrbitType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3OrbitType::class$ = NULL;
        jmethodID *SP3OrbitType::mids$ = NULL;
        bool SP3OrbitType::live$ = false;
        SP3OrbitType *SP3OrbitType::BCT = NULL;
        SP3OrbitType *SP3OrbitType::EXT = NULL;
        SP3OrbitType *SP3OrbitType::FIT = NULL;
        SP3OrbitType *SP3OrbitType::HLM = NULL;
        SP3OrbitType *SP3OrbitType::OTHER = NULL;

        jclass SP3OrbitType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3OrbitType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_parseType_fbe02680a633f1e4] = env->getStaticMethodID(cls, "parseType", "(Ljava/lang/String;)Lorg/orekit/files/sp3/SP3OrbitType;");
            mids$[mid_valueOf_fbe02680a633f1e4] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/sp3/SP3OrbitType;");
            mids$[mid_values_cb999f58e81e9da5] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/sp3/SP3OrbitType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BCT = new SP3OrbitType(env->getStaticObjectField(cls, "BCT", "Lorg/orekit/files/sp3/SP3OrbitType;"));
            EXT = new SP3OrbitType(env->getStaticObjectField(cls, "EXT", "Lorg/orekit/files/sp3/SP3OrbitType;"));
            FIT = new SP3OrbitType(env->getStaticObjectField(cls, "FIT", "Lorg/orekit/files/sp3/SP3OrbitType;"));
            HLM = new SP3OrbitType(env->getStaticObjectField(cls, "HLM", "Lorg/orekit/files/sp3/SP3OrbitType;"));
            OTHER = new SP3OrbitType(env->getStaticObjectField(cls, "OTHER", "Lorg/orekit/files/sp3/SP3OrbitType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3OrbitType SP3OrbitType::parseType(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SP3OrbitType(env->callStaticObjectMethod(cls, mids$[mid_parseType_fbe02680a633f1e4], a0.this$));
        }

        SP3OrbitType SP3OrbitType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SP3OrbitType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_fbe02680a633f1e4], a0.this$));
        }

        JArray< SP3OrbitType > SP3OrbitType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< SP3OrbitType >(env->callStaticObjectMethod(cls, mids$[mid_values_cb999f58e81e9da5]));
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
        static PyObject *t_SP3OrbitType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3OrbitType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3OrbitType_of_(t_SP3OrbitType *self, PyObject *args);
        static PyObject *t_SP3OrbitType_parseType(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3OrbitType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_SP3OrbitType_values(PyTypeObject *type);
        static PyObject *t_SP3OrbitType_get__parameters_(t_SP3OrbitType *self, void *data);
        static PyGetSetDef t_SP3OrbitType__fields_[] = {
          DECLARE_GET_FIELD(t_SP3OrbitType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3OrbitType__methods_[] = {
          DECLARE_METHOD(t_SP3OrbitType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3OrbitType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3OrbitType, of_, METH_VARARGS),
          DECLARE_METHOD(t_SP3OrbitType, parseType, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3OrbitType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SP3OrbitType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3OrbitType)[] = {
          { Py_tp_methods, t_SP3OrbitType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SP3OrbitType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3OrbitType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(SP3OrbitType, t_SP3OrbitType, SP3OrbitType);
        PyObject *t_SP3OrbitType::wrap_Object(const SP3OrbitType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3OrbitType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3OrbitType *self = (t_SP3OrbitType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SP3OrbitType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3OrbitType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3OrbitType *self = (t_SP3OrbitType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SP3OrbitType::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3OrbitType), &PY_TYPE_DEF(SP3OrbitType), module, "SP3OrbitType", 0);
        }

        void t_SP3OrbitType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "class_", make_descriptor(SP3OrbitType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "wrapfn_", make_descriptor(t_SP3OrbitType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3OrbitType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "BCT", make_descriptor(t_SP3OrbitType::wrap_Object(*SP3OrbitType::BCT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "EXT", make_descriptor(t_SP3OrbitType::wrap_Object(*SP3OrbitType::EXT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "FIT", make_descriptor(t_SP3OrbitType::wrap_Object(*SP3OrbitType::FIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "HLM", make_descriptor(t_SP3OrbitType::wrap_Object(*SP3OrbitType::HLM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3OrbitType), "OTHER", make_descriptor(t_SP3OrbitType::wrap_Object(*SP3OrbitType::OTHER)));
        }

        static PyObject *t_SP3OrbitType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3OrbitType::initializeClass, 1)))
            return NULL;
          return t_SP3OrbitType::wrap_Object(SP3OrbitType(((t_SP3OrbitType *) arg)->object.this$));
        }
        static PyObject *t_SP3OrbitType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3OrbitType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SP3OrbitType_of_(t_SP3OrbitType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SP3OrbitType_parseType(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          SP3OrbitType result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3OrbitType::parseType(a0));
            return t_SP3OrbitType::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parseType", arg);
          return NULL;
        }

        static PyObject *t_SP3OrbitType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          SP3OrbitType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3OrbitType::valueOf(a0));
            return t_SP3OrbitType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_SP3OrbitType_values(PyTypeObject *type)
        {
          JArray< SP3OrbitType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::sp3::SP3OrbitType::values());
          return JArray<jobject>(result.this$).wrap(t_SP3OrbitType::wrap_jobject);
        }
        static PyObject *t_SP3OrbitType_get__parameters_(t_SP3OrbitType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmData.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistory.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistory.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuver.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmData::class$ = NULL;
              jmethodID *AcmData::mids$ = NULL;
              bool AcmData::live$ = false;

              jclass AcmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_1ed124a1eda7d299] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties;Ljava/util/List;Ljava/util/List;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination;Lorg/orekit/files/ccsds/ndm/odm/UserDefined;)V");
                  mids$[mid_getAttitudeBlocks_d751c1a57012b438] = env->getMethodID(cls, "getAttitudeBlocks", "()Ljava/util/List;");
                  mids$[mid_getAttitudeDeterminationBlock_c13419de6f3bd7e5] = env->getMethodID(cls, "getAttitudeDeterminationBlock", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination;");
                  mids$[mid_getCovarianceBlocks_d751c1a57012b438] = env->getMethodID(cls, "getCovarianceBlocks", "()Ljava/util/List;");
                  mids$[mid_getManeuverBlocks_d751c1a57012b438] = env->getMethodID(cls, "getManeuverBlocks", "()Ljava/util/List;");
                  mids$[mid_getPhysicBlock_af975caed36be997] = env->getMethodID(cls, "getPhysicBlock", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties;");
                  mids$[mid_getUserDefinedBlock_b8dba07746e1b089] = env->getMethodID(cls, "getUserDefinedBlock", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");
                  mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AcmData::AcmData(const ::java::util::List & a0, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties & a1, const ::java::util::List & a2, const ::java::util::List & a3, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination & a4, const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ed124a1eda7d299, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

              ::java::util::List AcmData::getAttitudeBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAttitudeBlocks_d751c1a57012b438]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination AcmData::getAttitudeDeterminationBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination(env->callObjectMethod(this$, mids$[mid_getAttitudeDeterminationBlock_c13419de6f3bd7e5]));
              }

              ::java::util::List AcmData::getCovarianceBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovarianceBlocks_d751c1a57012b438]));
              }

              ::java::util::List AcmData::getManeuverBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuverBlocks_d751c1a57012b438]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties AcmData::getPhysicBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties(env->callObjectMethod(this$, mids$[mid_getPhysicBlock_af975caed36be997]));
              }

              ::org::orekit::files::ccsds::ndm::odm::UserDefined AcmData::getUserDefinedBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedBlock_b8dba07746e1b089]));
              }

              void AcmData::validate(jdouble a0) const
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
          namespace adm {
            namespace acm {
              static PyObject *t_AcmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AcmData_init_(t_AcmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AcmData_getAttitudeBlocks(t_AcmData *self);
              static PyObject *t_AcmData_getAttitudeDeterminationBlock(t_AcmData *self);
              static PyObject *t_AcmData_getCovarianceBlocks(t_AcmData *self);
              static PyObject *t_AcmData_getManeuverBlocks(t_AcmData *self);
              static PyObject *t_AcmData_getPhysicBlock(t_AcmData *self);
              static PyObject *t_AcmData_getUserDefinedBlock(t_AcmData *self);
              static PyObject *t_AcmData_validate(t_AcmData *self, PyObject *arg);
              static PyObject *t_AcmData_get__attitudeBlocks(t_AcmData *self, void *data);
              static PyObject *t_AcmData_get__attitudeDeterminationBlock(t_AcmData *self, void *data);
              static PyObject *t_AcmData_get__covarianceBlocks(t_AcmData *self, void *data);
              static PyObject *t_AcmData_get__maneuverBlocks(t_AcmData *self, void *data);
              static PyObject *t_AcmData_get__physicBlock(t_AcmData *self, void *data);
              static PyObject *t_AcmData_get__userDefinedBlock(t_AcmData *self, void *data);
              static PyGetSetDef t_AcmData__fields_[] = {
                DECLARE_GET_FIELD(t_AcmData, attitudeBlocks),
                DECLARE_GET_FIELD(t_AcmData, attitudeDeterminationBlock),
                DECLARE_GET_FIELD(t_AcmData, covarianceBlocks),
                DECLARE_GET_FIELD(t_AcmData, maneuverBlocks),
                DECLARE_GET_FIELD(t_AcmData, physicBlock),
                DECLARE_GET_FIELD(t_AcmData, userDefinedBlock),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmData__methods_[] = {
                DECLARE_METHOD(t_AcmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmData, getAttitudeBlocks, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, getAttitudeDeterminationBlock, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, getCovarianceBlocks, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, getManeuverBlocks, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, getPhysicBlock, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, getUserDefinedBlock, METH_NOARGS),
                DECLARE_METHOD(t_AcmData, validate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmData)[] = {
                { Py_tp_methods, t_AcmData__methods_ },
                { Py_tp_init, (void *) t_AcmData_init_ },
                { Py_tp_getset, t_AcmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmData)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AcmData, t_AcmData, AcmData);

              void t_AcmData::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmData), &PY_TYPE_DEF(AcmData), module, "AcmData", 0);
              }

              void t_AcmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmData), "class_", make_descriptor(AcmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmData), "wrapfn_", make_descriptor(t_AcmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AcmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmData::initializeClass, 1)))
                  return NULL;
                return t_AcmData::wrap_Object(AcmData(((t_AcmData *) arg)->object.this$));
              }
              static PyObject *t_AcmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AcmData_init_(t_AcmData *self, PyObject *args, PyObject *kwds)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination a4((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::UserDefined a5((jobject) NULL);
                AcmData object((jobject) NULL);

                if (!parseArgs(args, "KkKKkk", ::java::util::List::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties::initializeClass, ::java::util::List::initializeClass, ::java::util::List::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination::initializeClass, ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::java::util::t_List::parameters_, &a4, &a5))
                {
                  INT_CALL(object = AcmData(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AcmData_getAttitudeBlocks(t_AcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeStateHistory));
              }

              static PyObject *t_AcmData_getAttitudeDeterminationBlock(t_AcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeDeterminationBlock());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeDetermination::wrap_Object(result);
              }

              static PyObject *t_AcmData_getCovarianceBlocks(t_AcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeCovarianceHistory));
              }

              static PyObject *t_AcmData_getManeuverBlocks(t_AcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuverBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeManeuver));
              }

              static PyObject *t_AcmData_getPhysicBlock(t_AcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties result((jobject) NULL);
                OBJ_CALL(result = self->object.getPhysicBlock());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudePhysicalProperties::wrap_Object(result);
              }

              static PyObject *t_AcmData_getUserDefinedBlock(t_AcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
                OBJ_CALL(result = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
              }

              static PyObject *t_AcmData_validate(t_AcmData *self, PyObject *arg)
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

              static PyObject *t_AcmData_get__attitudeBlocks(t_AcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AcmData_get__attitudeDeterminationBlock(t_AcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeDeterminationBlock());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeDetermination::wrap_Object(value);
              }

              static PyObject *t_AcmData_get__covarianceBlocks(t_AcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AcmData_get__maneuverBlocks(t_AcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuverBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AcmData_get__physicBlock(t_AcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties value((jobject) NULL);
                OBJ_CALL(value = self->object.getPhysicBlock());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudePhysicalProperties::wrap_Object(value);
              }

              static PyObject *t_AcmData_get__userDefinedBlock(t_AcmData *self, void *data)
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
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ParameterDriversProvider::class$ = NULL;
      jmethodID *ParameterDriversProvider::mids$ = NULL;
      bool ParameterDriversProvider::live$ = false;

      jclass ParameterDriversProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ParameterDriversProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getNbParametersDriversValue_d6ab429752e7c267] = env->getMethodID(cls, "getNbParametersDriversValue", "()I");
          mids$[mid_getParameterDriver_a75a8a462ead0b8a] = env->getMethodID(cls, "getParameterDriver", "(Ljava/lang/String;)Lorg/orekit/utils/ParameterDriver;");
          mids$[mid_getParameters_be783177b060994b] = env->getMethodID(cls, "getParameters", "()[D");
          mids$[mid_getParameters_9b63d19c31941c0f] = env->getMethodID(cls, "getParameters", "(Lorg/orekit/time/AbsoluteDate;)[D");
          mids$[mid_getParameters_84f929c42eeec397] = env->getMethodID(cls, "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getParameters_f06d1f734842fcea] = env->getMethodID(cls, "getParameters", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getParametersAllValues_be783177b060994b] = env->getMethodID(cls, "getParametersAllValues", "()[D");
          mids$[mid_getParametersAllValues_84f929c42eeec397] = env->getMethodID(cls, "getParametersAllValues", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
          mids$[mid_isSupported_df4c65b2aede5c41] = env->getMethodID(cls, "isSupported", "(Ljava/lang/String;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint ParameterDriversProvider::getNbParametersDriversValue() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbParametersDriversValue_d6ab429752e7c267]);
      }

      ::org::orekit::utils::ParameterDriver ParameterDriversProvider::getParameterDriver(const ::java::lang::String & a0) const
      {
        return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getParameterDriver_a75a8a462ead0b8a], a0.this$));
      }

      JArray< jdouble > ParameterDriversProvider::getParameters() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParameters_be783177b060994b]));
      }

      JArray< jdouble > ParameterDriversProvider::getParameters(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParameters_9b63d19c31941c0f], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > ParameterDriversProvider::getParameters(const ::org::hipparchus::Field & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getParameters_84f929c42eeec397], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > ParameterDriversProvider::getParameters(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getParameters_f06d1f734842fcea], a0.this$, a1.this$));
      }

      JArray< jdouble > ParameterDriversProvider::getParametersAllValues() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParametersAllValues_be783177b060994b]));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > ParameterDriversProvider::getParametersAllValues(const ::org::hipparchus::Field & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getParametersAllValues_84f929c42eeec397], a0.this$));
      }

      ::java::util::List ParameterDriversProvider::getParametersDrivers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
      }

      jboolean ParameterDriversProvider::isSupported(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupported_df4c65b2aede5c41], a0.this$);
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
      static PyObject *t_ParameterDriversProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriversProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriversProvider_getNbParametersDriversValue(t_ParameterDriversProvider *self);
      static PyObject *t_ParameterDriversProvider_getParameterDriver(t_ParameterDriversProvider *self, PyObject *arg);
      static PyObject *t_ParameterDriversProvider_getParameters(t_ParameterDriversProvider *self, PyObject *args);
      static PyObject *t_ParameterDriversProvider_getParametersAllValues(t_ParameterDriversProvider *self, PyObject *args);
      static PyObject *t_ParameterDriversProvider_getParametersDrivers(t_ParameterDriversProvider *self);
      static PyObject *t_ParameterDriversProvider_isSupported(t_ParameterDriversProvider *self, PyObject *arg);
      static PyObject *t_ParameterDriversProvider_get__nbParametersDriversValue(t_ParameterDriversProvider *self, void *data);
      static PyObject *t_ParameterDriversProvider_get__parameters(t_ParameterDriversProvider *self, void *data);
      static PyObject *t_ParameterDriversProvider_get__parametersAllValues(t_ParameterDriversProvider *self, void *data);
      static PyObject *t_ParameterDriversProvider_get__parametersDrivers(t_ParameterDriversProvider *self, void *data);
      static PyGetSetDef t_ParameterDriversProvider__fields_[] = {
        DECLARE_GET_FIELD(t_ParameterDriversProvider, nbParametersDriversValue),
        DECLARE_GET_FIELD(t_ParameterDriversProvider, parameters),
        DECLARE_GET_FIELD(t_ParameterDriversProvider, parametersAllValues),
        DECLARE_GET_FIELD(t_ParameterDriversProvider, parametersDrivers),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ParameterDriversProvider__methods_[] = {
        DECLARE_METHOD(t_ParameterDriversProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversProvider, getNbParametersDriversValue, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriversProvider, getParameterDriver, METH_O),
        DECLARE_METHOD(t_ParameterDriversProvider, getParameters, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriversProvider, getParametersAllValues, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriversProvider, getParametersDrivers, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriversProvider, isSupported, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterDriversProvider)[] = {
        { Py_tp_methods, t_ParameterDriversProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ParameterDriversProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterDriversProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParameterDriversProvider, t_ParameterDriversProvider, ParameterDriversProvider);

      void t_ParameterDriversProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterDriversProvider), &PY_TYPE_DEF(ParameterDriversProvider), module, "ParameterDriversProvider", 0);
      }

      void t_ParameterDriversProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversProvider), "class_", make_descriptor(ParameterDriversProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversProvider), "wrapfn_", make_descriptor(t_ParameterDriversProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterDriversProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterDriversProvider::initializeClass, 1)))
          return NULL;
        return t_ParameterDriversProvider::wrap_Object(ParameterDriversProvider(((t_ParameterDriversProvider *) arg)->object.this$));
      }
      static PyObject *t_ParameterDriversProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterDriversProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParameterDriversProvider_getNbParametersDriversValue(t_ParameterDriversProvider *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbParametersDriversValue());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ParameterDriversProvider_getParameterDriver(t_ParameterDriversProvider *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::utils::ParameterDriver result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getParameterDriver(a0));
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getParameterDriver", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriversProvider_getParameters(t_ParameterDriversProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getParameters());
            return result.wrap();
          }
          break;
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getParameters(a0));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getParameters(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getParameters(a0, a1));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getParameters", args);
        return NULL;
      }

      static PyObject *t_ParameterDriversProvider_getParametersAllValues(t_ParameterDriversProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersAllValues());
            return result.wrap();
          }
          break;
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getParametersAllValues(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getParametersAllValues", args);
        return NULL;
      }

      static PyObject *t_ParameterDriversProvider_getParametersDrivers(t_ParameterDriversProvider *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getParametersDrivers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
      }

      static PyObject *t_ParameterDriversProvider_isSupported(t_ParameterDriversProvider *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.isSupported(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isSupported", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriversProvider_get__nbParametersDriversValue(t_ParameterDriversProvider *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbParametersDriversValue());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ParameterDriversProvider_get__parameters(t_ParameterDriversProvider *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParameters());
        return value.wrap();
      }

      static PyObject *t_ParameterDriversProvider_get__parametersAllValues(t_ParameterDriversProvider *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParametersAllValues());
        return value.wrap();
      }

      static PyObject *t_ParameterDriversProvider_get__parametersDrivers(t_ParameterDriversProvider *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getParametersDrivers());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/BilinearInterpolator.h"
#include "org/hipparchus/analysis/interpolation/BilinearInterpolatingFunction.h"
#include "org/hipparchus/analysis/interpolation/BivariateGridInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *BilinearInterpolator::class$ = NULL;
        jmethodID *BilinearInterpolator::mids$ = NULL;
        bool BilinearInterpolator::live$ = false;

        jclass BilinearInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/BilinearInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_3f267d006b740180] = env->getMethodID(cls, "interpolate", "([D[D[[D)Lorg/hipparchus/analysis/interpolation/BilinearInterpolatingFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BilinearInterpolator::BilinearInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction BilinearInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          return ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_interpolate_3f267d006b740180], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_BilinearInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BilinearInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BilinearInterpolator_init_(t_BilinearInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BilinearInterpolator_interpolate(t_BilinearInterpolator *self, PyObject *args);

        static PyMethodDef t_BilinearInterpolator__methods_[] = {
          DECLARE_METHOD(t_BilinearInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BilinearInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BilinearInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BilinearInterpolator)[] = {
          { Py_tp_methods, t_BilinearInterpolator__methods_ },
          { Py_tp_init, (void *) t_BilinearInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BilinearInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BilinearInterpolator, t_BilinearInterpolator, BilinearInterpolator);

        void t_BilinearInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(BilinearInterpolator), &PY_TYPE_DEF(BilinearInterpolator), module, "BilinearInterpolator", 0);
        }

        void t_BilinearInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolator), "class_", make_descriptor(BilinearInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolator), "wrapfn_", make_descriptor(t_BilinearInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BilinearInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BilinearInterpolator::initializeClass, 1)))
            return NULL;
          return t_BilinearInterpolator::wrap_Object(BilinearInterpolator(((t_BilinearInterpolator *) arg)->object.this$));
        }
        static PyObject *t_BilinearInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BilinearInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BilinearInterpolator_init_(t_BilinearInterpolator *self, PyObject *args, PyObject *kwds)
        {
          BilinearInterpolator object((jobject) NULL);

          INT_CALL(object = BilinearInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_BilinearInterpolator_interpolate(t_BilinearInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2));
            return ::org::hipparchus::analysis::interpolation::t_BilinearInterpolatingFunction::wrap_Object(result);
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
#include "org/orekit/gnss/metric/parser/DataField.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *DataField::class$ = NULL;
          jmethodID *DataField::mids$ = NULL;
          bool DataField::live$ = false;

          jclass DataField::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/DataField");

              mids$ = new jmethodID[max_mid];
              mids$[mid_booleanValue_03afc74a55086f49] = env->getMethodID(cls, "booleanValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Z");
              mids$[mid_doubleValue_1f1c729fdde0658b] = env->getMethodID(cls, "doubleValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)D");
              mids$[mid_intValue_a4fe6c9d0e440ab3] = env->getMethodID(cls, "intValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)I");
              mids$[mid_stringValue_cf17c27db4239bea] = env->getMethodID(cls, "stringValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;I)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean DataField::booleanValue(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_booleanValue_03afc74a55086f49], a0.this$);
          }

          jdouble DataField::doubleValue(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_doubleValue_1f1c729fdde0658b], a0.this$);
          }

          jint DataField::intValue(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0) const
          {
            return env->callIntMethod(this$, mids$[mid_intValue_a4fe6c9d0e440ab3], a0.this$);
          }

          ::java::lang::String DataField::stringValue(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0, jint a1) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_stringValue_cf17c27db4239bea], a0.this$, a1));
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
          static PyObject *t_DataField_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataField_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataField_booleanValue(t_DataField *self, PyObject *arg);
          static PyObject *t_DataField_doubleValue(t_DataField *self, PyObject *arg);
          static PyObject *t_DataField_intValue(t_DataField *self, PyObject *arg);
          static PyObject *t_DataField_stringValue(t_DataField *self, PyObject *args);

          static PyMethodDef t_DataField__methods_[] = {
            DECLARE_METHOD(t_DataField, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataField, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataField, booleanValue, METH_O),
            DECLARE_METHOD(t_DataField, doubleValue, METH_O),
            DECLARE_METHOD(t_DataField, intValue, METH_O),
            DECLARE_METHOD(t_DataField, stringValue, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DataField)[] = {
            { Py_tp_methods, t_DataField__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DataField)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DataField, t_DataField, DataField);

          void t_DataField::install(PyObject *module)
          {
            installType(&PY_TYPE(DataField), &PY_TYPE_DEF(DataField), module, "DataField", 0);
          }

          void t_DataField::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataField), "class_", make_descriptor(DataField::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataField), "wrapfn_", make_descriptor(t_DataField::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataField), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DataField_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DataField::initializeClass, 1)))
              return NULL;
            return t_DataField::wrap_Object(DataField(((t_DataField *) arg)->object.this$));
          }
          static PyObject *t_DataField_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DataField::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DataField_booleanValue(t_DataField *self, PyObject *arg)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.booleanValue(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "booleanValue", arg);
            return NULL;
          }

          static PyObject *t_DataField_doubleValue(t_DataField *self, PyObject *arg)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.doubleValue(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "doubleValue", arg);
            return NULL;
          }

          static PyObject *t_DataField_intValue(t_DataField *self, PyObject *arg)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            jint result;

            if (!parseArg(arg, "k", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.intValue(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "intValue", arg);
            return NULL;
          }

          static PyObject *t_DataField_stringValue(t_DataField *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            jint a1;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.stringValue(a0, a1));
              return j2p(result);
            }

            PyErr_SetArgsError((PyObject *) self, "stringValue", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/multivariate/MultivariateNormalDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {

        ::java::lang::Class *MultivariateNormalDistribution::class$ = NULL;
        jmethodID *MultivariateNormalDistribution::mids$ = NULL;
        bool MultivariateNormalDistribution::live$ = false;

        jclass MultivariateNormalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/multivariate/MultivariateNormalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ef9c3ec1d213ea68] = env->getMethodID(cls, "<init>", "([D[[D)V");
            mids$[mid_init$_94f1a35470fa534e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;[D[[D)V");
            mids$[mid_init$_bc5560afa03df4fc] = env->getMethodID(cls, "<init>", "([D[[DD)V");
            mids$[mid_init$_ccfb2756870425b3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;[D[[DD)V");
            mids$[mid_density_a40ce4fdf6559ac0] = env->getMethodID(cls, "density", "([D)D");
            mids$[mid_getCovariances_b2eebabce70526d8] = env->getMethodID(cls, "getCovariances", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getMeans_be783177b060994b] = env->getMethodID(cls, "getMeans", "()[D");
            mids$[mid_getSingularMatrixCheckTolerance_9981f74b2d109da6] = env->getMethodID(cls, "getSingularMatrixCheckTolerance", "()D");
            mids$[mid_getStandardDeviations_be783177b060994b] = env->getMethodID(cls, "getStandardDeviations", "()[D");
            mids$[mid_sample_be783177b060994b] = env->getMethodID(cls, "sample", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultivariateNormalDistribution::MultivariateNormalDistribution(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ef9c3ec1d213ea68, a0.this$, a1.this$)) {}

        MultivariateNormalDistribution::MultivariateNormalDistribution(const ::org::hipparchus::random::RandomGenerator & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_94f1a35470fa534e, a0.this$, a1.this$, a2.this$)) {}

        MultivariateNormalDistribution::MultivariateNormalDistribution(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1, jdouble a2) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_bc5560afa03df4fc, a0.this$, a1.this$, a2)) {}

        MultivariateNormalDistribution::MultivariateNormalDistribution(const ::org::hipparchus::random::RandomGenerator & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2, jdouble a3) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ccfb2756870425b3, a0.this$, a1.this$, a2.this$, a3)) {}

        jdouble MultivariateNormalDistribution::density(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_a40ce4fdf6559ac0], a0.this$);
        }

        ::org::hipparchus::linear::RealMatrix MultivariateNormalDistribution::getCovariances() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariances_b2eebabce70526d8]));
        }

        JArray< jdouble > MultivariateNormalDistribution::getMeans() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeans_be783177b060994b]));
        }

        jdouble MultivariateNormalDistribution::getSingularMatrixCheckTolerance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSingularMatrixCheckTolerance_9981f74b2d109da6]);
        }

        JArray< jdouble > MultivariateNormalDistribution::getStandardDeviations() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getStandardDeviations_be783177b060994b]));
        }

        JArray< jdouble > MultivariateNormalDistribution::sample() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_sample_be783177b060994b]));
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
      namespace multivariate {
        static PyObject *t_MultivariateNormalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateNormalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MultivariateNormalDistribution_init_(t_MultivariateNormalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultivariateNormalDistribution_density(t_MultivariateNormalDistribution *self, PyObject *args);
        static PyObject *t_MultivariateNormalDistribution_getCovariances(t_MultivariateNormalDistribution *self);
        static PyObject *t_MultivariateNormalDistribution_getMeans(t_MultivariateNormalDistribution *self);
        static PyObject *t_MultivariateNormalDistribution_getSingularMatrixCheckTolerance(t_MultivariateNormalDistribution *self);
        static PyObject *t_MultivariateNormalDistribution_getStandardDeviations(t_MultivariateNormalDistribution *self);
        static PyObject *t_MultivariateNormalDistribution_sample(t_MultivariateNormalDistribution *self, PyObject *args);
        static PyObject *t_MultivariateNormalDistribution_get__covariances(t_MultivariateNormalDistribution *self, void *data);
        static PyObject *t_MultivariateNormalDistribution_get__means(t_MultivariateNormalDistribution *self, void *data);
        static PyObject *t_MultivariateNormalDistribution_get__singularMatrixCheckTolerance(t_MultivariateNormalDistribution *self, void *data);
        static PyObject *t_MultivariateNormalDistribution_get__standardDeviations(t_MultivariateNormalDistribution *self, void *data);
        static PyGetSetDef t_MultivariateNormalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_MultivariateNormalDistribution, covariances),
          DECLARE_GET_FIELD(t_MultivariateNormalDistribution, means),
          DECLARE_GET_FIELD(t_MultivariateNormalDistribution, singularMatrixCheckTolerance),
          DECLARE_GET_FIELD(t_MultivariateNormalDistribution, standardDeviations),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MultivariateNormalDistribution__methods_[] = {
          DECLARE_METHOD(t_MultivariateNormalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, getCovariances, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, getMeans, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, getSingularMatrixCheckTolerance, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, getStandardDeviations, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, sample, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultivariateNormalDistribution)[] = {
          { Py_tp_methods, t_MultivariateNormalDistribution__methods_ },
          { Py_tp_init, (void *) t_MultivariateNormalDistribution_init_ },
          { Py_tp_getset, t_MultivariateNormalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultivariateNormalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution),
          NULL
        };

        DEFINE_TYPE(MultivariateNormalDistribution, t_MultivariateNormalDistribution, MultivariateNormalDistribution);

        void t_MultivariateNormalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(MultivariateNormalDistribution), &PY_TYPE_DEF(MultivariateNormalDistribution), module, "MultivariateNormalDistribution", 0);
        }

        void t_MultivariateNormalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateNormalDistribution), "class_", make_descriptor(MultivariateNormalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateNormalDistribution), "wrapfn_", make_descriptor(t_MultivariateNormalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateNormalDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultivariateNormalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultivariateNormalDistribution::initializeClass, 1)))
            return NULL;
          return t_MultivariateNormalDistribution::wrap_Object(MultivariateNormalDistribution(((t_MultivariateNormalDistribution *) arg)->object.this$));
        }
        static PyObject *t_MultivariateNormalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultivariateNormalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MultivariateNormalDistribution_init_(t_MultivariateNormalDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);
              MultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "[D[[D", &a0, &a1))
              {
                INT_CALL(object = MultivariateNormalDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< JArray< jdouble > > a2((jobject) NULL);
              MultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "k[D[[D", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = MultivariateNormalDistribution(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);
              jdouble a2;
              MultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "[D[[DD", &a0, &a1, &a2))
              {
                INT_CALL(object = MultivariateNormalDistribution(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< JArray< jdouble > > a2((jobject) NULL);
              jdouble a3;
              MultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "k[D[[DD", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = MultivariateNormalDistribution(a0, a1, a2, a3));
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

        static PyObject *t_MultivariateNormalDistribution_density(t_MultivariateNormalDistribution *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(MultivariateNormalDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_MultivariateNormalDistribution_getCovariances(t_MultivariateNormalDistribution *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariances());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_MultivariateNormalDistribution_getMeans(t_MultivariateNormalDistribution *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeans());
          return result.wrap();
        }

        static PyObject *t_MultivariateNormalDistribution_getSingularMatrixCheckTolerance(t_MultivariateNormalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSingularMatrixCheckTolerance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_MultivariateNormalDistribution_getStandardDeviations(t_MultivariateNormalDistribution *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getStandardDeviations());
          return result.wrap();
        }

        static PyObject *t_MultivariateNormalDistribution_sample(t_MultivariateNormalDistribution *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sample());
            return result.wrap();
          }

          return callSuper(PY_TYPE(MultivariateNormalDistribution), (PyObject *) self, "sample", args, 2);
        }

        static PyObject *t_MultivariateNormalDistribution_get__covariances(t_MultivariateNormalDistribution *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariances());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_MultivariateNormalDistribution_get__means(t_MultivariateNormalDistribution *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeans());
          return value.wrap();
        }

        static PyObject *t_MultivariateNormalDistribution_get__singularMatrixCheckTolerance(t_MultivariateNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSingularMatrixCheckTolerance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_MultivariateNormalDistribution_get__standardDeviations(t_MultivariateNormalDistribution *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getStandardDeviations());
          return value.wrap();
        }
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
          mids$[mid_logBeta_82f92590f4247da1] = env->getStaticMethodID(cls, "logBeta", "(DD)D");
          mids$[mid_regularizedBeta_db06d8c3fc3d9670] = env->getStaticMethodID(cls, "regularizedBeta", "(DDD)D");
          mids$[mid_regularizedBeta_45d926aea7231320] = env->getStaticMethodID(cls, "regularizedBeta", "(DDDD)D");
          mids$[mid_regularizedBeta_4ac438d787b160b9] = env->getStaticMethodID(cls, "regularizedBeta", "(DDDI)D");
          mids$[mid_regularizedBeta_4ce565612833d2a2] = env->getStaticMethodID(cls, "regularizedBeta", "(DDDDI)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Beta::logBeta(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_logBeta_82f92590f4247da1], a0, a1);
      }

      jdouble Beta::regularizedBeta(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedBeta_db06d8c3fc3d9670], a0, a1, a2);
      }

      jdouble Beta::regularizedBeta(jdouble a0, jdouble a1, jdouble a2, jdouble a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedBeta_45d926aea7231320], a0, a1, a2, a3);
      }

      jdouble Beta::regularizedBeta(jdouble a0, jdouble a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedBeta_4ac438d787b160b9], a0, a1, a2, a3);
      }

      jdouble Beta::regularizedBeta(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedBeta_4ce565612833d2a2], a0, a1, a2, a3, a4);
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
#include "org/orekit/models/earth/ionosphere/SsrVtecIonosphericModel.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *SsrVtecIonosphericModel::class$ = NULL;
          jmethodID *SsrVtecIonosphericModel::mids$ = NULL;
          bool SsrVtecIonosphericModel::live$ = false;

          jclass SsrVtecIonosphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/SsrVtecIonosphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_459c7bf428eba8f4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/metric/messages/ssr/subtype/SsrIm201;)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_d2f5e0e8b7e00e80] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_c84aeff9124fe654] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SsrVtecIonosphericModel::SsrVtecIonosphericModel(const ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201 & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_459c7bf428eba8f4, a0.this$)) {}

          ::java::util::List SsrVtecIonosphericModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          jdouble SsrVtecIonosphericModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_d2f5e0e8b7e00e80], a0.this$, a1.this$, a2, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement SsrVtecIonosphericModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_c84aeff9124fe654], a0.this$, a1.this$, a2, a3.this$));
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
          static PyObject *t_SsrVtecIonosphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SsrVtecIonosphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SsrVtecIonosphericModel_init_(t_SsrVtecIonosphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SsrVtecIonosphericModel_getParametersDrivers(t_SsrVtecIonosphericModel *self);
          static PyObject *t_SsrVtecIonosphericModel_pathDelay(t_SsrVtecIonosphericModel *self, PyObject *args);
          static PyObject *t_SsrVtecIonosphericModel_get__parametersDrivers(t_SsrVtecIonosphericModel *self, void *data);
          static PyGetSetDef t_SsrVtecIonosphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_SsrVtecIonosphericModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SsrVtecIonosphericModel__methods_[] = {
            DECLARE_METHOD(t_SsrVtecIonosphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SsrVtecIonosphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SsrVtecIonosphericModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_SsrVtecIonosphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SsrVtecIonosphericModel)[] = {
            { Py_tp_methods, t_SsrVtecIonosphericModel__methods_ },
            { Py_tp_init, (void *) t_SsrVtecIonosphericModel_init_ },
            { Py_tp_getset, t_SsrVtecIonosphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SsrVtecIonosphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SsrVtecIonosphericModel, t_SsrVtecIonosphericModel, SsrVtecIonosphericModel);

          void t_SsrVtecIonosphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(SsrVtecIonosphericModel), &PY_TYPE_DEF(SsrVtecIonosphericModel), module, "SsrVtecIonosphericModel", 0);
          }

          void t_SsrVtecIonosphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SsrVtecIonosphericModel), "class_", make_descriptor(SsrVtecIonosphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SsrVtecIonosphericModel), "wrapfn_", make_descriptor(t_SsrVtecIonosphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SsrVtecIonosphericModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SsrVtecIonosphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SsrVtecIonosphericModel::initializeClass, 1)))
              return NULL;
            return t_SsrVtecIonosphericModel::wrap_Object(SsrVtecIonosphericModel(((t_SsrVtecIonosphericModel *) arg)->object.this$));
          }
          static PyObject *t_SsrVtecIonosphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SsrVtecIonosphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SsrVtecIonosphericModel_init_(t_SsrVtecIonosphericModel *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201 a0((jobject) NULL);
            PyTypeObject **p0;
            SsrVtecIonosphericModel object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201::initializeClass, &a0, &p0, ::org::orekit::gnss::metric::messages::ssr::subtype::t_SsrIm201::parameters_))
            {
              INT_CALL(object = SsrVtecIonosphericModel(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SsrVtecIonosphericModel_getParametersDrivers(t_SsrVtecIonosphericModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_SsrVtecIonosphericModel_pathDelay(t_SsrVtecIonosphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KkD[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< jdouble > a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkD[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_SsrVtecIonosphericModel_get__parametersDrivers(t_SsrVtecIonosphericModel *self, void *data)
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
#include "org/hipparchus/util/Pair.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Pair::class$ = NULL;
      jmethodID *Pair::mids$ = NULL;
      bool Pair::live$ = false;

      jclass Pair::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Pair");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b1372600709408bf] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V");
          mids$[mid_create_1528df1106e92169] = env->getStaticMethodID(cls, "create", "(Ljava/lang/Object;Ljava/lang/Object;)Lorg/hipparchus/util/Pair;");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getFirst_704a5bee58538972] = env->getMethodID(cls, "getFirst", "()Ljava/lang/Object;");
          mids$[mid_getKey_704a5bee58538972] = env->getMethodID(cls, "getKey", "()Ljava/lang/Object;");
          mids$[mid_getSecond_704a5bee58538972] = env->getMethodID(cls, "getSecond", "()Ljava/lang/Object;");
          mids$[mid_getValue_704a5bee58538972] = env->getMethodID(cls, "getValue", "()Ljava/lang/Object;");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Pair::Pair(const ::java::lang::Object & a0, const ::java::lang::Object & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b1372600709408bf, a0.this$, a1.this$)) {}

      Pair Pair::create(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Pair(env->callStaticObjectMethod(cls, mids$[mid_create_1528df1106e92169], a0.this$, a1.this$));
      }

      jboolean Pair::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      ::java::lang::Object Pair::getFirst() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getFirst_704a5bee58538972]));
      }

      ::java::lang::Object Pair::getKey() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getKey_704a5bee58538972]));
      }

      ::java::lang::Object Pair::getSecond() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getSecond_704a5bee58538972]));
      }

      ::java::lang::Object Pair::getValue() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getValue_704a5bee58538972]));
      }

      jint Pair::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      ::java::lang::String Pair::toString() const
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
  namespace hipparchus {
    namespace util {
      static PyObject *t_Pair_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Pair_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Pair_of_(t_Pair *self, PyObject *args);
      static int t_Pair_init_(t_Pair *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Pair_create(PyTypeObject *type, PyObject *args);
      static PyObject *t_Pair_equals(t_Pair *self, PyObject *args);
      static PyObject *t_Pair_getFirst(t_Pair *self);
      static PyObject *t_Pair_getKey(t_Pair *self);
      static PyObject *t_Pair_getSecond(t_Pair *self);
      static PyObject *t_Pair_getValue(t_Pair *self);
      static PyObject *t_Pair_hashCode(t_Pair *self, PyObject *args);
      static PyObject *t_Pair_toString(t_Pair *self, PyObject *args);
      static PyObject *t_Pair_get__first(t_Pair *self, void *data);
      static PyObject *t_Pair_get__key(t_Pair *self, void *data);
      static PyObject *t_Pair_get__second(t_Pair *self, void *data);
      static PyObject *t_Pair_get__value(t_Pair *self, void *data);
      static PyObject *t_Pair_get__parameters_(t_Pair *self, void *data);
      static PyGetSetDef t_Pair__fields_[] = {
        DECLARE_GET_FIELD(t_Pair, first),
        DECLARE_GET_FIELD(t_Pair, key),
        DECLARE_GET_FIELD(t_Pair, second),
        DECLARE_GET_FIELD(t_Pair, value),
        DECLARE_GET_FIELD(t_Pair, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Pair__methods_[] = {
        DECLARE_METHOD(t_Pair, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Pair, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Pair, of_, METH_VARARGS),
        DECLARE_METHOD(t_Pair, create, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Pair, equals, METH_VARARGS),
        DECLARE_METHOD(t_Pair, getFirst, METH_NOARGS),
        DECLARE_METHOD(t_Pair, getKey, METH_NOARGS),
        DECLARE_METHOD(t_Pair, getSecond, METH_NOARGS),
        DECLARE_METHOD(t_Pair, getValue, METH_NOARGS),
        DECLARE_METHOD(t_Pair, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Pair, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Pair)[] = {
        { Py_tp_methods, t_Pair__methods_ },
        { Py_tp_init, (void *) t_Pair_init_ },
        { Py_tp_getset, t_Pair__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Pair)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Pair, t_Pair, Pair);
      PyObject *t_Pair::wrap_Object(const Pair& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_Pair::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Pair *self = (t_Pair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_Pair::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_Pair::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Pair *self = (t_Pair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_Pair::install(PyObject *module)
      {
        installType(&PY_TYPE(Pair), &PY_TYPE_DEF(Pair), module, "Pair", 0);
      }

      void t_Pair::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Pair), "class_", make_descriptor(Pair::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Pair), "wrapfn_", make_descriptor(t_Pair::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Pair), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Pair_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Pair::initializeClass, 1)))
          return NULL;
        return t_Pair::wrap_Object(Pair(((t_Pair *) arg)->object.this$));
      }
      static PyObject *t_Pair_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Pair::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Pair_of_(t_Pair *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_Pair_init_(t_Pair *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::java::lang::Object a1((jobject) NULL);
        Pair object((jobject) NULL);

        if (!parseArgs(args, "oo", &a0, &a1))
        {
          INT_CALL(object = Pair(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Pair_create(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::java::lang::Object a1((jobject) NULL);
        Pair result((jobject) NULL);

        if (!parseArgs(args, "oo", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::Pair::create(a0, a1));
          return t_Pair::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "create", args);
        return NULL;
      }

      static PyObject *t_Pair_equals(t_Pair *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Pair), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Pair_getFirst(t_Pair *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirst());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_Pair_getKey(t_Pair *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getKey());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_Pair_getSecond(t_Pair *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getSecond());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_Pair_getValue(t_Pair *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getValue());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_Pair_hashCode(t_Pair *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Pair), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Pair_toString(t_Pair *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Pair), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_Pair_get__parameters_(t_Pair *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Pair_get__first(t_Pair *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirst());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_Pair_get__key(t_Pair *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getKey());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_Pair_get__second(t_Pair *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getSecond());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_Pair_get__value(t_Pair *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getValue());
        return ::java::lang::t_Object::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParameters.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *SpacecraftParameters::class$ = NULL;
            jmethodID *SpacecraftParameters::mids$ = NULL;
            bool SpacecraftParameters::live$ = false;

            jclass SpacecraftParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/SpacecraftParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getDragArea_9981f74b2d109da6] = env->getMethodID(cls, "getDragArea", "()D");
                mids$[mid_getDragCoeff_9981f74b2d109da6] = env->getMethodID(cls, "getDragCoeff", "()D");
                mids$[mid_getMass_9981f74b2d109da6] = env->getMethodID(cls, "getMass", "()D");
                mids$[mid_getSolarRadArea_9981f74b2d109da6] = env->getMethodID(cls, "getSolarRadArea", "()D");
                mids$[mid_getSolarRadCoeff_9981f74b2d109da6] = env->getMethodID(cls, "getSolarRadCoeff", "()D");
                mids$[mid_setDragArea_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDragArea", "(D)V");
                mids$[mid_setDragCoeff_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDragCoeff", "(D)V");
                mids$[mid_setMass_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMass", "(D)V");
                mids$[mid_setSolarRadArea_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSolarRadArea", "(D)V");
                mids$[mid_setSolarRadCoeff_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSolarRadCoeff", "(D)V");
                mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SpacecraftParameters::SpacecraftParameters() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            jdouble SpacecraftParameters::getDragArea() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDragArea_9981f74b2d109da6]);
            }

            jdouble SpacecraftParameters::getDragCoeff() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDragCoeff_9981f74b2d109da6]);
            }

            jdouble SpacecraftParameters::getMass() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMass_9981f74b2d109da6]);
            }

            jdouble SpacecraftParameters::getSolarRadArea() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSolarRadArea_9981f74b2d109da6]);
            }

            jdouble SpacecraftParameters::getSolarRadCoeff() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSolarRadCoeff_9981f74b2d109da6]);
            }

            void SpacecraftParameters::setDragArea(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDragArea_1ad26e8c8c0cd65b], a0);
            }

            void SpacecraftParameters::setDragCoeff(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDragCoeff_1ad26e8c8c0cd65b], a0);
            }

            void SpacecraftParameters::setMass(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMass_1ad26e8c8c0cd65b], a0);
            }

            void SpacecraftParameters::setSolarRadArea(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSolarRadArea_1ad26e8c8c0cd65b], a0);
            }

            void SpacecraftParameters::setSolarRadCoeff(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSolarRadCoeff_1ad26e8c8c0cd65b], a0);
            }

            void SpacecraftParameters::validate(jdouble a0) const
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
          namespace odm {
            static PyObject *t_SpacecraftParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SpacecraftParameters_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SpacecraftParameters_init_(t_SpacecraftParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SpacecraftParameters_getDragArea(t_SpacecraftParameters *self);
            static PyObject *t_SpacecraftParameters_getDragCoeff(t_SpacecraftParameters *self);
            static PyObject *t_SpacecraftParameters_getMass(t_SpacecraftParameters *self);
            static PyObject *t_SpacecraftParameters_getSolarRadArea(t_SpacecraftParameters *self);
            static PyObject *t_SpacecraftParameters_getSolarRadCoeff(t_SpacecraftParameters *self);
            static PyObject *t_SpacecraftParameters_setDragArea(t_SpacecraftParameters *self, PyObject *arg);
            static PyObject *t_SpacecraftParameters_setDragCoeff(t_SpacecraftParameters *self, PyObject *arg);
            static PyObject *t_SpacecraftParameters_setMass(t_SpacecraftParameters *self, PyObject *arg);
            static PyObject *t_SpacecraftParameters_setSolarRadArea(t_SpacecraftParameters *self, PyObject *arg);
            static PyObject *t_SpacecraftParameters_setSolarRadCoeff(t_SpacecraftParameters *self, PyObject *arg);
            static PyObject *t_SpacecraftParameters_validate(t_SpacecraftParameters *self, PyObject *args);
            static PyObject *t_SpacecraftParameters_get__dragArea(t_SpacecraftParameters *self, void *data);
            static int t_SpacecraftParameters_set__dragArea(t_SpacecraftParameters *self, PyObject *arg, void *data);
            static PyObject *t_SpacecraftParameters_get__dragCoeff(t_SpacecraftParameters *self, void *data);
            static int t_SpacecraftParameters_set__dragCoeff(t_SpacecraftParameters *self, PyObject *arg, void *data);
            static PyObject *t_SpacecraftParameters_get__mass(t_SpacecraftParameters *self, void *data);
            static int t_SpacecraftParameters_set__mass(t_SpacecraftParameters *self, PyObject *arg, void *data);
            static PyObject *t_SpacecraftParameters_get__solarRadArea(t_SpacecraftParameters *self, void *data);
            static int t_SpacecraftParameters_set__solarRadArea(t_SpacecraftParameters *self, PyObject *arg, void *data);
            static PyObject *t_SpacecraftParameters_get__solarRadCoeff(t_SpacecraftParameters *self, void *data);
            static int t_SpacecraftParameters_set__solarRadCoeff(t_SpacecraftParameters *self, PyObject *arg, void *data);
            static PyGetSetDef t_SpacecraftParameters__fields_[] = {
              DECLARE_GETSET_FIELD(t_SpacecraftParameters, dragArea),
              DECLARE_GETSET_FIELD(t_SpacecraftParameters, dragCoeff),
              DECLARE_GETSET_FIELD(t_SpacecraftParameters, mass),
              DECLARE_GETSET_FIELD(t_SpacecraftParameters, solarRadArea),
              DECLARE_GETSET_FIELD(t_SpacecraftParameters, solarRadCoeff),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SpacecraftParameters__methods_[] = {
              DECLARE_METHOD(t_SpacecraftParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParameters, getDragArea, METH_NOARGS),
              DECLARE_METHOD(t_SpacecraftParameters, getDragCoeff, METH_NOARGS),
              DECLARE_METHOD(t_SpacecraftParameters, getMass, METH_NOARGS),
              DECLARE_METHOD(t_SpacecraftParameters, getSolarRadArea, METH_NOARGS),
              DECLARE_METHOD(t_SpacecraftParameters, getSolarRadCoeff, METH_NOARGS),
              DECLARE_METHOD(t_SpacecraftParameters, setDragArea, METH_O),
              DECLARE_METHOD(t_SpacecraftParameters, setDragCoeff, METH_O),
              DECLARE_METHOD(t_SpacecraftParameters, setMass, METH_O),
              DECLARE_METHOD(t_SpacecraftParameters, setSolarRadArea, METH_O),
              DECLARE_METHOD(t_SpacecraftParameters, setSolarRadCoeff, METH_O),
              DECLARE_METHOD(t_SpacecraftParameters, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SpacecraftParameters)[] = {
              { Py_tp_methods, t_SpacecraftParameters__methods_ },
              { Py_tp_init, (void *) t_SpacecraftParameters_init_ },
              { Py_tp_getset, t_SpacecraftParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SpacecraftParameters)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(SpacecraftParameters, t_SpacecraftParameters, SpacecraftParameters);

            void t_SpacecraftParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(SpacecraftParameters), &PY_TYPE_DEF(SpacecraftParameters), module, "SpacecraftParameters", 0);
            }

            void t_SpacecraftParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParameters), "class_", make_descriptor(SpacecraftParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParameters), "wrapfn_", make_descriptor(t_SpacecraftParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SpacecraftParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SpacecraftParameters::initializeClass, 1)))
                return NULL;
              return t_SpacecraftParameters::wrap_Object(SpacecraftParameters(((t_SpacecraftParameters *) arg)->object.this$));
            }
            static PyObject *t_SpacecraftParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SpacecraftParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SpacecraftParameters_init_(t_SpacecraftParameters *self, PyObject *args, PyObject *kwds)
            {
              SpacecraftParameters object((jobject) NULL);

              INT_CALL(object = SpacecraftParameters());
              self->object = object;

              return 0;
            }

            static PyObject *t_SpacecraftParameters_getDragArea(t_SpacecraftParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDragArea());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SpacecraftParameters_getDragCoeff(t_SpacecraftParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDragCoeff());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SpacecraftParameters_getMass(t_SpacecraftParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMass());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SpacecraftParameters_getSolarRadArea(t_SpacecraftParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSolarRadArea());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SpacecraftParameters_getSolarRadCoeff(t_SpacecraftParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSolarRadCoeff());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SpacecraftParameters_setDragArea(t_SpacecraftParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDragArea(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDragArea", arg);
              return NULL;
            }

            static PyObject *t_SpacecraftParameters_setDragCoeff(t_SpacecraftParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDragCoeff(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDragCoeff", arg);
              return NULL;
            }

            static PyObject *t_SpacecraftParameters_setMass(t_SpacecraftParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMass(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMass", arg);
              return NULL;
            }

            static PyObject *t_SpacecraftParameters_setSolarRadArea(t_SpacecraftParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSolarRadArea(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSolarRadArea", arg);
              return NULL;
            }

            static PyObject *t_SpacecraftParameters_setSolarRadCoeff(t_SpacecraftParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSolarRadCoeff(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSolarRadCoeff", arg);
              return NULL;
            }

            static PyObject *t_SpacecraftParameters_validate(t_SpacecraftParameters *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(SpacecraftParameters), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_SpacecraftParameters_get__dragArea(t_SpacecraftParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDragArea());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SpacecraftParameters_set__dragArea(t_SpacecraftParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDragArea(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dragArea", arg);
              return -1;
            }

            static PyObject *t_SpacecraftParameters_get__dragCoeff(t_SpacecraftParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDragCoeff());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SpacecraftParameters_set__dragCoeff(t_SpacecraftParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDragCoeff(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dragCoeff", arg);
              return -1;
            }

            static PyObject *t_SpacecraftParameters_get__mass(t_SpacecraftParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMass());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SpacecraftParameters_set__mass(t_SpacecraftParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMass(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "mass", arg);
              return -1;
            }

            static PyObject *t_SpacecraftParameters_get__solarRadArea(t_SpacecraftParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSolarRadArea());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SpacecraftParameters_set__solarRadArea(t_SpacecraftParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSolarRadArea(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "solarRadArea", arg);
              return -1;
            }

            static PyObject *t_SpacecraftParameters_get__solarRadCoeff(t_SpacecraftParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSolarRadCoeff());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SpacecraftParameters_set__solarRadCoeff(t_SpacecraftParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSolarRadCoeff(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "solarRadCoeff", arg);
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
#include "org/orekit/rugged/raster/SimpleTileFactory.h"
#include "org/orekit/rugged/raster/TileFactory.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/raster/SimpleTile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *SimpleTileFactory::class$ = NULL;
        jmethodID *SimpleTileFactory::mids$ = NULL;
        bool SimpleTileFactory::live$ = false;

        jclass SimpleTileFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/SimpleTileFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_createTile_d08c4cf7a04ca8c7] = env->getMethodID(cls, "createTile", "()Lorg/orekit/rugged/raster/SimpleTile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SimpleTileFactory::SimpleTileFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::org::orekit::rugged::raster::SimpleTile SimpleTileFactory::createTile() const
        {
          return ::org::orekit::rugged::raster::SimpleTile(env->callObjectMethod(this$, mids$[mid_createTile_d08c4cf7a04ca8c7]));
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
        static PyObject *t_SimpleTileFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleTileFactory_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SimpleTileFactory_init_(t_SimpleTileFactory *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SimpleTileFactory_createTile(t_SimpleTileFactory *self);

        static PyMethodDef t_SimpleTileFactory__methods_[] = {
          DECLARE_METHOD(t_SimpleTileFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleTileFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleTileFactory, createTile, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimpleTileFactory)[] = {
          { Py_tp_methods, t_SimpleTileFactory__methods_ },
          { Py_tp_init, (void *) t_SimpleTileFactory_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimpleTileFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SimpleTileFactory, t_SimpleTileFactory, SimpleTileFactory);

        void t_SimpleTileFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(SimpleTileFactory), &PY_TYPE_DEF(SimpleTileFactory), module, "SimpleTileFactory", 0);
        }

        void t_SimpleTileFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTileFactory), "class_", make_descriptor(SimpleTileFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTileFactory), "wrapfn_", make_descriptor(t_SimpleTileFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTileFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SimpleTileFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimpleTileFactory::initializeClass, 1)))
            return NULL;
          return t_SimpleTileFactory::wrap_Object(SimpleTileFactory(((t_SimpleTileFactory *) arg)->object.this$));
        }
        static PyObject *t_SimpleTileFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimpleTileFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SimpleTileFactory_init_(t_SimpleTileFactory *self, PyObject *args, PyObject *kwds)
        {
          SimpleTileFactory object((jobject) NULL);

          INT_CALL(object = SimpleTileFactory());
          self->object = object;

          return 0;
        }

        static PyObject *t_SimpleTileFactory_createTile(t_SimpleTileFactory *self)
        {
          ::org::orekit::rugged::raster::SimpleTile result((jobject) NULL);
          OBJ_CALL(result = self->object.createTile());
          return ::org::orekit::rugged::raster::t_SimpleTile::wrap_Object(result);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVectorKey.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVectorKey.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVector.h"
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

            ::java::lang::Class *StateVectorKey::class$ = NULL;
            jmethodID *StateVectorKey::mids$ = NULL;
            bool StateVectorKey::live$ = false;
            StateVectorKey *StateVectorKey::COMMENT = NULL;
            StateVectorKey *StateVectorKey::EPOCH = NULL;
            StateVectorKey *StateVectorKey::X = NULL;
            StateVectorKey *StateVectorKey::X_DDOT = NULL;
            StateVectorKey *StateVectorKey::X_DOT = NULL;
            StateVectorKey *StateVectorKey::Y = NULL;
            StateVectorKey *StateVectorKey::Y_DDOT = NULL;
            StateVectorKey *StateVectorKey::Y_DOT = NULL;
            StateVectorKey *StateVectorKey::Z = NULL;
            StateVectorKey *StateVectorKey::Z_DDOT = NULL;
            StateVectorKey *StateVectorKey::Z_DOT = NULL;

            jclass StateVectorKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/StateVectorKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_d3b70508514b1e0b] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/StateVector;)Z");
                mids$[mid_valueOf_61c33f2f5d747d64] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;");
                mids$[mid_values_30553fdfd684a70e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new StateVectorKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                EPOCH = new StateVectorKey(env->getStaticObjectField(cls, "EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                X = new StateVectorKey(env->getStaticObjectField(cls, "X", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                X_DDOT = new StateVectorKey(env->getStaticObjectField(cls, "X_DDOT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                X_DOT = new StateVectorKey(env->getStaticObjectField(cls, "X_DOT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                Y = new StateVectorKey(env->getStaticObjectField(cls, "Y", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                Y_DDOT = new StateVectorKey(env->getStaticObjectField(cls, "Y_DDOT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                Y_DOT = new StateVectorKey(env->getStaticObjectField(cls, "Y_DOT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                Z = new StateVectorKey(env->getStaticObjectField(cls, "Z", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                Z_DDOT = new StateVectorKey(env->getStaticObjectField(cls, "Z_DDOT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                Z_DOT = new StateVectorKey(env->getStaticObjectField(cls, "Z_DOT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean StateVectorKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::StateVector & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_d3b70508514b1e0b], a0.this$, a1.this$, a2.this$);
            }

            StateVectorKey StateVectorKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return StateVectorKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_61c33f2f5d747d64], a0.this$));
            }

            JArray< StateVectorKey > StateVectorKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< StateVectorKey >(env->callStaticObjectMethod(cls, mids$[mid_values_30553fdfd684a70e]));
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
            static PyObject *t_StateVectorKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorKey_of_(t_StateVectorKey *self, PyObject *args);
            static PyObject *t_StateVectorKey_process(t_StateVectorKey *self, PyObject *args);
            static PyObject *t_StateVectorKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_StateVectorKey_values(PyTypeObject *type);
            static PyObject *t_StateVectorKey_get__parameters_(t_StateVectorKey *self, void *data);
            static PyGetSetDef t_StateVectorKey__fields_[] = {
              DECLARE_GET_FIELD(t_StateVectorKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_StateVectorKey__methods_[] = {
              DECLARE_METHOD(t_StateVectorKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_StateVectorKey, process, METH_VARARGS),
              DECLARE_METHOD(t_StateVectorKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_StateVectorKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(StateVectorKey)[] = {
              { Py_tp_methods, t_StateVectorKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_StateVectorKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(StateVectorKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(StateVectorKey, t_StateVectorKey, StateVectorKey);
            PyObject *t_StateVectorKey::wrap_Object(const StateVectorKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_StateVectorKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_StateVectorKey *self = (t_StateVectorKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_StateVectorKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_StateVectorKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_StateVectorKey *self = (t_StateVectorKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_StateVectorKey::install(PyObject *module)
            {
              installType(&PY_TYPE(StateVectorKey), &PY_TYPE_DEF(StateVectorKey), module, "StateVectorKey", 0);
            }

            void t_StateVectorKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "class_", make_descriptor(StateVectorKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "wrapfn_", make_descriptor(t_StateVectorKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(StateVectorKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "COMMENT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "EPOCH", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "X", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "X_DDOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::X_DDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "X_DOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::X_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Y", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Y_DDOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Y_DDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Y_DOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Y_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Z", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Z_DDOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Z_DDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Z_DOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Z_DOT)));
            }

            static PyObject *t_StateVectorKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, StateVectorKey::initializeClass, 1)))
                return NULL;
              return t_StateVectorKey::wrap_Object(StateVectorKey(((t_StateVectorKey *) arg)->object.this$));
            }
            static PyObject *t_StateVectorKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, StateVectorKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_StateVectorKey_of_(t_StateVectorKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_StateVectorKey_process(t_StateVectorKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::StateVector a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::StateVector::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_StateVectorKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              StateVectorKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::StateVectorKey::valueOf(a0));
                return t_StateVectorKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_StateVectorKey_values(PyTypeObject *type)
            {
              JArray< StateVectorKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::StateVectorKey::values());
              return JArray<jobject>(result.this$).wrap(t_StateVectorKey::wrap_jobject);
            }
            static PyObject *t_StateVectorKey_get__parameters_(t_StateVectorKey *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/DutyCycleType.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManBasis.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitManeuverHistoryMetadata::class$ = NULL;
              jmethodID *OrbitManeuverHistoryMetadata::mids$ = NULL;
              bool OrbitManeuverHistoryMetadata::live$ = false;
              ::org::orekit::files::ccsds::definitions::DutyCycleType *OrbitManeuverHistoryMetadata::DEFAULT_DC_TYPE = NULL;

              jclass OrbitManeuverHistoryMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_8497861b879c83f7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_getDcBodyFrame_e9bc4980320b8143] = env->getMethodID(cls, "getDcBodyFrame", "()Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame;");
                  mids$[mid_getDcBodyTrigger_032312bdeb3f2f93] = env->getMethodID(cls, "getDcBodyTrigger", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getDcExecStart_80e11148db499dda] = env->getMethodID(cls, "getDcExecStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getDcExecStop_80e11148db499dda] = env->getMethodID(cls, "getDcExecStop", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getDcMaxCycles_d6ab429752e7c267] = env->getMethodID(cls, "getDcMaxCycles", "()I");
                  mids$[mid_getDcMinCycles_d6ab429752e7c267] = env->getMethodID(cls, "getDcMinCycles", "()I");
                  mids$[mid_getDcPhaseStartAngle_9981f74b2d109da6] = env->getMethodID(cls, "getDcPhaseStartAngle", "()D");
                  mids$[mid_getDcPhaseStopAngle_9981f74b2d109da6] = env->getMethodID(cls, "getDcPhaseStopAngle", "()D");
                  mids$[mid_getDcRefDir_032312bdeb3f2f93] = env->getMethodID(cls, "getDcRefDir", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getDcRefTime_80e11148db499dda] = env->getMethodID(cls, "getDcRefTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getDcTimePulseDuration_9981f74b2d109da6] = env->getMethodID(cls, "getDcTimePulseDuration", "()D");
                  mids$[mid_getDcTimePulsePeriod_9981f74b2d109da6] = env->getMethodID(cls, "getDcTimePulsePeriod", "()D");
                  mids$[mid_getDcType_07d58be067d8cb2a] = env->getMethodID(cls, "getDcType", "()Lorg/orekit/files/ccsds/definitions/DutyCycleType;");
                  mids$[mid_getDcWindowClose_80e11148db499dda] = env->getMethodID(cls, "getDcWindowClose", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getDcWindowOpen_80e11148db499dda] = env->getMethodID(cls, "getDcWindowOpen", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getGravitationalAssist_540df4afb4ddb1b4] = env->getMethodID(cls, "getGravitationalAssist", "()Lorg/orekit/files/ccsds/definitions/BodyFacade;");
                  mids$[mid_getManBasis_b17bc5f3c95b1cb7] = env->getMethodID(cls, "getManBasis", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;");
                  mids$[mid_getManBasisID_d2c8eb4129821f0e] = env->getMethodID(cls, "getManBasisID", "()Ljava/lang/String;");
                  mids$[mid_getManComposition_d751c1a57012b438] = env->getMethodID(cls, "getManComposition", "()Ljava/util/List;");
                  mids$[mid_getManDeviceID_d2c8eb4129821f0e] = env->getMethodID(cls, "getManDeviceID", "()Ljava/lang/String;");
                  mids$[mid_getManFrameEpoch_80e11148db499dda] = env->getMethodID(cls, "getManFrameEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getManID_d2c8eb4129821f0e] = env->getMethodID(cls, "getManID", "()Ljava/lang/String;");
                  mids$[mid_getManNextEpoch_80e11148db499dda] = env->getMethodID(cls, "getManNextEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getManNextID_d2c8eb4129821f0e] = env->getMethodID(cls, "getManNextID", "()Ljava/lang/String;");
                  mids$[mid_getManPredSource_d2c8eb4129821f0e] = env->getMethodID(cls, "getManPredSource", "()Ljava/lang/String;");
                  mids$[mid_getManPrevEpoch_80e11148db499dda] = env->getMethodID(cls, "getManPrevEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getManPrevID_d2c8eb4129821f0e] = env->getMethodID(cls, "getManPrevID", "()Ljava/lang/String;");
                  mids$[mid_getManPurpose_d751c1a57012b438] = env->getMethodID(cls, "getManPurpose", "()Ljava/util/List;");
                  mids$[mid_getManReferenceFrame_0fc1562b68204151] = env->getMethodID(cls, "getManReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getManUnits_d751c1a57012b438] = env->getMethodID(cls, "getManUnits", "()Ljava/util/List;");
                  mids$[mid_setDcBodyFrame_1b58748bec435507] = env->getMethodID(cls, "setDcBodyFrame", "(Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame;)V");
                  mids$[mid_setDcBodyTrigger_30f8886dfb88a63c] = env->getMethodID(cls, "setDcBodyTrigger", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
                  mids$[mid_setDcExecStart_8497861b879c83f7] = env->getMethodID(cls, "setDcExecStart", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setDcExecStop_8497861b879c83f7] = env->getMethodID(cls, "setDcExecStop", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setDcMaxCycles_8fd427ab23829bf5] = env->getMethodID(cls, "setDcMaxCycles", "(I)V");
                  mids$[mid_setDcMinCycles_8fd427ab23829bf5] = env->getMethodID(cls, "setDcMinCycles", "(I)V");
                  mids$[mid_setDcPhaseStartAngle_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDcPhaseStartAngle", "(D)V");
                  mids$[mid_setDcPhaseStopAngle_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDcPhaseStopAngle", "(D)V");
                  mids$[mid_setDcRefDir_30f8886dfb88a63c] = env->getMethodID(cls, "setDcRefDir", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
                  mids$[mid_setDcRefTime_8497861b879c83f7] = env->getMethodID(cls, "setDcRefTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setDcTimePulseDuration_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDcTimePulseDuration", "(D)V");
                  mids$[mid_setDcTimePulsePeriod_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDcTimePulsePeriod", "(D)V");
                  mids$[mid_setDcType_ab5db9abb743063f] = env->getMethodID(cls, "setDcType", "(Lorg/orekit/files/ccsds/definitions/DutyCycleType;)V");
                  mids$[mid_setDcWindowClose_8497861b879c83f7] = env->getMethodID(cls, "setDcWindowClose", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setDcWindowOpen_8497861b879c83f7] = env->getMethodID(cls, "setDcWindowOpen", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setGravitationalAssist_9fc8078d81282211] = env->getMethodID(cls, "setGravitationalAssist", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");
                  mids$[mid_setManBasis_6733305d18006c0f] = env->getMethodID(cls, "setManBasis", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;)V");
                  mids$[mid_setManBasisID_105e1eadb709d9ac] = env->getMethodID(cls, "setManBasisID", "(Ljava/lang/String;)V");
                  mids$[mid_setManComposition_aa335fea495d60e0] = env->getMethodID(cls, "setManComposition", "(Ljava/util/List;)V");
                  mids$[mid_setManDeviceID_105e1eadb709d9ac] = env->getMethodID(cls, "setManDeviceID", "(Ljava/lang/String;)V");
                  mids$[mid_setManFrameEpoch_8497861b879c83f7] = env->getMethodID(cls, "setManFrameEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setManID_105e1eadb709d9ac] = env->getMethodID(cls, "setManID", "(Ljava/lang/String;)V");
                  mids$[mid_setManNextEpoch_8497861b879c83f7] = env->getMethodID(cls, "setManNextEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setManNextID_105e1eadb709d9ac] = env->getMethodID(cls, "setManNextID", "(Ljava/lang/String;)V");
                  mids$[mid_setManPredSource_105e1eadb709d9ac] = env->getMethodID(cls, "setManPredSource", "(Ljava/lang/String;)V");
                  mids$[mid_setManPrevEpoch_8497861b879c83f7] = env->getMethodID(cls, "setManPrevEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setManPrevID_105e1eadb709d9ac] = env->getMethodID(cls, "setManPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setManPurpose_aa335fea495d60e0] = env->getMethodID(cls, "setManPurpose", "(Ljava/util/List;)V");
                  mids$[mid_setManReferenceFrame_2c8b859a72c0094e] = env->getMethodID(cls, "setManReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setManUnits_aa335fea495d60e0] = env->getMethodID(cls, "setManUnits", "(Ljava/util/List;)V");
                  mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_DC_TYPE = new ::org::orekit::files::ccsds::definitions::DutyCycleType(env->getStaticObjectField(cls, "DEFAULT_DC_TYPE", "Lorg/orekit/files/ccsds/definitions/DutyCycleType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitManeuverHistoryMetadata::OrbitManeuverHistoryMetadata(const ::org::orekit::time::AbsoluteDate & a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_8497861b879c83f7, a0.this$)) {}

              ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame OrbitManeuverHistoryMetadata::getDcBodyFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame(env->callObjectMethod(this$, mids$[mid_getDcBodyFrame_e9bc4980320b8143]));
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuverHistoryMetadata::getDcBodyTrigger() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDcBodyTrigger_032312bdeb3f2f93]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getDcExecStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDcExecStart_80e11148db499dda]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getDcExecStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDcExecStop_80e11148db499dda]));
              }

              jint OrbitManeuverHistoryMetadata::getDcMaxCycles() const
              {
                return env->callIntMethod(this$, mids$[mid_getDcMaxCycles_d6ab429752e7c267]);
              }

              jint OrbitManeuverHistoryMetadata::getDcMinCycles() const
              {
                return env->callIntMethod(this$, mids$[mid_getDcMinCycles_d6ab429752e7c267]);
              }

              jdouble OrbitManeuverHistoryMetadata::getDcPhaseStartAngle() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDcPhaseStartAngle_9981f74b2d109da6]);
              }

              jdouble OrbitManeuverHistoryMetadata::getDcPhaseStopAngle() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDcPhaseStopAngle_9981f74b2d109da6]);
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuverHistoryMetadata::getDcRefDir() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDcRefDir_032312bdeb3f2f93]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getDcRefTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDcRefTime_80e11148db499dda]));
              }

              jdouble OrbitManeuverHistoryMetadata::getDcTimePulseDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDcTimePulseDuration_9981f74b2d109da6]);
              }

              jdouble OrbitManeuverHistoryMetadata::getDcTimePulsePeriod() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDcTimePulsePeriod_9981f74b2d109da6]);
              }

              ::org::orekit::files::ccsds::definitions::DutyCycleType OrbitManeuverHistoryMetadata::getDcType() const
              {
                return ::org::orekit::files::ccsds::definitions::DutyCycleType(env->callObjectMethod(this$, mids$[mid_getDcType_07d58be067d8cb2a]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getDcWindowClose() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDcWindowClose_80e11148db499dda]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getDcWindowOpen() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDcWindowOpen_80e11148db499dda]));
              }

              ::org::orekit::files::ccsds::definitions::BodyFacade OrbitManeuverHistoryMetadata::getGravitationalAssist() const
              {
                return ::org::orekit::files::ccsds::definitions::BodyFacade(env->callObjectMethod(this$, mids$[mid_getGravitationalAssist_540df4afb4ddb1b4]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis OrbitManeuverHistoryMetadata::getManBasis() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis(env->callObjectMethod(this$, mids$[mid_getManBasis_b17bc5f3c95b1cb7]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManBasisID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManBasisID_d2c8eb4129821f0e]));
              }

              ::java::util::List OrbitManeuverHistoryMetadata::getManComposition() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManComposition_d751c1a57012b438]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManDeviceID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManDeviceID_d2c8eb4129821f0e]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getManFrameEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getManFrameEpoch_80e11148db499dda]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManID_d2c8eb4129821f0e]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getManNextEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getManNextEpoch_80e11148db499dda]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManNextID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManNextID_d2c8eb4129821f0e]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManPredSource() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManPredSource_d2c8eb4129821f0e]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getManPrevEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getManPrevEpoch_80e11148db499dda]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManPrevID_d2c8eb4129821f0e]));
              }

              ::java::util::List OrbitManeuverHistoryMetadata::getManPurpose() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManPurpose_d751c1a57012b438]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade OrbitManeuverHistoryMetadata::getManReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getManReferenceFrame_0fc1562b68204151]));
              }

              ::java::util::List OrbitManeuverHistoryMetadata::getManUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManUnits_d751c1a57012b438]));
              }

              void OrbitManeuverHistoryMetadata::setDcBodyFrame(const ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcBodyFrame_1b58748bec435507], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcBodyTrigger(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcBodyTrigger_30f8886dfb88a63c], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcExecStart(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcExecStart_8497861b879c83f7], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcExecStop(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcExecStop_8497861b879c83f7], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcMaxCycles(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcMaxCycles_8fd427ab23829bf5], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcMinCycles(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcMinCycles_8fd427ab23829bf5], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcPhaseStartAngle(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcPhaseStartAngle_1ad26e8c8c0cd65b], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcPhaseStopAngle(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcPhaseStopAngle_1ad26e8c8c0cd65b], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcRefDir(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcRefDir_30f8886dfb88a63c], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcRefTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcRefTime_8497861b879c83f7], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcTimePulseDuration(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcTimePulseDuration_1ad26e8c8c0cd65b], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcTimePulsePeriod(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcTimePulsePeriod_1ad26e8c8c0cd65b], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcType(const ::org::orekit::files::ccsds::definitions::DutyCycleType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcType_ab5db9abb743063f], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcWindowClose(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcWindowClose_8497861b879c83f7], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcWindowOpen(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcWindowOpen_8497861b879c83f7], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setGravitationalAssist(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGravitationalAssist_9fc8078d81282211], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManBasis(const ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManBasis_6733305d18006c0f], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManBasisID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManBasisID_105e1eadb709d9ac], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManComposition(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManComposition_aa335fea495d60e0], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManDeviceID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManDeviceID_105e1eadb709d9ac], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManFrameEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManFrameEpoch_8497861b879c83f7], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManID_105e1eadb709d9ac], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManNextEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManNextEpoch_8497861b879c83f7], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManNextID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManNextID_105e1eadb709d9ac], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManPredSource(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManPredSource_105e1eadb709d9ac], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManPrevEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManPrevEpoch_8497861b879c83f7], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManPrevID_105e1eadb709d9ac], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManPurpose(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManPurpose_aa335fea495d60e0], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManReferenceFrame_2c8b859a72c0094e], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManUnits(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManUnits_aa335fea495d60e0], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::validate(jdouble a0) const
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
            namespace ocm {
              static PyObject *t_OrbitManeuverHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitManeuverHistoryMetadata_init_(t_OrbitManeuverHistoryMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcBodyFrame(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcBodyTrigger(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcExecStart(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcExecStop(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcMaxCycles(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcMinCycles(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcRefDir(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcRefTime(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcType(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcWindowClose(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcWindowOpen(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getGravitationalAssist(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManBasis(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManBasisID(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManComposition(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManDeviceID(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManFrameEpoch(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManID(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManNextEpoch(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManNextID(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManPredSource(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManPrevEpoch(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManPrevID(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManPurpose(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManReferenceFrame(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManUnits(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcBodyFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcExecStart(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcExecStop(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcMaxCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcMinCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcRefDir(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcRefTime(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcType(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcWindowClose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcWindowOpen(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setGravitationalAssist(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManBasis(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManBasisID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManComposition(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManDeviceID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManFrameEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManNextEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManNextID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManPredSource(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManPrevEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManPrevID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManPurpose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManReferenceFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManUnits(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_validate(t_OrbitManeuverHistoryMetadata *self, PyObject *args);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcBodyFrame(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcBodyFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcExecStart(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcExecStart(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcExecStop(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcExecStop(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcMaxCycles(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcMaxCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcMinCycles(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcMinCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcRefDir(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcRefDir(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcRefTime(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcRefTime(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcType(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcType(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcWindowClose(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcWindowClose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcWindowOpen(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcWindowOpen(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__gravitationalAssist(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__gravitationalAssist(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manBasis(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manBasis(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manBasisID(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manBasisID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manComposition(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manComposition(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manDeviceID(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manDeviceID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manFrameEpoch(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manFrameEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manID(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manNextEpoch(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manNextEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manNextID(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manNextID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPredSource(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manPredSource(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPrevEpoch(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manPrevEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPrevID(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manPrevID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPurpose(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manPurpose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manReferenceFrame(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manReferenceFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manUnits(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manUnits(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_OrbitManeuverHistoryMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcBodyFrame),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcBodyTrigger),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcExecStart),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcExecStop),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcMaxCycles),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcMinCycles),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcPhaseStartAngle),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcPhaseStopAngle),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcRefDir),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcRefTime),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcTimePulseDuration),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcTimePulsePeriod),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcType),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcWindowClose),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcWindowOpen),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, gravitationalAssist),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manBasis),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manBasisID),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manComposition),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manDeviceID),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manFrameEpoch),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manID),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manNextEpoch),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manNextID),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manPredSource),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manPrevEpoch),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manPrevID),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manPurpose),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manReferenceFrame),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manUnits),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitManeuverHistoryMetadata__methods_[] = {
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcBodyFrame, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcBodyTrigger, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcExecStart, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcExecStop, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcMaxCycles, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcMinCycles, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcPhaseStartAngle, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcPhaseStopAngle, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcRefDir, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcRefTime, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcTimePulseDuration, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcTimePulsePeriod, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcType, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcWindowClose, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcWindowOpen, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getGravitationalAssist, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManBasis, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManBasisID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManComposition, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManDeviceID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManFrameEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManNextEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManNextID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManPredSource, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManPrevEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManPrevID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManPurpose, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManUnits, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcBodyFrame, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcBodyTrigger, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcExecStart, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcExecStop, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcMaxCycles, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcMinCycles, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcPhaseStartAngle, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcPhaseStopAngle, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcRefDir, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcRefTime, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcTimePulseDuration, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcTimePulsePeriod, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcType, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcWindowClose, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcWindowOpen, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setGravitationalAssist, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManBasis, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManBasisID, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManComposition, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManDeviceID, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManFrameEpoch, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManID, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManNextEpoch, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManNextID, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManPredSource, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManPrevEpoch, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManPrevID, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManPurpose, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManReferenceFrame, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManUnits, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitManeuverHistoryMetadata)[] = {
                { Py_tp_methods, t_OrbitManeuverHistoryMetadata__methods_ },
                { Py_tp_init, (void *) t_OrbitManeuverHistoryMetadata_init_ },
                { Py_tp_getset, t_OrbitManeuverHistoryMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitManeuverHistoryMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(OrbitManeuverHistoryMetadata, t_OrbitManeuverHistoryMetadata, OrbitManeuverHistoryMetadata);

              void t_OrbitManeuverHistoryMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitManeuverHistoryMetadata), &PY_TYPE_DEF(OrbitManeuverHistoryMetadata), module, "OrbitManeuverHistoryMetadata", 0);
              }

              void t_OrbitManeuverHistoryMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadata), "class_", make_descriptor(OrbitManeuverHistoryMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadata), "wrapfn_", make_descriptor(t_OrbitManeuverHistoryMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadata), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitManeuverHistoryMetadata::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadata), "DEFAULT_DC_TYPE", make_descriptor(::org::orekit::files::ccsds::definitions::t_DutyCycleType::wrap_Object(*OrbitManeuverHistoryMetadata::DEFAULT_DC_TYPE)));
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitManeuverHistoryMetadata::initializeClass, 1)))
                  return NULL;
                return t_OrbitManeuverHistoryMetadata::wrap_Object(OrbitManeuverHistoryMetadata(((t_OrbitManeuverHistoryMetadata *) arg)->object.this$));
              }
              static PyObject *t_OrbitManeuverHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitManeuverHistoryMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitManeuverHistoryMetadata_init_(t_OrbitManeuverHistoryMetadata *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                OrbitManeuverHistoryMetadata object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  INT_CALL(object = OrbitManeuverHistoryMetadata(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcBodyFrame(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcBodyFrame());
                return ::org::orekit::files::ccsds::definitions::t_SpacecraftBodyFrame::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcBodyTrigger(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcBodyTrigger());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcExecStart(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcExecStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcExecStop(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcExecStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcMaxCycles(t_OrbitManeuverHistoryMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getDcMaxCycles());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcMinCycles(t_OrbitManeuverHistoryMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getDcMinCycles());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDcPhaseStartAngle());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDcPhaseStopAngle());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcRefDir(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcRefDir());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcRefTime(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcRefTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDcTimePulseDuration());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDcTimePulsePeriod());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcType(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::DutyCycleType result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcType());
                return ::org::orekit::files::ccsds::definitions::t_DutyCycleType::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcWindowClose(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcWindowClose());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcWindowOpen(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcWindowOpen());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getGravitationalAssist(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getGravitationalAssist());
                return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManBasis(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis result((jobject) NULL);
                OBJ_CALL(result = self->object.getManBasis());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ManBasis::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManBasisID(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManBasisID());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManComposition(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManComposition());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(ManeuverFieldType));
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManDeviceID(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManDeviceID());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManFrameEpoch(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getManFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManID(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManID());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManNextEpoch(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getManNextEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManNextID(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManNextID());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManPredSource(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManPredSource());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManPrevEpoch(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getManPrevEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManPrevID(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManPrevID());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManPurpose(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManPurpose());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManReferenceFrame(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getManReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManUnits(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcBodyFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcBodyFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcBodyFrame", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcBodyTrigger(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcBodyTrigger", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcExecStart(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcExecStart(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcExecStart", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcExecStop(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcExecStop(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcExecStop", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcMaxCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setDcMaxCycles(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcMaxCycles", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcMinCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setDcMinCycles(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcMinCycles", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDcPhaseStartAngle(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcPhaseStartAngle", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDcPhaseStopAngle(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcPhaseStopAngle", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcRefDir(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcRefDir(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcRefDir", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcRefTime(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcRefTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcRefTime", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDcTimePulseDuration(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcTimePulseDuration", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDcTimePulsePeriod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcTimePulsePeriod", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcType(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::DutyCycleType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::DutyCycleType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_DutyCycleType::parameters_))
                {
                  OBJ_CALL(self->object.setDcType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcType", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcWindowClose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcWindowClose(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcWindowClose", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcWindowOpen(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcWindowOpen(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcWindowOpen", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setGravitationalAssist(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setGravitationalAssist(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGravitationalAssist", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManBasis(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_ManBasis::parameters_))
                {
                  OBJ_CALL(self->object.setManBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManBasis", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManBasisID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManBasisID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManBasisID", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManComposition(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setManComposition(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManComposition", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManDeviceID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManDeviceID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManDeviceID", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManFrameEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setManFrameEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManFrameEpoch", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManID", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManNextEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setManNextEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManNextEpoch", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManNextID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManNextID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManNextID", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManPredSource(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManPredSource(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManPredSource", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManPrevEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setManPrevEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManPrevEpoch", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManPrevID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManPrevID", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManPurpose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setManPurpose(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManPurpose", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManReferenceFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setManReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManUnits(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setManUnits(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManUnits", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_validate(t_OrbitManeuverHistoryMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OrbitManeuverHistoryMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcBodyFrame(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcBodyFrame());
                return ::org::orekit::files::ccsds::definitions::t_SpacecraftBodyFrame::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcBodyFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcBodyFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcBodyFrame", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcBodyTrigger());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcBodyTrigger(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcBodyTrigger", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcExecStart(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcExecStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcExecStart(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcExecStart(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcExecStart", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcExecStop(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcExecStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcExecStop(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcExecStop(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcExecStop", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcMaxCycles(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getDcMaxCycles());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcMaxCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setDcMaxCycles(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcMaxCycles", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcMinCycles(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getDcMinCycles());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcMinCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setDcMinCycles(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcMinCycles", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDcPhaseStartAngle());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDcPhaseStartAngle(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcPhaseStartAngle", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDcPhaseStopAngle());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDcPhaseStopAngle(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcPhaseStopAngle", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcRefDir(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcRefDir());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcRefDir(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcRefDir(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcRefDir", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcRefTime(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcRefTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcRefTime(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcRefTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcRefTime", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDcTimePulseDuration());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDcTimePulseDuration(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcTimePulseDuration", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDcTimePulsePeriod());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDcTimePulsePeriod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcTimePulsePeriod", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcType(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::DutyCycleType value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcType());
                return ::org::orekit::files::ccsds::definitions::t_DutyCycleType::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcType(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::DutyCycleType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::DutyCycleType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcType", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcWindowClose(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcWindowClose());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcWindowClose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcWindowClose(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcWindowClose", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcWindowOpen(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcWindowOpen());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcWindowOpen(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcWindowOpen(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcWindowOpen", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__gravitationalAssist(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getGravitationalAssist());
                return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__gravitationalAssist(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setGravitationalAssist(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gravitationalAssist", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manBasis(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis value((jobject) NULL);
                OBJ_CALL(value = self->object.getManBasis());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ManBasis::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manBasis(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manBasis", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manBasisID(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManBasisID());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manBasisID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManBasisID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manBasisID", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manComposition(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManComposition());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manComposition(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManComposition(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manComposition", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manDeviceID(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManDeviceID());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manDeviceID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManDeviceID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manDeviceID", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manFrameEpoch(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getManFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manFrameEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManFrameEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manFrameEpoch", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manID(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManID());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manID", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manNextEpoch(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getManNextEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manNextEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManNextEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manNextEpoch", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manNextID(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManNextID());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manNextID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManNextID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manNextID", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPredSource(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManPredSource());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manPredSource(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManPredSource(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manPredSource", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPrevEpoch(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getManPrevEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manPrevEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManPrevEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manPrevEpoch", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPrevID(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManPrevID());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manPrevID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manPrevID", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPurpose(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManPurpose());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manPurpose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManPurpose(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manPurpose", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manReferenceFrame(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getManReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manReferenceFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manUnits(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManUnits());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manUnits(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManUnits(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manUnits", arg);
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
#include "java/util/AbstractList.h"
#include "java/util/Iterator.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "java/util/ListIterator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *AbstractList::class$ = NULL;
    jmethodID *AbstractList::mids$ = NULL;
    bool AbstractList::live$ = false;

    jclass AbstractList::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/AbstractList");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_72faff9b05f5ed5e] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_add_600fc0bdbd049172] = env->getMethodID(cls, "add", "(ILjava/lang/Object;)V");
        mids$[mid_addAll_34282804c6c39090] = env->getMethodID(cls, "addAll", "(ILjava/util/Collection;)Z");
        mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_35009debda6d2ece] = env->getMethodID(cls, "get", "(I)Ljava/lang/Object;");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_indexOf_9aa1a0d21cdeb90e] = env->getMethodID(cls, "indexOf", "(Ljava/lang/Object;)I");
        mids$[mid_iterator_4f613ccd2f803b4b] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_lastIndexOf_9aa1a0d21cdeb90e] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/Object;)I");
        mids$[mid_listIterator_7bb80a6d83d87d72] = env->getMethodID(cls, "listIterator", "()Ljava/util/ListIterator;");
        mids$[mid_listIterator_14737c756caa849d] = env->getMethodID(cls, "listIterator", "(I)Ljava/util/ListIterator;");
        mids$[mid_remove_35009debda6d2ece] = env->getMethodID(cls, "remove", "(I)Ljava/lang/Object;");
        mids$[mid_set_469b6e93ddb5a642] = env->getMethodID(cls, "set", "(ILjava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_subList_4e3c0741dd4bb632] = env->getMethodID(cls, "subList", "(II)Ljava/util/List;");
        mids$[mid_removeRange_b5d23e6c0858e8ed] = env->getMethodID(cls, "removeRange", "(II)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean AbstractList::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_72faff9b05f5ed5e], a0.this$);
    }

    void AbstractList::add(jint a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_add_600fc0bdbd049172], a0, a1.this$);
    }

    jboolean AbstractList::addAll(jint a0, const ::java::util::Collection & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_34282804c6c39090], a0, a1.this$);
    }

    void AbstractList::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
    }

    jboolean AbstractList::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    ::java::lang::Object AbstractList::get$(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_35009debda6d2ece], a0));
    }

    jint AbstractList::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jint AbstractList::indexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_9aa1a0d21cdeb90e], a0.this$);
    }

    ::java::util::Iterator AbstractList::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4f613ccd2f803b4b]));
    }

    jint AbstractList::lastIndexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_9aa1a0d21cdeb90e], a0.this$);
    }

    ::java::util::ListIterator AbstractList::listIterator() const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_7bb80a6d83d87d72]));
    }

    ::java::util::ListIterator AbstractList::listIterator(jint a0) const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_14737c756caa849d], a0));
    }

    ::java::lang::Object AbstractList::remove(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_35009debda6d2ece], a0));
    }

    ::java::lang::Object AbstractList::set(jint a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_set_469b6e93ddb5a642], a0, a1.this$));
    }

    ::java::util::List AbstractList::subList(jint a0, jint a1) const
    {
      return ::java::util::List(env->callObjectMethod(this$, mids$[mid_subList_4e3c0741dd4bb632], a0, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_AbstractList_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractList_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractList_of_(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_add(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_addAll(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_clear(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_equals(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_get(t_AbstractList *self, PyObject *arg);
    static PyObject *t_AbstractList_hashCode(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_indexOf(t_AbstractList *self, PyObject *arg);
    static PyObject *t_AbstractList_iterator(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_lastIndexOf(t_AbstractList *self, PyObject *arg);
    static PyObject *t_AbstractList_listIterator(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_remove(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_set(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_subList(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_get__parameters_(t_AbstractList *self, void *data);
    static PyGetSetDef t_AbstractList__fields_[] = {
      DECLARE_GET_FIELD(t_AbstractList, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_AbstractList__methods_[] = {
      DECLARE_METHOD(t_AbstractList, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractList, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractList, of_, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, add, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, addAll, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, clear, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, equals, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, get, METH_O),
      DECLARE_METHOD(t_AbstractList, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, indexOf, METH_O),
      DECLARE_METHOD(t_AbstractList, iterator, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, lastIndexOf, METH_O),
      DECLARE_METHOD(t_AbstractList, listIterator, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, remove, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, set, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, subList, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AbstractList)[] = {
      { Py_tp_methods, t_AbstractList__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_AbstractList__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_AbstractList *)) get_generic_iterator< t_AbstractList >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AbstractList)[] = {
      &PY_TYPE_DEF(::java::util::AbstractCollection),
      NULL
    };

    DEFINE_TYPE(AbstractList, t_AbstractList, AbstractList);
    PyObject *t_AbstractList::wrap_Object(const AbstractList& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractList::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractList *self = (t_AbstractList *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_AbstractList::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractList::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractList *self = (t_AbstractList *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_AbstractList::install(PyObject *module)
    {
      installType(&PY_TYPE(AbstractList), &PY_TYPE_DEF(AbstractList), module, "AbstractList", 0);
    }

    void t_AbstractList::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractList), "class_", make_descriptor(AbstractList::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractList), "wrapfn_", make_descriptor(t_AbstractList::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractList), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AbstractList_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AbstractList::initializeClass, 1)))
        return NULL;
      return t_AbstractList::wrap_Object(AbstractList(((t_AbstractList *) arg)->object.this$));
    }
    static PyObject *t_AbstractList_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AbstractList::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AbstractList_of_(t_AbstractList *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_AbstractList_add(t_AbstractList *self, PyObject *args)
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

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_AbstractList_addAll(t_AbstractList *self, PyObject *args)
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

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_AbstractList_clear(t_AbstractList *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_AbstractList_equals(t_AbstractList *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_AbstractList_get(t_AbstractList *self, PyObject *arg)
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

    static PyObject *t_AbstractList_hashCode(t_AbstractList *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_AbstractList_indexOf(t_AbstractList *self, PyObject *arg)
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

    static PyObject *t_AbstractList_iterator(t_AbstractList *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_AbstractList_lastIndexOf(t_AbstractList *self, PyObject *arg)
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

    static PyObject *t_AbstractList_listIterator(t_AbstractList *self, PyObject *args)
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

    static PyObject *t_AbstractList_remove(t_AbstractList *self, PyObject *args)
    {
      jint a0;
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_AbstractList_set(t_AbstractList *self, PyObject *args)
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

    static PyObject *t_AbstractList_subList(t_AbstractList *self, PyObject *args)
    {
      jint a0;
      jint a1;
      ::java::util::List result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.subList(a0, a1));
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      PyErr_SetArgsError((PyObject *) self, "subList", args);
      return NULL;
    }
    static PyObject *t_AbstractList_get__parameters_(t_AbstractList *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldEventHandler::class$ = NULL;
          jmethodID *FieldEventHandler::mids$ = NULL;
          bool FieldEventHandler::live$ = false;

          jclass FieldEventHandler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldEventHandler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_eventOccurred_094737664b369b83] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_init_09584b3c735adb0f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/propagation/events/FieldEventDetector;)V");
              mids$[mid_resetState_cd642b76f63f95b7] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::ode::events::Action FieldEventHandler::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_094737664b369b83], a0.this$, a1.this$, a2));
          }

          void FieldEventHandler::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::propagation::events::FieldEventDetector & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_init_09584b3c735adb0f], a0.this$, a1.this$, a2.this$);
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldEventHandler::resetState(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::orekit::propagation::FieldSpacecraftState & a1) const
          {
            return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_cd642b76f63f95b7], a0.this$, a1.this$));
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
          static PyObject *t_FieldEventHandler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldEventHandler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldEventHandler_of_(t_FieldEventHandler *self, PyObject *args);
          static PyObject *t_FieldEventHandler_eventOccurred(t_FieldEventHandler *self, PyObject *args);
          static PyObject *t_FieldEventHandler_init(t_FieldEventHandler *self, PyObject *args);
          static PyObject *t_FieldEventHandler_resetState(t_FieldEventHandler *self, PyObject *args);
          static PyObject *t_FieldEventHandler_get__parameters_(t_FieldEventHandler *self, void *data);
          static PyGetSetDef t_FieldEventHandler__fields_[] = {
            DECLARE_GET_FIELD(t_FieldEventHandler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldEventHandler__methods_[] = {
            DECLARE_METHOD(t_FieldEventHandler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldEventHandler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldEventHandler, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldEventHandler, eventOccurred, METH_VARARGS),
            DECLARE_METHOD(t_FieldEventHandler, init, METH_VARARGS),
            DECLARE_METHOD(t_FieldEventHandler, resetState, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldEventHandler)[] = {
            { Py_tp_methods, t_FieldEventHandler__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldEventHandler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldEventHandler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldEventHandler, t_FieldEventHandler, FieldEventHandler);
          PyObject *t_FieldEventHandler::wrap_Object(const FieldEventHandler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldEventHandler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldEventHandler *self = (t_FieldEventHandler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldEventHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldEventHandler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldEventHandler *self = (t_FieldEventHandler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldEventHandler::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldEventHandler), &PY_TYPE_DEF(FieldEventHandler), module, "FieldEventHandler", 0);
          }

          void t_FieldEventHandler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventHandler), "class_", make_descriptor(FieldEventHandler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventHandler), "wrapfn_", make_descriptor(t_FieldEventHandler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventHandler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldEventHandler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldEventHandler::initializeClass, 1)))
              return NULL;
            return t_FieldEventHandler::wrap_Object(FieldEventHandler(((t_FieldEventHandler *) arg)->object.this$));
          }
          static PyObject *t_FieldEventHandler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldEventHandler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldEventHandler_of_(t_FieldEventHandler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldEventHandler_eventOccurred(t_FieldEventHandler *self, PyObject *args)
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

          static PyObject *t_FieldEventHandler_init(t_FieldEventHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::propagation::events::FieldEventDetector a2((jobject) NULL);
            PyTypeObject **p2;

            if (!parseArgs(args, "KKK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
            {
              OBJ_CALL(self->object.init(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_FieldEventHandler_resetState(t_FieldEventHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::FieldSpacecraftState a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(result = self->object.resetState(a0, a1));
              return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "resetState", args);
            return NULL;
          }
          static PyObject *t_FieldEventHandler_get__parameters_(t_FieldEventHandler *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/tdm/IdentityConverter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *IdentityConverter::class$ = NULL;
            jmethodID *IdentityConverter::mids$ = NULL;
            bool IdentityConverter::live$ = false;

            jclass IdentityConverter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/IdentityConverter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_metersToRu_b2dab880055d21ac] = env->getMethodID(cls, "metersToRu", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");
                mids$[mid_ruToMeters_b2dab880055d21ac] = env->getMethodID(cls, "ruToMeters", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            IdentityConverter::IdentityConverter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            jdouble IdentityConverter::metersToRu(const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_metersToRu_b2dab880055d21ac], a0.this$, a1.this$, a2);
            }

            jdouble IdentityConverter::ruToMeters(const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_ruToMeters_b2dab880055d21ac], a0.this$, a1.this$, a2);
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
            static PyObject *t_IdentityConverter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_IdentityConverter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_IdentityConverter_init_(t_IdentityConverter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_IdentityConverter_metersToRu(t_IdentityConverter *self, PyObject *args);
            static PyObject *t_IdentityConverter_ruToMeters(t_IdentityConverter *self, PyObject *args);

            static PyMethodDef t_IdentityConverter__methods_[] = {
              DECLARE_METHOD(t_IdentityConverter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IdentityConverter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IdentityConverter, metersToRu, METH_VARARGS),
              DECLARE_METHOD(t_IdentityConverter, ruToMeters, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(IdentityConverter)[] = {
              { Py_tp_methods, t_IdentityConverter__methods_ },
              { Py_tp_init, (void *) t_IdentityConverter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(IdentityConverter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(IdentityConverter, t_IdentityConverter, IdentityConverter);

            void t_IdentityConverter::install(PyObject *module)
            {
              installType(&PY_TYPE(IdentityConverter), &PY_TYPE_DEF(IdentityConverter), module, "IdentityConverter", 0);
            }

            void t_IdentityConverter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(IdentityConverter), "class_", make_descriptor(IdentityConverter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IdentityConverter), "wrapfn_", make_descriptor(t_IdentityConverter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IdentityConverter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_IdentityConverter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, IdentityConverter::initializeClass, 1)))
                return NULL;
              return t_IdentityConverter::wrap_Object(IdentityConverter(((t_IdentityConverter *) arg)->object.this$));
            }
            static PyObject *t_IdentityConverter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, IdentityConverter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_IdentityConverter_init_(t_IdentityConverter *self, PyObject *args, PyObject *kwds)
            {
              IdentityConverter object((jobject) NULL);

              INT_CALL(object = IdentityConverter());
              self->object = object;

              return 0;
            }

            static PyObject *t_IdentityConverter_metersToRu(t_IdentityConverter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "kkD", ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.metersToRu(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "metersToRu", args);
              return NULL;
            }

            static PyObject *t_IdentityConverter_ruToMeters(t_IdentityConverter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "kkD", ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.ruToMeters(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "ruToMeters", args);
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
#include "org/orekit/propagation/analytical/tle/DeepSDP4.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *DeepSDP4::class$ = NULL;
          jmethodID *DeepSDP4::mids$ = NULL;
          bool DeepSDP4::live$ = false;

          jclass DeepSDP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/DeepSDP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_40bdc63bf602b2a8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;D)V");
              mids$[mid_init$_877f7a4f81da784a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/frames/Frame;)V");
              mids$[mid_luniSolarTermsComputation_ff7cb6c242604316] = env->getMethodID(cls, "luniSolarTermsComputation", "()V");
              mids$[mid_deepSecularEffects_1ad26e8c8c0cd65b] = env->getMethodID(cls, "deepSecularEffects", "(D)V");
              mids$[mid_deepPeriodicEffects_1ad26e8c8c0cd65b] = env->getMethodID(cls, "deepPeriodicEffects", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DeepSDP4::DeepSDP4(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::tle::SDP4(env->newObject(initializeClass, &mids$, mid_init$_40bdc63bf602b2a8, a0.this$, a1.this$, a2)) {}

          DeepSDP4::DeepSDP4(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::propagation::analytical::tle::SDP4(env->newObject(initializeClass, &mids$, mid_init$_877f7a4f81da784a, a0.this$, a1.this$, a2, a3.this$)) {}
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
          static PyObject *t_DeepSDP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DeepSDP4_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DeepSDP4_init_(t_DeepSDP4 *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_DeepSDP4__methods_[] = {
            DECLARE_METHOD(t_DeepSDP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DeepSDP4, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DeepSDP4)[] = {
            { Py_tp_methods, t_DeepSDP4__methods_ },
            { Py_tp_init, (void *) t_DeepSDP4_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DeepSDP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::SDP4),
            NULL
          };

          DEFINE_TYPE(DeepSDP4, t_DeepSDP4, DeepSDP4);

          void t_DeepSDP4::install(PyObject *module)
          {
            installType(&PY_TYPE(DeepSDP4), &PY_TYPE_DEF(DeepSDP4), module, "DeepSDP4", 0);
          }

          void t_DeepSDP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DeepSDP4), "class_", make_descriptor(DeepSDP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DeepSDP4), "wrapfn_", make_descriptor(t_DeepSDP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DeepSDP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DeepSDP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DeepSDP4::initializeClass, 1)))
              return NULL;
            return t_DeepSDP4::wrap_Object(DeepSDP4(((t_DeepSDP4 *) arg)->object.this$));
          }
          static PyObject *t_DeepSDP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DeepSDP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DeepSDP4_init_(t_DeepSDP4 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                DeepSDP4 object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = DeepSDP4(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                DeepSDP4 object((jobject) NULL);

                if (!parseArgs(args, "kkDk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = DeepSDP4(a0, a1, a2, a3));
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
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *PositionAngleType::class$ = NULL;
      jmethodID *PositionAngleType::mids$ = NULL;
      bool PositionAngleType::live$ = false;
      PositionAngleType *PositionAngleType::ECCENTRIC = NULL;
      PositionAngleType *PositionAngleType::MEAN = NULL;
      PositionAngleType *PositionAngleType::TRUE = NULL;

      jclass PositionAngleType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/PositionAngleType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_75659cc7f48b4c9d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_values_31a79bc0f8363ca1] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/orbits/PositionAngleType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ECCENTRIC = new PositionAngleType(env->getStaticObjectField(cls, "ECCENTRIC", "Lorg/orekit/orbits/PositionAngleType;"));
          MEAN = new PositionAngleType(env->getStaticObjectField(cls, "MEAN", "Lorg/orekit/orbits/PositionAngleType;"));
          TRUE = new PositionAngleType(env->getStaticObjectField(cls, "TRUE", "Lorg/orekit/orbits/PositionAngleType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PositionAngleType PositionAngleType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return PositionAngleType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_75659cc7f48b4c9d], a0.this$));
      }

      JArray< PositionAngleType > PositionAngleType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< PositionAngleType >(env->callStaticObjectMethod(cls, mids$[mid_values_31a79bc0f8363ca1]));
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
      static PyObject *t_PositionAngleType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PositionAngleType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PositionAngleType_of_(t_PositionAngleType *self, PyObject *args);
      static PyObject *t_PositionAngleType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_PositionAngleType_values(PyTypeObject *type);
      static PyObject *t_PositionAngleType_get__parameters_(t_PositionAngleType *self, void *data);
      static PyGetSetDef t_PositionAngleType__fields_[] = {
        DECLARE_GET_FIELD(t_PositionAngleType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PositionAngleType__methods_[] = {
        DECLARE_METHOD(t_PositionAngleType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PositionAngleType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PositionAngleType, of_, METH_VARARGS),
        DECLARE_METHOD(t_PositionAngleType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PositionAngleType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PositionAngleType)[] = {
        { Py_tp_methods, t_PositionAngleType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_PositionAngleType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PositionAngleType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(PositionAngleType, t_PositionAngleType, PositionAngleType);
      PyObject *t_PositionAngleType::wrap_Object(const PositionAngleType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PositionAngleType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PositionAngleType *self = (t_PositionAngleType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PositionAngleType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PositionAngleType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PositionAngleType *self = (t_PositionAngleType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PositionAngleType::install(PyObject *module)
      {
        installType(&PY_TYPE(PositionAngleType), &PY_TYPE_DEF(PositionAngleType), module, "PositionAngleType", 0);
      }

      void t_PositionAngleType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleType), "class_", make_descriptor(PositionAngleType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleType), "wrapfn_", make_descriptor(t_PositionAngleType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleType), "boxfn_", make_descriptor(boxObject));
        env->getClass(PositionAngleType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleType), "ECCENTRIC", make_descriptor(t_PositionAngleType::wrap_Object(*PositionAngleType::ECCENTRIC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleType), "MEAN", make_descriptor(t_PositionAngleType::wrap_Object(*PositionAngleType::MEAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleType), "TRUE", make_descriptor(t_PositionAngleType::wrap_Object(*PositionAngleType::TRUE)));
      }

      static PyObject *t_PositionAngleType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PositionAngleType::initializeClass, 1)))
          return NULL;
        return t_PositionAngleType::wrap_Object(PositionAngleType(((t_PositionAngleType *) arg)->object.this$));
      }
      static PyObject *t_PositionAngleType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PositionAngleType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PositionAngleType_of_(t_PositionAngleType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_PositionAngleType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        PositionAngleType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::orbits::PositionAngleType::valueOf(a0));
          return t_PositionAngleType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_PositionAngleType_values(PyTypeObject *type)
      {
        JArray< PositionAngleType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::orbits::PositionAngleType::values());
        return JArray<jobject>(result.this$).wrap(t_PositionAngleType::wrap_jobject);
      }
      static PyObject *t_PositionAngleType_get__parameters_(t_PositionAngleType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/PythonFieldOrekitFixedStepHandler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/sampling/FieldOrekitFixedStepHandler.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonFieldOrekitFixedStepHandler::class$ = NULL;
        jmethodID *PythonFieldOrekitFixedStepHandler::mids$ = NULL;
        bool PythonFieldOrekitFixedStepHandler::live$ = false;

        jclass PythonFieldOrekitFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonFieldOrekitFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_8062511934471166] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_handleStep_8062511934471166] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_init_8e7d4ddea41a1ea0] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldOrekitFixedStepHandler::PythonFieldOrekitFixedStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonFieldOrekitFixedStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonFieldOrekitFixedStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonFieldOrekitFixedStepHandler::pythonExtension(jlong a0) const
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
        static PyObject *t_PythonFieldOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitFixedStepHandler_of_(t_PythonFieldOrekitFixedStepHandler *self, PyObject *args);
        static int t_PythonFieldOrekitFixedStepHandler_init_(t_PythonFieldOrekitFixedStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldOrekitFixedStepHandler_finalize(t_PythonFieldOrekitFixedStepHandler *self);
        static PyObject *t_PythonFieldOrekitFixedStepHandler_pythonExtension(t_PythonFieldOrekitFixedStepHandler *self, PyObject *args);
        static void JNICALL t_PythonFieldOrekitFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldOrekitFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldOrekitFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonFieldOrekitFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldOrekitFixedStepHandler_get__self(t_PythonFieldOrekitFixedStepHandler *self, void *data);
        static PyObject *t_PythonFieldOrekitFixedStepHandler_get__parameters_(t_PythonFieldOrekitFixedStepHandler *self, void *data);
        static PyGetSetDef t_PythonFieldOrekitFixedStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldOrekitFixedStepHandler, self),
          DECLARE_GET_FIELD(t_PythonFieldOrekitFixedStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldOrekitFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_PythonFieldOrekitFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitFixedStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldOrekitFixedStepHandler, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldOrekitFixedStepHandler, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldOrekitFixedStepHandler)[] = {
          { Py_tp_methods, t_PythonFieldOrekitFixedStepHandler__methods_ },
          { Py_tp_init, (void *) t_PythonFieldOrekitFixedStepHandler_init_ },
          { Py_tp_getset, t_PythonFieldOrekitFixedStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldOrekitFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldOrekitFixedStepHandler, t_PythonFieldOrekitFixedStepHandler, PythonFieldOrekitFixedStepHandler);
        PyObject *t_PythonFieldOrekitFixedStepHandler::wrap_Object(const PythonFieldOrekitFixedStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitFixedStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitFixedStepHandler *self = (t_PythonFieldOrekitFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldOrekitFixedStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitFixedStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitFixedStepHandler *self = (t_PythonFieldOrekitFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldOrekitFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldOrekitFixedStepHandler), &PY_TYPE_DEF(PythonFieldOrekitFixedStepHandler), module, "PythonFieldOrekitFixedStepHandler", 1);
        }

        void t_PythonFieldOrekitFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitFixedStepHandler), "class_", make_descriptor(PythonFieldOrekitFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitFixedStepHandler), "wrapfn_", make_descriptor(t_PythonFieldOrekitFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitFixedStepHandler), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldOrekitFixedStepHandler::initializeClass);
          JNINativeMethod methods[] = {
            { "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V", (void *) t_PythonFieldOrekitFixedStepHandler_finish0 },
            { "handleStep", "(Lorg/orekit/propagation/FieldSpacecraftState;)V", (void *) t_PythonFieldOrekitFixedStepHandler_handleStep1 },
            { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldOrekitFixedStepHandler_init2 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldOrekitFixedStepHandler_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonFieldOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldOrekitFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_PythonFieldOrekitFixedStepHandler::wrap_Object(PythonFieldOrekitFixedStepHandler(((t_PythonFieldOrekitFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldOrekitFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldOrekitFixedStepHandler_of_(t_PythonFieldOrekitFixedStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldOrekitFixedStepHandler_init_(t_PythonFieldOrekitFixedStepHandler *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldOrekitFixedStepHandler object((jobject) NULL);

          INT_CALL(object = PythonFieldOrekitFixedStepHandler());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldOrekitFixedStepHandler_finalize(t_PythonFieldOrekitFixedStepHandler *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldOrekitFixedStepHandler_pythonExtension(t_PythonFieldOrekitFixedStepHandler *self, PyObject *args)
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

        static void JNICALL t_PythonFieldOrekitFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitFixedStepHandler::mids$[PythonFieldOrekitFixedStepHandler::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "finish", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldOrekitFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitFixedStepHandler::mids$[PythonFieldOrekitFixedStepHandler::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "handleStep", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldOrekitFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitFixedStepHandler::mids$[PythonFieldOrekitFixedStepHandler::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
          PyObject *o2 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a2));
          PyObject *result = PyObject_CallMethod(obj, "init", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldOrekitFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitFixedStepHandler::mids$[PythonFieldOrekitFixedStepHandler::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldOrekitFixedStepHandler::mids$[PythonFieldOrekitFixedStepHandler::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldOrekitFixedStepHandler_get__self(t_PythonFieldOrekitFixedStepHandler *self, void *data)
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
        static PyObject *t_PythonFieldOrekitFixedStepHandler_get__parameters_(t_PythonFieldOrekitFixedStepHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/NormalDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *NormalDistribution::class$ = NULL;
        jmethodID *NormalDistribution::mids$ = NULL;
        bool NormalDistribution::live$ = false;

        jclass NormalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/NormalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_bf28ed64d6e8576b] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getMean_9981f74b2d109da6] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getStandardDeviation_9981f74b2d109da6] = env->getMethodID(cls, "getStandardDeviation", "()D");
            mids$[mid_getSupportLowerBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_bf28ed64d6e8576b] = env->getMethodID(cls, "logDensity", "(D)D");
            mids$[mid_probability_82f92590f4247da1] = env->getMethodID(cls, "probability", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NormalDistribution::NormalDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        NormalDistribution::NormalDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        jdouble NormalDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jdouble NormalDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_bf28ed64d6e8576b], a0);
        }

        jdouble NormalDistribution::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_9981f74b2d109da6]);
        }

        jdouble NormalDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble NormalDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        jdouble NormalDistribution::getStandardDeviation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStandardDeviation_9981f74b2d109da6]);
        }

        jdouble NormalDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_9981f74b2d109da6]);
        }

        jdouble NormalDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_9981f74b2d109da6]);
        }

        jdouble NormalDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jboolean NormalDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
        }

        jdouble NormalDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_bf28ed64d6e8576b], a0);
        }

        jdouble NormalDistribution::probability(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_82f92590f4247da1], a0, a1);
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
        static PyObject *t_NormalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NormalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NormalDistribution_init_(t_NormalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NormalDistribution_cumulativeProbability(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_density(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_getMean(t_NormalDistribution *self);
        static PyObject *t_NormalDistribution_getNumericalMean(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_getNumericalVariance(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_getStandardDeviation(t_NormalDistribution *self);
        static PyObject *t_NormalDistribution_getSupportLowerBound(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_getSupportUpperBound(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_inverseCumulativeProbability(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_isSupportConnected(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_logDensity(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_probability(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_get__mean(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__numericalMean(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__numericalVariance(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__standardDeviation(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__supportConnected(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__supportLowerBound(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__supportUpperBound(t_NormalDistribution *self, void *data);
        static PyGetSetDef t_NormalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_NormalDistribution, mean),
          DECLARE_GET_FIELD(t_NormalDistribution, numericalMean),
          DECLARE_GET_FIELD(t_NormalDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_NormalDistribution, standardDeviation),
          DECLARE_GET_FIELD(t_NormalDistribution, supportConnected),
          DECLARE_GET_FIELD(t_NormalDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_NormalDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NormalDistribution__methods_[] = {
          DECLARE_METHOD(t_NormalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NormalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NormalDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, getMean, METH_NOARGS),
          DECLARE_METHOD(t_NormalDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_NormalDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, logDensity, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NormalDistribution)[] = {
          { Py_tp_methods, t_NormalDistribution__methods_ },
          { Py_tp_init, (void *) t_NormalDistribution_init_ },
          { Py_tp_getset, t_NormalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NormalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(NormalDistribution, t_NormalDistribution, NormalDistribution);

        void t_NormalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(NormalDistribution), &PY_TYPE_DEF(NormalDistribution), module, "NormalDistribution", 0);
        }

        void t_NormalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NormalDistribution), "class_", make_descriptor(NormalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NormalDistribution), "wrapfn_", make_descriptor(t_NormalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NormalDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NormalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NormalDistribution::initializeClass, 1)))
            return NULL;
          return t_NormalDistribution::wrap_Object(NormalDistribution(((t_NormalDistribution *) arg)->object.this$));
        }
        static PyObject *t_NormalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NormalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NormalDistribution_init_(t_NormalDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              NormalDistribution object((jobject) NULL);

              INT_CALL(object = NormalDistribution());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              NormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = NormalDistribution(a0, a1));
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

        static PyObject *t_NormalDistribution_cumulativeProbability(t_NormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_NormalDistribution_density(t_NormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_NormalDistribution_getMean(t_NormalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_NormalDistribution_getNumericalMean(t_NormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_NormalDistribution_getNumericalVariance(t_NormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_NormalDistribution_getStandardDeviation(t_NormalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_NormalDistribution_getSupportLowerBound(t_NormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_NormalDistribution_getSupportUpperBound(t_NormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_NormalDistribution_inverseCumulativeProbability(t_NormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_NormalDistribution_isSupportConnected(t_NormalDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_NormalDistribution_logDensity(t_NormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_NormalDistribution_probability(t_NormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.probability(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_NormalDistribution_get__mean(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NormalDistribution_get__numericalMean(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NormalDistribution_get__numericalVariance(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NormalDistribution_get__standardDeviation(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NormalDistribution_get__supportConnected(t_NormalDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_NormalDistribution_get__supportLowerBound(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NormalDistribution_get__supportUpperBound(t_NormalDistribution *self, void *data)
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
#include "org/orekit/frames/LocalMagneticFieldFrame.h"
#include "org/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/frames/LOF.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LocalMagneticFieldFrame::class$ = NULL;
      jmethodID *LocalMagneticFieldFrame::mids$ = NULL;
      bool LocalMagneticFieldFrame::live$ = false;

      jclass LocalMagneticFieldFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LocalMagneticFieldFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c9bf6a3219f58a45] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/models/earth/GeoMagneticField;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_3a5c9b284bf02a3d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/models/earth/GeoMagneticField;Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;Lorg/orekit/frames/Frame;)V");
          mids$[mid_getInertialFrame_cb151471db4570f0] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getMagneticField_839875beb9ae9174] = env->getMethodID(cls, "getMagneticField", "()Lorg/orekit/models/earth/GeoMagneticField;");
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_rotationFromInertial_7972874aa60c5cbb] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromInertial_24d473279eeb35d9] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LocalMagneticFieldFrame::LocalMagneticFieldFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::models::earth::GeoMagneticField & a1, const ::org::orekit::frames::Frame & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c9bf6a3219f58a45, a0.this$, a1.this$, a2.this$)) {}

      LocalMagneticFieldFrame::LocalMagneticFieldFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::models::earth::GeoMagneticField & a1, const ::org::orekit::frames::LocalMagneticFieldFrame$LOFBuilderVector & a2, const ::org::orekit::frames::Frame & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3a5c9b284bf02a3d, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      ::org::orekit::frames::Frame LocalMagneticFieldFrame::getInertialFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_cb151471db4570f0]));
      }

      ::org::orekit::models::earth::GeoMagneticField LocalMagneticFieldFrame::getMagneticField() const
      {
        return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getMagneticField_839875beb9ae9174]));
      }

      ::java::lang::String LocalMagneticFieldFrame::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LocalMagneticFieldFrame::rotationFromInertial(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_7972874aa60c5cbb], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LocalMagneticFieldFrame::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_24d473279eeb35d9], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_LocalMagneticFieldFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalMagneticFieldFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LocalMagneticFieldFrame_init_(t_LocalMagneticFieldFrame *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LocalMagneticFieldFrame_getInertialFrame(t_LocalMagneticFieldFrame *self);
      static PyObject *t_LocalMagneticFieldFrame_getMagneticField(t_LocalMagneticFieldFrame *self);
      static PyObject *t_LocalMagneticFieldFrame_getName(t_LocalMagneticFieldFrame *self);
      static PyObject *t_LocalMagneticFieldFrame_rotationFromInertial(t_LocalMagneticFieldFrame *self, PyObject *args);
      static PyObject *t_LocalMagneticFieldFrame_get__inertialFrame(t_LocalMagneticFieldFrame *self, void *data);
      static PyObject *t_LocalMagneticFieldFrame_get__magneticField(t_LocalMagneticFieldFrame *self, void *data);
      static PyObject *t_LocalMagneticFieldFrame_get__name(t_LocalMagneticFieldFrame *self, void *data);
      static PyGetSetDef t_LocalMagneticFieldFrame__fields_[] = {
        DECLARE_GET_FIELD(t_LocalMagneticFieldFrame, inertialFrame),
        DECLARE_GET_FIELD(t_LocalMagneticFieldFrame, magneticField),
        DECLARE_GET_FIELD(t_LocalMagneticFieldFrame, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalMagneticFieldFrame__methods_[] = {
        DECLARE_METHOD(t_LocalMagneticFieldFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame, getInertialFrame, METH_NOARGS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame, getMagneticField, METH_NOARGS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame, getName, METH_NOARGS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame, rotationFromInertial, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalMagneticFieldFrame)[] = {
        { Py_tp_methods, t_LocalMagneticFieldFrame__methods_ },
        { Py_tp_init, (void *) t_LocalMagneticFieldFrame_init_ },
        { Py_tp_getset, t_LocalMagneticFieldFrame__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalMagneticFieldFrame)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LocalMagneticFieldFrame, t_LocalMagneticFieldFrame, LocalMagneticFieldFrame);

      void t_LocalMagneticFieldFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalMagneticFieldFrame), &PY_TYPE_DEF(LocalMagneticFieldFrame), module, "LocalMagneticFieldFrame", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame), "LOFBuilderVector", make_descriptor(&PY_TYPE_DEF(LocalMagneticFieldFrame$LOFBuilderVector)));
      }

      void t_LocalMagneticFieldFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame), "class_", make_descriptor(LocalMagneticFieldFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame), "wrapfn_", make_descriptor(t_LocalMagneticFieldFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LocalMagneticFieldFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalMagneticFieldFrame::initializeClass, 1)))
          return NULL;
        return t_LocalMagneticFieldFrame::wrap_Object(LocalMagneticFieldFrame(((t_LocalMagneticFieldFrame *) arg)->object.this$));
      }
      static PyObject *t_LocalMagneticFieldFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalMagneticFieldFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LocalMagneticFieldFrame_init_(t_LocalMagneticFieldFrame *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::models::earth::GeoMagneticField a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            LocalMagneticFieldFrame object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::models::earth::GeoMagneticField::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = LocalMagneticFieldFrame(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::models::earth::GeoMagneticField a1((jobject) NULL);
            ::org::orekit::frames::LocalMagneticFieldFrame$LOFBuilderVector a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::Frame a3((jobject) NULL);
            LocalMagneticFieldFrame object((jobject) NULL);

            if (!parseArgs(args, "kkKk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::models::earth::GeoMagneticField::initializeClass, ::org::orekit::frames::LocalMagneticFieldFrame$LOFBuilderVector::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::frames::t_LocalMagneticFieldFrame$LOFBuilderVector::parameters_, &a3))
            {
              INT_CALL(object = LocalMagneticFieldFrame(a0, a1, a2, a3));
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

      static PyObject *t_LocalMagneticFieldFrame_getInertialFrame(t_LocalMagneticFieldFrame *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_LocalMagneticFieldFrame_getMagneticField(t_LocalMagneticFieldFrame *self)
      {
        ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);
        OBJ_CALL(result = self->object.getMagneticField());
        return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
      }

      static PyObject *t_LocalMagneticFieldFrame_getName(t_LocalMagneticFieldFrame *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_LocalMagneticFieldFrame_rotationFromInertial(t_LocalMagneticFieldFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "rotationFromInertial", args);
        return NULL;
      }

      static PyObject *t_LocalMagneticFieldFrame_get__inertialFrame(t_LocalMagneticFieldFrame *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_LocalMagneticFieldFrame_get__magneticField(t_LocalMagneticFieldFrame *self, void *data)
      {
        ::org::orekit::models::earth::GeoMagneticField value((jobject) NULL);
        OBJ_CALL(value = self->object.getMagneticField());
        return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(value);
      }

      static PyObject *t_LocalMagneticFieldFrame_get__name(t_LocalMagneticFieldFrame *self, void *data)
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
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/FDSFactory.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldDerivativeStructure::class$ = NULL;
        jmethodID *FieldDerivativeStructure::mids$ = NULL;
        bool FieldDerivativeStructure::live$ = false;

        jclass FieldDerivativeStructure::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldDerivativeStructure");

            mids$ = new jmethodID[max_mid];
            mids$[mid_abs_b363d6ebd90353bf] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_acos_b363d6ebd90353bf] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_acosh_b363d6ebd90353bf] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_add_487b1f7c3947c77e] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_add_b9026a046a147de2] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_add_ca7a13fcccfd32de] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_asin_b363d6ebd90353bf] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_asinh_b363d6ebd90353bf] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_atan_b363d6ebd90353bf] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_atan2_487b1f7c3947c77e] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_atan2_181f907a7807ecb9] = env->getStaticMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_atanh_b363d6ebd90353bf] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_cbrt_b363d6ebd90353bf] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_ceil_b363d6ebd90353bf] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_compose_73620040306e9955] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_compose_1658e30325c495f4] = env->getMethodID(cls, "compose", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_copySign_487b1f7c3947c77e] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_copySign_b9026a046a147de2] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_copySign_ca7a13fcccfd32de] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_cos_b363d6ebd90353bf] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_cosh_b363d6ebd90353bf] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_differentiate_a8407627cfbfe04d] = env->getMethodID(cls, "differentiate", "(II)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_divide_487b1f7c3947c77e] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_divide_b9026a046a147de2] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_divide_ca7a13fcccfd32de] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_exp_b363d6ebd90353bf] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_expm1_b363d6ebd90353bf] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_floor_b363d6ebd90353bf] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getAllDerivatives_94ed2e0620f8833d] = env->getMethodID(cls, "getAllDerivatives", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getExponent_d6ab429752e7c267] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getFactory_062ce4da311add4a] = env->getMethodID(cls, "getFactory", "()Lorg/hipparchus/analysis/differentiation/FDSFactory;");
            mids$[mid_getField_577649682b9910c1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getFreeParameters_d6ab429752e7c267] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getOrder_d6ab429752e7c267] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_15bad9d0870b63aa] = env->getMethodID(cls, "getPartialDerivative", "([I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getPi_b363d6ebd90353bf] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getReal_9981f74b2d109da6] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_08d37e3f77b7239d] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_hypot_487b1f7c3947c77e] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_hypot_181f907a7807ecb9] = env->getStaticMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_integrate_a8407627cfbfe04d] = env->getMethodID(cls, "integrate", "(II)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_352aef28373c8de7] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_d5c28220ece11c9c] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_d0d594ae934fc556] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;[Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_d252a90dc5fff150] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_281c06dc1ecc5a27] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_9993f4a509b1c911] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_064b23b9dab00b0a] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_5b33ce939db205a6] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_3a7eeb579ba49118] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_d19785b9f9c531df] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_118779bf592933ad] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_a5b0290c137d6bb7] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_log_b363d6ebd90353bf] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_log10_b363d6ebd90353bf] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_log1p_b363d6ebd90353bf] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_multiply_487b1f7c3947c77e] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_multiply_b9026a046a147de2] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_multiply_14f0e73adde16f83] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_multiply_ca7a13fcccfd32de] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_negate_b363d6ebd90353bf] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_newInstance_b9026a046a147de2] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_pow_487b1f7c3947c77e] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_pow_b9026a046a147de2] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_pow_14f0e73adde16f83] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_pow_f6578b77b0bf574a] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_rebase_d47edc631539de98] = env->getMethodID(cls, "rebase", "([Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_reciprocal_b363d6ebd90353bf] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_remainder_487b1f7c3947c77e] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_remainder_b9026a046a147de2] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_remainder_ca7a13fcccfd32de] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_rint_b363d6ebd90353bf] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_rootN_14f0e73adde16f83] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_scalb_14f0e73adde16f83] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_sign_b363d6ebd90353bf] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_sin_b363d6ebd90353bf] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_sinCos_31b7b02b4932da60] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_b363d6ebd90353bf] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_sinhCosh_b24d5962ea451135] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_b363d6ebd90353bf] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_subtract_487b1f7c3947c77e] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_subtract_b9026a046a147de2] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_subtract_ca7a13fcccfd32de] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_tan_b363d6ebd90353bf] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_tanh_b363d6ebd90353bf] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_taylor_882fb3b536492986] = env->getMethodID(cls, "taylor", "([D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_taylor_c04968ee695d037c] = env->getMethodID(cls, "taylor", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_toDegrees_b363d6ebd90353bf] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_toRadians_b363d6ebd90353bf] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_ulp_b363d6ebd90353bf] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldDerivativeStructure FieldDerivativeStructure::abs() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_abs_b363d6ebd90353bf]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::acos() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_acos_b363d6ebd90353bf]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::acosh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_acosh_b363d6ebd90353bf]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::add(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_add_487b1f7c3947c77e], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::add(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_add_b9026a046a147de2], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::add(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_add_ca7a13fcccfd32de], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::asin() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_asin_b363d6ebd90353bf]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::asinh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_asinh_b363d6ebd90353bf]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::atan() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_atan_b363d6ebd90353bf]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::atan2(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_atan2_487b1f7c3947c77e], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::atan2(const FieldDerivativeStructure & a0, const FieldDerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldDerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_atan2_181f907a7807ecb9], a0.this$, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::atanh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_atanh_b363d6ebd90353bf]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::cbrt() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_cbrt_b363d6ebd90353bf]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::ceil() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_ceil_b363d6ebd90353bf]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::compose(const JArray< jdouble > & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_compose_73620040306e9955], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::compose(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_compose_1658e30325c495f4], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::copySign(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_copySign_487b1f7c3947c77e], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::copySign(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_copySign_b9026a046a147de2], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::copySign(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_copySign_ca7a13fcccfd32de], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::cos() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_cos_b363d6ebd90353bf]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::cosh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_cosh_b363d6ebd90353bf]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::differentiate(jint a0, jint a1) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_differentiate_a8407627cfbfe04d], a0, a1));
        }

        FieldDerivativeStructure FieldDerivativeStructure::divide(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_divide_487b1f7c3947c77e], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::divide(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_divide_b9026a046a147de2], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::divide(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_divide_ca7a13fcccfd32de], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::exp() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_exp_b363d6ebd90353bf]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::expm1() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_expm1_b363d6ebd90353bf]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::floor() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_floor_b363d6ebd90353bf]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldDerivativeStructure::getAllDerivatives() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAllDerivatives_94ed2e0620f8833d]));
        }

        jint FieldDerivativeStructure::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_d6ab429752e7c267]);
        }

        ::org::hipparchus::analysis::differentiation::FDSFactory FieldDerivativeStructure::getFactory() const
        {
          return ::org::hipparchus::analysis::differentiation::FDSFactory(env->callObjectMethod(this$, mids$[mid_getFactory_062ce4da311add4a]));
        }

        ::org::hipparchus::Field FieldDerivativeStructure::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_577649682b9910c1]));
        }

        jint FieldDerivativeStructure::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_d6ab429752e7c267]);
        }

        jint FieldDerivativeStructure::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_d6ab429752e7c267]);
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivativeStructure::getPartialDerivative(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPartialDerivative_15bad9d0870b63aa], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::getPi() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPi_b363d6ebd90353bf]));
        }

        jdouble FieldDerivativeStructure::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_9981f74b2d109da6]);
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivativeStructure::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_08d37e3f77b7239d]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::hypot(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_hypot_487b1f7c3947c77e], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::hypot(const FieldDerivativeStructure & a0, const FieldDerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldDerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_hypot_181f907a7807ecb9], a0.this$, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::integrate(jint a0, jint a1) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_integrate_a8407627cfbfe04d], a0, a1));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const JArray< jdouble > & a0, const JArray< FieldDerivativeStructure > & a1) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_352aef28373c8de7], a0.this$, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< FieldDerivativeStructure > & a1) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_d5c28220ece11c9c], a0.this$, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const JArray< FieldDerivativeStructure > & a0, const JArray< FieldDerivativeStructure > & a1) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_d0d594ae934fc556], a0.this$, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const FieldDerivativeStructure & a0, const FieldDerivativeStructure & a1, const FieldDerivativeStructure & a2, const FieldDerivativeStructure & a3) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_d252a90dc5fff150], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(jdouble a0, const FieldDerivativeStructure & a1, jdouble a2, const FieldDerivativeStructure & a3) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_281c06dc1ecc5a27], a0, a1.this$, a2, a3.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldDerivativeStructure & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldDerivativeStructure & a3) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_9993f4a509b1c911], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const FieldDerivativeStructure & a0, const FieldDerivativeStructure & a1, const FieldDerivativeStructure & a2, const FieldDerivativeStructure & a3, const FieldDerivativeStructure & a4, const FieldDerivativeStructure & a5) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_064b23b9dab00b0a], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(jdouble a0, const FieldDerivativeStructure & a1, jdouble a2, const FieldDerivativeStructure & a3, jdouble a4, const FieldDerivativeStructure & a5) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_5b33ce939db205a6], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldDerivativeStructure & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldDerivativeStructure & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldDerivativeStructure & a5) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_3a7eeb579ba49118], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const FieldDerivativeStructure & a0, const FieldDerivativeStructure & a1, const FieldDerivativeStructure & a2, const FieldDerivativeStructure & a3, const FieldDerivativeStructure & a4, const FieldDerivativeStructure & a5, const FieldDerivativeStructure & a6, const FieldDerivativeStructure & a7) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_d19785b9f9c531df], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(jdouble a0, const FieldDerivativeStructure & a1, jdouble a2, const FieldDerivativeStructure & a3, jdouble a4, const FieldDerivativeStructure & a5, jdouble a6, const FieldDerivativeStructure & a7) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_118779bf592933ad], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldDerivativeStructure & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldDerivativeStructure & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldDerivativeStructure & a5, const ::org::hipparchus::CalculusFieldElement & a6, const FieldDerivativeStructure & a7) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_a5b0290c137d6bb7], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::log() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_log_b363d6ebd90353bf]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::log10() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_log10_b363d6ebd90353bf]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::log1p() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_log1p_b363d6ebd90353bf]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::multiply(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_487b1f7c3947c77e], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::multiply(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_b9026a046a147de2], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::multiply(jint a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_14f0e73adde16f83], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::multiply(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_ca7a13fcccfd32de], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::negate() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_negate_b363d6ebd90353bf]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::newInstance(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_newInstance_b9026a046a147de2], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::pow(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_487b1f7c3947c77e], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::pow(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_b9026a046a147de2], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::pow(jint a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_14f0e73adde16f83], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::pow(jdouble a0, const FieldDerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldDerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_pow_f6578b77b0bf574a], a0, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::rebase(const JArray< FieldDerivativeStructure > & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_rebase_d47edc631539de98], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::reciprocal() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_reciprocal_b363d6ebd90353bf]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::remainder(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_remainder_487b1f7c3947c77e], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::remainder(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_remainder_b9026a046a147de2], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::remainder(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_remainder_ca7a13fcccfd32de], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::rint() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_rint_b363d6ebd90353bf]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::rootN(jint a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_rootN_14f0e73adde16f83], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::scalb(jint a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_scalb_14f0e73adde16f83], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::sign() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_sign_b363d6ebd90353bf]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::sin() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_sin_b363d6ebd90353bf]));
        }

        ::org::hipparchus::util::FieldSinCos FieldDerivativeStructure::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_31b7b02b4932da60]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::sinh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_sinh_b363d6ebd90353bf]));
        }

        ::org::hipparchus::util::FieldSinhCosh FieldDerivativeStructure::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_b24d5962ea451135]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::sqrt() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_sqrt_b363d6ebd90353bf]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::subtract(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_subtract_487b1f7c3947c77e], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::subtract(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_subtract_b9026a046a147de2], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::subtract(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_subtract_ca7a13fcccfd32de], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::tan() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_tan_b363d6ebd90353bf]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::tanh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_tanh_b363d6ebd90353bf]));
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivativeStructure::taylor(const JArray< jdouble > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_882fb3b536492986], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivativeStructure::taylor(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_c04968ee695d037c], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::toDegrees() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDegrees_b363d6ebd90353bf]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::toRadians() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toRadians_b363d6ebd90353bf]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::ulp() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_ulp_b363d6ebd90353bf]));
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
        static PyObject *t_FieldDerivativeStructure_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_of_(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_abs(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_acos(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_acosh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_add(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_asin(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_asinh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_atan(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_atan2(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_atan2_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_atanh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_cbrt(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_ceil(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_compose(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_copySign(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_cos(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_cosh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_differentiate(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_divide(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_exp(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_expm1(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_floor(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getAllDerivatives(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getExponent(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getFactory(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getField(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getFreeParameters(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getOrder(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getPartialDerivative(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_getPi(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getReal(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getValue(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_hypot(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_hypot_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_integrate(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_linearCombination(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_log(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_log10(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_log1p(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_multiply(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_negate(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_newInstance(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_pow(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_rebase(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_reciprocal(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_remainder(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_rint(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_rootN(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_scalb(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_sign(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_sin(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_sinCos(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_sinh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_sinhCosh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_sqrt(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_subtract(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_tan(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_tanh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_taylor(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_toDegrees(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_toRadians(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_ulp(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_get__allDerivatives(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__exponent(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__factory(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__field(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__freeParameters(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__order(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__pi(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__real(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__value(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__parameters_(t_FieldDerivativeStructure *self, void *data);
        static PyGetSetDef t_FieldDerivativeStructure__fields_[] = {
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, allDerivatives),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, exponent),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, factory),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, field),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, freeParameters),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, order),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, pi),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, real),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, value),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldDerivativeStructure__methods_[] = {
          DECLARE_METHOD(t_FieldDerivativeStructure, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivativeStructure, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivativeStructure, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, abs, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, acos, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, acosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, add, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, asin, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, asinh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, atan, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, atan2, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, atan2_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivativeStructure, atanh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, cbrt, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, ceil, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, compose, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, copySign, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, cos, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, cosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, differentiate, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, divide, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, exp, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, expm1, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, floor, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getAllDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getFactory, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getField, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, getPi, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getReal, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getValue, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, hypot, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, hypot_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivativeStructure, integrate, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, log, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, log10, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, log1p, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, multiply, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, negate, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, newInstance, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, pow, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivativeStructure, rebase, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, reciprocal, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, remainder, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, rint, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, rootN, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, scalb, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, sign, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, sin, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, sinCos, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, sinh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, sinhCosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, sqrt, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, subtract, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, tan, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, tanh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, taylor, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, toDegrees, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, toRadians, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, ulp, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldDerivativeStructure)[] = {
          { Py_tp_methods, t_FieldDerivativeStructure__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldDerivativeStructure__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldDerivativeStructure)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldDerivativeStructure, t_FieldDerivativeStructure, FieldDerivativeStructure);
        PyObject *t_FieldDerivativeStructure::wrap_Object(const FieldDerivativeStructure& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDerivativeStructure::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDerivativeStructure *self = (t_FieldDerivativeStructure *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldDerivativeStructure::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDerivativeStructure::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDerivativeStructure *self = (t_FieldDerivativeStructure *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldDerivativeStructure::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldDerivativeStructure), &PY_TYPE_DEF(FieldDerivativeStructure), module, "FieldDerivativeStructure", 0);
        }

        void t_FieldDerivativeStructure::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivativeStructure), "class_", make_descriptor(FieldDerivativeStructure::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivativeStructure), "wrapfn_", make_descriptor(t_FieldDerivativeStructure::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivativeStructure), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldDerivativeStructure_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldDerivativeStructure::initializeClass, 1)))
            return NULL;
          return t_FieldDerivativeStructure::wrap_Object(FieldDerivativeStructure(((t_FieldDerivativeStructure *) arg)->object.this$));
        }
        static PyObject *t_FieldDerivativeStructure_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldDerivativeStructure::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldDerivativeStructure_of_(t_FieldDerivativeStructure *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldDerivativeStructure_abs(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.abs());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_acos(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.acos());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_acosh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.acosh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_add(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_asin(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.asin());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_asinh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.asinh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_atan(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.atan());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_atan2(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          FieldDerivativeStructure a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_atan2_(PyTypeObject *type, PyObject *args)
        {
          FieldDerivativeStructure a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDerivativeStructure a1((jobject) NULL);
          PyTypeObject **p1;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "KK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::atan2(a0, a1));
            return t_FieldDerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "atan2_", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_atanh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.atanh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_cbrt(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cbrt());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_ceil(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.ceil());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_compose(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.compose(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.compose(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "compose", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_copySign(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "copySign", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_cos(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cos());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_cosh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cosh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_differentiate(t_FieldDerivativeStructure *self, PyObject *args)
        {
          jint a0;
          jint a1;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.differentiate(a0, a1));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "differentiate", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_divide(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_exp(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.exp());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_expm1(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.expm1());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_floor(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.floor());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_getAllDerivatives(t_FieldDerivativeStructure *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllDerivatives());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldDerivativeStructure_getExponent(t_FieldDerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getExponent());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldDerivativeStructure_getFactory(t_FieldDerivativeStructure *self)
        {
          ::org::hipparchus::analysis::differentiation::FDSFactory result((jobject) NULL);
          OBJ_CALL(result = self->object.getFactory());
          return ::org::hipparchus::analysis::differentiation::t_FDSFactory::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_getField(t_FieldDerivativeStructure *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result);
        }

        static PyObject *t_FieldDerivativeStructure_getFreeParameters(t_FieldDerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldDerivativeStructure_getOrder(t_FieldDerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldDerivativeStructure_getPartialDerivative(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_getPi(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_getReal(t_FieldDerivativeStructure *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReal());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldDerivativeStructure_getValue(t_FieldDerivativeStructure *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldDerivativeStructure_hypot(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          FieldDerivativeStructure a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "hypot", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_hypot_(PyTypeObject *type, PyObject *args)
        {
          FieldDerivativeStructure a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDerivativeStructure a1((jobject) NULL);
          PyTypeObject **p1;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "KK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::hypot(a0, a1));
            return t_FieldDerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "hypot_", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_integrate(t_FieldDerivativeStructure *self, PyObject *args)
        {
          jint a0;
          jint a1;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_linearCombination(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< FieldDerivativeStructure > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[D[K", FieldDerivativeStructure::initializeClass, &a0, &a1, &p1, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldDerivativeStructure > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< FieldDerivativeStructure > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldDerivativeStructure > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[K[K", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 4:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, t_FieldDerivativeStructure::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DKDK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &a3, &p3, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 6:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              FieldDerivativeStructure a4((jobject) NULL);
              PyTypeObject **p4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, t_FieldDerivativeStructure::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &p4, t_FieldDerivativeStructure::parameters_, &a5, &p5, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DKDKDK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &a5, &p5, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 8:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              FieldDerivativeStructure a4((jobject) NULL);
              PyTypeObject **p4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              FieldDerivativeStructure a6((jobject) NULL);
              PyTypeObject **p6;
              FieldDerivativeStructure a7((jobject) NULL);
              PyTypeObject **p7;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, t_FieldDerivativeStructure::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &p4, t_FieldDerivativeStructure::parameters_, &a5, &p5, t_FieldDerivativeStructure::parameters_, &a6, &p6, t_FieldDerivativeStructure::parameters_, &a7, &p7, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              FieldDerivativeStructure a7((jobject) NULL);
              PyTypeObject **p7;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DKDKDKDK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &a5, &p5, t_FieldDerivativeStructure::parameters_, &a6, &a7, &p7, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
              PyTypeObject **p6;
              FieldDerivativeStructure a7((jobject) NULL);
              PyTypeObject **p7;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldDerivativeStructure::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_log(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_log10(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log10());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_log1p(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log1p());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_multiply(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_negate(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_newInstance(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          jdouble a0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_pow(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          FieldDerivativeStructure a1((jobject) NULL);
          PyTypeObject **p1;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "DK", FieldDerivativeStructure::initializeClass, &a0, &a1, &p1, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::pow(a0, a1));
            return t_FieldDerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_rebase(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          JArray< FieldDerivativeStructure > a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "[K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = self->object.rebase(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "rebase", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_reciprocal(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.reciprocal());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_remainder(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_rint(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.rint());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_rootN(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          jint a0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_scalb(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          jint a0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "scalb", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_sign(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sign());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_sin(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sin());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_sinCos(t_FieldDerivativeStructure *self)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
          OBJ_CALL(result = self->object.sinCos());
          return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
        }

        static PyObject *t_FieldDerivativeStructure_sinh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sinh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_sinhCosh(t_FieldDerivativeStructure *self)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
          OBJ_CALL(result = self->object.sinhCosh());
          return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
        }

        static PyObject *t_FieldDerivativeStructure_sqrt(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sqrt());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_subtract(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_tan(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.tan());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_tanh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.tanh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_taylor(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_toDegrees(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDegrees());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_toRadians(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toRadians());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_ulp(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.ulp());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_FieldDerivativeStructure_get__parameters_(t_FieldDerivativeStructure *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldDerivativeStructure_get__allDerivatives(t_FieldDerivativeStructure *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllDerivatives());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldDerivativeStructure_get__exponent(t_FieldDerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldDerivativeStructure_get__factory(t_FieldDerivativeStructure *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FDSFactory value((jobject) NULL);
          OBJ_CALL(value = self->object.getFactory());
          return ::org::hipparchus::analysis::differentiation::t_FDSFactory::wrap_Object(value);
        }

        static PyObject *t_FieldDerivativeStructure_get__field(t_FieldDerivativeStructure *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_FieldDerivativeStructure_get__freeParameters(t_FieldDerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldDerivativeStructure_get__order(t_FieldDerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldDerivativeStructure_get__pi(t_FieldDerivativeStructure *self, void *data)
        {
          FieldDerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_FieldDerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_FieldDerivativeStructure_get__real(t_FieldDerivativeStructure *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldDerivativeStructure_get__value(t_FieldDerivativeStructure *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/PointingPanel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *PointingPanel::class$ = NULL;
      jmethodID *PointingPanel::mids$ = NULL;
      bool PointingPanel::live$ = false;

      jclass PointingPanel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/PointingPanel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f6a2b5b8b455669a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;DDDDD)V");
          mids$[mid_getNormal_ee088fe02cdd6745] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getNormal_38283c57554889c0] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PointingPanel::PointingPanel(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::org::orekit::forces::Panel(env->newObject(initializeClass, &mids$, mid_init$_f6a2b5b8b455669a, a0.this$, a1.this$, a2, a3, a4, a5, a6)) {}

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PointingPanel::getNormal(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNormal_ee088fe02cdd6745], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PointingPanel::getNormal(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNormal_38283c57554889c0], a0.this$));
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
      static PyObject *t_PointingPanel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PointingPanel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PointingPanel_init_(t_PointingPanel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PointingPanel_getNormal(t_PointingPanel *self, PyObject *args);

      static PyMethodDef t_PointingPanel__methods_[] = {
        DECLARE_METHOD(t_PointingPanel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PointingPanel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PointingPanel, getNormal, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PointingPanel)[] = {
        { Py_tp_methods, t_PointingPanel__methods_ },
        { Py_tp_init, (void *) t_PointingPanel_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PointingPanel)[] = {
        &PY_TYPE_DEF(::org::orekit::forces::Panel),
        NULL
      };

      DEFINE_TYPE(PointingPanel, t_PointingPanel, PointingPanel);

      void t_PointingPanel::install(PyObject *module)
      {
        installType(&PY_TYPE(PointingPanel), &PY_TYPE_DEF(PointingPanel), module, "PointingPanel", 0);
      }

      void t_PointingPanel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointingPanel), "class_", make_descriptor(PointingPanel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointingPanel), "wrapfn_", make_descriptor(t_PointingPanel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointingPanel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PointingPanel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PointingPanel::initializeClass, 1)))
          return NULL;
        return t_PointingPanel::wrap_Object(PointingPanel(((t_PointingPanel *) arg)->object.this$));
      }
      static PyObject *t_PointingPanel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PointingPanel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PointingPanel_init_(t_PointingPanel *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        ::org::orekit::utils::ExtendedPVCoordinatesProvider a1((jobject) NULL);
        jdouble a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        PointingPanel object((jobject) NULL);

        if (!parseArgs(args, "kkDDDDD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
        {
          INT_CALL(object = PointingPanel(a0, a1, a2, a3, a4, a5, a6));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_PointingPanel_getNormal(t_PointingPanel *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(result = self->object.getNormal(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNormal(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(PointingPanel), (PyObject *) self, "getNormal", args, 2);
      }
    }
  }
}

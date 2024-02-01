#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/oned/Interval.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *Interval::class$ = NULL;
          jmethodID *Interval::mids$ = NULL;
          bool Interval::live$ = false;

          jclass Interval::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/Interval");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
              mids$[mid_checkPoint_f2abc4661427e1b1] = env->getMethodID(cls, "checkPoint", "(DD)Lorg/hipparchus/geometry/partitioning/Region$Location;");
              mids$[mid_getBarycenter_9981f74b2d109da6] = env->getMethodID(cls, "getBarycenter", "()D");
              mids$[mid_getInf_9981f74b2d109da6] = env->getMethodID(cls, "getInf", "()D");
              mids$[mid_getSize_9981f74b2d109da6] = env->getMethodID(cls, "getSize", "()D");
              mids$[mid_getSup_9981f74b2d109da6] = env->getMethodID(cls, "getSup", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Interval::Interval(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

          ::org::hipparchus::geometry::partitioning::Region$Location Interval::checkPoint(jdouble a0, jdouble a1) const
          {
            return ::org::hipparchus::geometry::partitioning::Region$Location(env->callObjectMethod(this$, mids$[mid_checkPoint_f2abc4661427e1b1], a0, a1));
          }

          jdouble Interval::getBarycenter() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBarycenter_9981f74b2d109da6]);
          }

          jdouble Interval::getInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getInf_9981f74b2d109da6]);
          }

          jdouble Interval::getSize() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSize_9981f74b2d109da6]);
          }

          jdouble Interval::getSup() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSup_9981f74b2d109da6]);
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
        namespace oned {
          static PyObject *t_Interval_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Interval_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Interval_init_(t_Interval *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Interval_checkPoint(t_Interval *self, PyObject *args);
          static PyObject *t_Interval_getBarycenter(t_Interval *self);
          static PyObject *t_Interval_getInf(t_Interval *self);
          static PyObject *t_Interval_getSize(t_Interval *self);
          static PyObject *t_Interval_getSup(t_Interval *self);
          static PyObject *t_Interval_get__barycenter(t_Interval *self, void *data);
          static PyObject *t_Interval_get__inf(t_Interval *self, void *data);
          static PyObject *t_Interval_get__size(t_Interval *self, void *data);
          static PyObject *t_Interval_get__sup(t_Interval *self, void *data);
          static PyGetSetDef t_Interval__fields_[] = {
            DECLARE_GET_FIELD(t_Interval, barycenter),
            DECLARE_GET_FIELD(t_Interval, inf),
            DECLARE_GET_FIELD(t_Interval, size),
            DECLARE_GET_FIELD(t_Interval, sup),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Interval__methods_[] = {
            DECLARE_METHOD(t_Interval, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Interval, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Interval, checkPoint, METH_VARARGS),
            DECLARE_METHOD(t_Interval, getBarycenter, METH_NOARGS),
            DECLARE_METHOD(t_Interval, getInf, METH_NOARGS),
            DECLARE_METHOD(t_Interval, getSize, METH_NOARGS),
            DECLARE_METHOD(t_Interval, getSup, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Interval)[] = {
            { Py_tp_methods, t_Interval__methods_ },
            { Py_tp_init, (void *) t_Interval_init_ },
            { Py_tp_getset, t_Interval__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Interval)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Interval, t_Interval, Interval);

          void t_Interval::install(PyObject *module)
          {
            installType(&PY_TYPE(Interval), &PY_TYPE_DEF(Interval), module, "Interval", 0);
          }

          void t_Interval::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Interval), "class_", make_descriptor(Interval::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Interval), "wrapfn_", make_descriptor(t_Interval::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Interval), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Interval_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Interval::initializeClass, 1)))
              return NULL;
            return t_Interval::wrap_Object(Interval(((t_Interval *) arg)->object.this$));
          }
          static PyObject *t_Interval_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Interval::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Interval_init_(t_Interval *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            Interval object((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              INT_CALL(object = Interval(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Interval_checkPoint(t_Interval *self, PyObject *args)
          {
            jdouble a0;
            jdouble a1;
            ::org::hipparchus::geometry::partitioning::Region$Location result((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = self->object.checkPoint(a0, a1));
              return ::org::hipparchus::geometry::partitioning::t_Region$Location::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "checkPoint", args);
            return NULL;
          }

          static PyObject *t_Interval_getBarycenter(t_Interval *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBarycenter());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Interval_getInf(t_Interval *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Interval_getSize(t_Interval *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSize());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Interval_getSup(t_Interval *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSup());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Interval_get__barycenter(t_Interval *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBarycenter());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Interval_get__inf(t_Interval *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Interval_get__size(t_Interval *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSize());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Interval_get__sup(t_Interval *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSup());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/FieldTrackingCoordinates.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TrackingCoordinates.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *TopocentricFrame::class$ = NULL;
      jmethodID *TopocentricFrame::mids$ = NULL;
      bool TopocentricFrame::live$ = false;

      jclass TopocentricFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/TopocentricFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_13cf7cb6a56f5a80] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/BodyShape;Lorg/orekit/bodies/GeodeticPoint;Ljava/lang/String;)V");
          mids$[mid_computeLimitVisibilityPoint_b5f28aaa3cf2ecb4] = env->getMethodID(cls, "computeLimitVisibilityPoint", "(DDD)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getAzimuth_6de8bf4681bff197] = env->getMethodID(cls, "getAzimuth", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getAzimuth_755a202772a3b64e] = env->getMethodID(cls, "getAzimuth", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCartesianPoint_032312bdeb3f2f93] = env->getMethodID(cls, "getCartesianPoint", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getEast_032312bdeb3f2f93] = env->getMethodID(cls, "getEast", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getElevation_755a202772a3b64e] = env->getMethodID(cls, "getElevation", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getElevation_6de8bf4681bff197] = env->getMethodID(cls, "getElevation", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getNadir_032312bdeb3f2f93] = env->getMethodID(cls, "getNadir", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getNorth_032312bdeb3f2f93] = env->getMethodID(cls, "getNorth", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPVCoordinates_6236a35378ed47a5] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getParentShape_6f2d25f6f71d01ca] = env->getMethodID(cls, "getParentShape", "()Lorg/orekit/bodies/BodyShape;");
          mids$[mid_getPoint_bdca252cae79438c] = env->getMethodID(cls, "getPoint", "()Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getPoint_d09f9a5f23288a12] = env->getMethodID(cls, "getPoint", "(Lorg/hipparchus/Field;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_getPosition_abe01c75f7e82353] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getRange_755a202772a3b64e] = env->getMethodID(cls, "getRange", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRange_6de8bf4681bff197] = env->getMethodID(cls, "getRange", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getRangeRate_ecaa5202c9765db9] = env->getMethodID(cls, "getRangeRate", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRangeRate_ca0e04919483eecd] = env->getMethodID(cls, "getRangeRate", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getSouth_032312bdeb3f2f93] = env->getMethodID(cls, "getSouth", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getTrackingCoordinates_3c1e226d9659d04e] = env->getMethodID(cls, "getTrackingCoordinates", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TrackingCoordinates;");
          mids$[mid_getTrackingCoordinates_e722131265d68a84] = env->getMethodID(cls, "getTrackingCoordinates", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/utils/FieldTrackingCoordinates;");
          mids$[mid_getWest_032312bdeb3f2f93] = env->getMethodID(cls, "getWest", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getZenith_032312bdeb3f2f93] = env->getMethodID(cls, "getZenith", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_pointAtDistance_b5f28aaa3cf2ecb4] = env->getMethodID(cls, "pointAtDistance", "(DDD)Lorg/orekit/bodies/GeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TopocentricFrame::TopocentricFrame(const ::org::orekit::bodies::BodyShape & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::java::lang::String & a2) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_13cf7cb6a56f5a80, a0.this$, a1.this$, a2.this$)) {}

      ::org::orekit::bodies::GeodeticPoint TopocentricFrame::computeLimitVisibilityPoint(jdouble a0, jdouble a1, jdouble a2) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_computeLimitVisibilityPoint_b5f28aaa3cf2ecb4], a0, a1, a2));
      }

      jdouble TopocentricFrame::getAzimuth(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAzimuth_6de8bf4681bff197], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement TopocentricFrame::getAzimuth(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAzimuth_755a202772a3b64e], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getCartesianPoint() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCartesianPoint_032312bdeb3f2f93]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getEast() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEast_032312bdeb3f2f93]));
      }

      ::org::hipparchus::CalculusFieldElement TopocentricFrame::getElevation(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getElevation_755a202772a3b64e], a0.this$, a1.this$, a2.this$));
      }

      jdouble TopocentricFrame::getElevation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getElevation_6de8bf4681bff197], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getNadir() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNadir_032312bdeb3f2f93]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getNorth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNorth_032312bdeb3f2f93]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates TopocentricFrame::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_6236a35378ed47a5], a0.this$, a1.this$));
      }

      ::org::orekit::bodies::BodyShape TopocentricFrame::getParentShape() const
      {
        return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getParentShape_6f2d25f6f71d01ca]));
      }

      ::org::orekit::bodies::GeodeticPoint TopocentricFrame::getPoint() const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getPoint_bdca252cae79438c]));
      }

      ::org::orekit::bodies::FieldGeodeticPoint TopocentricFrame::getPoint(const ::org::hipparchus::Field & a0) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_getPoint_d09f9a5f23288a12], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getPosition(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_abe01c75f7e82353], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement TopocentricFrame::getRange(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRange_755a202772a3b64e], a0.this$, a1.this$, a2.this$));
      }

      jdouble TopocentricFrame::getRange(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRange_6de8bf4681bff197], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement TopocentricFrame::getRangeRate(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRangeRate_ecaa5202c9765db9], a0.this$, a1.this$, a2.this$));
      }

      jdouble TopocentricFrame::getRangeRate(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRangeRate_ca0e04919483eecd], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getSouth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getSouth_032312bdeb3f2f93]));
      }

      ::org::orekit::utils::TrackingCoordinates TopocentricFrame::getTrackingCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::orekit::utils::TrackingCoordinates(env->callObjectMethod(this$, mids$[mid_getTrackingCoordinates_3c1e226d9659d04e], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::FieldTrackingCoordinates TopocentricFrame::getTrackingCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::orekit::utils::FieldTrackingCoordinates(env->callObjectMethod(this$, mids$[mid_getTrackingCoordinates_e722131265d68a84], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getWest() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getWest_032312bdeb3f2f93]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getZenith() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getZenith_032312bdeb3f2f93]));
      }

      ::org::orekit::bodies::GeodeticPoint TopocentricFrame::pointAtDistance(jdouble a0, jdouble a1, jdouble a2) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_pointAtDistance_b5f28aaa3cf2ecb4], a0, a1, a2));
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
      static PyObject *t_TopocentricFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TopocentricFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TopocentricFrame_init_(t_TopocentricFrame *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TopocentricFrame_computeLimitVisibilityPoint(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getAzimuth(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getCartesianPoint(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getEast(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getElevation(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getNadir(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getNorth(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getPVCoordinates(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getParentShape(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getPoint(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getPosition(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getRange(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getRangeRate(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getSouth(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getTrackingCoordinates(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getWest(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getZenith(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_pointAtDistance(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_get__cartesianPoint(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__east(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__nadir(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__north(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__parentShape(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__point(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__south(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__west(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__zenith(t_TopocentricFrame *self, void *data);
      static PyGetSetDef t_TopocentricFrame__fields_[] = {
        DECLARE_GET_FIELD(t_TopocentricFrame, cartesianPoint),
        DECLARE_GET_FIELD(t_TopocentricFrame, east),
        DECLARE_GET_FIELD(t_TopocentricFrame, nadir),
        DECLARE_GET_FIELD(t_TopocentricFrame, north),
        DECLARE_GET_FIELD(t_TopocentricFrame, parentShape),
        DECLARE_GET_FIELD(t_TopocentricFrame, point),
        DECLARE_GET_FIELD(t_TopocentricFrame, south),
        DECLARE_GET_FIELD(t_TopocentricFrame, west),
        DECLARE_GET_FIELD(t_TopocentricFrame, zenith),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TopocentricFrame__methods_[] = {
        DECLARE_METHOD(t_TopocentricFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TopocentricFrame, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TopocentricFrame, computeLimitVisibilityPoint, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getAzimuth, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getCartesianPoint, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getEast, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getElevation, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getNadir, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getNorth, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getParentShape, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getPoint, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getRange, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getRangeRate, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getSouth, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getTrackingCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getWest, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getZenith, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, pointAtDistance, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TopocentricFrame)[] = {
        { Py_tp_methods, t_TopocentricFrame__methods_ },
        { Py_tp_init, (void *) t_TopocentricFrame_init_ },
        { Py_tp_getset, t_TopocentricFrame__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TopocentricFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(TopocentricFrame, t_TopocentricFrame, TopocentricFrame);

      void t_TopocentricFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(TopocentricFrame), &PY_TYPE_DEF(TopocentricFrame), module, "TopocentricFrame", 0);
      }

      void t_TopocentricFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TopocentricFrame), "class_", make_descriptor(TopocentricFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TopocentricFrame), "wrapfn_", make_descriptor(t_TopocentricFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TopocentricFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TopocentricFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TopocentricFrame::initializeClass, 1)))
          return NULL;
        return t_TopocentricFrame::wrap_Object(TopocentricFrame(((t_TopocentricFrame *) arg)->object.this$));
      }
      static PyObject *t_TopocentricFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TopocentricFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TopocentricFrame_init_(t_TopocentricFrame *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::BodyShape a0((jobject) NULL);
        ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        TopocentricFrame object((jobject) NULL);

        if (!parseArgs(args, "kks", ::org::orekit::bodies::BodyShape::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = TopocentricFrame(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TopocentricFrame_computeLimitVisibilityPoint(t_TopocentricFrame *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.computeLimitVisibilityPoint(a0, a1, a2));
          return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "computeLimitVisibilityPoint", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getAzimuth(t_TopocentricFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getAzimuth(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAzimuth(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAzimuth", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getCartesianPoint(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getCartesianPoint());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getEast(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getEast());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getElevation(t_TopocentricFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getElevation(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getElevation(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getElevation", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getNadir(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getNadir());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getNorth(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getNorth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getPVCoordinates(t_TopocentricFrame *self, PyObject *args)
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

      static PyObject *t_TopocentricFrame_getParentShape(t_TopocentricFrame *self)
      {
        ::org::orekit::bodies::BodyShape result((jobject) NULL);
        OBJ_CALL(result = self->object.getParentShape());
        return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getPoint(t_TopocentricFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.getPoint());
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getPoint(a0));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPoint", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getPosition(t_TopocentricFrame *self, PyObject *args)
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

      static PyObject *t_TopocentricFrame_getRange(t_TopocentricFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getRange(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getRange(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getRange", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getRangeRate(t_TopocentricFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getRangeRate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getRangeRate(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getRangeRate", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getSouth(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getSouth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getTrackingCoordinates(t_TopocentricFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldTrackingCoordinates result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTrackingCoordinates(a0, a1, a2));
              return ::org::orekit::utils::t_FieldTrackingCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::utils::TrackingCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getTrackingCoordinates(a0, a1, a2));
              return ::org::orekit::utils::t_TrackingCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTrackingCoordinates", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getWest(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getWest());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getZenith(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getZenith());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_pointAtDistance(t_TopocentricFrame *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.pointAtDistance(a0, a1, a2));
          return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "pointAtDistance", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_get__cartesianPoint(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getCartesianPoint());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__east(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getEast());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__nadir(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getNadir());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__north(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getNorth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__parentShape(t_TopocentricFrame *self, void *data)
      {
        ::org::orekit::bodies::BodyShape value((jobject) NULL);
        OBJ_CALL(value = self->object.getParentShape());
        return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__point(t_TopocentricFrame *self, void *data)
      {
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        OBJ_CALL(value = self->object.getPoint());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__south(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getSouth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__west(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getWest());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__zenith(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getZenith());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/FieldOrbitHermiteInterpolator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldOrbitHermiteInterpolator::class$ = NULL;
      jmethodID *FieldOrbitHermiteInterpolator::mids$ = NULL;
      bool FieldOrbitHermiteInterpolator::live$ = false;

      jclass FieldOrbitHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldOrbitHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9725b246c9e25f68] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_b744963488fb11c5] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_77d14de7cb3c9585] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_d72d0265fbc6575b] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getPVAFilter_b9dfc27d8c56b5de] = env->getMethodID(cls, "getPVAFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_interpolate_cb3bc2d787cce5ef] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/orbits/FieldOrbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldOrbitHermiteInterpolator::FieldOrbitHermiteInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_9725b246c9e25f68, a0.this$)) {}

      FieldOrbitHermiteInterpolator::FieldOrbitHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_b744963488fb11c5, a0, a1.this$)) {}

      FieldOrbitHermiteInterpolator::FieldOrbitHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_77d14de7cb3c9585, a0, a1.this$, a2.this$)) {}

      FieldOrbitHermiteInterpolator::FieldOrbitHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_d72d0265fbc6575b, a0, a1, a2.this$, a3.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter FieldOrbitHermiteInterpolator::getPVAFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getPVAFilter_b9dfc27d8c56b5de]));
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
      static PyObject *t_FieldOrbitHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbitHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbitHermiteInterpolator_of_(t_FieldOrbitHermiteInterpolator *self, PyObject *args);
      static int t_FieldOrbitHermiteInterpolator_init_(t_FieldOrbitHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldOrbitHermiteInterpolator_getPVAFilter(t_FieldOrbitHermiteInterpolator *self);
      static PyObject *t_FieldOrbitHermiteInterpolator_get__pVAFilter(t_FieldOrbitHermiteInterpolator *self, void *data);
      static PyObject *t_FieldOrbitHermiteInterpolator_get__parameters_(t_FieldOrbitHermiteInterpolator *self, void *data);
      static PyGetSetDef t_FieldOrbitHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldOrbitHermiteInterpolator, pVAFilter),
        DECLARE_GET_FIELD(t_FieldOrbitHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldOrbitHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_FieldOrbitHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbitHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbitHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbitHermiteInterpolator, getPVAFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldOrbitHermiteInterpolator)[] = {
        { Py_tp_methods, t_FieldOrbitHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_FieldOrbitHermiteInterpolator_init_ },
        { Py_tp_getset, t_FieldOrbitHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldOrbitHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::AbstractFieldOrbitInterpolator),
        NULL
      };

      DEFINE_TYPE(FieldOrbitHermiteInterpolator, t_FieldOrbitHermiteInterpolator, FieldOrbitHermiteInterpolator);
      PyObject *t_FieldOrbitHermiteInterpolator::wrap_Object(const FieldOrbitHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbitHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbitHermiteInterpolator *self = (t_FieldOrbitHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldOrbitHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbitHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbitHermiteInterpolator *self = (t_FieldOrbitHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldOrbitHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldOrbitHermiteInterpolator), &PY_TYPE_DEF(FieldOrbitHermiteInterpolator), module, "FieldOrbitHermiteInterpolator", 0);
      }

      void t_FieldOrbitHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitHermiteInterpolator), "class_", make_descriptor(FieldOrbitHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitHermiteInterpolator), "wrapfn_", make_descriptor(t_FieldOrbitHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldOrbitHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldOrbitHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_FieldOrbitHermiteInterpolator::wrap_Object(FieldOrbitHermiteInterpolator(((t_FieldOrbitHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_FieldOrbitHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldOrbitHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldOrbitHermiteInterpolator_of_(t_FieldOrbitHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldOrbitHermiteInterpolator_init_(t_FieldOrbitHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            FieldOrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = FieldOrbitHermiteInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            FieldOrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = FieldOrbitHermiteInterpolator(a0, a1));
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
            FieldOrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = FieldOrbitHermiteInterpolator(a0, a1, a2));
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
            FieldOrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = FieldOrbitHermiteInterpolator(a0, a1, a2, a3));
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

      static PyObject *t_FieldOrbitHermiteInterpolator_getPVAFilter(t_FieldOrbitHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getPVAFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_FieldOrbitHermiteInterpolator_get__parameters_(t_FieldOrbitHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldOrbitHermiteInterpolator_get__pVAFilter(t_FieldOrbitHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVAFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/AbstractFieldTimeInterpolator$InterpolationData.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/ImmutableFieldTimeStampedCache.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbstractFieldTimeInterpolator$InterpolationData::class$ = NULL;
      jmethodID *AbstractFieldTimeInterpolator$InterpolationData::mids$ = NULL;
      bool AbstractFieldTimeInterpolator$InterpolationData::live$ = false;

      jclass AbstractFieldTimeInterpolator$InterpolationData::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbstractFieldTimeInterpolator$InterpolationData");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCachedSamples_7a625cd1a51a51f8] = env->getMethodID(cls, "getCachedSamples", "()Lorg/orekit/utils/ImmutableFieldTimeStampedCache;");
          mids$[mid_getField_577649682b9910c1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getInterpolationDate_1fea28374011eef5] = env->getMethodID(cls, "getInterpolationDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getNeighborList_d751c1a57012b438] = env->getMethodID(cls, "getNeighborList", "()Ljava/util/List;");
          mids$[mid_getOne_08d37e3f77b7239d] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getZero_08d37e3f77b7239d] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCentralDate_c9ef185fb7cf50ce] = env->getMethodID(cls, "getCentralDate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/time/FieldAbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::ImmutableFieldTimeStampedCache AbstractFieldTimeInterpolator$InterpolationData::getCachedSamples() const
      {
        return ::org::orekit::utils::ImmutableFieldTimeStampedCache(env->callObjectMethod(this$, mids$[mid_getCachedSamples_7a625cd1a51a51f8]));
      }

      ::org::hipparchus::Field AbstractFieldTimeInterpolator$InterpolationData::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_577649682b9910c1]));
      }

      ::org::orekit::time::FieldAbsoluteDate AbstractFieldTimeInterpolator$InterpolationData::getInterpolationDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getInterpolationDate_1fea28374011eef5]));
      }

      ::java::util::List AbstractFieldTimeInterpolator$InterpolationData::getNeighborList() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNeighborList_d751c1a57012b438]));
      }

      ::org::hipparchus::CalculusFieldElement AbstractFieldTimeInterpolator$InterpolationData::getOne() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOne_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement AbstractFieldTimeInterpolator$InterpolationData::getZero() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getZero_08d37e3f77b7239d]));
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
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_of_(t_AbstractFieldTimeInterpolator$InterpolationData *self, PyObject *args);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getCachedSamples(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getField(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getInterpolationDate(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getNeighborList(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getOne(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getZero(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__cachedSamples(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__field(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__interpolationDate(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__neighborList(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__one(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__zero(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__parameters_(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyGetSetDef t_AbstractFieldTimeInterpolator$InterpolationData__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, cachedSamples),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, field),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, interpolationDate),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, neighborList),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, one),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, zero),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFieldTimeInterpolator$InterpolationData__methods_[] = {
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getCachedSamples, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getField, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getInterpolationDate, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getNeighborList, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getOne, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getZero, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFieldTimeInterpolator$InterpolationData)[] = {
        { Py_tp_methods, t_AbstractFieldTimeInterpolator$InterpolationData__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractFieldTimeInterpolator$InterpolationData__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFieldTimeInterpolator$InterpolationData)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractFieldTimeInterpolator$InterpolationData, t_AbstractFieldTimeInterpolator$InterpolationData, AbstractFieldTimeInterpolator$InterpolationData);
      PyObject *t_AbstractFieldTimeInterpolator$InterpolationData::wrap_Object(const AbstractFieldTimeInterpolator$InterpolationData& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_AbstractFieldTimeInterpolator$InterpolationData::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldTimeInterpolator$InterpolationData *self = (t_AbstractFieldTimeInterpolator$InterpolationData *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_AbstractFieldTimeInterpolator$InterpolationData::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_AbstractFieldTimeInterpolator$InterpolationData::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldTimeInterpolator$InterpolationData *self = (t_AbstractFieldTimeInterpolator$InterpolationData *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_AbstractFieldTimeInterpolator$InterpolationData::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFieldTimeInterpolator$InterpolationData), &PY_TYPE_DEF(AbstractFieldTimeInterpolator$InterpolationData), module, "AbstractFieldTimeInterpolator$InterpolationData", 0);
      }

      void t_AbstractFieldTimeInterpolator$InterpolationData::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator$InterpolationData), "class_", make_descriptor(AbstractFieldTimeInterpolator$InterpolationData::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator$InterpolationData), "wrapfn_", make_descriptor(t_AbstractFieldTimeInterpolator$InterpolationData::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator$InterpolationData), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFieldTimeInterpolator$InterpolationData::initializeClass, 1)))
          return NULL;
        return t_AbstractFieldTimeInterpolator$InterpolationData::wrap_Object(AbstractFieldTimeInterpolator$InterpolationData(((t_AbstractFieldTimeInterpolator$InterpolationData *) arg)->object.this$));
      }
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFieldTimeInterpolator$InterpolationData::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_of_(t_AbstractFieldTimeInterpolator$InterpolationData *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getCachedSamples(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::org::orekit::utils::ImmutableFieldTimeStampedCache result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedSamples());
        return ::org::orekit::utils::t_ImmutableFieldTimeStampedCache::wrap_Object(result, self->parameters[0], self->parameters[1]);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getField(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[1]);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getInterpolationDate(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getInterpolationDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[1]);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getNeighborList(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getNeighborList());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getOne(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getZero(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__parameters_(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__cachedSamples(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::orekit::utils::ImmutableFieldTimeStampedCache value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedSamples());
        return ::org::orekit::utils::t_ImmutableFieldTimeStampedCache::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__field(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__interpolationDate(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getInterpolationDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__neighborList(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getNeighborList());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__one(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__zero(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/hull/ConvexHull.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace hull {

        ::java::lang::Class *ConvexHull::class$ = NULL;
        jmethodID *ConvexHull::mids$ = NULL;
        bool ConvexHull::live$ = false;

        jclass ConvexHull::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/hull/ConvexHull");

            mids$ = new jmethodID[max_mid];
            mids$[mid_createRegion_3069dff3a674defc] = env->getMethodID(cls, "createRegion", "()Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_getVertices_b82b5fae3ca878b3] = env->getMethodID(cls, "getVertices", "()[Lorg/hipparchus/geometry/Point;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::partitioning::Region ConvexHull::createRegion() const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_createRegion_3069dff3a674defc]));
        }

        JArray< ::org::hipparchus::geometry::Point > ConvexHull::getVertices() const
        {
          return JArray< ::org::hipparchus::geometry::Point >(env->callObjectMethod(this$, mids$[mid_getVertices_b82b5fae3ca878b3]));
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
      namespace hull {
        static PyObject *t_ConvexHull_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConvexHull_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConvexHull_of_(t_ConvexHull *self, PyObject *args);
        static PyObject *t_ConvexHull_createRegion(t_ConvexHull *self);
        static PyObject *t_ConvexHull_getVertices(t_ConvexHull *self);
        static PyObject *t_ConvexHull_get__vertices(t_ConvexHull *self, void *data);
        static PyObject *t_ConvexHull_get__parameters_(t_ConvexHull *self, void *data);
        static PyGetSetDef t_ConvexHull__fields_[] = {
          DECLARE_GET_FIELD(t_ConvexHull, vertices),
          DECLARE_GET_FIELD(t_ConvexHull, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConvexHull__methods_[] = {
          DECLARE_METHOD(t_ConvexHull, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConvexHull, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConvexHull, of_, METH_VARARGS),
          DECLARE_METHOD(t_ConvexHull, createRegion, METH_NOARGS),
          DECLARE_METHOD(t_ConvexHull, getVertices, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConvexHull)[] = {
          { Py_tp_methods, t_ConvexHull__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ConvexHull__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConvexHull)[] = {
          &PY_TYPE_DEF(::java::io::Serializable),
          NULL
        };

        DEFINE_TYPE(ConvexHull, t_ConvexHull, ConvexHull);
        PyObject *t_ConvexHull::wrap_Object(const ConvexHull& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_ConvexHull::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ConvexHull *self = (t_ConvexHull *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_ConvexHull::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_ConvexHull::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ConvexHull *self = (t_ConvexHull *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_ConvexHull::install(PyObject *module)
        {
          installType(&PY_TYPE(ConvexHull), &PY_TYPE_DEF(ConvexHull), module, "ConvexHull", 0);
        }

        void t_ConvexHull::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull), "class_", make_descriptor(ConvexHull::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull), "wrapfn_", make_descriptor(t_ConvexHull::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConvexHull_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConvexHull::initializeClass, 1)))
            return NULL;
          return t_ConvexHull::wrap_Object(ConvexHull(((t_ConvexHull *) arg)->object.this$));
        }
        static PyObject *t_ConvexHull_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConvexHull::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ConvexHull_of_(t_ConvexHull *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_ConvexHull_createRegion(t_ConvexHull *self)
        {
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);
          OBJ_CALL(result = self->object.createRegion());
          return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_ConvexHull_getVertices(t_ConvexHull *self)
        {
          JArray< ::org::hipparchus::geometry::Point > result((jobject) NULL);
          OBJ_CALL(result = self->object.getVertices());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::geometry::t_Point::wrap_jobject);
        }
        static PyObject *t_ConvexHull_get__parameters_(t_ConvexHull *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ConvexHull_get__vertices(t_ConvexHull *self, void *data)
        {
          JArray< ::org::hipparchus::geometry::Point > value((jobject) NULL);
          OBJ_CALL(value = self->object.getVertices());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::geometry::t_Point::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/AdaptableInterval.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *AdaptableInterval::class$ = NULL;
        jmethodID *AdaptableInterval::mids$ = NULL;
        bool AdaptableInterval::live$ = false;

        jclass AdaptableInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/AdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_currentInterval_c9c83b182b4bb0ba] = env->getMethodID(cls, "currentInterval", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AdaptableInterval::currentInterval(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_currentInterval_c9c83b182b4bb0ba], a0.this$);
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
        static PyObject *t_AdaptableInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptableInterval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptableInterval_currentInterval(t_AdaptableInterval *self, PyObject *arg);

        static PyMethodDef t_AdaptableInterval__methods_[] = {
          DECLARE_METHOD(t_AdaptableInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptableInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptableInterval, currentInterval, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdaptableInterval)[] = {
          { Py_tp_methods, t_AdaptableInterval__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdaptableInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdaptableInterval, t_AdaptableInterval, AdaptableInterval);

        void t_AdaptableInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(AdaptableInterval), &PY_TYPE_DEF(AdaptableInterval), module, "AdaptableInterval", 0);
        }

        void t_AdaptableInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptableInterval), "class_", make_descriptor(AdaptableInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptableInterval), "wrapfn_", make_descriptor(t_AdaptableInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptableInterval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdaptableInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdaptableInterval::initializeClass, 1)))
            return NULL;
          return t_AdaptableInterval::wrap_Object(AdaptableInterval(((t_AdaptableInterval *) arg)->object.this$));
        }
        static PyObject *t_AdaptableInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdaptableInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdaptableInterval_currentInterval(t_AdaptableInterval *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.currentInterval(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "currentInterval", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/J2DifferentialEffect.h"
#include "org/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *J2DifferentialEffect::class$ = NULL;
        jmethodID *J2DifferentialEffect::mids$ = NULL;
        bool J2DifferentialEffect::live$ = false;

        jclass J2DifferentialEffect::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/J2DifferentialEffect");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7832982572e8125b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/Orbit;ZLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_d2c6003da657864c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect;ZLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_773b9c3af4cf87de] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/Orbit;ZDDD)V");
            mids$[mid_init$_82b23cc2b1fa0e19] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect;ZDDD)V");
            mids$[mid_apply_940029672edd5e92] = env->getMethodID(cls, "apply", "(Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_apply_ed3fe207e6fde26f] = env->getMethodID(cls, "apply", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        J2DifferentialEffect::J2DifferentialEffect(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::Orbit & a1, jboolean a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7832982572e8125b, a0.this$, a1.this$, a2, a3.this$)) {}

        J2DifferentialEffect::J2DifferentialEffect(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect & a1, jboolean a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d2c6003da657864c, a0.this$, a1.this$, a2, a3.this$)) {}

        J2DifferentialEffect::J2DifferentialEffect(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::Orbit & a1, jboolean a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_773b9c3af4cf87de, a0.this$, a1.this$, a2, a3, a4, a5)) {}

        J2DifferentialEffect::J2DifferentialEffect(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect & a1, jboolean a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_82b23cc2b1fa0e19, a0.this$, a1.this$, a2, a3, a4, a5)) {}

        ::org::orekit::orbits::Orbit J2DifferentialEffect::apply(const ::org::orekit::orbits::Orbit & a0) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_apply_940029672edd5e92], a0.this$));
        }

        ::org::orekit::propagation::SpacecraftState J2DifferentialEffect::apply(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_apply_ed3fe207e6fde26f], a0.this$));
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
        static PyObject *t_J2DifferentialEffect_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_J2DifferentialEffect_instance_(PyTypeObject *type, PyObject *arg);
        static int t_J2DifferentialEffect_init_(t_J2DifferentialEffect *self, PyObject *args, PyObject *kwds);
        static PyObject *t_J2DifferentialEffect_apply(t_J2DifferentialEffect *self, PyObject *args);

        static PyMethodDef t_J2DifferentialEffect__methods_[] = {
          DECLARE_METHOD(t_J2DifferentialEffect, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_J2DifferentialEffect, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_J2DifferentialEffect, apply, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(J2DifferentialEffect)[] = {
          { Py_tp_methods, t_J2DifferentialEffect__methods_ },
          { Py_tp_init, (void *) t_J2DifferentialEffect_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(J2DifferentialEffect)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(J2DifferentialEffect, t_J2DifferentialEffect, J2DifferentialEffect);

        void t_J2DifferentialEffect::install(PyObject *module)
        {
          installType(&PY_TYPE(J2DifferentialEffect), &PY_TYPE_DEF(J2DifferentialEffect), module, "J2DifferentialEffect", 0);
        }

        void t_J2DifferentialEffect::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(J2DifferentialEffect), "class_", make_descriptor(J2DifferentialEffect::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(J2DifferentialEffect), "wrapfn_", make_descriptor(t_J2DifferentialEffect::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(J2DifferentialEffect), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_J2DifferentialEffect_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, J2DifferentialEffect::initializeClass, 1)))
            return NULL;
          return t_J2DifferentialEffect::wrap_Object(J2DifferentialEffect(((t_J2DifferentialEffect *) arg)->object.this$));
        }
        static PyObject *t_J2DifferentialEffect_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, J2DifferentialEffect::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_J2DifferentialEffect_init_(t_J2DifferentialEffect *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              jboolean a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              J2DifferentialEffect object((jobject) NULL);

              if (!parseArgs(args, "kkZk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = J2DifferentialEffect(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect a1((jobject) NULL);
              jboolean a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              J2DifferentialEffect object((jobject) NULL);

              if (!parseArgs(args, "kkZk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = J2DifferentialEffect(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              jboolean a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              J2DifferentialEffect object((jobject) NULL);

              if (!parseArgs(args, "kkZDDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = J2DifferentialEffect(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect a1((jobject) NULL);
              jboolean a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              J2DifferentialEffect object((jobject) NULL);

              if (!parseArgs(args, "kkZDDD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = J2DifferentialEffect(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_J2DifferentialEffect_apply(t_J2DifferentialEffect *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "apply", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Abs.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Abs::class$ = NULL;
        jmethodID *Abs::mids$ = NULL;
        bool Abs::live$ = false;

        jclass Abs::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Abs");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Abs::Abs() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Abs::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Abs::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
        static PyObject *t_Abs_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Abs_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Abs_init_(t_Abs *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Abs_value(t_Abs *self, PyObject *args);

        static PyMethodDef t_Abs__methods_[] = {
          DECLARE_METHOD(t_Abs, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Abs, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Abs, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Abs)[] = {
          { Py_tp_methods, t_Abs__methods_ },
          { Py_tp_init, (void *) t_Abs_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Abs)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Abs, t_Abs, Abs);

        void t_Abs::install(PyObject *module)
        {
          installType(&PY_TYPE(Abs), &PY_TYPE_DEF(Abs), module, "Abs", 0);
        }

        void t_Abs::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Abs), "class_", make_descriptor(Abs::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Abs), "wrapfn_", make_descriptor(t_Abs::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Abs), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Abs_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Abs::initializeClass, 1)))
            return NULL;
          return t_Abs::wrap_Object(Abs(((t_Abs *) arg)->object.this$));
        }
        static PyObject *t_Abs_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Abs::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Abs_init_(t_Abs *self, PyObject *args, PyObject *kwds)
        {
          Abs object((jobject) NULL);

          INT_CALL(object = Abs());
          self->object = object;

          return 0;
        }

        static PyObject *t_Abs_value(t_Abs *self, PyObject *args)
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
#include "org/orekit/propagation/events/GroundAtNightDetector.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "org/orekit/propagation/events/GroundAtNightDetector.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *GroundAtNightDetector::class$ = NULL;
        jmethodID *GroundAtNightDetector::mids$ = NULL;
        bool GroundAtNightDetector::live$ = false;
        jdouble GroundAtNightDetector::ASTRONOMICAL_DAWN_DUSK_ELEVATION = (jdouble) 0;
        jdouble GroundAtNightDetector::CIVIL_DAWN_DUSK_ELEVATION = (jdouble) 0;
        jdouble GroundAtNightDetector::NAUTICAL_DAWN_DUSK_ELEVATION = (jdouble) 0;

        jclass GroundAtNightDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/GroundAtNightDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b2b9eafa71445cd9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TopocentricFrame;Lorg/orekit/utils/PVCoordinatesProvider;DLorg/orekit/models/AtmosphericRefractionModel;)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_create_c94abe491ef57ce3] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/GroundAtNightDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ASTRONOMICAL_DAWN_DUSK_ELEVATION = env->getStaticDoubleField(cls, "ASTRONOMICAL_DAWN_DUSK_ELEVATION");
            CIVIL_DAWN_DUSK_ELEVATION = env->getStaticDoubleField(cls, "CIVIL_DAWN_DUSK_ELEVATION");
            NAUTICAL_DAWN_DUSK_ELEVATION = env->getStaticDoubleField(cls, "NAUTICAL_DAWN_DUSK_ELEVATION");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundAtNightDetector::GroundAtNightDetector(const ::org::orekit::frames::TopocentricFrame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jdouble a2, const ::org::orekit::models::AtmosphericRefractionModel & a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_b2b9eafa71445cd9, a0.this$, a1.this$, a2, a3.this$)) {}

        jdouble GroundAtNightDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
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
        static PyObject *t_GroundAtNightDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundAtNightDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundAtNightDetector_of_(t_GroundAtNightDetector *self, PyObject *args);
        static int t_GroundAtNightDetector_init_(t_GroundAtNightDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundAtNightDetector_g(t_GroundAtNightDetector *self, PyObject *args);
        static PyObject *t_GroundAtNightDetector_get__parameters_(t_GroundAtNightDetector *self, void *data);
        static PyGetSetDef t_GroundAtNightDetector__fields_[] = {
          DECLARE_GET_FIELD(t_GroundAtNightDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GroundAtNightDetector__methods_[] = {
          DECLARE_METHOD(t_GroundAtNightDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundAtNightDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundAtNightDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_GroundAtNightDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundAtNightDetector)[] = {
          { Py_tp_methods, t_GroundAtNightDetector__methods_ },
          { Py_tp_init, (void *) t_GroundAtNightDetector_init_ },
          { Py_tp_getset, t_GroundAtNightDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundAtNightDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(GroundAtNightDetector, t_GroundAtNightDetector, GroundAtNightDetector);
        PyObject *t_GroundAtNightDetector::wrap_Object(const GroundAtNightDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GroundAtNightDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GroundAtNightDetector *self = (t_GroundAtNightDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GroundAtNightDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GroundAtNightDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GroundAtNightDetector *self = (t_GroundAtNightDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GroundAtNightDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundAtNightDetector), &PY_TYPE_DEF(GroundAtNightDetector), module, "GroundAtNightDetector", 0);
        }

        void t_GroundAtNightDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "class_", make_descriptor(GroundAtNightDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "wrapfn_", make_descriptor(t_GroundAtNightDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(GroundAtNightDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "ASTRONOMICAL_DAWN_DUSK_ELEVATION", make_descriptor(GroundAtNightDetector::ASTRONOMICAL_DAWN_DUSK_ELEVATION));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "CIVIL_DAWN_DUSK_ELEVATION", make_descriptor(GroundAtNightDetector::CIVIL_DAWN_DUSK_ELEVATION));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "NAUTICAL_DAWN_DUSK_ELEVATION", make_descriptor(GroundAtNightDetector::NAUTICAL_DAWN_DUSK_ELEVATION));
        }

        static PyObject *t_GroundAtNightDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundAtNightDetector::initializeClass, 1)))
            return NULL;
          return t_GroundAtNightDetector::wrap_Object(GroundAtNightDetector(((t_GroundAtNightDetector *) arg)->object.this$));
        }
        static PyObject *t_GroundAtNightDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundAtNightDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GroundAtNightDetector_of_(t_GroundAtNightDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_GroundAtNightDetector_init_(t_GroundAtNightDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::frames::TopocentricFrame a0((jobject) NULL);
          ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
          jdouble a2;
          ::org::orekit::models::AtmosphericRefractionModel a3((jobject) NULL);
          GroundAtNightDetector object((jobject) NULL);

          if (!parseArgs(args, "kkDk", ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::models::AtmosphericRefractionModel::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = GroundAtNightDetector(a0, a1, a2, a3));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(GroundAtNightDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GroundAtNightDetector_g(t_GroundAtNightDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GroundAtNightDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_GroundAtNightDetector_get__parameters_(t_GroundAtNightDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/discrete/HypergeometricDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *HypergeometricDistribution::class$ = NULL;
        jmethodID *HypergeometricDistribution::mids$ = NULL;
        bool HypergeometricDistribution::live$ = false;

        jclass HypergeometricDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/HypergeometricDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_48ca1125d4856a74] = env->getMethodID(cls, "<init>", "(III)V");
            mids$[mid_cumulativeProbability_ce4c02d583456bc9] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumberOfSuccesses_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfSuccesses", "()I");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getPopulationSize_d6ab429752e7c267] = env->getMethodID(cls, "getPopulationSize", "()I");
            mids$[mid_getSampleSize_d6ab429752e7c267] = env->getMethodID(cls, "getSampleSize", "()I");
            mids$[mid_getSupportLowerBound_d6ab429752e7c267] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_d6ab429752e7c267] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_ce4c02d583456bc9] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_ce4c02d583456bc9] = env->getMethodID(cls, "probability", "(I)D");
            mids$[mid_upperCumulativeProbability_ce4c02d583456bc9] = env->getMethodID(cls, "upperCumulativeProbability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HypergeometricDistribution::HypergeometricDistribution(jint a0, jint a1, jint a2) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_48ca1125d4856a74, a0, a1, a2)) {}

        jdouble HypergeometricDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_ce4c02d583456bc9], a0);
        }

        jint HypergeometricDistribution::getNumberOfSuccesses() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfSuccesses_d6ab429752e7c267]);
        }

        jdouble HypergeometricDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble HypergeometricDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        jint HypergeometricDistribution::getPopulationSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getPopulationSize_d6ab429752e7c267]);
        }

        jint HypergeometricDistribution::getSampleSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getSampleSize_d6ab429752e7c267]);
        }

        jint HypergeometricDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_d6ab429752e7c267]);
        }

        jint HypergeometricDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_d6ab429752e7c267]);
        }

        jboolean HypergeometricDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
        }

        jdouble HypergeometricDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_ce4c02d583456bc9], a0);
        }

        jdouble HypergeometricDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_ce4c02d583456bc9], a0);
        }

        jdouble HypergeometricDistribution::upperCumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_upperCumulativeProbability_ce4c02d583456bc9], a0);
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
      namespace discrete {
        static PyObject *t_HypergeometricDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HypergeometricDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HypergeometricDistribution_init_(t_HypergeometricDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HypergeometricDistribution_cumulativeProbability(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_getNumberOfSuccesses(t_HypergeometricDistribution *self);
        static PyObject *t_HypergeometricDistribution_getNumericalMean(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_getNumericalVariance(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_getPopulationSize(t_HypergeometricDistribution *self);
        static PyObject *t_HypergeometricDistribution_getSampleSize(t_HypergeometricDistribution *self);
        static PyObject *t_HypergeometricDistribution_getSupportLowerBound(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_getSupportUpperBound(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_isSupportConnected(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_logProbability(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_probability(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_upperCumulativeProbability(t_HypergeometricDistribution *self, PyObject *arg);
        static PyObject *t_HypergeometricDistribution_get__numberOfSuccesses(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__numericalMean(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__numericalVariance(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__populationSize(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__sampleSize(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__supportConnected(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__supportLowerBound(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__supportUpperBound(t_HypergeometricDistribution *self, void *data);
        static PyGetSetDef t_HypergeometricDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_HypergeometricDistribution, numberOfSuccesses),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, numericalMean),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, populationSize),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, sampleSize),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, supportConnected),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HypergeometricDistribution__methods_[] = {
          DECLARE_METHOD(t_HypergeometricDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HypergeometricDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HypergeometricDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getNumberOfSuccesses, METH_NOARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getPopulationSize, METH_NOARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getSampleSize, METH_NOARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, probability, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, upperCumulativeProbability, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HypergeometricDistribution)[] = {
          { Py_tp_methods, t_HypergeometricDistribution__methods_ },
          { Py_tp_init, (void *) t_HypergeometricDistribution_init_ },
          { Py_tp_getset, t_HypergeometricDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HypergeometricDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(HypergeometricDistribution, t_HypergeometricDistribution, HypergeometricDistribution);

        void t_HypergeometricDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(HypergeometricDistribution), &PY_TYPE_DEF(HypergeometricDistribution), module, "HypergeometricDistribution", 0);
        }

        void t_HypergeometricDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HypergeometricDistribution), "class_", make_descriptor(HypergeometricDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HypergeometricDistribution), "wrapfn_", make_descriptor(t_HypergeometricDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HypergeometricDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HypergeometricDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HypergeometricDistribution::initializeClass, 1)))
            return NULL;
          return t_HypergeometricDistribution::wrap_Object(HypergeometricDistribution(((t_HypergeometricDistribution *) arg)->object.this$));
        }
        static PyObject *t_HypergeometricDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HypergeometricDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HypergeometricDistribution_init_(t_HypergeometricDistribution *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jint a1;
          jint a2;
          HypergeometricDistribution object((jobject) NULL);

          if (!parseArgs(args, "III", &a0, &a1, &a2))
          {
            INT_CALL(object = HypergeometricDistribution(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HypergeometricDistribution_cumulativeProbability(t_HypergeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_getNumberOfSuccesses(t_HypergeometricDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfSuccesses());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_HypergeometricDistribution_getNumericalMean(t_HypergeometricDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_getNumericalVariance(t_HypergeometricDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_getPopulationSize(t_HypergeometricDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getPopulationSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_HypergeometricDistribution_getSampleSize(t_HypergeometricDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSampleSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_HypergeometricDistribution_getSupportLowerBound(t_HypergeometricDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_getSupportUpperBound(t_HypergeometricDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_isSupportConnected(t_HypergeometricDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_logProbability(t_HypergeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_probability(t_HypergeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_upperCumulativeProbability(t_HypergeometricDistribution *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.upperCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "upperCumulativeProbability", arg);
          return NULL;
        }

        static PyObject *t_HypergeometricDistribution_get__numberOfSuccesses(t_HypergeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfSuccesses());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_HypergeometricDistribution_get__numericalMean(t_HypergeometricDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_HypergeometricDistribution_get__numericalVariance(t_HypergeometricDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_HypergeometricDistribution_get__populationSize(t_HypergeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getPopulationSize());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_HypergeometricDistribution_get__sampleSize(t_HypergeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSampleSize());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_HypergeometricDistribution_get__supportConnected(t_HypergeometricDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_HypergeometricDistribution_get__supportLowerBound(t_HypergeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_HypergeometricDistribution_get__supportUpperBound(t_HypergeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/GroundReceiverCommonParametersWithoutDerivatives.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
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
            mids$[mid_init$_6779991549f9fde6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/Transform;Lorg/orekit/utils/TimeStampedPVCoordinates;DLorg/orekit/propagation/SpacecraftState;Lorg/orekit/utils/TimeStampedPVCoordinates;)V");
            mids$[mid_getOffsetToInertialDownlink_da06dd761109637f] = env->getMethodID(cls, "getOffsetToInertialDownlink", "()Lorg/orekit/frames/Transform;");
            mids$[mid_getState_8fbfa58855031235] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getStationDownlink_674031698a428ce8] = env->getMethodID(cls, "getStationDownlink", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getTauD_9981f74b2d109da6] = env->getMethodID(cls, "getTauD", "()D");
            mids$[mid_getTransitPV_674031698a428ce8] = env->getMethodID(cls, "getTransitPV", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getTransitState_8fbfa58855031235] = env->getMethodID(cls, "getTransitState", "()Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundReceiverCommonParametersWithoutDerivatives::GroundReceiverCommonParametersWithoutDerivatives(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::Transform & a1, const ::org::orekit::utils::TimeStampedPVCoordinates & a2, jdouble a3, const ::org::orekit::propagation::SpacecraftState & a4, const ::org::orekit::utils::TimeStampedPVCoordinates & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6779991549f9fde6, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5.this$)) {}

        ::org::orekit::frames::Transform GroundReceiverCommonParametersWithoutDerivatives::getOffsetToInertialDownlink() const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getOffsetToInertialDownlink_da06dd761109637f]));
        }

        ::org::orekit::propagation::SpacecraftState GroundReceiverCommonParametersWithoutDerivatives::getState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_8fbfa58855031235]));
        }

        ::org::orekit::utils::TimeStampedPVCoordinates GroundReceiverCommonParametersWithoutDerivatives::getStationDownlink() const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getStationDownlink_674031698a428ce8]));
        }

        jdouble GroundReceiverCommonParametersWithoutDerivatives::getTauD() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTauD_9981f74b2d109da6]);
        }

        ::org::orekit::utils::TimeStampedPVCoordinates GroundReceiverCommonParametersWithoutDerivatives::getTransitPV() const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTransitPV_674031698a428ce8]));
        }

        ::org::orekit::propagation::SpacecraftState GroundReceiverCommonParametersWithoutDerivatives::getTransitState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getTransitState_8fbfa58855031235]));
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
#include "org/orekit/propagation/conversion/DSSTPropagatorBuilder.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/propagation/conversion/DSSTPropagatorBuilder.h"
#include "java/util/List.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/leastsquares/DSSTBatchLSModel.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/Object.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *DSSTPropagatorBuilder::class$ = NULL;
        jmethodID *DSSTPropagatorBuilder::mids$ = NULL;
        bool DSSTPropagatorBuilder::live$ = false;

        jclass DSSTPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/DSSTPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c70b92190ed3f8da] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;DLorg/orekit/propagation/PropagationType;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_04fe4b9d76071505] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;DLorg/orekit/propagation/PropagationType;Lorg/orekit/propagation/PropagationType;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_addForceModel_a0575630e19e1e5c] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel;)V");
            mids$[mid_buildLeastSquaresModel_8a8975ded39f633f] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/DSSTBatchLSModel;");
            mids$[mid_buildPropagator_4fd5c210f0282321] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_copy_1fab1d2de2d29bc8] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/DSSTPropagatorBuilder;");
            mids$[mid_getAllForceModels_d751c1a57012b438] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
            mids$[mid_getIntegratorBuilder_97efb8d7c46d45d7] = env->getMethodID(cls, "getIntegratorBuilder", "()Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;");
            mids$[mid_getMass_9981f74b2d109da6] = env->getMethodID(cls, "getMass", "()D");
            mids$[mid_getPropagationType_fa97d40fdfd0f5fb] = env->getMethodID(cls, "getPropagationType", "()Lorg/orekit/propagation/PropagationType;");
            mids$[mid_getStateType_fa97d40fdfd0f5fb] = env->getMethodID(cls, "getStateType", "()Lorg/orekit/propagation/PropagationType;");
            mids$[mid_resetOrbit_2e357aa1306bd910] = env->getMethodID(cls, "resetOrbit", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_setMass_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMass", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DSSTPropagatorBuilder::DSSTPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::conversion::ODEIntegratorBuilder & a1, jdouble a2, const ::org::orekit::propagation::PropagationType & a3, const ::org::orekit::propagation::PropagationType & a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_c70b92190ed3f8da, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

        DSSTPropagatorBuilder::DSSTPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::conversion::ODEIntegratorBuilder & a1, jdouble a2, const ::org::orekit::propagation::PropagationType & a3, const ::org::orekit::propagation::PropagationType & a4, const ::org::orekit::attitudes::AttitudeProvider & a5) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_04fe4b9d76071505, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5.this$)) {}

        void DSSTPropagatorBuilder::addForceModel(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addForceModel_a0575630e19e1e5c], a0.this$);
        }

        ::org::orekit::estimation::leastsquares::DSSTBatchLSModel DSSTPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::DSSTBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_8a8975ded39f633f], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator DSSTPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_4fd5c210f0282321], a0.this$));
        }

        DSSTPropagatorBuilder DSSTPropagatorBuilder::copy() const
        {
          return DSSTPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_1fab1d2de2d29bc8]));
        }

        ::java::util::List DSSTPropagatorBuilder::getAllForceModels() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_d751c1a57012b438]));
        }

        ::org::orekit::propagation::conversion::ODEIntegratorBuilder DSSTPropagatorBuilder::getIntegratorBuilder() const
        {
          return ::org::orekit::propagation::conversion::ODEIntegratorBuilder(env->callObjectMethod(this$, mids$[mid_getIntegratorBuilder_97efb8d7c46d45d7]));
        }

        jdouble DSSTPropagatorBuilder::getMass() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMass_9981f74b2d109da6]);
        }

        ::org::orekit::propagation::PropagationType DSSTPropagatorBuilder::getPropagationType() const
        {
          return ::org::orekit::propagation::PropagationType(env->callObjectMethod(this$, mids$[mid_getPropagationType_fa97d40fdfd0f5fb]));
        }

        ::org::orekit::propagation::PropagationType DSSTPropagatorBuilder::getStateType() const
        {
          return ::org::orekit::propagation::PropagationType(env->callObjectMethod(this$, mids$[mid_getStateType_fa97d40fdfd0f5fb]));
        }

        void DSSTPropagatorBuilder::resetOrbit(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::PropagationType & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_resetOrbit_2e357aa1306bd910], a0.this$, a1.this$);
        }

        void DSSTPropagatorBuilder::setMass(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMass_1ad26e8c8c0cd65b], a0);
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
        static PyObject *t_DSSTPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSSTPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DSSTPropagatorBuilder_init_(t_DSSTPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DSSTPropagatorBuilder_addForceModel(t_DSSTPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_DSSTPropagatorBuilder_buildLeastSquaresModel(t_DSSTPropagatorBuilder *self, PyObject *args);
        static PyObject *t_DSSTPropagatorBuilder_buildPropagator(t_DSSTPropagatorBuilder *self, PyObject *args);
        static PyObject *t_DSSTPropagatorBuilder_copy(t_DSSTPropagatorBuilder *self, PyObject *args);
        static PyObject *t_DSSTPropagatorBuilder_getAllForceModels(t_DSSTPropagatorBuilder *self);
        static PyObject *t_DSSTPropagatorBuilder_getIntegratorBuilder(t_DSSTPropagatorBuilder *self);
        static PyObject *t_DSSTPropagatorBuilder_getMass(t_DSSTPropagatorBuilder *self);
        static PyObject *t_DSSTPropagatorBuilder_getPropagationType(t_DSSTPropagatorBuilder *self);
        static PyObject *t_DSSTPropagatorBuilder_getStateType(t_DSSTPropagatorBuilder *self);
        static PyObject *t_DSSTPropagatorBuilder_resetOrbit(t_DSSTPropagatorBuilder *self, PyObject *args);
        static PyObject *t_DSSTPropagatorBuilder_setMass(t_DSSTPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_DSSTPropagatorBuilder_get__allForceModels(t_DSSTPropagatorBuilder *self, void *data);
        static PyObject *t_DSSTPropagatorBuilder_get__integratorBuilder(t_DSSTPropagatorBuilder *self, void *data);
        static PyObject *t_DSSTPropagatorBuilder_get__mass(t_DSSTPropagatorBuilder *self, void *data);
        static int t_DSSTPropagatorBuilder_set__mass(t_DSSTPropagatorBuilder *self, PyObject *arg, void *data);
        static PyObject *t_DSSTPropagatorBuilder_get__propagationType(t_DSSTPropagatorBuilder *self, void *data);
        static PyObject *t_DSSTPropagatorBuilder_get__stateType(t_DSSTPropagatorBuilder *self, void *data);
        static PyGetSetDef t_DSSTPropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_DSSTPropagatorBuilder, allForceModels),
          DECLARE_GET_FIELD(t_DSSTPropagatorBuilder, integratorBuilder),
          DECLARE_GETSET_FIELD(t_DSSTPropagatorBuilder, mass),
          DECLARE_GET_FIELD(t_DSSTPropagatorBuilder, propagationType),
          DECLARE_GET_FIELD(t_DSSTPropagatorBuilder, stateType),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DSSTPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_DSSTPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, addForceModel, METH_O),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, copy, METH_VARARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, getAllForceModels, METH_NOARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, getIntegratorBuilder, METH_NOARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, getMass, METH_NOARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, getPropagationType, METH_NOARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, getStateType, METH_NOARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, resetOrbit, METH_VARARGS),
          DECLARE_METHOD(t_DSSTPropagatorBuilder, setMass, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSSTPropagatorBuilder)[] = {
          { Py_tp_methods, t_DSSTPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_DSSTPropagatorBuilder_init_ },
          { Py_tp_getset, t_DSSTPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSSTPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(DSSTPropagatorBuilder, t_DSSTPropagatorBuilder, DSSTPropagatorBuilder);

        void t_DSSTPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(DSSTPropagatorBuilder), &PY_TYPE_DEF(DSSTPropagatorBuilder), module, "DSSTPropagatorBuilder", 0);
        }

        void t_DSSTPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTPropagatorBuilder), "class_", make_descriptor(DSSTPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTPropagatorBuilder), "wrapfn_", make_descriptor(t_DSSTPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSSTPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSSTPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_DSSTPropagatorBuilder::wrap_Object(DSSTPropagatorBuilder(((t_DSSTPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_DSSTPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSSTPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DSSTPropagatorBuilder_init_(t_DSSTPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::propagation::conversion::ODEIntegratorBuilder a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::propagation::PropagationType a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::PropagationType a4((jobject) NULL);
              PyTypeObject **p4;
              DSSTPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkDKK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::conversion::ODEIntegratorBuilder::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::propagation::t_PropagationType::parameters_, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = DSSTPropagatorBuilder(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::propagation::conversion::ODEIntegratorBuilder a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::propagation::PropagationType a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::PropagationType a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::orekit::attitudes::AttitudeProvider a5((jobject) NULL);
              DSSTPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkDKKk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::conversion::ODEIntegratorBuilder::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::propagation::t_PropagationType::parameters_, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_, &a5))
              {
                INT_CALL(object = DSSTPropagatorBuilder(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_DSSTPropagatorBuilder_addForceModel(t_DSSTPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addForceModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addForceModel", arg);
          return NULL;
        }

        static PyObject *t_DSSTPropagatorBuilder_buildLeastSquaresModel(t_DSSTPropagatorBuilder *self, PyObject *args)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::DSSTBatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_DSSTBatchLSModel::wrap_Object(result);
          }

          return callSuper(PY_TYPE(DSSTPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_DSSTPropagatorBuilder_buildPropagator(t_DSSTPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(DSSTPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_DSSTPropagatorBuilder_copy(t_DSSTPropagatorBuilder *self, PyObject *args)
        {
          DSSTPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_DSSTPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(DSSTPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }

        static PyObject *t_DSSTPropagatorBuilder_getAllForceModels(t_DSSTPropagatorBuilder *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(DSSTForceModel));
        }

        static PyObject *t_DSSTPropagatorBuilder_getIntegratorBuilder(t_DSSTPropagatorBuilder *self)
        {
          ::org::orekit::propagation::conversion::ODEIntegratorBuilder result((jobject) NULL);
          OBJ_CALL(result = self->object.getIntegratorBuilder());
          return ::org::orekit::propagation::conversion::t_ODEIntegratorBuilder::wrap_Object(result);
        }

        static PyObject *t_DSSTPropagatorBuilder_getMass(t_DSSTPropagatorBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMass());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DSSTPropagatorBuilder_getPropagationType(t_DSSTPropagatorBuilder *self)
        {
          ::org::orekit::propagation::PropagationType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(result);
        }

        static PyObject *t_DSSTPropagatorBuilder_getStateType(t_DSSTPropagatorBuilder *self)
        {
          ::org::orekit::propagation::PropagationType result((jobject) NULL);
          OBJ_CALL(result = self->object.getStateType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(result);
        }

        static PyObject *t_DSSTPropagatorBuilder_resetOrbit(t_DSSTPropagatorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::propagation::PropagationType a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
          {
            OBJ_CALL(self->object.resetOrbit(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(DSSTPropagatorBuilder), (PyObject *) self, "resetOrbit", args, 2);
        }

        static PyObject *t_DSSTPropagatorBuilder_setMass(t_DSSTPropagatorBuilder *self, PyObject *arg)
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

        static PyObject *t_DSSTPropagatorBuilder_get__allForceModels(t_DSSTPropagatorBuilder *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_DSSTPropagatorBuilder_get__integratorBuilder(t_DSSTPropagatorBuilder *self, void *data)
        {
          ::org::orekit::propagation::conversion::ODEIntegratorBuilder value((jobject) NULL);
          OBJ_CALL(value = self->object.getIntegratorBuilder());
          return ::org::orekit::propagation::conversion::t_ODEIntegratorBuilder::wrap_Object(value);
        }

        static PyObject *t_DSSTPropagatorBuilder_get__mass(t_DSSTPropagatorBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMass());
          return PyFloat_FromDouble((double) value);
        }
        static int t_DSSTPropagatorBuilder_set__mass(t_DSSTPropagatorBuilder *self, PyObject *arg, void *data)
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

        static PyObject *t_DSSTPropagatorBuilder_get__propagationType(t_DSSTPropagatorBuilder *self, void *data)
        {
          ::org::orekit::propagation::PropagationType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(value);
        }

        static PyObject *t_DSSTPropagatorBuilder_get__stateType(t_DSSTPropagatorBuilder *self, void *data)
        {
          ::org::orekit::propagation::PropagationType value((jobject) NULL);
          OBJ_CALL(value = self->object.getStateType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/PythonEphemerisFileWriter.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFileWriter.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonEphemerisFileWriter::class$ = NULL;
        jmethodID *PythonEphemerisFileWriter::mids$ = NULL;
        bool PythonEphemerisFileWriter::live$ = false;

        jclass PythonEphemerisFileWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonEphemerisFileWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_write_ed9a20a3abb51fd6] = env->getMethodID(cls, "write", "(Ljava/lang/String;Lorg/orekit/files/general/EphemerisFile;)V");
            mids$[mid_write_12ce9ebfe43ac6e6] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEphemerisFileWriter::PythonEphemerisFileWriter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonEphemerisFileWriter::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonEphemerisFileWriter::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonEphemerisFileWriter::pythonExtension(jlong a0) const
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
    namespace files {
      namespace general {
        static PyObject *t_PythonEphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEphemerisFileWriter_init_(t_PythonEphemerisFileWriter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEphemerisFileWriter_finalize(t_PythonEphemerisFileWriter *self);
        static PyObject *t_PythonEphemerisFileWriter_pythonExtension(t_PythonEphemerisFileWriter *self, PyObject *args);
        static void JNICALL t_PythonEphemerisFileWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEphemerisFileWriter_write1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonEphemerisFileWriter_write2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static PyObject *t_PythonEphemerisFileWriter_get__self(t_PythonEphemerisFileWriter *self, void *data);
        static PyGetSetDef t_PythonEphemerisFileWriter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEphemerisFileWriter, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEphemerisFileWriter__methods_[] = {
          DECLARE_METHOD(t_PythonEphemerisFileWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFileWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFileWriter, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEphemerisFileWriter, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEphemerisFileWriter)[] = {
          { Py_tp_methods, t_PythonEphemerisFileWriter__methods_ },
          { Py_tp_init, (void *) t_PythonEphemerisFileWriter_init_ },
          { Py_tp_getset, t_PythonEphemerisFileWriter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEphemerisFileWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEphemerisFileWriter, t_PythonEphemerisFileWriter, PythonEphemerisFileWriter);

        void t_PythonEphemerisFileWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEphemerisFileWriter), &PY_TYPE_DEF(PythonEphemerisFileWriter), module, "PythonEphemerisFileWriter", 1);
        }

        void t_PythonEphemerisFileWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFileWriter), "class_", make_descriptor(PythonEphemerisFileWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFileWriter), "wrapfn_", make_descriptor(t_PythonEphemerisFileWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFileWriter), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEphemerisFileWriter::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonEphemerisFileWriter_pythonDecRef0 },
            { "write", "(Ljava/lang/String;Lorg/orekit/files/general/EphemerisFile;)V", (void *) t_PythonEphemerisFileWriter_write1 },
            { "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V", (void *) t_PythonEphemerisFileWriter_write2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonEphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEphemerisFileWriter::initializeClass, 1)))
            return NULL;
          return t_PythonEphemerisFileWriter::wrap_Object(PythonEphemerisFileWriter(((t_PythonEphemerisFileWriter *) arg)->object.this$));
        }
        static PyObject *t_PythonEphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEphemerisFileWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEphemerisFileWriter_init_(t_PythonEphemerisFileWriter *self, PyObject *args, PyObject *kwds)
        {
          PythonEphemerisFileWriter object((jobject) NULL);

          INT_CALL(object = PythonEphemerisFileWriter());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEphemerisFileWriter_finalize(t_PythonEphemerisFileWriter *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEphemerisFileWriter_pythonExtension(t_PythonEphemerisFileWriter *self, PyObject *args)
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

        static void JNICALL t_PythonEphemerisFileWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFileWriter::mids$[PythonEphemerisFileWriter::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEphemerisFileWriter::mids$[PythonEphemerisFileWriter::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonEphemerisFileWriter_write1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFileWriter::mids$[PythonEphemerisFileWriter::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = env->fromJString((jstring) a0, 0);
          PyObject *o1 = ::org::orekit::files::general::t_EphemerisFile::wrap_Object(::org::orekit::files::general::EphemerisFile(a1));
          PyObject *result = PyObject_CallMethod(obj, "write", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonEphemerisFileWriter_write2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFileWriter::mids$[PythonEphemerisFileWriter::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::lang::t_Appendable::wrap_Object(::java::lang::Appendable(a0));
          PyObject *o1 = ::org::orekit::files::general::t_EphemerisFile::wrap_Object(::org::orekit::files::general::EphemerisFile(a1));
          PyObject *result = PyObject_CallMethod(obj, "write", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonEphemerisFileWriter_get__self(t_PythonEphemerisFileWriter *self, void *data)
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
#include "org/orekit/frames/OrphanFrame.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/OrphanFrame.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *OrphanFrame::class$ = NULL;
      jmethodID *OrphanFrame::mids$ = NULL;
      bool OrphanFrame::live$ = false;

      jclass OrphanFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/OrphanFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_addChild_103b10d18c6de761] = env->getMethodID(cls, "addChild", "(Lorg/orekit/frames/OrphanFrame;Lorg/orekit/frames/Transform;Z)V");
          mids$[mid_addChild_c0701622964fbebb] = env->getMethodID(cls, "addChild", "(Lorg/orekit/frames/OrphanFrame;Lorg/orekit/frames/TransformProvider;Z)V");
          mids$[mid_attachTo_8f3203d86728106c] = env->getMethodID(cls, "attachTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Z)V");
          mids$[mid_attachTo_50023fae0ce07cf5] = env->getMethodID(cls, "attachTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/TransformProvider;Z)V");
          mids$[mid_getChildren_d751c1a57012b438] = env->getMethodID(cls, "getChildren", "()Ljava/util/List;");
          mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrphanFrame::OrphanFrame(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

      void OrphanFrame::addChild(const OrphanFrame & a0, const ::org::orekit::frames::Transform & a1, jboolean a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addChild_103b10d18c6de761], a0.this$, a1.this$, a2);
      }

      void OrphanFrame::addChild(const OrphanFrame & a0, const ::org::orekit::frames::TransformProvider & a1, jboolean a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addChild_c0701622964fbebb], a0.this$, a1.this$, a2);
      }

      void OrphanFrame::attachTo(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Transform & a1, jboolean a2) const
      {
        env->callVoidMethod(this$, mids$[mid_attachTo_8f3203d86728106c], a0.this$, a1.this$, a2);
      }

      void OrphanFrame::attachTo(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::TransformProvider & a1, jboolean a2) const
      {
        env->callVoidMethod(this$, mids$[mid_attachTo_50023fae0ce07cf5], a0.this$, a1.this$, a2);
      }

      ::java::util::List OrphanFrame::getChildren() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getChildren_d751c1a57012b438]));
      }

      ::org::orekit::frames::Frame OrphanFrame::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
      }

      ::java::lang::String OrphanFrame::toString() const
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
    namespace frames {
      static PyObject *t_OrphanFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrphanFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrphanFrame_init_(t_OrphanFrame *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrphanFrame_addChild(t_OrphanFrame *self, PyObject *args);
      static PyObject *t_OrphanFrame_attachTo(t_OrphanFrame *self, PyObject *args);
      static PyObject *t_OrphanFrame_getChildren(t_OrphanFrame *self);
      static PyObject *t_OrphanFrame_getFrame(t_OrphanFrame *self);
      static PyObject *t_OrphanFrame_toString(t_OrphanFrame *self, PyObject *args);
      static PyObject *t_OrphanFrame_get__children(t_OrphanFrame *self, void *data);
      static PyObject *t_OrphanFrame_get__frame(t_OrphanFrame *self, void *data);
      static PyGetSetDef t_OrphanFrame__fields_[] = {
        DECLARE_GET_FIELD(t_OrphanFrame, children),
        DECLARE_GET_FIELD(t_OrphanFrame, frame),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrphanFrame__methods_[] = {
        DECLARE_METHOD(t_OrphanFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrphanFrame, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrphanFrame, addChild, METH_VARARGS),
        DECLARE_METHOD(t_OrphanFrame, attachTo, METH_VARARGS),
        DECLARE_METHOD(t_OrphanFrame, getChildren, METH_NOARGS),
        DECLARE_METHOD(t_OrphanFrame, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_OrphanFrame, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrphanFrame)[] = {
        { Py_tp_methods, t_OrphanFrame__methods_ },
        { Py_tp_init, (void *) t_OrphanFrame_init_ },
        { Py_tp_getset, t_OrphanFrame__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrphanFrame)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OrphanFrame, t_OrphanFrame, OrphanFrame);

      void t_OrphanFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(OrphanFrame), &PY_TYPE_DEF(OrphanFrame), module, "OrphanFrame", 0);
      }

      void t_OrphanFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrphanFrame), "class_", make_descriptor(OrphanFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrphanFrame), "wrapfn_", make_descriptor(t_OrphanFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrphanFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrphanFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrphanFrame::initializeClass, 1)))
          return NULL;
        return t_OrphanFrame::wrap_Object(OrphanFrame(((t_OrphanFrame *) arg)->object.this$));
      }
      static PyObject *t_OrphanFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrphanFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrphanFrame_init_(t_OrphanFrame *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        OrphanFrame object((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          INT_CALL(object = OrphanFrame(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrphanFrame_addChild(t_OrphanFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            OrphanFrame a0((jobject) NULL);
            ::org::orekit::frames::Transform a1((jobject) NULL);
            jboolean a2;

            if (!parseArgs(args, "kkZ", OrphanFrame::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.addChild(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          {
            OrphanFrame a0((jobject) NULL);
            ::org::orekit::frames::TransformProvider a1((jobject) NULL);
            jboolean a2;

            if (!parseArgs(args, "kkZ", OrphanFrame::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.addChild(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "addChild", args);
        return NULL;
      }

      static PyObject *t_OrphanFrame_attachTo(t_OrphanFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Transform a1((jobject) NULL);
            jboolean a2;

            if (!parseArgs(args, "kkZ", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.attachTo(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::TransformProvider a1((jobject) NULL);
            jboolean a2;

            if (!parseArgs(args, "kkZ", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.attachTo(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "attachTo", args);
        return NULL;
      }

      static PyObject *t_OrphanFrame_getChildren(t_OrphanFrame *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getChildren());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::frames::PY_TYPE(OrphanFrame));
      }

      static PyObject *t_OrphanFrame_getFrame(t_OrphanFrame *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_OrphanFrame_toString(t_OrphanFrame *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrphanFrame), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_OrphanFrame_get__children(t_OrphanFrame *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getChildren());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_OrphanFrame_get__frame(t_OrphanFrame *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/ComplexComparator.h"
#include "java/io/Serializable.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/Complex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *ComplexComparator::class$ = NULL;
      jmethodID *ComplexComparator::mids$ = NULL;
      bool ComplexComparator::live$ = false;

      jclass ComplexComparator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/ComplexComparator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_compare_8e26df68632a9ffc] = env->getMethodID(cls, "compare", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexComparator::ComplexComparator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      jint ComplexComparator::compare(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1) const
      {
        return env->callIntMethod(this$, mids$[mid_compare_8e26df68632a9ffc], a0.this$, a1.this$);
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
      static PyObject *t_ComplexComparator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexComparator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexComparator_init_(t_ComplexComparator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexComparator_compare(t_ComplexComparator *self, PyObject *args);

      static PyMethodDef t_ComplexComparator__methods_[] = {
        DECLARE_METHOD(t_ComplexComparator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexComparator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexComparator, compare, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexComparator)[] = {
        { Py_tp_methods, t_ComplexComparator__methods_ },
        { Py_tp_init, (void *) t_ComplexComparator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexComparator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexComparator, t_ComplexComparator, ComplexComparator);

      void t_ComplexComparator::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexComparator), &PY_TYPE_DEF(ComplexComparator), module, "ComplexComparator", 0);
      }

      void t_ComplexComparator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexComparator), "class_", make_descriptor(ComplexComparator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexComparator), "wrapfn_", make_descriptor(t_ComplexComparator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexComparator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexComparator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexComparator::initializeClass, 1)))
          return NULL;
        return t_ComplexComparator::wrap_Object(ComplexComparator(((t_ComplexComparator *) arg)->object.this$));
      }
      static PyObject *t_ComplexComparator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexComparator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexComparator_init_(t_ComplexComparator *self, PyObject *args, PyObject *kwds)
      {
        ComplexComparator object((jobject) NULL);

        INT_CALL(object = ComplexComparator());
        self->object = object;

        return 0;
      }

      static PyObject *t_ComplexComparator_compare(t_ComplexComparator *self, PyObject *args)
      {
        ::org::hipparchus::complex::Complex a0((jobject) NULL);
        ::org::hipparchus::complex::Complex a1((jobject) NULL);
        jint result;

        if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.compare(a0, a1));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compare", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensor.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeDeterminationSensor::class$ = NULL;
              jmethodID *AttitudeDeterminationSensor::mids$ = NULL;
              bool AttitudeDeterminationSensor::live$ = false;

              jclass AttitudeDeterminationSensor::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensor");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getNbSensorNoiseCovariance_d6ab429752e7c267] = env->getMethodID(cls, "getNbSensorNoiseCovariance", "()I");
                  mids$[mid_getSensorFrequency_9981f74b2d109da6] = env->getMethodID(cls, "getSensorFrequency", "()D");
                  mids$[mid_getSensorNoiseCovariance_be783177b060994b] = env->getMethodID(cls, "getSensorNoiseCovariance", "()[D");
                  mids$[mid_getSensorNumber_d6ab429752e7c267] = env->getMethodID(cls, "getSensorNumber", "()I");
                  mids$[mid_getSensorUsed_d2c8eb4129821f0e] = env->getMethodID(cls, "getSensorUsed", "()Ljava/lang/String;");
                  mids$[mid_setNbSensorNoiseCovariance_8fd427ab23829bf5] = env->getMethodID(cls, "setNbSensorNoiseCovariance", "(I)V");
                  mids$[mid_setSensorFrequency_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSensorFrequency", "(D)V");
                  mids$[mid_setSensorNoiseCovariance_a71c45509eaf92d1] = env->getMethodID(cls, "setSensorNoiseCovariance", "([D)V");
                  mids$[mid_setSensorNumber_8fd427ab23829bf5] = env->getMethodID(cls, "setSensorNumber", "(I)V");
                  mids$[mid_setSensorUsed_105e1eadb709d9ac] = env->getMethodID(cls, "setSensorUsed", "(Ljava/lang/String;)V");
                  mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeDeterminationSensor::AttitudeDeterminationSensor() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              jint AttitudeDeterminationSensor::getNbSensorNoiseCovariance() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbSensorNoiseCovariance_d6ab429752e7c267]);
              }

              jdouble AttitudeDeterminationSensor::getSensorFrequency() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSensorFrequency_9981f74b2d109da6]);
              }

              JArray< jdouble > AttitudeDeterminationSensor::getSensorNoiseCovariance() const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSensorNoiseCovariance_be783177b060994b]));
              }

              jint AttitudeDeterminationSensor::getSensorNumber() const
              {
                return env->callIntMethod(this$, mids$[mid_getSensorNumber_d6ab429752e7c267]);
              }

              ::java::lang::String AttitudeDeterminationSensor::getSensorUsed() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorUsed_d2c8eb4129821f0e]));
              }

              void AttitudeDeterminationSensor::setNbSensorNoiseCovariance(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNbSensorNoiseCovariance_8fd427ab23829bf5], a0);
              }

              void AttitudeDeterminationSensor::setSensorFrequency(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensorFrequency_1ad26e8c8c0cd65b], a0);
              }

              void AttitudeDeterminationSensor::setSensorNoiseCovariance(const JArray< jdouble > & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensorNoiseCovariance_a71c45509eaf92d1], a0.this$);
              }

              void AttitudeDeterminationSensor::setSensorNumber(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensorNumber_8fd427ab23829bf5], a0);
              }

              void AttitudeDeterminationSensor::setSensorUsed(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensorUsed_105e1eadb709d9ac], a0.this$);
              }

              void AttitudeDeterminationSensor::validate(jdouble a0) const
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
              static PyObject *t_AttitudeDeterminationSensor_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensor_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeDeterminationSensor_init_(t_AttitudeDeterminationSensor *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeDeterminationSensor_getNbSensorNoiseCovariance(t_AttitudeDeterminationSensor *self);
              static PyObject *t_AttitudeDeterminationSensor_getSensorFrequency(t_AttitudeDeterminationSensor *self);
              static PyObject *t_AttitudeDeterminationSensor_getSensorNoiseCovariance(t_AttitudeDeterminationSensor *self);
              static PyObject *t_AttitudeDeterminationSensor_getSensorNumber(t_AttitudeDeterminationSensor *self);
              static PyObject *t_AttitudeDeterminationSensor_getSensorUsed(t_AttitudeDeterminationSensor *self);
              static PyObject *t_AttitudeDeterminationSensor_setNbSensorNoiseCovariance(t_AttitudeDeterminationSensor *self, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensor_setSensorFrequency(t_AttitudeDeterminationSensor *self, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensor_setSensorNoiseCovariance(t_AttitudeDeterminationSensor *self, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensor_setSensorNumber(t_AttitudeDeterminationSensor *self, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensor_setSensorUsed(t_AttitudeDeterminationSensor *self, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensor_validate(t_AttitudeDeterminationSensor *self, PyObject *args);
              static PyObject *t_AttitudeDeterminationSensor_get__nbSensorNoiseCovariance(t_AttitudeDeterminationSensor *self, void *data);
              static int t_AttitudeDeterminationSensor_set__nbSensorNoiseCovariance(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDeterminationSensor_get__sensorFrequency(t_AttitudeDeterminationSensor *self, void *data);
              static int t_AttitudeDeterminationSensor_set__sensorFrequency(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDeterminationSensor_get__sensorNoiseCovariance(t_AttitudeDeterminationSensor *self, void *data);
              static int t_AttitudeDeterminationSensor_set__sensorNoiseCovariance(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDeterminationSensor_get__sensorNumber(t_AttitudeDeterminationSensor *self, void *data);
              static int t_AttitudeDeterminationSensor_set__sensorNumber(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDeterminationSensor_get__sensorUsed(t_AttitudeDeterminationSensor *self, void *data);
              static int t_AttitudeDeterminationSensor_set__sensorUsed(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data);
              static PyGetSetDef t_AttitudeDeterminationSensor__fields_[] = {
                DECLARE_GETSET_FIELD(t_AttitudeDeterminationSensor, nbSensorNoiseCovariance),
                DECLARE_GETSET_FIELD(t_AttitudeDeterminationSensor, sensorFrequency),
                DECLARE_GETSET_FIELD(t_AttitudeDeterminationSensor, sensorNoiseCovariance),
                DECLARE_GETSET_FIELD(t_AttitudeDeterminationSensor, sensorNumber),
                DECLARE_GETSET_FIELD(t_AttitudeDeterminationSensor, sensorUsed),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeDeterminationSensor__methods_[] = {
                DECLARE_METHOD(t_AttitudeDeterminationSensor, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, getNbSensorNoiseCovariance, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, getSensorFrequency, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, getSensorNoiseCovariance, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, getSensorNumber, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, getSensorUsed, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, setNbSensorNoiseCovariance, METH_O),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, setSensorFrequency, METH_O),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, setSensorNoiseCovariance, METH_O),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, setSensorNumber, METH_O),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, setSensorUsed, METH_O),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeDeterminationSensor)[] = {
                { Py_tp_methods, t_AttitudeDeterminationSensor__methods_ },
                { Py_tp_init, (void *) t_AttitudeDeterminationSensor_init_ },
                { Py_tp_getset, t_AttitudeDeterminationSensor__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeDeterminationSensor)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AttitudeDeterminationSensor, t_AttitudeDeterminationSensor, AttitudeDeterminationSensor);

              void t_AttitudeDeterminationSensor::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeDeterminationSensor), &PY_TYPE_DEF(AttitudeDeterminationSensor), module, "AttitudeDeterminationSensor", 0);
              }

              void t_AttitudeDeterminationSensor::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensor), "class_", make_descriptor(AttitudeDeterminationSensor::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensor), "wrapfn_", make_descriptor(t_AttitudeDeterminationSensor::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensor), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeDeterminationSensor_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeDeterminationSensor::initializeClass, 1)))
                  return NULL;
                return t_AttitudeDeterminationSensor::wrap_Object(AttitudeDeterminationSensor(((t_AttitudeDeterminationSensor *) arg)->object.this$));
              }
              static PyObject *t_AttitudeDeterminationSensor_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeDeterminationSensor::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeDeterminationSensor_init_(t_AttitudeDeterminationSensor *self, PyObject *args, PyObject *kwds)
              {
                AttitudeDeterminationSensor object((jobject) NULL);

                INT_CALL(object = AttitudeDeterminationSensor());
                self->object = object;

                return 0;
              }

              static PyObject *t_AttitudeDeterminationSensor_getNbSensorNoiseCovariance(t_AttitudeDeterminationSensor *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNbSensorNoiseCovariance());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AttitudeDeterminationSensor_getSensorFrequency(t_AttitudeDeterminationSensor *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSensorFrequency());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeDeterminationSensor_getSensorNoiseCovariance(t_AttitudeDeterminationSensor *self)
              {
                JArray< jdouble > result((jobject) NULL);
                OBJ_CALL(result = self->object.getSensorNoiseCovariance());
                return result.wrap();
              }

              static PyObject *t_AttitudeDeterminationSensor_getSensorNumber(t_AttitudeDeterminationSensor *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSensorNumber());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AttitudeDeterminationSensor_getSensorUsed(t_AttitudeDeterminationSensor *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getSensorUsed());
                return j2p(result);
              }

              static PyObject *t_AttitudeDeterminationSensor_setNbSensorNoiseCovariance(t_AttitudeDeterminationSensor *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNbSensorNoiseCovariance(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNbSensorNoiseCovariance", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDeterminationSensor_setSensorFrequency(t_AttitudeDeterminationSensor *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSensorFrequency(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSensorFrequency", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDeterminationSensor_setSensorNoiseCovariance(t_AttitudeDeterminationSensor *self, PyObject *arg)
              {
                JArray< jdouble > a0((jobject) NULL);

                if (!parseArg(arg, "[D", &a0))
                {
                  OBJ_CALL(self->object.setSensorNoiseCovariance(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSensorNoiseCovariance", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDeterminationSensor_setSensorNumber(t_AttitudeDeterminationSensor *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSensorNumber(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSensorNumber", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDeterminationSensor_setSensorUsed(t_AttitudeDeterminationSensor *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setSensorUsed(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSensorUsed", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDeterminationSensor_validate(t_AttitudeDeterminationSensor *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AttitudeDeterminationSensor), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AttitudeDeterminationSensor_get__nbSensorNoiseCovariance(t_AttitudeDeterminationSensor *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNbSensorNoiseCovariance());
                return PyLong_FromLong((long) value);
              }
              static int t_AttitudeDeterminationSensor_set__nbSensorNoiseCovariance(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNbSensorNoiseCovariance(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nbSensorNoiseCovariance", arg);
                return -1;
              }

              static PyObject *t_AttitudeDeterminationSensor_get__sensorFrequency(t_AttitudeDeterminationSensor *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSensorFrequency());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeDeterminationSensor_set__sensorFrequency(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSensorFrequency(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sensorFrequency", arg);
                return -1;
              }

              static PyObject *t_AttitudeDeterminationSensor_get__sensorNoiseCovariance(t_AttitudeDeterminationSensor *self, void *data)
              {
                JArray< jdouble > value((jobject) NULL);
                OBJ_CALL(value = self->object.getSensorNoiseCovariance());
                return value.wrap();
              }
              static int t_AttitudeDeterminationSensor_set__sensorNoiseCovariance(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data)
              {
                {
                  JArray< jdouble > value((jobject) NULL);
                  if (!parseArg(arg, "[D", &value))
                  {
                    INT_CALL(self->object.setSensorNoiseCovariance(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sensorNoiseCovariance", arg);
                return -1;
              }

              static PyObject *t_AttitudeDeterminationSensor_get__sensorNumber(t_AttitudeDeterminationSensor *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSensorNumber());
                return PyLong_FromLong((long) value);
              }
              static int t_AttitudeDeterminationSensor_set__sensorNumber(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSensorNumber(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sensorNumber", arg);
                return -1;
              }

              static PyObject *t_AttitudeDeterminationSensor_get__sensorUsed(t_AttitudeDeterminationSensor *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getSensorUsed());
                return j2p(value);
              }
              static int t_AttitudeDeterminationSensor_set__sensorUsed(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setSensorUsed(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sensorUsed", arg);
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
#include "org/hipparchus/linear/CholeskyDecomposition.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *CholeskyDecomposition::class$ = NULL;
      jmethodID *CholeskyDecomposition::mids$ = NULL;
      bool CholeskyDecomposition::live$ = false;
      jdouble CholeskyDecomposition::DEFAULT_ABSOLUTE_POSITIVITY_THRESHOLD = (jdouble) 0;
      jdouble CholeskyDecomposition::DEFAULT_RELATIVE_SYMMETRY_THRESHOLD = (jdouble) 0;

      jclass CholeskyDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/CholeskyDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f5364c9a9d9cbd53] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_b48d55403465ef3f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DD)V");
          mids$[mid_getDeterminant_9981f74b2d109da6] = env->getMethodID(cls, "getDeterminant", "()D");
          mids$[mid_getL_b2eebabce70526d8] = env->getMethodID(cls, "getL", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getLT_b2eebabce70526d8] = env->getMethodID(cls, "getLT", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getSolver_ac3e6aafa2c6c596] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_ABSOLUTE_POSITIVITY_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_ABSOLUTE_POSITIVITY_THRESHOLD");
          DEFAULT_RELATIVE_SYMMETRY_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_RELATIVE_SYMMETRY_THRESHOLD");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CholeskyDecomposition::CholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5364c9a9d9cbd53, a0.this$)) {}

      CholeskyDecomposition::CholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b48d55403465ef3f, a0.this$, a1, a2)) {}

      jdouble CholeskyDecomposition::getDeterminant() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDeterminant_9981f74b2d109da6]);
      }

      ::org::hipparchus::linear::RealMatrix CholeskyDecomposition::getL() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getL_b2eebabce70526d8]));
      }

      ::org::hipparchus::linear::RealMatrix CholeskyDecomposition::getLT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getLT_b2eebabce70526d8]));
      }

      ::org::hipparchus::linear::DecompositionSolver CholeskyDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_ac3e6aafa2c6c596]));
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
      static PyObject *t_CholeskyDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CholeskyDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CholeskyDecomposition_init_(t_CholeskyDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CholeskyDecomposition_getDeterminant(t_CholeskyDecomposition *self);
      static PyObject *t_CholeskyDecomposition_getL(t_CholeskyDecomposition *self);
      static PyObject *t_CholeskyDecomposition_getLT(t_CholeskyDecomposition *self);
      static PyObject *t_CholeskyDecomposition_getSolver(t_CholeskyDecomposition *self);
      static PyObject *t_CholeskyDecomposition_get__determinant(t_CholeskyDecomposition *self, void *data);
      static PyObject *t_CholeskyDecomposition_get__l(t_CholeskyDecomposition *self, void *data);
      static PyObject *t_CholeskyDecomposition_get__lT(t_CholeskyDecomposition *self, void *data);
      static PyObject *t_CholeskyDecomposition_get__solver(t_CholeskyDecomposition *self, void *data);
      static PyGetSetDef t_CholeskyDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_CholeskyDecomposition, determinant),
        DECLARE_GET_FIELD(t_CholeskyDecomposition, l),
        DECLARE_GET_FIELD(t_CholeskyDecomposition, lT),
        DECLARE_GET_FIELD(t_CholeskyDecomposition, solver),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CholeskyDecomposition__methods_[] = {
        DECLARE_METHOD(t_CholeskyDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CholeskyDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CholeskyDecomposition, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_CholeskyDecomposition, getL, METH_NOARGS),
        DECLARE_METHOD(t_CholeskyDecomposition, getLT, METH_NOARGS),
        DECLARE_METHOD(t_CholeskyDecomposition, getSolver, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CholeskyDecomposition)[] = {
        { Py_tp_methods, t_CholeskyDecomposition__methods_ },
        { Py_tp_init, (void *) t_CholeskyDecomposition_init_ },
        { Py_tp_getset, t_CholeskyDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CholeskyDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CholeskyDecomposition, t_CholeskyDecomposition, CholeskyDecomposition);

      void t_CholeskyDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(CholeskyDecomposition), &PY_TYPE_DEF(CholeskyDecomposition), module, "CholeskyDecomposition", 0);
      }

      void t_CholeskyDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposition), "class_", make_descriptor(CholeskyDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposition), "wrapfn_", make_descriptor(t_CholeskyDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposition), "boxfn_", make_descriptor(boxObject));
        env->getClass(CholeskyDecomposition::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposition), "DEFAULT_ABSOLUTE_POSITIVITY_THRESHOLD", make_descriptor(CholeskyDecomposition::DEFAULT_ABSOLUTE_POSITIVITY_THRESHOLD));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposition), "DEFAULT_RELATIVE_SYMMETRY_THRESHOLD", make_descriptor(CholeskyDecomposition::DEFAULT_RELATIVE_SYMMETRY_THRESHOLD));
      }

      static PyObject *t_CholeskyDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CholeskyDecomposition::initializeClass, 1)))
          return NULL;
        return t_CholeskyDecomposition::wrap_Object(CholeskyDecomposition(((t_CholeskyDecomposition *) arg)->object.this$));
      }
      static PyObject *t_CholeskyDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CholeskyDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CholeskyDecomposition_init_(t_CholeskyDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            CholeskyDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = CholeskyDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            CholeskyDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kDD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = CholeskyDecomposition(a0, a1, a2));
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

      static PyObject *t_CholeskyDecomposition_getDeterminant(t_CholeskyDecomposition *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDeterminant());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CholeskyDecomposition_getL(t_CholeskyDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getL());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_CholeskyDecomposition_getLT(t_CholeskyDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getLT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_CholeskyDecomposition_getSolver(t_CholeskyDecomposition *self)
      {
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
      }

      static PyObject *t_CholeskyDecomposition_get__determinant(t_CholeskyDecomposition *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDeterminant());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CholeskyDecomposition_get__l(t_CholeskyDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getL());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_CholeskyDecomposition_get__lT(t_CholeskyDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getLT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_CholeskyDecomposition_get__solver(t_CholeskyDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::DecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/PythonSmoothFieldOfView.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *PythonSmoothFieldOfView::class$ = NULL;
        jmethodID *PythonSmoothFieldOfView::mids$ = NULL;
        bool PythonSmoothFieldOfView::live$ = false;

        jclass PythonSmoothFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/PythonSmoothFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_dcbb005903c9a2a8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_directionAt_98a3eeef43dce47a] = env->getMethodID(cls, "directionAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_offsetFromBoundary_7ed10fb0bfbbf1c4] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_53c542efd8574582] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonSmoothFieldOfView::PythonSmoothFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::org::orekit::geometry::fov::SmoothFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_dcbb005903c9a2a8, a0.this$, a1.this$, a2)) {}

        void PythonSmoothFieldOfView::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonSmoothFieldOfView::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonSmoothFieldOfView::pythonExtension(jlong a0) const
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
    namespace geometry {
      namespace fov {
        static PyObject *t_PythonSmoothFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonSmoothFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonSmoothFieldOfView_init_(t_PythonSmoothFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonSmoothFieldOfView_finalize(t_PythonSmoothFieldOfView *self);
        static PyObject *t_PythonSmoothFieldOfView_pythonExtension(t_PythonSmoothFieldOfView *self, PyObject *args);
        static jobject JNICALL t_PythonSmoothFieldOfView_directionAt0(JNIEnv *jenv, jobject jobj, jdouble a0);
        static jdouble JNICALL t_PythonSmoothFieldOfView_offsetFromBoundary1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2);
        static jobject JNICALL t_PythonSmoothFieldOfView_projectToBoundary2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonSmoothFieldOfView_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonSmoothFieldOfView_get__self(t_PythonSmoothFieldOfView *self, void *data);
        static PyGetSetDef t_PythonSmoothFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_PythonSmoothFieldOfView, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonSmoothFieldOfView__methods_[] = {
          DECLARE_METHOD(t_PythonSmoothFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSmoothFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSmoothFieldOfView, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonSmoothFieldOfView, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonSmoothFieldOfView)[] = {
          { Py_tp_methods, t_PythonSmoothFieldOfView__methods_ },
          { Py_tp_init, (void *) t_PythonSmoothFieldOfView_init_ },
          { Py_tp_getset, t_PythonSmoothFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonSmoothFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::SmoothFieldOfView),
          NULL
        };

        DEFINE_TYPE(PythonSmoothFieldOfView, t_PythonSmoothFieldOfView, PythonSmoothFieldOfView);

        void t_PythonSmoothFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonSmoothFieldOfView), &PY_TYPE_DEF(PythonSmoothFieldOfView), module, "PythonSmoothFieldOfView", 1);
        }

        void t_PythonSmoothFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSmoothFieldOfView), "class_", make_descriptor(PythonSmoothFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSmoothFieldOfView), "wrapfn_", make_descriptor(t_PythonSmoothFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSmoothFieldOfView), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonSmoothFieldOfView::initializeClass);
          JNINativeMethod methods[] = {
            { "directionAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonSmoothFieldOfView_directionAt0 },
            { "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D", (void *) t_PythonSmoothFieldOfView_offsetFromBoundary1 },
            { "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonSmoothFieldOfView_projectToBoundary2 },
            { "pythonDecRef", "()V", (void *) t_PythonSmoothFieldOfView_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonSmoothFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonSmoothFieldOfView::initializeClass, 1)))
            return NULL;
          return t_PythonSmoothFieldOfView::wrap_Object(PythonSmoothFieldOfView(((t_PythonSmoothFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_PythonSmoothFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonSmoothFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonSmoothFieldOfView_init_(t_PythonSmoothFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          PythonSmoothFieldOfView object((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = PythonSmoothFieldOfView(a0, a1, a2));
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

        static PyObject *t_PythonSmoothFieldOfView_finalize(t_PythonSmoothFieldOfView *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonSmoothFieldOfView_pythonExtension(t_PythonSmoothFieldOfView *self, PyObject *args)
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

        static jobject JNICALL t_PythonSmoothFieldOfView_directionAt0(JNIEnv *jenv, jobject jobj, jdouble a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSmoothFieldOfView::mids$[PythonSmoothFieldOfView::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "directionAt", "d", (double) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("directionAt", result);
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

        static jdouble JNICALL t_PythonSmoothFieldOfView_offsetFromBoundary1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSmoothFieldOfView::mids$[PythonSmoothFieldOfView::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *o2 = ::org::orekit::propagation::events::t_VisibilityTrigger::wrap_Object(::org::orekit::propagation::events::VisibilityTrigger(a2));
          PyObject *result = PyObject_CallMethod(obj, "offsetFromBoundary", "OdO", o0, (double) a1, o2);
          Py_DECREF(o0);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("offsetFromBoundary", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonSmoothFieldOfView_projectToBoundary2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSmoothFieldOfView::mids$[PythonSmoothFieldOfView::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *result = PyObject_CallMethod(obj, "projectToBoundary", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("projectToBoundary", result);
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

        static void JNICALL t_PythonSmoothFieldOfView_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSmoothFieldOfView::mids$[PythonSmoothFieldOfView::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonSmoothFieldOfView::mids$[PythonSmoothFieldOfView::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonSmoothFieldOfView_get__self(t_PythonSmoothFieldOfView *self, void *data)
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
#include "java/util/Random.h"
#include "java/lang/Class.h"
#include "java/util/stream/DoubleStream.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Random::class$ = NULL;
    jmethodID *Random::mids$ = NULL;
    bool Random::live$ = false;

    jclass Random::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Random");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_f5bbab7e97879358] = env->getMethodID(cls, "<init>", "(J)V");
        mids$[mid_doubles_98f7f3ef9d3d1b57] = env->getMethodID(cls, "doubles", "()Ljava/util/stream/DoubleStream;");
        mids$[mid_doubles_0b951659a4ffdc52] = env->getMethodID(cls, "doubles", "(J)Ljava/util/stream/DoubleStream;");
        mids$[mid_doubles_f78d42f349780c18] = env->getMethodID(cls, "doubles", "(DD)Ljava/util/stream/DoubleStream;");
        mids$[mid_doubles_d304689c3764ed10] = env->getMethodID(cls, "doubles", "(JDD)Ljava/util/stream/DoubleStream;");
        mids$[mid_nextBoolean_eee3de00fe971136] = env->getMethodID(cls, "nextBoolean", "()Z");
        mids$[mid_nextBytes_bba2a19638de22ff] = env->getMethodID(cls, "nextBytes", "([B)V");
        mids$[mid_nextDouble_9981f74b2d109da6] = env->getMethodID(cls, "nextDouble", "()D");
        mids$[mid_nextFloat_0e3b995f823d65ff] = env->getMethodID(cls, "nextFloat", "()F");
        mids$[mid_nextGaussian_9981f74b2d109da6] = env->getMethodID(cls, "nextGaussian", "()D");
        mids$[mid_nextInt_d6ab429752e7c267] = env->getMethodID(cls, "nextInt", "()I");
        mids$[mid_nextInt_d938fc64e8c6df2d] = env->getMethodID(cls, "nextInt", "(I)I");
        mids$[mid_nextLong_42c72b98e3c2e08a] = env->getMethodID(cls, "nextLong", "()J");
        mids$[mid_setSeed_f5bbab7e97879358] = env->getMethodID(cls, "setSeed", "(J)V");
        mids$[mid_next_d938fc64e8c6df2d] = env->getMethodID(cls, "next", "(I)I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Random::Random() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    Random::Random(jlong a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5bbab7e97879358, a0)) {}

    ::java::util::stream::DoubleStream Random::doubles() const
    {
      return ::java::util::stream::DoubleStream(env->callObjectMethod(this$, mids$[mid_doubles_98f7f3ef9d3d1b57]));
    }

    ::java::util::stream::DoubleStream Random::doubles(jlong a0) const
    {
      return ::java::util::stream::DoubleStream(env->callObjectMethod(this$, mids$[mid_doubles_0b951659a4ffdc52], a0));
    }

    ::java::util::stream::DoubleStream Random::doubles(jdouble a0, jdouble a1) const
    {
      return ::java::util::stream::DoubleStream(env->callObjectMethod(this$, mids$[mid_doubles_f78d42f349780c18], a0, a1));
    }

    ::java::util::stream::DoubleStream Random::doubles(jlong a0, jdouble a1, jdouble a2) const
    {
      return ::java::util::stream::DoubleStream(env->callObjectMethod(this$, mids$[mid_doubles_d304689c3764ed10], a0, a1, a2));
    }

    jboolean Random::nextBoolean() const
    {
      return env->callBooleanMethod(this$, mids$[mid_nextBoolean_eee3de00fe971136]);
    }

    void Random::nextBytes(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_nextBytes_bba2a19638de22ff], a0.this$);
    }

    jdouble Random::nextDouble() const
    {
      return env->callDoubleMethod(this$, mids$[mid_nextDouble_9981f74b2d109da6]);
    }

    jfloat Random::nextFloat() const
    {
      return env->callFloatMethod(this$, mids$[mid_nextFloat_0e3b995f823d65ff]);
    }

    jdouble Random::nextGaussian() const
    {
      return env->callDoubleMethod(this$, mids$[mid_nextGaussian_9981f74b2d109da6]);
    }

    jint Random::nextInt() const
    {
      return env->callIntMethod(this$, mids$[mid_nextInt_d6ab429752e7c267]);
    }

    jint Random::nextInt(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_nextInt_d938fc64e8c6df2d], a0);
    }

    jlong Random::nextLong() const
    {
      return env->callLongMethod(this$, mids$[mid_nextLong_42c72b98e3c2e08a]);
    }

    void Random::setSeed(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setSeed_f5bbab7e97879358], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Random_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Random_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Random_init_(t_Random *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Random_doubles(t_Random *self, PyObject *args);
    static PyObject *t_Random_nextBoolean(t_Random *self);
    static PyObject *t_Random_nextBytes(t_Random *self, PyObject *arg);
    static PyObject *t_Random_nextDouble(t_Random *self);
    static PyObject *t_Random_nextFloat(t_Random *self);
    static PyObject *t_Random_nextGaussian(t_Random *self);
    static PyObject *t_Random_nextInt(t_Random *self, PyObject *args);
    static PyObject *t_Random_nextLong(t_Random *self);
    static PyObject *t_Random_setSeed(t_Random *self, PyObject *arg);
    static int t_Random_set__seed(t_Random *self, PyObject *arg, void *data);
    static PyGetSetDef t_Random__fields_[] = {
      DECLARE_SET_FIELD(t_Random, seed),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Random__methods_[] = {
      DECLARE_METHOD(t_Random, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Random, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Random, doubles, METH_VARARGS),
      DECLARE_METHOD(t_Random, nextBoolean, METH_NOARGS),
      DECLARE_METHOD(t_Random, nextBytes, METH_O),
      DECLARE_METHOD(t_Random, nextDouble, METH_NOARGS),
      DECLARE_METHOD(t_Random, nextFloat, METH_NOARGS),
      DECLARE_METHOD(t_Random, nextGaussian, METH_NOARGS),
      DECLARE_METHOD(t_Random, nextInt, METH_VARARGS),
      DECLARE_METHOD(t_Random, nextLong, METH_NOARGS),
      DECLARE_METHOD(t_Random, setSeed, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Random)[] = {
      { Py_tp_methods, t_Random__methods_ },
      { Py_tp_init, (void *) t_Random_init_ },
      { Py_tp_getset, t_Random__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Random)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Random, t_Random, Random);

    void t_Random::install(PyObject *module)
    {
      installType(&PY_TYPE(Random), &PY_TYPE_DEF(Random), module, "Random", 0);
    }

    void t_Random::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Random), "class_", make_descriptor(Random::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Random), "wrapfn_", make_descriptor(t_Random::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Random), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Random_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Random::initializeClass, 1)))
        return NULL;
      return t_Random::wrap_Object(Random(((t_Random *) arg)->object.this$));
    }
    static PyObject *t_Random_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Random::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Random_init_(t_Random *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Random object((jobject) NULL);

          INT_CALL(object = Random());
          self->object = object;
          break;
        }
       case 1:
        {
          jlong a0;
          Random object((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            INT_CALL(object = Random(a0));
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

    static PyObject *t_Random_doubles(t_Random *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::stream::DoubleStream result((jobject) NULL);
          OBJ_CALL(result = self->object.doubles());
          return ::java::util::stream::t_DoubleStream::wrap_Object(result);
        }
        break;
       case 1:
        {
          jlong a0;
          ::java::util::stream::DoubleStream result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = self->object.doubles(a0));
            return ::java::util::stream::t_DoubleStream::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          jdouble a0;
          jdouble a1;
          ::java::util::stream::DoubleStream result((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.doubles(a0, a1));
            return ::java::util::stream::t_DoubleStream::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          jlong a0;
          jdouble a1;
          jdouble a2;
          ::java::util::stream::DoubleStream result((jobject) NULL);

          if (!parseArgs(args, "JDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.doubles(a0, a1, a2));
            return ::java::util::stream::t_DoubleStream::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "doubles", args);
      return NULL;
    }

    static PyObject *t_Random_nextBoolean(t_Random *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.nextBoolean());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Random_nextBytes(t_Random *self, PyObject *arg)
    {
      JArray< jbyte > a0((jobject) NULL);

      if (!parseArg(arg, "[B", &a0))
      {
        OBJ_CALL(self->object.nextBytes(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "nextBytes", arg);
      return NULL;
    }

    static PyObject *t_Random_nextDouble(t_Random *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.nextDouble());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_Random_nextFloat(t_Random *self)
    {
      jfloat result;
      OBJ_CALL(result = self->object.nextFloat());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_Random_nextGaussian(t_Random *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.nextGaussian());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_Random_nextInt(t_Random *self, PyObject *args)
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

      PyErr_SetArgsError((PyObject *) self, "nextInt", args);
      return NULL;
    }

    static PyObject *t_Random_nextLong(t_Random *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.nextLong());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_Random_setSeed(t_Random *self, PyObject *arg)
    {
      jlong a0;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(self->object.setSeed(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setSeed", arg);
      return NULL;
    }

    static int t_Random_set__seed(t_Random *self, PyObject *arg, void *data)
    {
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/GeometryFreeCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *GeometryFreeCombination::class$ = NULL;
          jmethodID *GeometryFreeCombination::mids$ = NULL;
          bool GeometryFreeCombination::live$ = false;

          jclass GeometryFreeCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/GeometryFreeCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_ac28f5c378fae636] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedFrequency_9364fb0b7015b098] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");

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
          static PyObject *t_GeometryFreeCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GeometryFreeCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_GeometryFreeCombination__methods_[] = {
            DECLARE_METHOD(t_GeometryFreeCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeometryFreeCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GeometryFreeCombination)[] = {
            { Py_tp_methods, t_GeometryFreeCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GeometryFreeCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(GeometryFreeCombination, t_GeometryFreeCombination, GeometryFreeCombination);

          void t_GeometryFreeCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(GeometryFreeCombination), &PY_TYPE_DEF(GeometryFreeCombination), module, "GeometryFreeCombination", 0);
          }

          void t_GeometryFreeCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCombination), "class_", make_descriptor(GeometryFreeCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCombination), "wrapfn_", make_descriptor(t_GeometryFreeCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GeometryFreeCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GeometryFreeCombination::initializeClass, 1)))
              return NULL;
            return t_GeometryFreeCombination::wrap_Object(GeometryFreeCombination(((t_GeometryFreeCombination *) arg)->object.this$));
          }
          static PyObject *t_GeometryFreeCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GeometryFreeCombination::initializeClass, 0))
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
#include "org/orekit/propagation/events/ElevationDetector.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "org/orekit/utils/ElevationMask.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/orekit/propagation/events/ElevationDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *ElevationDetector::class$ = NULL;
        jmethodID *ElevationDetector::mids$ = NULL;
        bool ElevationDetector::live$ = false;

        jclass ElevationDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/ElevationDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2c9031d766545c51] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_init$_aac1d9a67653fe60] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getElevationMask_6e01f84e52d7314a] = env->getMethodID(cls, "getElevationMask", "()Lorg/orekit/utils/ElevationMask;");
            mids$[mid_getMinElevation_9981f74b2d109da6] = env->getMethodID(cls, "getMinElevation", "()D");
            mids$[mid_getRefractionModel_426fe98fa4f4b893] = env->getMethodID(cls, "getRefractionModel", "()Lorg/orekit/models/AtmosphericRefractionModel;");
            mids$[mid_getTopocentricFrame_d0e5c3c9d5578806] = env->getMethodID(cls, "getTopocentricFrame", "()Lorg/orekit/frames/TopocentricFrame;");
            mids$[mid_withConstantElevation_e262ce557a988cfd] = env->getMethodID(cls, "withConstantElevation", "(D)Lorg/orekit/propagation/events/ElevationDetector;");
            mids$[mid_withElevationMask_273b44f02a77e4f8] = env->getMethodID(cls, "withElevationMask", "(Lorg/orekit/utils/ElevationMask;)Lorg/orekit/propagation/events/ElevationDetector;");
            mids$[mid_withRefraction_17c201afabf9e24a] = env->getMethodID(cls, "withRefraction", "(Lorg/orekit/models/AtmosphericRefractionModel;)Lorg/orekit/propagation/events/ElevationDetector;");
            mids$[mid_create_32f771b3ec62c778] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/ElevationDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ElevationDetector::ElevationDetector(const ::org::orekit::frames::TopocentricFrame & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_2c9031d766545c51, a0.this$)) {}

        ElevationDetector::ElevationDetector(jdouble a0, jdouble a1, const ::org::orekit::frames::TopocentricFrame & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_aac1d9a67653fe60, a0, a1, a2.this$)) {}

        jdouble ElevationDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        ::org::orekit::utils::ElevationMask ElevationDetector::getElevationMask() const
        {
          return ::org::orekit::utils::ElevationMask(env->callObjectMethod(this$, mids$[mid_getElevationMask_6e01f84e52d7314a]));
        }

        jdouble ElevationDetector::getMinElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinElevation_9981f74b2d109da6]);
        }

        ::org::orekit::models::AtmosphericRefractionModel ElevationDetector::getRefractionModel() const
        {
          return ::org::orekit::models::AtmosphericRefractionModel(env->callObjectMethod(this$, mids$[mid_getRefractionModel_426fe98fa4f4b893]));
        }

        ::org::orekit::frames::TopocentricFrame ElevationDetector::getTopocentricFrame() const
        {
          return ::org::orekit::frames::TopocentricFrame(env->callObjectMethod(this$, mids$[mid_getTopocentricFrame_d0e5c3c9d5578806]));
        }

        ElevationDetector ElevationDetector::withConstantElevation(jdouble a0) const
        {
          return ElevationDetector(env->callObjectMethod(this$, mids$[mid_withConstantElevation_e262ce557a988cfd], a0));
        }

        ElevationDetector ElevationDetector::withElevationMask(const ::org::orekit::utils::ElevationMask & a0) const
        {
          return ElevationDetector(env->callObjectMethod(this$, mids$[mid_withElevationMask_273b44f02a77e4f8], a0.this$));
        }

        ElevationDetector ElevationDetector::withRefraction(const ::org::orekit::models::AtmosphericRefractionModel & a0) const
        {
          return ElevationDetector(env->callObjectMethod(this$, mids$[mid_withRefraction_17c201afabf9e24a], a0.this$));
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
        static PyObject *t_ElevationDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ElevationDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ElevationDetector_of_(t_ElevationDetector *self, PyObject *args);
        static int t_ElevationDetector_init_(t_ElevationDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ElevationDetector_g(t_ElevationDetector *self, PyObject *args);
        static PyObject *t_ElevationDetector_getElevationMask(t_ElevationDetector *self);
        static PyObject *t_ElevationDetector_getMinElevation(t_ElevationDetector *self);
        static PyObject *t_ElevationDetector_getRefractionModel(t_ElevationDetector *self);
        static PyObject *t_ElevationDetector_getTopocentricFrame(t_ElevationDetector *self);
        static PyObject *t_ElevationDetector_withConstantElevation(t_ElevationDetector *self, PyObject *arg);
        static PyObject *t_ElevationDetector_withElevationMask(t_ElevationDetector *self, PyObject *arg);
        static PyObject *t_ElevationDetector_withRefraction(t_ElevationDetector *self, PyObject *arg);
        static PyObject *t_ElevationDetector_get__elevationMask(t_ElevationDetector *self, void *data);
        static PyObject *t_ElevationDetector_get__minElevation(t_ElevationDetector *self, void *data);
        static PyObject *t_ElevationDetector_get__refractionModel(t_ElevationDetector *self, void *data);
        static PyObject *t_ElevationDetector_get__topocentricFrame(t_ElevationDetector *self, void *data);
        static PyObject *t_ElevationDetector_get__parameters_(t_ElevationDetector *self, void *data);
        static PyGetSetDef t_ElevationDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ElevationDetector, elevationMask),
          DECLARE_GET_FIELD(t_ElevationDetector, minElevation),
          DECLARE_GET_FIELD(t_ElevationDetector, refractionModel),
          DECLARE_GET_FIELD(t_ElevationDetector, topocentricFrame),
          DECLARE_GET_FIELD(t_ElevationDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ElevationDetector__methods_[] = {
          DECLARE_METHOD(t_ElevationDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ElevationDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ElevationDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_ElevationDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_ElevationDetector, getElevationMask, METH_NOARGS),
          DECLARE_METHOD(t_ElevationDetector, getMinElevation, METH_NOARGS),
          DECLARE_METHOD(t_ElevationDetector, getRefractionModel, METH_NOARGS),
          DECLARE_METHOD(t_ElevationDetector, getTopocentricFrame, METH_NOARGS),
          DECLARE_METHOD(t_ElevationDetector, withConstantElevation, METH_O),
          DECLARE_METHOD(t_ElevationDetector, withElevationMask, METH_O),
          DECLARE_METHOD(t_ElevationDetector, withRefraction, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ElevationDetector)[] = {
          { Py_tp_methods, t_ElevationDetector__methods_ },
          { Py_tp_init, (void *) t_ElevationDetector_init_ },
          { Py_tp_getset, t_ElevationDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ElevationDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ElevationDetector, t_ElevationDetector, ElevationDetector);
        PyObject *t_ElevationDetector::wrap_Object(const ElevationDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ElevationDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ElevationDetector *self = (t_ElevationDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ElevationDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ElevationDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ElevationDetector *self = (t_ElevationDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ElevationDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ElevationDetector), &PY_TYPE_DEF(ElevationDetector), module, "ElevationDetector", 0);
        }

        void t_ElevationDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationDetector), "class_", make_descriptor(ElevationDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationDetector), "wrapfn_", make_descriptor(t_ElevationDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ElevationDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ElevationDetector::initializeClass, 1)))
            return NULL;
          return t_ElevationDetector::wrap_Object(ElevationDetector(((t_ElevationDetector *) arg)->object.this$));
        }
        static PyObject *t_ElevationDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ElevationDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ElevationDetector_of_(t_ElevationDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ElevationDetector_init_(t_ElevationDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::frames::TopocentricFrame a0((jobject) NULL);
              ElevationDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::frames::TopocentricFrame::initializeClass, &a0))
              {
                INT_CALL(object = ElevationDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ElevationDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::frames::TopocentricFrame a2((jobject) NULL);
              ElevationDetector object((jobject) NULL);

              if (!parseArgs(args, "DDk", ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ElevationDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ElevationDetector);
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

        static PyObject *t_ElevationDetector_g(t_ElevationDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ElevationDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_ElevationDetector_getElevationMask(t_ElevationDetector *self)
        {
          ::org::orekit::utils::ElevationMask result((jobject) NULL);
          OBJ_CALL(result = self->object.getElevationMask());
          return ::org::orekit::utils::t_ElevationMask::wrap_Object(result);
        }

        static PyObject *t_ElevationDetector_getMinElevation(t_ElevationDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ElevationDetector_getRefractionModel(t_ElevationDetector *self)
        {
          ::org::orekit::models::AtmosphericRefractionModel result((jobject) NULL);
          OBJ_CALL(result = self->object.getRefractionModel());
          return ::org::orekit::models::t_AtmosphericRefractionModel::wrap_Object(result);
        }

        static PyObject *t_ElevationDetector_getTopocentricFrame(t_ElevationDetector *self)
        {
          ::org::orekit::frames::TopocentricFrame result((jobject) NULL);
          OBJ_CALL(result = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(result);
        }

        static PyObject *t_ElevationDetector_withConstantElevation(t_ElevationDetector *self, PyObject *arg)
        {
          jdouble a0;
          ElevationDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withConstantElevation(a0));
            return t_ElevationDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withConstantElevation", arg);
          return NULL;
        }

        static PyObject *t_ElevationDetector_withElevationMask(t_ElevationDetector *self, PyObject *arg)
        {
          ::org::orekit::utils::ElevationMask a0((jobject) NULL);
          ElevationDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::utils::ElevationMask::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withElevationMask(a0));
            return t_ElevationDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withElevationMask", arg);
          return NULL;
        }

        static PyObject *t_ElevationDetector_withRefraction(t_ElevationDetector *self, PyObject *arg)
        {
          ::org::orekit::models::AtmosphericRefractionModel a0((jobject) NULL);
          ElevationDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::models::AtmosphericRefractionModel::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withRefraction(a0));
            return t_ElevationDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withRefraction", arg);
          return NULL;
        }
        static PyObject *t_ElevationDetector_get__parameters_(t_ElevationDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ElevationDetector_get__elevationMask(t_ElevationDetector *self, void *data)
        {
          ::org::orekit::utils::ElevationMask value((jobject) NULL);
          OBJ_CALL(value = self->object.getElevationMask());
          return ::org::orekit::utils::t_ElevationMask::wrap_Object(value);
        }

        static PyObject *t_ElevationDetector_get__minElevation(t_ElevationDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ElevationDetector_get__refractionModel(t_ElevationDetector *self, void *data)
        {
          ::org::orekit::models::AtmosphericRefractionModel value((jobject) NULL);
          OBJ_CALL(value = self->object.getRefractionModel());
          return ::org::orekit::models::t_AtmosphericRefractionModel::wrap_Object(value);
        }

        static PyObject *t_ElevationDetector_get__topocentricFrame(t_ElevationDetector *self, void *data)
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
#include "org/orekit/files/ilrs/CRDConfiguration$CalibrationTargetConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$CalibrationTargetConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$CalibrationTargetConfiguration::mids$ = NULL;
        bool CRDConfiguration$CalibrationTargetConfiguration::live$ = false;

        jclass CRDConfiguration$CalibrationTargetConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$CalibrationTargetConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getProcessingSoftwareName_d2c8eb4129821f0e] = env->getMethodID(cls, "getProcessingSoftwareName", "()Ljava/lang/String;");
            mids$[mid_getProcessingSoftwareVersion_d2c8eb4129821f0e] = env->getMethodID(cls, "getProcessingSoftwareVersion", "()Ljava/lang/String;");
            mids$[mid_getPulseEnergy_9981f74b2d109da6] = env->getMethodID(cls, "getPulseEnergy", "()D");
            mids$[mid_getSumOfAllConstantDelays_9981f74b2d109da6] = env->getMethodID(cls, "getSumOfAllConstantDelays", "()D");
            mids$[mid_getSurveyError_9981f74b2d109da6] = env->getMethodID(cls, "getSurveyError", "()D");
            mids$[mid_getSurveyedTargetDistance_9981f74b2d109da6] = env->getMethodID(cls, "getSurveyedTargetDistance", "()D");
            mids$[mid_getTargetName_d2c8eb4129821f0e] = env->getMethodID(cls, "getTargetName", "()Ljava/lang/String;");
            mids$[mid_setProcessingSoftwareName_105e1eadb709d9ac] = env->getMethodID(cls, "setProcessingSoftwareName", "(Ljava/lang/String;)V");
            mids$[mid_setProcessingSoftwareVersion_105e1eadb709d9ac] = env->getMethodID(cls, "setProcessingSoftwareVersion", "(Ljava/lang/String;)V");
            mids$[mid_setPulseEnergy_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setPulseEnergy", "(D)V");
            mids$[mid_setSumOfAllConstantDelays_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSumOfAllConstantDelays", "(D)V");
            mids$[mid_setSurveyError_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSurveyError", "(D)V");
            mids$[mid_setSurveyedTargetDistance_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSurveyedTargetDistance", "(D)V");
            mids$[mid_setTargetName_105e1eadb709d9ac] = env->getMethodID(cls, "setTargetName", "(Ljava/lang/String;)V");
            mids$[mid_toCrdString_d2c8eb4129821f0e] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$CalibrationTargetConfiguration::CRDConfiguration$CalibrationTargetConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::java::lang::String CRDConfiguration$CalibrationTargetConfiguration::getProcessingSoftwareName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProcessingSoftwareName_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDConfiguration$CalibrationTargetConfiguration::getProcessingSoftwareVersion() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProcessingSoftwareVersion_d2c8eb4129821f0e]));
        }

        jdouble CRDConfiguration$CalibrationTargetConfiguration::getPulseEnergy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPulseEnergy_9981f74b2d109da6]);
        }

        jdouble CRDConfiguration$CalibrationTargetConfiguration::getSumOfAllConstantDelays() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumOfAllConstantDelays_9981f74b2d109da6]);
        }

        jdouble CRDConfiguration$CalibrationTargetConfiguration::getSurveyError() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSurveyError_9981f74b2d109da6]);
        }

        jdouble CRDConfiguration$CalibrationTargetConfiguration::getSurveyedTargetDistance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSurveyedTargetDistance_9981f74b2d109da6]);
        }

        ::java::lang::String CRDConfiguration$CalibrationTargetConfiguration::getTargetName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTargetName_d2c8eb4129821f0e]));
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setProcessingSoftwareName(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProcessingSoftwareName_105e1eadb709d9ac], a0.this$);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setProcessingSoftwareVersion(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProcessingSoftwareVersion_105e1eadb709d9ac], a0.this$);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setPulseEnergy(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPulseEnergy_1ad26e8c8c0cd65b], a0);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setSumOfAllConstantDelays(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSumOfAllConstantDelays_1ad26e8c8c0cd65b], a0);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setSurveyError(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSurveyError_1ad26e8c8c0cd65b], a0);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setSurveyedTargetDistance(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSurveyedTargetDistance_1ad26e8c8c0cd65b], a0);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setTargetName(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTargetName_105e1eadb709d9ac], a0.this$);
        }

        ::java::lang::String CRDConfiguration$CalibrationTargetConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDConfiguration$CalibrationTargetConfiguration::toString() const
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
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_init_(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getProcessingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getProcessingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getPulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSurveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSurveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getTargetName(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setProcessingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setProcessingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setPulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSurveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSurveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setTargetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_toCrdString(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_toString(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__processingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__processingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__processingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__processingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__pulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__pulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__sumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__sumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__surveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__surveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__surveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__surveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__targetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__targetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$CalibrationTargetConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, processingSoftwareName),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, processingSoftwareVersion),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, pulseEnergy),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, sumOfAllConstantDelays),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, surveyError),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, surveyedTargetDistance),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, targetName),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$CalibrationTargetConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getProcessingSoftwareName, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getProcessingSoftwareVersion, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getPulseEnergy, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getSumOfAllConstantDelays, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getSurveyError, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getSurveyedTargetDistance, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getTargetName, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setProcessingSoftwareName, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setProcessingSoftwareVersion, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setPulseEnergy, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setSumOfAllConstantDelays, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setSurveyError, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setSurveyedTargetDistance, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setTargetName, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$CalibrationTargetConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$CalibrationTargetConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$CalibrationTargetConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$CalibrationTargetConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$CalibrationTargetConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$CalibrationTargetConfiguration, t_CRDConfiguration$CalibrationTargetConfiguration, CRDConfiguration$CalibrationTargetConfiguration);

        void t_CRDConfiguration$CalibrationTargetConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), &PY_TYPE_DEF(CRDConfiguration$CalibrationTargetConfiguration), module, "CRDConfiguration$CalibrationTargetConfiguration", 0);
        }

        void t_CRDConfiguration$CalibrationTargetConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), "class_", make_descriptor(CRDConfiguration$CalibrationTargetConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$CalibrationTargetConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$CalibrationTargetConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$CalibrationTargetConfiguration::wrap_Object(CRDConfiguration$CalibrationTargetConfiguration(((t_CRDConfiguration$CalibrationTargetConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$CalibrationTargetConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$CalibrationTargetConfiguration_init_(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$CalibrationTargetConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$CalibrationTargetConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getProcessingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProcessingSoftwareName());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getProcessingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProcessingSoftwareVersion());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getPulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPulseEnergy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumOfAllConstantDelays());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSurveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSurveyError());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSurveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSurveyedTargetDistance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getTargetName(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTargetName());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setProcessingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setProcessingSoftwareName(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProcessingSoftwareName", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setProcessingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setProcessingSoftwareVersion(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProcessingSoftwareVersion", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setPulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPulseEnergy(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPulseEnergy", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSumOfAllConstantDelays(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSumOfAllConstantDelays", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSurveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSurveyError(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSurveyError", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSurveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSurveyedTargetDistance(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSurveyedTargetDistance", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setTargetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTargetName(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTargetName", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_toCrdString(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_toString(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__processingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProcessingSoftwareName());
          return j2p(value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__processingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setProcessingSoftwareName(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "processingSoftwareName", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__processingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProcessingSoftwareVersion());
          return j2p(value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__processingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setProcessingSoftwareVersion(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "processingSoftwareVersion", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__pulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPulseEnergy());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__pulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPulseEnergy(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pulseEnergy", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__sumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumOfAllConstantDelays());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__sumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSumOfAllConstantDelays(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "sumOfAllConstantDelays", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__surveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSurveyError());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__surveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSurveyError(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "surveyError", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__surveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSurveyedTargetDistance());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__surveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSurveyedTargetDistance(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "surveyedTargetDistance", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__targetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTargetName());
          return j2p(value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__targetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTargetName(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "targetName", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockInterSatellitesRangeModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockInterSatellitesRangeModifier::class$ = NULL;
          jmethodID *RelativisticClockInterSatellitesRangeModifier::mids$ = NULL;
          bool RelativisticClockInterSatellitesRangeModifier::live$ = false;

          jclass RelativisticClockInterSatellitesRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockInterSatellitesRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockInterSatellitesRangeModifier::RelativisticClockInterSatellitesRangeModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          ::java::util::List RelativisticClockInterSatellitesRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void RelativisticClockInterSatellitesRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockInterSatellitesRangeModifier_init_(t_RelativisticClockInterSatellitesRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_getParametersDrivers(t_RelativisticClockInterSatellitesRangeModifier *self);
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_modifyWithoutDerivatives(t_RelativisticClockInterSatellitesRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_get__parametersDrivers(t_RelativisticClockInterSatellitesRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockInterSatellitesRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockInterSatellitesRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockInterSatellitesRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockInterSatellitesRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockInterSatellitesRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticClockInterSatellitesRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockInterSatellitesRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticClockInterSatellitesRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockInterSatellitesRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockInterSatellitesRangeModifier, t_RelativisticClockInterSatellitesRangeModifier, RelativisticClockInterSatellitesRangeModifier);

          void t_RelativisticClockInterSatellitesRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockInterSatellitesRangeModifier), &PY_TYPE_DEF(RelativisticClockInterSatellitesRangeModifier), module, "RelativisticClockInterSatellitesRangeModifier", 0);
          }

          void t_RelativisticClockInterSatellitesRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesRangeModifier), "class_", make_descriptor(RelativisticClockInterSatellitesRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesRangeModifier), "wrapfn_", make_descriptor(t_RelativisticClockInterSatellitesRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockInterSatellitesRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockInterSatellitesRangeModifier::wrap_Object(RelativisticClockInterSatellitesRangeModifier(((t_RelativisticClockInterSatellitesRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockInterSatellitesRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockInterSatellitesRangeModifier_init_(t_RelativisticClockInterSatellitesRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockInterSatellitesRangeModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockInterSatellitesRangeModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_getParametersDrivers(t_RelativisticClockInterSatellitesRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_modifyWithoutDerivatives(t_RelativisticClockInterSatellitesRangeModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticClockInterSatellitesRangeModifier_get__parametersDrivers(t_RelativisticClockInterSatellitesRangeModifier *self, void *data)
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
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *SubHyperplane::class$ = NULL;
        jmethodID *SubHyperplane::mids$ = NULL;
        bool SubHyperplane::live$ = false;

        jclass SubHyperplane::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/SubHyperplane");

            mids$ = new jmethodID[max_mid];
            mids$[mid_copySelf_24c5633e830ec593] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getHyperplane_e081ba7b06e71434] = env->getMethodID(cls, "getHyperplane", "()Lorg/hipparchus/geometry/partitioning/Hyperplane;");
            mids$[mid_getSize_9981f74b2d109da6] = env->getMethodID(cls, "getSize", "()D");
            mids$[mid_isEmpty_eee3de00fe971136] = env->getMethodID(cls, "isEmpty", "()Z");
            mids$[mid_reunite_f2a90cc714d34154] = env->getMethodID(cls, "reunite", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_split_b587049e19682418] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SubHyperplane SubHyperplane::copySelf() const
        {
          return SubHyperplane(env->callObjectMethod(this$, mids$[mid_copySelf_24c5633e830ec593]));
        }

        ::org::hipparchus::geometry::partitioning::Hyperplane SubHyperplane::getHyperplane() const
        {
          return ::org::hipparchus::geometry::partitioning::Hyperplane(env->callObjectMethod(this$, mids$[mid_getHyperplane_e081ba7b06e71434]));
        }

        jdouble SubHyperplane::getSize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSize_9981f74b2d109da6]);
        }

        jboolean SubHyperplane::isEmpty() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_eee3de00fe971136]);
        }

        SubHyperplane SubHyperplane::reunite(const SubHyperplane & a0) const
        {
          return SubHyperplane(env->callObjectMethod(this$, mids$[mid_reunite_f2a90cc714d34154], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubHyperplane::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_b587049e19682418], a0.this$));
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
      namespace partitioning {
        static PyObject *t_SubHyperplane_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SubHyperplane_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SubHyperplane_of_(t_SubHyperplane *self, PyObject *args);
        static PyObject *t_SubHyperplane_copySelf(t_SubHyperplane *self);
        static PyObject *t_SubHyperplane_getHyperplane(t_SubHyperplane *self);
        static PyObject *t_SubHyperplane_getSize(t_SubHyperplane *self);
        static PyObject *t_SubHyperplane_isEmpty(t_SubHyperplane *self);
        static PyObject *t_SubHyperplane_reunite(t_SubHyperplane *self, PyObject *arg);
        static PyObject *t_SubHyperplane_split(t_SubHyperplane *self, PyObject *arg);
        static PyObject *t_SubHyperplane_get__empty(t_SubHyperplane *self, void *data);
        static PyObject *t_SubHyperplane_get__hyperplane(t_SubHyperplane *self, void *data);
        static PyObject *t_SubHyperplane_get__size(t_SubHyperplane *self, void *data);
        static PyObject *t_SubHyperplane_get__parameters_(t_SubHyperplane *self, void *data);
        static PyGetSetDef t_SubHyperplane__fields_[] = {
          DECLARE_GET_FIELD(t_SubHyperplane, empty),
          DECLARE_GET_FIELD(t_SubHyperplane, hyperplane),
          DECLARE_GET_FIELD(t_SubHyperplane, size),
          DECLARE_GET_FIELD(t_SubHyperplane, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SubHyperplane__methods_[] = {
          DECLARE_METHOD(t_SubHyperplane, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SubHyperplane, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SubHyperplane, of_, METH_VARARGS),
          DECLARE_METHOD(t_SubHyperplane, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane, getHyperplane, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane, getSize, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane, isEmpty, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane, reunite, METH_O),
          DECLARE_METHOD(t_SubHyperplane, split, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SubHyperplane)[] = {
          { Py_tp_methods, t_SubHyperplane__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SubHyperplane__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SubHyperplane)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SubHyperplane, t_SubHyperplane, SubHyperplane);
        PyObject *t_SubHyperplane::wrap_Object(const SubHyperplane& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SubHyperplane::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SubHyperplane *self = (t_SubHyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SubHyperplane::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SubHyperplane::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SubHyperplane *self = (t_SubHyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SubHyperplane::install(PyObject *module)
        {
          installType(&PY_TYPE(SubHyperplane), &PY_TYPE_DEF(SubHyperplane), module, "SubHyperplane", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane), "SplitSubHyperplane", make_descriptor(&PY_TYPE_DEF(SubHyperplane$SplitSubHyperplane)));
        }

        void t_SubHyperplane::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane), "class_", make_descriptor(SubHyperplane::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane), "wrapfn_", make_descriptor(t_SubHyperplane::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SubHyperplane_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SubHyperplane::initializeClass, 1)))
            return NULL;
          return t_SubHyperplane::wrap_Object(SubHyperplane(((t_SubHyperplane *) arg)->object.this$));
        }
        static PyObject *t_SubHyperplane_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SubHyperplane::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SubHyperplane_of_(t_SubHyperplane *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SubHyperplane_copySelf(t_SubHyperplane *self)
        {
          SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_SubHyperplane_getHyperplane(t_SubHyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_Hyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_SubHyperplane_getSize(t_SubHyperplane *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SubHyperplane_isEmpty(t_SubHyperplane *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isEmpty());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SubHyperplane_reunite(t_SubHyperplane *self, PyObject *arg)
        {
          SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          SubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", SubHyperplane::initializeClass, &a0, &p0, t_SubHyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.reunite(a0));
            return t_SubHyperplane::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "reunite", arg);
          return NULL;
        }

        static PyObject *t_SubHyperplane_split(t_SubHyperplane *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.split(a0));
            return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "split", arg);
          return NULL;
        }
        static PyObject *t_SubHyperplane_get__parameters_(t_SubHyperplane *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_SubHyperplane_get__empty(t_SubHyperplane *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEmpty());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_SubHyperplane_get__hyperplane(t_SubHyperplane *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_Hyperplane::wrap_Object(value);
        }

        static PyObject *t_SubHyperplane_get__size(t_SubHyperplane *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSize());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/AbstractMeasurementBuilder.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *AbstractMeasurementBuilder::class$ = NULL;
          jmethodID *AbstractMeasurementBuilder::mids$ = NULL;
          bool AbstractMeasurementBuilder::live$ = false;

          jclass AbstractMeasurementBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/AbstractMeasurementBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addModifier_a3bed5360bec47d0] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
              mids$[mid_getModifiers_d751c1a57012b438] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
              mids$[mid_getSatellites_27bb228995072af3] = env->getMethodID(cls, "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_init_ce7d94fe97fdcf55] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_getEnd_80e11148db499dda] = env->getMethodID(cls, "getEnd", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getStart_80e11148db499dda] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTheoreticalStandardDeviation_be783177b060994b] = env->getMethodID(cls, "getTheoreticalStandardDeviation", "()[D");
              mids$[mid_getBaseWeight_be783177b060994b] = env->getMethodID(cls, "getBaseWeight", "()[D");
              mids$[mid_getNoise_be783177b060994b] = env->getMethodID(cls, "getNoise", "()[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void AbstractMeasurementBuilder::addModifier(const ::org::orekit::estimation::measurements::EstimationModifier & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addModifier_a3bed5360bec47d0], a0.this$);
          }

          ::java::util::List AbstractMeasurementBuilder::getModifiers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getModifiers_d751c1a57012b438]));
          }

          JArray< ::org::orekit::estimation::measurements::ObservableSatellite > AbstractMeasurementBuilder::getSatellites() const
          {
            return JArray< ::org::orekit::estimation::measurements::ObservableSatellite >(env->callObjectMethod(this$, mids$[mid_getSatellites_27bb228995072af3]));
          }

          void AbstractMeasurementBuilder::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
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
          static PyObject *t_AbstractMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractMeasurementBuilder_of_(t_AbstractMeasurementBuilder *self, PyObject *args);
          static PyObject *t_AbstractMeasurementBuilder_addModifier(t_AbstractMeasurementBuilder *self, PyObject *arg);
          static PyObject *t_AbstractMeasurementBuilder_getModifiers(t_AbstractMeasurementBuilder *self);
          static PyObject *t_AbstractMeasurementBuilder_getSatellites(t_AbstractMeasurementBuilder *self);
          static PyObject *t_AbstractMeasurementBuilder_init(t_AbstractMeasurementBuilder *self, PyObject *args);
          static PyObject *t_AbstractMeasurementBuilder_get__modifiers(t_AbstractMeasurementBuilder *self, void *data);
          static PyObject *t_AbstractMeasurementBuilder_get__satellites(t_AbstractMeasurementBuilder *self, void *data);
          static PyObject *t_AbstractMeasurementBuilder_get__parameters_(t_AbstractMeasurementBuilder *self, void *data);
          static PyGetSetDef t_AbstractMeasurementBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractMeasurementBuilder, modifiers),
            DECLARE_GET_FIELD(t_AbstractMeasurementBuilder, satellites),
            DECLARE_GET_FIELD(t_AbstractMeasurementBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractMeasurementBuilder__methods_[] = {
            DECLARE_METHOD(t_AbstractMeasurementBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, addModifier, METH_O),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, getModifiers, METH_NOARGS),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, getSatellites, METH_NOARGS),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractMeasurementBuilder)[] = {
            { Py_tp_methods, t_AbstractMeasurementBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractMeasurementBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractMeasurementBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractMeasurementBuilder, t_AbstractMeasurementBuilder, AbstractMeasurementBuilder);
          PyObject *t_AbstractMeasurementBuilder::wrap_Object(const AbstractMeasurementBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractMeasurementBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractMeasurementBuilder *self = (t_AbstractMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AbstractMeasurementBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractMeasurementBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractMeasurementBuilder *self = (t_AbstractMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AbstractMeasurementBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractMeasurementBuilder), &PY_TYPE_DEF(AbstractMeasurementBuilder), module, "AbstractMeasurementBuilder", 0);
          }

          void t_AbstractMeasurementBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurementBuilder), "class_", make_descriptor(AbstractMeasurementBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurementBuilder), "wrapfn_", make_descriptor(t_AbstractMeasurementBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurementBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractMeasurementBuilder::initializeClass, 1)))
              return NULL;
            return t_AbstractMeasurementBuilder::wrap_Object(AbstractMeasurementBuilder(((t_AbstractMeasurementBuilder *) arg)->object.this$));
          }
          static PyObject *t_AbstractMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractMeasurementBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractMeasurementBuilder_of_(t_AbstractMeasurementBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_AbstractMeasurementBuilder_addModifier(t_AbstractMeasurementBuilder *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimationModifier a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimationModifier::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimationModifier::parameters_))
            {
              OBJ_CALL(self->object.addModifier(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addModifier", arg);
            return NULL;
          }

          static PyObject *t_AbstractMeasurementBuilder_getModifiers(t_AbstractMeasurementBuilder *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(result);
          }

          static PyObject *t_AbstractMeasurementBuilder_getSatellites(t_AbstractMeasurementBuilder *self)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellites());
            return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }

          static PyObject *t_AbstractMeasurementBuilder_init(t_AbstractMeasurementBuilder *self, PyObject *args)
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
          static PyObject *t_AbstractMeasurementBuilder_get__parameters_(t_AbstractMeasurementBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_AbstractMeasurementBuilder_get__modifiers(t_AbstractMeasurementBuilder *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_AbstractMeasurementBuilder_get__satellites(t_AbstractMeasurementBuilder *self, void *data)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellites());
            return JArray<jobject>(value.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlLexicalAnalyzer.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *XmlLexicalAnalyzer::class$ = NULL;
            jmethodID *XmlLexicalAnalyzer::mids$ = NULL;
            bool XmlLexicalAnalyzer::live$ = false;

            jclass XmlLexicalAnalyzer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/XmlLexicalAnalyzer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_023df3a7dca17c03] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;)V");
                mids$[mid_accept_b478c9bff3268dbb] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/utils/lexical/MessageParser;)Ljava/lang/Object;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            XmlLexicalAnalyzer::XmlLexicalAnalyzer(const ::org::orekit::data::DataSource & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_023df3a7dca17c03, a0.this$)) {}

            ::java::lang::Object XmlLexicalAnalyzer::accept(const ::org::orekit::files::ccsds::utils::lexical::MessageParser & a0) const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_accept_b478c9bff3268dbb], a0.this$));
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
            static PyObject *t_XmlLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_XmlLexicalAnalyzer_init_(t_XmlLexicalAnalyzer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_XmlLexicalAnalyzer_accept(t_XmlLexicalAnalyzer *self, PyObject *arg);

            static PyMethodDef t_XmlLexicalAnalyzer__methods_[] = {
              DECLARE_METHOD(t_XmlLexicalAnalyzer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlLexicalAnalyzer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlLexicalAnalyzer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XmlLexicalAnalyzer)[] = {
              { Py_tp_methods, t_XmlLexicalAnalyzer__methods_ },
              { Py_tp_init, (void *) t_XmlLexicalAnalyzer_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XmlLexicalAnalyzer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(XmlLexicalAnalyzer, t_XmlLexicalAnalyzer, XmlLexicalAnalyzer);

            void t_XmlLexicalAnalyzer::install(PyObject *module)
            {
              installType(&PY_TYPE(XmlLexicalAnalyzer), &PY_TYPE_DEF(XmlLexicalAnalyzer), module, "XmlLexicalAnalyzer", 0);
            }

            void t_XmlLexicalAnalyzer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlLexicalAnalyzer), "class_", make_descriptor(XmlLexicalAnalyzer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlLexicalAnalyzer), "wrapfn_", make_descriptor(t_XmlLexicalAnalyzer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlLexicalAnalyzer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_XmlLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XmlLexicalAnalyzer::initializeClass, 1)))
                return NULL;
              return t_XmlLexicalAnalyzer::wrap_Object(XmlLexicalAnalyzer(((t_XmlLexicalAnalyzer *) arg)->object.this$));
            }
            static PyObject *t_XmlLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XmlLexicalAnalyzer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_XmlLexicalAnalyzer_init_(t_XmlLexicalAnalyzer *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              XmlLexicalAnalyzer object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                INT_CALL(object = XmlLexicalAnalyzer(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_XmlLexicalAnalyzer_accept(t_XmlLexicalAnalyzer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::MessageParser a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::Object result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::utils::lexical::MessageParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::lexical::t_MessageParser::parameters_))
              {
                OBJ_CALL(result = self->object.accept(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
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
#include "org/hipparchus/analysis/function/Sigmoid.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sigmoid::class$ = NULL;
        jmethodID *Sigmoid::mids$ = NULL;
        bool Sigmoid::live$ = false;

        jclass Sigmoid::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sigmoid");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sigmoid::Sigmoid() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        Sigmoid::Sigmoid(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        jdouble Sigmoid::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Sigmoid::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
#include "org/hipparchus/analysis/function/Sigmoid$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Sigmoid_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sigmoid_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sigmoid_init_(t_Sigmoid *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sigmoid_value(t_Sigmoid *self, PyObject *args);

        static PyMethodDef t_Sigmoid__methods_[] = {
          DECLARE_METHOD(t_Sigmoid, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sigmoid, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sigmoid, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sigmoid)[] = {
          { Py_tp_methods, t_Sigmoid__methods_ },
          { Py_tp_init, (void *) t_Sigmoid_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sigmoid)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sigmoid, t_Sigmoid, Sigmoid);

        void t_Sigmoid::install(PyObject *module)
        {
          installType(&PY_TYPE(Sigmoid), &PY_TYPE_DEF(Sigmoid), module, "Sigmoid", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid), "Parametric", make_descriptor(&PY_TYPE_DEF(Sigmoid$Parametric)));
        }

        void t_Sigmoid::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid), "class_", make_descriptor(Sigmoid::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid), "wrapfn_", make_descriptor(t_Sigmoid::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sigmoid_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sigmoid::initializeClass, 1)))
            return NULL;
          return t_Sigmoid::wrap_Object(Sigmoid(((t_Sigmoid *) arg)->object.this$));
        }
        static PyObject *t_Sigmoid_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sigmoid::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sigmoid_init_(t_Sigmoid *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              Sigmoid object((jobject) NULL);

              INT_CALL(object = Sigmoid());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              Sigmoid object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = Sigmoid(a0, a1));
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

        static PyObject *t_Sigmoid_value(t_Sigmoid *self, PyObject *args)
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
#include "org/orekit/forces/gravity/potential/PythonUnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
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
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAe_9981f74b2d109da6] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_d6ab429752e7c267] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_d6ab429752e7c267] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_80e11148db499dda] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTideSystem_1e0f912623cd4841] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_onDate_e3154aa04494b880] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonUnnormalizedSphericalHarmonicsProvider::PythonUnnormalizedSphericalHarmonicsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonUnnormalizedSphericalHarmonicsProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonUnnormalizedSphericalHarmonicsProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonUnnormalizedSphericalHarmonicsProvider::pythonExtension(jlong a0) const
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
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
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *CartesianCovariance::class$ = NULL;
            jmethodID *CartesianCovariance::mids$ = NULL;
            bool CartesianCovariance::live$ = false;

            jclass CartesianCovariance::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/CartesianCovariance");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ebbc8efa14fea36d] = env->getMethodID(cls, "<init>", "(Ljava/util/function/Supplier;)V");
                mids$[mid_getCovarianceMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_getEpoch_80e11148db499dda] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getReferenceFrame_0fc1562b68204151] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_setCovarianceMatrixEntry_e98d7b3e971b6087] = env->getMethodID(cls, "setCovarianceMatrixEntry", "(IID)V");
                mids$[mid_setEpoch_8497861b879c83f7] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setReferenceFrame_2c8b859a72c0094e] = env->getMethodID(cls, "setReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CartesianCovariance::CartesianCovariance(const ::java::util::function::Supplier & a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ebbc8efa14fea36d, a0.this$)) {}

            ::org::hipparchus::linear::RealMatrix CartesianCovariance::getCovarianceMatrix() const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrix_b2eebabce70526d8]));
            }

            ::org::orekit::time::AbsoluteDate CartesianCovariance::getEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_80e11148db499dda]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade CartesianCovariance::getReferenceFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_0fc1562b68204151]));
            }

            void CartesianCovariance::setCovarianceMatrixEntry(jint a0, jint a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceMatrixEntry_e98d7b3e971b6087], a0, a1, a2);
            }

            void CartesianCovariance::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEpoch_8497861b879c83f7], a0.this$);
            }

            void CartesianCovariance::setReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setReferenceFrame_2c8b859a72c0094e], a0.this$);
            }

            void CartesianCovariance::validate(jdouble a0) const
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
            static PyObject *t_CartesianCovariance_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CartesianCovariance_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CartesianCovariance_init_(t_CartesianCovariance *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CartesianCovariance_getCovarianceMatrix(t_CartesianCovariance *self);
            static PyObject *t_CartesianCovariance_getEpoch(t_CartesianCovariance *self);
            static PyObject *t_CartesianCovariance_getReferenceFrame(t_CartesianCovariance *self);
            static PyObject *t_CartesianCovariance_setCovarianceMatrixEntry(t_CartesianCovariance *self, PyObject *args);
            static PyObject *t_CartesianCovariance_setEpoch(t_CartesianCovariance *self, PyObject *arg);
            static PyObject *t_CartesianCovariance_setReferenceFrame(t_CartesianCovariance *self, PyObject *arg);
            static PyObject *t_CartesianCovariance_validate(t_CartesianCovariance *self, PyObject *args);
            static PyObject *t_CartesianCovariance_get__covarianceMatrix(t_CartesianCovariance *self, void *data);
            static PyObject *t_CartesianCovariance_get__epoch(t_CartesianCovariance *self, void *data);
            static int t_CartesianCovariance_set__epoch(t_CartesianCovariance *self, PyObject *arg, void *data);
            static PyObject *t_CartesianCovariance_get__referenceFrame(t_CartesianCovariance *self, void *data);
            static int t_CartesianCovariance_set__referenceFrame(t_CartesianCovariance *self, PyObject *arg, void *data);
            static PyGetSetDef t_CartesianCovariance__fields_[] = {
              DECLARE_GET_FIELD(t_CartesianCovariance, covarianceMatrix),
              DECLARE_GETSET_FIELD(t_CartesianCovariance, epoch),
              DECLARE_GETSET_FIELD(t_CartesianCovariance, referenceFrame),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CartesianCovariance__methods_[] = {
              DECLARE_METHOD(t_CartesianCovariance, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CartesianCovariance, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CartesianCovariance, getCovarianceMatrix, METH_NOARGS),
              DECLARE_METHOD(t_CartesianCovariance, getEpoch, METH_NOARGS),
              DECLARE_METHOD(t_CartesianCovariance, getReferenceFrame, METH_NOARGS),
              DECLARE_METHOD(t_CartesianCovariance, setCovarianceMatrixEntry, METH_VARARGS),
              DECLARE_METHOD(t_CartesianCovariance, setEpoch, METH_O),
              DECLARE_METHOD(t_CartesianCovariance, setReferenceFrame, METH_O),
              DECLARE_METHOD(t_CartesianCovariance, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CartesianCovariance)[] = {
              { Py_tp_methods, t_CartesianCovariance__methods_ },
              { Py_tp_init, (void *) t_CartesianCovariance_init_ },
              { Py_tp_getset, t_CartesianCovariance__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CartesianCovariance)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(CartesianCovariance, t_CartesianCovariance, CartesianCovariance);

            void t_CartesianCovariance::install(PyObject *module)
            {
              installType(&PY_TYPE(CartesianCovariance), &PY_TYPE_DEF(CartesianCovariance), module, "CartesianCovariance", 0);
            }

            void t_CartesianCovariance::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovariance), "class_", make_descriptor(CartesianCovariance::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovariance), "wrapfn_", make_descriptor(t_CartesianCovariance::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovariance), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CartesianCovariance_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CartesianCovariance::initializeClass, 1)))
                return NULL;
              return t_CartesianCovariance::wrap_Object(CartesianCovariance(((t_CartesianCovariance *) arg)->object.this$));
            }
            static PyObject *t_CartesianCovariance_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CartesianCovariance::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CartesianCovariance_init_(t_CartesianCovariance *self, PyObject *args, PyObject *kwds)
            {
              ::java::util::function::Supplier a0((jobject) NULL);
              PyTypeObject **p0;
              CartesianCovariance object((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::function::Supplier::initializeClass, &a0, &p0, ::java::util::function::t_Supplier::parameters_))
              {
                INT_CALL(object = CartesianCovariance(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CartesianCovariance_getCovarianceMatrix(t_CartesianCovariance *self)
            {
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
              OBJ_CALL(result = self->object.getCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            static PyObject *t_CartesianCovariance_getEpoch(t_CartesianCovariance *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CartesianCovariance_getReferenceFrame(t_CartesianCovariance *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_CartesianCovariance_setCovarianceMatrixEntry(t_CartesianCovariance *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble a2;

              if (!parseArgs(args, "IID", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.setCovarianceMatrixEntry(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceMatrixEntry", args);
              return NULL;
            }

            static PyObject *t_CartesianCovariance_setEpoch(t_CartesianCovariance *self, PyObject *arg)
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

            static PyObject *t_CartesianCovariance_setReferenceFrame(t_CartesianCovariance *self, PyObject *arg)
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

            static PyObject *t_CartesianCovariance_validate(t_CartesianCovariance *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CartesianCovariance), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_CartesianCovariance_get__covarianceMatrix(t_CartesianCovariance *self, void *data)
            {
              ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
              OBJ_CALL(value = self->object.getCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
            }

            static PyObject *t_CartesianCovariance_get__epoch(t_CartesianCovariance *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CartesianCovariance_set__epoch(t_CartesianCovariance *self, PyObject *arg, void *data)
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

            static PyObject *t_CartesianCovariance_get__referenceFrame(t_CartesianCovariance *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_CartesianCovariance_set__referenceFrame(t_CartesianCovariance *self, PyObject *arg, void *data)
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
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "java/lang/AutoCloseable.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter$BlockWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmWriter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *StreamingOcmWriter::class$ = NULL;
              jmethodID *StreamingOcmWriter::mids$ = NULL;
              bool StreamingOcmWriter::live$ = false;

              jclass StreamingOcmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ef01af7de0fcef84] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;)V");
                  mids$[mid_init$_d1ced43070aa2376] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;Z)V");
                  mids$[mid_close_ff7cb6c242604316] = env->getMethodID(cls, "close", "()V");
                  mids$[mid_newBlock_832607fbe3d9bd7f] = env->getMethodID(cls, "newBlock", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter$BlockWriter;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingOcmWriter::StreamingOcmWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a2, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata & a3, const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ef01af7de0fcef84, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

              StreamingOcmWriter::StreamingOcmWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a2, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata & a3, const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata & a4, jboolean a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d1ced43070aa2376, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

              void StreamingOcmWriter::close() const
              {
                env->callVoidMethod(this$, mids$[mid_close_ff7cb6c242604316]);
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter$BlockWriter StreamingOcmWriter::newBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter$BlockWriter(env->callObjectMethod(this$, mids$[mid_newBlock_832607fbe3d9bd7f]));
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
              static PyObject *t_StreamingOcmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingOcmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingOcmWriter_init_(t_StreamingOcmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingOcmWriter_close(t_StreamingOcmWriter *self);
              static PyObject *t_StreamingOcmWriter_newBlock(t_StreamingOcmWriter *self);

              static PyMethodDef t_StreamingOcmWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingOcmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOcmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOcmWriter, close, METH_NOARGS),
                DECLARE_METHOD(t_StreamingOcmWriter, newBlock, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingOcmWriter)[] = {
                { Py_tp_methods, t_StreamingOcmWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingOcmWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingOcmWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingOcmWriter, t_StreamingOcmWriter, StreamingOcmWriter);

              void t_StreamingOcmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingOcmWriter), &PY_TYPE_DEF(StreamingOcmWriter), module, "StreamingOcmWriter", 0);
              }

              void t_StreamingOcmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter), "class_", make_descriptor(StreamingOcmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter), "wrapfn_", make_descriptor(t_StreamingOcmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingOcmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingOcmWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingOcmWriter::wrap_Object(StreamingOcmWriter(((t_StreamingOcmWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingOcmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingOcmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingOcmWriter_init_(t_StreamingOcmWriter *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 5:
                  {
                    ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::files::ccsds::ndm::odm::OdmHeader a2((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata a3((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata a4((jobject) NULL);
                    StreamingOcmWriter object((jobject) NULL);

                    if (!parseArgs(args, "kKkkk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmWriter::parameters_, &a2, &a3, &a4))
                    {
                      INT_CALL(object = StreamingOcmWriter(a0, a1, a2, a3, a4));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 6:
                  {
                    ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::files::ccsds::ndm::odm::OdmHeader a2((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata a3((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata a4((jobject) NULL);
                    jboolean a5;
                    StreamingOcmWriter object((jobject) NULL);

                    if (!parseArgs(args, "kKkkkZ", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmWriter::parameters_, &a2, &a3, &a4, &a5))
                    {
                      INT_CALL(object = StreamingOcmWriter(a0, a1, a2, a3, a4, a5));
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

              static PyObject *t_StreamingOcmWriter_close(t_StreamingOcmWriter *self)
              {
                OBJ_CALL(self->object.close());
                Py_RETURN_NONE;
              }

              static PyObject *t_StreamingOcmWriter_newBlock(t_StreamingOcmWriter *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter$BlockWriter result((jobject) NULL);
                OBJ_CALL(result = self->object.newBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_StreamingOcmWriter$BlockWriter::wrap_Object(result);
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
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/complex/ComplexField.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
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
          mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_abs_847706ebd9444ecb] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_acos_847706ebd9444ecb] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_acosh_847706ebd9444ecb] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_add_48ac0ef047162b30] = env->getMethodID(cls, "add", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_add_89b4417f39f77363] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_asin_847706ebd9444ecb] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_asinh_847706ebd9444ecb] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_atan_847706ebd9444ecb] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_atan2_48ac0ef047162b30] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_atanh_847706ebd9444ecb] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_cbrt_847706ebd9444ecb] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_ceil_847706ebd9444ecb] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_compareTo_a8ec45e4f53695b4] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/complex/Complex;)I");
          mids$[mid_conjugate_847706ebd9444ecb] = env->getMethodID(cls, "conjugate", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_copySign_48ac0ef047162b30] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_copySign_89b4417f39f77363] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_cos_847706ebd9444ecb] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_cosh_847706ebd9444ecb] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_divide_48ac0ef047162b30] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_divide_89b4417f39f77363] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_equals_32043b8b8fa00039] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Z");
          mids$[mid_equals_e037ae7697a7a9da] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;D)Z");
          mids$[mid_equals_9830c70292e6ba83] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;I)Z");
          mids$[mid_equalsWithRelativeTolerance_e037ae7697a7a9da] = env->getStaticMethodID(cls, "equalsWithRelativeTolerance", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;D)Z");
          mids$[mid_exp_847706ebd9444ecb] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_expm1_847706ebd9444ecb] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_floor_847706ebd9444ecb] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_getArgument_9981f74b2d109da6] = env->getMethodID(cls, "getArgument", "()D");
          mids$[mid_getField_4c88b6ea55d5fcec] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/complex/ComplexField;");
          mids$[mid_getImaginary_9981f74b2d109da6] = env->getMethodID(cls, "getImaginary", "()D");
          mids$[mid_getImaginaryPart_9981f74b2d109da6] = env->getMethodID(cls, "getImaginaryPart", "()D");
          mids$[mid_getPi_847706ebd9444ecb] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_getReal_9981f74b2d109da6] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getRealPart_9981f74b2d109da6] = env->getMethodID(cls, "getRealPart", "()D");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_48ac0ef047162b30] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_isInfinite_eee3de00fe971136] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isMathematicalInteger_eee3de00fe971136] = env->getMethodID(cls, "isMathematicalInteger", "()Z");
          mids$[mid_isNaN_eee3de00fe971136] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_isReal_eee3de00fe971136] = env->getMethodID(cls, "isReal", "()Z");
          mids$[mid_isZero_eee3de00fe971136] = env->getMethodID(cls, "isZero", "()Z");
          mids$[mid_linearCombination_0bc667d534c4fcca] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_aa882037f664468a] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_68c85ce87a0825b2] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_b3c9b33fab4fa541] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_f26d1bae0407a834] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_f0804d4bd6ca6b25] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_6a4823b53cb9c1c5] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_c58b5260c8660dc8] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_log_847706ebd9444ecb] = env->getMethodID(cls, "log", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_log10_847706ebd9444ecb] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_log1p_847706ebd9444ecb] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_multiply_48ac0ef047162b30] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_multiply_89b4417f39f77363] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_multiply_1e8f748d6dce69c5] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/complex/Complex;");
          mids$[mid_multiplyMinusI_847706ebd9444ecb] = env->getMethodID(cls, "multiplyMinusI", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_multiplyPlusI_847706ebd9444ecb] = env->getMethodID(cls, "multiplyPlusI", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_negate_847706ebd9444ecb] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_newInstance_89b4417f39f77363] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_norm_9981f74b2d109da6] = env->getMethodID(cls, "norm", "()D");
          mids$[mid_nthRoot_11883c1c01a1aa4c] = env->getMethodID(cls, "nthRoot", "(I)Ljava/util/List;");
          mids$[mid_pow_48ac0ef047162b30] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_pow_89b4417f39f77363] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_pow_1e8f748d6dce69c5] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/complex/Complex;");
          mids$[mid_reciprocal_847706ebd9444ecb] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_remainder_48ac0ef047162b30] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_remainder_89b4417f39f77363] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_rint_847706ebd9444ecb] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_rootN_1e8f748d6dce69c5] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/complex/Complex;");
          mids$[mid_scalb_1e8f748d6dce69c5] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/complex/Complex;");
          mids$[mid_sign_847706ebd9444ecb] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_sin_847706ebd9444ecb] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_sinCos_31b7b02b4932da60] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_847706ebd9444ecb] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_sinhCosh_b24d5962ea451135] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_847706ebd9444ecb] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_sqrt1z_847706ebd9444ecb] = env->getMethodID(cls, "sqrt1z", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_subtract_48ac0ef047162b30] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_subtract_89b4417f39f77363] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_tan_847706ebd9444ecb] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_tanh_847706ebd9444ecb] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_toDegrees_847706ebd9444ecb] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_toRadians_847706ebd9444ecb] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_ulp_847706ebd9444ecb] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_valueOf_89b4417f39f77363] = env->getStaticMethodID(cls, "valueOf", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_valueOf_4e58ab40c2f85d5e] = env->getStaticMethodID(cls, "valueOf", "(DD)Lorg/hipparchus/complex/Complex;");
          mids$[mid_createComplex_4e58ab40c2f85d5e] = env->getMethodID(cls, "createComplex", "(DD)Lorg/hipparchus/complex/Complex;");
          mids$[mid_readResolve_704a5bee58538972] = env->getMethodID(cls, "readResolve", "()Ljava/lang/Object;");

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

      Complex::Complex(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

      Complex::Complex(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

      Complex Complex::abs() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_abs_847706ebd9444ecb]));
      }

      Complex Complex::acos() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_acos_847706ebd9444ecb]));
      }

      Complex Complex::acosh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_acosh_847706ebd9444ecb]));
      }

      Complex Complex::add(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_add_48ac0ef047162b30], a0.this$));
      }

      Complex Complex::add(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_add_89b4417f39f77363], a0));
      }

      Complex Complex::asin() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_asin_847706ebd9444ecb]));
      }

      Complex Complex::asinh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_asinh_847706ebd9444ecb]));
      }

      Complex Complex::atan() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_atan_847706ebd9444ecb]));
      }

      Complex Complex::atan2(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_atan2_48ac0ef047162b30], a0.this$));
      }

      Complex Complex::atanh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_atanh_847706ebd9444ecb]));
      }

      Complex Complex::cbrt() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_cbrt_847706ebd9444ecb]));
      }

      Complex Complex::ceil() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_ceil_847706ebd9444ecb]));
      }

      jint Complex::compareTo(const Complex & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_a8ec45e4f53695b4], a0.this$);
      }

      Complex Complex::conjugate() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_conjugate_847706ebd9444ecb]));
      }

      Complex Complex::copySign(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_copySign_48ac0ef047162b30], a0.this$));
      }

      Complex Complex::copySign(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_copySign_89b4417f39f77363], a0));
      }

      Complex Complex::cos() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_cos_847706ebd9444ecb]));
      }

      Complex Complex::cosh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_cosh_847706ebd9444ecb]));
      }

      Complex Complex::divide(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_divide_48ac0ef047162b30], a0.this$));
      }

      Complex Complex::divide(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_divide_89b4417f39f77363], a0));
      }

      jboolean Complex::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      jboolean Complex::equals(const Complex & a0, const Complex & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_32043b8b8fa00039], a0.this$, a1.this$);
      }

      jboolean Complex::equals(const Complex & a0, const Complex & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_e037ae7697a7a9da], a0.this$, a1.this$, a2);
      }

      jboolean Complex::equals(const Complex & a0, const Complex & a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_9830c70292e6ba83], a0.this$, a1.this$, a2);
      }

      jboolean Complex::equalsWithRelativeTolerance(const Complex & a0, const Complex & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsWithRelativeTolerance_e037ae7697a7a9da], a0.this$, a1.this$, a2);
      }

      Complex Complex::exp() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_exp_847706ebd9444ecb]));
      }

      Complex Complex::expm1() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_expm1_847706ebd9444ecb]));
      }

      Complex Complex::floor() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_floor_847706ebd9444ecb]));
      }

      jdouble Complex::getArgument() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getArgument_9981f74b2d109da6]);
      }

      ::org::hipparchus::complex::ComplexField Complex::getField() const
      {
        return ::org::hipparchus::complex::ComplexField(env->callObjectMethod(this$, mids$[mid_getField_4c88b6ea55d5fcec]));
      }

      jdouble Complex::getImaginary() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getImaginary_9981f74b2d109da6]);
      }

      jdouble Complex::getImaginaryPart() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getImaginaryPart_9981f74b2d109da6]);
      }

      Complex Complex::getPi() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_getPi_847706ebd9444ecb]));
      }

      jdouble Complex::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_9981f74b2d109da6]);
      }

      jdouble Complex::getRealPart() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRealPart_9981f74b2d109da6]);
      }

      jint Complex::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      Complex Complex::hypot(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_hypot_48ac0ef047162b30], a0.this$));
      }

      jboolean Complex::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_eee3de00fe971136]);
      }

      jboolean Complex::isMathematicalInteger() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isMathematicalInteger_eee3de00fe971136]);
      }

      jboolean Complex::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_eee3de00fe971136]);
      }

      jboolean Complex::isReal() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isReal_eee3de00fe971136]);
      }

      jboolean Complex::isZero() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isZero_eee3de00fe971136]);
      }

      Complex Complex::linearCombination(const JArray< jdouble > & a0, const JArray< Complex > & a1) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_0bc667d534c4fcca], a0.this$, a1.this$));
      }

      Complex Complex::linearCombination(const JArray< Complex > & a0, const JArray< Complex > & a1) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_aa882037f664468a], a0.this$, a1.this$));
      }

      Complex Complex::linearCombination(const Complex & a0, const Complex & a1, const Complex & a2, const Complex & a3) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_68c85ce87a0825b2], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      Complex Complex::linearCombination(jdouble a0, const Complex & a1, jdouble a2, const Complex & a3) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_b3c9b33fab4fa541], a0, a1.this$, a2, a3.this$));
      }

      Complex Complex::linearCombination(const Complex & a0, const Complex & a1, const Complex & a2, const Complex & a3, const Complex & a4, const Complex & a5) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_f26d1bae0407a834], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      Complex Complex::linearCombination(jdouble a0, const Complex & a1, jdouble a2, const Complex & a3, jdouble a4, const Complex & a5) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_f0804d4bd6ca6b25], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      Complex Complex::linearCombination(const Complex & a0, const Complex & a1, const Complex & a2, const Complex & a3, const Complex & a4, const Complex & a5, const Complex & a6, const Complex & a7) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_6a4823b53cb9c1c5], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      Complex Complex::linearCombination(jdouble a0, const Complex & a1, jdouble a2, const Complex & a3, jdouble a4, const Complex & a5, jdouble a6, const Complex & a7) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_c58b5260c8660dc8], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      Complex Complex::log() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_log_847706ebd9444ecb]));
      }

      Complex Complex::log10() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_log10_847706ebd9444ecb]));
      }

      Complex Complex::log1p() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_log1p_847706ebd9444ecb]));
      }

      Complex Complex::multiply(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_multiply_48ac0ef047162b30], a0.this$));
      }

      Complex Complex::multiply(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_multiply_89b4417f39f77363], a0));
      }

      Complex Complex::multiply(jint a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_multiply_1e8f748d6dce69c5], a0));
      }

      Complex Complex::multiplyMinusI() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_multiplyMinusI_847706ebd9444ecb]));
      }

      Complex Complex::multiplyPlusI() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_multiplyPlusI_847706ebd9444ecb]));
      }

      Complex Complex::negate() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_negate_847706ebd9444ecb]));
      }

      Complex Complex::newInstance(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_newInstance_89b4417f39f77363], a0));
      }

      jdouble Complex::norm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_norm_9981f74b2d109da6]);
      }

      ::java::util::List Complex::nthRoot(jint a0) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_nthRoot_11883c1c01a1aa4c], a0));
      }

      Complex Complex::pow(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_pow_48ac0ef047162b30], a0.this$));
      }

      Complex Complex::pow(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_pow_89b4417f39f77363], a0));
      }

      Complex Complex::pow(jint a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_pow_1e8f748d6dce69c5], a0));
      }

      Complex Complex::reciprocal() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_reciprocal_847706ebd9444ecb]));
      }

      Complex Complex::remainder(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_remainder_48ac0ef047162b30], a0.this$));
      }

      Complex Complex::remainder(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_remainder_89b4417f39f77363], a0));
      }

      Complex Complex::rint() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_rint_847706ebd9444ecb]));
      }

      Complex Complex::rootN(jint a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_rootN_1e8f748d6dce69c5], a0));
      }

      Complex Complex::scalb(jint a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_scalb_1e8f748d6dce69c5], a0));
      }

      Complex Complex::sign() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_sign_847706ebd9444ecb]));
      }

      Complex Complex::sin() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_sin_847706ebd9444ecb]));
      }

      ::org::hipparchus::util::FieldSinCos Complex::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_31b7b02b4932da60]));
      }

      Complex Complex::sinh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_sinh_847706ebd9444ecb]));
      }

      ::org::hipparchus::util::FieldSinhCosh Complex::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_b24d5962ea451135]));
      }

      Complex Complex::sqrt() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_sqrt_847706ebd9444ecb]));
      }

      Complex Complex::sqrt1z() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_sqrt1z_847706ebd9444ecb]));
      }

      Complex Complex::subtract(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_subtract_48ac0ef047162b30], a0.this$));
      }

      Complex Complex::subtract(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_subtract_89b4417f39f77363], a0));
      }

      Complex Complex::tan() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_tan_847706ebd9444ecb]));
      }

      Complex Complex::tanh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_tanh_847706ebd9444ecb]));
      }

      Complex Complex::toDegrees() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_toDegrees_847706ebd9444ecb]));
      }

      Complex Complex::toRadians() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_toRadians_847706ebd9444ecb]));
      }

      ::java::lang::String Complex::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }

      Complex Complex::ulp() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_ulp_847706ebd9444ecb]));
      }

      Complex Complex::valueOf(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Complex(env->callStaticObjectMethod(cls, mids$[mid_valueOf_89b4417f39f77363], a0));
      }

      Complex Complex::valueOf(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Complex(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4e58ab40c2f85d5e], a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/ShortPeriodicsInterpolatedCoefficient.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *ShortPeriodicsInterpolatedCoefficient::class$ = NULL;
            jmethodID *ShortPeriodicsInterpolatedCoefficient::mids$ = NULL;
            bool ShortPeriodicsInterpolatedCoefficient::live$ = false;

            jclass ShortPeriodicsInterpolatedCoefficient::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/ShortPeriodicsInterpolatedCoefficient");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_addGridPoint_03daf63e1af251cd] = env->getMethodID(cls, "addGridPoint", "(Lorg/orekit/time/AbsoluteDate;[D)V");
                mids$[mid_clearHistory_ff7cb6c242604316] = env->getMethodID(cls, "clearHistory", "()V");
                mids$[mid_value_9b63d19c31941c0f] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ShortPeriodicsInterpolatedCoefficient::ShortPeriodicsInterpolatedCoefficient(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

            void ShortPeriodicsInterpolatedCoefficient::addGridPoint(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addGridPoint_03daf63e1af251cd], a0.this$, a1.this$);
            }

            void ShortPeriodicsInterpolatedCoefficient::clearHistory() const
            {
              env->callVoidMethod(this$, mids$[mid_clearHistory_ff7cb6c242604316]);
            }

            JArray< jdouble > ShortPeriodicsInterpolatedCoefficient::value(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_9b63d19c31941c0f], a0.this$));
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
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ShortPeriodicsInterpolatedCoefficient_init_(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_addGridPoint(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *args);
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_clearHistory(t_ShortPeriodicsInterpolatedCoefficient *self);
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_value(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *arg);

            static PyMethodDef t_ShortPeriodicsInterpolatedCoefficient__methods_[] = {
              DECLARE_METHOD(t_ShortPeriodicsInterpolatedCoefficient, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ShortPeriodicsInterpolatedCoefficient, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ShortPeriodicsInterpolatedCoefficient, addGridPoint, METH_VARARGS),
              DECLARE_METHOD(t_ShortPeriodicsInterpolatedCoefficient, clearHistory, METH_NOARGS),
              DECLARE_METHOD(t_ShortPeriodicsInterpolatedCoefficient, value, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ShortPeriodicsInterpolatedCoefficient)[] = {
              { Py_tp_methods, t_ShortPeriodicsInterpolatedCoefficient__methods_ },
              { Py_tp_init, (void *) t_ShortPeriodicsInterpolatedCoefficient_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ShortPeriodicsInterpolatedCoefficient)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ShortPeriodicsInterpolatedCoefficient, t_ShortPeriodicsInterpolatedCoefficient, ShortPeriodicsInterpolatedCoefficient);

            void t_ShortPeriodicsInterpolatedCoefficient::install(PyObject *module)
            {
              installType(&PY_TYPE(ShortPeriodicsInterpolatedCoefficient), &PY_TYPE_DEF(ShortPeriodicsInterpolatedCoefficient), module, "ShortPeriodicsInterpolatedCoefficient", 0);
            }

            void t_ShortPeriodicsInterpolatedCoefficient::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ShortPeriodicsInterpolatedCoefficient), "class_", make_descriptor(ShortPeriodicsInterpolatedCoefficient::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ShortPeriodicsInterpolatedCoefficient), "wrapfn_", make_descriptor(t_ShortPeriodicsInterpolatedCoefficient::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ShortPeriodicsInterpolatedCoefficient), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ShortPeriodicsInterpolatedCoefficient::initializeClass, 1)))
                return NULL;
              return t_ShortPeriodicsInterpolatedCoefficient::wrap_Object(ShortPeriodicsInterpolatedCoefficient(((t_ShortPeriodicsInterpolatedCoefficient *) arg)->object.this$));
            }
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ShortPeriodicsInterpolatedCoefficient::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ShortPeriodicsInterpolatedCoefficient_init_(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              ShortPeriodicsInterpolatedCoefficient object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = ShortPeriodicsInterpolatedCoefficient(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_addGridPoint(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.addGridPoint(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addGridPoint", args);
              return NULL;
            }

            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_clearHistory(t_ShortPeriodicsInterpolatedCoefficient *self)
            {
              OBJ_CALL(self->object.clearHistory());
              Py_RETURN_NONE;
            }

            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_value(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "value", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}

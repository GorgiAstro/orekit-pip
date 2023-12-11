#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/GroundReceiverMeasurement.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
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
            mids$[mid_init$_cc77f77ecf3467f7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;ZLorg/orekit/time/AbsoluteDate;[D[D[DLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_0c97652d522ed1b8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;ZLorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getGroundStationCoordinates_2608b7929cfe65be] = env->getMethodID(cls, "getGroundStationCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/PVCoordinates;");
            mids$[mid_getGroundStationPosition_8386213426308de8] = env->getMethodID(cls, "getGroundStationPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getStation_2161f2a4a8c885ec] = env->getMethodID(cls, "getStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_isTwoWay_89b302893bdbe1f1] = env->getMethodID(cls, "isTwoWay", "()Z");
            mids$[mid_computeCommonParametersWithout_eb2352b23f22469e] = env->getMethodID(cls, "computeCommonParametersWithout", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/GroundReceiverCommonParametersWithoutDerivatives;");
            mids$[mid_computeCommonParametersWithDerivatives_e0d35cbb5d453f3a] = env->getMethodID(cls, "computeCommonParametersWithDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/GroundReceiverCommonParametersWithDerivatives;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundReceiverMeasurement::GroundReceiverMeasurement(const ::org::orekit::estimation::measurements::GroundStation & a0, jboolean a1, const ::org::orekit::time::AbsoluteDate & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, const JArray< jdouble > & a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_cc77f77ecf3467f7, a0.this$, a1, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        GroundReceiverMeasurement::GroundReceiverMeasurement(const ::org::orekit::estimation::measurements::GroundStation & a0, jboolean a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_0c97652d522ed1b8, a0.this$, a1, a2.this$, a3, a4, a5, a6.this$)) {}

        ::org::orekit::utils::PVCoordinates GroundReceiverMeasurement::getGroundStationCoordinates(const ::org::orekit::frames::Frame & a0) const
        {
          return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getGroundStationCoordinates_2608b7929cfe65be], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D GroundReceiverMeasurement::getGroundStationPosition(const ::org::orekit::frames::Frame & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getGroundStationPosition_8386213426308de8], a0.this$));
        }

        ::org::orekit::estimation::measurements::GroundStation GroundReceiverMeasurement::getStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getStation_2161f2a4a8c885ec]));
        }

        jboolean GroundReceiverMeasurement::isTwoWay() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isTwoWay_89b302893bdbe1f1]);
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
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityData.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00InputParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/GenericTimeStampedCache.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader.h"
#include "org/orekit/models/earth/atmosphere/DTM2000InputParameters.h"
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
                mids$[mid_init$_f18ad75b06fddccc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader;Lorg/orekit/time/TimeScale;IDDD)V");
                mids$[mid_getCache_792741bd4cbd4052] = env->getMethodID(cls, "getCache", "()Lorg/orekit/utils/GenericTimeStampedCache;");
                mids$[mid_getMaxDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMinDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getSupportedNames_3cffd47377eca18a] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
                mids$[mid_getUTC_527ee9dde1a96470] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/TimeScale;");
                mids$[mid_getLinearInterpolation_8d3b4fd3f0562a0f] = env->getMethodID(cls, "getLinearInterpolation", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/function/Function;)D");
                mids$[mid_getLinearInterpolation_090c96d685adecf6] = env->getMethodID(cls, "getLinearInterpolation", "(Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityData$LocalSolarActivity;Ljava/util/function/Function;)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractSolarActivityData::AbstractSolarActivityData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader & a1, const ::org::orekit::time::TimeScale & a2, jint a3, jdouble a4, jdouble a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f18ad75b06fddccc, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

            ::org::orekit::utils::GenericTimeStampedCache AbstractSolarActivityData::getCache() const
            {
              return ::org::orekit::utils::GenericTimeStampedCache(env->callObjectMethod(this$, mids$[mid_getCache_792741bd4cbd4052]));
            }

            ::org::orekit::time::AbsoluteDate AbstractSolarActivityData::getMaxDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_7a97f7e149e79afb]));
            }

            ::org::orekit::time::AbsoluteDate AbstractSolarActivityData::getMinDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_7a97f7e149e79afb]));
            }

            ::java::lang::String AbstractSolarActivityData::getSupportedNames() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_3cffd47377eca18a]));
            }

            ::org::orekit::time::TimeScale AbstractSolarActivityData::getUTC() const
            {
              return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getUTC_527ee9dde1a96470]));
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
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmParser.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmParser.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Apm.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ApmParser::class$ = NULL;
              jmethodID *ApmParser::mids$ = NULL;
              bool ApmParser::live$ = false;

              jclass ApmParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ApmParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_691c47b62bac3b4a] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/adm/apm/Apm;");
                  mids$[mid_finalizeData_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_880defc2f8f9f844] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;");
                  mids$[mid_inData_89b302893bdbe1f1] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_89b302893bdbe1f1] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_prepareData_89b302893bdbe1f1] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_89b302893bdbe1f1] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_a580586827f4ec13] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::Apm ApmParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::Apm(env->callObjectMethod(this$, mids$[mid_build_691c47b62bac3b4a]));
              }

              jboolean ApmParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_89b302893bdbe1f1]);
              }

              jboolean ApmParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_89b302893bdbe1f1]);
              }

              jboolean ApmParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_89b302893bdbe1f1]);
              }

              ::org::orekit::files::ccsds::ndm::adm::AdmHeader ApmParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_880defc2f8f9f844]));
              }

              jboolean ApmParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_89b302893bdbe1f1]);
              }

              jboolean ApmParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_89b302893bdbe1f1]);
              }

              jboolean ApmParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_89b302893bdbe1f1]);
              }

              jboolean ApmParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_89b302893bdbe1f1]);
              }

              jboolean ApmParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_89b302893bdbe1f1]);
              }

              jboolean ApmParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_89b302893bdbe1f1]);
              }

              void ApmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_a580586827f4ec13], a0.this$);
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
              static PyObject *t_ApmParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmParser_of_(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_build(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_finalizeData(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_finalizeHeader(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_finalizeMetadata(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_getHeader(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_inData(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_inHeader(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_inMetadata(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_prepareData(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_prepareHeader(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_prepareMetadata(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_reset(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_get__header(t_ApmParser *self, void *data);
              static PyObject *t_ApmParser_get__parameters_(t_ApmParser *self, void *data);
              static PyGetSetDef t_ApmParser__fields_[] = {
                DECLARE_GET_FIELD(t_ApmParser, header),
                DECLARE_GET_FIELD(t_ApmParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ApmParser__methods_[] = {
                DECLARE_METHOD(t_ApmParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, build, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ApmParser)[] = {
                { Py_tp_methods, t_ApmParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ApmParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ApmParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::adm::AdmParser),
                NULL
              };

              DEFINE_TYPE(ApmParser, t_ApmParser, ApmParser);
              PyObject *t_ApmParser::wrap_Object(const ApmParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_ApmParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmParser *self = (t_ApmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_ApmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_ApmParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmParser *self = (t_ApmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_ApmParser::install(PyObject *module)
              {
                installType(&PY_TYPE(ApmParser), &PY_TYPE_DEF(ApmParser), module, "ApmParser", 0);
              }

              void t_ApmParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmParser), "class_", make_descriptor(ApmParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmParser), "wrapfn_", make_descriptor(t_ApmParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_ApmParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ApmParser::initializeClass, 1)))
                  return NULL;
                return t_ApmParser::wrap_Object(ApmParser(((t_ApmParser *) arg)->object.this$));
              }
              static PyObject *t_ApmParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ApmParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ApmParser_of_(t_ApmParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ApmParser_build(t_ApmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Apm result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::adm::apm::t_Apm::wrap_Object(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_ApmParser_finalizeData(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_ApmParser_finalizeHeader(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_ApmParser_finalizeMetadata(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_ApmParser_getHeader(t_ApmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_ApmParser_inData(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_ApmParser_inHeader(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_ApmParser_inMetadata(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_ApmParser_prepareData(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_ApmParser_prepareHeader(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_ApmParser_prepareMetadata(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_ApmParser_reset(t_ApmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_ApmParser_get__parameters_(t_ApmParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_ApmParser_get__header(t_ApmParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(value);
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
#include "org/orekit/attitudes/Inertia.h"
#include "org/orekit/attitudes/InertiaAxis.h"
#include "org/orekit/attitudes/Inertia.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *Inertia::class$ = NULL;
      jmethodID *Inertia::mids$ = NULL;
      bool Inertia::live$ = false;

      jclass Inertia::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/Inertia");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getInertiaAxis1_b822d9cbafca1aaf] = env->getMethodID(cls, "getInertiaAxis1", "()Lorg/orekit/attitudes/InertiaAxis;");
          mids$[mid_getInertiaAxis2_b822d9cbafca1aaf] = env->getMethodID(cls, "getInertiaAxis2", "()Lorg/orekit/attitudes/InertiaAxis;");
          mids$[mid_getInertiaAxis3_b822d9cbafca1aaf] = env->getMethodID(cls, "getInertiaAxis3", "()Lorg/orekit/attitudes/InertiaAxis;");
          mids$[mid_momentum_b48aa9aef740fa79] = env->getMethodID(cls, "momentum", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_swap12_0c35e3e78a73a076] = env->getMethodID(cls, "swap12", "()Lorg/orekit/attitudes/Inertia;");
          mids$[mid_swap13_0c35e3e78a73a076] = env->getMethodID(cls, "swap13", "()Lorg/orekit/attitudes/Inertia;");
          mids$[mid_swap23_0c35e3e78a73a076] = env->getMethodID(cls, "swap23", "()Lorg/orekit/attitudes/Inertia;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::InertiaAxis Inertia::getInertiaAxis1() const
      {
        return ::org::orekit::attitudes::InertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis1_b822d9cbafca1aaf]));
      }

      ::org::orekit::attitudes::InertiaAxis Inertia::getInertiaAxis2() const
      {
        return ::org::orekit::attitudes::InertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis2_b822d9cbafca1aaf]));
      }

      ::org::orekit::attitudes::InertiaAxis Inertia::getInertiaAxis3() const
      {
        return ::org::orekit::attitudes::InertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis3_b822d9cbafca1aaf]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Inertia::momentum(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_momentum_b48aa9aef740fa79], a0.this$));
      }

      Inertia Inertia::swap12() const
      {
        return Inertia(env->callObjectMethod(this$, mids$[mid_swap12_0c35e3e78a73a076]));
      }

      Inertia Inertia::swap13() const
      {
        return Inertia(env->callObjectMethod(this$, mids$[mid_swap13_0c35e3e78a73a076]));
      }

      Inertia Inertia::swap23() const
      {
        return Inertia(env->callObjectMethod(this$, mids$[mid_swap23_0c35e3e78a73a076]));
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
      static PyObject *t_Inertia_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Inertia_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Inertia_getInertiaAxis1(t_Inertia *self);
      static PyObject *t_Inertia_getInertiaAxis2(t_Inertia *self);
      static PyObject *t_Inertia_getInertiaAxis3(t_Inertia *self);
      static PyObject *t_Inertia_momentum(t_Inertia *self, PyObject *arg);
      static PyObject *t_Inertia_swap12(t_Inertia *self);
      static PyObject *t_Inertia_swap13(t_Inertia *self);
      static PyObject *t_Inertia_swap23(t_Inertia *self);
      static PyObject *t_Inertia_get__inertiaAxis1(t_Inertia *self, void *data);
      static PyObject *t_Inertia_get__inertiaAxis2(t_Inertia *self, void *data);
      static PyObject *t_Inertia_get__inertiaAxis3(t_Inertia *self, void *data);
      static PyGetSetDef t_Inertia__fields_[] = {
        DECLARE_GET_FIELD(t_Inertia, inertiaAxis1),
        DECLARE_GET_FIELD(t_Inertia, inertiaAxis2),
        DECLARE_GET_FIELD(t_Inertia, inertiaAxis3),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Inertia__methods_[] = {
        DECLARE_METHOD(t_Inertia, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Inertia, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Inertia, getInertiaAxis1, METH_NOARGS),
        DECLARE_METHOD(t_Inertia, getInertiaAxis2, METH_NOARGS),
        DECLARE_METHOD(t_Inertia, getInertiaAxis3, METH_NOARGS),
        DECLARE_METHOD(t_Inertia, momentum, METH_O),
        DECLARE_METHOD(t_Inertia, swap12, METH_NOARGS),
        DECLARE_METHOD(t_Inertia, swap13, METH_NOARGS),
        DECLARE_METHOD(t_Inertia, swap23, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Inertia)[] = {
        { Py_tp_methods, t_Inertia__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Inertia__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Inertia)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Inertia, t_Inertia, Inertia);

      void t_Inertia::install(PyObject *module)
      {
        installType(&PY_TYPE(Inertia), &PY_TYPE_DEF(Inertia), module, "Inertia", 0);
      }

      void t_Inertia::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Inertia), "class_", make_descriptor(Inertia::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Inertia), "wrapfn_", make_descriptor(t_Inertia::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Inertia), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Inertia_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Inertia::initializeClass, 1)))
          return NULL;
        return t_Inertia::wrap_Object(Inertia(((t_Inertia *) arg)->object.this$));
      }
      static PyObject *t_Inertia_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Inertia::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Inertia_getInertiaAxis1(t_Inertia *self)
      {
        ::org::orekit::attitudes::InertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiaAxis1());
        return ::org::orekit::attitudes::t_InertiaAxis::wrap_Object(result);
      }

      static PyObject *t_Inertia_getInertiaAxis2(t_Inertia *self)
      {
        ::org::orekit::attitudes::InertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiaAxis2());
        return ::org::orekit::attitudes::t_InertiaAxis::wrap_Object(result);
      }

      static PyObject *t_Inertia_getInertiaAxis3(t_Inertia *self)
      {
        ::org::orekit::attitudes::InertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiaAxis3());
        return ::org::orekit::attitudes::t_InertiaAxis::wrap_Object(result);
      }

      static PyObject *t_Inertia_momentum(t_Inertia *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.momentum(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "momentum", arg);
        return NULL;
      }

      static PyObject *t_Inertia_swap12(t_Inertia *self)
      {
        Inertia result((jobject) NULL);
        OBJ_CALL(result = self->object.swap12());
        return t_Inertia::wrap_Object(result);
      }

      static PyObject *t_Inertia_swap13(t_Inertia *self)
      {
        Inertia result((jobject) NULL);
        OBJ_CALL(result = self->object.swap13());
        return t_Inertia::wrap_Object(result);
      }

      static PyObject *t_Inertia_swap23(t_Inertia *self)
      {
        Inertia result((jobject) NULL);
        OBJ_CALL(result = self->object.swap23());
        return t_Inertia::wrap_Object(result);
      }

      static PyObject *t_Inertia_get__inertiaAxis1(t_Inertia *self, void *data)
      {
        ::org::orekit::attitudes::InertiaAxis value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiaAxis1());
        return ::org::orekit::attitudes::t_InertiaAxis::wrap_Object(value);
      }

      static PyObject *t_Inertia_get__inertiaAxis2(t_Inertia *self, void *data)
      {
        ::org::orekit::attitudes::InertiaAxis value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiaAxis2());
        return ::org::orekit::attitudes::t_InertiaAxis::wrap_Object(value);
      }

      static PyObject *t_Inertia_get__inertiaAxis3(t_Inertia *self, void *data)
      {
        ::org::orekit::attitudes::InertiaAxis value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiaAxis3());
        return ::org::orekit::attitudes::t_InertiaAxis::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/linear/LinearEvolution.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace linear {

          ::java::lang::Class *LinearEvolution::class$ = NULL;
          jmethodID *LinearEvolution::mids$ = NULL;
          bool LinearEvolution::live$ = false;

          jclass LinearEvolution::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/linear/LinearEvolution");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_98bbcc753692b462] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
              mids$[mid_getCommand_75d50d73180655b4] = env->getMethodID(cls, "getCommand", "()Lorg/hipparchus/linear/RealVector;");
              mids$[mid_getControlMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getControlMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getMeasurementJacobian_70a207fcbc031df2] = env->getMethodID(cls, "getMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getProcessNoiseMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getProcessNoiseMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getStateTransitionMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LinearEvolution::LinearEvolution(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3, const ::org::hipparchus::linear::RealMatrix & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_98bbcc753692b462, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          ::org::hipparchus::linear::RealVector LinearEvolution::getCommand() const
          {
            return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getCommand_75d50d73180655b4]));
          }

          ::org::hipparchus::linear::RealMatrix LinearEvolution::getControlMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getControlMatrix_70a207fcbc031df2]));
          }

          ::org::hipparchus::linear::RealMatrix LinearEvolution::getMeasurementJacobian() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getMeasurementJacobian_70a207fcbc031df2]));
          }

          ::org::hipparchus::linear::RealMatrix LinearEvolution::getProcessNoiseMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_70a207fcbc031df2]));
          }

          ::org::hipparchus::linear::RealMatrix LinearEvolution::getStateTransitionMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_70a207fcbc031df2]));
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
    namespace filtering {
      namespace kalman {
        namespace linear {
          static PyObject *t_LinearEvolution_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LinearEvolution_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LinearEvolution_init_(t_LinearEvolution *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LinearEvolution_getCommand(t_LinearEvolution *self);
          static PyObject *t_LinearEvolution_getControlMatrix(t_LinearEvolution *self);
          static PyObject *t_LinearEvolution_getMeasurementJacobian(t_LinearEvolution *self);
          static PyObject *t_LinearEvolution_getProcessNoiseMatrix(t_LinearEvolution *self);
          static PyObject *t_LinearEvolution_getStateTransitionMatrix(t_LinearEvolution *self);
          static PyObject *t_LinearEvolution_get__command(t_LinearEvolution *self, void *data);
          static PyObject *t_LinearEvolution_get__controlMatrix(t_LinearEvolution *self, void *data);
          static PyObject *t_LinearEvolution_get__measurementJacobian(t_LinearEvolution *self, void *data);
          static PyObject *t_LinearEvolution_get__processNoiseMatrix(t_LinearEvolution *self, void *data);
          static PyObject *t_LinearEvolution_get__stateTransitionMatrix(t_LinearEvolution *self, void *data);
          static PyGetSetDef t_LinearEvolution__fields_[] = {
            DECLARE_GET_FIELD(t_LinearEvolution, command),
            DECLARE_GET_FIELD(t_LinearEvolution, controlMatrix),
            DECLARE_GET_FIELD(t_LinearEvolution, measurementJacobian),
            DECLARE_GET_FIELD(t_LinearEvolution, processNoiseMatrix),
            DECLARE_GET_FIELD(t_LinearEvolution, stateTransitionMatrix),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_LinearEvolution__methods_[] = {
            DECLARE_METHOD(t_LinearEvolution, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearEvolution, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearEvolution, getCommand, METH_NOARGS),
            DECLARE_METHOD(t_LinearEvolution, getControlMatrix, METH_NOARGS),
            DECLARE_METHOD(t_LinearEvolution, getMeasurementJacobian, METH_NOARGS),
            DECLARE_METHOD(t_LinearEvolution, getProcessNoiseMatrix, METH_NOARGS),
            DECLARE_METHOD(t_LinearEvolution, getStateTransitionMatrix, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LinearEvolution)[] = {
            { Py_tp_methods, t_LinearEvolution__methods_ },
            { Py_tp_init, (void *) t_LinearEvolution_init_ },
            { Py_tp_getset, t_LinearEvolution__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LinearEvolution)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LinearEvolution, t_LinearEvolution, LinearEvolution);

          void t_LinearEvolution::install(PyObject *module)
          {
            installType(&PY_TYPE(LinearEvolution), &PY_TYPE_DEF(LinearEvolution), module, "LinearEvolution", 0);
          }

          void t_LinearEvolution::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearEvolution), "class_", make_descriptor(LinearEvolution::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearEvolution), "wrapfn_", make_descriptor(t_LinearEvolution::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearEvolution), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LinearEvolution_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LinearEvolution::initializeClass, 1)))
              return NULL;
            return t_LinearEvolution::wrap_Object(LinearEvolution(((t_LinearEvolution *) arg)->object.this$));
          }
          static PyObject *t_LinearEvolution_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LinearEvolution::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LinearEvolution_init_(t_LinearEvolution *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a4((jobject) NULL);
            LinearEvolution object((jobject) NULL);

            if (!parseArgs(args, "kkkkk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = LinearEvolution(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_LinearEvolution_getCommand(t_LinearEvolution *self)
          {
            ::org::hipparchus::linear::RealVector result((jobject) NULL);
            OBJ_CALL(result = self->object.getCommand());
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
          }

          static PyObject *t_LinearEvolution_getControlMatrix(t_LinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getControlMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_LinearEvolution_getMeasurementJacobian(t_LinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeasurementJacobian());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_LinearEvolution_getProcessNoiseMatrix(t_LinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getProcessNoiseMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_LinearEvolution_getStateTransitionMatrix(t_LinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getStateTransitionMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_LinearEvolution_get__command(t_LinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealVector value((jobject) NULL);
            OBJ_CALL(value = self->object.getCommand());
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
          }

          static PyObject *t_LinearEvolution_get__controlMatrix(t_LinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getControlMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_LinearEvolution_get__measurementJacobian(t_LinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeasurementJacobian());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_LinearEvolution_get__processNoiseMatrix(t_LinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getProcessNoiseMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_LinearEvolution_get__stateTransitionMatrix(t_LinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getStateTransitionMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/AbstractIntegratedPropagator.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *AbstractIntegratedPropagator::class$ = NULL;
        jmethodID *AbstractIntegratedPropagator::mids$ = NULL;
        bool AbstractIntegratedPropagator::live$ = false;

        jclass AbstractIntegratedPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/AbstractIntegratedPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addAdditionalDerivativesProvider_34784b387edde43d] = env->getMethodID(cls, "addAdditionalDerivativesProvider", "(Lorg/orekit/propagation/integration/AdditionalDerivativesProvider;)V");
            mids$[mid_addEventDetector_2e2dfaf38ed50d1d] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_clearEventsDetectors_0640e6acf969ed28] = env->getMethodID(cls, "clearEventsDetectors", "()V");
            mids$[mid_getAdditionalDerivativesProviders_0d9551367f7ecdef] = env->getMethodID(cls, "getAdditionalDerivativesProviders", "()Ljava/util/List;");
            mids$[mid_getBasicDimension_412668abc8d889e9] = env->getMethodID(cls, "getBasicDimension", "()I");
            mids$[mid_getCalls_412668abc8d889e9] = env->getMethodID(cls, "getCalls", "()I");
            mids$[mid_getEphemerisGenerator_6a3edfe13bcee780] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
            mids$[mid_getEventsDetectors_12ee61573a18f417] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
            mids$[mid_getIntegratorName_3cffd47377eca18a] = env->getMethodID(cls, "getIntegratorName", "()Ljava/lang/String;");
            mids$[mid_getManagedAdditionalStates_5d7d8c500345981d] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
            mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getPropagationType_81e4bfcfa9059f10] = env->getMethodID(cls, "getPropagationType", "()Lorg/orekit/propagation/PropagationType;");
            mids$[mid_getResetAtEnd_89b302893bdbe1f1] = env->getMethodID(cls, "getResetAtEnd", "()Z");
            mids$[mid_isAdditionalStateManaged_fd2162b8a05a22fe] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
            mids$[mid_propagate_15e0d02372b1347b] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_propagate_b96c0d97a162784d] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_setAttitudeProvider_8fa6c0c067ead7b2] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_setMu_10f281d777284cea] = env->getMethodID(cls, "setMu", "(D)V");
            mids$[mid_setResetAtEnd_ed2afdb8506b9742] = env->getMethodID(cls, "setResetAtEnd", "(Z)V");
            mids$[mid_getOrbitType_2cea2a2cb3e02091] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_setPositionAngleType_44c283653315b1a7] = env->getMethodID(cls, "setPositionAngleType", "(Lorg/orekit/orbits/PositionAngleType;)V");
            mids$[mid_createMapper_31b084497c320ed2] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;");
            mids$[mid_setUpEventDetector_a8d3aa9c250ffc52] = env->getMethodID(cls, "setUpEventDetector", "(Lorg/hipparchus/ode/ODEIntegrator;Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_setUpUserEventDetectors_0640e6acf969ed28] = env->getMethodID(cls, "setUpUserEventDetectors", "()V");
            mids$[mid_getInitialIntegrationState_15e85d5301b90ef8] = env->getMethodID(cls, "getInitialIntegrationState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_beforeIntegration_0472264ad6f40bc2] = env->getMethodID(cls, "beforeIntegration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_afterIntegration_0640e6acf969ed28] = env->getMethodID(cls, "afterIntegration", "()V");
            mids$[mid_getMainStateEquations_4a2f137b7a0c1747] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;");
            mids$[mid_initMapper_0640e6acf969ed28] = env->getMethodID(cls, "initMapper", "()V");
            mids$[mid_setOrbitType_6ccfc646a24c9722] = env->getMethodID(cls, "setOrbitType", "(Lorg/orekit/orbits/OrbitType;)V");
            mids$[mid_getIntegrator_7df926536e4d0676] = env->getMethodID(cls, "getIntegrator", "()Lorg/hipparchus/ode/ODEIntegrator;");
            mids$[mid_setUpStmAndJacobianGenerators_0640e6acf969ed28] = env->getMethodID(cls, "setUpStmAndJacobianGenerators", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractIntegratedPropagator::addAdditionalDerivativesProvider(const ::org::orekit::propagation::integration::AdditionalDerivativesProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addAdditionalDerivativesProvider_34784b387edde43d], a0.this$);
        }

        void AbstractIntegratedPropagator::addEventDetector(const ::org::orekit::propagation::events::EventDetector & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDetector_2e2dfaf38ed50d1d], a0.this$);
        }

        void AbstractIntegratedPropagator::clearEventsDetectors() const
        {
          env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_0640e6acf969ed28]);
        }

        ::java::util::List AbstractIntegratedPropagator::getAdditionalDerivativesProviders() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalDerivativesProviders_0d9551367f7ecdef]));
        }

        jint AbstractIntegratedPropagator::getBasicDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getBasicDimension_412668abc8d889e9]);
        }

        jint AbstractIntegratedPropagator::getCalls() const
        {
          return env->callIntMethod(this$, mids$[mid_getCalls_412668abc8d889e9]);
        }

        ::org::orekit::propagation::EphemerisGenerator AbstractIntegratedPropagator::getEphemerisGenerator() const
        {
          return ::org::orekit::propagation::EphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_6a3edfe13bcee780]));
        }

        ::java::util::Collection AbstractIntegratedPropagator::getEventsDetectors() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_12ee61573a18f417]));
        }

        ::java::lang::String AbstractIntegratedPropagator::getIntegratorName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getIntegratorName_3cffd47377eca18a]));
        }

        JArray< ::java::lang::String > AbstractIntegratedPropagator::getManagedAdditionalStates() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_5d7d8c500345981d]));
        }

        jdouble AbstractIntegratedPropagator::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
        }

        ::org::orekit::propagation::PropagationType AbstractIntegratedPropagator::getPropagationType() const
        {
          return ::org::orekit::propagation::PropagationType(env->callObjectMethod(this$, mids$[mid_getPropagationType_81e4bfcfa9059f10]));
        }

        jboolean AbstractIntegratedPropagator::getResetAtEnd() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getResetAtEnd_89b302893bdbe1f1]);
        }

        jboolean AbstractIntegratedPropagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_fd2162b8a05a22fe], a0.this$);
        }

        ::org::orekit::propagation::SpacecraftState AbstractIntegratedPropagator::propagate(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_15e0d02372b1347b], a0.this$));
        }

        ::org::orekit::propagation::SpacecraftState AbstractIntegratedPropagator::propagate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_b96c0d97a162784d], a0.this$, a1.this$));
        }

        void AbstractIntegratedPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8fa6c0c067ead7b2], a0.this$);
        }

        void AbstractIntegratedPropagator::setMu(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMu_10f281d777284cea], a0);
        }

        void AbstractIntegratedPropagator::setResetAtEnd(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setResetAtEnd_ed2afdb8506b9742], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        static PyObject *t_AbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator_addAdditionalDerivativesProvider(t_AbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator_addEventDetector(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_clearEventsDetectors(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_getAdditionalDerivativesProviders(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getBasicDimension(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getCalls(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getEphemerisGenerator(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_getEventsDetectors(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_getIntegratorName(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getManagedAdditionalStates(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_getMu(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getPropagationType(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_getResetAtEnd(t_AbstractIntegratedPropagator *self);
        static PyObject *t_AbstractIntegratedPropagator_isAdditionalStateManaged(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_propagate(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_setAttitudeProvider(t_AbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_AbstractIntegratedPropagator_setMu(t_AbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator_setResetAtEnd(t_AbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator_get__additionalDerivativesProviders(t_AbstractIntegratedPropagator *self, void *data);
        static int t_AbstractIntegratedPropagator_set__attitudeProvider(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__basicDimension(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__calls(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__ephemerisGenerator(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__eventsDetectors(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__integratorName(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__managedAdditionalStates(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__mu(t_AbstractIntegratedPropagator *self, void *data);
        static int t_AbstractIntegratedPropagator_set__mu(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__propagationType(t_AbstractIntegratedPropagator *self, void *data);
        static PyObject *t_AbstractIntegratedPropagator_get__resetAtEnd(t_AbstractIntegratedPropagator *self, void *data);
        static int t_AbstractIntegratedPropagator_set__resetAtEnd(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyGetSetDef t_AbstractIntegratedPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, additionalDerivativesProviders),
          DECLARE_SET_FIELD(t_AbstractIntegratedPropagator, attitudeProvider),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, basicDimension),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, calls),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, ephemerisGenerator),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, eventsDetectors),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, integratorName),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, managedAdditionalStates),
          DECLARE_GETSET_FIELD(t_AbstractIntegratedPropagator, mu),
          DECLARE_GET_FIELD(t_AbstractIntegratedPropagator, propagationType),
          DECLARE_GETSET_FIELD(t_AbstractIntegratedPropagator, resetAtEnd),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractIntegratedPropagator__methods_[] = {
          DECLARE_METHOD(t_AbstractIntegratedPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, addAdditionalDerivativesProvider, METH_O),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, addEventDetector, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, clearEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getAdditionalDerivativesProviders, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getBasicDimension, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getCalls, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getEphemerisGenerator, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getIntegratorName, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getManagedAdditionalStates, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getMu, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getPropagationType, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, getResetAtEnd, METH_NOARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, isAdditionalStateManaged, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, propagate, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, setAttitudeProvider, METH_VARARGS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, setMu, METH_O),
          DECLARE_METHOD(t_AbstractIntegratedPropagator, setResetAtEnd, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractIntegratedPropagator)[] = {
          { Py_tp_methods, t_AbstractIntegratedPropagator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractIntegratedPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractIntegratedPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::AbstractPropagator),
          NULL
        };

        DEFINE_TYPE(AbstractIntegratedPropagator, t_AbstractIntegratedPropagator, AbstractIntegratedPropagator);

        void t_AbstractIntegratedPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractIntegratedPropagator), &PY_TYPE_DEF(AbstractIntegratedPropagator), module, "AbstractIntegratedPropagator", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator), "MainStateEquations", make_descriptor(&PY_TYPE_DEF(AbstractIntegratedPropagator$MainStateEquations)));
        }

        void t_AbstractIntegratedPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator), "class_", make_descriptor(AbstractIntegratedPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator), "wrapfn_", make_descriptor(t_AbstractIntegratedPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractIntegratedPropagator::initializeClass, 1)))
            return NULL;
          return t_AbstractIntegratedPropagator::wrap_Object(AbstractIntegratedPropagator(((t_AbstractIntegratedPropagator *) arg)->object.this$));
        }
        static PyObject *t_AbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractIntegratedPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractIntegratedPropagator_addAdditionalDerivativesProvider(t_AbstractIntegratedPropagator *self, PyObject *arg)
        {
          ::org::orekit::propagation::integration::AdditionalDerivativesProvider a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::integration::AdditionalDerivativesProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addAdditionalDerivativesProvider(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAdditionalDerivativesProvider", arg);
          return NULL;
        }

        static PyObject *t_AbstractIntegratedPropagator_addEventDetector(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addEventDetector(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "addEventDetector", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_clearEventsDetectors(t_AbstractIntegratedPropagator *self, PyObject *args)
        {

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(self->object.clearEventsDetectors());
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "clearEventsDetectors", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_getAdditionalDerivativesProviders(t_AbstractIntegratedPropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAdditionalDerivativesProviders());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::integration::PY_TYPE(AdditionalDerivativesProvider));
        }

        static PyObject *t_AbstractIntegratedPropagator_getBasicDimension(t_AbstractIntegratedPropagator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getBasicDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractIntegratedPropagator_getCalls(t_AbstractIntegratedPropagator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCalls());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractIntegratedPropagator_getEphemerisGenerator(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::EphemerisGenerator result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEphemerisGenerator());
            return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "getEphemerisGenerator", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_getEventsDetectors(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          ::java::util::Collection result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEventsDetectors());
            return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "getEventsDetectors", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_getIntegratorName(t_AbstractIntegratedPropagator *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getIntegratorName());
          return j2p(result);
        }

        static PyObject *t_AbstractIntegratedPropagator_getManagedAdditionalStates(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          JArray< ::java::lang::String > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getManagedAdditionalStates());
            return JArray<jstring>(result.this$).wrap();
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "getManagedAdditionalStates", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_getMu(t_AbstractIntegratedPropagator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractIntegratedPropagator_getPropagationType(t_AbstractIntegratedPropagator *self)
        {
          ::org::orekit::propagation::PropagationType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(result);
        }

        static PyObject *t_AbstractIntegratedPropagator_getResetAtEnd(t_AbstractIntegratedPropagator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getResetAtEnd());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractIntegratedPropagator_isAdditionalStateManaged(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "isAdditionalStateManaged", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_propagate(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.propagate(a0));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.propagate(a0, a1));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "propagate", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_setAttitudeProvider(t_AbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setAttitudeProvider(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractIntegratedPropagator), (PyObject *) self, "setAttitudeProvider", args, 2);
        }

        static PyObject *t_AbstractIntegratedPropagator_setMu(t_AbstractIntegratedPropagator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setMu(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMu", arg);
          return NULL;
        }

        static PyObject *t_AbstractIntegratedPropagator_setResetAtEnd(t_AbstractIntegratedPropagator *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setResetAtEnd(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setResetAtEnd", arg);
          return NULL;
        }

        static PyObject *t_AbstractIntegratedPropagator_get__additionalDerivativesProviders(t_AbstractIntegratedPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAdditionalDerivativesProviders());
          return ::java::util::t_List::wrap_Object(value);
        }

        static int t_AbstractIntegratedPropagator_set__attitudeProvider(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
            {
              INT_CALL(self->object.setAttitudeProvider(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
          return -1;
        }

        static PyObject *t_AbstractIntegratedPropagator_get__basicDimension(t_AbstractIntegratedPropagator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getBasicDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__calls(t_AbstractIntegratedPropagator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCalls());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__ephemerisGenerator(t_AbstractIntegratedPropagator *self, void *data)
        {
          ::org::orekit::propagation::EphemerisGenerator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEphemerisGenerator());
          return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__eventsDetectors(t_AbstractIntegratedPropagator *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventsDetectors());
          return ::java::util::t_Collection::wrap_Object(value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__integratorName(t_AbstractIntegratedPropagator *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getIntegratorName());
          return j2p(value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__managedAdditionalStates(t_AbstractIntegratedPropagator *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getManagedAdditionalStates());
          return JArray<jstring>(value.this$).wrap();
        }

        static PyObject *t_AbstractIntegratedPropagator_get__mu(t_AbstractIntegratedPropagator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }
        static int t_AbstractIntegratedPropagator_set__mu(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMu(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mu", arg);
          return -1;
        }

        static PyObject *t_AbstractIntegratedPropagator_get__propagationType(t_AbstractIntegratedPropagator *self, void *data)
        {
          ::org::orekit::propagation::PropagationType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(value);
        }

        static PyObject *t_AbstractIntegratedPropagator_get__resetAtEnd(t_AbstractIntegratedPropagator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getResetAtEnd());
          Py_RETURN_BOOL(value);
        }
        static int t_AbstractIntegratedPropagator_set__resetAtEnd(t_AbstractIntegratedPropagator *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setResetAtEnd(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "resetAtEnd", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/raster/Tile$Location.h"
#include "org/orekit/rugged/raster/Tile$Location.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *Tile$Location::class$ = NULL;
        jmethodID *Tile$Location::mids$ = NULL;
        bool Tile$Location::live$ = false;
        Tile$Location *Tile$Location::EAST = NULL;
        Tile$Location *Tile$Location::HAS_INTERPOLATION_NEIGHBORS = NULL;
        Tile$Location *Tile$Location::NORTH = NULL;
        Tile$Location *Tile$Location::NORTH_EAST = NULL;
        Tile$Location *Tile$Location::NORTH_WEST = NULL;
        Tile$Location *Tile$Location::SOUTH = NULL;
        Tile$Location *Tile$Location::SOUTH_EAST = NULL;
        Tile$Location *Tile$Location::SOUTH_WEST = NULL;
        Tile$Location *Tile$Location::WEST = NULL;

        jclass Tile$Location::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/Tile$Location");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_28fedaa182441e99] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/raster/Tile$Location;");
            mids$[mid_values_6abdd870954fe22d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/raster/Tile$Location;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            EAST = new Tile$Location(env->getStaticObjectField(cls, "EAST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            HAS_INTERPOLATION_NEIGHBORS = new Tile$Location(env->getStaticObjectField(cls, "HAS_INTERPOLATION_NEIGHBORS", "Lorg/orekit/rugged/raster/Tile$Location;"));
            NORTH = new Tile$Location(env->getStaticObjectField(cls, "NORTH", "Lorg/orekit/rugged/raster/Tile$Location;"));
            NORTH_EAST = new Tile$Location(env->getStaticObjectField(cls, "NORTH_EAST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            NORTH_WEST = new Tile$Location(env->getStaticObjectField(cls, "NORTH_WEST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            SOUTH = new Tile$Location(env->getStaticObjectField(cls, "SOUTH", "Lorg/orekit/rugged/raster/Tile$Location;"));
            SOUTH_EAST = new Tile$Location(env->getStaticObjectField(cls, "SOUTH_EAST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            SOUTH_WEST = new Tile$Location(env->getStaticObjectField(cls, "SOUTH_WEST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            WEST = new Tile$Location(env->getStaticObjectField(cls, "WEST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Tile$Location Tile$Location::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Tile$Location(env->callStaticObjectMethod(cls, mids$[mid_valueOf_28fedaa182441e99], a0.this$));
        }

        JArray< Tile$Location > Tile$Location::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Tile$Location >(env->callStaticObjectMethod(cls, mids$[mid_values_6abdd870954fe22d]));
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
        static PyObject *t_Tile$Location_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tile$Location_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tile$Location_of_(t_Tile$Location *self, PyObject *args);
        static PyObject *t_Tile$Location_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Tile$Location_values(PyTypeObject *type);
        static PyObject *t_Tile$Location_get__parameters_(t_Tile$Location *self, void *data);
        static PyGetSetDef t_Tile$Location__fields_[] = {
          DECLARE_GET_FIELD(t_Tile$Location, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Tile$Location__methods_[] = {
          DECLARE_METHOD(t_Tile$Location, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tile$Location, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tile$Location, of_, METH_VARARGS),
          DECLARE_METHOD(t_Tile$Location, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Tile$Location, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Tile$Location)[] = {
          { Py_tp_methods, t_Tile$Location__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Tile$Location__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Tile$Location)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Tile$Location, t_Tile$Location, Tile$Location);
        PyObject *t_Tile$Location::wrap_Object(const Tile$Location& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Tile$Location::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Tile$Location *self = (t_Tile$Location *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Tile$Location::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Tile$Location::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Tile$Location *self = (t_Tile$Location *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Tile$Location::install(PyObject *module)
        {
          installType(&PY_TYPE(Tile$Location), &PY_TYPE_DEF(Tile$Location), module, "Tile$Location", 0);
        }

        void t_Tile$Location::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "class_", make_descriptor(Tile$Location::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "wrapfn_", make_descriptor(t_Tile$Location::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "boxfn_", make_descriptor(boxObject));
          env->getClass(Tile$Location::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "EAST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::EAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "HAS_INTERPOLATION_NEIGHBORS", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::HAS_INTERPOLATION_NEIGHBORS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "NORTH", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::NORTH)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "NORTH_EAST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::NORTH_EAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "NORTH_WEST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::NORTH_WEST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "SOUTH", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::SOUTH)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "SOUTH_EAST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::SOUTH_EAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "SOUTH_WEST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::SOUTH_WEST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "WEST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::WEST)));
        }

        static PyObject *t_Tile$Location_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Tile$Location::initializeClass, 1)))
            return NULL;
          return t_Tile$Location::wrap_Object(Tile$Location(((t_Tile$Location *) arg)->object.this$));
        }
        static PyObject *t_Tile$Location_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Tile$Location::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Tile$Location_of_(t_Tile$Location *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Tile$Location_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Tile$Location result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::raster::Tile$Location::valueOf(a0));
            return t_Tile$Location::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Tile$Location_values(PyTypeObject *type)
        {
          JArray< Tile$Location > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::raster::Tile$Location::values());
          return JArray<jobject>(result.this$).wrap(t_Tile$Location::wrap_jobject);
        }
        static PyObject *t_Tile$Location_get__parameters_(t_Tile$Location *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/PythonGeneratedMeasurementSubscriber.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PythonGeneratedMeasurementSubscriber::class$ = NULL;
          jmethodID *PythonGeneratedMeasurementSubscriber::mids$ = NULL;
          bool PythonGeneratedMeasurementSubscriber::live$ = false;

          jclass PythonGeneratedMeasurementSubscriber::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PythonGeneratedMeasurementSubscriber");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_handleGeneratedMeasurement_4063373aad443d2b] = env->getMethodID(cls, "handleGeneratedMeasurement", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)V");
              mids$[mid_init_d5db9a5f2035671b] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonGeneratedMeasurementSubscriber::PythonGeneratedMeasurementSubscriber() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonGeneratedMeasurementSubscriber::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonGeneratedMeasurementSubscriber::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonGeneratedMeasurementSubscriber::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        namespace generation {
          static PyObject *t_PythonGeneratedMeasurementSubscriber_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonGeneratedMeasurementSubscriber_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonGeneratedMeasurementSubscriber_init_(t_PythonGeneratedMeasurementSubscriber *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonGeneratedMeasurementSubscriber_finalize(t_PythonGeneratedMeasurementSubscriber *self);
          static PyObject *t_PythonGeneratedMeasurementSubscriber_pythonExtension(t_PythonGeneratedMeasurementSubscriber *self, PyObject *args);
          static void JNICALL t_PythonGeneratedMeasurementSubscriber_handleGeneratedMeasurement0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonGeneratedMeasurementSubscriber_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonGeneratedMeasurementSubscriber_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonGeneratedMeasurementSubscriber_get__self(t_PythonGeneratedMeasurementSubscriber *self, void *data);
          static PyGetSetDef t_PythonGeneratedMeasurementSubscriber__fields_[] = {
            DECLARE_GET_FIELD(t_PythonGeneratedMeasurementSubscriber, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonGeneratedMeasurementSubscriber__methods_[] = {
            DECLARE_METHOD(t_PythonGeneratedMeasurementSubscriber, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonGeneratedMeasurementSubscriber, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonGeneratedMeasurementSubscriber, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonGeneratedMeasurementSubscriber, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonGeneratedMeasurementSubscriber)[] = {
            { Py_tp_methods, t_PythonGeneratedMeasurementSubscriber__methods_ },
            { Py_tp_init, (void *) t_PythonGeneratedMeasurementSubscriber_init_ },
            { Py_tp_getset, t_PythonGeneratedMeasurementSubscriber__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonGeneratedMeasurementSubscriber)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonGeneratedMeasurementSubscriber, t_PythonGeneratedMeasurementSubscriber, PythonGeneratedMeasurementSubscriber);

          void t_PythonGeneratedMeasurementSubscriber::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonGeneratedMeasurementSubscriber), &PY_TYPE_DEF(PythonGeneratedMeasurementSubscriber), module, "PythonGeneratedMeasurementSubscriber", 1);
          }

          void t_PythonGeneratedMeasurementSubscriber::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGeneratedMeasurementSubscriber), "class_", make_descriptor(PythonGeneratedMeasurementSubscriber::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGeneratedMeasurementSubscriber), "wrapfn_", make_descriptor(t_PythonGeneratedMeasurementSubscriber::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGeneratedMeasurementSubscriber), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonGeneratedMeasurementSubscriber::initializeClass);
            JNINativeMethod methods[] = {
              { "handleGeneratedMeasurement", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)V", (void *) t_PythonGeneratedMeasurementSubscriber_handleGeneratedMeasurement0 },
              { "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonGeneratedMeasurementSubscriber_init1 },
              { "pythonDecRef", "()V", (void *) t_PythonGeneratedMeasurementSubscriber_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonGeneratedMeasurementSubscriber_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonGeneratedMeasurementSubscriber::initializeClass, 1)))
              return NULL;
            return t_PythonGeneratedMeasurementSubscriber::wrap_Object(PythonGeneratedMeasurementSubscriber(((t_PythonGeneratedMeasurementSubscriber *) arg)->object.this$));
          }
          static PyObject *t_PythonGeneratedMeasurementSubscriber_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonGeneratedMeasurementSubscriber::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonGeneratedMeasurementSubscriber_init_(t_PythonGeneratedMeasurementSubscriber *self, PyObject *args, PyObject *kwds)
          {
            PythonGeneratedMeasurementSubscriber object((jobject) NULL);

            INT_CALL(object = PythonGeneratedMeasurementSubscriber());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonGeneratedMeasurementSubscriber_finalize(t_PythonGeneratedMeasurementSubscriber *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonGeneratedMeasurementSubscriber_pythonExtension(t_PythonGeneratedMeasurementSubscriber *self, PyObject *args)
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

          static void JNICALL t_PythonGeneratedMeasurementSubscriber_handleGeneratedMeasurement0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGeneratedMeasurementSubscriber::mids$[PythonGeneratedMeasurementSubscriber::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(::org::orekit::estimation::measurements::ObservedMeasurement(a0));
            PyObject *result = PyObject_CallMethod(obj, "handleGeneratedMeasurement", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonGeneratedMeasurementSubscriber_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGeneratedMeasurementSubscriber::mids$[PythonGeneratedMeasurementSubscriber::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonGeneratedMeasurementSubscriber_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGeneratedMeasurementSubscriber::mids$[PythonGeneratedMeasurementSubscriber::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonGeneratedMeasurementSubscriber::mids$[PythonGeneratedMeasurementSubscriber::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonGeneratedMeasurementSubscriber_get__self(t_PythonGeneratedMeasurementSubscriber *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/tdm/CorrectionApplied.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/tdm/CorrectionApplied.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *CorrectionApplied::class$ = NULL;
            jmethodID *CorrectionApplied::mids$ = NULL;
            bool CorrectionApplied::live$ = false;
            CorrectionApplied *CorrectionApplied::NO = NULL;
            CorrectionApplied *CorrectionApplied::YES = NULL;

            jclass CorrectionApplied::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/CorrectionApplied");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_a6ba5ee9842b3c4e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;");
                mids$[mid_values_2aca9e84dc563196] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                NO = new CorrectionApplied(env->getStaticObjectField(cls, "NO", "Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;"));
                YES = new CorrectionApplied(env->getStaticObjectField(cls, "YES", "Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CorrectionApplied CorrectionApplied::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CorrectionApplied(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a6ba5ee9842b3c4e], a0.this$));
            }

            JArray< CorrectionApplied > CorrectionApplied::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CorrectionApplied >(env->callStaticObjectMethod(cls, mids$[mid_values_2aca9e84dc563196]));
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
            static PyObject *t_CorrectionApplied_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CorrectionApplied_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CorrectionApplied_of_(t_CorrectionApplied *self, PyObject *args);
            static PyObject *t_CorrectionApplied_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CorrectionApplied_values(PyTypeObject *type);
            static PyObject *t_CorrectionApplied_get__parameters_(t_CorrectionApplied *self, void *data);
            static PyGetSetDef t_CorrectionApplied__fields_[] = {
              DECLARE_GET_FIELD(t_CorrectionApplied, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CorrectionApplied__methods_[] = {
              DECLARE_METHOD(t_CorrectionApplied, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CorrectionApplied, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CorrectionApplied, of_, METH_VARARGS),
              DECLARE_METHOD(t_CorrectionApplied, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CorrectionApplied, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CorrectionApplied)[] = {
              { Py_tp_methods, t_CorrectionApplied__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CorrectionApplied__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CorrectionApplied)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CorrectionApplied, t_CorrectionApplied, CorrectionApplied);
            PyObject *t_CorrectionApplied::wrap_Object(const CorrectionApplied& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CorrectionApplied::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CorrectionApplied *self = (t_CorrectionApplied *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CorrectionApplied::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CorrectionApplied::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CorrectionApplied *self = (t_CorrectionApplied *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CorrectionApplied::install(PyObject *module)
            {
              installType(&PY_TYPE(CorrectionApplied), &PY_TYPE_DEF(CorrectionApplied), module, "CorrectionApplied", 0);
            }

            void t_CorrectionApplied::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CorrectionApplied), "class_", make_descriptor(CorrectionApplied::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CorrectionApplied), "wrapfn_", make_descriptor(t_CorrectionApplied::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CorrectionApplied), "boxfn_", make_descriptor(boxObject));
              env->getClass(CorrectionApplied::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CorrectionApplied), "NO", make_descriptor(t_CorrectionApplied::wrap_Object(*CorrectionApplied::NO)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CorrectionApplied), "YES", make_descriptor(t_CorrectionApplied::wrap_Object(*CorrectionApplied::YES)));
            }

            static PyObject *t_CorrectionApplied_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CorrectionApplied::initializeClass, 1)))
                return NULL;
              return t_CorrectionApplied::wrap_Object(CorrectionApplied(((t_CorrectionApplied *) arg)->object.this$));
            }
            static PyObject *t_CorrectionApplied_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CorrectionApplied::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CorrectionApplied_of_(t_CorrectionApplied *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CorrectionApplied_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CorrectionApplied result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied::valueOf(a0));
                return t_CorrectionApplied::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CorrectionApplied_values(PyTypeObject *type)
            {
              JArray< CorrectionApplied > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied::values());
              return JArray<jobject>(result.this$).wrap(t_CorrectionApplied::wrap_jobject);
            }
            static PyObject *t_CorrectionApplied_get__parameters_(t_CorrectionApplied *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter$SegmentWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *StreamingOemWriter$SegmentWriter::class$ = NULL;
              jmethodID *StreamingOemWriter$SegmentWriter::mids$ = NULL;
              bool StreamingOemWriter$SegmentWriter::live$ = false;

              jclass StreamingOemWriter$SegmentWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter$SegmentWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_096baed027cdb0e3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter;)V");
                  mids$[mid_finish_8655761ebf04b503] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_handleStep_8655761ebf04b503] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_init_a423d7aa7c2fe850] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingOemWriter$SegmentWriter::StreamingOemWriter$SegmentWriter(const ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_096baed027cdb0e3, a0.this$)) {}

              void StreamingOemWriter$SegmentWriter::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_finish_8655761ebf04b503], a0.this$);
              }

              void StreamingOemWriter$SegmentWriter::handleStep(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_handleStep_8655761ebf04b503], a0.this$);
              }

              void StreamingOemWriter$SegmentWriter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_init_a423d7aa7c2fe850], a0.this$, a1.this$, a2);
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
            namespace oem {
              static PyObject *t_StreamingOemWriter$SegmentWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingOemWriter$SegmentWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingOemWriter$SegmentWriter_init_(t_StreamingOemWriter$SegmentWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingOemWriter$SegmentWriter_finish(t_StreamingOemWriter$SegmentWriter *self, PyObject *arg);
              static PyObject *t_StreamingOemWriter$SegmentWriter_handleStep(t_StreamingOemWriter$SegmentWriter *self, PyObject *arg);
              static PyObject *t_StreamingOemWriter$SegmentWriter_init(t_StreamingOemWriter$SegmentWriter *self, PyObject *args);

              static PyMethodDef t_StreamingOemWriter$SegmentWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingOemWriter$SegmentWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOemWriter$SegmentWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOemWriter$SegmentWriter, finish, METH_O),
                DECLARE_METHOD(t_StreamingOemWriter$SegmentWriter, handleStep, METH_O),
                DECLARE_METHOD(t_StreamingOemWriter$SegmentWriter, init, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingOemWriter$SegmentWriter)[] = {
                { Py_tp_methods, t_StreamingOemWriter$SegmentWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingOemWriter$SegmentWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingOemWriter$SegmentWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingOemWriter$SegmentWriter, t_StreamingOemWriter$SegmentWriter, StreamingOemWriter$SegmentWriter);

              void t_StreamingOemWriter$SegmentWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingOemWriter$SegmentWriter), &PY_TYPE_DEF(StreamingOemWriter$SegmentWriter), module, "StreamingOemWriter$SegmentWriter", 0);
              }

              void t_StreamingOemWriter$SegmentWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter$SegmentWriter), "class_", make_descriptor(StreamingOemWriter$SegmentWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter$SegmentWriter), "wrapfn_", make_descriptor(t_StreamingOemWriter$SegmentWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter$SegmentWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingOemWriter$SegmentWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingOemWriter$SegmentWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingOemWriter$SegmentWriter::wrap_Object(StreamingOemWriter$SegmentWriter(((t_StreamingOemWriter$SegmentWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingOemWriter$SegmentWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingOemWriter$SegmentWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingOemWriter$SegmentWriter_init_(t_StreamingOemWriter$SegmentWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter a0((jobject) NULL);
                StreamingOemWriter$SegmentWriter object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter::initializeClass, &a0))
                {
                  INT_CALL(object = StreamingOemWriter$SegmentWriter(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_StreamingOemWriter$SegmentWriter_finish(t_StreamingOemWriter$SegmentWriter *self, PyObject *arg)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.finish(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "finish", arg);
                return NULL;
              }

              static PyObject *t_StreamingOemWriter$SegmentWriter_handleStep(t_StreamingOemWriter$SegmentWriter *self, PyObject *arg)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.handleStep(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
                return NULL;
              }

              static PyObject *t_StreamingOemWriter$SegmentWriter_init(t_StreamingOemWriter$SegmentWriter *self, PyObject *args)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                jdouble a2;

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.init(a0, a1, a2));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame45.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame45::class$ = NULL;
          jmethodID *SubFrame45::mids$ = NULL;
          bool SubFrame45::live$ = false;

          jclass SubFrame45::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame45");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDataId_412668abc8d889e9] = env->getMethodID(cls, "getDataId", "()I");
              mids$[mid_getSvId_412668abc8d889e9] = env->getMethodID(cls, "getSvId", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame45::getDataId() const
          {
            return env->callIntMethod(this$, mids$[mid_getDataId_412668abc8d889e9]);
          }

          jint SubFrame45::getSvId() const
          {
            return env->callIntMethod(this$, mids$[mid_getSvId_412668abc8d889e9]);
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
          static PyObject *t_SubFrame45_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame45_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame45_getDataId(t_SubFrame45 *self);
          static PyObject *t_SubFrame45_getSvId(t_SubFrame45 *self);
          static PyObject *t_SubFrame45_get__dataId(t_SubFrame45 *self, void *data);
          static PyObject *t_SubFrame45_get__svId(t_SubFrame45 *self, void *data);
          static PyGetSetDef t_SubFrame45__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame45, dataId),
            DECLARE_GET_FIELD(t_SubFrame45, svId),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame45__methods_[] = {
            DECLARE_METHOD(t_SubFrame45, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame45, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame45, getDataId, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame45, getSvId, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame45)[] = {
            { Py_tp_methods, t_SubFrame45__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame45__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame45)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame),
            NULL
          };

          DEFINE_TYPE(SubFrame45, t_SubFrame45, SubFrame45);

          void t_SubFrame45::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame45), &PY_TYPE_DEF(SubFrame45), module, "SubFrame45", 0);
          }

          void t_SubFrame45::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame45), "class_", make_descriptor(SubFrame45::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame45), "wrapfn_", make_descriptor(t_SubFrame45::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame45), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame45_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame45::initializeClass, 1)))
              return NULL;
            return t_SubFrame45::wrap_Object(SubFrame45(((t_SubFrame45 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame45_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame45::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame45_getDataId(t_SubFrame45 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDataId());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame45_getSvId(t_SubFrame45 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSvId());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame45_get__dataId(t_SubFrame45 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDataId());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame45_get__svId(t_SubFrame45 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSvId());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MathArrays$Position.h"
#include "org/hipparchus/util/MathArrays$Position.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathArrays$Position::class$ = NULL;
      jmethodID *MathArrays$Position::mids$ = NULL;
      bool MathArrays$Position::live$ = false;
      MathArrays$Position *MathArrays$Position::HEAD = NULL;
      MathArrays$Position *MathArrays$Position::TAIL = NULL;

      jclass MathArrays$Position::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathArrays$Position");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_09bd07964c6ab1c2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/util/MathArrays$Position;");
          mids$[mid_values_4cb52a58b6c53074] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/util/MathArrays$Position;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          HEAD = new MathArrays$Position(env->getStaticObjectField(cls, "HEAD", "Lorg/hipparchus/util/MathArrays$Position;"));
          TAIL = new MathArrays$Position(env->getStaticObjectField(cls, "TAIL", "Lorg/hipparchus/util/MathArrays$Position;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MathArrays$Position MathArrays$Position::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return MathArrays$Position(env->callStaticObjectMethod(cls, mids$[mid_valueOf_09bd07964c6ab1c2], a0.this$));
      }

      JArray< MathArrays$Position > MathArrays$Position::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< MathArrays$Position >(env->callStaticObjectMethod(cls, mids$[mid_values_4cb52a58b6c53074]));
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
      static PyObject *t_MathArrays$Position_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays$Position_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays$Position_of_(t_MathArrays$Position *self, PyObject *args);
      static PyObject *t_MathArrays$Position_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays$Position_values(PyTypeObject *type);
      static PyObject *t_MathArrays$Position_get__parameters_(t_MathArrays$Position *self, void *data);
      static PyGetSetDef t_MathArrays$Position__fields_[] = {
        DECLARE_GET_FIELD(t_MathArrays$Position, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MathArrays$Position__methods_[] = {
        DECLARE_METHOD(t_MathArrays$Position, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$Position, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$Position, of_, METH_VARARGS),
        DECLARE_METHOD(t_MathArrays$Position, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$Position, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathArrays$Position)[] = {
        { Py_tp_methods, t_MathArrays$Position__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MathArrays$Position__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathArrays$Position)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(MathArrays$Position, t_MathArrays$Position, MathArrays$Position);
      PyObject *t_MathArrays$Position::wrap_Object(const MathArrays$Position& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MathArrays$Position::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MathArrays$Position *self = (t_MathArrays$Position *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_MathArrays$Position::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MathArrays$Position::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MathArrays$Position *self = (t_MathArrays$Position *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_MathArrays$Position::install(PyObject *module)
      {
        installType(&PY_TYPE(MathArrays$Position), &PY_TYPE_DEF(MathArrays$Position), module, "MathArrays$Position", 0);
      }

      void t_MathArrays$Position::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Position), "class_", make_descriptor(MathArrays$Position::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Position), "wrapfn_", make_descriptor(t_MathArrays$Position::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Position), "boxfn_", make_descriptor(boxObject));
        env->getClass(MathArrays$Position::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Position), "HEAD", make_descriptor(t_MathArrays$Position::wrap_Object(*MathArrays$Position::HEAD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Position), "TAIL", make_descriptor(t_MathArrays$Position::wrap_Object(*MathArrays$Position::TAIL)));
      }

      static PyObject *t_MathArrays$Position_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathArrays$Position::initializeClass, 1)))
          return NULL;
        return t_MathArrays$Position::wrap_Object(MathArrays$Position(((t_MathArrays$Position *) arg)->object.this$));
      }
      static PyObject *t_MathArrays$Position_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathArrays$Position::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathArrays$Position_of_(t_MathArrays$Position *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_MathArrays$Position_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        MathArrays$Position result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays$Position::valueOf(a0));
          return t_MathArrays$Position::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_MathArrays$Position_values(PyTypeObject *type)
      {
        JArray< MathArrays$Position > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::MathArrays$Position::values());
        return JArray<jobject>(result.this$).wrap(t_MathArrays$Position::wrap_jobject);
      }
      static PyObject *t_MathArrays$Position_get__parameters_(t_MathArrays$Position *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/ODParametersWriter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ODParametersWriter::class$ = NULL;
            jmethodID *ODParametersWriter::mids$ = NULL;
            bool ODParametersWriter::live$ = false;

            jclass ODParametersWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ODParametersWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_writeContent_0503da09b1f1eb3c] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

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
            static PyObject *t_ODParametersWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ODParametersWriter_instance_(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_ODParametersWriter__methods_[] = {
              DECLARE_METHOD(t_ODParametersWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ODParametersWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ODParametersWriter)[] = {
              { Py_tp_methods, t_ODParametersWriter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ODParametersWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(ODParametersWriter, t_ODParametersWriter, ODParametersWriter);

            void t_ODParametersWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(ODParametersWriter), &PY_TYPE_DEF(ODParametersWriter), module, "ODParametersWriter", 0);
            }

            void t_ODParametersWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersWriter), "class_", make_descriptor(ODParametersWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersWriter), "wrapfn_", make_descriptor(t_ODParametersWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ODParametersWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ODParametersWriter::initializeClass, 1)))
                return NULL;
              return t_ODParametersWriter::wrap_Object(ODParametersWriter(((t_ODParametersWriter *) arg)->object.this$));
            }
            static PyObject *t_ODParametersWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ODParametersWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/fitting/EmpiricalDistribution.h"
#include "java/io/IOException.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics.h"
#include "java/io/File.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "java/net/URL.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace fitting {

        ::java::lang::Class *EmpiricalDistribution::class$ = NULL;
        jmethodID *EmpiricalDistribution::mids$ = NULL;
        bool EmpiricalDistribution::live$ = false;
        jint EmpiricalDistribution::DEFAULT_BIN_COUNT = (jint) 0;

        jclass EmpiricalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/fitting/EmpiricalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_init$_19e7f6e95a4dc08e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_init$_c6a557dcc2f97b72] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_cumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_7e960cd6eee376d8] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getBinCount_412668abc8d889e9] = env->getMethodID(cls, "getBinCount", "()I");
            mids$[mid_getBinStats_0d9551367f7ecdef] = env->getMethodID(cls, "getBinStats", "()Ljava/util/List;");
            mids$[mid_getGeneratorUpperBounds_a53a7513ecedada2] = env->getMethodID(cls, "getGeneratorUpperBounds", "()[D");
            mids$[mid_getNextValue_557b8123390d8d0c] = env->getMethodID(cls, "getNextValue", "()D");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSampleStats_8f883f2497314ce2] = env->getMethodID(cls, "getSampleStats", "()Lorg/hipparchus/stat/descriptive/StatisticalSummary;");
            mids$[mid_getSupportLowerBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_getUpperBounds_a53a7513ecedada2] = env->getMethodID(cls, "getUpperBounds", "()[D");
            mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isLoaded_89b302893bdbe1f1] = env->getMethodID(cls, "isLoaded", "()Z");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_load_cc18240f4a737f14] = env->getMethodID(cls, "load", "([D)V");
            mids$[mid_load_5d6bcca91ae998ee] = env->getMethodID(cls, "load", "(Ljava/io/File;)V");
            mids$[mid_load_1d2bf2ec349f3959] = env->getMethodID(cls, "load", "(Ljava/net/URL;)V");
            mids$[mid_reSeed_3cd6a6b354c6aa22] = env->getMethodID(cls, "reSeed", "(J)V");
            mids$[mid_reseedRandomGenerator_3cd6a6b354c6aa22] = env->getMethodID(cls, "reseedRandomGenerator", "(J)V");
            mids$[mid_getKernel_20f58c1005243de6] = env->getMethodID(cls, "getKernel", "(Lorg/hipparchus/stat/descriptive/StreamingStatistics;)Lorg/hipparchus/distribution/RealDistribution;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_BIN_COUNT = env->getStaticIntField(cls, "DEFAULT_BIN_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EmpiricalDistribution::EmpiricalDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        EmpiricalDistribution::EmpiricalDistribution(jint a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

        EmpiricalDistribution::EmpiricalDistribution(const ::org::hipparchus::random::RandomGenerator & a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_19e7f6e95a4dc08e, a0.this$)) {}

        EmpiricalDistribution::EmpiricalDistribution(jint a0, const ::org::hipparchus::random::RandomGenerator & a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_c6a557dcc2f97b72, a0, a1.this$)) {}

        jdouble EmpiricalDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_7e960cd6eee376d8], a0);
        }

        jdouble EmpiricalDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_7e960cd6eee376d8], a0);
        }

        jint EmpiricalDistribution::getBinCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getBinCount_412668abc8d889e9]);
        }

        ::java::util::List EmpiricalDistribution::getBinStats() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBinStats_0d9551367f7ecdef]));
        }

        JArray< jdouble > EmpiricalDistribution::getGeneratorUpperBounds() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGeneratorUpperBounds_a53a7513ecedada2]));
        }

        jdouble EmpiricalDistribution::getNextValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNextValue_557b8123390d8d0c]);
        }

        jdouble EmpiricalDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble EmpiricalDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        ::org::hipparchus::stat::descriptive::StatisticalSummary EmpiricalDistribution::getSampleStats() const
        {
          return ::org::hipparchus::stat::descriptive::StatisticalSummary(env->callObjectMethod(this$, mids$[mid_getSampleStats_8f883f2497314ce2]));
        }

        jdouble EmpiricalDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_557b8123390d8d0c]);
        }

        jdouble EmpiricalDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_557b8123390d8d0c]);
        }

        JArray< jdouble > EmpiricalDistribution::getUpperBounds() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getUpperBounds_a53a7513ecedada2]));
        }

        jdouble EmpiricalDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8], a0);
        }

        jboolean EmpiricalDistribution::isLoaded() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isLoaded_89b302893bdbe1f1]);
        }

        jboolean EmpiricalDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
        }

        void EmpiricalDistribution::load(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_load_cc18240f4a737f14], a0.this$);
        }

        void EmpiricalDistribution::load(const ::java::io::File & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_load_5d6bcca91ae998ee], a0.this$);
        }

        void EmpiricalDistribution::load(const ::java::net::URL & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_load_1d2bf2ec349f3959], a0.this$);
        }

        void EmpiricalDistribution::reSeed(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reSeed_3cd6a6b354c6aa22], a0);
        }

        void EmpiricalDistribution::reseedRandomGenerator(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reseedRandomGenerator_3cd6a6b354c6aa22], a0);
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
      namespace fitting {
        static PyObject *t_EmpiricalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EmpiricalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EmpiricalDistribution_init_(t_EmpiricalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EmpiricalDistribution_cumulativeProbability(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_density(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_getBinCount(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_getBinStats(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_getGeneratorUpperBounds(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_getNextValue(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_getNumericalMean(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_getNumericalVariance(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_getSampleStats(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_getSupportLowerBound(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_getSupportUpperBound(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_getUpperBounds(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_inverseCumulativeProbability(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_isLoaded(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_isSupportConnected(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_load(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_reSeed(t_EmpiricalDistribution *self, PyObject *arg);
        static PyObject *t_EmpiricalDistribution_reseedRandomGenerator(t_EmpiricalDistribution *self, PyObject *arg);
        static PyObject *t_EmpiricalDistribution_get__binCount(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__binStats(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__generatorUpperBounds(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__loaded(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__nextValue(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__numericalMean(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__numericalVariance(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__sampleStats(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__supportConnected(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__supportLowerBound(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__supportUpperBound(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__upperBounds(t_EmpiricalDistribution *self, void *data);
        static PyGetSetDef t_EmpiricalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_EmpiricalDistribution, binCount),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, binStats),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, generatorUpperBounds),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, loaded),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, nextValue),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, numericalMean),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, sampleStats),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, supportConnected),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, supportUpperBound),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, upperBounds),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EmpiricalDistribution__methods_[] = {
          DECLARE_METHOD(t_EmpiricalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmpiricalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmpiricalDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getBinCount, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getBinStats, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getGeneratorUpperBounds, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getNextValue, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getSampleStats, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getUpperBounds, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, isLoaded, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, load, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, reSeed, METH_O),
          DECLARE_METHOD(t_EmpiricalDistribution, reseedRandomGenerator, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EmpiricalDistribution)[] = {
          { Py_tp_methods, t_EmpiricalDistribution__methods_ },
          { Py_tp_init, (void *) t_EmpiricalDistribution_init_ },
          { Py_tp_getset, t_EmpiricalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EmpiricalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(EmpiricalDistribution, t_EmpiricalDistribution, EmpiricalDistribution);

        void t_EmpiricalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(EmpiricalDistribution), &PY_TYPE_DEF(EmpiricalDistribution), module, "EmpiricalDistribution", 0);
        }

        void t_EmpiricalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmpiricalDistribution), "class_", make_descriptor(EmpiricalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmpiricalDistribution), "wrapfn_", make_descriptor(t_EmpiricalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmpiricalDistribution), "boxfn_", make_descriptor(boxObject));
          env->getClass(EmpiricalDistribution::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmpiricalDistribution), "DEFAULT_BIN_COUNT", make_descriptor(EmpiricalDistribution::DEFAULT_BIN_COUNT));
        }

        static PyObject *t_EmpiricalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EmpiricalDistribution::initializeClass, 1)))
            return NULL;
          return t_EmpiricalDistribution::wrap_Object(EmpiricalDistribution(((t_EmpiricalDistribution *) arg)->object.this$));
        }
        static PyObject *t_EmpiricalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EmpiricalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EmpiricalDistribution_init_(t_EmpiricalDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              EmpiricalDistribution object((jobject) NULL);

              INT_CALL(object = EmpiricalDistribution());
              self->object = object;
              break;
            }
           case 1:
            {
              jint a0;
              EmpiricalDistribution object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = EmpiricalDistribution(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              EmpiricalDistribution object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
              {
                INT_CALL(object = EmpiricalDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jint a0;
              ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
              EmpiricalDistribution object((jobject) NULL);

              if (!parseArgs(args, "Ik", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
              {
                INT_CALL(object = EmpiricalDistribution(a0, a1));
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

        static PyObject *t_EmpiricalDistribution_cumulativeProbability(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_density(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_getBinCount(t_EmpiricalDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getBinCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EmpiricalDistribution_getBinStats(t_EmpiricalDistribution *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getBinStats());
          return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::stat::descriptive::PY_TYPE(StreamingStatistics));
        }

        static PyObject *t_EmpiricalDistribution_getGeneratorUpperBounds(t_EmpiricalDistribution *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getGeneratorUpperBounds());
          return result.wrap();
        }

        static PyObject *t_EmpiricalDistribution_getNextValue(t_EmpiricalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNextValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EmpiricalDistribution_getNumericalMean(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_getNumericalVariance(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_getSampleStats(t_EmpiricalDistribution *self)
        {
          ::org::hipparchus::stat::descriptive::StatisticalSummary result((jobject) NULL);
          OBJ_CALL(result = self->object.getSampleStats());
          return ::org::hipparchus::stat::descriptive::t_StatisticalSummary::wrap_Object(result);
        }

        static PyObject *t_EmpiricalDistribution_getSupportLowerBound(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_getSupportUpperBound(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_getUpperBounds(t_EmpiricalDistribution *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getUpperBounds());
          return result.wrap();
        }

        static PyObject *t_EmpiricalDistribution_inverseCumulativeProbability(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_isLoaded(t_EmpiricalDistribution *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isLoaded());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_EmpiricalDistribution_isSupportConnected(t_EmpiricalDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_load(t_EmpiricalDistribution *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(self->object.load(a0));
                Py_RETURN_NONE;
              }
            }
            {
              ::java::io::File a0((jobject) NULL);

              if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
              {
                OBJ_CALL(self->object.load(a0));
                Py_RETURN_NONE;
              }
            }
            {
              ::java::net::URL a0((jobject) NULL);

              if (!parseArgs(args, "k", ::java::net::URL::initializeClass, &a0))
              {
                OBJ_CALL(self->object.load(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "load", args);
          return NULL;
        }

        static PyObject *t_EmpiricalDistribution_reSeed(t_EmpiricalDistribution *self, PyObject *arg)
        {
          jlong a0;

          if (!parseArg(arg, "J", &a0))
          {
            OBJ_CALL(self->object.reSeed(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reSeed", arg);
          return NULL;
        }

        static PyObject *t_EmpiricalDistribution_reseedRandomGenerator(t_EmpiricalDistribution *self, PyObject *arg)
        {
          jlong a0;

          if (!parseArg(arg, "J", &a0))
          {
            OBJ_CALL(self->object.reseedRandomGenerator(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reseedRandomGenerator", arg);
          return NULL;
        }

        static PyObject *t_EmpiricalDistribution_get__binCount(t_EmpiricalDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getBinCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EmpiricalDistribution_get__binStats(t_EmpiricalDistribution *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getBinStats());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_EmpiricalDistribution_get__generatorUpperBounds(t_EmpiricalDistribution *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getGeneratorUpperBounds());
          return value.wrap();
        }

        static PyObject *t_EmpiricalDistribution_get__loaded(t_EmpiricalDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isLoaded());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_EmpiricalDistribution_get__nextValue(t_EmpiricalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNextValue());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EmpiricalDistribution_get__numericalMean(t_EmpiricalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EmpiricalDistribution_get__numericalVariance(t_EmpiricalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EmpiricalDistribution_get__sampleStats(t_EmpiricalDistribution *self, void *data)
        {
          ::org::hipparchus::stat::descriptive::StatisticalSummary value((jobject) NULL);
          OBJ_CALL(value = self->object.getSampleStats());
          return ::org::hipparchus::stat::descriptive::t_StatisticalSummary::wrap_Object(value);
        }

        static PyObject *t_EmpiricalDistribution_get__supportConnected(t_EmpiricalDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_EmpiricalDistribution_get__supportLowerBound(t_EmpiricalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EmpiricalDistribution_get__supportUpperBound(t_EmpiricalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EmpiricalDistribution_get__upperBounds(t_EmpiricalDistribution *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getUpperBounds());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldNodeDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldNodeDetector::class$ = NULL;
        jmethodID *FieldNodeDetector::mids$ = NULL;
        bool FieldNodeDetector::live$ = false;

        jclass FieldNodeDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldNodeDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bf08ea5b43df40f6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/frames/Frame;)V");
            mids$[mid_init$_ee41e0076fce6e1a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/frames/Frame;)V");
            mids$[mid_g_de1c2d709eb2829c] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_create_305ce3ce554bf816] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldNodeDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldNodeDetector::FieldNodeDetector(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_bf08ea5b43df40f6, a0.this$, a1.this$)) {}

        FieldNodeDetector::FieldNodeDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::orbits::FieldOrbit & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_ee41e0076fce6e1a, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldNodeDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_de1c2d709eb2829c], a0.this$));
        }

        ::org::orekit::frames::Frame FieldNodeDetector::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
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
        static PyObject *t_FieldNodeDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNodeDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNodeDetector_of_(t_FieldNodeDetector *self, PyObject *args);
        static int t_FieldNodeDetector_init_(t_FieldNodeDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldNodeDetector_g(t_FieldNodeDetector *self, PyObject *args);
        static PyObject *t_FieldNodeDetector_getFrame(t_FieldNodeDetector *self);
        static PyObject *t_FieldNodeDetector_get__frame(t_FieldNodeDetector *self, void *data);
        static PyObject *t_FieldNodeDetector_get__parameters_(t_FieldNodeDetector *self, void *data);
        static PyGetSetDef t_FieldNodeDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldNodeDetector, frame),
          DECLARE_GET_FIELD(t_FieldNodeDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldNodeDetector__methods_[] = {
          DECLARE_METHOD(t_FieldNodeDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNodeDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNodeDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldNodeDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldNodeDetector, getFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldNodeDetector)[] = {
          { Py_tp_methods, t_FieldNodeDetector__methods_ },
          { Py_tp_init, (void *) t_FieldNodeDetector_init_ },
          { Py_tp_getset, t_FieldNodeDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldNodeDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldNodeDetector, t_FieldNodeDetector, FieldNodeDetector);
        PyObject *t_FieldNodeDetector::wrap_Object(const FieldNodeDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNodeDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNodeDetector *self = (t_FieldNodeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldNodeDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNodeDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNodeDetector *self = (t_FieldNodeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldNodeDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldNodeDetector), &PY_TYPE_DEF(FieldNodeDetector), module, "FieldNodeDetector", 0);
        }

        void t_FieldNodeDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNodeDetector), "class_", make_descriptor(FieldNodeDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNodeDetector), "wrapfn_", make_descriptor(t_FieldNodeDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNodeDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldNodeDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldNodeDetector::initializeClass, 1)))
            return NULL;
          return t_FieldNodeDetector::wrap_Object(FieldNodeDetector(((t_FieldNodeDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldNodeDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldNodeDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldNodeDetector_of_(t_FieldNodeDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldNodeDetector_init_(t_FieldNodeDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::Frame a1((jobject) NULL);
              FieldNodeDetector object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1))
              {
                INT_CALL(object = FieldNodeDetector(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::FieldOrbit a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::frames::Frame a2((jobject) NULL);
              FieldNodeDetector object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a2))
              {
                INT_CALL(object = FieldNodeDetector(a0, a1, a2));
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

        static PyObject *t_FieldNodeDetector_g(t_FieldNodeDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldNodeDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldNodeDetector_getFrame(t_FieldNodeDetector *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }
        static PyObject *t_FieldNodeDetector_get__parameters_(t_FieldNodeDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldNodeDetector_get__frame(t_FieldNodeDetector *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/OdMethodType.h"
#include "org/orekit/files/ccsds/definitions/OdMethodType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *OdMethodType::class$ = NULL;
          jmethodID *OdMethodType::mids$ = NULL;
          bool OdMethodType::live$ = false;
          OdMethodType *OdMethodType::BWLS = NULL;
          OdMethodType *OdMethodType::EKF = NULL;
          OdMethodType *OdMethodType::SF = NULL;
          OdMethodType *OdMethodType::SRIF = NULL;
          OdMethodType *OdMethodType::SSEM = NULL;

          jclass OdMethodType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/OdMethodType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_879958697012e475] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/OdMethodType;");
              mids$[mid_values_8b51602e682b6578] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/OdMethodType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BWLS = new OdMethodType(env->getStaticObjectField(cls, "BWLS", "Lorg/orekit/files/ccsds/definitions/OdMethodType;"));
              EKF = new OdMethodType(env->getStaticObjectField(cls, "EKF", "Lorg/orekit/files/ccsds/definitions/OdMethodType;"));
              SF = new OdMethodType(env->getStaticObjectField(cls, "SF", "Lorg/orekit/files/ccsds/definitions/OdMethodType;"));
              SRIF = new OdMethodType(env->getStaticObjectField(cls, "SRIF", "Lorg/orekit/files/ccsds/definitions/OdMethodType;"));
              SSEM = new OdMethodType(env->getStaticObjectField(cls, "SSEM", "Lorg/orekit/files/ccsds/definitions/OdMethodType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OdMethodType OdMethodType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return OdMethodType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_879958697012e475], a0.this$));
          }

          JArray< OdMethodType > OdMethodType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< OdMethodType >(env->callStaticObjectMethod(cls, mids$[mid_values_8b51602e682b6578]));
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
          static PyObject *t_OdMethodType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OdMethodType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OdMethodType_of_(t_OdMethodType *self, PyObject *args);
          static PyObject *t_OdMethodType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_OdMethodType_values(PyTypeObject *type);
          static PyObject *t_OdMethodType_get__parameters_(t_OdMethodType *self, void *data);
          static PyGetSetDef t_OdMethodType__fields_[] = {
            DECLARE_GET_FIELD(t_OdMethodType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OdMethodType__methods_[] = {
            DECLARE_METHOD(t_OdMethodType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OdMethodType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OdMethodType, of_, METH_VARARGS),
            DECLARE_METHOD(t_OdMethodType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_OdMethodType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OdMethodType)[] = {
            { Py_tp_methods, t_OdMethodType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OdMethodType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OdMethodType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(OdMethodType, t_OdMethodType, OdMethodType);
          PyObject *t_OdMethodType::wrap_Object(const OdMethodType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OdMethodType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OdMethodType *self = (t_OdMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OdMethodType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OdMethodType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OdMethodType *self = (t_OdMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OdMethodType::install(PyObject *module)
          {
            installType(&PY_TYPE(OdMethodType), &PY_TYPE_DEF(OdMethodType), module, "OdMethodType", 0);
          }

          void t_OdMethodType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "class_", make_descriptor(OdMethodType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "wrapfn_", make_descriptor(t_OdMethodType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "boxfn_", make_descriptor(boxObject));
            env->getClass(OdMethodType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "BWLS", make_descriptor(t_OdMethodType::wrap_Object(*OdMethodType::BWLS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "EKF", make_descriptor(t_OdMethodType::wrap_Object(*OdMethodType::EKF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "SF", make_descriptor(t_OdMethodType::wrap_Object(*OdMethodType::SF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "SRIF", make_descriptor(t_OdMethodType::wrap_Object(*OdMethodType::SRIF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodType), "SSEM", make_descriptor(t_OdMethodType::wrap_Object(*OdMethodType::SSEM)));
          }

          static PyObject *t_OdMethodType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OdMethodType::initializeClass, 1)))
              return NULL;
            return t_OdMethodType::wrap_Object(OdMethodType(((t_OdMethodType *) arg)->object.this$));
          }
          static PyObject *t_OdMethodType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OdMethodType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OdMethodType_of_(t_OdMethodType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OdMethodType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            OdMethodType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OdMethodType::valueOf(a0));
              return t_OdMethodType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_OdMethodType_values(PyTypeObject *type)
          {
            JArray< OdMethodType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OdMethodType::values());
            return JArray<jobject>(result.this$).wrap(t_OdMethodType::wrap_jobject);
          }
          static PyObject *t_OdMethodType_get__parameters_(t_OdMethodType *self, void *data)
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
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *OrekitFixedStepHandler::class$ = NULL;
        jmethodID *OrekitFixedStepHandler::mids$ = NULL;
        bool OrekitFixedStepHandler::live$ = false;

        jclass OrekitFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/OrekitFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_8655761ebf04b503] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_handleStep_8655761ebf04b503] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_init_a423d7aa7c2fe850] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void OrekitFixedStepHandler::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_8655761ebf04b503], a0.this$);
        }

        void OrekitFixedStepHandler::handleStep(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_8655761ebf04b503], a0.this$);
        }

        void OrekitFixedStepHandler::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_init_a423d7aa7c2fe850], a0.this$, a1.this$, a2);
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
        static PyObject *t_OrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitFixedStepHandler_finish(t_OrekitFixedStepHandler *self, PyObject *arg);
        static PyObject *t_OrekitFixedStepHandler_handleStep(t_OrekitFixedStepHandler *self, PyObject *arg);
        static PyObject *t_OrekitFixedStepHandler_init(t_OrekitFixedStepHandler *self, PyObject *args);

        static PyMethodDef t_OrekitFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_OrekitFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitFixedStepHandler, finish, METH_O),
          DECLARE_METHOD(t_OrekitFixedStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_OrekitFixedStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitFixedStepHandler)[] = {
          { Py_tp_methods, t_OrekitFixedStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitFixedStepHandler, t_OrekitFixedStepHandler, OrekitFixedStepHandler);

        void t_OrekitFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitFixedStepHandler), &PY_TYPE_DEF(OrekitFixedStepHandler), module, "OrekitFixedStepHandler", 0);
        }

        void t_OrekitFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitFixedStepHandler), "class_", make_descriptor(OrekitFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitFixedStepHandler), "wrapfn_", make_descriptor(t_OrekitFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitFixedStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_OrekitFixedStepHandler::wrap_Object(OrekitFixedStepHandler(((t_OrekitFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_OrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_OrekitFixedStepHandler_finish(t_OrekitFixedStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_OrekitFixedStepHandler_handleStep(t_OrekitFixedStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_OrekitFixedStepHandler_init(t_OrekitFixedStepHandler *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;

          if (!parseArgs(args, "kkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.init(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTAtmosphericDrag.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/forces/drag/DragForce.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTAtmosphericDrag::class$ = NULL;
            jmethodID *DSSTAtmosphericDrag::mids$ = NULL;
            bool DSSTAtmosphericDrag::live$ = false;

            jclass DSSTAtmosphericDrag::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTAtmosphericDrag");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_873d6049c2f7e1b1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/drag/DragForce;D)V");
                mids$[mid_init$_a6cdc333049d7715] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;Lorg/orekit/forces/drag/DragSensitive;D)V");
                mids$[mid_init$_ce907123f94397c6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;DDD)V");
                mids$[mid_getAtmosphere_344c414ab8fc3e7e] = env->getMethodID(cls, "getAtmosphere", "()Lorg/orekit/models/earth/atmosphere/Atmosphere;");
                mids$[mid_getDrag_c60005f03b2de7af] = env->getMethodID(cls, "getDrag", "()Lorg/orekit/forces/drag/DragForce;");
                mids$[mid_getEventDetectors_d7cce92225eb0db2] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
                mids$[mid_getFieldEventDetectors_8130af76f6998f44] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
                mids$[mid_getRbar_557b8123390d8d0c] = env->getMethodID(cls, "getRbar", "()D");
                mids$[mid_getSpacecraft_5af7812abe9360ec] = env->getMethodID(cls, "getSpacecraft", "()Lorg/orekit/forces/drag/DragSensitive;");
                mids$[mid_getLLimits_233f032b171b49d2] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getLLimits_8babb6fb34d6b24d] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)[D");
                mids$[mid_getParametersDriversWithoutMu_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDriversWithoutMu", "()Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTAtmosphericDrag::DSSTAtmosphericDrag(const ::org::orekit::forces::drag::DragForce & a0, jdouble a1) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_873d6049c2f7e1b1, a0.this$, a1)) {}

            DSSTAtmosphericDrag::DSSTAtmosphericDrag(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0, const ::org::orekit::forces::drag::DragSensitive & a1, jdouble a2) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_a6cdc333049d7715, a0.this$, a1.this$, a2)) {}

            DSSTAtmosphericDrag::DSSTAtmosphericDrag(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0, jdouble a1, jdouble a2, jdouble a3) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_ce907123f94397c6, a0.this$, a1, a2, a3)) {}

            ::org::orekit::models::earth::atmosphere::Atmosphere DSSTAtmosphericDrag::getAtmosphere() const
            {
              return ::org::orekit::models::earth::atmosphere::Atmosphere(env->callObjectMethod(this$, mids$[mid_getAtmosphere_344c414ab8fc3e7e]));
            }

            ::org::orekit::forces::drag::DragForce DSSTAtmosphericDrag::getDrag() const
            {
              return ::org::orekit::forces::drag::DragForce(env->callObjectMethod(this$, mids$[mid_getDrag_c60005f03b2de7af]));
            }

            ::java::util::stream::Stream DSSTAtmosphericDrag::getEventDetectors() const
            {
              return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_d7cce92225eb0db2]));
            }

            ::java::util::stream::Stream DSSTAtmosphericDrag::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
            {
              return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_8130af76f6998f44], a0.this$));
            }

            jdouble DSSTAtmosphericDrag::getRbar() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRbar_557b8123390d8d0c]);
            }

            ::org::orekit::forces::drag::DragSensitive DSSTAtmosphericDrag::getSpacecraft() const
            {
              return ::org::orekit::forces::drag::DragSensitive(env->callObjectMethod(this$, mids$[mid_getSpacecraft_5af7812abe9360ec]));
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
            static PyObject *t_DSSTAtmosphericDrag_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTAtmosphericDrag_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTAtmosphericDrag_init_(t_DSSTAtmosphericDrag *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTAtmosphericDrag_getAtmosphere(t_DSSTAtmosphericDrag *self);
            static PyObject *t_DSSTAtmosphericDrag_getDrag(t_DSSTAtmosphericDrag *self);
            static PyObject *t_DSSTAtmosphericDrag_getEventDetectors(t_DSSTAtmosphericDrag *self, PyObject *args);
            static PyObject *t_DSSTAtmosphericDrag_getFieldEventDetectors(t_DSSTAtmosphericDrag *self, PyObject *args);
            static PyObject *t_DSSTAtmosphericDrag_getRbar(t_DSSTAtmosphericDrag *self);
            static PyObject *t_DSSTAtmosphericDrag_getSpacecraft(t_DSSTAtmosphericDrag *self);
            static PyObject *t_DSSTAtmosphericDrag_get__atmosphere(t_DSSTAtmosphericDrag *self, void *data);
            static PyObject *t_DSSTAtmosphericDrag_get__drag(t_DSSTAtmosphericDrag *self, void *data);
            static PyObject *t_DSSTAtmosphericDrag_get__eventDetectors(t_DSSTAtmosphericDrag *self, void *data);
            static PyObject *t_DSSTAtmosphericDrag_get__rbar(t_DSSTAtmosphericDrag *self, void *data);
            static PyObject *t_DSSTAtmosphericDrag_get__spacecraft(t_DSSTAtmosphericDrag *self, void *data);
            static PyGetSetDef t_DSSTAtmosphericDrag__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTAtmosphericDrag, atmosphere),
              DECLARE_GET_FIELD(t_DSSTAtmosphericDrag, drag),
              DECLARE_GET_FIELD(t_DSSTAtmosphericDrag, eventDetectors),
              DECLARE_GET_FIELD(t_DSSTAtmosphericDrag, rbar),
              DECLARE_GET_FIELD(t_DSSTAtmosphericDrag, spacecraft),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTAtmosphericDrag__methods_[] = {
              DECLARE_METHOD(t_DSSTAtmosphericDrag, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, getAtmosphere, METH_NOARGS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, getDrag, METH_NOARGS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, getEventDetectors, METH_VARARGS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, getFieldEventDetectors, METH_VARARGS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, getRbar, METH_NOARGS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, getSpacecraft, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTAtmosphericDrag)[] = {
              { Py_tp_methods, t_DSSTAtmosphericDrag__methods_ },
              { Py_tp_init, (void *) t_DSSTAtmosphericDrag_init_ },
              { Py_tp_getset, t_DSSTAtmosphericDrag__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTAtmosphericDrag)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution),
              NULL
            };

            DEFINE_TYPE(DSSTAtmosphericDrag, t_DSSTAtmosphericDrag, DSSTAtmosphericDrag);

            void t_DSSTAtmosphericDrag::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTAtmosphericDrag), &PY_TYPE_DEF(DSSTAtmosphericDrag), module, "DSSTAtmosphericDrag", 0);
            }

            void t_DSSTAtmosphericDrag::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTAtmosphericDrag), "class_", make_descriptor(DSSTAtmosphericDrag::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTAtmosphericDrag), "wrapfn_", make_descriptor(t_DSSTAtmosphericDrag::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTAtmosphericDrag), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTAtmosphericDrag_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTAtmosphericDrag::initializeClass, 1)))
                return NULL;
              return t_DSSTAtmosphericDrag::wrap_Object(DSSTAtmosphericDrag(((t_DSSTAtmosphericDrag *) arg)->object.this$));
            }
            static PyObject *t_DSSTAtmosphericDrag_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTAtmosphericDrag::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTAtmosphericDrag_init_(t_DSSTAtmosphericDrag *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::forces::drag::DragForce a0((jobject) NULL);
                  jdouble a1;
                  DSSTAtmosphericDrag object((jobject) NULL);

                  if (!parseArgs(args, "kD", ::org::orekit::forces::drag::DragForce::initializeClass, &a0, &a1))
                  {
                    INT_CALL(object = DSSTAtmosphericDrag(a0, a1));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  ::org::orekit::models::earth::atmosphere::Atmosphere a0((jobject) NULL);
                  ::org::orekit::forces::drag::DragSensitive a1((jobject) NULL);
                  jdouble a2;
                  DSSTAtmosphericDrag object((jobject) NULL);

                  if (!parseArgs(args, "kkD", ::org::orekit::models::earth::atmosphere::Atmosphere::initializeClass, ::org::orekit::forces::drag::DragSensitive::initializeClass, &a0, &a1, &a2))
                  {
                    INT_CALL(object = DSSTAtmosphericDrag(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  ::org::orekit::models::earth::atmosphere::Atmosphere a0((jobject) NULL);
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  DSSTAtmosphericDrag object((jobject) NULL);

                  if (!parseArgs(args, "kDDD", ::org::orekit::models::earth::atmosphere::Atmosphere::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = DSSTAtmosphericDrag(a0, a1, a2, a3));
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

            static PyObject *t_DSSTAtmosphericDrag_getAtmosphere(t_DSSTAtmosphericDrag *self)
            {
              ::org::orekit::models::earth::atmosphere::Atmosphere result((jobject) NULL);
              OBJ_CALL(result = self->object.getAtmosphere());
              return ::org::orekit::models::earth::atmosphere::t_Atmosphere::wrap_Object(result);
            }

            static PyObject *t_DSSTAtmosphericDrag_getDrag(t_DSSTAtmosphericDrag *self)
            {
              ::org::orekit::forces::drag::DragForce result((jobject) NULL);
              OBJ_CALL(result = self->object.getDrag());
              return ::org::orekit::forces::drag::t_DragForce::wrap_Object(result);
            }

            static PyObject *t_DSSTAtmosphericDrag_getEventDetectors(t_DSSTAtmosphericDrag *self, PyObject *args)
            {
              ::java::util::stream::Stream result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getEventDetectors());
                return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
              }

              return callSuper(PY_TYPE(DSSTAtmosphericDrag), (PyObject *) self, "getEventDetectors", args, 2);
            }

            static PyObject *t_DSSTAtmosphericDrag_getFieldEventDetectors(t_DSSTAtmosphericDrag *self, PyObject *args)
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::stream::Stream result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
                return ::java::util::stream::t_Stream::wrap_Object(result);
              }

              return callSuper(PY_TYPE(DSSTAtmosphericDrag), (PyObject *) self, "getFieldEventDetectors", args, 2);
            }

            static PyObject *t_DSSTAtmosphericDrag_getRbar(t_DSSTAtmosphericDrag *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRbar());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTAtmosphericDrag_getSpacecraft(t_DSSTAtmosphericDrag *self)
            {
              ::org::orekit::forces::drag::DragSensitive result((jobject) NULL);
              OBJ_CALL(result = self->object.getSpacecraft());
              return ::org::orekit::forces::drag::t_DragSensitive::wrap_Object(result);
            }

            static PyObject *t_DSSTAtmosphericDrag_get__atmosphere(t_DSSTAtmosphericDrag *self, void *data)
            {
              ::org::orekit::models::earth::atmosphere::Atmosphere value((jobject) NULL);
              OBJ_CALL(value = self->object.getAtmosphere());
              return ::org::orekit::models::earth::atmosphere::t_Atmosphere::wrap_Object(value);
            }

            static PyObject *t_DSSTAtmosphericDrag_get__drag(t_DSSTAtmosphericDrag *self, void *data)
            {
              ::org::orekit::forces::drag::DragForce value((jobject) NULL);
              OBJ_CALL(value = self->object.getDrag());
              return ::org::orekit::forces::drag::t_DragForce::wrap_Object(value);
            }

            static PyObject *t_DSSTAtmosphericDrag_get__eventDetectors(t_DSSTAtmosphericDrag *self, void *data)
            {
              ::java::util::stream::Stream value((jobject) NULL);
              OBJ_CALL(value = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(value);
            }

            static PyObject *t_DSSTAtmosphericDrag_get__rbar(t_DSSTAtmosphericDrag *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRbar());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTAtmosphericDrag_get__spacecraft(t_DSSTAtmosphericDrag *self, void *data)
            {
              ::org::orekit::forces::drag::DragSensitive value((jobject) NULL);
              OBJ_CALL(value = self->object.getSpacecraft());
              return ::org::orekit::forces::drag::t_DragSensitive::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/OptimizationProblem.h"
#include "org/hipparchus/util/Incrementor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *OptimizationProblem::class$ = NULL;
      jmethodID *OptimizationProblem::mids$ = NULL;
      bool OptimizationProblem::live$ = false;

      jclass OptimizationProblem::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/OptimizationProblem");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getConvergenceChecker_4c680323f2c08379] = env->getMethodID(cls, "getConvergenceChecker", "()Lorg/hipparchus/optim/ConvergenceChecker;");
          mids$[mid_getEvaluationCounter_d3591c1ea177be92] = env->getMethodID(cls, "getEvaluationCounter", "()Lorg/hipparchus/util/Incrementor;");
          mids$[mid_getIterationCounter_d3591c1ea177be92] = env->getMethodID(cls, "getIterationCounter", "()Lorg/hipparchus/util/Incrementor;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::optim::ConvergenceChecker OptimizationProblem::getConvergenceChecker() const
      {
        return ::org::hipparchus::optim::ConvergenceChecker(env->callObjectMethod(this$, mids$[mid_getConvergenceChecker_4c680323f2c08379]));
      }

      ::org::hipparchus::util::Incrementor OptimizationProblem::getEvaluationCounter() const
      {
        return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getEvaluationCounter_d3591c1ea177be92]));
      }

      ::org::hipparchus::util::Incrementor OptimizationProblem::getIterationCounter() const
      {
        return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getIterationCounter_d3591c1ea177be92]));
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
      static PyObject *t_OptimizationProblem_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OptimizationProblem_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OptimizationProblem_of_(t_OptimizationProblem *self, PyObject *args);
      static PyObject *t_OptimizationProblem_getConvergenceChecker(t_OptimizationProblem *self);
      static PyObject *t_OptimizationProblem_getEvaluationCounter(t_OptimizationProblem *self);
      static PyObject *t_OptimizationProblem_getIterationCounter(t_OptimizationProblem *self);
      static PyObject *t_OptimizationProblem_get__convergenceChecker(t_OptimizationProblem *self, void *data);
      static PyObject *t_OptimizationProblem_get__evaluationCounter(t_OptimizationProblem *self, void *data);
      static PyObject *t_OptimizationProblem_get__iterationCounter(t_OptimizationProblem *self, void *data);
      static PyObject *t_OptimizationProblem_get__parameters_(t_OptimizationProblem *self, void *data);
      static PyGetSetDef t_OptimizationProblem__fields_[] = {
        DECLARE_GET_FIELD(t_OptimizationProblem, convergenceChecker),
        DECLARE_GET_FIELD(t_OptimizationProblem, evaluationCounter),
        DECLARE_GET_FIELD(t_OptimizationProblem, iterationCounter),
        DECLARE_GET_FIELD(t_OptimizationProblem, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OptimizationProblem__methods_[] = {
        DECLARE_METHOD(t_OptimizationProblem, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OptimizationProblem, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OptimizationProblem, of_, METH_VARARGS),
        DECLARE_METHOD(t_OptimizationProblem, getConvergenceChecker, METH_NOARGS),
        DECLARE_METHOD(t_OptimizationProblem, getEvaluationCounter, METH_NOARGS),
        DECLARE_METHOD(t_OptimizationProblem, getIterationCounter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OptimizationProblem)[] = {
        { Py_tp_methods, t_OptimizationProblem__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OptimizationProblem__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OptimizationProblem)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OptimizationProblem, t_OptimizationProblem, OptimizationProblem);
      PyObject *t_OptimizationProblem::wrap_Object(const OptimizationProblem& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OptimizationProblem::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OptimizationProblem *self = (t_OptimizationProblem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OptimizationProblem::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OptimizationProblem::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OptimizationProblem *self = (t_OptimizationProblem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OptimizationProblem::install(PyObject *module)
      {
        installType(&PY_TYPE(OptimizationProblem), &PY_TYPE_DEF(OptimizationProblem), module, "OptimizationProblem", 0);
      }

      void t_OptimizationProblem::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblem), "class_", make_descriptor(OptimizationProblem::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblem), "wrapfn_", make_descriptor(t_OptimizationProblem::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblem), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OptimizationProblem_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OptimizationProblem::initializeClass, 1)))
          return NULL;
        return t_OptimizationProblem::wrap_Object(OptimizationProblem(((t_OptimizationProblem *) arg)->object.this$));
      }
      static PyObject *t_OptimizationProblem_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OptimizationProblem::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OptimizationProblem_of_(t_OptimizationProblem *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_OptimizationProblem_getConvergenceChecker(t_OptimizationProblem *self)
      {
        ::org::hipparchus::optim::ConvergenceChecker result((jobject) NULL);
        OBJ_CALL(result = self->object.getConvergenceChecker());
        return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_OptimizationProblem_getEvaluationCounter(t_OptimizationProblem *self)
      {
        ::org::hipparchus::util::Incrementor result((jobject) NULL);
        OBJ_CALL(result = self->object.getEvaluationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(result);
      }

      static PyObject *t_OptimizationProblem_getIterationCounter(t_OptimizationProblem *self)
      {
        ::org::hipparchus::util::Incrementor result((jobject) NULL);
        OBJ_CALL(result = self->object.getIterationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(result);
      }
      static PyObject *t_OptimizationProblem_get__parameters_(t_OptimizationProblem *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_OptimizationProblem_get__convergenceChecker(t_OptimizationProblem *self, void *data)
      {
        ::org::hipparchus::optim::ConvergenceChecker value((jobject) NULL);
        OBJ_CALL(value = self->object.getConvergenceChecker());
        return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(value);
      }

      static PyObject *t_OptimizationProblem_get__evaluationCounter(t_OptimizationProblem *self, void *data)
      {
        ::org::hipparchus::util::Incrementor value((jobject) NULL);
        OBJ_CALL(value = self->object.getEvaluationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(value);
      }

      static PyObject *t_OptimizationProblem_get__iterationCounter(t_OptimizationProblem *self, void *data)
      {
        ::org::hipparchus::util::Incrementor value((jobject) NULL);
        OBJ_CALL(value = self->object.getIterationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/BistaticRangeBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/BistaticRange.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
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
              mids$[mid_init$_feb9739fac37e84c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_7439e7e7c92a8efa] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/BistaticRange;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeBuilder::BistaticRangeBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::estimation::measurements::GroundStation & a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_feb9739fac37e84c, a0.this$, a1.this$, a2.this$, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::BistaticRange BistaticRangeBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::BistaticRange(env->callObjectMethod(this$, mids$[mid_build_7439e7e7c92a8efa], a0.this$, a1.this$));
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
#include "org/orekit/estimation/measurements/modifiers/AberrationModifier.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AberrationModifier::class$ = NULL;
          jmethodID *AberrationModifier::mids$ = NULL;
          bool AberrationModifier::live$ = false;

          jclass AberrationModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AberrationModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_fieldNaturalToProper_1524791121e959c6] = env->getStaticMethodID(cls, "fieldNaturalToProper", "([Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/orekit/frames/FieldTransform;Lorg/orekit/frames/Frame;)[Lorg/hipparchus/analysis/differentiation/Gradient;");
              mids$[mid_fieldProperToNatural_1524791121e959c6] = env->getStaticMethodID(cls, "fieldProperToNatural", "([Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/orekit/frames/FieldTransform;Lorg/orekit/frames/Frame;)[Lorg/hipparchus/analysis/differentiation/Gradient;");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_0054a497255e8220] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_naturalToProper_3d1b32bf08f1cecd] = env->getStaticMethodID(cls, "naturalToProper", "([DLorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)[D");
              mids$[mid_properToNatural_3d1b32bf08f1cecd] = env->getStaticMethodID(cls, "properToNatural", "([DLorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AberrationModifier::AberrationModifier() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          JArray< ::org::hipparchus::analysis::differentiation::Gradient > AberrationModifier::fieldNaturalToProper(const JArray< ::org::hipparchus::analysis::differentiation::Gradient > & a0, const ::org::orekit::frames::FieldTransform & a1, const ::org::orekit::frames::Frame & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< ::org::hipparchus::analysis::differentiation::Gradient >(env->callStaticObjectMethod(cls, mids$[mid_fieldNaturalToProper_1524791121e959c6], a0.this$, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::analysis::differentiation::Gradient > AberrationModifier::fieldProperToNatural(const JArray< ::org::hipparchus::analysis::differentiation::Gradient > & a0, const ::org::orekit::frames::FieldTransform & a1, const ::org::orekit::frames::Frame & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< ::org::hipparchus::analysis::differentiation::Gradient >(env->callStaticObjectMethod(cls, mids$[mid_fieldProperToNatural_1524791121e959c6], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List AberrationModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void AberrationModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0054a497255e8220], a0.this$);
          }

          void AberrationModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
          }

          JArray< jdouble > AberrationModifier::naturalToProper(const JArray< jdouble > & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::frames::Frame & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_naturalToProper_3d1b32bf08f1cecd], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          JArray< jdouble > AberrationModifier::properToNatural(const JArray< jdouble > & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::frames::Frame & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_properToNatural_3d1b32bf08f1cecd], a0.this$, a1.this$, a2.this$, a3.this$));
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
          static PyObject *t_AberrationModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AberrationModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AberrationModifier_init_(t_AberrationModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AberrationModifier_fieldNaturalToProper(PyTypeObject *type, PyObject *args);
          static PyObject *t_AberrationModifier_fieldProperToNatural(PyTypeObject *type, PyObject *args);
          static PyObject *t_AberrationModifier_getParametersDrivers(t_AberrationModifier *self);
          static PyObject *t_AberrationModifier_modify(t_AberrationModifier *self, PyObject *arg);
          static PyObject *t_AberrationModifier_modifyWithoutDerivatives(t_AberrationModifier *self, PyObject *arg);
          static PyObject *t_AberrationModifier_naturalToProper(PyTypeObject *type, PyObject *args);
          static PyObject *t_AberrationModifier_properToNatural(PyTypeObject *type, PyObject *args);
          static PyObject *t_AberrationModifier_get__parametersDrivers(t_AberrationModifier *self, void *data);
          static PyGetSetDef t_AberrationModifier__fields_[] = {
            DECLARE_GET_FIELD(t_AberrationModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AberrationModifier__methods_[] = {
            DECLARE_METHOD(t_AberrationModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AberrationModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AberrationModifier, fieldNaturalToProper, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_AberrationModifier, fieldProperToNatural, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_AberrationModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AberrationModifier, modify, METH_O),
            DECLARE_METHOD(t_AberrationModifier, modifyWithoutDerivatives, METH_O),
            DECLARE_METHOD(t_AberrationModifier, naturalToProper, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_AberrationModifier, properToNatural, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AberrationModifier)[] = {
            { Py_tp_methods, t_AberrationModifier__methods_ },
            { Py_tp_init, (void *) t_AberrationModifier_init_ },
            { Py_tp_getset, t_AberrationModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AberrationModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AberrationModifier, t_AberrationModifier, AberrationModifier);

          void t_AberrationModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AberrationModifier), &PY_TYPE_DEF(AberrationModifier), module, "AberrationModifier", 0);
          }

          void t_AberrationModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AberrationModifier), "class_", make_descriptor(AberrationModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AberrationModifier), "wrapfn_", make_descriptor(t_AberrationModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AberrationModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AberrationModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AberrationModifier::initializeClass, 1)))
              return NULL;
            return t_AberrationModifier::wrap_Object(AberrationModifier(((t_AberrationModifier *) arg)->object.this$));
          }
          static PyObject *t_AberrationModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AberrationModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AberrationModifier_init_(t_AberrationModifier *self, PyObject *args, PyObject *kwds)
          {
            AberrationModifier object((jobject) NULL);

            INT_CALL(object = AberrationModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_AberrationModifier_fieldNaturalToProper(PyTypeObject *type, PyObject *args)
          {
            JArray< ::org::hipparchus::analysis::differentiation::Gradient > a0((jobject) NULL);
            ::org::orekit::frames::FieldTransform a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            JArray< ::org::hipparchus::analysis::differentiation::Gradient > result((jobject) NULL);

            if (!parseArgs(args, "[kKk", ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, ::org::orekit::frames::FieldTransform::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &p1, ::org::orekit::frames::t_FieldTransform::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::modifiers::AberrationModifier::fieldNaturalToProper(a0, a1, a2));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
            }

            PyErr_SetArgsError(type, "fieldNaturalToProper", args);
            return NULL;
          }

          static PyObject *t_AberrationModifier_fieldProperToNatural(PyTypeObject *type, PyObject *args)
          {
            JArray< ::org::hipparchus::analysis::differentiation::Gradient > a0((jobject) NULL);
            ::org::orekit::frames::FieldTransform a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            JArray< ::org::hipparchus::analysis::differentiation::Gradient > result((jobject) NULL);

            if (!parseArgs(args, "[kKk", ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, ::org::orekit::frames::FieldTransform::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &p1, ::org::orekit::frames::t_FieldTransform::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::modifiers::AberrationModifier::fieldProperToNatural(a0, a1, a2));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
            }

            PyErr_SetArgsError(type, "fieldProperToNatural", args);
            return NULL;
          }

          static PyObject *t_AberrationModifier_getParametersDrivers(t_AberrationModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AberrationModifier_modify(t_AberrationModifier *self, PyObject *arg)
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

          static PyObject *t_AberrationModifier_modifyWithoutDerivatives(t_AberrationModifier *self, PyObject *arg)
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

          static PyObject *t_AberrationModifier_naturalToProper(PyTypeObject *type, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::frames::Frame a3((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[Dkkk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::modifiers::AberrationModifier::naturalToProper(a0, a1, a2, a3));
              return result.wrap();
            }

            PyErr_SetArgsError(type, "naturalToProper", args);
            return NULL;
          }

          static PyObject *t_AberrationModifier_properToNatural(PyTypeObject *type, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::frames::Frame a3((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[Dkkk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::modifiers::AberrationModifier::properToNatural(a0, a1, a2, a3));
              return result.wrap();
            }

            PyErr_SetArgsError(type, "properToNatural", args);
            return NULL;
          }

          static PyObject *t_AberrationModifier_get__parametersDrivers(t_AberrationModifier *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitCovarianceHistoryMetadataKey::class$ = NULL;
              jmethodID *OrbitCovarianceHistoryMetadataKey::mids$ = NULL;
              bool OrbitCovarianceHistoryMetadataKey::live$ = false;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COMMENT = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_BASIS = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_BASIS_ID = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_CONFIDENCE = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_FRAME_EPOCH = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_ID = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_NEXT_ID = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_ORDERING = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_PREV_ID = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_REF_FRAME = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_SCALE_MAX = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_SCALE_MIN = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_TYPE = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_UNITS = NULL;

              jclass OrbitCovarianceHistoryMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_09eafc6941d7bef7] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata;)Z");
                  mids$[mid_valueOf_68e5ab106f806138] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;");
                  mids$[mid_values_fecf9ca8ab6cb863] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_BASIS = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_BASIS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_BASIS_ID = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_BASIS_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_CONFIDENCE = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_CONFIDENCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_FRAME_EPOCH = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_ID = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_NEXT_ID = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_NEXT_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_ORDERING = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_ORDERING", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_PREV_ID = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_PREV_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_REF_FRAME = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_SCALE_MAX = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_SCALE_MAX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_SCALE_MIN = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_SCALE_MIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_TYPE = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_UNITS = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_UNITS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OrbitCovarianceHistoryMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_09eafc6941d7bef7], a0.this$, a1.this$, a2.this$);
              }

              OrbitCovarianceHistoryMetadataKey OrbitCovarianceHistoryMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitCovarianceHistoryMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_68e5ab106f806138], a0.this$));
              }

              JArray< OrbitCovarianceHistoryMetadataKey > OrbitCovarianceHistoryMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitCovarianceHistoryMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_fecf9ca8ab6cb863]));
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
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_of_(t_OrbitCovarianceHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_process(t_OrbitCovarianceHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_values(PyTypeObject *type);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_get__parameters_(t_OrbitCovarianceHistoryMetadataKey *self, void *data);
              static PyGetSetDef t_OrbitCovarianceHistoryMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitCovarianceHistoryMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitCovarianceHistoryMetadataKey__methods_[] = {
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitCovarianceHistoryMetadataKey)[] = {
                { Py_tp_methods, t_OrbitCovarianceHistoryMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitCovarianceHistoryMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitCovarianceHistoryMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitCovarianceHistoryMetadataKey, t_OrbitCovarianceHistoryMetadataKey, OrbitCovarianceHistoryMetadataKey);
              PyObject *t_OrbitCovarianceHistoryMetadataKey::wrap_Object(const OrbitCovarianceHistoryMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitCovarianceHistoryMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitCovarianceHistoryMetadataKey *self = (t_OrbitCovarianceHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitCovarianceHistoryMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitCovarianceHistoryMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitCovarianceHistoryMetadataKey *self = (t_OrbitCovarianceHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitCovarianceHistoryMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitCovarianceHistoryMetadataKey), &PY_TYPE_DEF(OrbitCovarianceHistoryMetadataKey), module, "OrbitCovarianceHistoryMetadataKey", 0);
              }

              void t_OrbitCovarianceHistoryMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "class_", make_descriptor(OrbitCovarianceHistoryMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "wrapfn_", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitCovarianceHistoryMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COMMENT", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_BASIS", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_BASIS_ID", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_BASIS_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_CONFIDENCE", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_CONFIDENCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_FRAME_EPOCH", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_FRAME_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_ID", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_NEXT_ID", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_NEXT_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_ORDERING", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_ORDERING)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_PREV_ID", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_REF_FRAME", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_SCALE_MAX", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_SCALE_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_SCALE_MIN", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_SCALE_MIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_TYPE", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_UNITS", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_UNITS)));
              }

              static PyObject *t_OrbitCovarianceHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitCovarianceHistoryMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_OrbitCovarianceHistoryMetadataKey::wrap_Object(OrbitCovarianceHistoryMetadataKey(((t_OrbitCovarianceHistoryMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitCovarianceHistoryMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadataKey_of_(t_OrbitCovarianceHistoryMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadataKey_process(t_OrbitCovarianceHistoryMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitCovarianceHistoryMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadataKey::valueOf(a0));
                  return t_OrbitCovarianceHistoryMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadataKey_values(PyTypeObject *type)
              {
                JArray< OrbitCovarianceHistoryMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitCovarianceHistoryMetadataKey::wrap_jobject);
              }
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_get__parameters_(t_OrbitCovarianceHistoryMetadataKey *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *OdmHeader::class$ = NULL;
            jmethodID *OdmHeader::mids$ = NULL;
            bool OdmHeader::live$ = false;

            jclass OdmHeader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/OdmHeader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            OdmHeader::OdmHeader() : ::org::orekit::files::ccsds::section::Header(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}
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
            static PyObject *t_OdmHeader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmHeader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_OdmHeader_init_(t_OdmHeader *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_OdmHeader__methods_[] = {
              DECLARE_METHOD(t_OdmHeader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmHeader, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OdmHeader)[] = {
              { Py_tp_methods, t_OdmHeader__methods_ },
              { Py_tp_init, (void *) t_OdmHeader_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OdmHeader)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Header),
              NULL
            };

            DEFINE_TYPE(OdmHeader, t_OdmHeader, OdmHeader);

            void t_OdmHeader::install(PyObject *module)
            {
              installType(&PY_TYPE(OdmHeader), &PY_TYPE_DEF(OdmHeader), module, "OdmHeader", 0);
            }

            void t_OdmHeader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmHeader), "class_", make_descriptor(OdmHeader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmHeader), "wrapfn_", make_descriptor(t_OdmHeader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmHeader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_OdmHeader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OdmHeader::initializeClass, 1)))
                return NULL;
              return t_OdmHeader::wrap_Object(OdmHeader(((t_OdmHeader *) arg)->object.this$));
            }
            static PyObject *t_OdmHeader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OdmHeader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_OdmHeader_init_(t_OdmHeader *self, PyObject *args, PyObject *kwds)
            {
              OdmHeader object((jobject) NULL);

              INT_CALL(object = OdmHeader());
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
#include "org/orekit/gnss/metric/ntrip/StreamedMessage.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *StreamedMessage::class$ = NULL;
          jmethodID *StreamedMessage::mids$ = NULL;
          bool StreamedMessage::live$ = false;

          jclass StreamedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/StreamedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getId_3cffd47377eca18a] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
              mids$[mid_getRate_412668abc8d889e9] = env->getMethodID(cls, "getRate", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String StreamedMessage::getId() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_3cffd47377eca18a]));
          }

          jint StreamedMessage::getRate() const
          {
            return env->callIntMethod(this$, mids$[mid_getRate_412668abc8d889e9]);
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
          static PyObject *t_StreamedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StreamedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StreamedMessage_getId(t_StreamedMessage *self);
          static PyObject *t_StreamedMessage_getRate(t_StreamedMessage *self);
          static PyObject *t_StreamedMessage_get__id(t_StreamedMessage *self, void *data);
          static PyObject *t_StreamedMessage_get__rate(t_StreamedMessage *self, void *data);
          static PyGetSetDef t_StreamedMessage__fields_[] = {
            DECLARE_GET_FIELD(t_StreamedMessage, id),
            DECLARE_GET_FIELD(t_StreamedMessage, rate),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_StreamedMessage__methods_[] = {
            DECLARE_METHOD(t_StreamedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StreamedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StreamedMessage, getId, METH_NOARGS),
            DECLARE_METHOD(t_StreamedMessage, getRate, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StreamedMessage)[] = {
            { Py_tp_methods, t_StreamedMessage__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_StreamedMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StreamedMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(StreamedMessage, t_StreamedMessage, StreamedMessage);

          void t_StreamedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(StreamedMessage), &PY_TYPE_DEF(StreamedMessage), module, "StreamedMessage", 0);
          }

          void t_StreamedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StreamedMessage), "class_", make_descriptor(StreamedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StreamedMessage), "wrapfn_", make_descriptor(t_StreamedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StreamedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StreamedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StreamedMessage::initializeClass, 1)))
              return NULL;
            return t_StreamedMessage::wrap_Object(StreamedMessage(((t_StreamedMessage *) arg)->object.this$));
          }
          static PyObject *t_StreamedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StreamedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_StreamedMessage_getId(t_StreamedMessage *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getId());
            return j2p(result);
          }

          static PyObject *t_StreamedMessage_getRate(t_StreamedMessage *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getRate());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_StreamedMessage_get__id(t_StreamedMessage *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getId());
            return j2p(value);
          }

          static PyObject *t_StreamedMessage_get__rate(t_StreamedMessage *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getRate());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemParser.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemParser.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/Oem.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemParser::class$ = NULL;
              jmethodID *OemParser::mids$ = NULL;
              bool OemParser::live$ = false;

              jclass OemParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_22885fb1ea7d5833] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/odm/oem/Oem;");
                  mids$[mid_finalizeData_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_d7722dc369ae0874] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;");
                  mids$[mid_inData_89b302893bdbe1f1] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_89b302893bdbe1f1] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_parse_b41e0aee65ea46fa] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ccsds/ndm/odm/oem/Oem;");
                  mids$[mid_prepareData_89b302893bdbe1f1] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_89b302893bdbe1f1] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_a580586827f4ec13] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::odm::oem::Oem OemParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::oem::Oem(env->callObjectMethod(this$, mids$[mid_build_22885fb1ea7d5833]));
              }

              jboolean OemParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_89b302893bdbe1f1]);
              }

              jboolean OemParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_89b302893bdbe1f1]);
              }

              jboolean OemParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_89b302893bdbe1f1]);
              }

              ::org::orekit::files::ccsds::ndm::odm::OdmHeader OemParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::OdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_d7722dc369ae0874]));
              }

              jboolean OemParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_89b302893bdbe1f1]);
              }

              jboolean OemParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_89b302893bdbe1f1]);
              }

              jboolean OemParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_89b302893bdbe1f1]);
              }

              ::org::orekit::files::ccsds::ndm::odm::oem::Oem OemParser::parse(const ::org::orekit::data::DataSource & a0) const
              {
                return ::org::orekit::files::ccsds::ndm::odm::oem::Oem(env->callObjectMethod(this$, mids$[mid_parse_b41e0aee65ea46fa], a0.this$));
              }

              jboolean OemParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_89b302893bdbe1f1]);
              }

              jboolean OemParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_89b302893bdbe1f1]);
              }

              jboolean OemParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_89b302893bdbe1f1]);
              }

              void OemParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_a580586827f4ec13], a0.this$);
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
            namespace oem {
              static PyObject *t_OemParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemParser_of_(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_build(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_finalizeData(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_finalizeHeader(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_finalizeMetadata(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_getHeader(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_inData(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_inHeader(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_inMetadata(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_parse(t_OemParser *self, PyObject *arg);
              static PyObject *t_OemParser_prepareData(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_prepareHeader(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_prepareMetadata(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_reset(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_get__header(t_OemParser *self, void *data);
              static PyObject *t_OemParser_get__parameters_(t_OemParser *self, void *data);
              static PyGetSetDef t_OemParser__fields_[] = {
                DECLARE_GET_FIELD(t_OemParser, header),
                DECLARE_GET_FIELD(t_OemParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemParser__methods_[] = {
                DECLARE_METHOD(t_OemParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, build, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, parse, METH_O),
                DECLARE_METHOD(t_OemParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemParser)[] = {
                { Py_tp_methods, t_OemParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OemParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmParser),
                NULL
              };

              DEFINE_TYPE(OemParser, t_OemParser, OemParser);
              PyObject *t_OemParser::wrap_Object(const OemParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OemParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemParser *self = (t_OemParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_OemParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OemParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemParser *self = (t_OemParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_OemParser::install(PyObject *module)
              {
                installType(&PY_TYPE(OemParser), &PY_TYPE_DEF(OemParser), module, "OemParser", 0);
              }

              void t_OemParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemParser), "class_", make_descriptor(OemParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemParser), "wrapfn_", make_descriptor(t_OemParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OemParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemParser::initializeClass, 1)))
                  return NULL;
                return t_OemParser::wrap_Object(OemParser(((t_OemParser *) arg)->object.this$));
              }
              static PyObject *t_OemParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OemParser_of_(t_OemParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OemParser_build(t_OemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::Oem result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::odm::oem::t_Oem::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_OemParser_finalizeData(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_OemParser_finalizeHeader(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_OemParser_finalizeMetadata(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_OemParser_getHeader(t_OemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_OemParser_inData(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_OemParser_inHeader(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_OemParser_inMetadata(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_OemParser_parse(t_OemParser *self, PyObject *arg)
              {
                ::org::orekit::data::DataSource a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::oem::Oem result((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::ccsds::ndm::odm::oem::t_Oem::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "parse", arg);
                return NULL;
              }

              static PyObject *t_OemParser_prepareData(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_OemParser_prepareHeader(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_OemParser_prepareMetadata(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_OemParser_reset(t_OemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_OemParser_get__parameters_(t_OemParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OemParser_get__header(t_OemParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(value);
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
#include "org/orekit/propagation/MatricesHarvester.h"
#include "java/util/List.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *MatricesHarvester::class$ = NULL;
      jmethodID *MatricesHarvester::mids$ = NULL;
      bool MatricesHarvester::live$ = false;

      jclass MatricesHarvester::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/MatricesHarvester");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getJacobiansColumnsNames_0d9551367f7ecdef] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
          mids$[mid_getOrbitType_2cea2a2cb3e02091] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getParametersJacobian_fc9cdfa83c55d6b2] = env->getMethodID(cls, "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getStateTransitionMatrix_fc9cdfa83c55d6b2] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_setReferenceState_8655761ebf04b503] = env->getMethodID(cls, "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List MatricesHarvester::getJacobiansColumnsNames() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getJacobiansColumnsNames_0d9551367f7ecdef]));
      }

      ::org::orekit::orbits::OrbitType MatricesHarvester::getOrbitType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_2cea2a2cb3e02091]));
      }

      ::org::hipparchus::linear::RealMatrix MatricesHarvester::getParametersJacobian(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getParametersJacobian_fc9cdfa83c55d6b2], a0.this$));
      }

      ::org::orekit::orbits::PositionAngleType MatricesHarvester::getPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_f4984aee71df4c19]));
      }

      ::org::hipparchus::linear::RealMatrix MatricesHarvester::getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_fc9cdfa83c55d6b2], a0.this$));
      }

      void MatricesHarvester::setReferenceState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setReferenceState_8655761ebf04b503], a0.this$);
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
      static PyObject *t_MatricesHarvester_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatricesHarvester_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatricesHarvester_getJacobiansColumnsNames(t_MatricesHarvester *self);
      static PyObject *t_MatricesHarvester_getOrbitType(t_MatricesHarvester *self);
      static PyObject *t_MatricesHarvester_getParametersJacobian(t_MatricesHarvester *self, PyObject *arg);
      static PyObject *t_MatricesHarvester_getPositionAngleType(t_MatricesHarvester *self);
      static PyObject *t_MatricesHarvester_getStateTransitionMatrix(t_MatricesHarvester *self, PyObject *arg);
      static PyObject *t_MatricesHarvester_setReferenceState(t_MatricesHarvester *self, PyObject *arg);
      static PyObject *t_MatricesHarvester_get__jacobiansColumnsNames(t_MatricesHarvester *self, void *data);
      static PyObject *t_MatricesHarvester_get__orbitType(t_MatricesHarvester *self, void *data);
      static PyObject *t_MatricesHarvester_get__positionAngleType(t_MatricesHarvester *self, void *data);
      static int t_MatricesHarvester_set__referenceState(t_MatricesHarvester *self, PyObject *arg, void *data);
      static PyGetSetDef t_MatricesHarvester__fields_[] = {
        DECLARE_GET_FIELD(t_MatricesHarvester, jacobiansColumnsNames),
        DECLARE_GET_FIELD(t_MatricesHarvester, orbitType),
        DECLARE_GET_FIELD(t_MatricesHarvester, positionAngleType),
        DECLARE_SET_FIELD(t_MatricesHarvester, referenceState),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MatricesHarvester__methods_[] = {
        DECLARE_METHOD(t_MatricesHarvester, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatricesHarvester, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatricesHarvester, getJacobiansColumnsNames, METH_NOARGS),
        DECLARE_METHOD(t_MatricesHarvester, getOrbitType, METH_NOARGS),
        DECLARE_METHOD(t_MatricesHarvester, getParametersJacobian, METH_O),
        DECLARE_METHOD(t_MatricesHarvester, getPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_MatricesHarvester, getStateTransitionMatrix, METH_O),
        DECLARE_METHOD(t_MatricesHarvester, setReferenceState, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MatricesHarvester)[] = {
        { Py_tp_methods, t_MatricesHarvester__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MatricesHarvester__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MatricesHarvester)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MatricesHarvester, t_MatricesHarvester, MatricesHarvester);

      void t_MatricesHarvester::install(PyObject *module)
      {
        installType(&PY_TYPE(MatricesHarvester), &PY_TYPE_DEF(MatricesHarvester), module, "MatricesHarvester", 0);
      }

      void t_MatricesHarvester::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatricesHarvester), "class_", make_descriptor(MatricesHarvester::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatricesHarvester), "wrapfn_", make_descriptor(t_MatricesHarvester::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatricesHarvester), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MatricesHarvester_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MatricesHarvester::initializeClass, 1)))
          return NULL;
        return t_MatricesHarvester::wrap_Object(MatricesHarvester(((t_MatricesHarvester *) arg)->object.this$));
      }
      static PyObject *t_MatricesHarvester_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MatricesHarvester::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MatricesHarvester_getJacobiansColumnsNames(t_MatricesHarvester *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getJacobiansColumnsNames());
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_MatricesHarvester_getOrbitType(t_MatricesHarvester *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_MatricesHarvester_getParametersJacobian(t_MatricesHarvester *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getParametersJacobian(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getParametersJacobian", arg);
        return NULL;
      }

      static PyObject *t_MatricesHarvester_getPositionAngleType(t_MatricesHarvester *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_MatricesHarvester_getStateTransitionMatrix(t_MatricesHarvester *self, PyObject *arg)
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

      static PyObject *t_MatricesHarvester_setReferenceState(t_MatricesHarvester *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setReferenceState(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setReferenceState", arg);
        return NULL;
      }

      static PyObject *t_MatricesHarvester_get__jacobiansColumnsNames(t_MatricesHarvester *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getJacobiansColumnsNames());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_MatricesHarvester_get__orbitType(t_MatricesHarvester *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }

      static PyObject *t_MatricesHarvester_get__positionAngleType(t_MatricesHarvester *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static int t_MatricesHarvester_set__referenceState(t_MatricesHarvester *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            INT_CALL(self->object.setReferenceState(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "referenceState", arg);
        return -1;
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
                mids$[mid_accept_a3da1a935cb37f7b] = env->getMethodID(cls, "accept", "(I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IntConsumer::accept(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_a3da1a935cb37f7b], a0);
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
#include "org/orekit/propagation/analytical/tle/TLEConstants.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *TLEConstants::class$ = NULL;
          jmethodID *TLEConstants::mids$ = NULL;
          bool TLEConstants::live$ = false;
          jdouble TLEConstants::A3OVK2 = (jdouble) 0;
          jdouble TLEConstants::C1L = (jdouble) 0;
          jdouble TLEConstants::C1SS = (jdouble) 0;
          jdouble TLEConstants::CK2 = (jdouble) 0;
          jdouble TLEConstants::CK4 = (jdouble) 0;
          jdouble TLEConstants::C_2FASX4 = (jdouble) 0;
          jdouble TLEConstants::C_3FASX6 = (jdouble) 0;
          jdouble TLEConstants::C_FASX2 = (jdouble) 0;
          jdouble TLEConstants::C_G22 = (jdouble) 0;
          jdouble TLEConstants::C_G32 = (jdouble) 0;
          jdouble TLEConstants::C_G44 = (jdouble) 0;
          jdouble TLEConstants::C_G52 = (jdouble) 0;
          jdouble TLEConstants::C_G54 = (jdouble) 0;
          jdouble TLEConstants::EARTH_RADIUS = (jdouble) 0;
          jdouble TLEConstants::MINUTES_PER_DAY = (jdouble) 0;
          jdouble TLEConstants::MU = (jdouble) 0;
          jdouble TLEConstants::NORMALIZED_EQUATORIAL_RADIUS = (jdouble) 0;
          jdouble TLEConstants::ONE_THIRD = (jdouble) 0;
          jdouble TLEConstants::Q22 = (jdouble) 0;
          jdouble TLEConstants::Q31 = (jdouble) 0;
          jdouble TLEConstants::Q33 = (jdouble) 0;
          jdouble TLEConstants::QOMS2T = (jdouble) 0;
          jdouble TLEConstants::ROOT22 = (jdouble) 0;
          jdouble TLEConstants::ROOT32 = (jdouble) 0;
          jdouble TLEConstants::ROOT44 = (jdouble) 0;
          jdouble TLEConstants::ROOT52 = (jdouble) 0;
          jdouble TLEConstants::ROOT54 = (jdouble) 0;
          jdouble TLEConstants::S = (jdouble) 0;
          jdouble TLEConstants::S_2FASX4 = (jdouble) 0;
          jdouble TLEConstants::S_3FASX6 = (jdouble) 0;
          jdouble TLEConstants::S_FASX2 = (jdouble) 0;
          jdouble TLEConstants::S_G22 = (jdouble) 0;
          jdouble TLEConstants::S_G32 = (jdouble) 0;
          jdouble TLEConstants::S_G44 = (jdouble) 0;
          jdouble TLEConstants::S_G52 = (jdouble) 0;
          jdouble TLEConstants::S_G54 = (jdouble) 0;
          jdouble TLEConstants::THDT = (jdouble) 0;
          jdouble TLEConstants::TWO_THIRD = (jdouble) 0;
          jdouble TLEConstants::XJ2 = (jdouble) 0;
          jdouble TLEConstants::XJ3 = (jdouble) 0;
          jdouble TLEConstants::XJ4 = (jdouble) 0;
          jdouble TLEConstants::XKE = (jdouble) 0;
          jdouble TLEConstants::ZEL = (jdouble) 0;
          jdouble TLEConstants::ZES = (jdouble) 0;
          jdouble TLEConstants::ZNL = (jdouble) 0;
          jdouble TLEConstants::ZNS = (jdouble) 0;

          jclass TLEConstants::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/TLEConstants");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              A3OVK2 = env->getStaticDoubleField(cls, "A3OVK2");
              C1L = env->getStaticDoubleField(cls, "C1L");
              C1SS = env->getStaticDoubleField(cls, "C1SS");
              CK2 = env->getStaticDoubleField(cls, "CK2");
              CK4 = env->getStaticDoubleField(cls, "CK4");
              C_2FASX4 = env->getStaticDoubleField(cls, "C_2FASX4");
              C_3FASX6 = env->getStaticDoubleField(cls, "C_3FASX6");
              C_FASX2 = env->getStaticDoubleField(cls, "C_FASX2");
              C_G22 = env->getStaticDoubleField(cls, "C_G22");
              C_G32 = env->getStaticDoubleField(cls, "C_G32");
              C_G44 = env->getStaticDoubleField(cls, "C_G44");
              C_G52 = env->getStaticDoubleField(cls, "C_G52");
              C_G54 = env->getStaticDoubleField(cls, "C_G54");
              EARTH_RADIUS = env->getStaticDoubleField(cls, "EARTH_RADIUS");
              MINUTES_PER_DAY = env->getStaticDoubleField(cls, "MINUTES_PER_DAY");
              MU = env->getStaticDoubleField(cls, "MU");
              NORMALIZED_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "NORMALIZED_EQUATORIAL_RADIUS");
              ONE_THIRD = env->getStaticDoubleField(cls, "ONE_THIRD");
              Q22 = env->getStaticDoubleField(cls, "Q22");
              Q31 = env->getStaticDoubleField(cls, "Q31");
              Q33 = env->getStaticDoubleField(cls, "Q33");
              QOMS2T = env->getStaticDoubleField(cls, "QOMS2T");
              ROOT22 = env->getStaticDoubleField(cls, "ROOT22");
              ROOT32 = env->getStaticDoubleField(cls, "ROOT32");
              ROOT44 = env->getStaticDoubleField(cls, "ROOT44");
              ROOT52 = env->getStaticDoubleField(cls, "ROOT52");
              ROOT54 = env->getStaticDoubleField(cls, "ROOT54");
              S = env->getStaticDoubleField(cls, "S");
              S_2FASX4 = env->getStaticDoubleField(cls, "S_2FASX4");
              S_3FASX6 = env->getStaticDoubleField(cls, "S_3FASX6");
              S_FASX2 = env->getStaticDoubleField(cls, "S_FASX2");
              S_G22 = env->getStaticDoubleField(cls, "S_G22");
              S_G32 = env->getStaticDoubleField(cls, "S_G32");
              S_G44 = env->getStaticDoubleField(cls, "S_G44");
              S_G52 = env->getStaticDoubleField(cls, "S_G52");
              S_G54 = env->getStaticDoubleField(cls, "S_G54");
              THDT = env->getStaticDoubleField(cls, "THDT");
              TWO_THIRD = env->getStaticDoubleField(cls, "TWO_THIRD");
              XJ2 = env->getStaticDoubleField(cls, "XJ2");
              XJ3 = env->getStaticDoubleField(cls, "XJ3");
              XJ4 = env->getStaticDoubleField(cls, "XJ4");
              XKE = env->getStaticDoubleField(cls, "XKE");
              ZEL = env->getStaticDoubleField(cls, "ZEL");
              ZES = env->getStaticDoubleField(cls, "ZES");
              ZNL = env->getStaticDoubleField(cls, "ZNL");
              ZNS = env->getStaticDoubleField(cls, "ZNS");
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
    namespace propagation {
      namespace analytical {
        namespace tle {
          static PyObject *t_TLEConstants_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TLEConstants_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_TLEConstants__methods_[] = {
            DECLARE_METHOD(t_TLEConstants, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TLEConstants, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TLEConstants)[] = {
            { Py_tp_methods, t_TLEConstants__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TLEConstants)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TLEConstants, t_TLEConstants, TLEConstants);

          void t_TLEConstants::install(PyObject *module)
          {
            installType(&PY_TYPE(TLEConstants), &PY_TYPE_DEF(TLEConstants), module, "TLEConstants", 0);
          }

          void t_TLEConstants::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "class_", make_descriptor(TLEConstants::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "wrapfn_", make_descriptor(t_TLEConstants::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "boxfn_", make_descriptor(boxObject));
            env->getClass(TLEConstants::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "A3OVK2", make_descriptor(TLEConstants::A3OVK2));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C1L", make_descriptor(TLEConstants::C1L));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C1SS", make_descriptor(TLEConstants::C1SS));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "CK2", make_descriptor(TLEConstants::CK2));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "CK4", make_descriptor(TLEConstants::CK4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_2FASX4", make_descriptor(TLEConstants::C_2FASX4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_3FASX6", make_descriptor(TLEConstants::C_3FASX6));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_FASX2", make_descriptor(TLEConstants::C_FASX2));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_G22", make_descriptor(TLEConstants::C_G22));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_G32", make_descriptor(TLEConstants::C_G32));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_G44", make_descriptor(TLEConstants::C_G44));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_G52", make_descriptor(TLEConstants::C_G52));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_G54", make_descriptor(TLEConstants::C_G54));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "EARTH_RADIUS", make_descriptor(TLEConstants::EARTH_RADIUS));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "MINUTES_PER_DAY", make_descriptor(TLEConstants::MINUTES_PER_DAY));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "MU", make_descriptor(TLEConstants::MU));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "NORMALIZED_EQUATORIAL_RADIUS", make_descriptor(TLEConstants::NORMALIZED_EQUATORIAL_RADIUS));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ONE_THIRD", make_descriptor(TLEConstants::ONE_THIRD));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "Q22", make_descriptor(TLEConstants::Q22));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "Q31", make_descriptor(TLEConstants::Q31));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "Q33", make_descriptor(TLEConstants::Q33));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "QOMS2T", make_descriptor(TLEConstants::QOMS2T));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ROOT22", make_descriptor(TLEConstants::ROOT22));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ROOT32", make_descriptor(TLEConstants::ROOT32));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ROOT44", make_descriptor(TLEConstants::ROOT44));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ROOT52", make_descriptor(TLEConstants::ROOT52));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ROOT54", make_descriptor(TLEConstants::ROOT54));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S", make_descriptor(TLEConstants::S));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_2FASX4", make_descriptor(TLEConstants::S_2FASX4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_3FASX6", make_descriptor(TLEConstants::S_3FASX6));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_FASX2", make_descriptor(TLEConstants::S_FASX2));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_G22", make_descriptor(TLEConstants::S_G22));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_G32", make_descriptor(TLEConstants::S_G32));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_G44", make_descriptor(TLEConstants::S_G44));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_G52", make_descriptor(TLEConstants::S_G52));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_G54", make_descriptor(TLEConstants::S_G54));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "THDT", make_descriptor(TLEConstants::THDT));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "TWO_THIRD", make_descriptor(TLEConstants::TWO_THIRD));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "XJ2", make_descriptor(TLEConstants::XJ2));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "XJ3", make_descriptor(TLEConstants::XJ3));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "XJ4", make_descriptor(TLEConstants::XJ4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "XKE", make_descriptor(TLEConstants::XKE));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ZEL", make_descriptor(TLEConstants::ZEL));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ZES", make_descriptor(TLEConstants::ZES));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ZNL", make_descriptor(TLEConstants::ZNL));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ZNS", make_descriptor(TLEConstants::ZNS));
          }

          static PyObject *t_TLEConstants_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TLEConstants::initializeClass, 1)))
              return NULL;
            return t_TLEConstants::wrap_Object(TLEConstants(((t_TLEConstants *) arg)->object.this$));
          }
          static PyObject *t_TLEConstants_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TLEConstants::initializeClass, 0))
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
#include "org/hipparchus/distribution/IntegerDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {

      ::java::lang::Class *IntegerDistribution::class$ = NULL;
      jmethodID *IntegerDistribution::mids$ = NULL;
      bool IntegerDistribution::live$ = false;

      jclass IntegerDistribution::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/distribution/IntegerDistribution");

          mids$ = new jmethodID[max_mid];
          mids$[mid_cumulativeProbability_69cfb132c661aca4] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
          mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
          mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
          mids$[mid_getSupportLowerBound_412668abc8d889e9] = env->getMethodID(cls, "getSupportLowerBound", "()I");
          mids$[mid_getSupportUpperBound_412668abc8d889e9] = env->getMethodID(cls, "getSupportUpperBound", "()I");
          mids$[mid_inverseCumulativeProbability_abbeb9db7144ca23] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)I");
          mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");
          mids$[mid_logProbability_69cfb132c661aca4] = env->getMethodID(cls, "logProbability", "(I)D");
          mids$[mid_probability_69cfb132c661aca4] = env->getMethodID(cls, "probability", "(I)D");
          mids$[mid_probability_21b81d54c06b64b0] = env->getMethodID(cls, "probability", "(II)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble IntegerDistribution::cumulativeProbability(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_69cfb132c661aca4], a0);
      }

      jdouble IntegerDistribution::getNumericalMean() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
      }

      jdouble IntegerDistribution::getNumericalVariance() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
      }

      jint IntegerDistribution::getSupportLowerBound() const
      {
        return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_412668abc8d889e9]);
      }

      jint IntegerDistribution::getSupportUpperBound() const
      {
        return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_412668abc8d889e9]);
      }

      jint IntegerDistribution::inverseCumulativeProbability(jdouble a0) const
      {
        return env->callIntMethod(this$, mids$[mid_inverseCumulativeProbability_abbeb9db7144ca23], a0);
      }

      jboolean IntegerDistribution::isSupportConnected() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
      }

      jdouble IntegerDistribution::logProbability(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_logProbability_69cfb132c661aca4], a0);
      }

      jdouble IntegerDistribution::probability(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_probability_69cfb132c661aca4], a0);
      }

      jdouble IntegerDistribution::probability(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_probability_21b81d54c06b64b0], a0, a1);
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
      static PyObject *t_IntegerDistribution_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntegerDistribution_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntegerDistribution_cumulativeProbability(t_IntegerDistribution *self, PyObject *arg);
      static PyObject *t_IntegerDistribution_getNumericalMean(t_IntegerDistribution *self);
      static PyObject *t_IntegerDistribution_getNumericalVariance(t_IntegerDistribution *self);
      static PyObject *t_IntegerDistribution_getSupportLowerBound(t_IntegerDistribution *self);
      static PyObject *t_IntegerDistribution_getSupportUpperBound(t_IntegerDistribution *self);
      static PyObject *t_IntegerDistribution_inverseCumulativeProbability(t_IntegerDistribution *self, PyObject *arg);
      static PyObject *t_IntegerDistribution_isSupportConnected(t_IntegerDistribution *self);
      static PyObject *t_IntegerDistribution_logProbability(t_IntegerDistribution *self, PyObject *arg);
      static PyObject *t_IntegerDistribution_probability(t_IntegerDistribution *self, PyObject *args);
      static PyObject *t_IntegerDistribution_get__numericalMean(t_IntegerDistribution *self, void *data);
      static PyObject *t_IntegerDistribution_get__numericalVariance(t_IntegerDistribution *self, void *data);
      static PyObject *t_IntegerDistribution_get__supportConnected(t_IntegerDistribution *self, void *data);
      static PyObject *t_IntegerDistribution_get__supportLowerBound(t_IntegerDistribution *self, void *data);
      static PyObject *t_IntegerDistribution_get__supportUpperBound(t_IntegerDistribution *self, void *data);
      static PyGetSetDef t_IntegerDistribution__fields_[] = {
        DECLARE_GET_FIELD(t_IntegerDistribution, numericalMean),
        DECLARE_GET_FIELD(t_IntegerDistribution, numericalVariance),
        DECLARE_GET_FIELD(t_IntegerDistribution, supportConnected),
        DECLARE_GET_FIELD(t_IntegerDistribution, supportLowerBound),
        DECLARE_GET_FIELD(t_IntegerDistribution, supportUpperBound),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IntegerDistribution__methods_[] = {
        DECLARE_METHOD(t_IntegerDistribution, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntegerDistribution, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntegerDistribution, cumulativeProbability, METH_O),
        DECLARE_METHOD(t_IntegerDistribution, getNumericalMean, METH_NOARGS),
        DECLARE_METHOD(t_IntegerDistribution, getNumericalVariance, METH_NOARGS),
        DECLARE_METHOD(t_IntegerDistribution, getSupportLowerBound, METH_NOARGS),
        DECLARE_METHOD(t_IntegerDistribution, getSupportUpperBound, METH_NOARGS),
        DECLARE_METHOD(t_IntegerDistribution, inverseCumulativeProbability, METH_O),
        DECLARE_METHOD(t_IntegerDistribution, isSupportConnected, METH_NOARGS),
        DECLARE_METHOD(t_IntegerDistribution, logProbability, METH_O),
        DECLARE_METHOD(t_IntegerDistribution, probability, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IntegerDistribution)[] = {
        { Py_tp_methods, t_IntegerDistribution__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_IntegerDistribution__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IntegerDistribution)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IntegerDistribution, t_IntegerDistribution, IntegerDistribution);

      void t_IntegerDistribution::install(PyObject *module)
      {
        installType(&PY_TYPE(IntegerDistribution), &PY_TYPE_DEF(IntegerDistribution), module, "IntegerDistribution", 0);
      }

      void t_IntegerDistribution::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerDistribution), "class_", make_descriptor(IntegerDistribution::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerDistribution), "wrapfn_", make_descriptor(t_IntegerDistribution::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerDistribution), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IntegerDistribution_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IntegerDistribution::initializeClass, 1)))
          return NULL;
        return t_IntegerDistribution::wrap_Object(IntegerDistribution(((t_IntegerDistribution *) arg)->object.this$));
      }
      static PyObject *t_IntegerDistribution_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IntegerDistribution::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IntegerDistribution_cumulativeProbability(t_IntegerDistribution *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.cumulativeProbability(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "cumulativeProbability", arg);
        return NULL;
      }

      static PyObject *t_IntegerDistribution_getNumericalMean(t_IntegerDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNumericalMean());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_IntegerDistribution_getNumericalVariance(t_IntegerDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNumericalVariance());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_IntegerDistribution_getSupportLowerBound(t_IntegerDistribution *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSupportLowerBound());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_IntegerDistribution_getSupportUpperBound(t_IntegerDistribution *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSupportUpperBound());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_IntegerDistribution_inverseCumulativeProbability(t_IntegerDistribution *self, PyObject *arg)
      {
        jdouble a0;
        jint result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "inverseCumulativeProbability", arg);
        return NULL;
      }

      static PyObject *t_IntegerDistribution_isSupportConnected(t_IntegerDistribution *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSupportConnected());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_IntegerDistribution_logProbability(t_IntegerDistribution *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.logProbability(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "logProbability", arg);
        return NULL;
      }

      static PyObject *t_IntegerDistribution_probability(t_IntegerDistribution *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            jdouble result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.probability(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 2:
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.probability(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "probability", args);
        return NULL;
      }

      static PyObject *t_IntegerDistribution_get__numericalMean(t_IntegerDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNumericalMean());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_IntegerDistribution_get__numericalVariance(t_IntegerDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNumericalVariance());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_IntegerDistribution_get__supportConnected(t_IntegerDistribution *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSupportConnected());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_IntegerDistribution_get__supportLowerBound(t_IntegerDistribution *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSupportLowerBound());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_IntegerDistribution_get__supportUpperBound(t_IntegerDistribution *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSupportUpperBound());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/UpdatableFrame.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *UpdatableFrame::class$ = NULL;
      jmethodID *UpdatableFrame::mids$ = NULL;
      bool UpdatableFrame::live$ = false;

      jclass UpdatableFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/UpdatableFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d8cb329c586d12d2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Ljava/lang/String;)V");
          mids$[mid_init$_616b39805dc3fd53] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Ljava/lang/String;Z)V");
          mids$[mid_updateTransform_631fbf5c95997550] = env->getMethodID(cls, "updateTransform", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Lorg/orekit/time/AbsoluteDate;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UpdatableFrame::UpdatableFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Transform & a1, const ::java::lang::String & a2) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_d8cb329c586d12d2, a0.this$, a1.this$, a2.this$)) {}

      UpdatableFrame::UpdatableFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Transform & a1, const ::java::lang::String & a2, jboolean a3) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_616b39805dc3fd53, a0.this$, a1.this$, a2.this$, a3)) {}

      void UpdatableFrame::updateTransform(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::frames::Transform & a2, const ::org::orekit::time::AbsoluteDate & a3) const
      {
        env->callVoidMethod(this$, mids$[mid_updateTransform_631fbf5c95997550], a0.this$, a1.this$, a2.this$, a3.this$);
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
      static PyObject *t_UpdatableFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UpdatableFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UpdatableFrame_init_(t_UpdatableFrame *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UpdatableFrame_updateTransform(t_UpdatableFrame *self, PyObject *args);

      static PyMethodDef t_UpdatableFrame__methods_[] = {
        DECLARE_METHOD(t_UpdatableFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UpdatableFrame, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UpdatableFrame, updateTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UpdatableFrame)[] = {
        { Py_tp_methods, t_UpdatableFrame__methods_ },
        { Py_tp_init, (void *) t_UpdatableFrame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UpdatableFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(UpdatableFrame, t_UpdatableFrame, UpdatableFrame);

      void t_UpdatableFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(UpdatableFrame), &PY_TYPE_DEF(UpdatableFrame), module, "UpdatableFrame", 0);
      }

      void t_UpdatableFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableFrame), "class_", make_descriptor(UpdatableFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableFrame), "wrapfn_", make_descriptor(t_UpdatableFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UpdatableFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UpdatableFrame::initializeClass, 1)))
          return NULL;
        return t_UpdatableFrame::wrap_Object(UpdatableFrame(((t_UpdatableFrame *) arg)->object.this$));
      }
      static PyObject *t_UpdatableFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UpdatableFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UpdatableFrame_init_(t_UpdatableFrame *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Transform a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            UpdatableFrame object((jobject) NULL);

            if (!parseArgs(args, "kks", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = UpdatableFrame(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Transform a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            jboolean a3;
            UpdatableFrame object((jobject) NULL);

            if (!parseArgs(args, "kksZ", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = UpdatableFrame(a0, a1, a2, a3));
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

      static PyObject *t_UpdatableFrame_updateTransform(t_UpdatableFrame *self, PyObject *args)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::frames::Transform a2((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a3((jobject) NULL);

        if (!parseArgs(args, "kkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(self->object.updateTransform(a0, a1, a2, a3));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "updateTransform", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {

    ::java::lang::Class *CalculusFieldElement::class$ = NULL;
    jmethodID *CalculusFieldElement::mids$ = NULL;
    bool CalculusFieldElement::live$ = false;

    jclass CalculusFieldElement::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("org/hipparchus/CalculusFieldElement");

        mids$ = new jmethodID[max_mid];
        mids$[mid_abs_ce0470d468f80a56] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_acos_ce0470d468f80a56] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_acosh_ce0470d468f80a56] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_add_b29830b726a52a07] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_asin_ce0470d468f80a56] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_asinh_ce0470d468f80a56] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_atan_ce0470d468f80a56] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_atan2_a6cf95a93b365fc9] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_atanh_ce0470d468f80a56] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_cbrt_ce0470d468f80a56] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_ceil_ce0470d468f80a56] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_copySign_b29830b726a52a07] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_copySign_a6cf95a93b365fc9] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_cos_ce0470d468f80a56] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_cosh_ce0470d468f80a56] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_divide_b29830b726a52a07] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_exp_ce0470d468f80a56] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_expm1_ce0470d468f80a56] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_floor_ce0470d468f80a56] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_getExponent_412668abc8d889e9] = env->getMethodID(cls, "getExponent", "()I");
        mids$[mid_getPi_ce0470d468f80a56] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_hypot_a6cf95a93b365fc9] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_isFinite_89b302893bdbe1f1] = env->getMethodID(cls, "isFinite", "()Z");
        mids$[mid_isInfinite_89b302893bdbe1f1] = env->getMethodID(cls, "isInfinite", "()Z");
        mids$[mid_isNaN_89b302893bdbe1f1] = env->getMethodID(cls, "isNaN", "()Z");
        mids$[mid_linearCombination_756695c84a504e59] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_e7be2922cadf37bc] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/FieldElement;[Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_a34eba6491407903] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_98abfed322dba58f] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_7d906108163a0c42] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_17883d83f40161c7] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_43dc2ec66058007f] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_e31b03a294074512] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_log_ce0470d468f80a56] = env->getMethodID(cls, "log", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_log10_ce0470d468f80a56] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_log1p_ce0470d468f80a56] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_multiply_b29830b726a52a07] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_newInstance_b29830b726a52a07] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_norm_557b8123390d8d0c] = env->getMethodID(cls, "norm", "()D");
        mids$[mid_pow_b29830b726a52a07] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_pow_d40ba91356b6a058] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/FieldElement;");
        mids$[mid_pow_a6cf95a93b365fc9] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_reciprocal_ce0470d468f80a56] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_remainder_b29830b726a52a07] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_remainder_a6cf95a93b365fc9] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_rint_ce0470d468f80a56] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_rootN_d40ba91356b6a058] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/FieldElement;");
        mids$[mid_round_9e26256fb0d384a2] = env->getMethodID(cls, "round", "()J");
        mids$[mid_scalb_d40ba91356b6a058] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/FieldElement;");
        mids$[mid_sign_ce0470d468f80a56] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_sin_ce0470d468f80a56] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_sinCos_5efdd92d175db117] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
        mids$[mid_sinh_ce0470d468f80a56] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_sinhCosh_e5a948cfec461975] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
        mids$[mid_sqrt_ce0470d468f80a56] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_subtract_b29830b726a52a07] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_tan_ce0470d468f80a56] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_tanh_ce0470d468f80a56] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_toDegrees_ce0470d468f80a56] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_toRadians_ce0470d468f80a56] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_ulp_ce0470d468f80a56] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/FieldElement;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::abs() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_abs_ce0470d468f80a56]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::acos() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_acos_ce0470d468f80a56]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::acosh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_acosh_ce0470d468f80a56]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::add(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_add_b29830b726a52a07], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::asin() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_asin_ce0470d468f80a56]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::asinh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_asinh_ce0470d468f80a56]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::atan() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_atan_ce0470d468f80a56]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::atan2(const ::org::hipparchus::FieldElement & a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_atan2_a6cf95a93b365fc9], a0.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::atanh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_atanh_ce0470d468f80a56]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::cbrt() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_cbrt_ce0470d468f80a56]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::ceil() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_ceil_ce0470d468f80a56]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::copySign(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_copySign_b29830b726a52a07], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::copySign(const ::org::hipparchus::FieldElement & a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_copySign_a6cf95a93b365fc9], a0.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::cos() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_cos_ce0470d468f80a56]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::cosh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_cosh_ce0470d468f80a56]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::divide(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_divide_b29830b726a52a07], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::exp() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_exp_ce0470d468f80a56]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::expm1() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_expm1_ce0470d468f80a56]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::floor() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_floor_ce0470d468f80a56]));
    }

    jint CalculusFieldElement::getExponent() const
    {
      return env->callIntMethod(this$, mids$[mid_getExponent_412668abc8d889e9]);
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::getPi() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getPi_ce0470d468f80a56]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::hypot(const ::org::hipparchus::FieldElement & a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_hypot_a6cf95a93b365fc9], a0.this$));
    }

    jboolean CalculusFieldElement::isFinite() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isFinite_89b302893bdbe1f1]);
    }

    jboolean CalculusFieldElement::isInfinite() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInfinite_89b302893bdbe1f1]);
    }

    jboolean CalculusFieldElement::isNaN() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNaN_89b302893bdbe1f1]);
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(const JArray< jdouble > & a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_756695c84a504e59], a0.this$, a1.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(const JArray< ::org::hipparchus::FieldElement > & a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_e7be2922cadf37bc], a0.this$, a1.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(jdouble a0, const ::org::hipparchus::FieldElement & a1, jdouble a2, const ::org::hipparchus::FieldElement & a3) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_a34eba6491407903], a0, a1.this$, a2, a3.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(const ::org::hipparchus::FieldElement & a0, const ::org::hipparchus::FieldElement & a1, const ::org::hipparchus::FieldElement & a2, const ::org::hipparchus::FieldElement & a3) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_98abfed322dba58f], a0.this$, a1.this$, a2.this$, a3.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(jdouble a0, const ::org::hipparchus::FieldElement & a1, jdouble a2, const ::org::hipparchus::FieldElement & a3, jdouble a4, const ::org::hipparchus::FieldElement & a5) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_7d906108163a0c42], a0, a1.this$, a2, a3.this$, a4, a5.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(const ::org::hipparchus::FieldElement & a0, const ::org::hipparchus::FieldElement & a1, const ::org::hipparchus::FieldElement & a2, const ::org::hipparchus::FieldElement & a3, const ::org::hipparchus::FieldElement & a4, const ::org::hipparchus::FieldElement & a5) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_17883d83f40161c7], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(jdouble a0, const ::org::hipparchus::FieldElement & a1, jdouble a2, const ::org::hipparchus::FieldElement & a3, jdouble a4, const ::org::hipparchus::FieldElement & a5, jdouble a6, const ::org::hipparchus::FieldElement & a7) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_43dc2ec66058007f], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(const ::org::hipparchus::FieldElement & a0, const ::org::hipparchus::FieldElement & a1, const ::org::hipparchus::FieldElement & a2, const ::org::hipparchus::FieldElement & a3, const ::org::hipparchus::FieldElement & a4, const ::org::hipparchus::FieldElement & a5, const ::org::hipparchus::FieldElement & a6, const ::org::hipparchus::FieldElement & a7) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_e31b03a294074512], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::log() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_log_ce0470d468f80a56]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::log10() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_log10_ce0470d468f80a56]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::log1p() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_log1p_ce0470d468f80a56]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::multiply(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_multiply_b29830b726a52a07], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::newInstance(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_newInstance_b29830b726a52a07], a0));
    }

    jdouble CalculusFieldElement::norm() const
    {
      return env->callDoubleMethod(this$, mids$[mid_norm_557b8123390d8d0c]);
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::pow(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_pow_b29830b726a52a07], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::pow(jint a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_pow_d40ba91356b6a058], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::pow(const ::org::hipparchus::FieldElement & a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_pow_a6cf95a93b365fc9], a0.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::reciprocal() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_reciprocal_ce0470d468f80a56]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::remainder(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_remainder_b29830b726a52a07], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::remainder(const ::org::hipparchus::FieldElement & a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_remainder_a6cf95a93b365fc9], a0.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::rint() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_rint_ce0470d468f80a56]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::rootN(jint a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_rootN_d40ba91356b6a058], a0));
    }

    jlong CalculusFieldElement::round() const
    {
      return env->callLongMethod(this$, mids$[mid_round_9e26256fb0d384a2]);
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::scalb(jint a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_scalb_d40ba91356b6a058], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::sign() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_sign_ce0470d468f80a56]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::sin() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_sin_ce0470d468f80a56]));
    }

    ::org::hipparchus::util::FieldSinCos CalculusFieldElement::sinCos() const
    {
      return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_5efdd92d175db117]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::sinh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_sinh_ce0470d468f80a56]));
    }

    ::org::hipparchus::util::FieldSinhCosh CalculusFieldElement::sinhCosh() const
    {
      return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_e5a948cfec461975]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::sqrt() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_sqrt_ce0470d468f80a56]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::subtract(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_subtract_b29830b726a52a07], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::tan() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_tan_ce0470d468f80a56]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::tanh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_tanh_ce0470d468f80a56]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::toDegrees() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_toDegrees_ce0470d468f80a56]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::toRadians() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_toRadians_ce0470d468f80a56]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::ulp() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_ulp_ce0470d468f80a56]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    static PyObject *t_CalculusFieldElement_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_CalculusFieldElement_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_CalculusFieldElement_of_(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_abs(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_acos(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_acosh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_add(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_asin(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_asinh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_atan(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_atan2(t_CalculusFieldElement *self, PyObject *arg);
    static PyObject *t_CalculusFieldElement_atanh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_cbrt(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_ceil(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_copySign(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_cos(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_cosh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_divide(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_exp(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_expm1(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_floor(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_getExponent(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_getPi(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_hypot(t_CalculusFieldElement *self, PyObject *arg);
    static PyObject *t_CalculusFieldElement_isFinite(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_isInfinite(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_isNaN(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_linearCombination(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_log(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_log10(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_log1p(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_multiply(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_newInstance(t_CalculusFieldElement *self, PyObject *arg);
    static PyObject *t_CalculusFieldElement_norm(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_pow(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_reciprocal(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_remainder(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_rint(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_rootN(t_CalculusFieldElement *self, PyObject *arg);
    static PyObject *t_CalculusFieldElement_round(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_scalb(t_CalculusFieldElement *self, PyObject *arg);
    static PyObject *t_CalculusFieldElement_sign(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_sin(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_sinCos(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_sinh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_sinhCosh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_sqrt(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_subtract(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_tan(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_tanh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_toDegrees(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_toRadians(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_ulp(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_get__exponent(t_CalculusFieldElement *self, void *data);
    static PyObject *t_CalculusFieldElement_get__finite(t_CalculusFieldElement *self, void *data);
    static PyObject *t_CalculusFieldElement_get__infinite(t_CalculusFieldElement *self, void *data);
    static PyObject *t_CalculusFieldElement_get__naN(t_CalculusFieldElement *self, void *data);
    static PyObject *t_CalculusFieldElement_get__pi(t_CalculusFieldElement *self, void *data);
    static PyObject *t_CalculusFieldElement_get__parameters_(t_CalculusFieldElement *self, void *data);
    static PyGetSetDef t_CalculusFieldElement__fields_[] = {
      DECLARE_GET_FIELD(t_CalculusFieldElement, exponent),
      DECLARE_GET_FIELD(t_CalculusFieldElement, finite),
      DECLARE_GET_FIELD(t_CalculusFieldElement, infinite),
      DECLARE_GET_FIELD(t_CalculusFieldElement, naN),
      DECLARE_GET_FIELD(t_CalculusFieldElement, pi),
      DECLARE_GET_FIELD(t_CalculusFieldElement, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_CalculusFieldElement__methods_[] = {
      DECLARE_METHOD(t_CalculusFieldElement, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_CalculusFieldElement, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_CalculusFieldElement, of_, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, abs, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, acos, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, acosh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, add, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, asin, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, asinh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, atan, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, atan2, METH_O),
      DECLARE_METHOD(t_CalculusFieldElement, atanh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, cbrt, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, ceil, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, copySign, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, cos, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, cosh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, divide, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, exp, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, expm1, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, floor, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, getExponent, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, getPi, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, hypot, METH_O),
      DECLARE_METHOD(t_CalculusFieldElement, isFinite, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, isInfinite, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, isNaN, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, linearCombination, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, log, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, log10, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, log1p, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, multiply, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, newInstance, METH_O),
      DECLARE_METHOD(t_CalculusFieldElement, norm, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, pow, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, reciprocal, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, remainder, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, rint, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, rootN, METH_O),
      DECLARE_METHOD(t_CalculusFieldElement, round, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, scalb, METH_O),
      DECLARE_METHOD(t_CalculusFieldElement, sign, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, sin, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, sinCos, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, sinh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, sinhCosh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, sqrt, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, subtract, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, tan, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, tanh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, toDegrees, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, toRadians, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, ulp, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(CalculusFieldElement)[] = {
      { Py_tp_methods, t_CalculusFieldElement__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_CalculusFieldElement__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(CalculusFieldElement)[] = {
      &PY_TYPE_DEF(::org::hipparchus::FieldElement),
      NULL
    };

    DEFINE_TYPE(CalculusFieldElement, t_CalculusFieldElement, CalculusFieldElement);
    PyObject *t_CalculusFieldElement::wrap_Object(const CalculusFieldElement& object, PyTypeObject *p0)
    {
      PyObject *obj = t_CalculusFieldElement::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_CalculusFieldElement *self = (t_CalculusFieldElement *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_CalculusFieldElement::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_CalculusFieldElement::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_CalculusFieldElement *self = (t_CalculusFieldElement *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_CalculusFieldElement::install(PyObject *module)
    {
      installType(&PY_TYPE(CalculusFieldElement), &PY_TYPE_DEF(CalculusFieldElement), module, "CalculusFieldElement", 0);
    }

    void t_CalculusFieldElement::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldElement), "class_", make_descriptor(CalculusFieldElement::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldElement), "wrapfn_", make_descriptor(t_CalculusFieldElement::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldElement), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_CalculusFieldElement_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, CalculusFieldElement::initializeClass, 1)))
        return NULL;
      return t_CalculusFieldElement::wrap_Object(CalculusFieldElement(((t_CalculusFieldElement *) arg)->object.this$));
    }
    static PyObject *t_CalculusFieldElement_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, CalculusFieldElement::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_CalculusFieldElement_of_(t_CalculusFieldElement *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_CalculusFieldElement_abs(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.abs());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_acos(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.acos());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_acosh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.acosh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_add(t_CalculusFieldElement *self, PyObject *args)
    {
      jdouble a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      return callSuper(PY_TYPE(CalculusFieldElement), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_CalculusFieldElement_asin(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.asin());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_asinh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.asinh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_atan(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.atan());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_atan2(t_CalculusFieldElement *self, PyObject *arg)
    {
      ::org::hipparchus::FieldElement a0((jobject) NULL);
      PyTypeObject **p0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
      {
        OBJ_CALL(result = self->object.atan2(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "atan2", arg);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_atanh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.atanh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_cbrt(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.cbrt());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_ceil(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.ceil());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_copySign(t_CalculusFieldElement *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.copySign(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.copySign(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "copySign", args);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_cos(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.cos());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_cosh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.cosh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_divide(t_CalculusFieldElement *self, PyObject *args)
    {
      jdouble a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = self->object.divide(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      return callSuper(PY_TYPE(CalculusFieldElement), (PyObject *) self, "divide", args, 2);
    }

    static PyObject *t_CalculusFieldElement_exp(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.exp());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_expm1(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.expm1());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_floor(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.floor());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_getExponent(t_CalculusFieldElement *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getExponent());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_CalculusFieldElement_getPi(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.getPi());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_hypot(t_CalculusFieldElement *self, PyObject *arg)
    {
      ::org::hipparchus::FieldElement a0((jobject) NULL);
      PyTypeObject **p0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
      {
        OBJ_CALL(result = self->object.hypot(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "hypot", arg);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_isFinite(t_CalculusFieldElement *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isFinite());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_CalculusFieldElement_isInfinite(t_CalculusFieldElement *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isInfinite());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_CalculusFieldElement_isNaN(t_CalculusFieldElement *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isNaN());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_CalculusFieldElement_linearCombination(t_CalculusFieldElement *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "[D[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "[K[K", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "DKDK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::FieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "KKKK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        break;
       case 6:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          jdouble a4;
          ::org::hipparchus::FieldElement a5((jobject) NULL);
          PyTypeObject **p5;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "DKDKDK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::FieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::FieldElement a4((jobject) NULL);
          PyTypeObject **p4;
          ::org::hipparchus::FieldElement a5((jobject) NULL);
          PyTypeObject **p5;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "KKKKKK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_FieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        break;
       case 8:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          jdouble a4;
          ::org::hipparchus::FieldElement a5((jobject) NULL);
          PyTypeObject **p5;
          jdouble a6;
          ::org::hipparchus::FieldElement a7((jobject) NULL);
          PyTypeObject **p7;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "DKDKDKDK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_FieldElement::parameters_, &a6, &a7, &p7, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::FieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::FieldElement a4((jobject) NULL);
          PyTypeObject **p4;
          ::org::hipparchus::FieldElement a5((jobject) NULL);
          PyTypeObject **p5;
          ::org::hipparchus::FieldElement a6((jobject) NULL);
          PyTypeObject **p6;
          ::org::hipparchus::FieldElement a7((jobject) NULL);
          PyTypeObject **p7;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "KKKKKKKK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_FieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_FieldElement::parameters_, &a6, &p6, ::org::hipparchus::t_FieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_log(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.log());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_log10(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.log10());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_log1p(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.log1p());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_multiply(t_CalculusFieldElement *self, PyObject *args)
    {
      jdouble a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = self->object.multiply(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      return callSuper(PY_TYPE(CalculusFieldElement), (PyObject *) self, "multiply", args, 2);
    }

    static PyObject *t_CalculusFieldElement_newInstance(t_CalculusFieldElement *self, PyObject *arg)
    {
      jdouble a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = self->object.newInstance(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_norm(t_CalculusFieldElement *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.norm());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_CalculusFieldElement_pow(t_CalculusFieldElement *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.pow(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          jint a0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.pow(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.pow(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "pow", args);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_reciprocal(t_CalculusFieldElement *self, PyObject *args)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.reciprocal());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      return callSuper(PY_TYPE(CalculusFieldElement), (PyObject *) self, "reciprocal", args, 2);
    }

    static PyObject *t_CalculusFieldElement_remainder(t_CalculusFieldElement *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.remainder(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.remainder(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "remainder", args);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_rint(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.rint());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_rootN(t_CalculusFieldElement *self, PyObject *arg)
    {
      jint a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.rootN(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "rootN", arg);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_round(t_CalculusFieldElement *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.round());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_CalculusFieldElement_scalb(t_CalculusFieldElement *self, PyObject *arg)
    {
      jint a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.scalb(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "scalb", arg);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_sign(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.sign());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_sin(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.sin());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_sinCos(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
      OBJ_CALL(result = self->object.sinCos());
      return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_CalculusFieldElement_sinh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.sinh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_sinhCosh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
      OBJ_CALL(result = self->object.sinhCosh());
      return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_CalculusFieldElement_sqrt(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.sqrt());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_subtract(t_CalculusFieldElement *self, PyObject *args)
    {
      jdouble a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = self->object.subtract(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      return callSuper(PY_TYPE(CalculusFieldElement), (PyObject *) self, "subtract", args, 2);
    }

    static PyObject *t_CalculusFieldElement_tan(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.tan());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_tanh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.tanh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_toDegrees(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.toDegrees());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_toRadians(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.toRadians());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_ulp(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.ulp());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }
    static PyObject *t_CalculusFieldElement_get__parameters_(t_CalculusFieldElement *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_CalculusFieldElement_get__exponent(t_CalculusFieldElement *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getExponent());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_CalculusFieldElement_get__finite(t_CalculusFieldElement *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isFinite());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_CalculusFieldElement_get__infinite(t_CalculusFieldElement *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isInfinite());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_CalculusFieldElement_get__naN(t_CalculusFieldElement *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isNaN());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_CalculusFieldElement_get__pi(t_CalculusFieldElement *self, void *data)
    {
      ::org::hipparchus::FieldElement value((jobject) NULL);
      OBJ_CALL(value = self->object.getPi());
      return ::org::hipparchus::t_FieldElement::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "java/util/Map.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldShortPeriodTerms::class$ = NULL;
            jmethodID *FieldShortPeriodTerms::mids$ = NULL;
            bool FieldShortPeriodTerms::live$ = false;

            jclass FieldShortPeriodTerms::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getCoefficients_34654a764ba0e833] = env->getMethodID(cls, "getCoefficients", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Set;)Ljava/util/Map;");
                mids$[mid_getCoefficientsKeyPrefix_3cffd47377eca18a] = env->getMethodID(cls, "getCoefficientsKeyPrefix", "()Ljava/lang/String;");
                mids$[mid_value_e1d65e2f6c9d2422] = env->getMethodID(cls, "value", "(Lorg/orekit/orbits/FieldOrbit;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::util::Map FieldShortPeriodTerms::getCoefficients(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Set & a1) const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getCoefficients_34654a764ba0e833], a0.this$, a1.this$));
            }

            ::java::lang::String FieldShortPeriodTerms::getCoefficientsKeyPrefix() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCoefficientsKeyPrefix_3cffd47377eca18a]));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > FieldShortPeriodTerms::value(const ::org::orekit::orbits::FieldOrbit & a0) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_e1d65e2f6c9d2422], a0.this$));
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
            static PyObject *t_FieldShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldShortPeriodTerms_of_(t_FieldShortPeriodTerms *self, PyObject *args);
            static PyObject *t_FieldShortPeriodTerms_getCoefficients(t_FieldShortPeriodTerms *self, PyObject *args);
            static PyObject *t_FieldShortPeriodTerms_getCoefficientsKeyPrefix(t_FieldShortPeriodTerms *self);
            static PyObject *t_FieldShortPeriodTerms_value(t_FieldShortPeriodTerms *self, PyObject *arg);
            static PyObject *t_FieldShortPeriodTerms_get__coefficientsKeyPrefix(t_FieldShortPeriodTerms *self, void *data);
            static PyObject *t_FieldShortPeriodTerms_get__parameters_(t_FieldShortPeriodTerms *self, void *data);
            static PyGetSetDef t_FieldShortPeriodTerms__fields_[] = {
              DECLARE_GET_FIELD(t_FieldShortPeriodTerms, coefficientsKeyPrefix),
              DECLARE_GET_FIELD(t_FieldShortPeriodTerms, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldShortPeriodTerms__methods_[] = {
              DECLARE_METHOD(t_FieldShortPeriodTerms, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldShortPeriodTerms, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldShortPeriodTerms, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldShortPeriodTerms, getCoefficients, METH_VARARGS),
              DECLARE_METHOD(t_FieldShortPeriodTerms, getCoefficientsKeyPrefix, METH_NOARGS),
              DECLARE_METHOD(t_FieldShortPeriodTerms, value, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldShortPeriodTerms)[] = {
              { Py_tp_methods, t_FieldShortPeriodTerms__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldShortPeriodTerms__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldShortPeriodTerms)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldShortPeriodTerms, t_FieldShortPeriodTerms, FieldShortPeriodTerms);
            PyObject *t_FieldShortPeriodTerms::wrap_Object(const FieldShortPeriodTerms& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldShortPeriodTerms::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldShortPeriodTerms *self = (t_FieldShortPeriodTerms *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldShortPeriodTerms::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldShortPeriodTerms::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldShortPeriodTerms *self = (t_FieldShortPeriodTerms *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldShortPeriodTerms::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldShortPeriodTerms), &PY_TYPE_DEF(FieldShortPeriodTerms), module, "FieldShortPeriodTerms", 0);
            }

            void t_FieldShortPeriodTerms::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortPeriodTerms), "class_", make_descriptor(FieldShortPeriodTerms::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortPeriodTerms), "wrapfn_", make_descriptor(t_FieldShortPeriodTerms::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortPeriodTerms), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldShortPeriodTerms::initializeClass, 1)))
                return NULL;
              return t_FieldShortPeriodTerms::wrap_Object(FieldShortPeriodTerms(((t_FieldShortPeriodTerms *) arg)->object.this$));
            }
            static PyObject *t_FieldShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldShortPeriodTerms::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldShortPeriodTerms_of_(t_FieldShortPeriodTerms *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldShortPeriodTerms_getCoefficients(t_FieldShortPeriodTerms *self, PyObject *args)
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::Set a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::Map result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Set::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Set::parameters_))
              {
                OBJ_CALL(result = self->object.getCoefficients(a0, a1));
                return ::java::util::t_Map::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCoefficients", args);
              return NULL;
            }

            static PyObject *t_FieldShortPeriodTerms_getCoefficientsKeyPrefix(t_FieldShortPeriodTerms *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getCoefficientsKeyPrefix());
              return j2p(result);
            }

            static PyObject *t_FieldShortPeriodTerms_value(t_FieldShortPeriodTerms *self, PyObject *arg)
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }

              PyErr_SetArgsError((PyObject *) self, "value", arg);
              return NULL;
            }
            static PyObject *t_FieldShortPeriodTerms_get__parameters_(t_FieldShortPeriodTerms *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldShortPeriodTerms_get__coefficientsKeyPrefix(t_FieldShortPeriodTerms *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getCoefficientsKeyPrefix());
              return j2p(value);
            }
          }
        }
      }
    }
  }
}

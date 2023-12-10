#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$AnglesMeasurement.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$AnglesMeasurement::class$ = NULL;
        jmethodID *CRD$AnglesMeasurement::mids$ = NULL;
        bool CRD$AnglesMeasurement::live$ = false;

        jclass CRD$AnglesMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$AnglesMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_630e84c09ee04cf2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDIIZDD)V");
            mids$[mid_getAzimuth_456d9a2f64d6b28d] = env->getMethodID(cls, "getAzimuth", "()D");
            mids$[mid_getAzimuthRate_456d9a2f64d6b28d] = env->getMethodID(cls, "getAzimuthRate", "()D");
            mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDirectionFlag_f2f64475e4580546] = env->getMethodID(cls, "getDirectionFlag", "()I");
            mids$[mid_getElevation_456d9a2f64d6b28d] = env->getMethodID(cls, "getElevation", "()D");
            mids$[mid_getElevationRate_456d9a2f64d6b28d] = env->getMethodID(cls, "getElevationRate", "()D");
            mids$[mid_getOriginIndicator_f2f64475e4580546] = env->getMethodID(cls, "getOriginIndicator", "()I");
            mids$[mid_isRefractionCorrected_e470b6d9e0d979db] = env->getMethodID(cls, "isRefractionCorrected", "()Z");
            mids$[mid_toCrdString_0090f7797e403f43] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$AnglesMeasurement::CRD$AnglesMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jint a3, jint a4, jboolean a5, jdouble a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_630e84c09ee04cf2, a0.this$, a1, a2, a3, a4, a5, a6, a7)) {}

        jdouble CRD$AnglesMeasurement::getAzimuth() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAzimuth_456d9a2f64d6b28d]);
        }

        jdouble CRD$AnglesMeasurement::getAzimuthRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAzimuthRate_456d9a2f64d6b28d]);
        }

        ::org::orekit::time::AbsoluteDate CRD$AnglesMeasurement::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
        }

        jint CRD$AnglesMeasurement::getDirectionFlag() const
        {
          return env->callIntMethod(this$, mids$[mid_getDirectionFlag_f2f64475e4580546]);
        }

        jdouble CRD$AnglesMeasurement::getElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_456d9a2f64d6b28d]);
        }

        jdouble CRD$AnglesMeasurement::getElevationRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevationRate_456d9a2f64d6b28d]);
        }

        jint CRD$AnglesMeasurement::getOriginIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getOriginIndicator_f2f64475e4580546]);
        }

        jboolean CRD$AnglesMeasurement::isRefractionCorrected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isRefractionCorrected_e470b6d9e0d979db]);
        }

        ::java::lang::String CRD$AnglesMeasurement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_0090f7797e403f43]));
        }

        ::java::lang::String CRD$AnglesMeasurement::toString() const
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
        static PyObject *t_CRD$AnglesMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$AnglesMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$AnglesMeasurement_init_(t_CRD$AnglesMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$AnglesMeasurement_getAzimuth(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_getAzimuthRate(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_getDate(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_getDirectionFlag(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_getElevation(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_getElevationRate(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_getOriginIndicator(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_isRefractionCorrected(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_toCrdString(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_toString(t_CRD$AnglesMeasurement *self, PyObject *args);
        static PyObject *t_CRD$AnglesMeasurement_get__azimuth(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__azimuthRate(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__date(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__directionFlag(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__elevation(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__elevationRate(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__originIndicator(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__refractionCorrected(t_CRD$AnglesMeasurement *self, void *data);
        static PyGetSetDef t_CRD$AnglesMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, azimuth),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, azimuthRate),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, date),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, directionFlag),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, elevation),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, elevationRate),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, originIndicator),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, refractionCorrected),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$AnglesMeasurement__methods_[] = {
          DECLARE_METHOD(t_CRD$AnglesMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getAzimuth, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getAzimuthRate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getDate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getDirectionFlag, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getElevation, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getElevationRate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getOriginIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, isRefractionCorrected, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, toCrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$AnglesMeasurement)[] = {
          { Py_tp_methods, t_CRD$AnglesMeasurement__methods_ },
          { Py_tp_init, (void *) t_CRD$AnglesMeasurement_init_ },
          { Py_tp_getset, t_CRD$AnglesMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$AnglesMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$AnglesMeasurement, t_CRD$AnglesMeasurement, CRD$AnglesMeasurement);

        void t_CRD$AnglesMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$AnglesMeasurement), &PY_TYPE_DEF(CRD$AnglesMeasurement), module, "CRD$AnglesMeasurement", 0);
        }

        void t_CRD$AnglesMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$AnglesMeasurement), "class_", make_descriptor(CRD$AnglesMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$AnglesMeasurement), "wrapfn_", make_descriptor(t_CRD$AnglesMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$AnglesMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$AnglesMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$AnglesMeasurement::initializeClass, 1)))
            return NULL;
          return t_CRD$AnglesMeasurement::wrap_Object(CRD$AnglesMeasurement(((t_CRD$AnglesMeasurement *) arg)->object.this$));
        }
        static PyObject *t_CRD$AnglesMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$AnglesMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$AnglesMeasurement_init_(t_CRD$AnglesMeasurement *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          jint a3;
          jint a4;
          jboolean a5;
          jdouble a6;
          jdouble a7;
          CRD$AnglesMeasurement object((jobject) NULL);

          if (!parseArgs(args, "kDDIIZDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            INT_CALL(object = CRD$AnglesMeasurement(a0, a1, a2, a3, a4, a5, a6, a7));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$AnglesMeasurement_getAzimuth(t_CRD$AnglesMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAzimuth());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$AnglesMeasurement_getAzimuthRate(t_CRD$AnglesMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAzimuthRate());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$AnglesMeasurement_getDate(t_CRD$AnglesMeasurement *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CRD$AnglesMeasurement_getDirectionFlag(t_CRD$AnglesMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDirectionFlag());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$AnglesMeasurement_getElevation(t_CRD$AnglesMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$AnglesMeasurement_getElevationRate(t_CRD$AnglesMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getElevationRate());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$AnglesMeasurement_getOriginIndicator(t_CRD$AnglesMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOriginIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$AnglesMeasurement_isRefractionCorrected(t_CRD$AnglesMeasurement *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isRefractionCorrected());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CRD$AnglesMeasurement_toCrdString(t_CRD$AnglesMeasurement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$AnglesMeasurement_toString(t_CRD$AnglesMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$AnglesMeasurement), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__azimuth(t_CRD$AnglesMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAzimuth());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__azimuthRate(t_CRD$AnglesMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAzimuthRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__date(t_CRD$AnglesMeasurement *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__directionFlag(t_CRD$AnglesMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDirectionFlag());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__elevation(t_CRD$AnglesMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__elevationRate(t_CRD$AnglesMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getElevationRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__originIndicator(t_CRD$AnglesMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOriginIndicator());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__refractionCorrected(t_CRD$AnglesMeasurement *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isRefractionCorrected());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3DFormat.h"
#include "java/lang/StringBuffer.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "java/util/Locale.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/text/ParsePosition.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3DFormat.h"
#include "java/lang/Class.h"
#include "java/text/FieldPosition.h"
#include "org/hipparchus/geometry/Vector.h"
#include "java/lang/String.h"
#include "java/text/NumberFormat.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Vector3DFormat::class$ = NULL;
          jmethodID *Vector3DFormat::mids$ = NULL;
          bool Vector3DFormat::live$ = false;

          jclass Vector3DFormat::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Vector3DFormat");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_695a782f9c7823f6] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
              mids$[mid_init$_de8316969b81209c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_3420ce131d6f9e7d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/text/NumberFormat;)V");
              mids$[mid_format_d63c028b54a2ec6c] = env->getMethodID(cls, "format", "(Lorg/hipparchus/geometry/Vector;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
              mids$[mid_getVector3DFormat_5e25d9301c64418c] = env->getStaticMethodID(cls, "getVector3DFormat", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3DFormat;");
              mids$[mid_getVector3DFormat_dbbf33444e6d3efe] = env->getStaticMethodID(cls, "getVector3DFormat", "(Ljava/util/Locale;)Lorg/hipparchus/geometry/euclidean/threed/Vector3DFormat;");
              mids$[mid_parse_251b0ea3618bb805] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_parse_c62f08069cf90afe] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector3DFormat::Vector3DFormat() : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          Vector3DFormat::Vector3DFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_695a782f9c7823f6, a0.this$)) {}

          Vector3DFormat::Vector3DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_de8316969b81209c, a0.this$, a1.this$, a2.this$)) {}

          Vector3DFormat::Vector3DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::text::NumberFormat & a3) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_3420ce131d6f9e7d, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::java::lang::StringBuffer Vector3DFormat::format(const ::org::hipparchus::geometry::Vector & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
          {
            return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_d63c028b54a2ec6c], a0.this$, a1.this$, a2.this$));
          }

          Vector3DFormat Vector3DFormat::getVector3DFormat()
          {
            jclass cls = env->getClass(initializeClass);
            return Vector3DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector3DFormat_5e25d9301c64418c]));
          }

          Vector3DFormat Vector3DFormat::getVector3DFormat(const ::java::util::Locale & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Vector3DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector3DFormat_dbbf33444e6d3efe], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Vector3DFormat::parse(const ::java::lang::String & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_parse_251b0ea3618bb805], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Vector3DFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_parse_c62f08069cf90afe], a0.this$, a1.this$));
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
          static PyObject *t_Vector3DFormat_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector3DFormat_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector3DFormat_of_(t_Vector3DFormat *self, PyObject *args);
          static int t_Vector3DFormat_init_(t_Vector3DFormat *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Vector3DFormat_format(t_Vector3DFormat *self, PyObject *args);
          static PyObject *t_Vector3DFormat_getVector3DFormat(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3DFormat_parse(t_Vector3DFormat *self, PyObject *args);
          static PyObject *t_Vector3DFormat_get__vector3DFormat(t_Vector3DFormat *self, void *data);
          static PyObject *t_Vector3DFormat_get__parameters_(t_Vector3DFormat *self, void *data);
          static PyGetSetDef t_Vector3DFormat__fields_[] = {
            DECLARE_GET_FIELD(t_Vector3DFormat, vector3DFormat),
            DECLARE_GET_FIELD(t_Vector3DFormat, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vector3DFormat__methods_[] = {
            DECLARE_METHOD(t_Vector3DFormat, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector3DFormat, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector3DFormat, of_, METH_VARARGS),
            DECLARE_METHOD(t_Vector3DFormat, format, METH_VARARGS),
            DECLARE_METHOD(t_Vector3DFormat, getVector3DFormat, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3DFormat, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vector3DFormat)[] = {
            { Py_tp_methods, t_Vector3DFormat__methods_ },
            { Py_tp_init, (void *) t_Vector3DFormat_init_ },
            { Py_tp_getset, t_Vector3DFormat__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vector3DFormat)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::VectorFormat),
            NULL
          };

          DEFINE_TYPE(Vector3DFormat, t_Vector3DFormat, Vector3DFormat);
          PyObject *t_Vector3DFormat::wrap_Object(const Vector3DFormat& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector3DFormat::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector3DFormat *self = (t_Vector3DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_Vector3DFormat::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector3DFormat::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector3DFormat *self = (t_Vector3DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_Vector3DFormat::install(PyObject *module)
          {
            installType(&PY_TYPE(Vector3DFormat), &PY_TYPE_DEF(Vector3DFormat), module, "Vector3DFormat", 0);
          }

          void t_Vector3DFormat::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3DFormat), "class_", make_descriptor(Vector3DFormat::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3DFormat), "wrapfn_", make_descriptor(t_Vector3DFormat::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3DFormat), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Vector3DFormat_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vector3DFormat::initializeClass, 1)))
              return NULL;
            return t_Vector3DFormat::wrap_Object(Vector3DFormat(((t_Vector3DFormat *) arg)->object.this$));
          }
          static PyObject *t_Vector3DFormat_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vector3DFormat::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Vector3DFormat_of_(t_Vector3DFormat *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Vector3DFormat_init_(t_Vector3DFormat *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector3DFormat object((jobject) NULL);

                INT_CALL(object = Vector3DFormat());
                self->object = object;
                self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                self->parameters[1] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D);
                break;
              }
             case 1:
              {
                ::java::text::NumberFormat a0((jobject) NULL);
                Vector3DFormat object((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  INT_CALL(object = Vector3DFormat(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                Vector3DFormat object((jobject) NULL);

                if (!parseArgs(args, "sss", &a0, &a1, &a2))
                {
                  INT_CALL(object = Vector3DFormat(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D);
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                ::java::text::NumberFormat a3((jobject) NULL);
                Vector3DFormat object((jobject) NULL);

                if (!parseArgs(args, "sssk", ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Vector3DFormat(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D);
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

          static PyObject *t_Vector3DFormat_format(t_Vector3DFormat *self, PyObject *args)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::geometry::Vector::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Vector3DFormat), (PyObject *) self, "format", args, 2);
          }

          static PyObject *t_Vector3DFormat_getVector3DFormat(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector3DFormat result((jobject) NULL);
                OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3DFormat::getVector3DFormat());
                return t_Vector3DFormat::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::util::Locale a0((jobject) NULL);
                Vector3DFormat result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3DFormat::getVector3DFormat(a0));
                  return t_Vector3DFormat::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "getVector3DFormat", args);
            return NULL;
          }

          static PyObject *t_Vector3DFormat_parse(t_Vector3DFormat *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::text::ParsePosition a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.parse(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(Vector3DFormat), (PyObject *) self, "parse", args, 2);
          }
          static PyObject *t_Vector3DFormat_get__parameters_(t_Vector3DFormat *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Vector3DFormat_get__vector3DFormat(t_Vector3DFormat *self, void *data)
          {
            Vector3DFormat value((jobject) NULL);
            OBJ_CALL(value = self->object.getVector3DFormat());
            return t_Vector3DFormat::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/StringReader.h"
#include "java/io/IOException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *StringReader::class$ = NULL;
    jmethodID *StringReader::mids$ = NULL;
    bool StringReader::live$ = false;

    jclass StringReader::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/StringReader");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_close_7ae3461a92a43152] = env->getMethodID(cls, "close", "()V");
        mids$[mid_mark_0a2a1ac2721c0336] = env->getMethodID(cls, "mark", "(I)V");
        mids$[mid_markSupported_e470b6d9e0d979db] = env->getMethodID(cls, "markSupported", "()Z");
        mids$[mid_read_f2f64475e4580546] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_a7dcb595f3e6fbfc] = env->getMethodID(cls, "read", "([CII)I");
        mids$[mid_ready_e470b6d9e0d979db] = env->getMethodID(cls, "ready", "()Z");
        mids$[mid_reset_7ae3461a92a43152] = env->getMethodID(cls, "reset", "()V");
        mids$[mid_skip_955f7541fca701ab] = env->getMethodID(cls, "skip", "(J)J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    StringReader::StringReader(const ::java::lang::String & a0) : ::java::io::Reader(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    void StringReader::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_7ae3461a92a43152]);
    }

    void StringReader::mark(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_mark_0a2a1ac2721c0336], a0);
    }

    jboolean StringReader::markSupported() const
    {
      return env->callBooleanMethod(this$, mids$[mid_markSupported_e470b6d9e0d979db]);
    }

    jint StringReader::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_f2f64475e4580546]);
    }

    jint StringReader::read(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_a7dcb595f3e6fbfc], a0.this$, a1, a2);
    }

    jboolean StringReader::ready() const
    {
      return env->callBooleanMethod(this$, mids$[mid_ready_e470b6d9e0d979db]);
    }

    void StringReader::reset() const
    {
      env->callVoidMethod(this$, mids$[mid_reset_7ae3461a92a43152]);
    }

    jlong StringReader::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_955f7541fca701ab], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_StringReader_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_StringReader_instance_(PyTypeObject *type, PyObject *arg);
    static int t_StringReader_init_(t_StringReader *self, PyObject *args, PyObject *kwds);
    static PyObject *t_StringReader_close(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_mark(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_markSupported(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_read(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_ready(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_reset(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_skip(t_StringReader *self, PyObject *args);

    static PyMethodDef t_StringReader__methods_[] = {
      DECLARE_METHOD(t_StringReader, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringReader, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringReader, close, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, mark, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, markSupported, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, read, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, ready, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, reset, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, skip, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(StringReader)[] = {
      { Py_tp_methods, t_StringReader__methods_ },
      { Py_tp_init, (void *) t_StringReader_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(StringReader)[] = {
      &PY_TYPE_DEF(::java::io::Reader),
      NULL
    };

    DEFINE_TYPE(StringReader, t_StringReader, StringReader);

    void t_StringReader::install(PyObject *module)
    {
      installType(&PY_TYPE(StringReader), &PY_TYPE_DEF(StringReader), module, "StringReader", 0);
    }

    void t_StringReader::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringReader), "class_", make_descriptor(StringReader::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringReader), "wrapfn_", make_descriptor(t_StringReader::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringReader), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_StringReader_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, StringReader::initializeClass, 1)))
        return NULL;
      return t_StringReader::wrap_Object(StringReader(((t_StringReader *) arg)->object.this$));
    }
    static PyObject *t_StringReader_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, StringReader::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_StringReader_init_(t_StringReader *self, PyObject *args, PyObject *kwds)
    {
      ::java::lang::String a0((jobject) NULL);
      StringReader object((jobject) NULL);

      if (!parseArgs(args, "s", &a0))
      {
        INT_CALL(object = StringReader(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_StringReader_close(t_StringReader *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_StringReader_mark(t_StringReader *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.mark(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "mark", args, 2);
    }

    static PyObject *t_StringReader_markSupported(t_StringReader *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.markSupported());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "markSupported", args, 2);
    }

    static PyObject *t_StringReader_read(t_StringReader *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.read());
          return PyLong_FromLong((long) result);
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.read(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "read", args, 2);
    }

    static PyObject *t_StringReader_ready(t_StringReader *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.ready());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "ready", args, 2);
    }

    static PyObject *t_StringReader_reset(t_StringReader *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.reset());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "reset", args, 2);
    }

    static PyObject *t_StringReader_skip(t_StringReader *self, PyObject *args)
    {
      jlong a0;
      jlong result;

      if (!parseArgs(args, "J", &a0))
      {
        OBJ_CALL(result = self->object.skip(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "skip", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *FieldAbstractIntegratedPropagator$MainStateEquations::class$ = NULL;
        jmethodID *FieldAbstractIntegratedPropagator$MainStateEquations::mids$ = NULL;
        bool FieldAbstractIntegratedPropagator$MainStateEquations::live$ = false;

        jclass FieldAbstractIntegratedPropagator$MainStateEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_computeDerivatives_360c953f14ed07de] = env->getMethodID(cls, "computeDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldAbstractIntegratedPropagator$MainStateEquations::computeDerivatives(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_360c953f14ed07de], a0.this$));
        }

        void FieldAbstractIntegratedPropagator$MainStateEquations::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_acdd8180a5dc1a8d], a0.this$, a1.this$);
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
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_of_(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_computeDerivatives(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_init(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_get__parameters_(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, void *data);
        static PyGetSetDef t_FieldAbstractIntegratedPropagator$MainStateEquations__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator$MainStateEquations, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAbstractIntegratedPropagator$MainStateEquations__methods_[] = {
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator$MainStateEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator$MainStateEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator$MainStateEquations, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator$MainStateEquations, computeDerivatives, METH_O),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator$MainStateEquations, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAbstractIntegratedPropagator$MainStateEquations)[] = {
          { Py_tp_methods, t_FieldAbstractIntegratedPropagator$MainStateEquations__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAbstractIntegratedPropagator$MainStateEquations__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAbstractIntegratedPropagator$MainStateEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAbstractIntegratedPropagator$MainStateEquations, t_FieldAbstractIntegratedPropagator$MainStateEquations, FieldAbstractIntegratedPropagator$MainStateEquations);
        PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_Object(const FieldAbstractIntegratedPropagator$MainStateEquations& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractIntegratedPropagator$MainStateEquations *self = (t_FieldAbstractIntegratedPropagator$MainStateEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractIntegratedPropagator$MainStateEquations *self = (t_FieldAbstractIntegratedPropagator$MainStateEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAbstractIntegratedPropagator$MainStateEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAbstractIntegratedPropagator$MainStateEquations), &PY_TYPE_DEF(FieldAbstractIntegratedPropagator$MainStateEquations), module, "FieldAbstractIntegratedPropagator$MainStateEquations", 0);
        }

        void t_FieldAbstractIntegratedPropagator$MainStateEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator$MainStateEquations), "class_", make_descriptor(FieldAbstractIntegratedPropagator$MainStateEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator$MainStateEquations), "wrapfn_", make_descriptor(t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator$MainStateEquations), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAbstractIntegratedPropagator$MainStateEquations::initializeClass, 1)))
            return NULL;
          return t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_Object(FieldAbstractIntegratedPropagator$MainStateEquations(((t_FieldAbstractIntegratedPropagator$MainStateEquations *) arg)->object.this$));
        }
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAbstractIntegratedPropagator$MainStateEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_of_(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_computeDerivatives(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.computeDerivatives(a0));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "computeDerivatives", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_init(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *args)
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

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_get__parameters_(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/NewtonRaphsonSolver.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *NewtonRaphsonSolver::class$ = NULL;
        jmethodID *NewtonRaphsonSolver::mids$ = NULL;
        bool NewtonRaphsonSolver::live$ = false;

        jclass NewtonRaphsonSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/NewtonRaphsonSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_solve_5d6ba4074d08b574] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;DD)D");
            mids$[mid_doSolve_456d9a2f64d6b28d] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NewtonRaphsonSolver::NewtonRaphsonSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateDifferentiableSolver(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        NewtonRaphsonSolver::NewtonRaphsonSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateDifferentiableSolver(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        jdouble NewtonRaphsonSolver::solve(jint a0, const ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction & a1, jdouble a2, jdouble a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_5d6ba4074d08b574], a0, a1.this$, a2, a3);
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
        static PyObject *t_NewtonRaphsonSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NewtonRaphsonSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NewtonRaphsonSolver_of_(t_NewtonRaphsonSolver *self, PyObject *args);
        static int t_NewtonRaphsonSolver_init_(t_NewtonRaphsonSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NewtonRaphsonSolver_solve(t_NewtonRaphsonSolver *self, PyObject *args);
        static PyObject *t_NewtonRaphsonSolver_get__parameters_(t_NewtonRaphsonSolver *self, void *data);
        static PyGetSetDef t_NewtonRaphsonSolver__fields_[] = {
          DECLARE_GET_FIELD(t_NewtonRaphsonSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NewtonRaphsonSolver__methods_[] = {
          DECLARE_METHOD(t_NewtonRaphsonSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NewtonRaphsonSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NewtonRaphsonSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_NewtonRaphsonSolver, solve, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NewtonRaphsonSolver)[] = {
          { Py_tp_methods, t_NewtonRaphsonSolver__methods_ },
          { Py_tp_init, (void *) t_NewtonRaphsonSolver_init_ },
          { Py_tp_getset, t_NewtonRaphsonSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NewtonRaphsonSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateDifferentiableSolver),
          NULL
        };

        DEFINE_TYPE(NewtonRaphsonSolver, t_NewtonRaphsonSolver, NewtonRaphsonSolver);
        PyObject *t_NewtonRaphsonSolver::wrap_Object(const NewtonRaphsonSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NewtonRaphsonSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NewtonRaphsonSolver *self = (t_NewtonRaphsonSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_NewtonRaphsonSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NewtonRaphsonSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NewtonRaphsonSolver *self = (t_NewtonRaphsonSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_NewtonRaphsonSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(NewtonRaphsonSolver), &PY_TYPE_DEF(NewtonRaphsonSolver), module, "NewtonRaphsonSolver", 0);
        }

        void t_NewtonRaphsonSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonRaphsonSolver), "class_", make_descriptor(NewtonRaphsonSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonRaphsonSolver), "wrapfn_", make_descriptor(t_NewtonRaphsonSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonRaphsonSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NewtonRaphsonSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NewtonRaphsonSolver::initializeClass, 1)))
            return NULL;
          return t_NewtonRaphsonSolver::wrap_Object(NewtonRaphsonSolver(((t_NewtonRaphsonSolver *) arg)->object.this$));
        }
        static PyObject *t_NewtonRaphsonSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NewtonRaphsonSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_NewtonRaphsonSolver_of_(t_NewtonRaphsonSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_NewtonRaphsonSolver_init_(t_NewtonRaphsonSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              NewtonRaphsonSolver object((jobject) NULL);

              INT_CALL(object = NewtonRaphsonSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDifferentiableFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              NewtonRaphsonSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = NewtonRaphsonSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDifferentiableFunction);
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_NewtonRaphsonSolver_solve(t_NewtonRaphsonSolver *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble result;

          if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NewtonRaphsonSolver), (PyObject *) self, "solve", args, 2);
        }
        static PyObject *t_NewtonRaphsonSolver_get__parameters_(t_NewtonRaphsonSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/LimitAngle.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet.h"
#include "org/hipparchus/geometry/spherical/oned/SubLimitAngle.h"
#include "org/hipparchus/geometry/spherical/oned/LimitAngle.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/spherical/oned/S1Point.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *LimitAngle::class$ = NULL;
          jmethodID *LimitAngle::mids$ = NULL;
          bool LimitAngle::live$ = false;

          jclass LimitAngle::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/LimitAngle");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_39313936c125a556] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/spherical/oned/S1Point;ZD)V");
              mids$[mid_copySelf_807c3bb8feb16dcb] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/spherical/oned/LimitAngle;");
              mids$[mid_emptyHyperplane_b29bbbd3e1177b40] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/spherical/oned/SubLimitAngle;");
              mids$[mid_getLocation_b43e2632e40c5b1c] = env->getMethodID(cls, "getLocation", "()Lorg/hipparchus/geometry/spherical/oned/S1Point;");
              mids$[mid_getOffset_726dc963fac3505e] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_getReverse_807c3bb8feb16dcb] = env->getMethodID(cls, "getReverse", "()Lorg/hipparchus/geometry/spherical/oned/LimitAngle;");
              mids$[mid_getTolerance_456d9a2f64d6b28d] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_isDirect_e470b6d9e0d979db] = env->getMethodID(cls, "isDirect", "()Z");
              mids$[mid_project_ac445dfe898b403a] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
              mids$[mid_sameOrientationAs_b99f508aafd89c77] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
              mids$[mid_wholeHyperplane_b29bbbd3e1177b40] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/spherical/oned/SubLimitAngle;");
              mids$[mid_wholeSpace_5473122695b414ae] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/spherical/oned/ArcsSet;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LimitAngle::LimitAngle(const ::org::hipparchus::geometry::spherical::oned::S1Point & a0, jboolean a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_39313936c125a556, a0.this$, a1, a2)) {}

          LimitAngle LimitAngle::copySelf() const
          {
            return LimitAngle(env->callObjectMethod(this$, mids$[mid_copySelf_807c3bb8feb16dcb]));
          }

          ::org::hipparchus::geometry::spherical::oned::SubLimitAngle LimitAngle::emptyHyperplane() const
          {
            return ::org::hipparchus::geometry::spherical::oned::SubLimitAngle(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_b29bbbd3e1177b40]));
          }

          ::org::hipparchus::geometry::spherical::oned::S1Point LimitAngle::getLocation() const
          {
            return ::org::hipparchus::geometry::spherical::oned::S1Point(env->callObjectMethod(this$, mids$[mid_getLocation_b43e2632e40c5b1c]));
          }

          jdouble LimitAngle::getOffset(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_726dc963fac3505e], a0.this$);
          }

          LimitAngle LimitAngle::getReverse() const
          {
            return LimitAngle(env->callObjectMethod(this$, mids$[mid_getReverse_807c3bb8feb16dcb]));
          }

          jdouble LimitAngle::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_456d9a2f64d6b28d]);
          }

          jboolean LimitAngle::isDirect() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isDirect_e470b6d9e0d979db]);
          }

          ::org::hipparchus::geometry::Point LimitAngle::project(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_ac445dfe898b403a], a0.this$));
          }

          jboolean LimitAngle::sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_b99f508aafd89c77], a0.this$);
          }

          ::org::hipparchus::geometry::spherical::oned::SubLimitAngle LimitAngle::wholeHyperplane() const
          {
            return ::org::hipparchus::geometry::spherical::oned::SubLimitAngle(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_b29bbbd3e1177b40]));
          }

          ::org::hipparchus::geometry::spherical::oned::ArcsSet LimitAngle::wholeSpace() const
          {
            return ::org::hipparchus::geometry::spherical::oned::ArcsSet(env->callObjectMethod(this$, mids$[mid_wholeSpace_5473122695b414ae]));
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
        namespace oned {
          static PyObject *t_LimitAngle_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LimitAngle_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LimitAngle_init_(t_LimitAngle *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LimitAngle_copySelf(t_LimitAngle *self);
          static PyObject *t_LimitAngle_emptyHyperplane(t_LimitAngle *self);
          static PyObject *t_LimitAngle_getLocation(t_LimitAngle *self);
          static PyObject *t_LimitAngle_getOffset(t_LimitAngle *self, PyObject *arg);
          static PyObject *t_LimitAngle_getReverse(t_LimitAngle *self);
          static PyObject *t_LimitAngle_getTolerance(t_LimitAngle *self);
          static PyObject *t_LimitAngle_isDirect(t_LimitAngle *self);
          static PyObject *t_LimitAngle_project(t_LimitAngle *self, PyObject *arg);
          static PyObject *t_LimitAngle_sameOrientationAs(t_LimitAngle *self, PyObject *arg);
          static PyObject *t_LimitAngle_wholeHyperplane(t_LimitAngle *self);
          static PyObject *t_LimitAngle_wholeSpace(t_LimitAngle *self);
          static PyObject *t_LimitAngle_get__direct(t_LimitAngle *self, void *data);
          static PyObject *t_LimitAngle_get__location(t_LimitAngle *self, void *data);
          static PyObject *t_LimitAngle_get__reverse(t_LimitAngle *self, void *data);
          static PyObject *t_LimitAngle_get__tolerance(t_LimitAngle *self, void *data);
          static PyGetSetDef t_LimitAngle__fields_[] = {
            DECLARE_GET_FIELD(t_LimitAngle, direct),
            DECLARE_GET_FIELD(t_LimitAngle, location),
            DECLARE_GET_FIELD(t_LimitAngle, reverse),
            DECLARE_GET_FIELD(t_LimitAngle, tolerance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_LimitAngle__methods_[] = {
            DECLARE_METHOD(t_LimitAngle, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LimitAngle, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LimitAngle, copySelf, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, emptyHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, getLocation, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, getOffset, METH_O),
            DECLARE_METHOD(t_LimitAngle, getReverse, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, isDirect, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, project, METH_O),
            DECLARE_METHOD(t_LimitAngle, sameOrientationAs, METH_O),
            DECLARE_METHOD(t_LimitAngle, wholeHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, wholeSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LimitAngle)[] = {
            { Py_tp_methods, t_LimitAngle__methods_ },
            { Py_tp_init, (void *) t_LimitAngle_init_ },
            { Py_tp_getset, t_LimitAngle__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LimitAngle)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LimitAngle, t_LimitAngle, LimitAngle);

          void t_LimitAngle::install(PyObject *module)
          {
            installType(&PY_TYPE(LimitAngle), &PY_TYPE_DEF(LimitAngle), module, "LimitAngle", 0);
          }

          void t_LimitAngle::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LimitAngle), "class_", make_descriptor(LimitAngle::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LimitAngle), "wrapfn_", make_descriptor(t_LimitAngle::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LimitAngle), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LimitAngle_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LimitAngle::initializeClass, 1)))
              return NULL;
            return t_LimitAngle::wrap_Object(LimitAngle(((t_LimitAngle *) arg)->object.this$));
          }
          static PyObject *t_LimitAngle_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LimitAngle::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LimitAngle_init_(t_LimitAngle *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::spherical::oned::S1Point a0((jobject) NULL);
            jboolean a1;
            jdouble a2;
            LimitAngle object((jobject) NULL);

            if (!parseArgs(args, "kZD", ::org::hipparchus::geometry::spherical::oned::S1Point::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = LimitAngle(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_LimitAngle_copySelf(t_LimitAngle *self)
          {
            LimitAngle result((jobject) NULL);
            OBJ_CALL(result = self->object.copySelf());
            return t_LimitAngle::wrap_Object(result);
          }

          static PyObject *t_LimitAngle_emptyHyperplane(t_LimitAngle *self)
          {
            ::org::hipparchus::geometry::spherical::oned::SubLimitAngle result((jobject) NULL);
            OBJ_CALL(result = self->object.emptyHyperplane());
            return ::org::hipparchus::geometry::spherical::oned::t_SubLimitAngle::wrap_Object(result);
          }

          static PyObject *t_LimitAngle_getLocation(t_LimitAngle *self)
          {
            ::org::hipparchus::geometry::spherical::oned::S1Point result((jobject) NULL);
            OBJ_CALL(result = self->object.getLocation());
            return ::org::hipparchus::geometry::spherical::oned::t_S1Point::wrap_Object(result);
          }

          static PyObject *t_LimitAngle_getOffset(t_LimitAngle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.getOffset(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", arg);
            return NULL;
          }

          static PyObject *t_LimitAngle_getReverse(t_LimitAngle *self)
          {
            LimitAngle result((jobject) NULL);
            OBJ_CALL(result = self->object.getReverse());
            return t_LimitAngle::wrap_Object(result);
          }

          static PyObject *t_LimitAngle_getTolerance(t_LimitAngle *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_LimitAngle_isDirect(t_LimitAngle *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isDirect());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_LimitAngle_project(t_LimitAngle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.project(a0));
              return ::org::hipparchus::geometry::t_Point::wrap_Object(result, ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D));
            }

            PyErr_SetArgsError((PyObject *) self, "project", arg);
            return NULL;
          }

          static PyObject *t_LimitAngle_sameOrientationAs(t_LimitAngle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.sameOrientationAs(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
            return NULL;
          }

          static PyObject *t_LimitAngle_wholeHyperplane(t_LimitAngle *self)
          {
            ::org::hipparchus::geometry::spherical::oned::SubLimitAngle result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeHyperplane());
            return ::org::hipparchus::geometry::spherical::oned::t_SubLimitAngle::wrap_Object(result);
          }

          static PyObject *t_LimitAngle_wholeSpace(t_LimitAngle *self)
          {
            ::org::hipparchus::geometry::spherical::oned::ArcsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeSpace());
            return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet::wrap_Object(result);
          }

          static PyObject *t_LimitAngle_get__direct(t_LimitAngle *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isDirect());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_LimitAngle_get__location(t_LimitAngle *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::oned::S1Point value((jobject) NULL);
            OBJ_CALL(value = self->object.getLocation());
            return ::org::hipparchus::geometry::spherical::oned::t_S1Point::wrap_Object(value);
          }

          static PyObject *t_LimitAngle_get__reverse(t_LimitAngle *self, void *data)
          {
            LimitAngle value((jobject) NULL);
            OBJ_CALL(value = self->object.getReverse());
            return t_LimitAngle::wrap_Object(value);
          }

          static PyObject *t_LimitAngle_get__tolerance(t_LimitAngle *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TCGScale.h"
#include "org/orekit/time/TimeScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TCGScale::class$ = NULL;
      jmethodID *TCGScale::mids$ = NULL;
      bool TCGScale::live$ = false;

      jclass TCGScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TCGScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_e912d21057defe63] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_7bc0fd76ee915b72] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TCGScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      jdouble TCGScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_e912d21057defe63], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TCGScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_7bc0fd76ee915b72], a0.this$));
      }

      ::java::lang::String TCGScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
      static PyObject *t_TCGScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TCGScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TCGScale_getName(t_TCGScale *self);
      static PyObject *t_TCGScale_offsetFromTAI(t_TCGScale *self, PyObject *args);
      static PyObject *t_TCGScale_toString(t_TCGScale *self, PyObject *args);
      static PyObject *t_TCGScale_get__name(t_TCGScale *self, void *data);
      static PyGetSetDef t_TCGScale__fields_[] = {
        DECLARE_GET_FIELD(t_TCGScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TCGScale__methods_[] = {
        DECLARE_METHOD(t_TCGScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TCGScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TCGScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_TCGScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_TCGScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TCGScale)[] = {
        { Py_tp_methods, t_TCGScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TCGScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TCGScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TCGScale, t_TCGScale, TCGScale);

      void t_TCGScale::install(PyObject *module)
      {
        installType(&PY_TYPE(TCGScale), &PY_TYPE_DEF(TCGScale), module, "TCGScale", 0);
      }

      void t_TCGScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TCGScale), "class_", make_descriptor(TCGScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TCGScale), "wrapfn_", make_descriptor(t_TCGScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TCGScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TCGScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TCGScale::initializeClass, 1)))
          return NULL;
        return t_TCGScale::wrap_Object(TCGScale(((t_TCGScale *) arg)->object.this$));
      }
      static PyObject *t_TCGScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TCGScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TCGScale_getName(t_TCGScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_TCGScale_offsetFromTAI(t_TCGScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_TCGScale_toString(t_TCGScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TCGScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TCGScale_get__name(t_TCGScale *self, void *data)
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
#include "org/orekit/estimation/sequential/AbstractCovarianceMatrixProvider.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *AbstractCovarianceMatrixProvider::class$ = NULL;
        jmethodID *AbstractCovarianceMatrixProvider::mids$ = NULL;
        bool AbstractCovarianceMatrixProvider::live$ = false;

        jclass AbstractCovarianceMatrixProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/AbstractCovarianceMatrixProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInitialCovarianceMatrix_63aee3ce1e412e46] = env->getMethodID(cls, "getInitialCovarianceMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::linear::RealMatrix AbstractCovarianceMatrixProvider::getInitialCovarianceMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInitialCovarianceMatrix_63aee3ce1e412e46], a0.this$));
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
        static PyObject *t_AbstractCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractCovarianceMatrixProvider_getInitialCovarianceMatrix(t_AbstractCovarianceMatrixProvider *self, PyObject *arg);

        static PyMethodDef t_AbstractCovarianceMatrixProvider__methods_[] = {
          DECLARE_METHOD(t_AbstractCovarianceMatrixProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractCovarianceMatrixProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractCovarianceMatrixProvider, getInitialCovarianceMatrix, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractCovarianceMatrixProvider)[] = {
          { Py_tp_methods, t_AbstractCovarianceMatrixProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractCovarianceMatrixProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractCovarianceMatrixProvider, t_AbstractCovarianceMatrixProvider, AbstractCovarianceMatrixProvider);

        void t_AbstractCovarianceMatrixProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractCovarianceMatrixProvider), &PY_TYPE_DEF(AbstractCovarianceMatrixProvider), module, "AbstractCovarianceMatrixProvider", 0);
        }

        void t_AbstractCovarianceMatrixProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCovarianceMatrixProvider), "class_", make_descriptor(AbstractCovarianceMatrixProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCovarianceMatrixProvider), "wrapfn_", make_descriptor(t_AbstractCovarianceMatrixProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCovarianceMatrixProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractCovarianceMatrixProvider::initializeClass, 1)))
            return NULL;
          return t_AbstractCovarianceMatrixProvider::wrap_Object(AbstractCovarianceMatrixProvider(((t_AbstractCovarianceMatrixProvider *) arg)->object.this$));
        }
        static PyObject *t_AbstractCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractCovarianceMatrixProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractCovarianceMatrixProvider_getInitialCovarianceMatrix(t_AbstractCovarianceMatrixProvider *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getInitialCovarianceMatrix(a0));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInitialCovarianceMatrix", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *RawSphericalHarmonicsProvider$RawSphericalHarmonics::class$ = NULL;
          jmethodID *RawSphericalHarmonicsProvider$RawSphericalHarmonics::mids$ = NULL;
          bool RawSphericalHarmonicsProvider$RawSphericalHarmonics::live$ = false;

          jclass RawSphericalHarmonicsProvider$RawSphericalHarmonics::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getRawCnm_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getRawCnm", "(II)D");
              mids$[mid_getRawSnm_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getRawSnm", "(II)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble RawSphericalHarmonicsProvider$RawSphericalHarmonics::getRawCnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRawCnm_a84e4ee1da3f1ab8], a0, a1);
          }

          jdouble RawSphericalHarmonicsProvider$RawSphericalHarmonics::getRawSnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRawSnm_a84e4ee1da3f1ab8], a0, a1);
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
          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_getRawCnm(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics *self, PyObject *args);
          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_getRawSnm(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics *self, PyObject *args);

          static PyMethodDef t_RawSphericalHarmonicsProvider$RawSphericalHarmonics__methods_[] = {
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics, getRawCnm, METH_VARARGS),
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics, getRawSnm, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RawSphericalHarmonicsProvider$RawSphericalHarmonics)[] = {
            { Py_tp_methods, t_RawSphericalHarmonicsProvider$RawSphericalHarmonics__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RawSphericalHarmonicsProvider$RawSphericalHarmonics)[] = {
            &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
            NULL
          };

          DEFINE_TYPE(RawSphericalHarmonicsProvider$RawSphericalHarmonics, t_RawSphericalHarmonicsProvider$RawSphericalHarmonics, RawSphericalHarmonicsProvider$RawSphericalHarmonics);

          void t_RawSphericalHarmonicsProvider$RawSphericalHarmonics::install(PyObject *module)
          {
            installType(&PY_TYPE(RawSphericalHarmonicsProvider$RawSphericalHarmonics), &PY_TYPE_DEF(RawSphericalHarmonicsProvider$RawSphericalHarmonics), module, "RawSphericalHarmonicsProvider$RawSphericalHarmonics", 0);
          }

          void t_RawSphericalHarmonicsProvider$RawSphericalHarmonics::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider$RawSphericalHarmonics), "class_", make_descriptor(RawSphericalHarmonicsProvider$RawSphericalHarmonics::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider$RawSphericalHarmonics), "wrapfn_", make_descriptor(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider$RawSphericalHarmonics), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RawSphericalHarmonicsProvider$RawSphericalHarmonics::initializeClass, 1)))
              return NULL;
            return t_RawSphericalHarmonicsProvider$RawSphericalHarmonics::wrap_Object(RawSphericalHarmonicsProvider$RawSphericalHarmonics(((t_RawSphericalHarmonicsProvider$RawSphericalHarmonics *) arg)->object.this$));
          }
          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RawSphericalHarmonicsProvider$RawSphericalHarmonics::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_getRawCnm(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getRawCnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getRawCnm", args);
            return NULL;
          }

          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_getRawSnm(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getRawSnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getRawSnm", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/RuggedExceptionWrapper.h"
#include "org/orekit/rugged/errors/RuggedException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *RuggedExceptionWrapper::class$ = NULL;
        jmethodID *RuggedExceptionWrapper::mids$ = NULL;
        bool RuggedExceptionWrapper::live$ = false;

        jclass RuggedExceptionWrapper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/RuggedExceptionWrapper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c98f503999b68b6f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/errors/RuggedException;)V");
            mids$[mid_getException_fe58b15ac7c07ba3] = env->getMethodID(cls, "getException", "()Lorg/orekit/rugged/errors/RuggedException;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RuggedExceptionWrapper::RuggedExceptionWrapper(const ::org::orekit::rugged::errors::RuggedException & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_c98f503999b68b6f, a0.this$)) {}

        ::org::orekit::rugged::errors::RuggedException RuggedExceptionWrapper::getException() const
        {
          return ::org::orekit::rugged::errors::RuggedException(env->callObjectMethod(this$, mids$[mid_getException_fe58b15ac7c07ba3]));
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
        static PyObject *t_RuggedExceptionWrapper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedExceptionWrapper_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RuggedExceptionWrapper_init_(t_RuggedExceptionWrapper *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RuggedExceptionWrapper_getException(t_RuggedExceptionWrapper *self);
        static PyObject *t_RuggedExceptionWrapper_get__exception(t_RuggedExceptionWrapper *self, void *data);
        static PyGetSetDef t_RuggedExceptionWrapper__fields_[] = {
          DECLARE_GET_FIELD(t_RuggedExceptionWrapper, exception),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RuggedExceptionWrapper__methods_[] = {
          DECLARE_METHOD(t_RuggedExceptionWrapper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedExceptionWrapper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedExceptionWrapper, getException, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RuggedExceptionWrapper)[] = {
          { Py_tp_methods, t_RuggedExceptionWrapper__methods_ },
          { Py_tp_init, (void *) t_RuggedExceptionWrapper_init_ },
          { Py_tp_getset, t_RuggedExceptionWrapper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RuggedExceptionWrapper)[] = {
          &PY_TYPE_DEF(::java::lang::RuntimeException),
          NULL
        };

        DEFINE_TYPE(RuggedExceptionWrapper, t_RuggedExceptionWrapper, RuggedExceptionWrapper);

        void t_RuggedExceptionWrapper::install(PyObject *module)
        {
          installType(&PY_TYPE(RuggedExceptionWrapper), &PY_TYPE_DEF(RuggedExceptionWrapper), module, "RuggedExceptionWrapper", 0);
        }

        void t_RuggedExceptionWrapper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedExceptionWrapper), "class_", make_descriptor(RuggedExceptionWrapper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedExceptionWrapper), "wrapfn_", make_descriptor(t_RuggedExceptionWrapper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedExceptionWrapper), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RuggedExceptionWrapper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RuggedExceptionWrapper::initializeClass, 1)))
            return NULL;
          return t_RuggedExceptionWrapper::wrap_Object(RuggedExceptionWrapper(((t_RuggedExceptionWrapper *) arg)->object.this$));
        }
        static PyObject *t_RuggedExceptionWrapper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RuggedExceptionWrapper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RuggedExceptionWrapper_init_(t_RuggedExceptionWrapper *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::rugged::errors::RuggedException a0((jobject) NULL);
          RuggedExceptionWrapper object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::rugged::errors::RuggedException::initializeClass, &a0))
          {
            INT_CALL(object = RuggedExceptionWrapper(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_RuggedExceptionWrapper_getException(t_RuggedExceptionWrapper *self)
        {
          ::org::orekit::rugged::errors::RuggedException result((jobject) NULL);
          OBJ_CALL(result = self->object.getException());
          return ::org::orekit::rugged::errors::t_RuggedException::wrap_Object(result);
        }

        static PyObject *t_RuggedExceptionWrapper_get__exception(t_RuggedExceptionWrapper *self, void *data)
        {
          ::org::orekit::rugged::errors::RuggedException value((jobject) NULL);
          OBJ_CALL(value = self->object.getException());
          return ::org::orekit::rugged::errors::t_RuggedException::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/String.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *CartesianDerivativesFilter::class$ = NULL;
      jmethodID *CartesianDerivativesFilter::mids$ = NULL;
      bool CartesianDerivativesFilter::live$ = false;
      CartesianDerivativesFilter *CartesianDerivativesFilter::USE_P = NULL;
      CartesianDerivativesFilter *CartesianDerivativesFilter::USE_PV = NULL;
      CartesianDerivativesFilter *CartesianDerivativesFilter::USE_PVA = NULL;

      jclass CartesianDerivativesFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/CartesianDerivativesFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getFilter_a49f65e893beabbd] = env->getStaticMethodID(cls, "getFilter", "(I)Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_getMaxOrder_f2f64475e4580546] = env->getMethodID(cls, "getMaxOrder", "()I");
          mids$[mid_valueOf_151731e7f72c3468] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_values_1827cc1a323460d7] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/utils/CartesianDerivativesFilter;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          USE_P = new CartesianDerivativesFilter(env->getStaticObjectField(cls, "USE_P", "Lorg/orekit/utils/CartesianDerivativesFilter;"));
          USE_PV = new CartesianDerivativesFilter(env->getStaticObjectField(cls, "USE_PV", "Lorg/orekit/utils/CartesianDerivativesFilter;"));
          USE_PVA = new CartesianDerivativesFilter(env->getStaticObjectField(cls, "USE_PVA", "Lorg/orekit/utils/CartesianDerivativesFilter;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CartesianDerivativesFilter CartesianDerivativesFilter::getFilter(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return CartesianDerivativesFilter(env->callStaticObjectMethod(cls, mids$[mid_getFilter_a49f65e893beabbd], a0));
      }

      jint CartesianDerivativesFilter::getMaxOrder() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxOrder_f2f64475e4580546]);
      }

      CartesianDerivativesFilter CartesianDerivativesFilter::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return CartesianDerivativesFilter(env->callStaticObjectMethod(cls, mids$[mid_valueOf_151731e7f72c3468], a0.this$));
      }

      JArray< CartesianDerivativesFilter > CartesianDerivativesFilter::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< CartesianDerivativesFilter >(env->callStaticObjectMethod(cls, mids$[mid_values_1827cc1a323460d7]));
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
      static PyObject *t_CartesianDerivativesFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CartesianDerivativesFilter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CartesianDerivativesFilter_of_(t_CartesianDerivativesFilter *self, PyObject *args);
      static PyObject *t_CartesianDerivativesFilter_getFilter(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CartesianDerivativesFilter_getMaxOrder(t_CartesianDerivativesFilter *self);
      static PyObject *t_CartesianDerivativesFilter_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_CartesianDerivativesFilter_values(PyTypeObject *type);
      static PyObject *t_CartesianDerivativesFilter_get__maxOrder(t_CartesianDerivativesFilter *self, void *data);
      static PyObject *t_CartesianDerivativesFilter_get__parameters_(t_CartesianDerivativesFilter *self, void *data);
      static PyGetSetDef t_CartesianDerivativesFilter__fields_[] = {
        DECLARE_GET_FIELD(t_CartesianDerivativesFilter, maxOrder),
        DECLARE_GET_FIELD(t_CartesianDerivativesFilter, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CartesianDerivativesFilter__methods_[] = {
        DECLARE_METHOD(t_CartesianDerivativesFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, of_, METH_VARARGS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, getFilter, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, getMaxOrder, METH_NOARGS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CartesianDerivativesFilter)[] = {
        { Py_tp_methods, t_CartesianDerivativesFilter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CartesianDerivativesFilter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CartesianDerivativesFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(CartesianDerivativesFilter, t_CartesianDerivativesFilter, CartesianDerivativesFilter);
      PyObject *t_CartesianDerivativesFilter::wrap_Object(const CartesianDerivativesFilter& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CartesianDerivativesFilter::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CartesianDerivativesFilter *self = (t_CartesianDerivativesFilter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CartesianDerivativesFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CartesianDerivativesFilter::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CartesianDerivativesFilter *self = (t_CartesianDerivativesFilter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CartesianDerivativesFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(CartesianDerivativesFilter), &PY_TYPE_DEF(CartesianDerivativesFilter), module, "CartesianDerivativesFilter", 0);
      }

      void t_CartesianDerivativesFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "class_", make_descriptor(CartesianDerivativesFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "wrapfn_", make_descriptor(t_CartesianDerivativesFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "boxfn_", make_descriptor(boxObject));
        env->getClass(CartesianDerivativesFilter::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "USE_P", make_descriptor(t_CartesianDerivativesFilter::wrap_Object(*CartesianDerivativesFilter::USE_P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "USE_PV", make_descriptor(t_CartesianDerivativesFilter::wrap_Object(*CartesianDerivativesFilter::USE_PV)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "USE_PVA", make_descriptor(t_CartesianDerivativesFilter::wrap_Object(*CartesianDerivativesFilter::USE_PVA)));
      }

      static PyObject *t_CartesianDerivativesFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CartesianDerivativesFilter::initializeClass, 1)))
          return NULL;
        return t_CartesianDerivativesFilter::wrap_Object(CartesianDerivativesFilter(((t_CartesianDerivativesFilter *) arg)->object.this$));
      }
      static PyObject *t_CartesianDerivativesFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CartesianDerivativesFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CartesianDerivativesFilter_of_(t_CartesianDerivativesFilter *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CartesianDerivativesFilter_getFilter(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        CartesianDerivativesFilter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::CartesianDerivativesFilter::getFilter(a0));
          return t_CartesianDerivativesFilter::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getFilter", arg);
        return NULL;
      }

      static PyObject *t_CartesianDerivativesFilter_getMaxOrder(t_CartesianDerivativesFilter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxOrder());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_CartesianDerivativesFilter_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        CartesianDerivativesFilter result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::CartesianDerivativesFilter::valueOf(a0));
          return t_CartesianDerivativesFilter::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_CartesianDerivativesFilter_values(PyTypeObject *type)
      {
        JArray< CartesianDerivativesFilter > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::utils::CartesianDerivativesFilter::values());
        return JArray<jobject>(result.this$).wrap(t_CartesianDerivativesFilter::wrap_jobject);
      }
      static PyObject *t_CartesianDerivativesFilter_get__parameters_(t_CartesianDerivativesFilter *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_CartesianDerivativesFilter_get__maxOrder(t_CartesianDerivativesFilter *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxOrder());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/FieldDelaunayArguments.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *FieldDelaunayArguments::class$ = NULL;
      jmethodID *FieldDelaunayArguments::mids$ = NULL;
      bool FieldDelaunayArguments::live$ = false;

      jclass FieldDelaunayArguments::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/FieldDelaunayArguments");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_db8057512a3092f8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getD_e6d4d3215c30992a] = env->getMethodID(cls, "getD", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDDot_e6d4d3215c30992a] = env->getMethodID(cls, "getDDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDate_09b0a926600dfc14] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getF_e6d4d3215c30992a] = env->getMethodID(cls, "getF", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getFDot_e6d4d3215c30992a] = env->getMethodID(cls, "getFDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getGamma_e6d4d3215c30992a] = env->getMethodID(cls, "getGamma", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getGammaDot_e6d4d3215c30992a] = env->getMethodID(cls, "getGammaDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getL_e6d4d3215c30992a] = env->getMethodID(cls, "getL", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLDot_e6d4d3215c30992a] = env->getMethodID(cls, "getLDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLPrime_e6d4d3215c30992a] = env->getMethodID(cls, "getLPrime", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLPrimeDot_e6d4d3215c30992a] = env->getMethodID(cls, "getLPrimeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOmega_e6d4d3215c30992a] = env->getMethodID(cls, "getOmega", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOmegaDot_e6d4d3215c30992a] = env->getMethodID(cls, "getOmegaDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getTC_e6d4d3215c30992a] = env->getMethodID(cls, "getTC", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldDelaunayArguments::FieldDelaunayArguments(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::hipparchus::CalculusFieldElement & a12, const ::org::hipparchus::CalculusFieldElement & a13) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_db8057512a3092f8, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getD() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getD_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getDDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDDot_e6d4d3215c30992a]));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldDelaunayArguments::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_09b0a926600dfc14]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getF() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getF_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getFDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getGamma() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGamma_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getGammaDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGammaDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getL() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getL_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getLDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getLPrime() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLPrime_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getLPrimeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLPrimeDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getOmega() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOmega_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getOmegaDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOmegaDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getTC() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTC_e6d4d3215c30992a]));
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
      static PyObject *t_FieldDelaunayArguments_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDelaunayArguments_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDelaunayArguments_of_(t_FieldDelaunayArguments *self, PyObject *args);
      static int t_FieldDelaunayArguments_init_(t_FieldDelaunayArguments *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldDelaunayArguments_getD(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getDDot(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getDate(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getF(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getFDot(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getGamma(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getGammaDot(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getL(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getLDot(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getLPrime(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getLPrimeDot(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getOmega(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getOmegaDot(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getTC(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_get__d(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__dDot(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__date(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__f(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__fDot(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__gamma(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__gammaDot(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__l(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__lDot(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__lPrime(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__lPrimeDot(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__omega(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__omegaDot(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__tC(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__parameters_(t_FieldDelaunayArguments *self, void *data);
      static PyGetSetDef t_FieldDelaunayArguments__fields_[] = {
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, d),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, dDot),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, date),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, f),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, fDot),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, gamma),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, gammaDot),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, l),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, lDot),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, lPrime),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, lPrimeDot),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, omega),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, omegaDot),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, tC),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldDelaunayArguments__methods_[] = {
        DECLARE_METHOD(t_FieldDelaunayArguments, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDelaunayArguments, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDelaunayArguments, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getD, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getDDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getF, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getFDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getGamma, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getGammaDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getL, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getLDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getLPrime, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getLPrimeDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getOmega, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getOmegaDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getTC, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldDelaunayArguments)[] = {
        { Py_tp_methods, t_FieldDelaunayArguments__methods_ },
        { Py_tp_init, (void *) t_FieldDelaunayArguments_init_ },
        { Py_tp_getset, t_FieldDelaunayArguments__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldDelaunayArguments)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldDelaunayArguments, t_FieldDelaunayArguments, FieldDelaunayArguments);
      PyObject *t_FieldDelaunayArguments::wrap_Object(const FieldDelaunayArguments& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDelaunayArguments::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDelaunayArguments *self = (t_FieldDelaunayArguments *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldDelaunayArguments::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDelaunayArguments::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDelaunayArguments *self = (t_FieldDelaunayArguments *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldDelaunayArguments::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldDelaunayArguments), &PY_TYPE_DEF(FieldDelaunayArguments), module, "FieldDelaunayArguments", 0);
      }

      void t_FieldDelaunayArguments::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDelaunayArguments), "class_", make_descriptor(FieldDelaunayArguments::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDelaunayArguments), "wrapfn_", make_descriptor(t_FieldDelaunayArguments::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDelaunayArguments), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldDelaunayArguments_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldDelaunayArguments::initializeClass, 1)))
          return NULL;
        return t_FieldDelaunayArguments::wrap_Object(FieldDelaunayArguments(((t_FieldDelaunayArguments *) arg)->object.this$));
      }
      static PyObject *t_FieldDelaunayArguments_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldDelaunayArguments::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldDelaunayArguments_of_(t_FieldDelaunayArguments *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldDelaunayArguments_init_(t_FieldDelaunayArguments *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
        PyTypeObject **p3;
        ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
        PyTypeObject **p4;
        ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
        PyTypeObject **p5;
        ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
        PyTypeObject **p6;
        ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
        PyTypeObject **p7;
        ::org::hipparchus::CalculusFieldElement a8((jobject) NULL);
        PyTypeObject **p8;
        ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
        PyTypeObject **p9;
        ::org::hipparchus::CalculusFieldElement a10((jobject) NULL);
        PyTypeObject **p10;
        ::org::hipparchus::CalculusFieldElement a11((jobject) NULL);
        PyTypeObject **p11;
        ::org::hipparchus::CalculusFieldElement a12((jobject) NULL);
        PyTypeObject **p12;
        ::org::hipparchus::CalculusFieldElement a13((jobject) NULL);
        PyTypeObject **p13;
        FieldDelaunayArguments object((jobject) NULL);

        if (!parseArgs(args, "KKKKKKKKKKKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13, &p13, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldDelaunayArguments(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldDelaunayArguments_getD(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getD());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getDDot(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getDDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getDate(t_FieldDelaunayArguments *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldDelaunayArguments_getF(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getF());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getFDot(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getFDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getGamma(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getGamma());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getGammaDot(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getGammaDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getL(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getL());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getLDot(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getLPrime(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLPrime());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getLPrimeDot(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLPrimeDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getOmega(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getOmega());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getOmegaDot(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getOmegaDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getTC(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getTC());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_FieldDelaunayArguments_get__parameters_(t_FieldDelaunayArguments *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldDelaunayArguments_get__d(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getD());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__dDot(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getDDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__date(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__f(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getF());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__fDot(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getFDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__gamma(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getGamma());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__gammaDot(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getGammaDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__l(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getL());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__lDot(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__lPrime(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLPrime());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__lPrimeDot(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLPrimeDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__omega(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getOmega());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__omegaDot(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getOmegaDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__tC(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getTC());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKEphemerisSegment.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        ::java::lang::Class *STKEphemerisFile$STKEphemerisSegment::class$ = NULL;
        jmethodID *STKEphemerisFile$STKEphemerisSegment::mids$ = NULL;
        bool STKEphemerisFile$STKEphemerisSegment::live$ = false;

        jclass STKEphemerisFile$STKEphemerisSegment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/stk/STKEphemerisFile$STKEphemerisSegment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8db87af9dce1985f] = env->getMethodID(cls, "<init>", "(DLorg/orekit/frames/Frame;ILorg/orekit/utils/CartesianDerivativesFilter;Ljava/util/List;)V");
            mids$[mid_getAvailableDerivatives_237181d932324188] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getCoordinates_a6156df500549a58] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
            mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInterpolationSamples_f2f64475e4580546] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getStart_aaa854c403487cf3] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_aaa854c403487cf3] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        STKEphemerisFile$STKEphemerisSegment::STKEphemerisFile$STKEphemerisSegment(jdouble a0, const ::org::orekit::frames::Frame & a1, jint a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3, const ::java::util::List & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8db87af9dce1985f, a0, a1.this$, a2, a3.this$, a4.this$)) {}

        ::org::orekit::utils::CartesianDerivativesFilter STKEphemerisFile$STKEphemerisSegment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_237181d932324188]));
        }

        ::java::util::List STKEphemerisFile$STKEphemerisSegment::getCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_a6156df500549a58]));
        }

        ::org::orekit::frames::Frame STKEphemerisFile$STKEphemerisSegment::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
        }

        jint STKEphemerisFile$STKEphemerisSegment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_f2f64475e4580546]);
        }

        jdouble STKEphemerisFile$STKEphemerisSegment::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
        }

        ::org::orekit::time::AbsoluteDate STKEphemerisFile$STKEphemerisSegment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_aaa854c403487cf3]));
        }

        ::org::orekit::time::AbsoluteDate STKEphemerisFile$STKEphemerisSegment::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_aaa854c403487cf3]));
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
      namespace stk {
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg);
        static int t_STKEphemerisFile$STKEphemerisSegment_init_(t_STKEphemerisFile$STKEphemerisSegment *self, PyObject *args, PyObject *kwds);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getAvailableDerivatives(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getCoordinates(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getFrame(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getInterpolationSamples(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getMu(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getStart(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getStop(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__availableDerivatives(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__coordinates(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__frame(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__interpolationSamples(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__mu(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__start(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__stop(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyGetSetDef t_STKEphemerisFile$STKEphemerisSegment__fields_[] = {
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, availableDerivatives),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, coordinates),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, frame),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, interpolationSamples),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, mu),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, start),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_STKEphemerisFile$STKEphemerisSegment__methods_[] = {
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getMu, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getStart, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(STKEphemerisFile$STKEphemerisSegment)[] = {
          { Py_tp_methods, t_STKEphemerisFile$STKEphemerisSegment__methods_ },
          { Py_tp_init, (void *) t_STKEphemerisFile$STKEphemerisSegment_init_ },
          { Py_tp_getset, t_STKEphemerisFile$STKEphemerisSegment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(STKEphemerisFile$STKEphemerisSegment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(STKEphemerisFile$STKEphemerisSegment, t_STKEphemerisFile$STKEphemerisSegment, STKEphemerisFile$STKEphemerisSegment);

        void t_STKEphemerisFile$STKEphemerisSegment::install(PyObject *module)
        {
          installType(&PY_TYPE(STKEphemerisFile$STKEphemerisSegment), &PY_TYPE_DEF(STKEphemerisFile$STKEphemerisSegment), module, "STKEphemerisFile$STKEphemerisSegment", 0);
        }

        void t_STKEphemerisFile$STKEphemerisSegment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKEphemerisSegment), "class_", make_descriptor(STKEphemerisFile$STKEphemerisSegment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKEphemerisSegment), "wrapfn_", make_descriptor(t_STKEphemerisFile$STKEphemerisSegment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKEphemerisSegment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, STKEphemerisFile$STKEphemerisSegment::initializeClass, 1)))
            return NULL;
          return t_STKEphemerisFile$STKEphemerisSegment::wrap_Object(STKEphemerisFile$STKEphemerisSegment(((t_STKEphemerisFile$STKEphemerisSegment *) arg)->object.this$));
        }
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, STKEphemerisFile$STKEphemerisSegment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_STKEphemerisFile$STKEphemerisSegment_init_(t_STKEphemerisFile$STKEphemerisSegment *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::frames::Frame a1((jobject) NULL);
          jint a2;
          ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
          PyTypeObject **p3;
          ::java::util::List a4((jobject) NULL);
          PyTypeObject **p4;
          STKEphemerisFile$STKEphemerisSegment object((jobject) NULL);

          if (!parseArgs(args, "DkIKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a4, &p4, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = STKEphemerisFile$STKEphemerisSegment(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getAvailableDerivatives(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getCoordinates(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getFrame(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getInterpolationSamples(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getMu(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getStart(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getStop(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__availableDerivatives(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__coordinates(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__frame(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__interpolationSamples(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__mu(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__start(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__stop(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
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
#include "org/orekit/geometry/fov/DoubleDihedraFieldOfView.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *DoubleDihedraFieldOfView::class$ = NULL;
        jmethodID *DoubleDihedraFieldOfView::mids$ = NULL;
        bool DoubleDihedraFieldOfView::live$ = false;

        jclass DoubleDihedraFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/DoubleDihedraFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_84c36625c38f31d5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DoubleDihedraFieldOfView::DoubleDihedraFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, jdouble a4, jdouble a5) : ::org::orekit::geometry::fov::PolygonalFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_84c36625c38f31d5, a0.this$, a1.this$, a2, a3.this$, a4, a5)) {}
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
        static PyObject *t_DoubleDihedraFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DoubleDihedraFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DoubleDihedraFieldOfView_init_(t_DoubleDihedraFieldOfView *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_DoubleDihedraFieldOfView__methods_[] = {
          DECLARE_METHOD(t_DoubleDihedraFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DoubleDihedraFieldOfView, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DoubleDihedraFieldOfView)[] = {
          { Py_tp_methods, t_DoubleDihedraFieldOfView__methods_ },
          { Py_tp_init, (void *) t_DoubleDihedraFieldOfView_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DoubleDihedraFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::PolygonalFieldOfView),
          NULL
        };

        DEFINE_TYPE(DoubleDihedraFieldOfView, t_DoubleDihedraFieldOfView, DoubleDihedraFieldOfView);

        void t_DoubleDihedraFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(DoubleDihedraFieldOfView), &PY_TYPE_DEF(DoubleDihedraFieldOfView), module, "DoubleDihedraFieldOfView", 0);
        }

        void t_DoubleDihedraFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleDihedraFieldOfView), "class_", make_descriptor(DoubleDihedraFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleDihedraFieldOfView), "wrapfn_", make_descriptor(t_DoubleDihedraFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleDihedraFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DoubleDihedraFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DoubleDihedraFieldOfView::initializeClass, 1)))
            return NULL;
          return t_DoubleDihedraFieldOfView::wrap_Object(DoubleDihedraFieldOfView(((t_DoubleDihedraFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_DoubleDihedraFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DoubleDihedraFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DoubleDihedraFieldOfView_init_(t_DoubleDihedraFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
          jdouble a4;
          jdouble a5;
          DoubleDihedraFieldOfView object((jobject) NULL);

          if (!parseArgs(args, "kkDkDD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = DoubleDihedraFieldOfView(a0, a1, a2, a3, a4, a5));
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
#include "org/hipparchus/optim/ConvergenceCheckerOrMultiplexer.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *ConvergenceCheckerOrMultiplexer::class$ = NULL;
      jmethodID *ConvergenceCheckerOrMultiplexer::mids$ = NULL;
      bool ConvergenceCheckerOrMultiplexer::live$ = false;

      jclass ConvergenceCheckerOrMultiplexer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/ConvergenceCheckerOrMultiplexer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_65de9727799c5641] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
          mids$[mid_converged_530133671081dc04] = env->getMethodID(cls, "converged", "(ILjava/lang/Object;Ljava/lang/Object;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ConvergenceCheckerOrMultiplexer::ConvergenceCheckerOrMultiplexer(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_65de9727799c5641, a0.this$)) {}

      jboolean ConvergenceCheckerOrMultiplexer::converged(jint a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_530133671081dc04], a0, a1.this$, a2.this$);
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
      static PyObject *t_ConvergenceCheckerOrMultiplexer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceCheckerOrMultiplexer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceCheckerOrMultiplexer_of_(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args);
      static int t_ConvergenceCheckerOrMultiplexer_init_(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ConvergenceCheckerOrMultiplexer_converged(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args);
      static PyObject *t_ConvergenceCheckerOrMultiplexer_get__parameters_(t_ConvergenceCheckerOrMultiplexer *self, void *data);
      static PyGetSetDef t_ConvergenceCheckerOrMultiplexer__fields_[] = {
        DECLARE_GET_FIELD(t_ConvergenceCheckerOrMultiplexer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ConvergenceCheckerOrMultiplexer__methods_[] = {
        DECLARE_METHOD(t_ConvergenceCheckerOrMultiplexer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceCheckerOrMultiplexer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceCheckerOrMultiplexer, of_, METH_VARARGS),
        DECLARE_METHOD(t_ConvergenceCheckerOrMultiplexer, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ConvergenceCheckerOrMultiplexer)[] = {
        { Py_tp_methods, t_ConvergenceCheckerOrMultiplexer__methods_ },
        { Py_tp_init, (void *) t_ConvergenceCheckerOrMultiplexer_init_ },
        { Py_tp_getset, t_ConvergenceCheckerOrMultiplexer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ConvergenceCheckerOrMultiplexer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ConvergenceCheckerOrMultiplexer, t_ConvergenceCheckerOrMultiplexer, ConvergenceCheckerOrMultiplexer);
      PyObject *t_ConvergenceCheckerOrMultiplexer::wrap_Object(const ConvergenceCheckerOrMultiplexer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceCheckerOrMultiplexer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceCheckerOrMultiplexer *self = (t_ConvergenceCheckerOrMultiplexer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ConvergenceCheckerOrMultiplexer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceCheckerOrMultiplexer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceCheckerOrMultiplexer *self = (t_ConvergenceCheckerOrMultiplexer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ConvergenceCheckerOrMultiplexer::install(PyObject *module)
      {
        installType(&PY_TYPE(ConvergenceCheckerOrMultiplexer), &PY_TYPE_DEF(ConvergenceCheckerOrMultiplexer), module, "ConvergenceCheckerOrMultiplexer", 0);
      }

      void t_ConvergenceCheckerOrMultiplexer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerOrMultiplexer), "class_", make_descriptor(ConvergenceCheckerOrMultiplexer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerOrMultiplexer), "wrapfn_", make_descriptor(t_ConvergenceCheckerOrMultiplexer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerOrMultiplexer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ConvergenceCheckerOrMultiplexer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ConvergenceCheckerOrMultiplexer::initializeClass, 1)))
          return NULL;
        return t_ConvergenceCheckerOrMultiplexer::wrap_Object(ConvergenceCheckerOrMultiplexer(((t_ConvergenceCheckerOrMultiplexer *) arg)->object.this$));
      }
      static PyObject *t_ConvergenceCheckerOrMultiplexer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ConvergenceCheckerOrMultiplexer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ConvergenceCheckerOrMultiplexer_of_(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_ConvergenceCheckerOrMultiplexer_init_(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ConvergenceCheckerOrMultiplexer object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          INT_CALL(object = ConvergenceCheckerOrMultiplexer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ConvergenceCheckerOrMultiplexer_converged(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args)
      {
        jint a0;
        ::java::lang::Object a1((jobject) NULL);
        ::java::lang::Object a2((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "IOO", self->parameters[0], self->parameters[0], &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "converged", args);
        return NULL;
      }
      static PyObject *t_ConvergenceCheckerOrMultiplexer_get__parameters_(t_ConvergenceCheckerOrMultiplexer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/SimpleBounds.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/SimpleBounds.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *SimpleBounds::class$ = NULL;
      jmethodID *SimpleBounds::mids$ = NULL;
      bool SimpleBounds::live$ = false;

      jclass SimpleBounds::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/SimpleBounds");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0d03c8a1d7f56f02] = env->getMethodID(cls, "<init>", "([D[D)V");
          mids$[mid_getLower_7cdc325af0834901] = env->getMethodID(cls, "getLower", "()[D");
          mids$[mid_getUpper_7cdc325af0834901] = env->getMethodID(cls, "getUpper", "()[D");
          mids$[mid_unbounded_d944268fde9fcc18] = env->getStaticMethodID(cls, "unbounded", "(I)Lorg/hipparchus/optim/SimpleBounds;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimpleBounds::SimpleBounds(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0d03c8a1d7f56f02, a0.this$, a1.this$)) {}

      JArray< jdouble > SimpleBounds::getLower() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getLower_7cdc325af0834901]));
      }

      JArray< jdouble > SimpleBounds::getUpper() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getUpper_7cdc325af0834901]));
      }

      SimpleBounds SimpleBounds::unbounded(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return SimpleBounds(env->callStaticObjectMethod(cls, mids$[mid_unbounded_d944268fde9fcc18], a0));
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
      static PyObject *t_SimpleBounds_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleBounds_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SimpleBounds_init_(t_SimpleBounds *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SimpleBounds_getLower(t_SimpleBounds *self);
      static PyObject *t_SimpleBounds_getUpper(t_SimpleBounds *self);
      static PyObject *t_SimpleBounds_unbounded(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleBounds_get__lower(t_SimpleBounds *self, void *data);
      static PyObject *t_SimpleBounds_get__upper(t_SimpleBounds *self, void *data);
      static PyGetSetDef t_SimpleBounds__fields_[] = {
        DECLARE_GET_FIELD(t_SimpleBounds, lower),
        DECLARE_GET_FIELD(t_SimpleBounds, upper),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimpleBounds__methods_[] = {
        DECLARE_METHOD(t_SimpleBounds, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleBounds, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleBounds, getLower, METH_NOARGS),
        DECLARE_METHOD(t_SimpleBounds, getUpper, METH_NOARGS),
        DECLARE_METHOD(t_SimpleBounds, unbounded, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleBounds)[] = {
        { Py_tp_methods, t_SimpleBounds__methods_ },
        { Py_tp_init, (void *) t_SimpleBounds_init_ },
        { Py_tp_getset, t_SimpleBounds__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleBounds)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SimpleBounds, t_SimpleBounds, SimpleBounds);

      void t_SimpleBounds::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleBounds), &PY_TYPE_DEF(SimpleBounds), module, "SimpleBounds", 0);
      }

      void t_SimpleBounds::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleBounds), "class_", make_descriptor(SimpleBounds::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleBounds), "wrapfn_", make_descriptor(t_SimpleBounds::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleBounds), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleBounds_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleBounds::initializeClass, 1)))
          return NULL;
        return t_SimpleBounds::wrap_Object(SimpleBounds(((t_SimpleBounds *) arg)->object.this$));
      }
      static PyObject *t_SimpleBounds_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleBounds::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SimpleBounds_init_(t_SimpleBounds *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        SimpleBounds object((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          INT_CALL(object = SimpleBounds(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SimpleBounds_getLower(t_SimpleBounds *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getLower());
        return result.wrap();
      }

      static PyObject *t_SimpleBounds_getUpper(t_SimpleBounds *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getUpper());
        return result.wrap();
      }

      static PyObject *t_SimpleBounds_unbounded(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        SimpleBounds result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::optim::SimpleBounds::unbounded(a0));
          return t_SimpleBounds::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "unbounded", arg);
        return NULL;
      }

      static PyObject *t_SimpleBounds_get__lower(t_SimpleBounds *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getLower());
        return value.wrap();
      }

      static PyObject *t_SimpleBounds_get__upper(t_SimpleBounds *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getUpper());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParameters.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AdditionalParametersKey::class$ = NULL;
            jmethodID *AdditionalParametersKey::mids$ = NULL;
            bool AdditionalParametersKey::live$ = false;
            AdditionalParametersKey *AdditionalParametersKey::APOAPSIS_ALTITUDE = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_ALONG_OEB_INT = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_ALONG_OEB_MAX = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_ALONG_OEB_MIN = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_DRG = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_PC = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_PC_MAX = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_PC_MIN = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_SRP = NULL;
            AdditionalParametersKey *AdditionalParametersKey::CD_AREA_OVER_MASS = NULL;
            AdditionalParametersKey *AdditionalParametersKey::COMMENT = NULL;
            AdditionalParametersKey *AdditionalParametersKey::COV_CONFIDENCE = NULL;
            AdditionalParametersKey *AdditionalParametersKey::COV_CONFIDENCE_METHOD = NULL;
            AdditionalParametersKey *AdditionalParametersKey::CR_AREA_OVER_MASS = NULL;
            AdditionalParametersKey *AdditionalParametersKey::HBR = NULL;
            AdditionalParametersKey *AdditionalParametersKey::INCLINATION = NULL;
            AdditionalParametersKey *AdditionalParametersKey::MASS = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_INT = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_MAX = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_MIN = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_PARENT_FRAME = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_PARENT_FRAME_EPOCH = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_Q1 = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_Q2 = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_Q3 = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_QC = NULL;
            AdditionalParametersKey *AdditionalParametersKey::PERIAPSIS_ALTITUDE = NULL;
            AdditionalParametersKey *AdditionalParametersKey::RCS = NULL;
            AdditionalParametersKey *AdditionalParametersKey::RCS_MAX = NULL;
            AdditionalParametersKey *AdditionalParametersKey::RCS_MIN = NULL;
            AdditionalParametersKey *AdditionalParametersKey::REFLECTANCE = NULL;
            AdditionalParametersKey *AdditionalParametersKey::SEDR = NULL;
            AdditionalParametersKey *AdditionalParametersKey::THRUST_ACCELERATION = NULL;
            AdditionalParametersKey *AdditionalParametersKey::VM_ABSOLUTE = NULL;
            AdditionalParametersKey *AdditionalParametersKey::VM_APPARENT = NULL;
            AdditionalParametersKey *AdditionalParametersKey::VM_APPARENT_MAX = NULL;
            AdditionalParametersKey *AdditionalParametersKey::VM_APPARENT_MIN = NULL;

            jclass AdditionalParametersKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_6bfa854779e03a3e] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;)Z");
                mids$[mid_valueOf_e49ad1dccc98520f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;");
                mids$[mid_values_572dcfc1ed283fa7] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                APOAPSIS_ALTITUDE = new AdditionalParametersKey(env->getStaticObjectField(cls, "APOAPSIS_ALTITUDE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_ALONG_OEB_INT = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_INT", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_ALONG_OEB_MAX = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_ALONG_OEB_MIN = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_DRG = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_PC = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_PC", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_PC_MAX = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_PC_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_PC_MIN = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_PC_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_SRP = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_SRP", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                CD_AREA_OVER_MASS = new AdditionalParametersKey(env->getStaticObjectField(cls, "CD_AREA_OVER_MASS", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                COMMENT = new AdditionalParametersKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                COV_CONFIDENCE = new AdditionalParametersKey(env->getStaticObjectField(cls, "COV_CONFIDENCE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                COV_CONFIDENCE_METHOD = new AdditionalParametersKey(env->getStaticObjectField(cls, "COV_CONFIDENCE_METHOD", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                CR_AREA_OVER_MASS = new AdditionalParametersKey(env->getStaticObjectField(cls, "CR_AREA_OVER_MASS", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                HBR = new AdditionalParametersKey(env->getStaticObjectField(cls, "HBR", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                INCLINATION = new AdditionalParametersKey(env->getStaticObjectField(cls, "INCLINATION", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                MASS = new AdditionalParametersKey(env->getStaticObjectField(cls, "MASS", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_INT = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_INT", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_MAX = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_MIN = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_PARENT_FRAME = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_PARENT_FRAME", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_PARENT_FRAME_EPOCH = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_PARENT_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_Q1 = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_Q1", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_Q2 = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_Q2", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_Q3 = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_Q3", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_QC = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_QC", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                PERIAPSIS_ALTITUDE = new AdditionalParametersKey(env->getStaticObjectField(cls, "PERIAPSIS_ALTITUDE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                RCS = new AdditionalParametersKey(env->getStaticObjectField(cls, "RCS", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                RCS_MAX = new AdditionalParametersKey(env->getStaticObjectField(cls, "RCS_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                RCS_MIN = new AdditionalParametersKey(env->getStaticObjectField(cls, "RCS_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                REFLECTANCE = new AdditionalParametersKey(env->getStaticObjectField(cls, "REFLECTANCE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                SEDR = new AdditionalParametersKey(env->getStaticObjectField(cls, "SEDR", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                THRUST_ACCELERATION = new AdditionalParametersKey(env->getStaticObjectField(cls, "THRUST_ACCELERATION", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                VM_ABSOLUTE = new AdditionalParametersKey(env->getStaticObjectField(cls, "VM_ABSOLUTE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                VM_APPARENT = new AdditionalParametersKey(env->getStaticObjectField(cls, "VM_APPARENT", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                VM_APPARENT_MAX = new AdditionalParametersKey(env->getStaticObjectField(cls, "VM_APPARENT_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                VM_APPARENT_MIN = new AdditionalParametersKey(env->getStaticObjectField(cls, "VM_APPARENT_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean AdditionalParametersKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_6bfa854779e03a3e], a0.this$, a1.this$, a2.this$);
            }

            AdditionalParametersKey AdditionalParametersKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AdditionalParametersKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e49ad1dccc98520f], a0.this$));
            }

            JArray< AdditionalParametersKey > AdditionalParametersKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AdditionalParametersKey >(env->callStaticObjectMethod(cls, mids$[mid_values_572dcfc1ed283fa7]));
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
            static PyObject *t_AdditionalParametersKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalParametersKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalParametersKey_of_(t_AdditionalParametersKey *self, PyObject *args);
            static PyObject *t_AdditionalParametersKey_process(t_AdditionalParametersKey *self, PyObject *args);
            static PyObject *t_AdditionalParametersKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AdditionalParametersKey_values(PyTypeObject *type);
            static PyObject *t_AdditionalParametersKey_get__parameters_(t_AdditionalParametersKey *self, void *data);
            static PyGetSetDef t_AdditionalParametersKey__fields_[] = {
              DECLARE_GET_FIELD(t_AdditionalParametersKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdditionalParametersKey__methods_[] = {
              DECLARE_METHOD(t_AdditionalParametersKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParametersKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParametersKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_AdditionalParametersKey, process, METH_VARARGS),
              DECLARE_METHOD(t_AdditionalParametersKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParametersKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdditionalParametersKey)[] = {
              { Py_tp_methods, t_AdditionalParametersKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AdditionalParametersKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdditionalParametersKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AdditionalParametersKey, t_AdditionalParametersKey, AdditionalParametersKey);
            PyObject *t_AdditionalParametersKey::wrap_Object(const AdditionalParametersKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdditionalParametersKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdditionalParametersKey *self = (t_AdditionalParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AdditionalParametersKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdditionalParametersKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdditionalParametersKey *self = (t_AdditionalParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AdditionalParametersKey::install(PyObject *module)
            {
              installType(&PY_TYPE(AdditionalParametersKey), &PY_TYPE_DEF(AdditionalParametersKey), module, "AdditionalParametersKey", 0);
            }

            void t_AdditionalParametersKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "class_", make_descriptor(AdditionalParametersKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "wrapfn_", make_descriptor(t_AdditionalParametersKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(AdditionalParametersKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "APOAPSIS_ALTITUDE", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::APOAPSIS_ALTITUDE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_ALONG_OEB_INT", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_ALONG_OEB_INT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_ALONG_OEB_MAX", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_ALONG_OEB_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_ALONG_OEB_MIN", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_ALONG_OEB_MIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_DRG", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_PC", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_PC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_PC_MAX", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_PC_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_PC_MIN", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_PC_MIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_SRP", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_SRP)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "CD_AREA_OVER_MASS", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::CD_AREA_OVER_MASS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "COMMENT", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "COV_CONFIDENCE", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::COV_CONFIDENCE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "COV_CONFIDENCE_METHOD", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::COV_CONFIDENCE_METHOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "CR_AREA_OVER_MASS", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::CR_AREA_OVER_MASS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "HBR", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::HBR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "INCLINATION", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::INCLINATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "MASS", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::MASS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_INT", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_INT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_MAX", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_MIN", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_MIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_PARENT_FRAME", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_PARENT_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_PARENT_FRAME_EPOCH", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_PARENT_FRAME_EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_Q1", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_Q1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_Q2", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_Q2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_Q3", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_Q3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_QC", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_QC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "PERIAPSIS_ALTITUDE", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::PERIAPSIS_ALTITUDE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "RCS", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::RCS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "RCS_MAX", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::RCS_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "RCS_MIN", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::RCS_MIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "REFLECTANCE", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::REFLECTANCE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "SEDR", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::SEDR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "THRUST_ACCELERATION", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::THRUST_ACCELERATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "VM_ABSOLUTE", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::VM_ABSOLUTE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "VM_APPARENT", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::VM_APPARENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "VM_APPARENT_MAX", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::VM_APPARENT_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "VM_APPARENT_MIN", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::VM_APPARENT_MIN)));
            }

            static PyObject *t_AdditionalParametersKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdditionalParametersKey::initializeClass, 1)))
                return NULL;
              return t_AdditionalParametersKey::wrap_Object(AdditionalParametersKey(((t_AdditionalParametersKey *) arg)->object.this$));
            }
            static PyObject *t_AdditionalParametersKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdditionalParametersKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AdditionalParametersKey_of_(t_AdditionalParametersKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AdditionalParametersKey_process(t_AdditionalParametersKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_AdditionalParametersKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AdditionalParametersKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AdditionalParametersKey::valueOf(a0));
                return t_AdditionalParametersKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AdditionalParametersKey_values(PyTypeObject *type)
            {
              JArray< AdditionalParametersKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AdditionalParametersKey::values());
              return JArray<jobject>(result.this$).wrap(t_AdditionalParametersKey::wrap_jobject);
            }
            static PyObject *t_AdditionalParametersKey_get__parameters_(t_AdditionalParametersKey *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmCommonMetadataKey::class$ = NULL;
            jmethodID *AdmCommonMetadataKey::mids$ = NULL;
            bool AdmCommonMetadataKey::live$ = false;
            AdmCommonMetadataKey *AdmCommonMetadataKey::OBJECT_ID = NULL;

            jclass AdmCommonMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_386dab8b480d1d49] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/AdmMetadata;)Z");
                mids$[mid_valueOf_9a42a991b35d0925] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey;");
                mids$[mid_values_c0d4daaa066d0901] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                OBJECT_ID = new AdmCommonMetadataKey(env->getStaticObjectField(cls, "OBJECT_ID", "Lorg/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean AdmCommonMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::AdmMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_386dab8b480d1d49], a0.this$, a1.this$, a2.this$);
            }

            AdmCommonMetadataKey AdmCommonMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AdmCommonMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9a42a991b35d0925], a0.this$));
            }

            JArray< AdmCommonMetadataKey > AdmCommonMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AdmCommonMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_c0d4daaa066d0901]));
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
            static PyObject *t_AdmCommonMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmCommonMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmCommonMetadataKey_of_(t_AdmCommonMetadataKey *self, PyObject *args);
            static PyObject *t_AdmCommonMetadataKey_process(t_AdmCommonMetadataKey *self, PyObject *args);
            static PyObject *t_AdmCommonMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AdmCommonMetadataKey_values(PyTypeObject *type);
            static PyObject *t_AdmCommonMetadataKey_get__parameters_(t_AdmCommonMetadataKey *self, void *data);
            static PyGetSetDef t_AdmCommonMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_AdmCommonMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdmCommonMetadataKey__methods_[] = {
              DECLARE_METHOD(t_AdmCommonMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmCommonMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmCommonMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_AdmCommonMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_AdmCommonMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AdmCommonMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmCommonMetadataKey)[] = {
              { Py_tp_methods, t_AdmCommonMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AdmCommonMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmCommonMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AdmCommonMetadataKey, t_AdmCommonMetadataKey, AdmCommonMetadataKey);
            PyObject *t_AdmCommonMetadataKey::wrap_Object(const AdmCommonMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdmCommonMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmCommonMetadataKey *self = (t_AdmCommonMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AdmCommonMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdmCommonMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmCommonMetadataKey *self = (t_AdmCommonMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AdmCommonMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmCommonMetadataKey), &PY_TYPE_DEF(AdmCommonMetadataKey), module, "AdmCommonMetadataKey", 0);
            }

            void t_AdmCommonMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataKey), "class_", make_descriptor(AdmCommonMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataKey), "wrapfn_", make_descriptor(t_AdmCommonMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(AdmCommonMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataKey), "OBJECT_ID", make_descriptor(t_AdmCommonMetadataKey::wrap_Object(*AdmCommonMetadataKey::OBJECT_ID)));
            }

            static PyObject *t_AdmCommonMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmCommonMetadataKey::initializeClass, 1)))
                return NULL;
              return t_AdmCommonMetadataKey::wrap_Object(AdmCommonMetadataKey(((t_AdmCommonMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_AdmCommonMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmCommonMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AdmCommonMetadataKey_of_(t_AdmCommonMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AdmCommonMetadataKey_process(t_AdmCommonMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::adm::AdmMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::AdmMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_AdmCommonMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AdmCommonMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AdmCommonMetadataKey::valueOf(a0));
                return t_AdmCommonMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AdmCommonMetadataKey_values(PyTypeObject *type)
            {
              JArray< AdmCommonMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AdmCommonMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_AdmCommonMetadataKey::wrap_jobject);
            }
            static PyObject *t_AdmCommonMetadataKey_get__parameters_(t_AdmCommonMetadataKey *self, void *data)
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
#include "org/orekit/time/UTCTAIHistoryFilesLoader$Parser.h"
#include "java/io/IOException.h"
#include "java/util/List.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/io/InputStream.h"
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIHistoryFilesLoader$Parser::class$ = NULL;
      jmethodID *UTCTAIHistoryFilesLoader$Parser::mids$ = NULL;
      bool UTCTAIHistoryFilesLoader$Parser::live$ = false;

      jclass UTCTAIHistoryFilesLoader$Parser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIHistoryFilesLoader$Parser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_parse_90de289641581563] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UTCTAIHistoryFilesLoader$Parser::UTCTAIHistoryFilesLoader$Parser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      ::java::util::List UTCTAIHistoryFilesLoader$Parser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parse_90de289641581563], a0.this$, a1.this$));
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
      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UTCTAIHistoryFilesLoader$Parser_init_(t_UTCTAIHistoryFilesLoader$Parser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_parse(t_UTCTAIHistoryFilesLoader$Parser *self, PyObject *args);

      static PyMethodDef t_UTCTAIHistoryFilesLoader$Parser__methods_[] = {
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader$Parser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader$Parser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader$Parser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIHistoryFilesLoader$Parser)[] = {
        { Py_tp_methods, t_UTCTAIHistoryFilesLoader$Parser__methods_ },
        { Py_tp_init, (void *) t_UTCTAIHistoryFilesLoader$Parser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIHistoryFilesLoader$Parser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UTCTAIHistoryFilesLoader$Parser, t_UTCTAIHistoryFilesLoader$Parser, UTCTAIHistoryFilesLoader$Parser);

      void t_UTCTAIHistoryFilesLoader$Parser::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIHistoryFilesLoader$Parser), &PY_TYPE_DEF(UTCTAIHistoryFilesLoader$Parser), module, "UTCTAIHistoryFilesLoader$Parser", 0);
      }

      void t_UTCTAIHistoryFilesLoader$Parser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader$Parser), "class_", make_descriptor(UTCTAIHistoryFilesLoader$Parser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader$Parser), "wrapfn_", make_descriptor(t_UTCTAIHistoryFilesLoader$Parser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader$Parser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIHistoryFilesLoader$Parser::initializeClass, 1)))
          return NULL;
        return t_UTCTAIHistoryFilesLoader$Parser::wrap_Object(UTCTAIHistoryFilesLoader$Parser(((t_UTCTAIHistoryFilesLoader$Parser *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIHistoryFilesLoader$Parser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UTCTAIHistoryFilesLoader$Parser_init_(t_UTCTAIHistoryFilesLoader$Parser *self, PyObject *args, PyObject *kwds)
      {
        UTCTAIHistoryFilesLoader$Parser object((jobject) NULL);

        INT_CALL(object = UTCTAIHistoryFilesLoader$Parser());
        self->object = object;

        return 0;
      }

      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_parse(t_UTCTAIHistoryFilesLoader$Parser *self, PyObject *args)
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
#include "org/orekit/estimation/measurements/generation/ContinuousScheduler.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "org/orekit/time/DatesSelector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
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
              mids$[mid_init$_30703ff0587c737c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;Lorg/orekit/time/DatesSelector;)V");
              mids$[mid_measurementIsFeasible_ee2067c5768b6768] = env->getMethodID(cls, "measurementIsFeasible", "(Lorg/orekit/time/AbsoluteDate;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ContinuousScheduler::ContinuousScheduler(const ::org::orekit::estimation::measurements::generation::MeasurementBuilder & a0, const ::org::orekit::time::DatesSelector & a1) : ::org::orekit::estimation::measurements::generation::AbstractScheduler(env->newObject(initializeClass, &mids$, mid_init$_30703ff0587c737c, a0.this$, a1.this$)) {}

          jboolean ContinuousScheduler::measurementIsFeasible(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_measurementIsFeasible_ee2067c5768b6768], a0.this$);
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/LevyDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *LevyDistribution::class$ = NULL;
        jmethodID *LevyDistribution::mids$ = NULL;
        bool LevyDistribution::live$ = false;

        jclass LevyDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/LevyDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_0ba5fed9597b693e] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getLocation_456d9a2f64d6b28d] = env->getMethodID(cls, "getLocation", "()D");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_456d9a2f64d6b28d] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getSupportLowerBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_0ba5fed9597b693e] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LevyDistribution::LevyDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        jdouble LevyDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_0ba5fed9597b693e], a0);
        }

        jdouble LevyDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_0ba5fed9597b693e], a0);
        }

        jdouble LevyDistribution::getLocation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLocation_456d9a2f64d6b28d]);
        }

        jdouble LevyDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble LevyDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        jdouble LevyDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_456d9a2f64d6b28d]);
        }

        jdouble LevyDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_456d9a2f64d6b28d]);
        }

        jdouble LevyDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_456d9a2f64d6b28d]);
        }

        jdouble LevyDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e], a0);
        }

        jboolean LevyDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
        }

        jdouble LevyDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_0ba5fed9597b693e], a0);
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
        static PyObject *t_LevyDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LevyDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LevyDistribution_init_(t_LevyDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LevyDistribution_cumulativeProbability(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_density(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_getLocation(t_LevyDistribution *self);
        static PyObject *t_LevyDistribution_getNumericalMean(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_getNumericalVariance(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_getScale(t_LevyDistribution *self);
        static PyObject *t_LevyDistribution_getSupportLowerBound(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_getSupportUpperBound(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_inverseCumulativeProbability(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_isSupportConnected(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_logDensity(t_LevyDistribution *self, PyObject *args);
        static PyObject *t_LevyDistribution_get__location(t_LevyDistribution *self, void *data);
        static PyObject *t_LevyDistribution_get__numericalMean(t_LevyDistribution *self, void *data);
        static PyObject *t_LevyDistribution_get__numericalVariance(t_LevyDistribution *self, void *data);
        static PyObject *t_LevyDistribution_get__scale(t_LevyDistribution *self, void *data);
        static PyObject *t_LevyDistribution_get__supportConnected(t_LevyDistribution *self, void *data);
        static PyObject *t_LevyDistribution_get__supportLowerBound(t_LevyDistribution *self, void *data);
        static PyObject *t_LevyDistribution_get__supportUpperBound(t_LevyDistribution *self, void *data);
        static PyGetSetDef t_LevyDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_LevyDistribution, location),
          DECLARE_GET_FIELD(t_LevyDistribution, numericalMean),
          DECLARE_GET_FIELD(t_LevyDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_LevyDistribution, scale),
          DECLARE_GET_FIELD(t_LevyDistribution, supportConnected),
          DECLARE_GET_FIELD(t_LevyDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_LevyDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LevyDistribution__methods_[] = {
          DECLARE_METHOD(t_LevyDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LevyDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LevyDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, getLocation, METH_NOARGS),
          DECLARE_METHOD(t_LevyDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_LevyDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_LevyDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LevyDistribution)[] = {
          { Py_tp_methods, t_LevyDistribution__methods_ },
          { Py_tp_init, (void *) t_LevyDistribution_init_ },
          { Py_tp_getset, t_LevyDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LevyDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(LevyDistribution, t_LevyDistribution, LevyDistribution);

        void t_LevyDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(LevyDistribution), &PY_TYPE_DEF(LevyDistribution), module, "LevyDistribution", 0);
        }

        void t_LevyDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LevyDistribution), "class_", make_descriptor(LevyDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LevyDistribution), "wrapfn_", make_descriptor(t_LevyDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LevyDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LevyDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LevyDistribution::initializeClass, 1)))
            return NULL;
          return t_LevyDistribution::wrap_Object(LevyDistribution(((t_LevyDistribution *) arg)->object.this$));
        }
        static PyObject *t_LevyDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LevyDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LevyDistribution_init_(t_LevyDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          LevyDistribution object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = LevyDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LevyDistribution_cumulativeProbability(t_LevyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_LevyDistribution_density(t_LevyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_LevyDistribution_getLocation(t_LevyDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLocation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LevyDistribution_getNumericalMean(t_LevyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_LevyDistribution_getNumericalVariance(t_LevyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_LevyDistribution_getScale(t_LevyDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LevyDistribution_getSupportLowerBound(t_LevyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_LevyDistribution_getSupportUpperBound(t_LevyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_LevyDistribution_inverseCumulativeProbability(t_LevyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_LevyDistribution_isSupportConnected(t_LevyDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_LevyDistribution_logDensity(t_LevyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LevyDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_LevyDistribution_get__location(t_LevyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLocation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LevyDistribution_get__numericalMean(t_LevyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LevyDistribution_get__numericalVariance(t_LevyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LevyDistribution_get__scale(t_LevyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LevyDistribution_get__supportConnected(t_LevyDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_LevyDistribution_get__supportLowerBound(t_LevyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LevyDistribution_get__supportUpperBound(t_LevyDistribution *self, void *data)
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
#include "java/util/stream/DoubleStream.h"
#include "java/util/function/Supplier.h"
#include "java/util/stream/Stream.h"
#include "java/lang/Double.h"
#include "java/util/stream/DoubleStream.h"
#include "java/util/PrimitiveIterator$OfDouble.h"
#include "java/util/DoubleSummaryStatistics.h"
#include "java/util/Spliterator$OfDouble.h"
#include "java/util/OptionalDouble.h"
#include "java/lang/Class.h"
#include "java/util/function/DoubleConsumer.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace stream {

      ::java::lang::Class *DoubleStream::class$ = NULL;
      jmethodID *DoubleStream::mids$ = NULL;
      bool DoubleStream::live$ = false;

      jclass DoubleStream::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/stream/DoubleStream");

          mids$ = new jmethodID[max_mid];
          mids$[mid_average_146894f57b982226] = env->getMethodID(cls, "average", "()Ljava/util/OptionalDouble;");
          mids$[mid_boxed_a68a17dd093f796d] = env->getMethodID(cls, "boxed", "()Ljava/util/stream/Stream;");
          mids$[mid_concat_a520ab7ce0bc91f7] = env->getStaticMethodID(cls, "concat", "(Ljava/util/stream/DoubleStream;Ljava/util/stream/DoubleStream;)Ljava/util/stream/DoubleStream;");
          mids$[mid_count_a27fc9afd27e559d] = env->getMethodID(cls, "count", "()J");
          mids$[mid_distinct_2c8690a58875e3ae] = env->getMethodID(cls, "distinct", "()Ljava/util/stream/DoubleStream;");
          mids$[mid_empty_2c8690a58875e3ae] = env->getStaticMethodID(cls, "empty", "()Ljava/util/stream/DoubleStream;");
          mids$[mid_findAny_146894f57b982226] = env->getMethodID(cls, "findAny", "()Ljava/util/OptionalDouble;");
          mids$[mid_findFirst_146894f57b982226] = env->getMethodID(cls, "findFirst", "()Ljava/util/OptionalDouble;");
          mids$[mid_forEach_46bb77b3436e630a] = env->getMethodID(cls, "forEach", "(Ljava/util/function/DoubleConsumer;)V");
          mids$[mid_forEachOrdered_46bb77b3436e630a] = env->getMethodID(cls, "forEachOrdered", "(Ljava/util/function/DoubleConsumer;)V");
          mids$[mid_iterator_8d42d23f355abfe4] = env->getMethodID(cls, "iterator", "()Ljava/util/PrimitiveIterator$OfDouble;");
          mids$[mid_limit_19dd39eae6a70cf7] = env->getMethodID(cls, "limit", "(J)Ljava/util/stream/DoubleStream;");
          mids$[mid_max_146894f57b982226] = env->getMethodID(cls, "max", "()Ljava/util/OptionalDouble;");
          mids$[mid_min_146894f57b982226] = env->getMethodID(cls, "min", "()Ljava/util/OptionalDouble;");
          mids$[mid_of_d042e1ca31d645c7] = env->getStaticMethodID(cls, "of", "([D)Ljava/util/stream/DoubleStream;");
          mids$[mid_of_3ece1b72cdf6ad44] = env->getStaticMethodID(cls, "of", "(D)Ljava/util/stream/DoubleStream;");
          mids$[mid_parallel_2c8690a58875e3ae] = env->getMethodID(cls, "parallel", "()Ljava/util/stream/DoubleStream;");
          mids$[mid_peek_85d27fb759ccefaf] = env->getMethodID(cls, "peek", "(Ljava/util/function/DoubleConsumer;)Ljava/util/stream/DoubleStream;");
          mids$[mid_sequential_2c8690a58875e3ae] = env->getMethodID(cls, "sequential", "()Ljava/util/stream/DoubleStream;");
          mids$[mid_skip_19dd39eae6a70cf7] = env->getMethodID(cls, "skip", "(J)Ljava/util/stream/DoubleStream;");
          mids$[mid_sorted_2c8690a58875e3ae] = env->getMethodID(cls, "sorted", "()Ljava/util/stream/DoubleStream;");
          mids$[mid_spliterator_ef028836b616dec4] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator$OfDouble;");
          mids$[mid_sum_456d9a2f64d6b28d] = env->getMethodID(cls, "sum", "()D");
          mids$[mid_summaryStatistics_0edb1d479a8a0f8a] = env->getMethodID(cls, "summaryStatistics", "()Ljava/util/DoubleSummaryStatistics;");
          mids$[mid_toArray_7cdc325af0834901] = env->getMethodID(cls, "toArray", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::OptionalDouble DoubleStream::average() const
      {
        return ::java::util::OptionalDouble(env->callObjectMethod(this$, mids$[mid_average_146894f57b982226]));
      }

      ::java::util::stream::Stream DoubleStream::boxed() const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_boxed_a68a17dd093f796d]));
      }

      DoubleStream DoubleStream::concat(const DoubleStream & a0, const DoubleStream & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_concat_a520ab7ce0bc91f7], a0.this$, a1.this$));
      }

      jlong DoubleStream::count() const
      {
        return env->callLongMethod(this$, mids$[mid_count_a27fc9afd27e559d]);
      }

      DoubleStream DoubleStream::distinct() const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_distinct_2c8690a58875e3ae]));
      }

      DoubleStream DoubleStream::empty()
      {
        jclass cls = env->getClass(initializeClass);
        return DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_empty_2c8690a58875e3ae]));
      }

      ::java::util::OptionalDouble DoubleStream::findAny() const
      {
        return ::java::util::OptionalDouble(env->callObjectMethod(this$, mids$[mid_findAny_146894f57b982226]));
      }

      ::java::util::OptionalDouble DoubleStream::findFirst() const
      {
        return ::java::util::OptionalDouble(env->callObjectMethod(this$, mids$[mid_findFirst_146894f57b982226]));
      }

      void DoubleStream::forEach(const ::java::util::function::DoubleConsumer & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_forEach_46bb77b3436e630a], a0.this$);
      }

      void DoubleStream::forEachOrdered(const ::java::util::function::DoubleConsumer & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_forEachOrdered_46bb77b3436e630a], a0.this$);
      }

      ::java::util::PrimitiveIterator$OfDouble DoubleStream::iterator() const
      {
        return ::java::util::PrimitiveIterator$OfDouble(env->callObjectMethod(this$, mids$[mid_iterator_8d42d23f355abfe4]));
      }

      DoubleStream DoubleStream::limit(jlong a0) const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_limit_19dd39eae6a70cf7], a0));
      }

      ::java::util::OptionalDouble DoubleStream::max$() const
      {
        return ::java::util::OptionalDouble(env->callObjectMethod(this$, mids$[mid_max_146894f57b982226]));
      }

      ::java::util::OptionalDouble DoubleStream::min$() const
      {
        return ::java::util::OptionalDouble(env->callObjectMethod(this$, mids$[mid_min_146894f57b982226]));
      }

      DoubleStream DoubleStream::of(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_of_d042e1ca31d645c7], a0.this$));
      }

      DoubleStream DoubleStream::of(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_of_3ece1b72cdf6ad44], a0));
      }

      DoubleStream DoubleStream::parallel() const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_parallel_2c8690a58875e3ae]));
      }

      DoubleStream DoubleStream::peek(const ::java::util::function::DoubleConsumer & a0) const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_peek_85d27fb759ccefaf], a0.this$));
      }

      DoubleStream DoubleStream::sequential() const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_sequential_2c8690a58875e3ae]));
      }

      DoubleStream DoubleStream::skip(jlong a0) const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_skip_19dd39eae6a70cf7], a0));
      }

      DoubleStream DoubleStream::sorted() const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_sorted_2c8690a58875e3ae]));
      }

      ::java::util::Spliterator$OfDouble DoubleStream::spliterator() const
      {
        return ::java::util::Spliterator$OfDouble(env->callObjectMethod(this$, mids$[mid_spliterator_ef028836b616dec4]));
      }

      jdouble DoubleStream::sum() const
      {
        return env->callDoubleMethod(this$, mids$[mid_sum_456d9a2f64d6b28d]);
      }

      ::java::util::DoubleSummaryStatistics DoubleStream::summaryStatistics() const
      {
        return ::java::util::DoubleSummaryStatistics(env->callObjectMethod(this$, mids$[mid_summaryStatistics_0edb1d479a8a0f8a]));
      }

      JArray< jdouble > DoubleStream::toArray() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_7cdc325af0834901]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    namespace stream {
      static PyObject *t_DoubleStream_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleStream_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleStream_average(t_DoubleStream *self);
      static PyObject *t_DoubleStream_boxed(t_DoubleStream *self);
      static PyObject *t_DoubleStream_concat(PyTypeObject *type, PyObject *args);
      static PyObject *t_DoubleStream_count(t_DoubleStream *self);
      static PyObject *t_DoubleStream_distinct(t_DoubleStream *self);
      static PyObject *t_DoubleStream_empty(PyTypeObject *type);
      static PyObject *t_DoubleStream_findAny(t_DoubleStream *self);
      static PyObject *t_DoubleStream_findFirst(t_DoubleStream *self);
      static PyObject *t_DoubleStream_forEach(t_DoubleStream *self, PyObject *arg);
      static PyObject *t_DoubleStream_forEachOrdered(t_DoubleStream *self, PyObject *arg);
      static PyObject *t_DoubleStream_iterator(t_DoubleStream *self);
      static PyObject *t_DoubleStream_limit(t_DoubleStream *self, PyObject *arg);
      static PyObject *t_DoubleStream_max(t_DoubleStream *self);
      static PyObject *t_DoubleStream_min(t_DoubleStream *self);
      static PyObject *t_DoubleStream_of(PyTypeObject *type, PyObject *args);
      static PyObject *t_DoubleStream_parallel(t_DoubleStream *self);
      static PyObject *t_DoubleStream_peek(t_DoubleStream *self, PyObject *arg);
      static PyObject *t_DoubleStream_sequential(t_DoubleStream *self);
      static PyObject *t_DoubleStream_skip(t_DoubleStream *self, PyObject *arg);
      static PyObject *t_DoubleStream_sorted(t_DoubleStream *self);
      static PyObject *t_DoubleStream_spliterator(t_DoubleStream *self);
      static PyObject *t_DoubleStream_sum(t_DoubleStream *self);
      static PyObject *t_DoubleStream_summaryStatistics(t_DoubleStream *self);
      static PyObject *t_DoubleStream_toArray(t_DoubleStream *self);

      static PyMethodDef t_DoubleStream__methods_[] = {
        DECLARE_METHOD(t_DoubleStream, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleStream, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleStream, average, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, boxed, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, concat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DoubleStream, count, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, distinct, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, empty, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_DoubleStream, findAny, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, findFirst, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, forEach, METH_O),
        DECLARE_METHOD(t_DoubleStream, forEachOrdered, METH_O),
        DECLARE_METHOD(t_DoubleStream, iterator, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, limit, METH_O),
        DECLARE_METHOD(t_DoubleStream, max, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, min, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, of, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DoubleStream, parallel, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, peek, METH_O),
        DECLARE_METHOD(t_DoubleStream, sequential, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, skip, METH_O),
        DECLARE_METHOD(t_DoubleStream, sorted, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, spliterator, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, sum, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, summaryStatistics, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, toArray, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DoubleStream)[] = {
        { Py_tp_methods, t_DoubleStream__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DoubleStream)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DoubleStream, t_DoubleStream, DoubleStream);

      void t_DoubleStream::install(PyObject *module)
      {
        installType(&PY_TYPE(DoubleStream), &PY_TYPE_DEF(DoubleStream), module, "DoubleStream", 0);
      }

      void t_DoubleStream::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleStream), "class_", make_descriptor(DoubleStream::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleStream), "wrapfn_", make_descriptor(t_DoubleStream::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleStream), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DoubleStream_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DoubleStream::initializeClass, 1)))
          return NULL;
        return t_DoubleStream::wrap_Object(DoubleStream(((t_DoubleStream *) arg)->object.this$));
      }
      static PyObject *t_DoubleStream_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DoubleStream::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DoubleStream_average(t_DoubleStream *self)
      {
        ::java::util::OptionalDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.average());
        return ::java::util::t_OptionalDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_boxed(t_DoubleStream *self)
      {
        ::java::util::stream::Stream result((jobject) NULL);
        OBJ_CALL(result = self->object.boxed());
        return ::java::util::stream::t_Stream::wrap_Object(result, ::java::lang::PY_TYPE(Double));
      }

      static PyObject *t_DoubleStream_concat(PyTypeObject *type, PyObject *args)
      {
        DoubleStream a0((jobject) NULL);
        DoubleStream a1((jobject) NULL);
        DoubleStream result((jobject) NULL);

        if (!parseArgs(args, "kk", DoubleStream::initializeClass, DoubleStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::java::util::stream::DoubleStream::concat(a0, a1));
          return t_DoubleStream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "concat", args);
        return NULL;
      }

      static PyObject *t_DoubleStream_count(t_DoubleStream *self)
      {
        jlong result;
        OBJ_CALL(result = self->object.count());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      static PyObject *t_DoubleStream_distinct(t_DoubleStream *self)
      {
        DoubleStream result((jobject) NULL);
        OBJ_CALL(result = self->object.distinct());
        return t_DoubleStream::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_empty(PyTypeObject *type)
      {
        DoubleStream result((jobject) NULL);
        OBJ_CALL(result = ::java::util::stream::DoubleStream::empty());
        return t_DoubleStream::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_findAny(t_DoubleStream *self)
      {
        ::java::util::OptionalDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.findAny());
        return ::java::util::t_OptionalDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_findFirst(t_DoubleStream *self)
      {
        ::java::util::OptionalDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.findFirst());
        return ::java::util::t_OptionalDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_forEach(t_DoubleStream *self, PyObject *arg)
      {
        ::java::util::function::DoubleConsumer a0((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::function::DoubleConsumer::initializeClass, &a0))
        {
          OBJ_CALL(self->object.forEach(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "forEach", arg);
        return NULL;
      }

      static PyObject *t_DoubleStream_forEachOrdered(t_DoubleStream *self, PyObject *arg)
      {
        ::java::util::function::DoubleConsumer a0((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::function::DoubleConsumer::initializeClass, &a0))
        {
          OBJ_CALL(self->object.forEachOrdered(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "forEachOrdered", arg);
        return NULL;
      }

      static PyObject *t_DoubleStream_iterator(t_DoubleStream *self)
      {
        ::java::util::PrimitiveIterator$OfDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_PrimitiveIterator$OfDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_limit(t_DoubleStream *self, PyObject *arg)
      {
        jlong a0;
        DoubleStream result((jobject) NULL);

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = self->object.limit(a0));
          return t_DoubleStream::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "limit", arg);
        return NULL;
      }

      static PyObject *t_DoubleStream_max(t_DoubleStream *self)
      {
        ::java::util::OptionalDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.max$());
        return ::java::util::t_OptionalDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_min(t_DoubleStream *self)
      {
        ::java::util::OptionalDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.min$());
        return ::java::util::t_OptionalDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_of(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            DoubleStream result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::java::util::stream::DoubleStream::of(a0));
              return t_DoubleStream::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            DoubleStream result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::java::util::stream::DoubleStream::of(a0));
              return t_DoubleStream::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "of", args);
        return NULL;
      }

      static PyObject *t_DoubleStream_parallel(t_DoubleStream *self)
      {
        DoubleStream result((jobject) NULL);
        OBJ_CALL(result = self->object.parallel());
        return t_DoubleStream::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_peek(t_DoubleStream *self, PyObject *arg)
      {
        ::java::util::function::DoubleConsumer a0((jobject) NULL);
        DoubleStream result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::function::DoubleConsumer::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.peek(a0));
          return t_DoubleStream::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "peek", arg);
        return NULL;
      }

      static PyObject *t_DoubleStream_sequential(t_DoubleStream *self)
      {
        DoubleStream result((jobject) NULL);
        OBJ_CALL(result = self->object.sequential());
        return t_DoubleStream::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_skip(t_DoubleStream *self, PyObject *arg)
      {
        jlong a0;
        DoubleStream result((jobject) NULL);

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = self->object.skip(a0));
          return t_DoubleStream::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "skip", arg);
        return NULL;
      }

      static PyObject *t_DoubleStream_sorted(t_DoubleStream *self)
      {
        DoubleStream result((jobject) NULL);
        OBJ_CALL(result = self->object.sorted());
        return t_DoubleStream::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_spliterator(t_DoubleStream *self)
      {
        ::java::util::Spliterator$OfDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator$OfDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_sum(t_DoubleStream *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.sum());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DoubleStream_summaryStatistics(t_DoubleStream *self)
      {
        ::java::util::DoubleSummaryStatistics result((jobject) NULL);
        OBJ_CALL(result = self->object.summaryStatistics());
        return ::java::util::t_DoubleSummaryStatistics::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_toArray(t_DoubleStream *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return result.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/raster/SimpleTile.h"
#include "org/orekit/rugged/raster/Tile$Location.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/orekit/rugged/raster/Tile.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *SimpleTile::class$ = NULL;
        jmethodID *SimpleTile::mids$ = NULL;
        bool SimpleTile::live$ = false;

        jclass SimpleTile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/SimpleTile");

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
            mids$[mid_setElevation_78e41e7b5124a628] = env->getMethodID(cls, "setElevation", "(IID)V");
            mids$[mid_setGeometry_a18a8bf2dc472ce4] = env->getMethodID(cls, "setGeometry", "(DDDDII)V");
            mids$[mid_tileUpdateCompleted_7ae3461a92a43152] = env->getMethodID(cls, "tileUpdateCompleted", "()V");
            mids$[mid_processUpdatedElevation_ebc26dcaf4761286] = env->getMethodID(cls, "processUpdatedElevation", "([D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint SimpleTile::cellIntersection(const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jint a2, jint a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_cellIntersection_2421dbb15f4ac362], a0.this$, a1.this$, a2, a3));
        }

        jdouble SimpleTile::getElevationAtIndices(jint a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevationAtIndices_a84e4ee1da3f1ab8], a0, a1);
        }

        jint SimpleTile::getFloorLatitudeIndex(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getFloorLatitudeIndex_12ebab281ee35c98], a0);
        }

        jint SimpleTile::getFloorLongitudeIndex(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getFloorLongitudeIndex_12ebab281ee35c98], a0);
        }

        jdouble SimpleTile::getLatitudeAtIndex(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitudeAtIndex_b772323fc98b7293], a0);
        }

        jint SimpleTile::getLatitudeRows() const
        {
          return env->callIntMethod(this$, mids$[mid_getLatitudeRows_f2f64475e4580546]);
        }

        jdouble SimpleTile::getLatitudeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitudeStep_456d9a2f64d6b28d]);
        }

        ::org::orekit::rugged::raster::Tile$Location SimpleTile::getLocation(jdouble a0, jdouble a1) const
        {
          return ::org::orekit::rugged::raster::Tile$Location(env->callObjectMethod(this$, mids$[mid_getLocation_fb92501bac4b7f46], a0, a1));
        }

        jdouble SimpleTile::getLongitudeAtIndex(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitudeAtIndex_b772323fc98b7293], a0);
        }

        jint SimpleTile::getLongitudeColumns() const
        {
          return env->callIntMethod(this$, mids$[mid_getLongitudeColumns_f2f64475e4580546]);
        }

        jdouble SimpleTile::getLongitudeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitudeStep_456d9a2f64d6b28d]);
        }

        jdouble SimpleTile::getMaxElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxElevation_456d9a2f64d6b28d]);
        }

        jint SimpleTile::getMaxElevationLatitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxElevationLatitudeIndex_f2f64475e4580546]);
        }

        jint SimpleTile::getMaxElevationLongitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxElevationLongitudeIndex_f2f64475e4580546]);
        }

        jdouble SimpleTile::getMaximumLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaximumLatitude_456d9a2f64d6b28d]);
        }

        jdouble SimpleTile::getMaximumLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaximumLongitude_456d9a2f64d6b28d]);
        }

        jdouble SimpleTile::getMinElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinElevation_456d9a2f64d6b28d]);
        }

        jint SimpleTile::getMinElevationLatitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinElevationLatitudeIndex_f2f64475e4580546]);
        }

        jint SimpleTile::getMinElevationLongitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinElevationLongitudeIndex_f2f64475e4580546]);
        }

        jdouble SimpleTile::getMinimumLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinimumLatitude_456d9a2f64d6b28d]);
        }

        jdouble SimpleTile::getMinimumLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinimumLongitude_456d9a2f64d6b28d]);
        }

        jdouble SimpleTile::interpolateElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_interpolateElevation_824133ce4aec3505], a0, a1);
        }

        void SimpleTile::setElevation(jint a0, jint a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_setElevation_78e41e7b5124a628], a0, a1, a2);
        }

        void SimpleTile::setGeometry(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_setGeometry_a18a8bf2dc472ce4], a0, a1, a2, a3, a4, a5);
        }

        void SimpleTile::tileUpdateCompleted() const
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
        static PyObject *t_SimpleTile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleTile_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleTile_cellIntersection(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_getElevationAtIndices(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_getFloorLatitudeIndex(t_SimpleTile *self, PyObject *arg);
        static PyObject *t_SimpleTile_getFloorLongitudeIndex(t_SimpleTile *self, PyObject *arg);
        static PyObject *t_SimpleTile_getLatitudeAtIndex(t_SimpleTile *self, PyObject *arg);
        static PyObject *t_SimpleTile_getLatitudeRows(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getLatitudeStep(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getLocation(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_getLongitudeAtIndex(t_SimpleTile *self, PyObject *arg);
        static PyObject *t_SimpleTile_getLongitudeColumns(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getLongitudeStep(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMaxElevation(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMaxElevationLatitudeIndex(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMaxElevationLongitudeIndex(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMaximumLatitude(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMaximumLongitude(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMinElevation(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMinElevationLatitudeIndex(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMinElevationLongitudeIndex(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMinimumLatitude(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMinimumLongitude(t_SimpleTile *self);
        static PyObject *t_SimpleTile_interpolateElevation(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_setElevation(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_setGeometry(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_tileUpdateCompleted(t_SimpleTile *self);
        static PyObject *t_SimpleTile_get__latitudeRows(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__latitudeStep(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__longitudeColumns(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__longitudeStep(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__maxElevation(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__maxElevationLatitudeIndex(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__maxElevationLongitudeIndex(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__maximumLatitude(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__maximumLongitude(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__minElevation(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__minElevationLatitudeIndex(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__minElevationLongitudeIndex(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__minimumLatitude(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__minimumLongitude(t_SimpleTile *self, void *data);
        static PyGetSetDef t_SimpleTile__fields_[] = {
          DECLARE_GET_FIELD(t_SimpleTile, latitudeRows),
          DECLARE_GET_FIELD(t_SimpleTile, latitudeStep),
          DECLARE_GET_FIELD(t_SimpleTile, longitudeColumns),
          DECLARE_GET_FIELD(t_SimpleTile, longitudeStep),
          DECLARE_GET_FIELD(t_SimpleTile, maxElevation),
          DECLARE_GET_FIELD(t_SimpleTile, maxElevationLatitudeIndex),
          DECLARE_GET_FIELD(t_SimpleTile, maxElevationLongitudeIndex),
          DECLARE_GET_FIELD(t_SimpleTile, maximumLatitude),
          DECLARE_GET_FIELD(t_SimpleTile, maximumLongitude),
          DECLARE_GET_FIELD(t_SimpleTile, minElevation),
          DECLARE_GET_FIELD(t_SimpleTile, minElevationLatitudeIndex),
          DECLARE_GET_FIELD(t_SimpleTile, minElevationLongitudeIndex),
          DECLARE_GET_FIELD(t_SimpleTile, minimumLatitude),
          DECLARE_GET_FIELD(t_SimpleTile, minimumLongitude),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SimpleTile__methods_[] = {
          DECLARE_METHOD(t_SimpleTile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleTile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleTile, cellIntersection, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, getElevationAtIndices, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, getFloorLatitudeIndex, METH_O),
          DECLARE_METHOD(t_SimpleTile, getFloorLongitudeIndex, METH_O),
          DECLARE_METHOD(t_SimpleTile, getLatitudeAtIndex, METH_O),
          DECLARE_METHOD(t_SimpleTile, getLatitudeRows, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getLatitudeStep, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getLocation, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, getLongitudeAtIndex, METH_O),
          DECLARE_METHOD(t_SimpleTile, getLongitudeColumns, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getLongitudeStep, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMaxElevation, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMaxElevationLatitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMaxElevationLongitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMaximumLatitude, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMaximumLongitude, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMinElevation, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMinElevationLatitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMinElevationLongitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMinimumLatitude, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMinimumLongitude, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, interpolateElevation, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, setElevation, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, setGeometry, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, tileUpdateCompleted, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimpleTile)[] = {
          { Py_tp_methods, t_SimpleTile__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SimpleTile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimpleTile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SimpleTile, t_SimpleTile, SimpleTile);

        void t_SimpleTile::install(PyObject *module)
        {
          installType(&PY_TYPE(SimpleTile), &PY_TYPE_DEF(SimpleTile), module, "SimpleTile", 0);
        }

        void t_SimpleTile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTile), "class_", make_descriptor(SimpleTile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTile), "wrapfn_", make_descriptor(t_SimpleTile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SimpleTile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimpleTile::initializeClass, 1)))
            return NULL;
          return t_SimpleTile::wrap_Object(SimpleTile(((t_SimpleTile *) arg)->object.this$));
        }
        static PyObject *t_SimpleTile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimpleTile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SimpleTile_cellIntersection(t_SimpleTile *self, PyObject *args)
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

        static PyObject *t_SimpleTile_getElevationAtIndices(t_SimpleTile *self, PyObject *args)
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

        static PyObject *t_SimpleTile_getFloorLatitudeIndex(t_SimpleTile *self, PyObject *arg)
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

        static PyObject *t_SimpleTile_getFloorLongitudeIndex(t_SimpleTile *self, PyObject *arg)
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

        static PyObject *t_SimpleTile_getLatitudeAtIndex(t_SimpleTile *self, PyObject *arg)
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

        static PyObject *t_SimpleTile_getLatitudeRows(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getLatitudeRows());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getLatitudeStep(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLatitudeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getLocation(t_SimpleTile *self, PyObject *args)
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

        static PyObject *t_SimpleTile_getLongitudeAtIndex(t_SimpleTile *self, PyObject *arg)
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

        static PyObject *t_SimpleTile_getLongitudeColumns(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getLongitudeColumns());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getLongitudeStep(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLongitudeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMaxElevation(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMaxElevationLatitudeIndex(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxElevationLatitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getMaxElevationLongitudeIndex(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxElevationLongitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getMaximumLatitude(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaximumLatitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMaximumLongitude(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaximumLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMinElevation(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMinElevationLatitudeIndex(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinElevationLatitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getMinElevationLongitudeIndex(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinElevationLongitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getMinimumLatitude(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinimumLatitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMinimumLongitude(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinimumLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_interpolateElevation(t_SimpleTile *self, PyObject *args)
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

        static PyObject *t_SimpleTile_setElevation(t_SimpleTile *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble a2;

          if (!parseArgs(args, "IID", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.setElevation(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setElevation", args);
          return NULL;
        }

        static PyObject *t_SimpleTile_setGeometry(t_SimpleTile *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          jint a4;
          jint a5;

          if (!parseArgs(args, "DDDDII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(self->object.setGeometry(a0, a1, a2, a3, a4, a5));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setGeometry", args);
          return NULL;
        }

        static PyObject *t_SimpleTile_tileUpdateCompleted(t_SimpleTile *self)
        {
          OBJ_CALL(self->object.tileUpdateCompleted());
          Py_RETURN_NONE;
        }

        static PyObject *t_SimpleTile_get__latitudeRows(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getLatitudeRows());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__latitudeStep(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLatitudeStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__longitudeColumns(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getLongitudeColumns());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__longitudeStep(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLongitudeStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__maxElevation(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__maxElevationLatitudeIndex(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxElevationLatitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__maxElevationLongitudeIndex(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxElevationLongitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__maximumLatitude(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaximumLatitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__maximumLongitude(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaximumLongitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__minElevation(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__minElevationLatitudeIndex(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinElevationLatitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__minElevationLongitudeIndex(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinElevationLongitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__minimumLatitude(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinimumLatitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__minimumLongitude(t_SimpleTile *self, void *data)
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
#include "org/orekit/forces/radiation/PythonRadiationSensitive.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *PythonRadiationSensitive::class$ = NULL;
        jmethodID *PythonRadiationSensitive::mids$ = NULL;
        bool PythonRadiationSensitive::live$ = false;

        jclass PythonRadiationSensitive::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/PythonRadiationSensitive");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getRadiationParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_radiationPressureAcceleration_5efc9e86ed57c6dd] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_radiationPressureAcceleration_397d87bcad93c626] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonRadiationSensitive::PythonRadiationSensitive() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonRadiationSensitive::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonRadiationSensitive::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonRadiationSensitive::pythonExtension(jlong a0) const
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
    namespace forces {
      namespace radiation {
        static PyObject *t_PythonRadiationSensitive_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonRadiationSensitive_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonRadiationSensitive_init_(t_PythonRadiationSensitive *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonRadiationSensitive_finalize(t_PythonRadiationSensitive *self);
        static PyObject *t_PythonRadiationSensitive_pythonExtension(t_PythonRadiationSensitive *self, PyObject *args);
        static jobject JNICALL t_PythonRadiationSensitive_getRadiationParametersDrivers0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonRadiationSensitive_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonRadiationSensitive_radiationPressureAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static jobject JNICALL t_PythonRadiationSensitive_radiationPressureAcceleration3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static PyObject *t_PythonRadiationSensitive_get__self(t_PythonRadiationSensitive *self, void *data);
        static PyGetSetDef t_PythonRadiationSensitive__fields_[] = {
          DECLARE_GET_FIELD(t_PythonRadiationSensitive, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonRadiationSensitive__methods_[] = {
          DECLARE_METHOD(t_PythonRadiationSensitive, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonRadiationSensitive, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonRadiationSensitive, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonRadiationSensitive, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonRadiationSensitive)[] = {
          { Py_tp_methods, t_PythonRadiationSensitive__methods_ },
          { Py_tp_init, (void *) t_PythonRadiationSensitive_init_ },
          { Py_tp_getset, t_PythonRadiationSensitive__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonRadiationSensitive)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonRadiationSensitive, t_PythonRadiationSensitive, PythonRadiationSensitive);

        void t_PythonRadiationSensitive::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonRadiationSensitive), &PY_TYPE_DEF(PythonRadiationSensitive), module, "PythonRadiationSensitive", 1);
        }

        void t_PythonRadiationSensitive::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRadiationSensitive), "class_", make_descriptor(PythonRadiationSensitive::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRadiationSensitive), "wrapfn_", make_descriptor(t_PythonRadiationSensitive::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRadiationSensitive), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonRadiationSensitive::initializeClass);
          JNINativeMethod methods[] = {
            { "getRadiationParametersDrivers", "()Ljava/util/List;", (void *) t_PythonRadiationSensitive_getRadiationParametersDrivers0 },
            { "pythonDecRef", "()V", (void *) t_PythonRadiationSensitive_pythonDecRef1 },
            { "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonRadiationSensitive_radiationPressureAcceleration2 },
            { "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonRadiationSensitive_radiationPressureAcceleration3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonRadiationSensitive_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonRadiationSensitive::initializeClass, 1)))
            return NULL;
          return t_PythonRadiationSensitive::wrap_Object(PythonRadiationSensitive(((t_PythonRadiationSensitive *) arg)->object.this$));
        }
        static PyObject *t_PythonRadiationSensitive_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonRadiationSensitive::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonRadiationSensitive_init_(t_PythonRadiationSensitive *self, PyObject *args, PyObject *kwds)
        {
          PythonRadiationSensitive object((jobject) NULL);

          INT_CALL(object = PythonRadiationSensitive());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonRadiationSensitive_finalize(t_PythonRadiationSensitive *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonRadiationSensitive_pythonExtension(t_PythonRadiationSensitive *self, PyObject *args)
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

        static jobject JNICALL t_PythonRadiationSensitive_getRadiationParametersDrivers0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonRadiationSensitive::mids$[PythonRadiationSensitive::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getRadiationParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getRadiationParametersDrivers", result);
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

        static void JNICALL t_PythonRadiationSensitive_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonRadiationSensitive::mids$[PythonRadiationSensitive::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonRadiationSensitive::mids$[PythonRadiationSensitive::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonRadiationSensitive_radiationPressureAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonRadiationSensitive::mids$[PythonRadiationSensitive::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
          PyObject *o2 = JArray<jdouble>(a2).wrap();
          PyObject *result = PyObject_CallMethod(obj, "radiationPressureAcceleration", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("radiationPressureAcceleration", result);
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

        static jobject JNICALL t_PythonRadiationSensitive_radiationPressureAcceleration3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonRadiationSensitive::mids$[PythonRadiationSensitive::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a1));
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "radiationPressureAcceleration", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("radiationPressureAcceleration", result);
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

        static PyObject *t_PythonRadiationSensitive_get__self(t_PythonRadiationSensitive *self, void *data)
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
#include "org/hipparchus/stat/regression/GLSMultipleLinearRegression.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *GLSMultipleLinearRegression::class$ = NULL;
        jmethodID *GLSMultipleLinearRegression::mids$ = NULL;
        bool GLSMultipleLinearRegression::live$ = false;

        jclass GLSMultipleLinearRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/GLSMultipleLinearRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_newSampleData_1b32d195c9ba81f9] = env->getMethodID(cls, "newSampleData", "([D[[D[[D)V");
            mids$[mid_calculateBeta_6d9adf1d5b463928] = env->getMethodID(cls, "calculateBeta", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_calculateBetaVariance_7116bbecdd8ceb21] = env->getMethodID(cls, "calculateBetaVariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_calculateErrorVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "calculateErrorVariance", "()D");
            mids$[mid_newCovarianceData_d660c7a97bf55272] = env->getMethodID(cls, "newCovarianceData", "([[D)V");
            mids$[mid_getOmegaInverse_7116bbecdd8ceb21] = env->getMethodID(cls, "getOmegaInverse", "()Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GLSMultipleLinearRegression::GLSMultipleLinearRegression() : ::org::hipparchus::stat::regression::AbstractMultipleLinearRegression(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void GLSMultipleLinearRegression::newSampleData(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_newSampleData_1b32d195c9ba81f9], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_GLSMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GLSMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GLSMultipleLinearRegression_init_(t_GLSMultipleLinearRegression *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GLSMultipleLinearRegression_newSampleData(t_GLSMultipleLinearRegression *self, PyObject *args);

        static PyMethodDef t_GLSMultipleLinearRegression__methods_[] = {
          DECLARE_METHOD(t_GLSMultipleLinearRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLSMultipleLinearRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLSMultipleLinearRegression, newSampleData, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GLSMultipleLinearRegression)[] = {
          { Py_tp_methods, t_GLSMultipleLinearRegression__methods_ },
          { Py_tp_init, (void *) t_GLSMultipleLinearRegression_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GLSMultipleLinearRegression)[] = {
          &PY_TYPE_DEF(::org::hipparchus::stat::regression::AbstractMultipleLinearRegression),
          NULL
        };

        DEFINE_TYPE(GLSMultipleLinearRegression, t_GLSMultipleLinearRegression, GLSMultipleLinearRegression);

        void t_GLSMultipleLinearRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(GLSMultipleLinearRegression), &PY_TYPE_DEF(GLSMultipleLinearRegression), module, "GLSMultipleLinearRegression", 0);
        }

        void t_GLSMultipleLinearRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLSMultipleLinearRegression), "class_", make_descriptor(GLSMultipleLinearRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLSMultipleLinearRegression), "wrapfn_", make_descriptor(t_GLSMultipleLinearRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLSMultipleLinearRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GLSMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GLSMultipleLinearRegression::initializeClass, 1)))
            return NULL;
          return t_GLSMultipleLinearRegression::wrap_Object(GLSMultipleLinearRegression(((t_GLSMultipleLinearRegression *) arg)->object.this$));
        }
        static PyObject *t_GLSMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GLSMultipleLinearRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GLSMultipleLinearRegression_init_(t_GLSMultipleLinearRegression *self, PyObject *args, PyObject *kwds)
        {
          GLSMultipleLinearRegression object((jobject) NULL);

          INT_CALL(object = GLSMultipleLinearRegression());
          self->object = object;

          return 0;
        }

        static PyObject *t_GLSMultipleLinearRegression_newSampleData(t_GLSMultipleLinearRegression *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< JArray< jdouble > > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);

          if (!parseArgs(args, "[D[[D[[D", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.newSampleData(a0, a1, a2));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(GLSMultipleLinearRegression), (PyObject *) self, "newSampleData", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/MultivariateSummaryStatistics.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/stat/descriptive/StatisticalMultivariateSummary.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *MultivariateSummaryStatistics::class$ = NULL;
        jmethodID *MultivariateSummaryStatistics::mids$ = NULL;
        bool MultivariateSummaryStatistics::live$ = false;

        jclass MultivariateSummaryStatistics::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/MultivariateSummaryStatistics");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_init$_bc79bc153a2b3c2e] = env->getMethodID(cls, "<init>", "(IZ)V");
            mids$[mid_addValue_ebc26dcaf4761286] = env->getMethodID(cls, "addValue", "([D)V");
            mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getCovariance_7116bbecdd8ceb21] = env->getMethodID(cls, "getCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getGeometricMean_7cdc325af0834901] = env->getMethodID(cls, "getGeometricMean", "()[D");
            mids$[mid_getMax_7cdc325af0834901] = env->getMethodID(cls, "getMax", "()[D");
            mids$[mid_getMean_7cdc325af0834901] = env->getMethodID(cls, "getMean", "()[D");
            mids$[mid_getMin_7cdc325af0834901] = env->getMethodID(cls, "getMin", "()[D");
            mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getStandardDeviation_7cdc325af0834901] = env->getMethodID(cls, "getStandardDeviation", "()[D");
            mids$[mid_getSum_7cdc325af0834901] = env->getMethodID(cls, "getSum", "()[D");
            mids$[mid_getSumLog_7cdc325af0834901] = env->getMethodID(cls, "getSumLog", "()[D");
            mids$[mid_getSumSq_7cdc325af0834901] = env->getMethodID(cls, "getSumSq", "()[D");
            mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultivariateSummaryStatistics::MultivariateSummaryStatistics(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

        MultivariateSummaryStatistics::MultivariateSummaryStatistics(jint a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bc79bc153a2b3c2e, a0, a1)) {}

        void MultivariateSummaryStatistics::addValue(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addValue_ebc26dcaf4761286], a0.this$);
        }

        void MultivariateSummaryStatistics::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
        }

        jboolean MultivariateSummaryStatistics::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
        }

        ::org::hipparchus::linear::RealMatrix MultivariateSummaryStatistics::getCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_7116bbecdd8ceb21]));
        }

        jint MultivariateSummaryStatistics::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
        }

        JArray< jdouble > MultivariateSummaryStatistics::getGeometricMean() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGeometricMean_7cdc325af0834901]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getMax() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMax_7cdc325af0834901]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getMean() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMean_7cdc325af0834901]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getMin() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMin_7cdc325af0834901]));
        }

        jlong MultivariateSummaryStatistics::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
        }

        JArray< jdouble > MultivariateSummaryStatistics::getStandardDeviation() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getStandardDeviation_7cdc325af0834901]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getSum() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSum_7cdc325af0834901]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getSumLog() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSumLog_7cdc325af0834901]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getSumSq() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSumSq_7cdc325af0834901]));
        }

        jint MultivariateSummaryStatistics::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
        }

        ::java::lang::String MultivariateSummaryStatistics::toString() const
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
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        static PyObject *t_MultivariateSummaryStatistics_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateSummaryStatistics_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MultivariateSummaryStatistics_init_(t_MultivariateSummaryStatistics *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultivariateSummaryStatistics_addValue(t_MultivariateSummaryStatistics *self, PyObject *arg);
        static PyObject *t_MultivariateSummaryStatistics_clear(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_equals(t_MultivariateSummaryStatistics *self, PyObject *args);
        static PyObject *t_MultivariateSummaryStatistics_getCovariance(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getDimension(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getGeometricMean(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getMax(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getMean(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getMin(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getN(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getStandardDeviation(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getSum(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getSumLog(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getSumSq(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_hashCode(t_MultivariateSummaryStatistics *self, PyObject *args);
        static PyObject *t_MultivariateSummaryStatistics_toString(t_MultivariateSummaryStatistics *self, PyObject *args);
        static PyObject *t_MultivariateSummaryStatistics_get__covariance(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__dimension(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__geometricMean(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__max(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__mean(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__min(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__n(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__standardDeviation(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__sum(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__sumLog(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__sumSq(t_MultivariateSummaryStatistics *self, void *data);
        static PyGetSetDef t_MultivariateSummaryStatistics__fields_[] = {
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, covariance),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, dimension),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, geometricMean),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, max),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, mean),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, min),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, n),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, standardDeviation),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, sum),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, sumLog),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, sumSq),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MultivariateSummaryStatistics__methods_[] = {
          DECLARE_METHOD(t_MultivariateSummaryStatistics, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, addValue, METH_O),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, clear, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, equals, METH_VARARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getCovariance, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getGeometricMean, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getMax, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getMean, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getMin, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getN, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getSum, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getSumLog, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getSumSq, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultivariateSummaryStatistics)[] = {
          { Py_tp_methods, t_MultivariateSummaryStatistics__methods_ },
          { Py_tp_init, (void *) t_MultivariateSummaryStatistics_init_ },
          { Py_tp_getset, t_MultivariateSummaryStatistics__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultivariateSummaryStatistics)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultivariateSummaryStatistics, t_MultivariateSummaryStatistics, MultivariateSummaryStatistics);

        void t_MultivariateSummaryStatistics::install(PyObject *module)
        {
          installType(&PY_TYPE(MultivariateSummaryStatistics), &PY_TYPE_DEF(MultivariateSummaryStatistics), module, "MultivariateSummaryStatistics", 0);
        }

        void t_MultivariateSummaryStatistics::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateSummaryStatistics), "class_", make_descriptor(MultivariateSummaryStatistics::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateSummaryStatistics), "wrapfn_", make_descriptor(t_MultivariateSummaryStatistics::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateSummaryStatistics), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultivariateSummaryStatistics_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultivariateSummaryStatistics::initializeClass, 1)))
            return NULL;
          return t_MultivariateSummaryStatistics::wrap_Object(MultivariateSummaryStatistics(((t_MultivariateSummaryStatistics *) arg)->object.this$));
        }
        static PyObject *t_MultivariateSummaryStatistics_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultivariateSummaryStatistics::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MultivariateSummaryStatistics_init_(t_MultivariateSummaryStatistics *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jint a0;
              MultivariateSummaryStatistics object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = MultivariateSummaryStatistics(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jint a0;
              jboolean a1;
              MultivariateSummaryStatistics object((jobject) NULL);

              if (!parseArgs(args, "IZ", &a0, &a1))
              {
                INT_CALL(object = MultivariateSummaryStatistics(a0, a1));
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

        static PyObject *t_MultivariateSummaryStatistics_addValue(t_MultivariateSummaryStatistics *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(self->object.addValue(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addValue", arg);
          return NULL;
        }

        static PyObject *t_MultivariateSummaryStatistics_clear(t_MultivariateSummaryStatistics *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_MultivariateSummaryStatistics_equals(t_MultivariateSummaryStatistics *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(MultivariateSummaryStatistics), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_MultivariateSummaryStatistics_getCovariance(t_MultivariateSummaryStatistics *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_MultivariateSummaryStatistics_getDimension(t_MultivariateSummaryStatistics *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_MultivariateSummaryStatistics_getGeometricMean(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getGeometricMean());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getMax(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMax());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getMean(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMean());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getMin(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMin());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getN(t_MultivariateSummaryStatistics *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_MultivariateSummaryStatistics_getStandardDeviation(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getStandardDeviation());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getSum(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSum());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getSumLog(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSumLog());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getSumSq(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSumSq());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_hashCode(t_MultivariateSummaryStatistics *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(MultivariateSummaryStatistics), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_MultivariateSummaryStatistics_toString(t_MultivariateSummaryStatistics *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(MultivariateSummaryStatistics), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_MultivariateSummaryStatistics_get__covariance(t_MultivariateSummaryStatistics *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_MultivariateSummaryStatistics_get__dimension(t_MultivariateSummaryStatistics *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_MultivariateSummaryStatistics_get__geometricMean(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getGeometricMean());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__max(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMax());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__mean(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMean());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__min(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMin());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__n(t_MultivariateSummaryStatistics *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_MultivariateSummaryStatistics_get__standardDeviation(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getStandardDeviation());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__sum(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSum());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__sumLog(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSumLog());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__sumSq(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSumSq());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresProblem::class$ = NULL;
            jmethodID *LeastSquaresProblem::mids$ = NULL;
            bool LeastSquaresProblem::live$ = false;

            jclass LeastSquaresProblem::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem");

                mids$ = new jmethodID[max_mid];
                mids$[mid_evaluate_3ec1db1849589637] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;");
                mids$[mid_getObservationSize_f2f64475e4580546] = env->getMethodID(cls, "getObservationSize", "()I");
                mids$[mid_getParameterSize_f2f64475e4580546] = env->getMethodID(cls, "getParameterSize", "()I");
                mids$[mid_getStart_6d9adf1d5b463928] = env->getMethodID(cls, "getStart", "()Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation LeastSquaresProblem::evaluate(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation(env->callObjectMethod(this$, mids$[mid_evaluate_3ec1db1849589637], a0.this$));
            }

            jint LeastSquaresProblem::getObservationSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getObservationSize_f2f64475e4580546]);
            }

            jint LeastSquaresProblem::getParameterSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getParameterSize_f2f64475e4580546]);
            }

            ::org::hipparchus::linear::RealVector LeastSquaresProblem::getStart() const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getStart_6d9adf1d5b463928]));
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
            static PyObject *t_LeastSquaresProblem_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresProblem_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresProblem_evaluate(t_LeastSquaresProblem *self, PyObject *arg);
            static PyObject *t_LeastSquaresProblem_getObservationSize(t_LeastSquaresProblem *self);
            static PyObject *t_LeastSquaresProblem_getParameterSize(t_LeastSquaresProblem *self);
            static PyObject *t_LeastSquaresProblem_getStart(t_LeastSquaresProblem *self);
            static PyObject *t_LeastSquaresProblem_get__observationSize(t_LeastSquaresProblem *self, void *data);
            static PyObject *t_LeastSquaresProblem_get__parameterSize(t_LeastSquaresProblem *self, void *data);
            static PyObject *t_LeastSquaresProblem_get__start(t_LeastSquaresProblem *self, void *data);
            static PyGetSetDef t_LeastSquaresProblem__fields_[] = {
              DECLARE_GET_FIELD(t_LeastSquaresProblem, observationSize),
              DECLARE_GET_FIELD(t_LeastSquaresProblem, parameterSize),
              DECLARE_GET_FIELD(t_LeastSquaresProblem, start),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LeastSquaresProblem__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresProblem, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresProblem, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresProblem, evaluate, METH_O),
              DECLARE_METHOD(t_LeastSquaresProblem, getObservationSize, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem, getParameterSize, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem, getStart, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresProblem)[] = {
              { Py_tp_methods, t_LeastSquaresProblem__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_LeastSquaresProblem__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresProblem)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::OptimizationProblem),
              NULL
            };

            DEFINE_TYPE(LeastSquaresProblem, t_LeastSquaresProblem, LeastSquaresProblem);

            void t_LeastSquaresProblem::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresProblem), &PY_TYPE_DEF(LeastSquaresProblem), module, "LeastSquaresProblem", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem), "Evaluation", make_descriptor(&PY_TYPE_DEF(LeastSquaresProblem$Evaluation)));
            }

            void t_LeastSquaresProblem::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem), "class_", make_descriptor(LeastSquaresProblem::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem), "wrapfn_", make_descriptor(t_LeastSquaresProblem::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresProblem_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresProblem::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresProblem::wrap_Object(LeastSquaresProblem(((t_LeastSquaresProblem *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresProblem_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresProblem::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LeastSquaresProblem_evaluate(t_LeastSquaresProblem *self, PyObject *arg)
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.evaluate(a0));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem$Evaluation::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "evaluate", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresProblem_getObservationSize(t_LeastSquaresProblem *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getObservationSize());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresProblem_getParameterSize(t_LeastSquaresProblem *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getParameterSize());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresProblem_getStart(t_LeastSquaresProblem *self)
            {
              ::org::hipparchus::linear::RealVector result((jobject) NULL);
              OBJ_CALL(result = self->object.getStart());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresProblem_get__observationSize(t_LeastSquaresProblem *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getObservationSize());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_LeastSquaresProblem_get__parameterSize(t_LeastSquaresProblem *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getParameterSize());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_LeastSquaresProblem_get__start(t_LeastSquaresProblem *self, void *data)
            {
              ::org::hipparchus::linear::RealVector value((jobject) NULL);
              OBJ_CALL(value = self->object.getStart());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *OdmCommonMetadata::class$ = NULL;
            jmethodID *OdmCommonMetadata::mids$ = NULL;
            bool OdmCommonMetadata::live$ = false;

            jclass OdmCommonMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalizeMetadata_b23a8b8e76c44cd4] = env->getMethodID(cls, "finalizeMetadata", "(Lorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_getCenter_78375ee64056f203] = env->getMethodID(cls, "getCenter", "()Lorg/orekit/files/ccsds/definitions/BodyFacade;");
                mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                mids$[mid_getFrameEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getFrameEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getLaunchNumber_f2f64475e4580546] = env->getMethodID(cls, "getLaunchNumber", "()I");
                mids$[mid_getLaunchPiece_0090f7797e403f43] = env->getMethodID(cls, "getLaunchPiece", "()Ljava/lang/String;");
                mids$[mid_getLaunchYear_f2f64475e4580546] = env->getMethodID(cls, "getLaunchYear", "()I");
                mids$[mid_getObjectID_0090f7797e403f43] = env->getMethodID(cls, "getObjectID", "()Ljava/lang/String;");
                mids$[mid_getReferenceFrame_aa70fdb14ae9305f] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_setCenter_4937bc9292f008b1] = env->getMethodID(cls, "setCenter", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");
                mids$[mid_setFrameEpoch_e82d68cd9f886886] = env->getMethodID(cls, "setFrameEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setFrameEpochString_e939c6558ae8d313] = env->getMethodID(cls, "setFrameEpochString", "(Ljava/lang/String;)V");
                mids$[mid_setObjectID_e939c6558ae8d313] = env->getMethodID(cls, "setObjectID", "(Ljava/lang/String;)V");
                mids$[mid_setReferenceFrame_a455f3ff24eb0b47] = env->getMethodID(cls, "setReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            OdmCommonMetadata::OdmCommonMetadata() : ::org::orekit::files::ccsds::ndm::odm::OdmMetadata(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            void OdmCommonMetadata::finalizeMetadata(const ::org::orekit::files::ccsds::utils::ContextBinding & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_finalizeMetadata_b23a8b8e76c44cd4], a0.this$);
            }

            ::org::orekit::files::ccsds::definitions::BodyFacade OdmCommonMetadata::getCenter() const
            {
              return ::org::orekit::files::ccsds::definitions::BodyFacade(env->callObjectMethod(this$, mids$[mid_getCenter_78375ee64056f203]));
            }

            ::org::orekit::frames::Frame OdmCommonMetadata::getFrame() const
            {
              return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
            }

            ::org::orekit::time::AbsoluteDate OdmCommonMetadata::getFrameEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFrameEpoch_aaa854c403487cf3]));
            }

            jint OdmCommonMetadata::getLaunchNumber() const
            {
              return env->callIntMethod(this$, mids$[mid_getLaunchNumber_f2f64475e4580546]);
            }

            ::java::lang::String OdmCommonMetadata::getLaunchPiece() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaunchPiece_0090f7797e403f43]));
            }

            jint OdmCommonMetadata::getLaunchYear() const
            {
              return env->callIntMethod(this$, mids$[mid_getLaunchYear_f2f64475e4580546]);
            }

            ::java::lang::String OdmCommonMetadata::getObjectID() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectID_0090f7797e403f43]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade OdmCommonMetadata::getReferenceFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_aa70fdb14ae9305f]));
            }

            void OdmCommonMetadata::setCenter(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCenter_4937bc9292f008b1], a0.this$);
            }

            void OdmCommonMetadata::setFrameEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFrameEpoch_e82d68cd9f886886], a0.this$);
            }

            void OdmCommonMetadata::setFrameEpochString(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFrameEpochString_e939c6558ae8d313], a0.this$);
            }

            void OdmCommonMetadata::setObjectID(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectID_e939c6558ae8d313], a0.this$);
            }

            void OdmCommonMetadata::setReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setReferenceFrame_a455f3ff24eb0b47], a0.this$);
            }

            void OdmCommonMetadata::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
            static PyObject *t_OdmCommonMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_OdmCommonMetadata_init_(t_OdmCommonMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_OdmCommonMetadata_finalizeMetadata(t_OdmCommonMetadata *self, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_getCenter(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getFrame(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getFrameEpoch(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getLaunchNumber(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getLaunchPiece(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getLaunchYear(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getObjectID(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getReferenceFrame(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_setCenter(t_OdmCommonMetadata *self, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_setFrameEpoch(t_OdmCommonMetadata *self, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_setFrameEpochString(t_OdmCommonMetadata *self, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_setObjectID(t_OdmCommonMetadata *self, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_setReferenceFrame(t_OdmCommonMetadata *self, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_validate(t_OdmCommonMetadata *self, PyObject *args);
            static PyObject *t_OdmCommonMetadata_get__center(t_OdmCommonMetadata *self, void *data);
            static int t_OdmCommonMetadata_set__center(t_OdmCommonMetadata *self, PyObject *arg, void *data);
            static PyObject *t_OdmCommonMetadata_get__frame(t_OdmCommonMetadata *self, void *data);
            static PyObject *t_OdmCommonMetadata_get__frameEpoch(t_OdmCommonMetadata *self, void *data);
            static int t_OdmCommonMetadata_set__frameEpoch(t_OdmCommonMetadata *self, PyObject *arg, void *data);
            static int t_OdmCommonMetadata_set__frameEpochString(t_OdmCommonMetadata *self, PyObject *arg, void *data);
            static PyObject *t_OdmCommonMetadata_get__launchNumber(t_OdmCommonMetadata *self, void *data);
            static PyObject *t_OdmCommonMetadata_get__launchPiece(t_OdmCommonMetadata *self, void *data);
            static PyObject *t_OdmCommonMetadata_get__launchYear(t_OdmCommonMetadata *self, void *data);
            static PyObject *t_OdmCommonMetadata_get__objectID(t_OdmCommonMetadata *self, void *data);
            static int t_OdmCommonMetadata_set__objectID(t_OdmCommonMetadata *self, PyObject *arg, void *data);
            static PyObject *t_OdmCommonMetadata_get__referenceFrame(t_OdmCommonMetadata *self, void *data);
            static int t_OdmCommonMetadata_set__referenceFrame(t_OdmCommonMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_OdmCommonMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_OdmCommonMetadata, center),
              DECLARE_GET_FIELD(t_OdmCommonMetadata, frame),
              DECLARE_GETSET_FIELD(t_OdmCommonMetadata, frameEpoch),
              DECLARE_SET_FIELD(t_OdmCommonMetadata, frameEpochString),
              DECLARE_GET_FIELD(t_OdmCommonMetadata, launchNumber),
              DECLARE_GET_FIELD(t_OdmCommonMetadata, launchPiece),
              DECLARE_GET_FIELD(t_OdmCommonMetadata, launchYear),
              DECLARE_GETSET_FIELD(t_OdmCommonMetadata, objectID),
              DECLARE_GETSET_FIELD(t_OdmCommonMetadata, referenceFrame),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_OdmCommonMetadata__methods_[] = {
              DECLARE_METHOD(t_OdmCommonMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmCommonMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmCommonMetadata, finalizeMetadata, METH_O),
              DECLARE_METHOD(t_OdmCommonMetadata, getCenter, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getFrame, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getFrameEpoch, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getLaunchNumber, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getLaunchPiece, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getLaunchYear, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getObjectID, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getReferenceFrame, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, setCenter, METH_O),
              DECLARE_METHOD(t_OdmCommonMetadata, setFrameEpoch, METH_O),
              DECLARE_METHOD(t_OdmCommonMetadata, setFrameEpochString, METH_O),
              DECLARE_METHOD(t_OdmCommonMetadata, setObjectID, METH_O),
              DECLARE_METHOD(t_OdmCommonMetadata, setReferenceFrame, METH_O),
              DECLARE_METHOD(t_OdmCommonMetadata, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OdmCommonMetadata)[] = {
              { Py_tp_methods, t_OdmCommonMetadata__methods_ },
              { Py_tp_init, (void *) t_OdmCommonMetadata_init_ },
              { Py_tp_getset, t_OdmCommonMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OdmCommonMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmMetadata),
              NULL
            };

            DEFINE_TYPE(OdmCommonMetadata, t_OdmCommonMetadata, OdmCommonMetadata);

            void t_OdmCommonMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(OdmCommonMetadata), &PY_TYPE_DEF(OdmCommonMetadata), module, "OdmCommonMetadata", 0);
            }

            void t_OdmCommonMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmCommonMetadata), "class_", make_descriptor(OdmCommonMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmCommonMetadata), "wrapfn_", make_descriptor(t_OdmCommonMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmCommonMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_OdmCommonMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OdmCommonMetadata::initializeClass, 1)))
                return NULL;
              return t_OdmCommonMetadata::wrap_Object(OdmCommonMetadata(((t_OdmCommonMetadata *) arg)->object.this$));
            }
            static PyObject *t_OdmCommonMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OdmCommonMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_OdmCommonMetadata_init_(t_OdmCommonMetadata *self, PyObject *args, PyObject *kwds)
            {
              OdmCommonMetadata object((jobject) NULL);

              INT_CALL(object = OdmCommonMetadata());
              self->object = object;

              return 0;
            }

            static PyObject *t_OdmCommonMetadata_finalizeMetadata(t_OdmCommonMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0))
              {
                OBJ_CALL(self->object.finalizeMetadata(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "finalizeMetadata", arg);
              return NULL;
            }

            static PyObject *t_OdmCommonMetadata_getCenter(t_OdmCommonMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getCenter());
              return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(result);
            }

            static PyObject *t_OdmCommonMetadata_getFrame(t_OdmCommonMetadata *self)
            {
              ::org::orekit::frames::Frame result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            static PyObject *t_OdmCommonMetadata_getFrameEpoch(t_OdmCommonMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrameEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_OdmCommonMetadata_getLaunchNumber(t_OdmCommonMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getLaunchNumber());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_OdmCommonMetadata_getLaunchPiece(t_OdmCommonMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getLaunchPiece());
              return j2p(result);
            }

            static PyObject *t_OdmCommonMetadata_getLaunchYear(t_OdmCommonMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getLaunchYear());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_OdmCommonMetadata_getObjectID(t_OdmCommonMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectID());
              return j2p(result);
            }

            static PyObject *t_OdmCommonMetadata_getReferenceFrame(t_OdmCommonMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_OdmCommonMetadata_setCenter(t_OdmCommonMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setCenter(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCenter", arg);
              return NULL;
            }

            static PyObject *t_OdmCommonMetadata_setFrameEpoch(t_OdmCommonMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setFrameEpoch(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFrameEpoch", arg);
              return NULL;
            }

            static PyObject *t_OdmCommonMetadata_setFrameEpochString(t_OdmCommonMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setFrameEpochString(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFrameEpochString", arg);
              return NULL;
            }

            static PyObject *t_OdmCommonMetadata_setObjectID(t_OdmCommonMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setObjectID(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObjectID", arg);
              return NULL;
            }

            static PyObject *t_OdmCommonMetadata_setReferenceFrame(t_OdmCommonMetadata *self, PyObject *arg)
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

            static PyObject *t_OdmCommonMetadata_validate(t_OdmCommonMetadata *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(OdmCommonMetadata), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_OdmCommonMetadata_get__center(t_OdmCommonMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getCenter());
              return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(value);
            }
            static int t_OdmCommonMetadata_set__center(t_OdmCommonMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setCenter(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "center", arg);
              return -1;
            }

            static PyObject *t_OdmCommonMetadata_get__frame(t_OdmCommonMetadata *self, void *data)
            {
              ::org::orekit::frames::Frame value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(value);
            }

            static PyObject *t_OdmCommonMetadata_get__frameEpoch(t_OdmCommonMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrameEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_OdmCommonMetadata_set__frameEpoch(t_OdmCommonMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setFrameEpoch(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "frameEpoch", arg);
              return -1;
            }

            static int t_OdmCommonMetadata_set__frameEpochString(t_OdmCommonMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setFrameEpochString(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "frameEpochString", arg);
              return -1;
            }

            static PyObject *t_OdmCommonMetadata_get__launchNumber(t_OdmCommonMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getLaunchNumber());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_OdmCommonMetadata_get__launchPiece(t_OdmCommonMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getLaunchPiece());
              return j2p(value);
            }

            static PyObject *t_OdmCommonMetadata_get__launchYear(t_OdmCommonMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getLaunchYear());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_OdmCommonMetadata_get__objectID(t_OdmCommonMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectID());
              return j2p(value);
            }
            static int t_OdmCommonMetadata_set__objectID(t_OdmCommonMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setObjectID(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "objectID", arg);
              return -1;
            }

            static PyObject *t_OdmCommonMetadata_get__referenceFrame(t_OdmCommonMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_OdmCommonMetadata_set__referenceFrame(t_OdmCommonMetadata *self, PyObject *arg, void *data)
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
#include "org/hipparchus/random/SynchronizedRandomGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *SynchronizedRandomGenerator::class$ = NULL;
      jmethodID *SynchronizedRandomGenerator::mids$ = NULL;
      bool SynchronizedRandomGenerator::live$ = false;

      jclass SynchronizedRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/SynchronizedRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_bb31e8cbfaf41e63] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_nextBoolean_e470b6d9e0d979db] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_9c4b35f0a6dc87f3] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextBytes_125b1e9f043b29f8] = env->getMethodID(cls, "nextBytes", "([BII)V");
          mids$[mid_nextDouble_456d9a2f64d6b28d] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_966c782d3223854d] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextGaussian_456d9a2f64d6b28d] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_f2f64475e4580546] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextInt_38565d58479aa24a] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_a27fc9afd27e559d] = env->getMethodID(cls, "nextLong", "()J");
          mids$[mid_nextLong_955f7541fca701ab] = env->getMethodID(cls, "nextLong", "(J)J");
          mids$[mid_setSeed_3b603738d1eb3233] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_0a2a1ac2721c0336] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_fefb08975c10f0a1] = env->getMethodID(cls, "setSeed", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SynchronizedRandomGenerator::SynchronizedRandomGenerator(const ::org::hipparchus::random::RandomGenerator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb31e8cbfaf41e63, a0.this$)) {}

      jboolean SynchronizedRandomGenerator::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_e470b6d9e0d979db]);
      }

      void SynchronizedRandomGenerator::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_9c4b35f0a6dc87f3], a0.this$);
      }

      void SynchronizedRandomGenerator::nextBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_125b1e9f043b29f8], a0.this$, a1, a2);
      }

      jdouble SynchronizedRandomGenerator::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_456d9a2f64d6b28d]);
      }

      jfloat SynchronizedRandomGenerator::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_966c782d3223854d]);
      }

      jdouble SynchronizedRandomGenerator::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_456d9a2f64d6b28d]);
      }

      jint SynchronizedRandomGenerator::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_f2f64475e4580546]);
      }

      jint SynchronizedRandomGenerator::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_38565d58479aa24a], a0);
      }

      jlong SynchronizedRandomGenerator::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_a27fc9afd27e559d]);
      }

      jlong SynchronizedRandomGenerator::nextLong(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_955f7541fca701ab], a0);
      }

      void SynchronizedRandomGenerator::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_3b603738d1eb3233], a0.this$);
      }

      void SynchronizedRandomGenerator::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_0a2a1ac2721c0336], a0);
      }

      void SynchronizedRandomGenerator::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_fefb08975c10f0a1], a0);
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
      static PyObject *t_SynchronizedRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SynchronizedRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SynchronizedRandomGenerator_init_(t_SynchronizedRandomGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SynchronizedRandomGenerator_nextBoolean(t_SynchronizedRandomGenerator *self);
      static PyObject *t_SynchronizedRandomGenerator_nextBytes(t_SynchronizedRandomGenerator *self, PyObject *args);
      static PyObject *t_SynchronizedRandomGenerator_nextDouble(t_SynchronizedRandomGenerator *self);
      static PyObject *t_SynchronizedRandomGenerator_nextFloat(t_SynchronizedRandomGenerator *self);
      static PyObject *t_SynchronizedRandomGenerator_nextGaussian(t_SynchronizedRandomGenerator *self);
      static PyObject *t_SynchronizedRandomGenerator_nextInt(t_SynchronizedRandomGenerator *self, PyObject *args);
      static PyObject *t_SynchronizedRandomGenerator_nextLong(t_SynchronizedRandomGenerator *self, PyObject *args);
      static PyObject *t_SynchronizedRandomGenerator_setSeed(t_SynchronizedRandomGenerator *self, PyObject *args);
      static int t_SynchronizedRandomGenerator_set__seed(t_SynchronizedRandomGenerator *self, PyObject *arg, void *data);
      static PyGetSetDef t_SynchronizedRandomGenerator__fields_[] = {
        DECLARE_SET_FIELD(t_SynchronizedRandomGenerator, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SynchronizedRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_SynchronizedRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextBoolean, METH_NOARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextDouble, METH_NOARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextFloat, METH_NOARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextGaussian, METH_NOARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_SynchronizedRandomGenerator, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SynchronizedRandomGenerator)[] = {
        { Py_tp_methods, t_SynchronizedRandomGenerator__methods_ },
        { Py_tp_init, (void *) t_SynchronizedRandomGenerator_init_ },
        { Py_tp_getset, t_SynchronizedRandomGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SynchronizedRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SynchronizedRandomGenerator, t_SynchronizedRandomGenerator, SynchronizedRandomGenerator);

      void t_SynchronizedRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(SynchronizedRandomGenerator), &PY_TYPE_DEF(SynchronizedRandomGenerator), module, "SynchronizedRandomGenerator", 0);
      }

      void t_SynchronizedRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SynchronizedRandomGenerator), "class_", make_descriptor(SynchronizedRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SynchronizedRandomGenerator), "wrapfn_", make_descriptor(t_SynchronizedRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SynchronizedRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SynchronizedRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SynchronizedRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_SynchronizedRandomGenerator::wrap_Object(SynchronizedRandomGenerator(((t_SynchronizedRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_SynchronizedRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SynchronizedRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SynchronizedRandomGenerator_init_(t_SynchronizedRandomGenerator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        SynchronizedRandomGenerator object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          INT_CALL(object = SynchronizedRandomGenerator(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SynchronizedRandomGenerator_nextBoolean(t_SynchronizedRandomGenerator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.nextBoolean());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_SynchronizedRandomGenerator_nextBytes(t_SynchronizedRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jbyte > a0((jobject) NULL);

            if (!parseArgs(args, "[B", &a0))
            {
              OBJ_CALL(self->object.nextBytes(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jbyte > a0((jobject) NULL);
            jint a1;
            jint a2;

            if (!parseArgs(args, "[BII", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.nextBytes(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextBytes", args);
        return NULL;
      }

      static PyObject *t_SynchronizedRandomGenerator_nextDouble(t_SynchronizedRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextDouble());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SynchronizedRandomGenerator_nextFloat(t_SynchronizedRandomGenerator *self)
      {
        jfloat result;
        OBJ_CALL(result = self->object.nextFloat());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SynchronizedRandomGenerator_nextGaussian(t_SynchronizedRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextGaussian());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SynchronizedRandomGenerator_nextInt(t_SynchronizedRandomGenerator *self, PyObject *args)
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

      static PyObject *t_SynchronizedRandomGenerator_nextLong(t_SynchronizedRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.nextLong());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.nextLong(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextLong", args);
        return NULL;
      }

      static PyObject *t_SynchronizedRandomGenerator_setSeed(t_SynchronizedRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jint > a0((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setSeed", args);
        return NULL;
      }

      static int t_SynchronizedRandomGenerator_set__seed(t_SynchronizedRandomGenerator *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
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
}

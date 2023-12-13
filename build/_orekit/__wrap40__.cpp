#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *Phase::class$ = NULL;
          jmethodID *Phase::mids$ = NULL;
          bool Phase::live$ = false;
          ::java::lang::String *Phase::AMBIGUITY_NAME = NULL;
          ::java::lang::String *Phase::MEASUREMENT_TYPE = NULL;

          jclass Phase::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/Phase");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c0ea0d1675f02f42] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_getAmbiguityDriver_a59daa5e273117e1] = env->getMethodID(cls, "getAmbiguityDriver", "()Lorg/orekit/utils/ParameterDriver;");
              mids$[mid_getWavelength_b74f83833fdad017] = env->getMethodID(cls, "getWavelength", "()D");
              mids$[mid_theoreticalEvaluationWithoutDerivatives_9347cf3b1f0dd85a] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
              mids$[mid_theoreticalEvaluation_d598991c5cac8ab0] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              AMBIGUITY_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "AMBIGUITY_NAME", "Ljava/lang/String;"));
              MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Phase::Phase(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_c0ea0d1675f02f42, a0.this$, a1.this$, a2, a3, a4, a5, a6.this$)) {}

          ::org::orekit::utils::ParameterDriver Phase::getAmbiguityDriver() const
          {
            return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getAmbiguityDriver_a59daa5e273117e1]));
          }

          jdouble Phase::getWavelength() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWavelength_b74f83833fdad017]);
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
          static PyObject *t_Phase_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Phase_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Phase_of_(t_Phase *self, PyObject *args);
          static int t_Phase_init_(t_Phase *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Phase_getAmbiguityDriver(t_Phase *self);
          static PyObject *t_Phase_getWavelength(t_Phase *self);
          static PyObject *t_Phase_get__ambiguityDriver(t_Phase *self, void *data);
          static PyObject *t_Phase_get__wavelength(t_Phase *self, void *data);
          static PyObject *t_Phase_get__parameters_(t_Phase *self, void *data);
          static PyGetSetDef t_Phase__fields_[] = {
            DECLARE_GET_FIELD(t_Phase, ambiguityDriver),
            DECLARE_GET_FIELD(t_Phase, wavelength),
            DECLARE_GET_FIELD(t_Phase, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Phase__methods_[] = {
            DECLARE_METHOD(t_Phase, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Phase, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Phase, of_, METH_VARARGS),
            DECLARE_METHOD(t_Phase, getAmbiguityDriver, METH_NOARGS),
            DECLARE_METHOD(t_Phase, getWavelength, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Phase)[] = {
            { Py_tp_methods, t_Phase__methods_ },
            { Py_tp_init, (void *) t_Phase_init_ },
            { Py_tp_getset, t_Phase__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Phase)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
            NULL
          };

          DEFINE_TYPE(Phase, t_Phase, Phase);
          PyObject *t_Phase::wrap_Object(const Phase& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Phase::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Phase *self = (t_Phase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Phase::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Phase::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Phase *self = (t_Phase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Phase::install(PyObject *module)
          {
            installType(&PY_TYPE(Phase), &PY_TYPE_DEF(Phase), module, "Phase", 0);
          }

          void t_Phase::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Phase), "class_", make_descriptor(Phase::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Phase), "wrapfn_", make_descriptor(t_Phase::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Phase), "boxfn_", make_descriptor(boxObject));
            env->getClass(Phase::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Phase), "AMBIGUITY_NAME", make_descriptor(j2p(*Phase::AMBIGUITY_NAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Phase), "MEASUREMENT_TYPE", make_descriptor(j2p(*Phase::MEASUREMENT_TYPE)));
          }

          static PyObject *t_Phase_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Phase::initializeClass, 1)))
              return NULL;
            return t_Phase::wrap_Object(Phase(((t_Phase *) arg)->object.this$));
          }
          static PyObject *t_Phase_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Phase::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Phase_of_(t_Phase *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Phase_init_(t_Phase *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
            Phase object((jobject) NULL);

            if (!parseArgs(args, "kkDDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = Phase(a0, a1, a2, a3, a4, a5, a6));
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

          static PyObject *t_Phase_getAmbiguityDriver(t_Phase *self)
          {
            ::org::orekit::utils::ParameterDriver result((jobject) NULL);
            OBJ_CALL(result = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
          }

          static PyObject *t_Phase_getWavelength(t_Phase *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getWavelength());
            return PyFloat_FromDouble((double) result);
          }
          static PyObject *t_Phase_get__parameters_(t_Phase *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Phase_get__ambiguityDriver(t_Phase *self, void *data)
          {
            ::org::orekit::utils::ParameterDriver value((jobject) NULL);
            OBJ_CALL(value = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
          }

          static PyObject *t_Phase_get__wavelength(t_Phase *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getWavelength());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/stk/STKEphemerisFileParser.h"
#include "java/util/Map.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UTCScale.h"
#include "java/lang/String.h"
#include "org/orekit/files/stk/STKEphemerisFile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        ::java::lang::Class *STKEphemerisFileParser::class$ = NULL;
        jmethodID *STKEphemerisFileParser::mids$ = NULL;
        bool STKEphemerisFileParser::live$ = false;

        jclass STKEphemerisFileParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/stk/STKEphemerisFileParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d9add9ff71134116] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLorg/orekit/time/UTCScale;Ljava/util/Map;)V");
            mids$[mid_parse_8357e440a0d0e83c] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/stk/STKEphemerisFile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        STKEphemerisFileParser::STKEphemerisFileParser(const ::java::lang::String & a0, jdouble a1, const ::org::orekit::time::UTCScale & a2, const ::java::util::Map & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d9add9ff71134116, a0.this$, a1, a2.this$, a3.this$)) {}

        ::org::orekit::files::stk::STKEphemerisFile STKEphemerisFileParser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::stk::STKEphemerisFile(env->callObjectMethod(this$, mids$[mid_parse_8357e440a0d0e83c], a0.this$));
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
        static PyObject *t_STKEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_STKEphemerisFileParser_init_(t_STKEphemerisFileParser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_STKEphemerisFileParser_parse(t_STKEphemerisFileParser *self, PyObject *arg);

        static PyMethodDef t_STKEphemerisFileParser__methods_[] = {
          DECLARE_METHOD(t_STKEphemerisFileParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFileParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFileParser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(STKEphemerisFileParser)[] = {
          { Py_tp_methods, t_STKEphemerisFileParser__methods_ },
          { Py_tp_init, (void *) t_STKEphemerisFileParser_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(STKEphemerisFileParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(STKEphemerisFileParser, t_STKEphemerisFileParser, STKEphemerisFileParser);

        void t_STKEphemerisFileParser::install(PyObject *module)
        {
          installType(&PY_TYPE(STKEphemerisFileParser), &PY_TYPE_DEF(STKEphemerisFileParser), module, "STKEphemerisFileParser", 0);
        }

        void t_STKEphemerisFileParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFileParser), "class_", make_descriptor(STKEphemerisFileParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFileParser), "wrapfn_", make_descriptor(t_STKEphemerisFileParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFileParser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_STKEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, STKEphemerisFileParser::initializeClass, 1)))
            return NULL;
          return t_STKEphemerisFileParser::wrap_Object(STKEphemerisFileParser(((t_STKEphemerisFileParser *) arg)->object.this$));
        }
        static PyObject *t_STKEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, STKEphemerisFileParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_STKEphemerisFileParser_init_(t_STKEphemerisFileParser *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::time::UTCScale a2((jobject) NULL);
          ::java::util::Map a3((jobject) NULL);
          PyTypeObject **p3;
          STKEphemerisFileParser object((jobject) NULL);

          if (!parseArgs(args, "sDkK", ::org::orekit::time::UTCScale::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_Map::parameters_))
          {
            INT_CALL(object = STKEphemerisFileParser(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_STKEphemerisFileParser_parse(t_STKEphemerisFileParser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::stk::STKEphemerisFile result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return ::org::orekit::files::stk::t_STKEphemerisFile::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *ExtendedEllipsoid::class$ = NULL;
        jmethodID *ExtendedEllipsoid::mids$ = NULL;
        bool ExtendedEllipsoid::live$ = false;

        jclass ExtendedEllipsoid::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/ExtendedEllipsoid");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9105dccfcf1a0a84] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/Frame;)V");
            mids$[mid_convertLos_301a09f2b4c627de] = env->getMethodID(cls, "convertLos", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_convertLos_b587e9d28a0048fe] = env->getMethodID(cls, "convertLos", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pointAtAltitude_21c804d1eea56b9e] = env->getMethodID(cls, "pointAtAltitude", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pointAtLatitude_196d74ae532b61ef] = env->getMethodID(cls, "pointAtLatitude", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pointAtLongitude_21c804d1eea56b9e] = env->getMethodID(cls, "pointAtLongitude", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pointOnGround_74f6e7db1afa1d6c] = env->getMethodID(cls, "pointOnGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_transform_a840d9913a98925f] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transform_f67fa82bac3192f0] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_transform_dd2ad2f711f150ec] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ExtendedEllipsoid::ExtendedEllipsoid(jdouble a0, jdouble a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::bodies::OneAxisEllipsoid(env->newObject(initializeClass, &mids$, mid_init$_9105dccfcf1a0a84, a0, a1, a2.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::convertLos(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_convertLos_301a09f2b4c627de], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::convertLos(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_convertLos_b587e9d28a0048fe], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::pointAtAltitude(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointAtAltitude_21c804d1eea56b9e], a0.this$, a1.this$, a2));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::pointAtLatitude(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointAtLatitude_196d74ae532b61ef], a0.this$, a1.this$, a2, a3.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::pointAtLongitude(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointAtLongitude_21c804d1eea56b9e], a0.this$, a1.this$, a2));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint ExtendedEllipsoid::pointOnGround(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_pointOnGround_74f6e7db1afa1d6c], a0.this$, a1.this$, a2));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::transform(const ::org::orekit::bodies::GeodeticPoint & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transform_a840d9913a98925f], a0.this$));
        }

        ::org::orekit::bodies::GeodeticPoint ExtendedEllipsoid::transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_f67fa82bac3192f0], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint ExtendedEllipsoid::transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_dd2ad2f711f150ec], a0.this$, a1.this$, a2.this$, a3));
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
      namespace utils {
        static PyObject *t_ExtendedEllipsoid_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ExtendedEllipsoid_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ExtendedEllipsoid_init_(t_ExtendedEllipsoid *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ExtendedEllipsoid_convertLos(t_ExtendedEllipsoid *self, PyObject *args);
        static PyObject *t_ExtendedEllipsoid_pointAtAltitude(t_ExtendedEllipsoid *self, PyObject *args);
        static PyObject *t_ExtendedEllipsoid_pointAtLatitude(t_ExtendedEllipsoid *self, PyObject *args);
        static PyObject *t_ExtendedEllipsoid_pointAtLongitude(t_ExtendedEllipsoid *self, PyObject *args);
        static PyObject *t_ExtendedEllipsoid_pointOnGround(t_ExtendedEllipsoid *self, PyObject *args);
        static PyObject *t_ExtendedEllipsoid_transform(t_ExtendedEllipsoid *self, PyObject *args);

        static PyMethodDef t_ExtendedEllipsoid__methods_[] = {
          DECLARE_METHOD(t_ExtendedEllipsoid, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExtendedEllipsoid, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExtendedEllipsoid, convertLos, METH_VARARGS),
          DECLARE_METHOD(t_ExtendedEllipsoid, pointAtAltitude, METH_VARARGS),
          DECLARE_METHOD(t_ExtendedEllipsoid, pointAtLatitude, METH_VARARGS),
          DECLARE_METHOD(t_ExtendedEllipsoid, pointAtLongitude, METH_VARARGS),
          DECLARE_METHOD(t_ExtendedEllipsoid, pointOnGround, METH_VARARGS),
          DECLARE_METHOD(t_ExtendedEllipsoid, transform, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ExtendedEllipsoid)[] = {
          { Py_tp_methods, t_ExtendedEllipsoid__methods_ },
          { Py_tp_init, (void *) t_ExtendedEllipsoid_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ExtendedEllipsoid)[] = {
          &PY_TYPE_DEF(::org::orekit::bodies::OneAxisEllipsoid),
          NULL
        };

        DEFINE_TYPE(ExtendedEllipsoid, t_ExtendedEllipsoid, ExtendedEllipsoid);

        void t_ExtendedEllipsoid::install(PyObject *module)
        {
          installType(&PY_TYPE(ExtendedEllipsoid), &PY_TYPE_DEF(ExtendedEllipsoid), module, "ExtendedEllipsoid", 0);
        }

        void t_ExtendedEllipsoid::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedEllipsoid), "class_", make_descriptor(ExtendedEllipsoid::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedEllipsoid), "wrapfn_", make_descriptor(t_ExtendedEllipsoid::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedEllipsoid), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ExtendedEllipsoid_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ExtendedEllipsoid::initializeClass, 1)))
            return NULL;
          return t_ExtendedEllipsoid::wrap_Object(ExtendedEllipsoid(((t_ExtendedEllipsoid *) arg)->object.this$));
        }
        static PyObject *t_ExtendedEllipsoid_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ExtendedEllipsoid::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ExtendedEllipsoid_init_(t_ExtendedEllipsoid *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::frames::Frame a2((jobject) NULL);
          ExtendedEllipsoid object((jobject) NULL);

          if (!parseArgs(args, "DDk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = ExtendedEllipsoid(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ExtendedEllipsoid_convertLos(t_ExtendedEllipsoid *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.convertLos(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.convertLos(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "convertLos", args);
          return NULL;
        }

        static PyObject *t_ExtendedEllipsoid_pointAtAltitude(t_ExtendedEllipsoid *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.pointAtAltitude(a0, a1, a2));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "pointAtAltitude", args);
          return NULL;
        }

        static PyObject *t_ExtendedEllipsoid_pointAtLatitude(t_ExtendedEllipsoid *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "kkDk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.pointAtLatitude(a0, a1, a2, a3));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "pointAtLatitude", args);
          return NULL;
        }

        static PyObject *t_ExtendedEllipsoid_pointAtLongitude(t_ExtendedEllipsoid *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.pointAtLongitude(a0, a1, a2));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "pointAtLongitude", args);
          return NULL;
        }

        static PyObject *t_ExtendedEllipsoid_pointOnGround(t_ExtendedEllipsoid *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.pointOnGround(a0, a1, a2));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "pointOnGround", args);
          return NULL;
        }

        static PyObject *t_ExtendedEllipsoid_transform(t_ExtendedEllipsoid *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
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
            break;
           case 4:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble a3;
              ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "kkkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.transform(a0, a1, a2, a3));
                return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(ExtendedEllipsoid), (PyObject *) self, "transform", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *KalmanEstimation::class$ = NULL;
        jmethodID *KalmanEstimation::mids$ = NULL;
        bool KalmanEstimation::live$ = false;

        jclass KalmanEstimation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/KalmanEstimation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCorrectedMeasurement_9927c8980e79c922] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_3807ff088e7ce821] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_c325492395d89b24] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_55546ef6a647f39b] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimatedMeasurementsParameters_cfb822366e8ab425] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_cfb822366e8ab425] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_cfb822366e8ab425] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_3a10cc75bd070d84] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_9927c8980e79c922] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedSpacecraftStates_3807ff088e7ce821] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement KalmanEstimation::getCorrectedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getCorrectedMeasurement_9927c8980e79c922]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > KalmanEstimation::getCorrectedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getCorrectedSpacecraftStates_3807ff088e7ce821]));
        }

        ::org::orekit::time::AbsoluteDate KalmanEstimation::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_c325492395d89b24]));
        }

        jint KalmanEstimation::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_55546ef6a647f39b]);
        }

        ::org::orekit::utils::ParameterDriversList KalmanEstimation::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_cfb822366e8ab425]));
        }

        ::org::orekit::utils::ParameterDriversList KalmanEstimation::getEstimatedOrbitalParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedOrbitalParameters_cfb822366e8ab425]));
        }

        ::org::orekit::utils::ParameterDriversList KalmanEstimation::getEstimatedPropagationParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagationParameters_cfb822366e8ab425]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimation::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::RealVector KalmanEstimation::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_3a10cc75bd070d84]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimation::getPhysicalInnovationCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalInnovationCovarianceMatrix_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimation::getPhysicalKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalKalmanGain_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimation::getPhysicalMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalMeasurementJacobian_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimation::getPhysicalStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalStateTransitionMatrix_f77d745f2128c391]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement KalmanEstimation::getPredictedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurement_9927c8980e79c922]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > KalmanEstimation::getPredictedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getPredictedSpacecraftStates_3807ff088e7ce821]));
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
        static PyObject *t_KalmanEstimation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimation_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimation_getCorrectedMeasurement(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getCorrectedSpacecraftStates(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getCurrentDate(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getCurrentMeasurementNumber(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getEstimatedMeasurementsParameters(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getEstimatedOrbitalParameters(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getEstimatedPropagationParameters(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalEstimatedCovarianceMatrix(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalEstimatedState(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalInnovationCovarianceMatrix(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalKalmanGain(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalMeasurementJacobian(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalStateTransitionMatrix(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPredictedMeasurement(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPredictedSpacecraftStates(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_get__correctedMeasurement(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__correctedSpacecraftStates(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__currentDate(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__currentMeasurementNumber(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__estimatedMeasurementsParameters(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__estimatedOrbitalParameters(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__estimatedPropagationParameters(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalEstimatedCovarianceMatrix(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalEstimatedState(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalInnovationCovarianceMatrix(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalKalmanGain(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalMeasurementJacobian(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalStateTransitionMatrix(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__predictedMeasurement(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__predictedSpacecraftStates(t_KalmanEstimation *self, void *data);
        static PyGetSetDef t_KalmanEstimation__fields_[] = {
          DECLARE_GET_FIELD(t_KalmanEstimation, correctedMeasurement),
          DECLARE_GET_FIELD(t_KalmanEstimation, correctedSpacecraftStates),
          DECLARE_GET_FIELD(t_KalmanEstimation, currentDate),
          DECLARE_GET_FIELD(t_KalmanEstimation, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_KalmanEstimation, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_KalmanEstimation, estimatedOrbitalParameters),
          DECLARE_GET_FIELD(t_KalmanEstimation, estimatedPropagationParameters),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalEstimatedState),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalInnovationCovarianceMatrix),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalKalmanGain),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalMeasurementJacobian),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalStateTransitionMatrix),
          DECLARE_GET_FIELD(t_KalmanEstimation, predictedMeasurement),
          DECLARE_GET_FIELD(t_KalmanEstimation, predictedSpacecraftStates),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KalmanEstimation__methods_[] = {
          DECLARE_METHOD(t_KalmanEstimation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimation, getCorrectedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getCorrectedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getEstimatedOrbitalParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getEstimatedPropagationParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalInnovationCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPredictedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPredictedSpacecraftStates, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanEstimation)[] = {
          { Py_tp_methods, t_KalmanEstimation__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_KalmanEstimation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanEstimation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KalmanEstimation, t_KalmanEstimation, KalmanEstimation);

        void t_KalmanEstimation::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanEstimation), &PY_TYPE_DEF(KalmanEstimation), module, "KalmanEstimation", 0);
        }

        void t_KalmanEstimation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimation), "class_", make_descriptor(KalmanEstimation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimation), "wrapfn_", make_descriptor(t_KalmanEstimation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanEstimation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanEstimation::initializeClass, 1)))
            return NULL;
          return t_KalmanEstimation::wrap_Object(KalmanEstimation(((t_KalmanEstimation *) arg)->object.this$));
        }
        static PyObject *t_KalmanEstimation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanEstimation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_KalmanEstimation_getCorrectedMeasurement(t_KalmanEstimation *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getCorrectedSpacecraftStates(t_KalmanEstimation *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanEstimation_getCurrentDate(t_KalmanEstimation *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getCurrentMeasurementNumber(t_KalmanEstimation *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_KalmanEstimation_getEstimatedMeasurementsParameters(t_KalmanEstimation *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getEstimatedOrbitalParameters(t_KalmanEstimation *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getEstimatedPropagationParameters(t_KalmanEstimation *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalEstimatedCovarianceMatrix(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalEstimatedState(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalInnovationCovarianceMatrix(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalKalmanGain(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalMeasurementJacobian(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalStateTransitionMatrix(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPredictedMeasurement(t_KalmanEstimation *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPredictedSpacecraftStates(t_KalmanEstimation *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanEstimation_get__correctedMeasurement(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__correctedSpacecraftStates(t_KalmanEstimation *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanEstimation_get__currentDate(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__currentMeasurementNumber(t_KalmanEstimation *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_KalmanEstimation_get__estimatedMeasurementsParameters(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__estimatedOrbitalParameters(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__estimatedPropagationParameters(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalEstimatedCovarianceMatrix(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalEstimatedState(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalInnovationCovarianceMatrix(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalKalmanGain(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalMeasurementJacobian(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalStateTransitionMatrix(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__predictedMeasurement(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__predictedSpacecraftStates(t_KalmanEstimation *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ODEJacobiansProvider.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/NamedParameterJacobianProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ODEJacobiansProvider::class$ = NULL;
      jmethodID *ODEJacobiansProvider::mids$ = NULL;
      bool ODEJacobiansProvider::live$ = false;

      jclass ODEJacobiansProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ODEJacobiansProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeMainStateJacobian_48051c73015abecf] = env->getMethodID(cls, "computeMainStateJacobian", "(D[D[D)[[D");
          mids$[mid_computeParameterJacobian_c668528785bd21ab] = env->getMethodID(cls, "computeParameterJacobian", "(D[D[DLjava/lang/String;)[D");
          mids$[mid_getParametersNames_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersNames", "()Ljava/util/List;");
          mids$[mid_isSupported_cde6b28e15c96b75] = env->getMethodID(cls, "isSupported", "(Ljava/lang/String;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< jdouble > > ODEJacobiansProvider::computeMainStateJacobian(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_computeMainStateJacobian_48051c73015abecf], a0, a1.this$, a2.this$));
      }

      JArray< jdouble > ODEJacobiansProvider::computeParameterJacobian(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const ::java::lang::String & a3) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeParameterJacobian_c668528785bd21ab], a0, a1.this$, a2.this$, a3.this$));
      }

      ::java::util::List ODEJacobiansProvider::getParametersNames() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersNames_e62d3bb06d56d7e3]));
      }

      jboolean ODEJacobiansProvider::isSupported(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupported_cde6b28e15c96b75], a0.this$);
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
      static PyObject *t_ODEJacobiansProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ODEJacobiansProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ODEJacobiansProvider_computeMainStateJacobian(t_ODEJacobiansProvider *self, PyObject *args);
      static PyObject *t_ODEJacobiansProvider_computeParameterJacobian(t_ODEJacobiansProvider *self, PyObject *args);
      static PyObject *t_ODEJacobiansProvider_getParametersNames(t_ODEJacobiansProvider *self);
      static PyObject *t_ODEJacobiansProvider_isSupported(t_ODEJacobiansProvider *self, PyObject *arg);
      static PyObject *t_ODEJacobiansProvider_get__parametersNames(t_ODEJacobiansProvider *self, void *data);
      static PyGetSetDef t_ODEJacobiansProvider__fields_[] = {
        DECLARE_GET_FIELD(t_ODEJacobiansProvider, parametersNames),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ODEJacobiansProvider__methods_[] = {
        DECLARE_METHOD(t_ODEJacobiansProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEJacobiansProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEJacobiansProvider, computeMainStateJacobian, METH_VARARGS),
        DECLARE_METHOD(t_ODEJacobiansProvider, computeParameterJacobian, METH_VARARGS),
        DECLARE_METHOD(t_ODEJacobiansProvider, getParametersNames, METH_NOARGS),
        DECLARE_METHOD(t_ODEJacobiansProvider, isSupported, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ODEJacobiansProvider)[] = {
        { Py_tp_methods, t_ODEJacobiansProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ODEJacobiansProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ODEJacobiansProvider)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::OrdinaryDifferentialEquation),
        NULL
      };

      DEFINE_TYPE(ODEJacobiansProvider, t_ODEJacobiansProvider, ODEJacobiansProvider);

      void t_ODEJacobiansProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(ODEJacobiansProvider), &PY_TYPE_DEF(ODEJacobiansProvider), module, "ODEJacobiansProvider", 0);
      }

      void t_ODEJacobiansProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEJacobiansProvider), "class_", make_descriptor(ODEJacobiansProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEJacobiansProvider), "wrapfn_", make_descriptor(t_ODEJacobiansProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEJacobiansProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ODEJacobiansProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ODEJacobiansProvider::initializeClass, 1)))
          return NULL;
        return t_ODEJacobiansProvider::wrap_Object(ODEJacobiansProvider(((t_ODEJacobiansProvider *) arg)->object.this$));
      }
      static PyObject *t_ODEJacobiansProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ODEJacobiansProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ODEJacobiansProvider_computeMainStateJacobian(t_ODEJacobiansProvider *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArgs(args, "D[D[D", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.computeMainStateJacobian(a0, a1, a2));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "computeMainStateJacobian", args);
        return NULL;
      }

      static PyObject *t_ODEJacobiansProvider_computeParameterJacobian(t_ODEJacobiansProvider *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D[Ds", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.computeParameterJacobian(a0, a1, a2, a3));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "computeParameterJacobian", args);
        return NULL;
      }

      static PyObject *t_ODEJacobiansProvider_getParametersNames(t_ODEJacobiansProvider *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getParametersNames());
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_ODEJacobiansProvider_isSupported(t_ODEJacobiansProvider *self, PyObject *arg)
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

      static PyObject *t_ODEJacobiansProvider_get__parametersNames(t_ODEJacobiansProvider *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getParametersNames());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepHandler.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *FieldOrekitStepHandler::class$ = NULL;
        jmethodID *FieldOrekitStepHandler::mids$ = NULL;
        bool FieldOrekitStepHandler::live$ = false;

        jclass FieldOrekitStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/FieldOrekitStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_54d9efbf99822980] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_handleStep_fa82adff12d70536] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V");
            mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldOrekitStepHandler::finish(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_54d9efbf99822980], a0.this$);
        }

        void FieldOrekitStepHandler::handleStep(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_fa82adff12d70536], a0.this$);
        }

        void FieldOrekitStepHandler::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_96d019f392abf918], a0.this$, a1.this$);
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
        static PyObject *t_FieldOrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitStepHandler_of_(t_FieldOrekitStepHandler *self, PyObject *args);
        static PyObject *t_FieldOrekitStepHandler_finish(t_FieldOrekitStepHandler *self, PyObject *arg);
        static PyObject *t_FieldOrekitStepHandler_handleStep(t_FieldOrekitStepHandler *self, PyObject *arg);
        static PyObject *t_FieldOrekitStepHandler_init(t_FieldOrekitStepHandler *self, PyObject *args);
        static PyObject *t_FieldOrekitStepHandler_get__parameters_(t_FieldOrekitStepHandler *self, void *data);
        static PyGetSetDef t_FieldOrekitStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOrekitStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOrekitStepHandler__methods_[] = {
          DECLARE_METHOD(t_FieldOrekitStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldOrekitStepHandler, finish, METH_O),
          DECLARE_METHOD(t_FieldOrekitStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_FieldOrekitStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOrekitStepHandler)[] = {
          { Py_tp_methods, t_FieldOrekitStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldOrekitStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOrekitStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldOrekitStepHandler, t_FieldOrekitStepHandler, FieldOrekitStepHandler);
        PyObject *t_FieldOrekitStepHandler::wrap_Object(const FieldOrekitStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitStepHandler *self = (t_FieldOrekitStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldOrekitStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitStepHandler *self = (t_FieldOrekitStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldOrekitStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOrekitStepHandler), &PY_TYPE_DEF(FieldOrekitStepHandler), module, "FieldOrekitStepHandler", 0);
        }

        void t_FieldOrekitStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepHandler), "class_", make_descriptor(FieldOrekitStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepHandler), "wrapfn_", make_descriptor(t_FieldOrekitStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOrekitStepHandler::initializeClass, 1)))
            return NULL;
          return t_FieldOrekitStepHandler::wrap_Object(FieldOrekitStepHandler(((t_FieldOrekitStepHandler *) arg)->object.this$));
        }
        static PyObject *t_FieldOrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOrekitStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOrekitStepHandler_of_(t_FieldOrekitStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldOrekitStepHandler_finish(t_FieldOrekitStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitStepHandler_handleStep(t_FieldOrekitStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitStepHandler_init(t_FieldOrekitStepHandler *self, PyObject *args)
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
        static PyObject *t_FieldOrekitStepHandler_get__parameters_(t_FieldOrekitStepHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Hyperplane::class$ = NULL;
        jmethodID *Hyperplane::mids$ = NULL;
        bool Hyperplane::live$ = false;

        jclass Hyperplane::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Hyperplane");

            mids$ = new jmethodID[max_mid];
            mids$[mid_copySelf_40a20a6ecfa9e745] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/Hyperplane;");
            mids$[mid_emptyHyperplane_0417f9f9ce6ee466] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getOffset_f0dd8cb59ea09794] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
            mids$[mid_getTolerance_b74f83833fdad017] = env->getMethodID(cls, "getTolerance", "()D");
            mids$[mid_project_2214f7ad5b6ca158] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
            mids$[mid_sameOrientationAs_806ecfbca1984226] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
            mids$[mid_wholeHyperplane_0417f9f9ce6ee466] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_wholeSpace_3698fd1911856e70] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/partitioning/Region;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Hyperplane Hyperplane::copySelf() const
        {
          return Hyperplane(env->callObjectMethod(this$, mids$[mid_copySelf_40a20a6ecfa9e745]));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane Hyperplane::emptyHyperplane() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_0417f9f9ce6ee466]));
        }

        jdouble Hyperplane::getOffset(const ::org::hipparchus::geometry::Point & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOffset_f0dd8cb59ea09794], a0.this$);
        }

        jdouble Hyperplane::getTolerance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTolerance_b74f83833fdad017]);
        }

        ::org::hipparchus::geometry::Point Hyperplane::project(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_2214f7ad5b6ca158], a0.this$));
        }

        jboolean Hyperplane::sameOrientationAs(const Hyperplane & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_806ecfbca1984226], a0.this$);
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane Hyperplane::wholeHyperplane() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_0417f9f9ce6ee466]));
        }

        ::org::hipparchus::geometry::partitioning::Region Hyperplane::wholeSpace() const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_wholeSpace_3698fd1911856e70]));
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
        static PyObject *t_Hyperplane_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Hyperplane_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Hyperplane_of_(t_Hyperplane *self, PyObject *args);
        static PyObject *t_Hyperplane_copySelf(t_Hyperplane *self);
        static PyObject *t_Hyperplane_emptyHyperplane(t_Hyperplane *self);
        static PyObject *t_Hyperplane_getOffset(t_Hyperplane *self, PyObject *arg);
        static PyObject *t_Hyperplane_getTolerance(t_Hyperplane *self);
        static PyObject *t_Hyperplane_project(t_Hyperplane *self, PyObject *arg);
        static PyObject *t_Hyperplane_sameOrientationAs(t_Hyperplane *self, PyObject *arg);
        static PyObject *t_Hyperplane_wholeHyperplane(t_Hyperplane *self);
        static PyObject *t_Hyperplane_wholeSpace(t_Hyperplane *self);
        static PyObject *t_Hyperplane_get__tolerance(t_Hyperplane *self, void *data);
        static PyObject *t_Hyperplane_get__parameters_(t_Hyperplane *self, void *data);
        static PyGetSetDef t_Hyperplane__fields_[] = {
          DECLARE_GET_FIELD(t_Hyperplane, tolerance),
          DECLARE_GET_FIELD(t_Hyperplane, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Hyperplane__methods_[] = {
          DECLARE_METHOD(t_Hyperplane, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Hyperplane, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Hyperplane, of_, METH_VARARGS),
          DECLARE_METHOD(t_Hyperplane, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_Hyperplane, emptyHyperplane, METH_NOARGS),
          DECLARE_METHOD(t_Hyperplane, getOffset, METH_O),
          DECLARE_METHOD(t_Hyperplane, getTolerance, METH_NOARGS),
          DECLARE_METHOD(t_Hyperplane, project, METH_O),
          DECLARE_METHOD(t_Hyperplane, sameOrientationAs, METH_O),
          DECLARE_METHOD(t_Hyperplane, wholeHyperplane, METH_NOARGS),
          DECLARE_METHOD(t_Hyperplane, wholeSpace, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Hyperplane)[] = {
          { Py_tp_methods, t_Hyperplane__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Hyperplane__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Hyperplane)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Hyperplane, t_Hyperplane, Hyperplane);
        PyObject *t_Hyperplane::wrap_Object(const Hyperplane& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Hyperplane::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Hyperplane *self = (t_Hyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Hyperplane::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Hyperplane::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Hyperplane *self = (t_Hyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Hyperplane::install(PyObject *module)
        {
          installType(&PY_TYPE(Hyperplane), &PY_TYPE_DEF(Hyperplane), module, "Hyperplane", 0);
        }

        void t_Hyperplane::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Hyperplane), "class_", make_descriptor(Hyperplane::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Hyperplane), "wrapfn_", make_descriptor(t_Hyperplane::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Hyperplane), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Hyperplane_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Hyperplane::initializeClass, 1)))
            return NULL;
          return t_Hyperplane::wrap_Object(Hyperplane(((t_Hyperplane *) arg)->object.this$));
        }
        static PyObject *t_Hyperplane_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Hyperplane::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Hyperplane_of_(t_Hyperplane *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Hyperplane_copySelf(t_Hyperplane *self)
        {
          Hyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_Hyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_Hyperplane_emptyHyperplane(t_Hyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.emptyHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_Hyperplane_getOffset(t_Hyperplane *self, PyObject *arg)
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

        static PyObject *t_Hyperplane_getTolerance(t_Hyperplane *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTolerance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Hyperplane_project(t_Hyperplane *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::Point result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.project(a0));
            return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "project", arg);
          return NULL;
        }

        static PyObject *t_Hyperplane_sameOrientationAs(t_Hyperplane *self, PyObject *arg)
        {
          Hyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", Hyperplane::initializeClass, &a0, &p0, t_Hyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.sameOrientationAs(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
          return NULL;
        }

        static PyObject *t_Hyperplane_wholeHyperplane(t_Hyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.wholeHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_Hyperplane_wholeSpace(t_Hyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);
          OBJ_CALL(result = self->object.wholeSpace());
          return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_Hyperplane_get__parameters_(t_Hyperplane *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_Hyperplane_get__tolerance(t_Hyperplane *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTolerance());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/weather/WeatherModel.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {

          ::java::lang::Class *WeatherModel::class$ = NULL;
          jmethodID *WeatherModel::mids$ = NULL;
          bool WeatherModel::live$ = false;

          jclass WeatherModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/weather/WeatherModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_weatherParameters_98ef3c02384a4218] = env->getMethodID(cls, "weatherParameters", "(DLorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void WeatherModel::weatherParameters(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_weatherParameters_98ef3c02384a4218], a0, a1.this$);
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
        namespace weather {
          static PyObject *t_WeatherModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WeatherModel_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WeatherModel_weatherParameters(t_WeatherModel *self, PyObject *args);

          static PyMethodDef t_WeatherModel__methods_[] = {
            DECLARE_METHOD(t_WeatherModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WeatherModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WeatherModel, weatherParameters, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(WeatherModel)[] = {
            { Py_tp_methods, t_WeatherModel__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(WeatherModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(WeatherModel, t_WeatherModel, WeatherModel);

          void t_WeatherModel::install(PyObject *module)
          {
            installType(&PY_TYPE(WeatherModel), &PY_TYPE_DEF(WeatherModel), module, "WeatherModel", 0);
          }

          void t_WeatherModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(WeatherModel), "class_", make_descriptor(WeatherModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WeatherModel), "wrapfn_", make_descriptor(t_WeatherModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WeatherModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_WeatherModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, WeatherModel::initializeClass, 1)))
              return NULL;
            return t_WeatherModel::wrap_Object(WeatherModel(((t_WeatherModel *) arg)->object.this$));
          }
          static PyObject *t_WeatherModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, WeatherModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_WeatherModel_weatherParameters(t_WeatherModel *self, PyObject *args)
          {
            jdouble a0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.weatherParameters(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "weatherParameters", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/IOException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *IOException::class$ = NULL;
    jmethodID *IOException::mids$ = NULL;
    bool IOException::live$ = false;

    jclass IOException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/IOException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_c5d3549d4f245728] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_9d7a6ef9713b9df2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    IOException::IOException() : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    IOException::IOException(const ::java::lang::String & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    IOException::IOException(const ::java::lang::Throwable & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_c5d3549d4f245728, a0.this$)) {}

    IOException::IOException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_9d7a6ef9713b9df2, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_IOException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_IOException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_IOException_init_(t_IOException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_IOException__methods_[] = {
      DECLARE_METHOD(t_IOException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_IOException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(IOException)[] = {
      { Py_tp_methods, t_IOException__methods_ },
      { Py_tp_init, (void *) t_IOException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(IOException)[] = {
      &PY_TYPE_DEF(::java::lang::Exception),
      NULL
    };

    DEFINE_TYPE(IOException, t_IOException, IOException);

    void t_IOException::install(PyObject *module)
    {
      installType(&PY_TYPE(IOException), &PY_TYPE_DEF(IOException), module, "IOException", 0);
    }

    void t_IOException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(IOException), "class_", make_descriptor(IOException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IOException), "wrapfn_", make_descriptor(t_IOException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IOException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_IOException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, IOException::initializeClass, 1)))
        return NULL;
      return t_IOException::wrap_Object(IOException(((t_IOException *) arg)->object.this$));
    }
    static PyObject *t_IOException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, IOException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_IOException_init_(t_IOException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          IOException object((jobject) NULL);

          INT_CALL(object = IOException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          IOException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = IOException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          IOException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = IOException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          IOException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = IOException(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/clock/RinexClock.h"
#include "org/orekit/files/rinex/AppliedDCBS.h"
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataLine.h"
#include "org/orekit/files/rinex/AppliedPCVS.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/util/List.h"
#include "org/orekit/files/rinex/clock/RinexClock$Receiver.h"
#include "java/util/Map.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "org/orekit/gnss/ObservationType.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/rinex/clock/RinexClock$ReferenceClock.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClock::class$ = NULL;
          jmethodID *RinexClock::mids$ = NULL;
          bool RinexClock::live$ = false;

          jclass RinexClock::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClock");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addAppliedDCBS_0fdf888bd1afbe51] = env->getMethodID(cls, "addAppliedDCBS", "(Lorg/orekit/files/rinex/AppliedDCBS;)V");
              mids$[mid_addAppliedPCVS_f61ab6fa49270d08] = env->getMethodID(cls, "addAppliedPCVS", "(Lorg/orekit/files/rinex/AppliedPCVS;)V");
              mids$[mid_addClockData_9828908024180d2a] = env->getMethodID(cls, "addClockData", "(Ljava/lang/String;Lorg/orekit/files/rinex/clock/RinexClock$ClockDataLine;)V");
              mids$[mid_addClockDataType_b2796a169d1d60c5] = env->getMethodID(cls, "addClockDataType", "(Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;)V");
              mids$[mid_addComment_734b91ac30d5f9b4] = env->getMethodID(cls, "addComment", "(Ljava/lang/String;)V");
              mids$[mid_addReceiver_cc20597cc7527128] = env->getMethodID(cls, "addReceiver", "(Lorg/orekit/files/rinex/clock/RinexClock$Receiver;)V");
              mids$[mid_addReferenceClockList_0365da66b6e36325] = env->getMethodID(cls, "addReferenceClockList", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_addSatellite_734b91ac30d5f9b4] = env->getMethodID(cls, "addSatellite", "(Ljava/lang/String;)V");
              mids$[mid_addSystemObservationType_0afc6586e9189025] = env->getMethodID(cls, "addSystemObservationType", "(Lorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/ObservationType;)V");
              mids$[mid_getAgencyName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getAgencyName", "()Ljava/lang/String;");
              mids$[mid_getAnalysisCenterID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getAnalysisCenterID", "()Ljava/lang/String;");
              mids$[mid_getAnalysisCenterName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getAnalysisCenterName", "()Ljava/lang/String;");
              mids$[mid_getClockData_810bed48fafb0b9a] = env->getMethodID(cls, "getClockData", "()Ljava/util/Map;");
              mids$[mid_getClockDataTypes_e62d3bb06d56d7e3] = env->getMethodID(cls, "getClockDataTypes", "()Ljava/util/List;");
              mids$[mid_getComments_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getComments", "()Ljava/lang/String;");
              mids$[mid_getCreationDate_c325492395d89b24] = env->getMethodID(cls, "getCreationDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getCreationDateString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCreationDateString", "()Ljava/lang/String;");
              mids$[mid_getCreationTimeString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCreationTimeString", "()Ljava/lang/String;");
              mids$[mid_getCreationTimeZoneString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCreationTimeZoneString", "()Ljava/lang/String;");
              mids$[mid_getExternalClockReference_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getExternalClockReference", "()Ljava/lang/String;");
              mids$[mid_getFormatVersion_b74f83833fdad017] = env->getMethodID(cls, "getFormatVersion", "()D");
              mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getFrameName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getFrameName", "()Ljava/lang/String;");
              mids$[mid_getListAppliedDCBS_e62d3bb06d56d7e3] = env->getMethodID(cls, "getListAppliedDCBS", "()Ljava/util/List;");
              mids$[mid_getListAppliedPCVS_e62d3bb06d56d7e3] = env->getMethodID(cls, "getListAppliedPCVS", "()Ljava/util/List;");
              mids$[mid_getNumberOfClockDataTypes_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfClockDataTypes", "()I");
              mids$[mid_getNumberOfLeapSeconds_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfLeapSeconds", "()I");
              mids$[mid_getNumberOfLeapSecondsGNSS_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfLeapSecondsGNSS", "()I");
              mids$[mid_getNumberOfReceivers_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfReceivers", "()I");
              mids$[mid_getNumberOfSatellites_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfSatellites", "()I");
              mids$[mid_getProgramName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getProgramName", "()Ljava/lang/String;");
              mids$[mid_getReceivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getReceivers", "()Ljava/util/List;");
              mids$[mid_getReferenceClocks_2f46b86c016957a0] = env->getMethodID(cls, "getReferenceClocks", "()Lorg/orekit/utils/TimeSpanMap;");
              mids$[mid_getSatelliteSystem_21bd759cc4a81606] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
              mids$[mid_getSatellites_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSatellites", "()Ljava/util/List;");
              mids$[mid_getStationIdentifier_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getStationIdentifier", "()Ljava/lang/String;");
              mids$[mid_getStationName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getStationName", "()Ljava/lang/String;");
              mids$[mid_getSystemObservationTypes_810bed48fafb0b9a] = env->getMethodID(cls, "getSystemObservationTypes", "()Ljava/util/Map;");
              mids$[mid_getTimeScale_34d3bda0a8989e3e] = env->getMethodID(cls, "getTimeScale", "()Lorg/orekit/time/TimeScale;");
              mids$[mid_getTimeSystem_28830357acffb3e1] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/gnss/TimeSystem;");
              mids$[mid_getTotalNumberOfDataLines_55546ef6a647f39b] = env->getMethodID(cls, "getTotalNumberOfDataLines", "()I");
              mids$[mid_numberOfObsTypes_927782bd59041992] = env->getMethodID(cls, "numberOfObsTypes", "(Lorg/orekit/gnss/SatelliteSystem;)I");
              mids$[mid_setAgencyName_734b91ac30d5f9b4] = env->getMethodID(cls, "setAgencyName", "(Ljava/lang/String;)V");
              mids$[mid_setAnalysisCenterID_734b91ac30d5f9b4] = env->getMethodID(cls, "setAnalysisCenterID", "(Ljava/lang/String;)V");
              mids$[mid_setAnalysisCenterName_734b91ac30d5f9b4] = env->getMethodID(cls, "setAnalysisCenterName", "(Ljava/lang/String;)V");
              mids$[mid_setCreationDate_02135a6ef25adb4b] = env->getMethodID(cls, "setCreationDate", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setCreationDateString_734b91ac30d5f9b4] = env->getMethodID(cls, "setCreationDateString", "(Ljava/lang/String;)V");
              mids$[mid_setCreationTimeString_734b91ac30d5f9b4] = env->getMethodID(cls, "setCreationTimeString", "(Ljava/lang/String;)V");
              mids$[mid_setCreationTimeZoneString_734b91ac30d5f9b4] = env->getMethodID(cls, "setCreationTimeZoneString", "(Ljava/lang/String;)V");
              mids$[mid_setExternalClockReference_734b91ac30d5f9b4] = env->getMethodID(cls, "setExternalClockReference", "(Ljava/lang/String;)V");
              mids$[mid_setFormatVersion_8ba9fe7a847cecad] = env->getMethodID(cls, "setFormatVersion", "(D)V");
              mids$[mid_setFrameName_734b91ac30d5f9b4] = env->getMethodID(cls, "setFrameName", "(Ljava/lang/String;)V");
              mids$[mid_setNumberOfLeapSeconds_44ed599e93e8a30c] = env->getMethodID(cls, "setNumberOfLeapSeconds", "(I)V");
              mids$[mid_setNumberOfLeapSecondsGNSS_44ed599e93e8a30c] = env->getMethodID(cls, "setNumberOfLeapSecondsGNSS", "(I)V");
              mids$[mid_setProgramName_734b91ac30d5f9b4] = env->getMethodID(cls, "setProgramName", "(Ljava/lang/String;)V");
              mids$[mid_setSatelliteSystem_cfddc646eebc7104] = env->getMethodID(cls, "setSatelliteSystem", "(Lorg/orekit/gnss/SatelliteSystem;)V");
              mids$[mid_setStationIdentifier_734b91ac30d5f9b4] = env->getMethodID(cls, "setStationIdentifier", "(Ljava/lang/String;)V");
              mids$[mid_setStationName_734b91ac30d5f9b4] = env->getMethodID(cls, "setStationName", "(Ljava/lang/String;)V");
              mids$[mid_setTimeScale_cae5d0c3721eff67] = env->getMethodID(cls, "setTimeScale", "(Lorg/orekit/time/TimeScale;)V");
              mids$[mid_setTimeSystem_885124f6a0a748ea] = env->getMethodID(cls, "setTimeSystem", "(Lorg/orekit/gnss/TimeSystem;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void RinexClock::addAppliedDCBS(const ::org::orekit::files::rinex::AppliedDCBS & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addAppliedDCBS_0fdf888bd1afbe51], a0.this$);
          }

          void RinexClock::addAppliedPCVS(const ::org::orekit::files::rinex::AppliedPCVS & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addAppliedPCVS_f61ab6fa49270d08], a0.this$);
          }

          void RinexClock::addClockData(const ::java::lang::String & a0, const ::org::orekit::files::rinex::clock::RinexClock$ClockDataLine & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addClockData_9828908024180d2a], a0.this$, a1.this$);
          }

          void RinexClock::addClockDataType(const ::org::orekit::files::rinex::clock::RinexClock$ClockDataType & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addClockDataType_b2796a169d1d60c5], a0.this$);
          }

          void RinexClock::addComment(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addComment_734b91ac30d5f9b4], a0.this$);
          }

          void RinexClock::addReceiver(const ::org::orekit::files::rinex::clock::RinexClock$Receiver & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addReceiver_cc20597cc7527128], a0.this$);
          }

          void RinexClock::addReferenceClockList(const ::java::util::List & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addReferenceClockList_0365da66b6e36325], a0.this$, a1.this$);
          }

          void RinexClock::addSatellite(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addSatellite_734b91ac30d5f9b4], a0.this$);
          }

          void RinexClock::addSystemObservationType(const ::org::orekit::gnss::SatelliteSystem & a0, const ::org::orekit::gnss::ObservationType & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addSystemObservationType_0afc6586e9189025], a0.this$, a1.this$);
          }

          ::java::lang::String RinexClock::getAgencyName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAgencyName_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String RinexClock::getAnalysisCenterID() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAnalysisCenterID_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String RinexClock::getAnalysisCenterName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAnalysisCenterName_1c1fa1e935d6cdcf]));
          }

          ::java::util::Map RinexClock::getClockData() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getClockData_810bed48fafb0b9a]));
          }

          ::java::util::List RinexClock::getClockDataTypes() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getClockDataTypes_e62d3bb06d56d7e3]));
          }

          ::java::lang::String RinexClock::getComments() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getComments_1c1fa1e935d6cdcf]));
          }

          ::org::orekit::time::AbsoluteDate RinexClock::getCreationDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCreationDate_c325492395d89b24]));
          }

          ::java::lang::String RinexClock::getCreationDateString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCreationDateString_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String RinexClock::getCreationTimeString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCreationTimeString_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String RinexClock::getCreationTimeZoneString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCreationTimeZoneString_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String RinexClock::getExternalClockReference() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getExternalClockReference_1c1fa1e935d6cdcf]));
          }

          jdouble RinexClock::getFormatVersion() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFormatVersion_b74f83833fdad017]);
          }

          ::org::orekit::frames::Frame RinexClock::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
          }

          ::java::lang::String RinexClock::getFrameName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFrameName_1c1fa1e935d6cdcf]));
          }

          ::java::util::List RinexClock::getListAppliedDCBS() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getListAppliedDCBS_e62d3bb06d56d7e3]));
          }

          ::java::util::List RinexClock::getListAppliedPCVS() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getListAppliedPCVS_e62d3bb06d56d7e3]));
          }

          jint RinexClock::getNumberOfClockDataTypes() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfClockDataTypes_55546ef6a647f39b]);
          }

          jint RinexClock::getNumberOfLeapSeconds() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfLeapSeconds_55546ef6a647f39b]);
          }

          jint RinexClock::getNumberOfLeapSecondsGNSS() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfLeapSecondsGNSS_55546ef6a647f39b]);
          }

          jint RinexClock::getNumberOfReceivers() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfReceivers_55546ef6a647f39b]);
          }

          jint RinexClock::getNumberOfSatellites() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfSatellites_55546ef6a647f39b]);
          }

          ::java::lang::String RinexClock::getProgramName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProgramName_1c1fa1e935d6cdcf]));
          }

          ::java::util::List RinexClock::getReceivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getReceivers_e62d3bb06d56d7e3]));
          }

          ::org::orekit::utils::TimeSpanMap RinexClock::getReferenceClocks() const
          {
            return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getReferenceClocks_2f46b86c016957a0]));
          }

          ::org::orekit::gnss::SatelliteSystem RinexClock::getSatelliteSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_21bd759cc4a81606]));
          }

          ::java::util::List RinexClock::getSatellites() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatellites_e62d3bb06d56d7e3]));
          }

          ::java::lang::String RinexClock::getStationIdentifier() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStationIdentifier_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String RinexClock::getStationName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStationName_1c1fa1e935d6cdcf]));
          }

          ::java::util::Map RinexClock::getSystemObservationTypes() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSystemObservationTypes_810bed48fafb0b9a]));
          }

          ::org::orekit::time::TimeScale RinexClock::getTimeScale() const
          {
            return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_34d3bda0a8989e3e]));
          }

          ::org::orekit::gnss::TimeSystem RinexClock::getTimeSystem() const
          {
            return ::org::orekit::gnss::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_28830357acffb3e1]));
          }

          jint RinexClock::getTotalNumberOfDataLines() const
          {
            return env->callIntMethod(this$, mids$[mid_getTotalNumberOfDataLines_55546ef6a647f39b]);
          }

          jint RinexClock::numberOfObsTypes(const ::org::orekit::gnss::SatelliteSystem & a0) const
          {
            return env->callIntMethod(this$, mids$[mid_numberOfObsTypes_927782bd59041992], a0.this$);
          }

          void RinexClock::setAgencyName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAgencyName_734b91ac30d5f9b4], a0.this$);
          }

          void RinexClock::setAnalysisCenterID(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAnalysisCenterID_734b91ac30d5f9b4], a0.this$);
          }

          void RinexClock::setAnalysisCenterName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAnalysisCenterName_734b91ac30d5f9b4], a0.this$);
          }

          void RinexClock::setCreationDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationDate_02135a6ef25adb4b], a0.this$);
          }

          void RinexClock::setCreationDateString(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationDateString_734b91ac30d5f9b4], a0.this$);
          }

          void RinexClock::setCreationTimeString(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationTimeString_734b91ac30d5f9b4], a0.this$);
          }

          void RinexClock::setCreationTimeZoneString(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationTimeZoneString_734b91ac30d5f9b4], a0.this$);
          }

          void RinexClock::setExternalClockReference(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setExternalClockReference_734b91ac30d5f9b4], a0.this$);
          }

          void RinexClock::setFormatVersion(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setFormatVersion_8ba9fe7a847cecad], a0);
          }

          void RinexClock::setFrameName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setFrameName_734b91ac30d5f9b4], a0.this$);
          }

          void RinexClock::setNumberOfLeapSeconds(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setNumberOfLeapSeconds_44ed599e93e8a30c], a0);
          }

          void RinexClock::setNumberOfLeapSecondsGNSS(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setNumberOfLeapSecondsGNSS_44ed599e93e8a30c], a0);
          }

          void RinexClock::setProgramName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setProgramName_734b91ac30d5f9b4], a0.this$);
          }

          void RinexClock::setSatelliteSystem(const ::org::orekit::gnss::SatelliteSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSatelliteSystem_cfddc646eebc7104], a0.this$);
          }

          void RinexClock::setStationIdentifier(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setStationIdentifier_734b91ac30d5f9b4], a0.this$);
          }

          void RinexClock::setStationName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setStationName_734b91ac30d5f9b4], a0.this$);
          }

          void RinexClock::setTimeScale(const ::org::orekit::time::TimeScale & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTimeScale_cae5d0c3721eff67], a0.this$);
          }

          void RinexClock::setTimeSystem(const ::org::orekit::gnss::TimeSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTimeSystem_885124f6a0a748ea], a0.this$);
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
          static PyObject *t_RinexClock_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock_addAppliedDCBS(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addAppliedPCVS(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addClockData(t_RinexClock *self, PyObject *args);
          static PyObject *t_RinexClock_addClockDataType(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addComment(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addReceiver(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addReferenceClockList(t_RinexClock *self, PyObject *args);
          static PyObject *t_RinexClock_addSatellite(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addSystemObservationType(t_RinexClock *self, PyObject *args);
          static PyObject *t_RinexClock_getAgencyName(t_RinexClock *self);
          static PyObject *t_RinexClock_getAnalysisCenterID(t_RinexClock *self);
          static PyObject *t_RinexClock_getAnalysisCenterName(t_RinexClock *self);
          static PyObject *t_RinexClock_getClockData(t_RinexClock *self);
          static PyObject *t_RinexClock_getClockDataTypes(t_RinexClock *self);
          static PyObject *t_RinexClock_getComments(t_RinexClock *self);
          static PyObject *t_RinexClock_getCreationDate(t_RinexClock *self);
          static PyObject *t_RinexClock_getCreationDateString(t_RinexClock *self);
          static PyObject *t_RinexClock_getCreationTimeString(t_RinexClock *self);
          static PyObject *t_RinexClock_getCreationTimeZoneString(t_RinexClock *self);
          static PyObject *t_RinexClock_getExternalClockReference(t_RinexClock *self);
          static PyObject *t_RinexClock_getFormatVersion(t_RinexClock *self);
          static PyObject *t_RinexClock_getFrame(t_RinexClock *self);
          static PyObject *t_RinexClock_getFrameName(t_RinexClock *self);
          static PyObject *t_RinexClock_getListAppliedDCBS(t_RinexClock *self);
          static PyObject *t_RinexClock_getListAppliedPCVS(t_RinexClock *self);
          static PyObject *t_RinexClock_getNumberOfClockDataTypes(t_RinexClock *self);
          static PyObject *t_RinexClock_getNumberOfLeapSeconds(t_RinexClock *self);
          static PyObject *t_RinexClock_getNumberOfLeapSecondsGNSS(t_RinexClock *self);
          static PyObject *t_RinexClock_getNumberOfReceivers(t_RinexClock *self);
          static PyObject *t_RinexClock_getNumberOfSatellites(t_RinexClock *self);
          static PyObject *t_RinexClock_getProgramName(t_RinexClock *self);
          static PyObject *t_RinexClock_getReceivers(t_RinexClock *self);
          static PyObject *t_RinexClock_getReferenceClocks(t_RinexClock *self);
          static PyObject *t_RinexClock_getSatelliteSystem(t_RinexClock *self);
          static PyObject *t_RinexClock_getSatellites(t_RinexClock *self);
          static PyObject *t_RinexClock_getStationIdentifier(t_RinexClock *self);
          static PyObject *t_RinexClock_getStationName(t_RinexClock *self);
          static PyObject *t_RinexClock_getSystemObservationTypes(t_RinexClock *self);
          static PyObject *t_RinexClock_getTimeScale(t_RinexClock *self);
          static PyObject *t_RinexClock_getTimeSystem(t_RinexClock *self);
          static PyObject *t_RinexClock_getTotalNumberOfDataLines(t_RinexClock *self);
          static PyObject *t_RinexClock_numberOfObsTypes(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setAgencyName(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setAnalysisCenterID(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setAnalysisCenterName(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setCreationDate(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setCreationDateString(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setCreationTimeString(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setCreationTimeZoneString(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setExternalClockReference(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setFormatVersion(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setFrameName(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setNumberOfLeapSeconds(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setNumberOfLeapSecondsGNSS(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setProgramName(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setSatelliteSystem(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setStationIdentifier(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setStationName(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setTimeScale(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setTimeSystem(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_get__agencyName(t_RinexClock *self, void *data);
          static int t_RinexClock_set__agencyName(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__analysisCenterID(t_RinexClock *self, void *data);
          static int t_RinexClock_set__analysisCenterID(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__analysisCenterName(t_RinexClock *self, void *data);
          static int t_RinexClock_set__analysisCenterName(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__clockData(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__clockDataTypes(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__comments(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__creationDate(t_RinexClock *self, void *data);
          static int t_RinexClock_set__creationDate(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__creationDateString(t_RinexClock *self, void *data);
          static int t_RinexClock_set__creationDateString(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__creationTimeString(t_RinexClock *self, void *data);
          static int t_RinexClock_set__creationTimeString(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__creationTimeZoneString(t_RinexClock *self, void *data);
          static int t_RinexClock_set__creationTimeZoneString(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__externalClockReference(t_RinexClock *self, void *data);
          static int t_RinexClock_set__externalClockReference(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__formatVersion(t_RinexClock *self, void *data);
          static int t_RinexClock_set__formatVersion(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__frame(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__frameName(t_RinexClock *self, void *data);
          static int t_RinexClock_set__frameName(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__listAppliedDCBS(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__listAppliedPCVS(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__numberOfClockDataTypes(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__numberOfLeapSeconds(t_RinexClock *self, void *data);
          static int t_RinexClock_set__numberOfLeapSeconds(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__numberOfLeapSecondsGNSS(t_RinexClock *self, void *data);
          static int t_RinexClock_set__numberOfLeapSecondsGNSS(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__numberOfReceivers(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__numberOfSatellites(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__programName(t_RinexClock *self, void *data);
          static int t_RinexClock_set__programName(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__receivers(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__referenceClocks(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__satelliteSystem(t_RinexClock *self, void *data);
          static int t_RinexClock_set__satelliteSystem(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__satellites(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__stationIdentifier(t_RinexClock *self, void *data);
          static int t_RinexClock_set__stationIdentifier(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__stationName(t_RinexClock *self, void *data);
          static int t_RinexClock_set__stationName(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__systemObservationTypes(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__timeScale(t_RinexClock *self, void *data);
          static int t_RinexClock_set__timeScale(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__timeSystem(t_RinexClock *self, void *data);
          static int t_RinexClock_set__timeSystem(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__totalNumberOfDataLines(t_RinexClock *self, void *data);
          static PyGetSetDef t_RinexClock__fields_[] = {
            DECLARE_GETSET_FIELD(t_RinexClock, agencyName),
            DECLARE_GETSET_FIELD(t_RinexClock, analysisCenterID),
            DECLARE_GETSET_FIELD(t_RinexClock, analysisCenterName),
            DECLARE_GET_FIELD(t_RinexClock, clockData),
            DECLARE_GET_FIELD(t_RinexClock, clockDataTypes),
            DECLARE_GET_FIELD(t_RinexClock, comments),
            DECLARE_GETSET_FIELD(t_RinexClock, creationDate),
            DECLARE_GETSET_FIELD(t_RinexClock, creationDateString),
            DECLARE_GETSET_FIELD(t_RinexClock, creationTimeString),
            DECLARE_GETSET_FIELD(t_RinexClock, creationTimeZoneString),
            DECLARE_GETSET_FIELD(t_RinexClock, externalClockReference),
            DECLARE_GETSET_FIELD(t_RinexClock, formatVersion),
            DECLARE_GET_FIELD(t_RinexClock, frame),
            DECLARE_GETSET_FIELD(t_RinexClock, frameName),
            DECLARE_GET_FIELD(t_RinexClock, listAppliedDCBS),
            DECLARE_GET_FIELD(t_RinexClock, listAppliedPCVS),
            DECLARE_GET_FIELD(t_RinexClock, numberOfClockDataTypes),
            DECLARE_GETSET_FIELD(t_RinexClock, numberOfLeapSeconds),
            DECLARE_GETSET_FIELD(t_RinexClock, numberOfLeapSecondsGNSS),
            DECLARE_GET_FIELD(t_RinexClock, numberOfReceivers),
            DECLARE_GET_FIELD(t_RinexClock, numberOfSatellites),
            DECLARE_GETSET_FIELD(t_RinexClock, programName),
            DECLARE_GET_FIELD(t_RinexClock, receivers),
            DECLARE_GET_FIELD(t_RinexClock, referenceClocks),
            DECLARE_GETSET_FIELD(t_RinexClock, satelliteSystem),
            DECLARE_GET_FIELD(t_RinexClock, satellites),
            DECLARE_GETSET_FIELD(t_RinexClock, stationIdentifier),
            DECLARE_GETSET_FIELD(t_RinexClock, stationName),
            DECLARE_GET_FIELD(t_RinexClock, systemObservationTypes),
            DECLARE_GETSET_FIELD(t_RinexClock, timeScale),
            DECLARE_GETSET_FIELD(t_RinexClock, timeSystem),
            DECLARE_GET_FIELD(t_RinexClock, totalNumberOfDataLines),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexClock__methods_[] = {
            DECLARE_METHOD(t_RinexClock, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock, addAppliedDCBS, METH_O),
            DECLARE_METHOD(t_RinexClock, addAppliedPCVS, METH_O),
            DECLARE_METHOD(t_RinexClock, addClockData, METH_VARARGS),
            DECLARE_METHOD(t_RinexClock, addClockDataType, METH_O),
            DECLARE_METHOD(t_RinexClock, addComment, METH_O),
            DECLARE_METHOD(t_RinexClock, addReceiver, METH_O),
            DECLARE_METHOD(t_RinexClock, addReferenceClockList, METH_VARARGS),
            DECLARE_METHOD(t_RinexClock, addSatellite, METH_O),
            DECLARE_METHOD(t_RinexClock, addSystemObservationType, METH_VARARGS),
            DECLARE_METHOD(t_RinexClock, getAgencyName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getAnalysisCenterID, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getAnalysisCenterName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getClockData, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getClockDataTypes, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getComments, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getCreationDate, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getCreationDateString, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getCreationTimeString, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getCreationTimeZoneString, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getExternalClockReference, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getFormatVersion, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getFrame, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getFrameName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getListAppliedDCBS, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getListAppliedPCVS, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getNumberOfClockDataTypes, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getNumberOfLeapSeconds, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getNumberOfLeapSecondsGNSS, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getNumberOfReceivers, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getNumberOfSatellites, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getProgramName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getReceivers, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getReferenceClocks, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getSatelliteSystem, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getSatellites, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getStationIdentifier, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getStationName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getSystemObservationTypes, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getTimeScale, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getTimeSystem, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getTotalNumberOfDataLines, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, numberOfObsTypes, METH_O),
            DECLARE_METHOD(t_RinexClock, setAgencyName, METH_O),
            DECLARE_METHOD(t_RinexClock, setAnalysisCenterID, METH_O),
            DECLARE_METHOD(t_RinexClock, setAnalysisCenterName, METH_O),
            DECLARE_METHOD(t_RinexClock, setCreationDate, METH_O),
            DECLARE_METHOD(t_RinexClock, setCreationDateString, METH_O),
            DECLARE_METHOD(t_RinexClock, setCreationTimeString, METH_O),
            DECLARE_METHOD(t_RinexClock, setCreationTimeZoneString, METH_O),
            DECLARE_METHOD(t_RinexClock, setExternalClockReference, METH_O),
            DECLARE_METHOD(t_RinexClock, setFormatVersion, METH_O),
            DECLARE_METHOD(t_RinexClock, setFrameName, METH_O),
            DECLARE_METHOD(t_RinexClock, setNumberOfLeapSeconds, METH_O),
            DECLARE_METHOD(t_RinexClock, setNumberOfLeapSecondsGNSS, METH_O),
            DECLARE_METHOD(t_RinexClock, setProgramName, METH_O),
            DECLARE_METHOD(t_RinexClock, setSatelliteSystem, METH_O),
            DECLARE_METHOD(t_RinexClock, setStationIdentifier, METH_O),
            DECLARE_METHOD(t_RinexClock, setStationName, METH_O),
            DECLARE_METHOD(t_RinexClock, setTimeScale, METH_O),
            DECLARE_METHOD(t_RinexClock, setTimeSystem, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClock)[] = {
            { Py_tp_methods, t_RinexClock__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RinexClock__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClock)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexClock, t_RinexClock, RinexClock);

          void t_RinexClock::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClock), &PY_TYPE_DEF(RinexClock), module, "RinexClock", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "Receiver", make_descriptor(&PY_TYPE_DEF(RinexClock$Receiver)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "ClockDataType", make_descriptor(&PY_TYPE_DEF(RinexClock$ClockDataType)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "ReferenceClock", make_descriptor(&PY_TYPE_DEF(RinexClock$ReferenceClock)));
          }

          void t_RinexClock::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "class_", make_descriptor(RinexClock::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "wrapfn_", make_descriptor(t_RinexClock::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexClock_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClock::initializeClass, 1)))
              return NULL;
            return t_RinexClock::wrap_Object(RinexClock(((t_RinexClock *) arg)->object.this$));
          }
          static PyObject *t_RinexClock_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClock::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexClock_addAppliedDCBS(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::AppliedDCBS a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::AppliedDCBS::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addAppliedDCBS(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addAppliedDCBS", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_addAppliedPCVS(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::AppliedPCVS a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::AppliedPCVS::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addAppliedPCVS(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addAppliedPCVS", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_addClockData(t_RinexClock *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::files::rinex::clock::RinexClock$ClockDataLine a1((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::files::rinex::clock::RinexClock$ClockDataLine::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addClockData(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addClockData", args);
            return NULL;
          }

          static PyObject *t_RinexClock_addClockDataType(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::clock::RinexClock$ClockDataType a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::clock::RinexClock$ClockDataType::initializeClass, &a0, &p0, ::org::orekit::files::rinex::clock::t_RinexClock$ClockDataType::parameters_))
            {
              OBJ_CALL(self->object.addClockDataType(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addClockDataType", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_addComment(t_RinexClock *self, PyObject *arg)
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

          static PyObject *t_RinexClock_addReceiver(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::clock::RinexClock$Receiver a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::clock::RinexClock$Receiver::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addReceiver(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addReceiver", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_addReferenceClockList(t_RinexClock *self, PyObject *args)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "Kk", ::java::util::List::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
            {
              OBJ_CALL(self->object.addReferenceClockList(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addReferenceClockList", args);
            return NULL;
          }

          static PyObject *t_RinexClock_addSatellite(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.addSatellite(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addSatellite", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_addSystemObservationType(t_RinexClock *self, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::ObservationType a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &p1, ::org::orekit::gnss::t_ObservationType::parameters_))
            {
              OBJ_CALL(self->object.addSystemObservationType(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addSystemObservationType", args);
            return NULL;
          }

          static PyObject *t_RinexClock_getAgencyName(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAgencyName());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getAnalysisCenterID(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAnalysisCenterID());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getAnalysisCenterName(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAnalysisCenterName());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getClockData(t_RinexClock *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getClockData());
            return ::java::util::t_Map::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getClockDataTypes(t_RinexClock *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getClockDataTypes());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::clock::PY_TYPE(RinexClock$ClockDataType));
          }

          static PyObject *t_RinexClock_getComments(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getComments());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getCreationDate(t_RinexClock *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getCreationDateString(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationDateString());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getCreationTimeString(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationTimeString());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getCreationTimeZoneString(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationTimeZoneString());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getExternalClockReference(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getExternalClockReference());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getFormatVersion(t_RinexClock *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getFormatVersion());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock_getFrame(t_RinexClock *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getFrameName(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrameName());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getListAppliedDCBS(t_RinexClock *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getListAppliedDCBS());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::PY_TYPE(AppliedDCBS));
          }

          static PyObject *t_RinexClock_getListAppliedPCVS(t_RinexClock *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getListAppliedPCVS());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::PY_TYPE(AppliedPCVS));
          }

          static PyObject *t_RinexClock_getNumberOfClockDataTypes(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfClockDataTypes());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_getNumberOfLeapSeconds(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfLeapSeconds());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_getNumberOfLeapSecondsGNSS(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfLeapSecondsGNSS());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_getNumberOfReceivers(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfReceivers());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_getNumberOfSatellites(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfSatellites());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_getProgramName(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getProgramName());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getReceivers(t_RinexClock *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getReceivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::clock::PY_TYPE(RinexClock$Receiver));
          }

          static PyObject *t_RinexClock_getReferenceClocks(t_RinexClock *self)
          {
            ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceClocks());
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getSatelliteSystem(t_RinexClock *self)
          {
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getSatellites(t_RinexClock *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellites());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          static PyObject *t_RinexClock_getStationIdentifier(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getStationIdentifier());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getStationName(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getStationName());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getSystemObservationTypes(t_RinexClock *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getSystemObservationTypes());
            return ::java::util::t_Map::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getTimeScale(t_RinexClock *self)
          {
            ::org::orekit::time::TimeScale result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeScale());
            return ::org::orekit::time::t_TimeScale::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getTimeSystem(t_RinexClock *self)
          {
            ::org::orekit::gnss::TimeSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getTotalNumberOfDataLines(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTotalNumberOfDataLines());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_numberOfObsTypes(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint result;

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = self->object.numberOfObsTypes(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "numberOfObsTypes", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setAgencyName(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAgencyName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAgencyName", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setAnalysisCenterID(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAnalysisCenterID(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAnalysisCenterID", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setAnalysisCenterName(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAnalysisCenterName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAnalysisCenterName", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setCreationDate(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setCreationDate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationDate", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setCreationDateString(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setCreationDateString(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationDateString", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setCreationTimeString(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setCreationTimeString(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationTimeString", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setCreationTimeZoneString(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setCreationTimeZoneString(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationTimeZoneString", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setExternalClockReference(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setExternalClockReference(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setExternalClockReference", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setFormatVersion(t_RinexClock *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setFormatVersion(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setFormatVersion", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setFrameName(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setFrameName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setFrameName", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setNumberOfLeapSeconds(t_RinexClock *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setNumberOfLeapSeconds(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNumberOfLeapSeconds", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setNumberOfLeapSecondsGNSS(t_RinexClock *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setNumberOfLeapSecondsGNSS(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNumberOfLeapSecondsGNSS", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setProgramName(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setProgramName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setProgramName", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setSatelliteSystem(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(self->object.setSatelliteSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSatelliteSystem", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setStationIdentifier(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setStationIdentifier(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setStationIdentifier", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setStationName(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setStationName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setStationName", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setTimeScale(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setTimeScale(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTimeScale", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setTimeSystem(t_RinexClock *self, PyObject *arg)
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

          static PyObject *t_RinexClock_get__agencyName(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAgencyName());
            return j2p(value);
          }
          static int t_RinexClock_set__agencyName(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAgencyName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "agencyName", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__analysisCenterID(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAnalysisCenterID());
            return j2p(value);
          }
          static int t_RinexClock_set__analysisCenterID(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAnalysisCenterID(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "analysisCenterID", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__analysisCenterName(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAnalysisCenterName());
            return j2p(value);
          }
          static int t_RinexClock_set__analysisCenterName(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAnalysisCenterName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "analysisCenterName", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__clockData(t_RinexClock *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getClockData());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__clockDataTypes(t_RinexClock *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getClockDataTypes());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__comments(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getComments());
            return j2p(value);
          }

          static PyObject *t_RinexClock_get__creationDate(t_RinexClock *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_RinexClock_set__creationDate(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setCreationDate(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationDate", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__creationDateString(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationDateString());
            return j2p(value);
          }
          static int t_RinexClock_set__creationDateString(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setCreationDateString(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationDateString", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__creationTimeString(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationTimeString());
            return j2p(value);
          }
          static int t_RinexClock_set__creationTimeString(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setCreationTimeString(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationTimeString", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__creationTimeZoneString(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationTimeZoneString());
            return j2p(value);
          }
          static int t_RinexClock_set__creationTimeZoneString(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setCreationTimeZoneString(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationTimeZoneString", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__externalClockReference(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getExternalClockReference());
            return j2p(value);
          }
          static int t_RinexClock_set__externalClockReference(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setExternalClockReference(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "externalClockReference", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__formatVersion(t_RinexClock *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFormatVersion());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexClock_set__formatVersion(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setFormatVersion(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "formatVersion", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__frame(t_RinexClock *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__frameName(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrameName());
            return j2p(value);
          }
          static int t_RinexClock_set__frameName(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setFrameName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "frameName", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__listAppliedDCBS(t_RinexClock *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getListAppliedDCBS());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__listAppliedPCVS(t_RinexClock *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getListAppliedPCVS());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__numberOfClockDataTypes(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfClockDataTypes());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_RinexClock_get__numberOfLeapSeconds(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfLeapSeconds());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexClock_set__numberOfLeapSeconds(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setNumberOfLeapSeconds(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "numberOfLeapSeconds", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__numberOfLeapSecondsGNSS(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfLeapSecondsGNSS());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexClock_set__numberOfLeapSecondsGNSS(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setNumberOfLeapSecondsGNSS(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "numberOfLeapSecondsGNSS", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__numberOfReceivers(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfReceivers());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_RinexClock_get__numberOfSatellites(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfSatellites());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_RinexClock_get__programName(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getProgramName());
            return j2p(value);
          }
          static int t_RinexClock_set__programName(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setProgramName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "programName", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__receivers(t_RinexClock *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getReceivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__referenceClocks(t_RinexClock *self, void *data)
          {
            ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceClocks());
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__satelliteSystem(t_RinexClock *self, void *data)
          {
            ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
          }
          static int t_RinexClock_set__satelliteSystem(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::gnss::SatelliteSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setSatelliteSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "satelliteSystem", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__satellites(t_RinexClock *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellites());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__stationIdentifier(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getStationIdentifier());
            return j2p(value);
          }
          static int t_RinexClock_set__stationIdentifier(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setStationIdentifier(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "stationIdentifier", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__stationName(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getStationName());
            return j2p(value);
          }
          static int t_RinexClock_set__stationName(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setStationName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "stationName", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__systemObservationTypes(t_RinexClock *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getSystemObservationTypes());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__timeScale(t_RinexClock *self, void *data)
          {
            ::org::orekit::time::TimeScale value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeScale());
            return ::org::orekit::time::t_TimeScale::wrap_Object(value);
          }
          static int t_RinexClock_set__timeScale(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::TimeScale value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &value))
              {
                INT_CALL(self->object.setTimeScale(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "timeScale", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__timeSystem(t_RinexClock *self, void *data)
          {
            ::org::orekit::gnss::TimeSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(value);
          }
          static int t_RinexClock_set__timeSystem(t_RinexClock *self, PyObject *arg, void *data)
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

          static PyObject *t_RinexClock_get__totalNumberOfDataLines(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTotalNumberOfDataLines());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *SmoothStepFactory$FieldSmoothStepFunction::class$ = NULL;
        jmethodID *SmoothStepFactory$FieldSmoothStepFunction::mids$ = NULL;
        bool SmoothStepFactory$FieldSmoothStepFunction::live$ = false;

        jclass SmoothStepFactory$FieldSmoothStepFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_1d3e368d09a6f8a6] = env->getMethodID(cls, "value", "(D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_6e00dc5eb352fe51] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_74b0009eadd46a8e] = env->getMethodID(cls, "value", "(DDLorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_checkInputEdges_369b4c97255d5afa] = env->getMethodID(cls, "checkInputEdges", "(DD)V");
            mids$[mid_clampInput_74b0009eadd46a8e] = env->getMethodID(cls, "clampInput", "(DDLorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_normalizeInput_74b0009eadd46a8e] = env->getMethodID(cls, "normalizeInput", "(DDLorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement SmoothStepFactory$FieldSmoothStepFunction::value(jdouble a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_1d3e368d09a6f8a6], a0));
        }

        ::org::hipparchus::CalculusFieldElement SmoothStepFactory$FieldSmoothStepFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_6e00dc5eb352fe51], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement SmoothStepFactory$FieldSmoothStepFunction::value(jdouble a0, jdouble a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_74b0009eadd46a8e], a0, a1, a2.this$));
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
      namespace polynomials {
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_of_(t_SmoothStepFactory$FieldSmoothStepFunction *self, PyObject *args);
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_value(t_SmoothStepFactory$FieldSmoothStepFunction *self, PyObject *args);
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_get__parameters_(t_SmoothStepFactory$FieldSmoothStepFunction *self, void *data);
        static PyGetSetDef t_SmoothStepFactory$FieldSmoothStepFunction__fields_[] = {
          DECLARE_GET_FIELD(t_SmoothStepFactory$FieldSmoothStepFunction, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SmoothStepFactory$FieldSmoothStepFunction__methods_[] = {
          DECLARE_METHOD(t_SmoothStepFactory$FieldSmoothStepFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$FieldSmoothStepFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$FieldSmoothStepFunction, of_, METH_VARARGS),
          DECLARE_METHOD(t_SmoothStepFactory$FieldSmoothStepFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmoothStepFactory$FieldSmoothStepFunction)[] = {
          { Py_tp_methods, t_SmoothStepFactory$FieldSmoothStepFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SmoothStepFactory$FieldSmoothStepFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmoothStepFactory$FieldSmoothStepFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::polynomials::FieldPolynomialFunction),
          NULL
        };

        DEFINE_TYPE(SmoothStepFactory$FieldSmoothStepFunction, t_SmoothStepFactory$FieldSmoothStepFunction, SmoothStepFactory$FieldSmoothStepFunction);
        PyObject *t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(const SmoothStepFactory$FieldSmoothStepFunction& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SmoothStepFactory$FieldSmoothStepFunction *self = (t_SmoothStepFactory$FieldSmoothStepFunction *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SmoothStepFactory$FieldSmoothStepFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SmoothStepFactory$FieldSmoothStepFunction::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SmoothStepFactory$FieldSmoothStepFunction *self = (t_SmoothStepFactory$FieldSmoothStepFunction *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SmoothStepFactory$FieldSmoothStepFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(SmoothStepFactory$FieldSmoothStepFunction), &PY_TYPE_DEF(SmoothStepFactory$FieldSmoothStepFunction), module, "SmoothStepFactory$FieldSmoothStepFunction", 0);
        }

        void t_SmoothStepFactory$FieldSmoothStepFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$FieldSmoothStepFunction), "class_", make_descriptor(SmoothStepFactory$FieldSmoothStepFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$FieldSmoothStepFunction), "wrapfn_", make_descriptor(t_SmoothStepFactory$FieldSmoothStepFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$FieldSmoothStepFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmoothStepFactory$FieldSmoothStepFunction::initializeClass, 1)))
            return NULL;
          return t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(SmoothStepFactory$FieldSmoothStepFunction(((t_SmoothStepFactory$FieldSmoothStepFunction *) arg)->object.this$));
        }
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmoothStepFactory$FieldSmoothStepFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_of_(t_SmoothStepFactory$FieldSmoothStepFunction *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_value(t_SmoothStepFactory$FieldSmoothStepFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "DDK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(SmoothStepFactory$FieldSmoothStepFunction), (PyObject *) self, "value", args, 2);
        }
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_get__parameters_(t_SmoothStepFactory$FieldSmoothStepFunction *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonDatesSelector.h"
#include "org/orekit/time/DatesSelector.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonDatesSelector::class$ = NULL;
      jmethodID *PythonDatesSelector::mids$ = NULL;
      bool PythonDatesSelector::live$ = false;

      jclass PythonDatesSelector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonDatesSelector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_selectDates_50850a0bb1306a34] = env->getMethodID(cls, "selectDates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonDatesSelector::PythonDatesSelector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonDatesSelector::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonDatesSelector::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonDatesSelector::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
      static PyObject *t_PythonDatesSelector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonDatesSelector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonDatesSelector_init_(t_PythonDatesSelector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonDatesSelector_finalize(t_PythonDatesSelector *self);
      static PyObject *t_PythonDatesSelector_pythonExtension(t_PythonDatesSelector *self, PyObject *args);
      static void JNICALL t_PythonDatesSelector_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonDatesSelector_selectDates1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static PyObject *t_PythonDatesSelector_get__self(t_PythonDatesSelector *self, void *data);
      static PyGetSetDef t_PythonDatesSelector__fields_[] = {
        DECLARE_GET_FIELD(t_PythonDatesSelector, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonDatesSelector__methods_[] = {
        DECLARE_METHOD(t_PythonDatesSelector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDatesSelector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDatesSelector, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonDatesSelector, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonDatesSelector)[] = {
        { Py_tp_methods, t_PythonDatesSelector__methods_ },
        { Py_tp_init, (void *) t_PythonDatesSelector_init_ },
        { Py_tp_getset, t_PythonDatesSelector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonDatesSelector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonDatesSelector, t_PythonDatesSelector, PythonDatesSelector);

      void t_PythonDatesSelector::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonDatesSelector), &PY_TYPE_DEF(PythonDatesSelector), module, "PythonDatesSelector", 1);
      }

      void t_PythonDatesSelector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDatesSelector), "class_", make_descriptor(PythonDatesSelector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDatesSelector), "wrapfn_", make_descriptor(t_PythonDatesSelector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDatesSelector), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonDatesSelector::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonDatesSelector_pythonDecRef0 },
          { "selectDates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;", (void *) t_PythonDatesSelector_selectDates1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonDatesSelector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonDatesSelector::initializeClass, 1)))
          return NULL;
        return t_PythonDatesSelector::wrap_Object(PythonDatesSelector(((t_PythonDatesSelector *) arg)->object.this$));
      }
      static PyObject *t_PythonDatesSelector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonDatesSelector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonDatesSelector_init_(t_PythonDatesSelector *self, PyObject *args, PyObject *kwds)
      {
        PythonDatesSelector object((jobject) NULL);

        INT_CALL(object = PythonDatesSelector());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonDatesSelector_finalize(t_PythonDatesSelector *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonDatesSelector_pythonExtension(t_PythonDatesSelector *self, PyObject *args)
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

      static void JNICALL t_PythonDatesSelector_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDatesSelector::mids$[PythonDatesSelector::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonDatesSelector::mids$[PythonDatesSelector::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonDatesSelector_selectDates1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDatesSelector::mids$[PythonDatesSelector::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "selectDates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("selectDates", result);
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

      static PyObject *t_PythonDatesSelector_get__self(t_PythonDatesSelector *self, void *data)
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
#include "org/hipparchus/analysis/integration/gauss/HermiteRuleFactory.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *HermiteRuleFactory::class$ = NULL;
          jmethodID *HermiteRuleFactory::mids$ = NULL;
          bool HermiteRuleFactory::live$ = false;

          jclass HermiteRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/HermiteRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_computeRule_acde278e36767299] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          HermiteRuleFactory::HermiteRuleFactory() : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}
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
        namespace gauss {
          static PyObject *t_HermiteRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HermiteRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_HermiteRuleFactory_init_(t_HermiteRuleFactory *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_HermiteRuleFactory__methods_[] = {
            DECLARE_METHOD(t_HermiteRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HermiteRuleFactory, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HermiteRuleFactory)[] = {
            { Py_tp_methods, t_HermiteRuleFactory__methods_ },
            { Py_tp_init, (void *) t_HermiteRuleFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HermiteRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(HermiteRuleFactory, t_HermiteRuleFactory, HermiteRuleFactory);

          void t_HermiteRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(HermiteRuleFactory), &PY_TYPE_DEF(HermiteRuleFactory), module, "HermiteRuleFactory", 0);
          }

          void t_HermiteRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HermiteRuleFactory), "class_", make_descriptor(HermiteRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HermiteRuleFactory), "wrapfn_", make_descriptor(t_HermiteRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HermiteRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_HermiteRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HermiteRuleFactory::initializeClass, 1)))
              return NULL;
            return t_HermiteRuleFactory::wrap_Object(HermiteRuleFactory(((t_HermiteRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_HermiteRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HermiteRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_HermiteRuleFactory_init_(t_HermiteRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            HermiteRuleFactory object((jobject) NULL);

            INT_CALL(object = HermiteRuleFactory());
            self->object = object;

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/AbstractRelativisticClockModifier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AbstractRelativisticClockModifier::class$ = NULL;
          jmethodID *AbstractRelativisticClockModifier::mids$ = NULL;
          bool AbstractRelativisticClockModifier::live$ = false;

          jclass AbstractRelativisticClockModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AbstractRelativisticClockModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_relativisticCorrection_2fa6405c70ee6844] = env->getMethodID(cls, "relativisticCorrection", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)D");
              mids$[mid_getScaleFactor_b74f83833fdad017] = env->getMethodID(cls, "getScaleFactor", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractRelativisticClockModifier::AbstractRelativisticClockModifier() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}
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
          static PyObject *t_AbstractRelativisticClockModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractRelativisticClockModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractRelativisticClockModifier_init_(t_AbstractRelativisticClockModifier *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_AbstractRelativisticClockModifier__methods_[] = {
            DECLARE_METHOD(t_AbstractRelativisticClockModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractRelativisticClockModifier, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractRelativisticClockModifier)[] = {
            { Py_tp_methods, t_AbstractRelativisticClockModifier__methods_ },
            { Py_tp_init, (void *) t_AbstractRelativisticClockModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractRelativisticClockModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractRelativisticClockModifier, t_AbstractRelativisticClockModifier, AbstractRelativisticClockModifier);

          void t_AbstractRelativisticClockModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractRelativisticClockModifier), &PY_TYPE_DEF(AbstractRelativisticClockModifier), module, "AbstractRelativisticClockModifier", 0);
          }

          void t_AbstractRelativisticClockModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRelativisticClockModifier), "class_", make_descriptor(AbstractRelativisticClockModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRelativisticClockModifier), "wrapfn_", make_descriptor(t_AbstractRelativisticClockModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRelativisticClockModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractRelativisticClockModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractRelativisticClockModifier::initializeClass, 1)))
              return NULL;
            return t_AbstractRelativisticClockModifier::wrap_Object(AbstractRelativisticClockModifier(((t_AbstractRelativisticClockModifier *) arg)->object.this$));
          }
          static PyObject *t_AbstractRelativisticClockModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractRelativisticClockModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractRelativisticClockModifier_init_(t_AbstractRelativisticClockModifier *self, PyObject *args, PyObject *kwds)
          {
            AbstractRelativisticClockModifier object((jobject) NULL);

            INT_CALL(object = AbstractRelativisticClockModifier());
            self->object = object;

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/io/Serializable.h"
#include "org/orekit/utils/AngularCoordinates.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/util/Collection.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/TimeShiftable.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *Transform::class$ = NULL;
      jmethodID *Transform::mids$ = NULL;
      bool Transform::live$ = false;
      Transform *Transform::IDENTITY = NULL;

      jclass Transform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/Transform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4973b210c379a6b1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)V");
          mids$[mid_init$_f276cbdae45300cc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_e8077287e11d5f05] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/AngularCoordinates;)V");
          mids$[mid_init$_a6070c42868c5d8c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_f1da648c2878262f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_851a055d87a1592a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_aa897b2f8732b983] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Transform;Lorg/orekit/frames/Transform;)V");
          mids$[mid_init$_ed88fa386c1304b1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/AngularCoordinates;)V");
          mids$[mid_init$_a592ae8491041610] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_e4bf4a0667705a20] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_freeze_417755e67b7f769d] = env->getMethodID(cls, "freeze", "()Lorg/orekit/frames/Transform;");
          mids$[mid_getAcceleration_8b724f8b4fdad1a2] = env->getMethodID(cls, "getAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getAngular_df90fc3151533d81] = env->getMethodID(cls, "getAngular", "()Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_getCartesian_180fb117720acb76] = env->getMethodID(cls, "getCartesian", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getInverse_417755e67b7f769d] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/Transform;");
          mids$[mid_getJacobian_6bd398a80aa9b7ce] = env->getMethodID(cls, "getJacobian", "(Lorg/orekit/utils/CartesianDerivativesFilter;[[D)V");
          mids$[mid_getRotation_ff298a39b3cae5da] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getRotationAcceleration_8b724f8b4fdad1a2] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getRotationRate_8b724f8b4fdad1a2] = env->getMethodID(cls, "getRotationRate", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getTranslation_8b724f8b4fdad1a2] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getVelocity_8b724f8b4fdad1a2] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_interpolate_7df603372442182f] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/frames/Transform;");
          mids$[mid_interpolate_156dfc208f41012a] = env->getStaticMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;Ljava/util/Collection;)Lorg/orekit/frames/Transform;");
          mids$[mid_shiftedBy_eb3d7c6c384b4dcd] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/frames/Transform;");
          mids$[mid_staticShiftedBy_c1bc66353a3f996e] = env->getMethodID(cls, "staticShiftedBy", "(D)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_toStaticTransform_00930874428900c5] = env->getMethodID(cls, "toStaticTransform", "()Lorg/orekit/frames/StaticTransform;");
          mids$[mid_transformPVCoordinates_176da7a9c87c96a5] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_transformPVCoordinates_b59fe39c52b8d345] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_transformPVCoordinates_448b59d288b2a2ff] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_transformPVCoordinates_78bd106652cc7d0f] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/utils/PVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          IDENTITY = new Transform(env->getStaticObjectField(cls, "IDENTITY", "Lorg/orekit/frames/Transform;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4973b210c379a6b1, a0.this$, a1.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f276cbdae45300cc, a0.this$, a1.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::AngularCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e8077287e11d5f05, a0.this$, a1.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a6070c42868c5d8c, a0.this$, a1.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f1da648c2878262f, a0.this$, a1.this$, a2.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_851a055d87a1592a, a0.this$, a1.this$, a2.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const Transform & a1, const Transform & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aa897b2f8732b983, a0.this$, a1.this$, a2.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::utils::AngularCoordinates & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ed88fa386c1304b1, a0.this$, a1.this$, a2.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a592ae8491041610, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e4bf4a0667705a20, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      Transform Transform::freeze() const
      {
        return Transform(env->callObjectMethod(this$, mids$[mid_freeze_417755e67b7f769d]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Transform::getAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_8b724f8b4fdad1a2]));
      }

      ::org::orekit::utils::AngularCoordinates Transform::getAngular() const
      {
        return ::org::orekit::utils::AngularCoordinates(env->callObjectMethod(this$, mids$[mid_getAngular_df90fc3151533d81]));
      }

      ::org::orekit::utils::PVCoordinates Transform::getCartesian() const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getCartesian_180fb117720acb76]));
      }

      ::org::orekit::time::AbsoluteDate Transform::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
      }

      Transform Transform::getInverse() const
      {
        return Transform(env->callObjectMethod(this$, mids$[mid_getInverse_417755e67b7f769d]));
      }

      void Transform::getJacobian(const ::org::orekit::utils::CartesianDerivativesFilter & a0, const JArray< JArray< jdouble > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobian_6bd398a80aa9b7ce], a0.this$, a1.this$);
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation Transform::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getRotation_ff298a39b3cae5da]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Transform::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_8b724f8b4fdad1a2]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Transform::getRotationRate() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRotationRate_8b724f8b4fdad1a2]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Transform::getTranslation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTranslation_8b724f8b4fdad1a2]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Transform::getVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_8b724f8b4fdad1a2]));
      }

      Transform Transform::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return Transform(env->callObjectMethod(this$, mids$[mid_interpolate_7df603372442182f], a0.this$, a1.this$));
      }

      Transform Transform::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, const ::java::util::Collection & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return Transform(env->callStaticObjectMethod(cls, mids$[mid_interpolate_156dfc208f41012a], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      Transform Transform::shiftedBy(jdouble a0) const
      {
        return Transform(env->callObjectMethod(this$, mids$[mid_shiftedBy_eb3d7c6c384b4dcd], a0));
      }

      ::org::orekit::frames::StaticTransform Transform::staticShiftedBy(jdouble a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_staticShiftedBy_c1bc66353a3f996e], a0));
      }

      ::org::orekit::frames::StaticTransform Transform::toStaticTransform() const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_toStaticTransform_00930874428900c5]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates Transform::transformPVCoordinates(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_176da7a9c87c96a5], a0.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates Transform::transformPVCoordinates(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_b59fe39c52b8d345], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates Transform::transformPVCoordinates(const ::org::orekit::utils::FieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_448b59d288b2a2ff], a0.this$));
      }

      ::org::orekit::utils::PVCoordinates Transform::transformPVCoordinates(const ::org::orekit::utils::PVCoordinates & a0) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_78bd106652cc7d0f], a0.this$));
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
      static PyObject *t_Transform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Transform_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Transform_init_(t_Transform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Transform_freeze(t_Transform *self);
      static PyObject *t_Transform_getAcceleration(t_Transform *self);
      static PyObject *t_Transform_getAngular(t_Transform *self);
      static PyObject *t_Transform_getCartesian(t_Transform *self);
      static PyObject *t_Transform_getDate(t_Transform *self);
      static PyObject *t_Transform_getInverse(t_Transform *self);
      static PyObject *t_Transform_getJacobian(t_Transform *self, PyObject *args);
      static PyObject *t_Transform_getRotation(t_Transform *self);
      static PyObject *t_Transform_getRotationAcceleration(t_Transform *self);
      static PyObject *t_Transform_getRotationRate(t_Transform *self);
      static PyObject *t_Transform_getTranslation(t_Transform *self);
      static PyObject *t_Transform_getVelocity(t_Transform *self);
      static PyObject *t_Transform_interpolate(t_Transform *self, PyObject *args);
      static PyObject *t_Transform_interpolate_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Transform_shiftedBy(t_Transform *self, PyObject *arg);
      static PyObject *t_Transform_staticShiftedBy(t_Transform *self, PyObject *arg);
      static PyObject *t_Transform_toStaticTransform(t_Transform *self);
      static PyObject *t_Transform_transformPVCoordinates(t_Transform *self, PyObject *args);
      static PyObject *t_Transform_get__acceleration(t_Transform *self, void *data);
      static PyObject *t_Transform_get__angular(t_Transform *self, void *data);
      static PyObject *t_Transform_get__cartesian(t_Transform *self, void *data);
      static PyObject *t_Transform_get__date(t_Transform *self, void *data);
      static PyObject *t_Transform_get__inverse(t_Transform *self, void *data);
      static PyObject *t_Transform_get__rotation(t_Transform *self, void *data);
      static PyObject *t_Transform_get__rotationAcceleration(t_Transform *self, void *data);
      static PyObject *t_Transform_get__rotationRate(t_Transform *self, void *data);
      static PyObject *t_Transform_get__translation(t_Transform *self, void *data);
      static PyObject *t_Transform_get__velocity(t_Transform *self, void *data);
      static PyGetSetDef t_Transform__fields_[] = {
        DECLARE_GET_FIELD(t_Transform, acceleration),
        DECLARE_GET_FIELD(t_Transform, angular),
        DECLARE_GET_FIELD(t_Transform, cartesian),
        DECLARE_GET_FIELD(t_Transform, date),
        DECLARE_GET_FIELD(t_Transform, inverse),
        DECLARE_GET_FIELD(t_Transform, rotation),
        DECLARE_GET_FIELD(t_Transform, rotationAcceleration),
        DECLARE_GET_FIELD(t_Transform, rotationRate),
        DECLARE_GET_FIELD(t_Transform, translation),
        DECLARE_GET_FIELD(t_Transform, velocity),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Transform__methods_[] = {
        DECLARE_METHOD(t_Transform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Transform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Transform, freeze, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getAngular, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getCartesian, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getDate, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getJacobian, METH_VARARGS),
        DECLARE_METHOD(t_Transform, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getRotationRate, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getTranslation, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getVelocity, METH_NOARGS),
        DECLARE_METHOD(t_Transform, interpolate, METH_VARARGS),
        DECLARE_METHOD(t_Transform, interpolate_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Transform, shiftedBy, METH_O),
        DECLARE_METHOD(t_Transform, staticShiftedBy, METH_O),
        DECLARE_METHOD(t_Transform, toStaticTransform, METH_NOARGS),
        DECLARE_METHOD(t_Transform, transformPVCoordinates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Transform)[] = {
        { Py_tp_methods, t_Transform__methods_ },
        { Py_tp_init, (void *) t_Transform_init_ },
        { Py_tp_getset, t_Transform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Transform)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Transform, t_Transform, Transform);

      void t_Transform::install(PyObject *module)
      {
        installType(&PY_TYPE(Transform), &PY_TYPE_DEF(Transform), module, "Transform", 0);
      }

      void t_Transform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "class_", make_descriptor(Transform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "wrapfn_", make_descriptor(t_Transform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "boxfn_", make_descriptor(boxObject));
        env->getClass(Transform::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "IDENTITY", make_descriptor(t_Transform::wrap_Object(*Transform::IDENTITY)));
      }

      static PyObject *t_Transform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Transform::initializeClass, 1)))
          return NULL;
        return t_Transform::wrap_Object(Transform(((t_Transform *) arg)->object.this$));
      }
      static PyObject *t_Transform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Transform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Transform_init_(t_Transform *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Transform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Transform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::AngularCoordinates a1((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::AngularCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Transform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Transform(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Transform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Transform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            Transform a1((jobject) NULL);
            Transform a2((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, Transform::initializeClass, Transform::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Transform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::utils::AngularCoordinates a2((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::AngularCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Transform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Transform(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Transform(a0, a1, a2, a3));
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

      static PyObject *t_Transform_freeze(t_Transform *self)
      {
        Transform result((jobject) NULL);
        OBJ_CALL(result = self->object.freeze());
        return t_Transform::wrap_Object(result);
      }

      static PyObject *t_Transform_getAcceleration(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Transform_getAngular(t_Transform *self)
      {
        ::org::orekit::utils::AngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngular());
        return ::org::orekit::utils::t_AngularCoordinates::wrap_Object(result);
      }

      static PyObject *t_Transform_getCartesian(t_Transform *self)
      {
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getCartesian());
        return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_Transform_getDate(t_Transform *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_Transform_getInverse(t_Transform *self)
      {
        Transform result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return t_Transform::wrap_Object(result);
      }

      static PyObject *t_Transform_getJacobian(t_Transform *self, PyObject *args)
      {
        ::org::orekit::utils::CartesianDerivativesFilter a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< jdouble > > a1((jobject) NULL);

        if (!parseArgs(args, "K[[D", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &p0, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a1))
        {
          OBJ_CALL(self->object.getJacobian(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobian", args);
        return NULL;
      }

      static PyObject *t_Transform_getRotation(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
      }

      static PyObject *t_Transform_getRotationAcceleration(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Transform_getRotationRate(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Transform_getTranslation(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Transform_getVelocity(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Transform_interpolate(t_Transform *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::util::stream::Stream a1((jobject) NULL);
        PyTypeObject **p1;
        Transform result((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0, a1));
          return t_Transform::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "interpolate", args);
        return NULL;
      }

      static PyObject *t_Transform_interpolate_(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
        PyTypeObject **p2;
        ::java::util::Collection a3((jobject) NULL);
        PyTypeObject **p3;
        Transform result((jobject) NULL);

        if (!parseArgs(args, "kKKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &p3, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::Transform::interpolate(a0, a1, a2, a3));
          return t_Transform::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "interpolate_", args);
        return NULL;
      }

      static PyObject *t_Transform_shiftedBy(t_Transform *self, PyObject *arg)
      {
        jdouble a0;
        Transform result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_Transform::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_Transform_staticShiftedBy(t_Transform *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::frames::StaticTransform result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.staticShiftedBy(a0));
          return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "staticShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_Transform_toStaticTransform(t_Transform *self)
      {
        ::org::orekit::frames::StaticTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.toStaticTransform());
        return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
      }

      static PyObject *t_Transform_transformPVCoordinates(t_Transform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_Transform_get__acceleration(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Transform_get__angular(t_Transform *self, void *data)
      {
        ::org::orekit::utils::AngularCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngular());
        return ::org::orekit::utils::t_AngularCoordinates::wrap_Object(value);
      }

      static PyObject *t_Transform_get__cartesian(t_Transform *self, void *data)
      {
        ::org::orekit::utils::PVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getCartesian());
        return ::org::orekit::utils::t_PVCoordinates::wrap_Object(value);
      }

      static PyObject *t_Transform_get__date(t_Transform *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_Transform_get__inverse(t_Transform *self, void *data)
      {
        Transform value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return t_Transform::wrap_Object(value);
      }

      static PyObject *t_Transform_get__rotation(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(value);
      }

      static PyObject *t_Transform_get__rotationAcceleration(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Transform_get__rotationRate(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Transform_get__translation(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Transform_get__velocity(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/Arc.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "org/hipparchus/geometry/spherical/oned/S1Point.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *Arc::class$ = NULL;
          jmethodID *Arc::mids$ = NULL;
          bool Arc::live$ = false;

          jclass Arc::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/Arc");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_checkPoint_e724e7fee8c093d4] = env->getMethodID(cls, "checkPoint", "(D)Lorg/hipparchus/geometry/partitioning/Region$Location;");
              mids$[mid_getBarycenter_b74f83833fdad017] = env->getMethodID(cls, "getBarycenter", "()D");
              mids$[mid_getInf_b74f83833fdad017] = env->getMethodID(cls, "getInf", "()D");
              mids$[mid_getOffset_b08534c86dd5d029] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/spherical/oned/S1Point;)D");
              mids$[mid_getOffset_04fd0666b613d2ab] = env->getMethodID(cls, "getOffset", "(D)D");
              mids$[mid_getSize_b74f83833fdad017] = env->getMethodID(cls, "getSize", "()D");
              mids$[mid_getSup_b74f83833fdad017] = env->getMethodID(cls, "getSup", "()D");
              mids$[mid_getTolerance_b74f83833fdad017] = env->getMethodID(cls, "getTolerance", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Arc::Arc(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

          ::org::hipparchus::geometry::partitioning::Region$Location Arc::checkPoint(jdouble a0) const
          {
            return ::org::hipparchus::geometry::partitioning::Region$Location(env->callObjectMethod(this$, mids$[mid_checkPoint_e724e7fee8c093d4], a0));
          }

          jdouble Arc::getBarycenter() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBarycenter_b74f83833fdad017]);
          }

          jdouble Arc::getInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getInf_b74f83833fdad017]);
          }

          jdouble Arc::getOffset(const ::org::hipparchus::geometry::spherical::oned::S1Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_b08534c86dd5d029], a0.this$);
          }

          jdouble Arc::getOffset(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_04fd0666b613d2ab], a0);
          }

          jdouble Arc::getSize() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSize_b74f83833fdad017]);
          }

          jdouble Arc::getSup() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSup_b74f83833fdad017]);
          }

          jdouble Arc::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_b74f83833fdad017]);
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
          static PyObject *t_Arc_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Arc_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Arc_init_(t_Arc *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Arc_checkPoint(t_Arc *self, PyObject *arg);
          static PyObject *t_Arc_getBarycenter(t_Arc *self);
          static PyObject *t_Arc_getInf(t_Arc *self);
          static PyObject *t_Arc_getOffset(t_Arc *self, PyObject *args);
          static PyObject *t_Arc_getSize(t_Arc *self);
          static PyObject *t_Arc_getSup(t_Arc *self);
          static PyObject *t_Arc_getTolerance(t_Arc *self);
          static PyObject *t_Arc_get__barycenter(t_Arc *self, void *data);
          static PyObject *t_Arc_get__inf(t_Arc *self, void *data);
          static PyObject *t_Arc_get__size(t_Arc *self, void *data);
          static PyObject *t_Arc_get__sup(t_Arc *self, void *data);
          static PyObject *t_Arc_get__tolerance(t_Arc *self, void *data);
          static PyGetSetDef t_Arc__fields_[] = {
            DECLARE_GET_FIELD(t_Arc, barycenter),
            DECLARE_GET_FIELD(t_Arc, inf),
            DECLARE_GET_FIELD(t_Arc, size),
            DECLARE_GET_FIELD(t_Arc, sup),
            DECLARE_GET_FIELD(t_Arc, tolerance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Arc__methods_[] = {
            DECLARE_METHOD(t_Arc, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Arc, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Arc, checkPoint, METH_O),
            DECLARE_METHOD(t_Arc, getBarycenter, METH_NOARGS),
            DECLARE_METHOD(t_Arc, getInf, METH_NOARGS),
            DECLARE_METHOD(t_Arc, getOffset, METH_VARARGS),
            DECLARE_METHOD(t_Arc, getSize, METH_NOARGS),
            DECLARE_METHOD(t_Arc, getSup, METH_NOARGS),
            DECLARE_METHOD(t_Arc, getTolerance, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Arc)[] = {
            { Py_tp_methods, t_Arc__methods_ },
            { Py_tp_init, (void *) t_Arc_init_ },
            { Py_tp_getset, t_Arc__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Arc)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Arc, t_Arc, Arc);

          void t_Arc::install(PyObject *module)
          {
            installType(&PY_TYPE(Arc), &PY_TYPE_DEF(Arc), module, "Arc", 0);
          }

          void t_Arc::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Arc), "class_", make_descriptor(Arc::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Arc), "wrapfn_", make_descriptor(t_Arc::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Arc), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Arc_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Arc::initializeClass, 1)))
              return NULL;
            return t_Arc::wrap_Object(Arc(((t_Arc *) arg)->object.this$));
          }
          static PyObject *t_Arc_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Arc::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Arc_init_(t_Arc *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            Arc object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = Arc(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Arc_checkPoint(t_Arc *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::geometry::partitioning::Region$Location result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.checkPoint(a0));
              return ::org::hipparchus::geometry::partitioning::t_Region$Location::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "checkPoint", arg);
            return NULL;
          }

          static PyObject *t_Arc_getBarycenter(t_Arc *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBarycenter());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Arc_getInf(t_Arc *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Arc_getOffset(t_Arc *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::spherical::oned::S1Point a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::spherical::oned::S1Point::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", args);
            return NULL;
          }

          static PyObject *t_Arc_getSize(t_Arc *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSize());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Arc_getSup(t_Arc *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSup());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Arc_getTolerance(t_Arc *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Arc_get__barycenter(t_Arc *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBarycenter());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Arc_get__inf(t_Arc *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Arc_get__size(t_Arc *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSize());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Arc_get__sup(t_Arc *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSup());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Arc_get__tolerance(t_Arc *self, void *data)
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
#include "java/io/FileOutputStream.h"
#include "java/io/FileNotFoundException.h"
#include "java/io/File.h"
#include "java/io/IOException.h"
#include "java/io/FileDescriptor.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *FileOutputStream::class$ = NULL;
    jmethodID *FileOutputStream::mids$ = NULL;
    bool FileOutputStream::live$ = false;

    jclass FileOutputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/FileOutputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7e1d51614d5d6a43] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
        mids$[mid_init$_ce27f4372ce835a9] = env->getMethodID(cls, "<init>", "(Ljava/io/FileDescriptor;)V");
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_f9b478269d0933b4] = env->getMethodID(cls, "<init>", "(Ljava/io/File;Z)V");
        mids$[mid_init$_76cf8b957ccb7ae1] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
        mids$[mid_close_a1fa5dae97ea5ed2] = env->getMethodID(cls, "close", "()V");
        mids$[mid_getFD_8101a306613a8395] = env->getMethodID(cls, "getFD", "()Ljava/io/FileDescriptor;");
        mids$[mid_write_459771b03534868e] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_44ed599e93e8a30c] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_a9fddc59b07ce512] = env->getMethodID(cls, "write", "([BII)V");
        mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FileOutputStream::FileOutputStream(const ::java::io::File & a0) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_7e1d51614d5d6a43, a0.this$)) {}

    FileOutputStream::FileOutputStream(const ::java::io::FileDescriptor & a0) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_ce27f4372ce835a9, a0.this$)) {}

    FileOutputStream::FileOutputStream(const ::java::lang::String & a0) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    FileOutputStream::FileOutputStream(const ::java::io::File & a0, jboolean a1) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_f9b478269d0933b4, a0.this$, a1)) {}

    FileOutputStream::FileOutputStream(const ::java::lang::String & a0, jboolean a1) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_76cf8b957ccb7ae1, a0.this$, a1)) {}

    void FileOutputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_a1fa5dae97ea5ed2]);
    }

    ::java::io::FileDescriptor FileOutputStream::getFD() const
    {
      return ::java::io::FileDescriptor(env->callObjectMethod(this$, mids$[mid_getFD_8101a306613a8395]));
    }

    void FileOutputStream::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_459771b03534868e], a0.this$);
    }

    void FileOutputStream::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_44ed599e93e8a30c], a0);
    }

    void FileOutputStream::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_a9fddc59b07ce512], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_FileOutputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FileOutputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_FileOutputStream_init_(t_FileOutputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_FileOutputStream_close(t_FileOutputStream *self, PyObject *args);
    static PyObject *t_FileOutputStream_getFD(t_FileOutputStream *self);
    static PyObject *t_FileOutputStream_write(t_FileOutputStream *self, PyObject *args);
    static PyObject *t_FileOutputStream_get__fD(t_FileOutputStream *self, void *data);
    static PyGetSetDef t_FileOutputStream__fields_[] = {
      DECLARE_GET_FIELD(t_FileOutputStream, fD),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_FileOutputStream__methods_[] = {
      DECLARE_METHOD(t_FileOutputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileOutputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileOutputStream, close, METH_VARARGS),
      DECLARE_METHOD(t_FileOutputStream, getFD, METH_NOARGS),
      DECLARE_METHOD(t_FileOutputStream, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FileOutputStream)[] = {
      { Py_tp_methods, t_FileOutputStream__methods_ },
      { Py_tp_init, (void *) t_FileOutputStream_init_ },
      { Py_tp_getset, t_FileOutputStream__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FileOutputStream)[] = {
      &PY_TYPE_DEF(::java::io::OutputStream),
      NULL
    };

    DEFINE_TYPE(FileOutputStream, t_FileOutputStream, FileOutputStream);

    void t_FileOutputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(FileOutputStream), &PY_TYPE_DEF(FileOutputStream), module, "FileOutputStream", 0);
    }

    void t_FileOutputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileOutputStream), "class_", make_descriptor(FileOutputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileOutputStream), "wrapfn_", make_descriptor(t_FileOutputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileOutputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FileOutputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FileOutputStream::initializeClass, 1)))
        return NULL;
      return t_FileOutputStream::wrap_Object(FileOutputStream(((t_FileOutputStream *) arg)->object.this$));
    }
    static PyObject *t_FileOutputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FileOutputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_FileOutputStream_init_(t_FileOutputStream *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::File a0((jobject) NULL);
          FileOutputStream object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
          {
            INT_CALL(object = FileOutputStream(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::FileDescriptor a0((jobject) NULL);
          FileOutputStream object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FileDescriptor::initializeClass, &a0))
          {
            INT_CALL(object = FileOutputStream(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          FileOutputStream object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = FileOutputStream(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::io::File a0((jobject) NULL);
          jboolean a1;
          FileOutputStream object((jobject) NULL);

          if (!parseArgs(args, "kZ", ::java::io::File::initializeClass, &a0, &a1))
          {
            INT_CALL(object = FileOutputStream(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean a1;
          FileOutputStream object((jobject) NULL);

          if (!parseArgs(args, "sZ", &a0, &a1))
          {
            INT_CALL(object = FileOutputStream(a0, a1));
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

    static PyObject *t_FileOutputStream_close(t_FileOutputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(FileOutputStream), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_FileOutputStream_getFD(t_FileOutputStream *self)
    {
      ::java::io::FileDescriptor result((jobject) NULL);
      OBJ_CALL(result = self->object.getFD());
      return ::java::io::t_FileDescriptor::wrap_Object(result);
    }

    static PyObject *t_FileOutputStream_write(t_FileOutputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.write(a0));
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
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(FileOutputStream), (PyObject *) self, "write", args, 2);
    }

    static PyObject *t_FileOutputStream_get__fD(t_FileOutputStream *self, void *data)
    {
      ::java::io::FileDescriptor value((jobject) NULL);
      OBJ_CALL(value = self->object.getFD());
      return ::java::io::t_FileDescriptor::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ReferenceEllipsoid.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/models/earth/ReferenceEllipsoid.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/EarthShape.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *ReferenceEllipsoid::class$ = NULL;
        jmethodID *ReferenceEllipsoid::mids$ = NULL;
        bool ReferenceEllipsoid::live$ = false;

        jclass ReferenceEllipsoid::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/ReferenceEllipsoid");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_29f310580315bd62] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/Frame;DD)V");
            mids$[mid_getC2n0_2afcbc21f4e57ab2] = env->getMethodID(cls, "getC2n0", "(I)D");
            mids$[mid_getEllipsoid_aa643af2699b886e] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getGM_b74f83833fdad017] = env->getMethodID(cls, "getGM", "()D");
            mids$[mid_getGrs80_ede34de05fdfe414] = env->getStaticMethodID(cls, "getGrs80", "(Lorg/orekit/frames/Frame;)Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getIers2003_ede34de05fdfe414] = env->getStaticMethodID(cls, "getIers2003", "(Lorg/orekit/frames/Frame;)Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getIers2010_ede34de05fdfe414] = env->getStaticMethodID(cls, "getIers2010", "(Lorg/orekit/frames/Frame;)Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getIers96_ede34de05fdfe414] = env->getStaticMethodID(cls, "getIers96", "(Lorg/orekit/frames/Frame;)Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getNormalGravity_04fd0666b613d2ab] = env->getMethodID(cls, "getNormalGravity", "(D)D");
            mids$[mid_getPolarRadius_b74f83833fdad017] = env->getMethodID(cls, "getPolarRadius", "()D");
            mids$[mid_getSpin_b74f83833fdad017] = env->getMethodID(cls, "getSpin", "()D");
            mids$[mid_getWgs84_ede34de05fdfe414] = env->getStaticMethodID(cls, "getWgs84", "(Lorg/orekit/frames/Frame;)Lorg/orekit/models/earth/ReferenceEllipsoid;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ReferenceEllipsoid::ReferenceEllipsoid(jdouble a0, jdouble a1, const ::org::orekit::frames::Frame & a2, jdouble a3, jdouble a4) : ::org::orekit::bodies::OneAxisEllipsoid(env->newObject(initializeClass, &mids$, mid_init$_29f310580315bd62, a0, a1, a2.this$, a3, a4)) {}

        jdouble ReferenceEllipsoid::getC2n0(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getC2n0_2afcbc21f4e57ab2], a0);
        }

        ReferenceEllipsoid ReferenceEllipsoid::getEllipsoid() const
        {
          return ReferenceEllipsoid(env->callObjectMethod(this$, mids$[mid_getEllipsoid_aa643af2699b886e]));
        }

        jdouble ReferenceEllipsoid::getGM() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getGM_b74f83833fdad017]);
        }

        ReferenceEllipsoid ReferenceEllipsoid::getGrs80(const ::org::orekit::frames::Frame & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ReferenceEllipsoid(env->callStaticObjectMethod(cls, mids$[mid_getGrs80_ede34de05fdfe414], a0.this$));
        }

        ReferenceEllipsoid ReferenceEllipsoid::getIers2003(const ::org::orekit::frames::Frame & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ReferenceEllipsoid(env->callStaticObjectMethod(cls, mids$[mid_getIers2003_ede34de05fdfe414], a0.this$));
        }

        ReferenceEllipsoid ReferenceEllipsoid::getIers2010(const ::org::orekit::frames::Frame & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ReferenceEllipsoid(env->callStaticObjectMethod(cls, mids$[mid_getIers2010_ede34de05fdfe414], a0.this$));
        }

        ReferenceEllipsoid ReferenceEllipsoid::getIers96(const ::org::orekit::frames::Frame & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ReferenceEllipsoid(env->callStaticObjectMethod(cls, mids$[mid_getIers96_ede34de05fdfe414], a0.this$));
        }

        jdouble ReferenceEllipsoid::getNormalGravity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNormalGravity_04fd0666b613d2ab], a0);
        }

        jdouble ReferenceEllipsoid::getPolarRadius() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPolarRadius_b74f83833fdad017]);
        }

        jdouble ReferenceEllipsoid::getSpin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSpin_b74f83833fdad017]);
        }

        ReferenceEllipsoid ReferenceEllipsoid::getWgs84(const ::org::orekit::frames::Frame & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ReferenceEllipsoid(env->callStaticObjectMethod(cls, mids$[mid_getWgs84_ede34de05fdfe414], a0.this$));
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
        static PyObject *t_ReferenceEllipsoid_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ReferenceEllipsoid_init_(t_ReferenceEllipsoid *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ReferenceEllipsoid_getC2n0(t_ReferenceEllipsoid *self, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_getEllipsoid(t_ReferenceEllipsoid *self);
        static PyObject *t_ReferenceEllipsoid_getGM(t_ReferenceEllipsoid *self);
        static PyObject *t_ReferenceEllipsoid_getGrs80(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_getIers2003(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_getIers2010(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_getIers96(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_getNormalGravity(t_ReferenceEllipsoid *self, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_getPolarRadius(t_ReferenceEllipsoid *self);
        static PyObject *t_ReferenceEllipsoid_getSpin(t_ReferenceEllipsoid *self);
        static PyObject *t_ReferenceEllipsoid_getWgs84(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_get__ellipsoid(t_ReferenceEllipsoid *self, void *data);
        static PyObject *t_ReferenceEllipsoid_get__gM(t_ReferenceEllipsoid *self, void *data);
        static PyObject *t_ReferenceEllipsoid_get__polarRadius(t_ReferenceEllipsoid *self, void *data);
        static PyObject *t_ReferenceEllipsoid_get__spin(t_ReferenceEllipsoid *self, void *data);
        static PyGetSetDef t_ReferenceEllipsoid__fields_[] = {
          DECLARE_GET_FIELD(t_ReferenceEllipsoid, ellipsoid),
          DECLARE_GET_FIELD(t_ReferenceEllipsoid, gM),
          DECLARE_GET_FIELD(t_ReferenceEllipsoid, polarRadius),
          DECLARE_GET_FIELD(t_ReferenceEllipsoid, spin),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ReferenceEllipsoid__methods_[] = {
          DECLARE_METHOD(t_ReferenceEllipsoid, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReferenceEllipsoid, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getC2n0, METH_O),
          DECLARE_METHOD(t_ReferenceEllipsoid, getEllipsoid, METH_NOARGS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getGM, METH_NOARGS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getGrs80, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getIers2003, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getIers2010, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getIers96, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getNormalGravity, METH_O),
          DECLARE_METHOD(t_ReferenceEllipsoid, getPolarRadius, METH_NOARGS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getSpin, METH_NOARGS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getWgs84, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ReferenceEllipsoid)[] = {
          { Py_tp_methods, t_ReferenceEllipsoid__methods_ },
          { Py_tp_init, (void *) t_ReferenceEllipsoid_init_ },
          { Py_tp_getset, t_ReferenceEllipsoid__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ReferenceEllipsoid)[] = {
          &PY_TYPE_DEF(::org::orekit::bodies::OneAxisEllipsoid),
          NULL
        };

        DEFINE_TYPE(ReferenceEllipsoid, t_ReferenceEllipsoid, ReferenceEllipsoid);

        void t_ReferenceEllipsoid::install(PyObject *module)
        {
          installType(&PY_TYPE(ReferenceEllipsoid), &PY_TYPE_DEF(ReferenceEllipsoid), module, "ReferenceEllipsoid", 0);
        }

        void t_ReferenceEllipsoid::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ReferenceEllipsoid), "class_", make_descriptor(ReferenceEllipsoid::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ReferenceEllipsoid), "wrapfn_", make_descriptor(t_ReferenceEllipsoid::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ReferenceEllipsoid), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ReferenceEllipsoid_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ReferenceEllipsoid::initializeClass, 1)))
            return NULL;
          return t_ReferenceEllipsoid::wrap_Object(ReferenceEllipsoid(((t_ReferenceEllipsoid *) arg)->object.this$));
        }
        static PyObject *t_ReferenceEllipsoid_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ReferenceEllipsoid::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ReferenceEllipsoid_init_(t_ReferenceEllipsoid *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::frames::Frame a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          ReferenceEllipsoid object((jobject) NULL);

          if (!parseArgs(args, "DDkDD", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = ReferenceEllipsoid(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ReferenceEllipsoid_getC2n0(t_ReferenceEllipsoid *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getC2n0(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getC2n0", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_getEllipsoid(t_ReferenceEllipsoid *self)
        {
          ReferenceEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getEllipsoid());
          return t_ReferenceEllipsoid::wrap_Object(result);
        }

        static PyObject *t_ReferenceEllipsoid_getGM(t_ReferenceEllipsoid *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getGM());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ReferenceEllipsoid_getGrs80(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ReferenceEllipsoid result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::ReferenceEllipsoid::getGrs80(a0));
            return t_ReferenceEllipsoid::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getGrs80", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_getIers2003(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ReferenceEllipsoid result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::ReferenceEllipsoid::getIers2003(a0));
            return t_ReferenceEllipsoid::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getIers2003", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_getIers2010(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ReferenceEllipsoid result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::ReferenceEllipsoid::getIers2010(a0));
            return t_ReferenceEllipsoid::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getIers2010", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_getIers96(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ReferenceEllipsoid result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::ReferenceEllipsoid::getIers96(a0));
            return t_ReferenceEllipsoid::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getIers96", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_getNormalGravity(t_ReferenceEllipsoid *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getNormalGravity(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getNormalGravity", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_getPolarRadius(t_ReferenceEllipsoid *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPolarRadius());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ReferenceEllipsoid_getSpin(t_ReferenceEllipsoid *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSpin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ReferenceEllipsoid_getWgs84(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ReferenceEllipsoid result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::ReferenceEllipsoid::getWgs84(a0));
            return t_ReferenceEllipsoid::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getWgs84", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_get__ellipsoid(t_ReferenceEllipsoid *self, void *data)
        {
          ReferenceEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getEllipsoid());
          return t_ReferenceEllipsoid::wrap_Object(value);
        }

        static PyObject *t_ReferenceEllipsoid_get__gM(t_ReferenceEllipsoid *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getGM());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ReferenceEllipsoid_get__polarRadius(t_ReferenceEllipsoid *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPolarRadius());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ReferenceEllipsoid_get__spin(t_ReferenceEllipsoid *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSpin());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldTimeShiftable::class$ = NULL;
      jmethodID *FieldTimeShiftable::mids$ = NULL;
      bool FieldTimeShiftable::live$ = false;

      jclass FieldTimeShiftable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldTimeShiftable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_shiftedBy_7996cf2c358d897a] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldTimeShiftable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTimeShiftable FieldTimeShiftable::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldTimeShiftable(env->callObjectMethod(this$, mids$[mid_shiftedBy_7996cf2c358d897a], a0.this$));
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
      static PyObject *t_FieldTimeShiftable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeShiftable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeShiftable_of_(t_FieldTimeShiftable *self, PyObject *args);
      static PyObject *t_FieldTimeShiftable_shiftedBy(t_FieldTimeShiftable *self, PyObject *args);
      static PyObject *t_FieldTimeShiftable_get__parameters_(t_FieldTimeShiftable *self, void *data);
      static PyGetSetDef t_FieldTimeShiftable__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeShiftable, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeShiftable__methods_[] = {
        DECLARE_METHOD(t_FieldTimeShiftable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeShiftable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeShiftable, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeShiftable, shiftedBy, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeShiftable)[] = {
        { Py_tp_methods, t_FieldTimeShiftable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldTimeShiftable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeShiftable)[] = {
        &PY_TYPE_DEF(::org::orekit::time::TimeShiftable),
        NULL
      };

      DEFINE_TYPE(FieldTimeShiftable, t_FieldTimeShiftable, FieldTimeShiftable);
      PyObject *t_FieldTimeShiftable::wrap_Object(const FieldTimeShiftable& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeShiftable::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeShiftable *self = (t_FieldTimeShiftable *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_FieldTimeShiftable::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeShiftable::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeShiftable *self = (t_FieldTimeShiftable *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_FieldTimeShiftable::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeShiftable), &PY_TYPE_DEF(FieldTimeShiftable), module, "FieldTimeShiftable", 0);
      }

      void t_FieldTimeShiftable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeShiftable), "class_", make_descriptor(FieldTimeShiftable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeShiftable), "wrapfn_", make_descriptor(t_FieldTimeShiftable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeShiftable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeShiftable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeShiftable::initializeClass, 1)))
          return NULL;
        return t_FieldTimeShiftable::wrap_Object(FieldTimeShiftable(((t_FieldTimeShiftable *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeShiftable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeShiftable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeShiftable_of_(t_FieldTimeShiftable *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldTimeShiftable_shiftedBy(t_FieldTimeShiftable *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldTimeShiftable result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldTimeShiftable::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldTimeShiftable), (PyObject *) self, "shiftedBy", args, 2);
      }
      static PyObject *t_FieldTimeShiftable_get__parameters_(t_FieldTimeShiftable *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockInterSatellitesPhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockInterSatellitesPhaseModifier::class$ = NULL;
          jmethodID *RelativisticClockInterSatellitesPhaseModifier::mids$ = NULL;
          bool RelativisticClockInterSatellitesPhaseModifier::live$ = false;

          jclass RelativisticClockInterSatellitesPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockInterSatellitesPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockInterSatellitesPhaseModifier::RelativisticClockInterSatellitesPhaseModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          ::java::util::List RelativisticClockInterSatellitesPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void RelativisticClockInterSatellitesPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockInterSatellitesPhaseModifier_init_(t_RelativisticClockInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_getParametersDrivers(t_RelativisticClockInterSatellitesPhaseModifier *self);
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockInterSatellitesPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_get__parametersDrivers(t_RelativisticClockInterSatellitesPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockInterSatellitesPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockInterSatellitesPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockInterSatellitesPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockInterSatellitesPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockInterSatellitesPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticClockInterSatellitesPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockInterSatellitesPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticClockInterSatellitesPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockInterSatellitesPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockInterSatellitesPhaseModifier, t_RelativisticClockInterSatellitesPhaseModifier, RelativisticClockInterSatellitesPhaseModifier);

          void t_RelativisticClockInterSatellitesPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockInterSatellitesPhaseModifier), &PY_TYPE_DEF(RelativisticClockInterSatellitesPhaseModifier), module, "RelativisticClockInterSatellitesPhaseModifier", 0);
          }

          void t_RelativisticClockInterSatellitesPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesPhaseModifier), "class_", make_descriptor(RelativisticClockInterSatellitesPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticClockInterSatellitesPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockInterSatellitesPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockInterSatellitesPhaseModifier::wrap_Object(RelativisticClockInterSatellitesPhaseModifier(((t_RelativisticClockInterSatellitesPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockInterSatellitesPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockInterSatellitesPhaseModifier_init_(t_RelativisticClockInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockInterSatellitesPhaseModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockInterSatellitesPhaseModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_getParametersDrivers(t_RelativisticClockInterSatellitesPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockInterSatellitesPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_get__parametersDrivers(t_RelativisticClockInterSatellitesPhaseModifier *self, void *data)
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
#include "org/orekit/data/SimpleTimeStampedTableParser$RowConverter.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *SimpleTimeStampedTableParser$RowConverter::class$ = NULL;
      jmethodID *SimpleTimeStampedTableParser$RowConverter::mids$ = NULL;
      bool SimpleTimeStampedTableParser$RowConverter::live$ = false;

      jclass SimpleTimeStampedTableParser$RowConverter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/SimpleTimeStampedTableParser$RowConverter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_convert_890086619e436572] = env->getMethodID(cls, "convert", "([D)Lorg/orekit/time/TimeStamped;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::TimeStamped SimpleTimeStampedTableParser$RowConverter::convert(const JArray< jdouble > & a0) const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_convert_890086619e436572], a0.this$));
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
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_of_(t_SimpleTimeStampedTableParser$RowConverter *self, PyObject *args);
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_convert(t_SimpleTimeStampedTableParser$RowConverter *self, PyObject *arg);
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_get__parameters_(t_SimpleTimeStampedTableParser$RowConverter *self, void *data);
      static PyGetSetDef t_SimpleTimeStampedTableParser$RowConverter__fields_[] = {
        DECLARE_GET_FIELD(t_SimpleTimeStampedTableParser$RowConverter, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimpleTimeStampedTableParser$RowConverter__methods_[] = {
        DECLARE_METHOD(t_SimpleTimeStampedTableParser$RowConverter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleTimeStampedTableParser$RowConverter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleTimeStampedTableParser$RowConverter, of_, METH_VARARGS),
        DECLARE_METHOD(t_SimpleTimeStampedTableParser$RowConverter, convert, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleTimeStampedTableParser$RowConverter)[] = {
        { Py_tp_methods, t_SimpleTimeStampedTableParser$RowConverter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_SimpleTimeStampedTableParser$RowConverter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleTimeStampedTableParser$RowConverter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SimpleTimeStampedTableParser$RowConverter, t_SimpleTimeStampedTableParser$RowConverter, SimpleTimeStampedTableParser$RowConverter);
      PyObject *t_SimpleTimeStampedTableParser$RowConverter::wrap_Object(const SimpleTimeStampedTableParser$RowConverter& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleTimeStampedTableParser$RowConverter::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleTimeStampedTableParser$RowConverter *self = (t_SimpleTimeStampedTableParser$RowConverter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SimpleTimeStampedTableParser$RowConverter::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleTimeStampedTableParser$RowConverter::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleTimeStampedTableParser$RowConverter *self = (t_SimpleTimeStampedTableParser$RowConverter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SimpleTimeStampedTableParser$RowConverter::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleTimeStampedTableParser$RowConverter), &PY_TYPE_DEF(SimpleTimeStampedTableParser$RowConverter), module, "SimpleTimeStampedTableParser$RowConverter", 0);
      }

      void t_SimpleTimeStampedTableParser$RowConverter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser$RowConverter), "class_", make_descriptor(SimpleTimeStampedTableParser$RowConverter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser$RowConverter), "wrapfn_", make_descriptor(t_SimpleTimeStampedTableParser$RowConverter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser$RowConverter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleTimeStampedTableParser$RowConverter::initializeClass, 1)))
          return NULL;
        return t_SimpleTimeStampedTableParser$RowConverter::wrap_Object(SimpleTimeStampedTableParser$RowConverter(((t_SimpleTimeStampedTableParser$RowConverter *) arg)->object.this$));
      }
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleTimeStampedTableParser$RowConverter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_of_(t_SimpleTimeStampedTableParser$RowConverter *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_convert(t_SimpleTimeStampedTableParser$RowConverter *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        ::org::orekit::time::TimeStamped result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.convert(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "convert", arg);
        return NULL;
      }
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_get__parameters_(t_SimpleTimeStampedTableParser$RowConverter *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/raster/TileFactory.h"
#include "org/orekit/rugged/raster/Tile.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *TileFactory::class$ = NULL;
        jmethodID *TileFactory::mids$ = NULL;
        bool TileFactory::live$ = false;

        jclass TileFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/TileFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_createTile_b7ba3ef310fb0817] = env->getMethodID(cls, "createTile", "()Lorg/orekit/rugged/raster/Tile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::rugged::raster::Tile TileFactory::createTile() const
        {
          return ::org::orekit::rugged::raster::Tile(env->callObjectMethod(this$, mids$[mid_createTile_b7ba3ef310fb0817]));
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
        static PyObject *t_TileFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TileFactory_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TileFactory_of_(t_TileFactory *self, PyObject *args);
        static PyObject *t_TileFactory_createTile(t_TileFactory *self);
        static PyObject *t_TileFactory_get__parameters_(t_TileFactory *self, void *data);
        static PyGetSetDef t_TileFactory__fields_[] = {
          DECLARE_GET_FIELD(t_TileFactory, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TileFactory__methods_[] = {
          DECLARE_METHOD(t_TileFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TileFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TileFactory, of_, METH_VARARGS),
          DECLARE_METHOD(t_TileFactory, createTile, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TileFactory)[] = {
          { Py_tp_methods, t_TileFactory__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_TileFactory__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TileFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TileFactory, t_TileFactory, TileFactory);
        PyObject *t_TileFactory::wrap_Object(const TileFactory& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TileFactory::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TileFactory *self = (t_TileFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_TileFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TileFactory::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TileFactory *self = (t_TileFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_TileFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(TileFactory), &PY_TYPE_DEF(TileFactory), module, "TileFactory", 0);
        }

        void t_TileFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileFactory), "class_", make_descriptor(TileFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileFactory), "wrapfn_", make_descriptor(t_TileFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TileFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TileFactory::initializeClass, 1)))
            return NULL;
          return t_TileFactory::wrap_Object(TileFactory(((t_TileFactory *) arg)->object.this$));
        }
        static PyObject *t_TileFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TileFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TileFactory_of_(t_TileFactory *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_TileFactory_createTile(t_TileFactory *self)
        {
          ::org::orekit::rugged::raster::Tile result((jobject) NULL);
          OBJ_CALL(result = self->object.createTile());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::rugged::raster::t_Tile::wrap_Object(result);
        }
        static PyObject *t_TileFactory_get__parameters_(t_TileFactory *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/EarthShape.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/ReferenceEllipsoid.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *EarthShape::class$ = NULL;
        jmethodID *EarthShape::mids$ = NULL;
        bool EarthShape::live$ = false;

        jclass EarthShape::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/EarthShape");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEllipsoid_aa643af2699b886e] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/models/earth/ReferenceEllipsoid;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::models::earth::ReferenceEllipsoid EarthShape::getEllipsoid() const
        {
          return ::org::orekit::models::earth::ReferenceEllipsoid(env->callObjectMethod(this$, mids$[mid_getEllipsoid_aa643af2699b886e]));
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
        static PyObject *t_EarthShape_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EarthShape_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EarthShape_getEllipsoid(t_EarthShape *self);
        static PyObject *t_EarthShape_get__ellipsoid(t_EarthShape *self, void *data);
        static PyGetSetDef t_EarthShape__fields_[] = {
          DECLARE_GET_FIELD(t_EarthShape, ellipsoid),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EarthShape__methods_[] = {
          DECLARE_METHOD(t_EarthShape, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthShape, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthShape, getEllipsoid, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EarthShape)[] = {
          { Py_tp_methods, t_EarthShape__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EarthShape__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EarthShape)[] = {
          &PY_TYPE_DEF(::org::orekit::bodies::BodyShape),
          NULL
        };

        DEFINE_TYPE(EarthShape, t_EarthShape, EarthShape);

        void t_EarthShape::install(PyObject *module)
        {
          installType(&PY_TYPE(EarthShape), &PY_TYPE_DEF(EarthShape), module, "EarthShape", 0);
        }

        void t_EarthShape::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthShape), "class_", make_descriptor(EarthShape::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthShape), "wrapfn_", make_descriptor(t_EarthShape::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthShape), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EarthShape_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EarthShape::initializeClass, 1)))
            return NULL;
          return t_EarthShape::wrap_Object(EarthShape(((t_EarthShape *) arg)->object.this$));
        }
        static PyObject *t_EarthShape_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EarthShape::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EarthShape_getEllipsoid(t_EarthShape *self)
        {
          ::org::orekit::models::earth::ReferenceEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getEllipsoid());
          return ::org::orekit::models::earth::t_ReferenceEllipsoid::wrap_Object(result);
        }

        static PyObject *t_EarthShape_get__ellipsoid(t_EarthShape *self, void *data)
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
#include "org/orekit/frames/EOPEntry.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EOPEntry::class$ = NULL;
      jmethodID *EOPEntry::mids$ = NULL;
      bool EOPEntry::live$ = false;

      jclass EOPEntry::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EOPEntry");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c784ea63fb85b5ed] = env->getMethodID(cls, "<init>", "(IDDDDDDDDDDLorg/orekit/frames/ITRFVersion;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getDdEps_b74f83833fdad017] = env->getMethodID(cls, "getDdEps", "()D");
          mids$[mid_getDdPsi_b74f83833fdad017] = env->getMethodID(cls, "getDdPsi", "()D");
          mids$[mid_getDx_b74f83833fdad017] = env->getMethodID(cls, "getDx", "()D");
          mids$[mid_getDy_b74f83833fdad017] = env->getMethodID(cls, "getDy", "()D");
          mids$[mid_getITRFType_8bcdfad365f6d36a] = env->getMethodID(cls, "getITRFType", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getLOD_b74f83833fdad017] = env->getMethodID(cls, "getLOD", "()D");
          mids$[mid_getMjd_55546ef6a647f39b] = env->getMethodID(cls, "getMjd", "()I");
          mids$[mid_getUT1MinusUTC_b74f83833fdad017] = env->getMethodID(cls, "getUT1MinusUTC", "()D");
          mids$[mid_getX_b74f83833fdad017] = env->getMethodID(cls, "getX", "()D");
          mids$[mid_getXRate_b74f83833fdad017] = env->getMethodID(cls, "getXRate", "()D");
          mids$[mid_getY_b74f83833fdad017] = env->getMethodID(cls, "getY", "()D");
          mids$[mid_getYRate_b74f83833fdad017] = env->getMethodID(cls, "getYRate", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EOPEntry::EOPEntry(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, const ::org::orekit::frames::ITRFVersion & a11, const ::org::orekit::time::AbsoluteDate & a12) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c784ea63fb85b5ed, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11.this$, a12.this$)) {}

      ::org::orekit::time::AbsoluteDate EOPEntry::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
      }

      jdouble EOPEntry::getDdEps() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDdEps_b74f83833fdad017]);
      }

      jdouble EOPEntry::getDdPsi() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDdPsi_b74f83833fdad017]);
      }

      jdouble EOPEntry::getDx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDx_b74f83833fdad017]);
      }

      jdouble EOPEntry::getDy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDy_b74f83833fdad017]);
      }

      ::org::orekit::frames::ITRFVersion EOPEntry::getITRFType() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getITRFType_8bcdfad365f6d36a]));
      }

      jdouble EOPEntry::getLOD() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLOD_b74f83833fdad017]);
      }

      jint EOPEntry::getMjd() const
      {
        return env->callIntMethod(this$, mids$[mid_getMjd_55546ef6a647f39b]);
      }

      jdouble EOPEntry::getUT1MinusUTC() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getUT1MinusUTC_b74f83833fdad017]);
      }

      jdouble EOPEntry::getX() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getX_b74f83833fdad017]);
      }

      jdouble EOPEntry::getXRate() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getXRate_b74f83833fdad017]);
      }

      jdouble EOPEntry::getY() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getY_b74f83833fdad017]);
      }

      jdouble EOPEntry::getYRate() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getYRate_b74f83833fdad017]);
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
      static PyObject *t_EOPEntry_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPEntry_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EOPEntry_init_(t_EOPEntry *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EOPEntry_getDate(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getDdEps(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getDdPsi(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getDx(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getDy(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getITRFType(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getLOD(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getMjd(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getUT1MinusUTC(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getX(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getXRate(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getY(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getYRate(t_EOPEntry *self);
      static PyObject *t_EOPEntry_get__date(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__ddEps(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__ddPsi(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__dx(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__dy(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__iTRFType(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__lOD(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__mjd(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__uT1MinusUTC(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__x(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__xRate(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__y(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__yRate(t_EOPEntry *self, void *data);
      static PyGetSetDef t_EOPEntry__fields_[] = {
        DECLARE_GET_FIELD(t_EOPEntry, date),
        DECLARE_GET_FIELD(t_EOPEntry, ddEps),
        DECLARE_GET_FIELD(t_EOPEntry, ddPsi),
        DECLARE_GET_FIELD(t_EOPEntry, dx),
        DECLARE_GET_FIELD(t_EOPEntry, dy),
        DECLARE_GET_FIELD(t_EOPEntry, iTRFType),
        DECLARE_GET_FIELD(t_EOPEntry, lOD),
        DECLARE_GET_FIELD(t_EOPEntry, mjd),
        DECLARE_GET_FIELD(t_EOPEntry, uT1MinusUTC),
        DECLARE_GET_FIELD(t_EOPEntry, x),
        DECLARE_GET_FIELD(t_EOPEntry, xRate),
        DECLARE_GET_FIELD(t_EOPEntry, y),
        DECLARE_GET_FIELD(t_EOPEntry, yRate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EOPEntry__methods_[] = {
        DECLARE_METHOD(t_EOPEntry, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPEntry, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPEntry, getDate, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getDdEps, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getDdPsi, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getDx, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getDy, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getITRFType, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getLOD, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getMjd, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getUT1MinusUTC, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getX, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getXRate, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getY, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getYRate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EOPEntry)[] = {
        { Py_tp_methods, t_EOPEntry__methods_ },
        { Py_tp_init, (void *) t_EOPEntry_init_ },
        { Py_tp_getset, t_EOPEntry__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EOPEntry)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EOPEntry, t_EOPEntry, EOPEntry);

      void t_EOPEntry::install(PyObject *module)
      {
        installType(&PY_TYPE(EOPEntry), &PY_TYPE_DEF(EOPEntry), module, "EOPEntry", 0);
      }

      void t_EOPEntry::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPEntry), "class_", make_descriptor(EOPEntry::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPEntry), "wrapfn_", make_descriptor(t_EOPEntry::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPEntry), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EOPEntry_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EOPEntry::initializeClass, 1)))
          return NULL;
        return t_EOPEntry::wrap_Object(EOPEntry(((t_EOPEntry *) arg)->object.this$));
      }
      static PyObject *t_EOPEntry_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EOPEntry::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EOPEntry_init_(t_EOPEntry *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
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
        ::org::orekit::frames::ITRFVersion a11((jobject) NULL);
        PyTypeObject **p11;
        ::org::orekit::time::AbsoluteDate a12((jobject) NULL);
        EOPEntry object((jobject) NULL);

        if (!parseArgs(args, "IDDDDDDDDDDKk", ::org::orekit::frames::ITRFVersion::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &p11, ::org::orekit::frames::t_ITRFVersion::parameters_, &a12))
        {
          INT_CALL(object = EOPEntry(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_EOPEntry_getDate(t_EOPEntry *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_EOPEntry_getDdEps(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDdEps());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getDdPsi(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDdPsi());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getDx(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getDy(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getITRFType(t_EOPEntry *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getITRFType());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_EOPEntry_getLOD(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLOD());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getMjd(t_EOPEntry *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMjd());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_EOPEntry_getUT1MinusUTC(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getUT1MinusUTC());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getX(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getX());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getXRate(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getXRate());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getY(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getY());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getYRate(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getYRate());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_get__date(t_EOPEntry *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_EOPEntry_get__ddEps(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDdEps());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__ddPsi(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDdPsi());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__dx(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__dy(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__iTRFType(t_EOPEntry *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getITRFType());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }

      static PyObject *t_EOPEntry_get__lOD(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLOD());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__mjd(t_EOPEntry *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMjd());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_EOPEntry_get__uT1MinusUTC(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getUT1MinusUTC());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__x(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getX());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__xRate(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getXRate());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__y(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getY());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__yRate(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getYRate());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/HaloOrbit.h"
#include "org/orekit/orbits/RichardsonExpansion.h"
#include "org/orekit/orbits/LibrationOrbitFamily.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *HaloOrbit::class$ = NULL;
      jmethodID *HaloOrbit::mids$ = NULL;
      bool HaloOrbit::live$ = false;

      jclass HaloOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/HaloOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b82f17c213a6dfa7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/RichardsonExpansion;DLorg/orekit/orbits/LibrationOrbitFamily;)V");
          mids$[mid_init$_61210a58b1c5967a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;Lorg/orekit/utils/PVCoordinates;D)V");
          mids$[mid_applyCorrectionOnPV_57264af3b06f967f] = env->getMethodID(cls, "applyCorrectionOnPV", "(Lorg/orekit/orbits/CR3BPDifferentialCorrection;)Lorg/orekit/utils/PVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HaloOrbit::HaloOrbit(const ::org::orekit::orbits::RichardsonExpansion & a0, jdouble a1, const ::org::orekit::orbits::LibrationOrbitFamily & a2) : ::org::orekit::orbits::LibrationOrbit(env->newObject(initializeClass, &mids$, mid_init$_b82f17c213a6dfa7, a0.this$, a1, a2.this$)) {}

      HaloOrbit::HaloOrbit(const ::org::orekit::bodies::CR3BPSystem & a0, const ::org::orekit::utils::PVCoordinates & a1, jdouble a2) : ::org::orekit::orbits::LibrationOrbit(env->newObject(initializeClass, &mids$, mid_init$_61210a58b1c5967a, a0.this$, a1.this$, a2)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_HaloOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HaloOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_HaloOrbit_init_(t_HaloOrbit *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_HaloOrbit__methods_[] = {
        DECLARE_METHOD(t_HaloOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HaloOrbit, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HaloOrbit)[] = {
        { Py_tp_methods, t_HaloOrbit__methods_ },
        { Py_tp_init, (void *) t_HaloOrbit_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HaloOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::LibrationOrbit),
        NULL
      };

      DEFINE_TYPE(HaloOrbit, t_HaloOrbit, HaloOrbit);

      void t_HaloOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(HaloOrbit), &PY_TYPE_DEF(HaloOrbit), module, "HaloOrbit", 0);
      }

      void t_HaloOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HaloOrbit), "class_", make_descriptor(HaloOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HaloOrbit), "wrapfn_", make_descriptor(t_HaloOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HaloOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HaloOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HaloOrbit::initializeClass, 1)))
          return NULL;
        return t_HaloOrbit::wrap_Object(HaloOrbit(((t_HaloOrbit *) arg)->object.this$));
      }
      static PyObject *t_HaloOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HaloOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_HaloOrbit_init_(t_HaloOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::orbits::RichardsonExpansion a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::orbits::LibrationOrbitFamily a2((jobject) NULL);
            PyTypeObject **p2;
            HaloOrbit object((jobject) NULL);

            if (!parseArgs(args, "kDK", ::org::orekit::orbits::RichardsonExpansion::initializeClass, ::org::orekit::orbits::LibrationOrbitFamily::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_LibrationOrbitFamily::parameters_))
            {
              INT_CALL(object = HaloOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            jdouble a2;
            HaloOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::bodies::CR3BPSystem::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = HaloOrbit(a0, a1, a2));
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PoleCorrection.h"
#include "org/orekit/frames/PoleCorrection.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PoleCorrection::class$ = NULL;
      jmethodID *PoleCorrection::mids$ = NULL;
      bool PoleCorrection::live$ = false;
      PoleCorrection *PoleCorrection::NULL_CORRECTION = NULL;

      jclass PoleCorrection::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PoleCorrection");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_getXp_b74f83833fdad017] = env->getMethodID(cls, "getXp", "()D");
          mids$[mid_getYp_b74f83833fdad017] = env->getMethodID(cls, "getYp", "()D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          NULL_CORRECTION = new PoleCorrection(env->getStaticObjectField(cls, "NULL_CORRECTION", "Lorg/orekit/frames/PoleCorrection;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PoleCorrection::PoleCorrection(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

      jdouble PoleCorrection::getXp() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getXp_b74f83833fdad017]);
      }

      jdouble PoleCorrection::getYp() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getYp_b74f83833fdad017]);
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
      static PyObject *t_PoleCorrection_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PoleCorrection_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PoleCorrection_init_(t_PoleCorrection *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PoleCorrection_getXp(t_PoleCorrection *self);
      static PyObject *t_PoleCorrection_getYp(t_PoleCorrection *self);
      static PyObject *t_PoleCorrection_get__xp(t_PoleCorrection *self, void *data);
      static PyObject *t_PoleCorrection_get__yp(t_PoleCorrection *self, void *data);
      static PyGetSetDef t_PoleCorrection__fields_[] = {
        DECLARE_GET_FIELD(t_PoleCorrection, xp),
        DECLARE_GET_FIELD(t_PoleCorrection, yp),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PoleCorrection__methods_[] = {
        DECLARE_METHOD(t_PoleCorrection, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoleCorrection, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoleCorrection, getXp, METH_NOARGS),
        DECLARE_METHOD(t_PoleCorrection, getYp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PoleCorrection)[] = {
        { Py_tp_methods, t_PoleCorrection__methods_ },
        { Py_tp_init, (void *) t_PoleCorrection_init_ },
        { Py_tp_getset, t_PoleCorrection__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PoleCorrection)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PoleCorrection, t_PoleCorrection, PoleCorrection);

      void t_PoleCorrection::install(PyObject *module)
      {
        installType(&PY_TYPE(PoleCorrection), &PY_TYPE_DEF(PoleCorrection), module, "PoleCorrection", 0);
      }

      void t_PoleCorrection::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoleCorrection), "class_", make_descriptor(PoleCorrection::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoleCorrection), "wrapfn_", make_descriptor(t_PoleCorrection::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoleCorrection), "boxfn_", make_descriptor(boxObject));
        env->getClass(PoleCorrection::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoleCorrection), "NULL_CORRECTION", make_descriptor(t_PoleCorrection::wrap_Object(*PoleCorrection::NULL_CORRECTION)));
      }

      static PyObject *t_PoleCorrection_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PoleCorrection::initializeClass, 1)))
          return NULL;
        return t_PoleCorrection::wrap_Object(PoleCorrection(((t_PoleCorrection *) arg)->object.this$));
      }
      static PyObject *t_PoleCorrection_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PoleCorrection::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PoleCorrection_init_(t_PoleCorrection *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        PoleCorrection object((jobject) NULL);

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          INT_CALL(object = PoleCorrection(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_PoleCorrection_getXp(t_PoleCorrection *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getXp());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_PoleCorrection_getYp(t_PoleCorrection *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getYp());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_PoleCorrection_get__xp(t_PoleCorrection *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getXp());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_PoleCorrection_get__yp(t_PoleCorrection *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getYp());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame3.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame3::class$ = NULL;
          jmethodID *SubFrame3::mids$ = NULL;
          bool SubFrame3::live$ = false;

          jclass SubFrame3::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame3");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCic_b74f83833fdad017] = env->getMethodID(cls, "getCic", "()D");
              mids$[mid_getCis_b74f83833fdad017] = env->getMethodID(cls, "getCis", "()D");
              mids$[mid_getCrc_b74f83833fdad017] = env->getMethodID(cls, "getCrc", "()D");
              mids$[mid_getI0_b74f83833fdad017] = env->getMethodID(cls, "getI0", "()D");
              mids$[mid_getIDot_b74f83833fdad017] = env->getMethodID(cls, "getIDot", "()D");
              mids$[mid_getIODE_55546ef6a647f39b] = env->getMethodID(cls, "getIODE", "()I");
              mids$[mid_getLowercaseOmega_b74f83833fdad017] = env->getMethodID(cls, "getLowercaseOmega", "()D");
              mids$[mid_getOmegaDot_b74f83833fdad017] = env->getMethodID(cls, "getOmegaDot", "()D");
              mids$[mid_getUppercaseOmega0_b74f83833fdad017] = env->getMethodID(cls, "getUppercaseOmega0", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble SubFrame3::getCic() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCic_b74f83833fdad017]);
          }

          jdouble SubFrame3::getCis() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCis_b74f83833fdad017]);
          }

          jdouble SubFrame3::getCrc() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCrc_b74f83833fdad017]);
          }

          jdouble SubFrame3::getI0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getI0_b74f83833fdad017]);
          }

          jdouble SubFrame3::getIDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getIDot_b74f83833fdad017]);
          }

          jint SubFrame3::getIODE() const
          {
            return env->callIntMethod(this$, mids$[mid_getIODE_55546ef6a647f39b]);
          }

          jdouble SubFrame3::getLowercaseOmega() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLowercaseOmega_b74f83833fdad017]);
          }

          jdouble SubFrame3::getOmegaDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOmegaDot_b74f83833fdad017]);
          }

          jdouble SubFrame3::getUppercaseOmega0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getUppercaseOmega0_b74f83833fdad017]);
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
          static PyObject *t_SubFrame3_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame3_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame3_getCic(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getCis(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getCrc(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getI0(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getIDot(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getIODE(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getLowercaseOmega(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getOmegaDot(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getUppercaseOmega0(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_get__cic(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__cis(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__crc(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__i0(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__iDot(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__iODE(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__lowercaseOmega(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__omegaDot(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__uppercaseOmega0(t_SubFrame3 *self, void *data);
          static PyGetSetDef t_SubFrame3__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame3, cic),
            DECLARE_GET_FIELD(t_SubFrame3, cis),
            DECLARE_GET_FIELD(t_SubFrame3, crc),
            DECLARE_GET_FIELD(t_SubFrame3, i0),
            DECLARE_GET_FIELD(t_SubFrame3, iDot),
            DECLARE_GET_FIELD(t_SubFrame3, iODE),
            DECLARE_GET_FIELD(t_SubFrame3, lowercaseOmega),
            DECLARE_GET_FIELD(t_SubFrame3, omegaDot),
            DECLARE_GET_FIELD(t_SubFrame3, uppercaseOmega0),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame3__methods_[] = {
            DECLARE_METHOD(t_SubFrame3, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame3, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame3, getCic, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getCis, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getCrc, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getI0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getIDot, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getIODE, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getLowercaseOmega, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getOmegaDot, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getUppercaseOmega0, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame3)[] = {
            { Py_tp_methods, t_SubFrame3__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame3__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame3)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame),
            NULL
          };

          DEFINE_TYPE(SubFrame3, t_SubFrame3, SubFrame3);

          void t_SubFrame3::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame3), &PY_TYPE_DEF(SubFrame3), module, "SubFrame3", 0);
          }

          void t_SubFrame3::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame3), "class_", make_descriptor(SubFrame3::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame3), "wrapfn_", make_descriptor(t_SubFrame3::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame3), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame3_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame3::initializeClass, 1)))
              return NULL;
            return t_SubFrame3::wrap_Object(SubFrame3(((t_SubFrame3 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame3_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame3::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame3_getCic(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCic());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getCis(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCis());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getCrc(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCrc());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getI0(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getI0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getIDot(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getIDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getIODE(t_SubFrame3 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getIODE());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame3_getLowercaseOmega(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLowercaseOmega());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getOmegaDot(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOmegaDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getUppercaseOmega0(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getUppercaseOmega0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_get__cic(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCic());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__cis(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCis());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__crc(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCrc());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__i0(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getI0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__iDot(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getIDot());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__iODE(t_SubFrame3 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getIODE());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame3_get__lowercaseOmega(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLowercaseOmega());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__omegaDot(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOmegaDot());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__uppercaseOmega0(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getUppercaseOmega0());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/FieldRombergIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *FieldRombergIntegrator::class$ = NULL;
        jmethodID *FieldRombergIntegrator::mids$ = NULL;
        bool FieldRombergIntegrator::live$ = false;
        jint FieldRombergIntegrator::ROMBERG_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass FieldRombergIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/FieldRombergIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_02ab84aa7626616d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
            mids$[mid_init$_b6c946d1cbf160f0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
            mids$[mid_init$_287374284b786369] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDII)V");
            mids$[mid_doIntegrate_81520b552cb3fa26] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ROMBERG_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "ROMBERG_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldRombergIntegrator::FieldRombergIntegrator(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_02ab84aa7626616d, a0.this$)) {}

        FieldRombergIntegrator::FieldRombergIntegrator(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b6c946d1cbf160f0, a0.this$, a1, a2)) {}

        FieldRombergIntegrator::FieldRombergIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jint a3, jint a4) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_287374284b786369, a0.this$, a1, a2, a3, a4)) {}
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
        static PyObject *t_FieldRombergIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldRombergIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldRombergIntegrator_of_(t_FieldRombergIntegrator *self, PyObject *args);
        static int t_FieldRombergIntegrator_init_(t_FieldRombergIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldRombergIntegrator_get__parameters_(t_FieldRombergIntegrator *self, void *data);
        static PyGetSetDef t_FieldRombergIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldRombergIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldRombergIntegrator__methods_[] = {
          DECLARE_METHOD(t_FieldRombergIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldRombergIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldRombergIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldRombergIntegrator)[] = {
          { Py_tp_methods, t_FieldRombergIntegrator__methods_ },
          { Py_tp_init, (void *) t_FieldRombergIntegrator_init_ },
          { Py_tp_getset, t_FieldRombergIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldRombergIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(FieldRombergIntegrator, t_FieldRombergIntegrator, FieldRombergIntegrator);
        PyObject *t_FieldRombergIntegrator::wrap_Object(const FieldRombergIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldRombergIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldRombergIntegrator *self = (t_FieldRombergIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldRombergIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldRombergIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldRombergIntegrator *self = (t_FieldRombergIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldRombergIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldRombergIntegrator), &PY_TYPE_DEF(FieldRombergIntegrator), module, "FieldRombergIntegrator", 0);
        }

        void t_FieldRombergIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRombergIntegrator), "class_", make_descriptor(FieldRombergIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRombergIntegrator), "wrapfn_", make_descriptor(t_FieldRombergIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRombergIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldRombergIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRombergIntegrator), "ROMBERG_MAX_ITERATIONS_COUNT", make_descriptor(FieldRombergIntegrator::ROMBERG_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_FieldRombergIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldRombergIntegrator::initializeClass, 1)))
            return NULL;
          return t_FieldRombergIntegrator::wrap_Object(FieldRombergIntegrator(((t_FieldRombergIntegrator *) arg)->object.this$));
        }
        static PyObject *t_FieldRombergIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldRombergIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldRombergIntegrator_of_(t_FieldRombergIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldRombergIntegrator_init_(t_FieldRombergIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              FieldRombergIntegrator object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldRombergIntegrator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              FieldRombergIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldRombergIntegrator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              FieldRombergIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = FieldRombergIntegrator(a0, a1, a2, a3, a4));
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
        static PyObject *t_FieldRombergIntegrator_get__parameters_(t_FieldRombergIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PolynomialParser.h"
#include "java/lang/String.h"
#include "org/orekit/data/PolynomialParser$Unit.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PolynomialParser::class$ = NULL;
      jmethodID *PolynomialParser::mids$ = NULL;
      bool PolynomialParser::live$ = false;

      jclass PolynomialParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PolynomialParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_48e99696d5a641bb] = env->getMethodID(cls, "<init>", "(CLorg/orekit/data/PolynomialParser$Unit;)V");
          mids$[mid_parse_1d7f5d54f6c58f85] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PolynomialParser::PolynomialParser(jchar a0, const ::org::orekit::data::PolynomialParser$Unit & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_48e99696d5a641bb, a0, a1.this$)) {}

      JArray< jdouble > PolynomialParser::parse(const ::java::lang::String & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_parse_1d7f5d54f6c58f85], a0.this$));
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
      static PyObject *t_PolynomialParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialParser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PolynomialParser_init_(t_PolynomialParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PolynomialParser_parse(t_PolynomialParser *self, PyObject *arg);

      static PyMethodDef t_PolynomialParser__methods_[] = {
        DECLARE_METHOD(t_PolynomialParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialParser, parse, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PolynomialParser)[] = {
        { Py_tp_methods, t_PolynomialParser__methods_ },
        { Py_tp_init, (void *) t_PolynomialParser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PolynomialParser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PolynomialParser, t_PolynomialParser, PolynomialParser);

      void t_PolynomialParser::install(PyObject *module)
      {
        installType(&PY_TYPE(PolynomialParser), &PY_TYPE_DEF(PolynomialParser), module, "PolynomialParser", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser), "Unit", make_descriptor(&PY_TYPE_DEF(PolynomialParser$Unit)));
      }

      void t_PolynomialParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser), "class_", make_descriptor(PolynomialParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser), "wrapfn_", make_descriptor(t_PolynomialParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PolynomialParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PolynomialParser::initializeClass, 1)))
          return NULL;
        return t_PolynomialParser::wrap_Object(PolynomialParser(((t_PolynomialParser *) arg)->object.this$));
      }
      static PyObject *t_PolynomialParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PolynomialParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PolynomialParser_init_(t_PolynomialParser *self, PyObject *args, PyObject *kwds)
      {
        jchar a0;
        ::org::orekit::data::PolynomialParser$Unit a1((jobject) NULL);
        PyTypeObject **p1;
        PolynomialParser object((jobject) NULL);

        if (!parseArgs(args, "CK", ::org::orekit::data::PolynomialParser$Unit::initializeClass, &a0, &a1, &p1, ::org::orekit::data::t_PolynomialParser$Unit::parameters_))
        {
          INT_CALL(object = PolynomialParser(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_PolynomialParser_parse(t_PolynomialParser *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.parse(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "parse", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovariance.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ordering.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitCovariance::class$ = NULL;
              jmethodID *OrbitCovariance::mids$ = NULL;
              bool OrbitCovariance::live$ = false;

              jclass OrbitCovariance::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovariance");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_daa48da918bb1262] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;Lorg/orekit/time/AbsoluteDate;[Ljava/lang/String;I)V");
                  mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getMatrix_f77d745f2128c391] = env->getMethodID(cls, "getMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_getType_4eb559a63ad8d46d] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitCovariance::OrbitCovariance(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering & a1, const ::org::orekit::time::AbsoluteDate & a2, const JArray< ::java::lang::String > & a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_daa48da918bb1262, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              ::org::orekit::time::AbsoluteDate OrbitCovariance::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
              }

              ::org::hipparchus::linear::RealMatrix OrbitCovariance::getMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getMatrix_f77d745f2128c391]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType OrbitCovariance::getType() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType(env->callObjectMethod(this$, mids$[mid_getType_4eb559a63ad8d46d]));
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
              static PyObject *t_OrbitCovariance_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCovariance_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitCovariance_init_(t_OrbitCovariance *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitCovariance_getDate(t_OrbitCovariance *self);
              static PyObject *t_OrbitCovariance_getMatrix(t_OrbitCovariance *self);
              static PyObject *t_OrbitCovariance_getType(t_OrbitCovariance *self);
              static PyObject *t_OrbitCovariance_get__date(t_OrbitCovariance *self, void *data);
              static PyObject *t_OrbitCovariance_get__matrix(t_OrbitCovariance *self, void *data);
              static PyObject *t_OrbitCovariance_get__type(t_OrbitCovariance *self, void *data);
              static PyGetSetDef t_OrbitCovariance__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitCovariance, date),
                DECLARE_GET_FIELD(t_OrbitCovariance, matrix),
                DECLARE_GET_FIELD(t_OrbitCovariance, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitCovariance__methods_[] = {
                DECLARE_METHOD(t_OrbitCovariance, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovariance, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovariance, getDate, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovariance, getMatrix, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovariance, getType, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitCovariance)[] = {
                { Py_tp_methods, t_OrbitCovariance__methods_ },
                { Py_tp_init, (void *) t_OrbitCovariance_init_ },
                { Py_tp_getset, t_OrbitCovariance__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitCovariance)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OrbitCovariance, t_OrbitCovariance, OrbitCovariance);

              void t_OrbitCovariance::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitCovariance), &PY_TYPE_DEF(OrbitCovariance), module, "OrbitCovariance", 0);
              }

              void t_OrbitCovariance::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovariance), "class_", make_descriptor(OrbitCovariance::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovariance), "wrapfn_", make_descriptor(t_OrbitCovariance::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovariance), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitCovariance_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitCovariance::initializeClass, 1)))
                  return NULL;
                return t_OrbitCovariance::wrap_Object(OrbitCovariance(((t_OrbitCovariance *) arg)->object.this$));
              }
              static PyObject *t_OrbitCovariance_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitCovariance::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitCovariance_init_(t_OrbitCovariance *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< ::java::lang::String > a3((jobject) NULL);
                jint a4;
                OrbitCovariance object((jobject) NULL);

                if (!parseArgs(args, "KKk[sI", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::parameters_, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::ocm::t_Ordering::parameters_, &a2, &a3, &a4))
                {
                  INT_CALL(object = OrbitCovariance(a0, a1, a2, a3, a4));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitCovariance_getDate(t_OrbitCovariance *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitCovariance_getMatrix(t_OrbitCovariance *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.getMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_OrbitCovariance_getType(t_OrbitCovariance *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(result);
              }

              static PyObject *t_OrbitCovariance_get__date(t_OrbitCovariance *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_OrbitCovariance_get__matrix(t_OrbitCovariance *self, void *data)
              {
                ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
                OBJ_CALL(value = self->object.getMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
              }

              static PyObject *t_OrbitCovariance_get__type(t_OrbitCovariance *self, void *data)
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
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *GravityFields::class$ = NULL;
          jmethodID *GravityFields::mids$ = NULL;
          bool GravityFields::live$ = false;

          jclass GravityFields::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/GravityFields");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getConstantNormalizedProvider_405c10e81094d951] = env->getMethodID(cls, "getConstantNormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getConstantUnnormalizedProvider_3d381fbe1e441e33] = env->getMethodID(cls, "getConstantUnnormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getNormalizedProvider_a686ea82e96d2c01] = env->getMethodID(cls, "getNormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getOceanTidesWaves_39b43a702bd6611c] = env->getMethodID(cls, "getOceanTidesWaves", "(II)Ljava/util/List;");
              mids$[mid_getUnnormalizedProvider_fbbe2c197b102dc9] = env->getMethodID(cls, "getUnnormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFields::getConstantNormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getConstantNormalizedProvider_405c10e81094d951], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFields::getConstantUnnormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getConstantUnnormalizedProvider_3d381fbe1e441e33], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFields::getNormalizedProvider(jint a0, jint a1) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getNormalizedProvider_a686ea82e96d2c01], a0, a1));
          }

          ::java::util::List GravityFields::getOceanTidesWaves(jint a0, jint a1) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getOceanTidesWaves_39b43a702bd6611c], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFields::getUnnormalizedProvider(jint a0, jint a1) const
          {
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getUnnormalizedProvider_fbbe2c197b102dc9], a0, a1));
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
          static PyObject *t_GravityFields_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFields_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFields_getConstantNormalizedProvider(t_GravityFields *self, PyObject *args);
          static PyObject *t_GravityFields_getConstantUnnormalizedProvider(t_GravityFields *self, PyObject *args);
          static PyObject *t_GravityFields_getNormalizedProvider(t_GravityFields *self, PyObject *args);
          static PyObject *t_GravityFields_getOceanTidesWaves(t_GravityFields *self, PyObject *args);
          static PyObject *t_GravityFields_getUnnormalizedProvider(t_GravityFields *self, PyObject *args);

          static PyMethodDef t_GravityFields__methods_[] = {
            DECLARE_METHOD(t_GravityFields, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFields, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFields, getConstantNormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_GravityFields, getConstantUnnormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_GravityFields, getNormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_GravityFields, getOceanTidesWaves, METH_VARARGS),
            DECLARE_METHOD(t_GravityFields, getUnnormalizedProvider, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GravityFields)[] = {
            { Py_tp_methods, t_GravityFields__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GravityFields)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GravityFields, t_GravityFields, GravityFields);

          void t_GravityFields::install(PyObject *module)
          {
            installType(&PY_TYPE(GravityFields), &PY_TYPE_DEF(GravityFields), module, "GravityFields", 0);
          }

          void t_GravityFields::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFields), "class_", make_descriptor(GravityFields::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFields), "wrapfn_", make_descriptor(t_GravityFields::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFields), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GravityFields_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GravityFields::initializeClass, 1)))
              return NULL;
            return t_GravityFields::wrap_Object(GravityFields(((t_GravityFields *) arg)->object.this$));
          }
          static PyObject *t_GravityFields_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GravityFields::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GravityFields_getConstantNormalizedProvider(t_GravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "IIk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getConstantNormalizedProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getConstantNormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFields_getConstantUnnormalizedProvider(t_GravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "IIk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getConstantUnnormalizedProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getConstantUnnormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFields_getNormalizedProvider(t_GravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getNormalizedProvider(a0, a1));
              return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getNormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFields_getOceanTidesWaves(t_GravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getOceanTidesWaves(a0, a1));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::gravity::potential::PY_TYPE(OceanTidesWave));
            }

            PyErr_SetArgsError((PyObject *) self, "getOceanTidesWaves", args);
            return NULL;
          }

          static PyObject *t_GravityFields_getUnnormalizedProvider(t_GravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getUnnormalizedProvider(a0, a1));
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getUnnormalizedProvider", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/ComplexUtils.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *ComplexUtils::class$ = NULL;
      jmethodID *ComplexUtils::mids$ = NULL;
      bool ComplexUtils::live$ = false;

      jclass ComplexUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/ComplexUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_convertToComplex_2f4b3c5496c08829] = env->getStaticMethodID(cls, "convertToComplex", "([D)[Lorg/hipparchus/complex/Complex;");
          mids$[mid_polar2Complex_f8506c9007df888f] = env->getStaticMethodID(cls, "polar2Complex", "(DD)Lorg/hipparchus/complex/Complex;");
          mids$[mid_polar2Complex_6c42f6363408fc6a] = env->getStaticMethodID(cls, "polar2Complex", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexUtils::convertToComplex(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::org::hipparchus::complex::Complex >(env->callStaticObjectMethod(cls, mids$[mid_convertToComplex_2f4b3c5496c08829], a0.this$));
      }

      ::org::hipparchus::complex::Complex ComplexUtils::polar2Complex(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_polar2Complex_f8506c9007df888f], a0, a1));
      }

      ::org::hipparchus::complex::FieldComplex ComplexUtils::polar2Complex(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_polar2Complex_6c42f6363408fc6a], a0.this$, a1.this$));
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
      static PyObject *t_ComplexUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexUtils_convertToComplex(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexUtils_polar2Complex(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_ComplexUtils__methods_[] = {
        DECLARE_METHOD(t_ComplexUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexUtils, convertToComplex, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexUtils, polar2Complex, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexUtils)[] = {
        { Py_tp_methods, t_ComplexUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexUtils, t_ComplexUtils, ComplexUtils);

      void t_ComplexUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexUtils), &PY_TYPE_DEF(ComplexUtils), module, "ComplexUtils", 0);
      }

      void t_ComplexUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUtils), "class_", make_descriptor(ComplexUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUtils), "wrapfn_", make_descriptor(t_ComplexUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUtils), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexUtils::initializeClass, 1)))
          return NULL;
        return t_ComplexUtils::wrap_Object(ComplexUtils(((t_ComplexUtils *) arg)->object.this$));
      }
      static PyObject *t_ComplexUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ComplexUtils_convertToComplex(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::ComplexUtils::convertToComplex(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
        }

        PyErr_SetArgsError(type, "convertToComplex", arg);
        return NULL;
      }

      static PyObject *t_ComplexUtils_polar2Complex(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            ::org::hipparchus::complex::Complex result((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::ComplexUtils::polar2Complex(a0, a1));
              return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::ComplexUtils::polar2Complex(a0, a1));
              return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "polar2Complex", args);
        return NULL;
      }
    }
  }
}

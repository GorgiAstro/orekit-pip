#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/SimpleExponentialAtmosphere.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *SimpleExponentialAtmosphere::class$ = NULL;
          jmethodID *SimpleExponentialAtmosphere::mids$ = NULL;
          bool SimpleExponentialAtmosphere::live$ = false;

          jclass SimpleExponentialAtmosphere::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/SimpleExponentialAtmosphere");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6e0ec85ad512ea5d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/BodyShape;DDD)V");
              mids$[mid_getDensity_57dd506d2d9ba196] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getDensity_818999d9e7960fd1] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SimpleExponentialAtmosphere::SimpleExponentialAtmosphere(const ::org::orekit::bodies::BodyShape & a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6e0ec85ad512ea5d, a0.this$, a1, a2, a3)) {}

          jdouble SimpleExponentialAtmosphere::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_57dd506d2d9ba196], a0.this$, a1.this$, a2.this$);
          }

          ::org::hipparchus::CalculusFieldElement SimpleExponentialAtmosphere::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_818999d9e7960fd1], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::frames::Frame SimpleExponentialAtmosphere::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
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
          static PyObject *t_SimpleExponentialAtmosphere_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SimpleExponentialAtmosphere_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SimpleExponentialAtmosphere_init_(t_SimpleExponentialAtmosphere *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SimpleExponentialAtmosphere_getDensity(t_SimpleExponentialAtmosphere *self, PyObject *args);
          static PyObject *t_SimpleExponentialAtmosphere_getFrame(t_SimpleExponentialAtmosphere *self);
          static PyObject *t_SimpleExponentialAtmosphere_get__frame(t_SimpleExponentialAtmosphere *self, void *data);
          static PyGetSetDef t_SimpleExponentialAtmosphere__fields_[] = {
            DECLARE_GET_FIELD(t_SimpleExponentialAtmosphere, frame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SimpleExponentialAtmosphere__methods_[] = {
            DECLARE_METHOD(t_SimpleExponentialAtmosphere, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SimpleExponentialAtmosphere, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SimpleExponentialAtmosphere, getDensity, METH_VARARGS),
            DECLARE_METHOD(t_SimpleExponentialAtmosphere, getFrame, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SimpleExponentialAtmosphere)[] = {
            { Py_tp_methods, t_SimpleExponentialAtmosphere__methods_ },
            { Py_tp_init, (void *) t_SimpleExponentialAtmosphere_init_ },
            { Py_tp_getset, t_SimpleExponentialAtmosphere__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SimpleExponentialAtmosphere)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SimpleExponentialAtmosphere, t_SimpleExponentialAtmosphere, SimpleExponentialAtmosphere);

          void t_SimpleExponentialAtmosphere::install(PyObject *module)
          {
            installType(&PY_TYPE(SimpleExponentialAtmosphere), &PY_TYPE_DEF(SimpleExponentialAtmosphere), module, "SimpleExponentialAtmosphere", 0);
          }

          void t_SimpleExponentialAtmosphere::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleExponentialAtmosphere), "class_", make_descriptor(SimpleExponentialAtmosphere::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleExponentialAtmosphere), "wrapfn_", make_descriptor(t_SimpleExponentialAtmosphere::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleExponentialAtmosphere), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SimpleExponentialAtmosphere_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SimpleExponentialAtmosphere::initializeClass, 1)))
              return NULL;
            return t_SimpleExponentialAtmosphere::wrap_Object(SimpleExponentialAtmosphere(((t_SimpleExponentialAtmosphere *) arg)->object.this$));
          }
          static PyObject *t_SimpleExponentialAtmosphere_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SimpleExponentialAtmosphere::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SimpleExponentialAtmosphere_init_(t_SimpleExponentialAtmosphere *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::BodyShape a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            jdouble a3;
            SimpleExponentialAtmosphere object((jobject) NULL);

            if (!parseArgs(args, "kDDD", ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = SimpleExponentialAtmosphere(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SimpleExponentialAtmosphere_getDensity(t_SimpleExponentialAtmosphere *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::orekit::frames::Frame a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", args);
            return NULL;
          }

          static PyObject *t_SimpleExponentialAtmosphere_getFrame(t_SimpleExponentialAtmosphere *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_SimpleExponentialAtmosphere_get__frame(t_SimpleExponentialAtmosphere *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sinex/SinexLoader.h"
#include "org/orekit/files/sinex/DcbSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/data/DataSource.h"
#include "java/util/SortedSet.h"
#include "org/orekit/files/sinex/Station.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/sinex/SinexEopEntry.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/EOPEntry.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "org/orekit/files/sinex/DcbStation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *SinexLoader::class$ = NULL;
        jmethodID *SinexLoader::mids$ = NULL;
        bool SinexLoader::live$ = false;

        jclass SinexLoader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/SinexLoader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_init$_562a84d0b1d0d772] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;)V");
            mids$[mid_init$_34c18f1fe190c73a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/time/TimeScales;)V");
            mids$[mid_init$_f930d4f5e3f73cb2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScales;)V");
            mids$[mid_fillHistory_dc8806c52abe2b9d] = env->getMethodID(cls, "fillHistory", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Ljava/util/SortedSet;)V");
            mids$[mid_getCreationDate_7a97f7e149e79afb] = env->getMethodID(cls, "getCreationDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDcbSatellite_fa842dcb3ed5687b] = env->getMethodID(cls, "getDcbSatellite", "(Ljava/lang/String;)Lorg/orekit/files/sinex/DcbSatellite;");
            mids$[mid_getDcbStation_fb9454879306a98e] = env->getMethodID(cls, "getDcbStation", "(Ljava/lang/String;)Lorg/orekit/files/sinex/DcbStation;");
            mids$[mid_getFileEpochEndTime_7a97f7e149e79afb] = env->getMethodID(cls, "getFileEpochEndTime", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getFileEpochStartTime_7a97f7e149e79afb] = env->getMethodID(cls, "getFileEpochStartTime", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getITRFVersion_b311296551ce8af2] = env->getMethodID(cls, "getITRFVersion", "()Lorg/orekit/frames/ITRFVersion;");
            mids$[mid_getParsedEop_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getParsedEop", "()Ljava/util/Map;");
            mids$[mid_getStation_beceb8c30b4a6974] = env->getMethodID(cls, "getStation", "(Ljava/lang/String;)Lorg/orekit/files/sinex/Station;");
            mids$[mid_getStations_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getStations", "()Ljava/util/Map;");
            mids$[mid_setITRFVersion_a3da1a935cb37f7b] = env->getMethodID(cls, "setITRFVersion", "(I)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SinexLoader::SinexLoader(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

        SinexLoader::SinexLoader(const ::org::orekit::data::DataSource & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_562a84d0b1d0d772, a0.this$)) {}

        SinexLoader::SinexLoader(const ::org::orekit::data::DataSource & a0, const ::org::orekit::time::TimeScales & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_34c18f1fe190c73a, a0.this$, a1.this$)) {}

        SinexLoader::SinexLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScales & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f930d4f5e3f73cb2, a0.this$, a1.this$, a2.this$)) {}

        void SinexLoader::fillHistory(const ::org::orekit::utils::IERSConventions$NutationCorrectionConverter & a0, const ::java::util::SortedSet & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_fillHistory_dc8806c52abe2b9d], a0.this$, a1.this$);
        }

        ::org::orekit::time::AbsoluteDate SinexLoader::getCreationDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCreationDate_7a97f7e149e79afb]));
        }

        ::org::orekit::files::sinex::DcbSatellite SinexLoader::getDcbSatellite(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::sinex::DcbSatellite(env->callObjectMethod(this$, mids$[mid_getDcbSatellite_fa842dcb3ed5687b], a0.this$));
        }

        ::org::orekit::files::sinex::DcbStation SinexLoader::getDcbStation(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::sinex::DcbStation(env->callObjectMethod(this$, mids$[mid_getDcbStation_fb9454879306a98e], a0.this$));
        }

        ::org::orekit::time::AbsoluteDate SinexLoader::getFileEpochEndTime() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFileEpochEndTime_7a97f7e149e79afb]));
        }

        ::org::orekit::time::AbsoluteDate SinexLoader::getFileEpochStartTime() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFileEpochStartTime_7a97f7e149e79afb]));
        }

        ::org::orekit::frames::ITRFVersion SinexLoader::getITRFVersion() const
        {
          return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getITRFVersion_b311296551ce8af2]));
        }

        ::java::util::Map SinexLoader::getParsedEop() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getParsedEop_1e62c2f73fbdd1c4]));
        }

        ::org::orekit::files::sinex::Station SinexLoader::getStation(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::sinex::Station(env->callObjectMethod(this$, mids$[mid_getStation_beceb8c30b4a6974], a0.this$));
        }

        ::java::util::Map SinexLoader::getStations() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getStations_1e62c2f73fbdd1c4]));
        }

        void SinexLoader::setITRFVersion(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setITRFVersion_a3da1a935cb37f7b], a0);
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
        static PyObject *t_SinexLoader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SinexLoader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SinexLoader_init_(t_SinexLoader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SinexLoader_fillHistory(t_SinexLoader *self, PyObject *args);
        static PyObject *t_SinexLoader_getCreationDate(t_SinexLoader *self);
        static PyObject *t_SinexLoader_getDcbSatellite(t_SinexLoader *self, PyObject *arg);
        static PyObject *t_SinexLoader_getDcbStation(t_SinexLoader *self, PyObject *arg);
        static PyObject *t_SinexLoader_getFileEpochEndTime(t_SinexLoader *self);
        static PyObject *t_SinexLoader_getFileEpochStartTime(t_SinexLoader *self);
        static PyObject *t_SinexLoader_getITRFVersion(t_SinexLoader *self);
        static PyObject *t_SinexLoader_getParsedEop(t_SinexLoader *self);
        static PyObject *t_SinexLoader_getStation(t_SinexLoader *self, PyObject *arg);
        static PyObject *t_SinexLoader_getStations(t_SinexLoader *self);
        static PyObject *t_SinexLoader_setITRFVersion(t_SinexLoader *self, PyObject *arg);
        static PyObject *t_SinexLoader_get__creationDate(t_SinexLoader *self, void *data);
        static PyObject *t_SinexLoader_get__fileEpochEndTime(t_SinexLoader *self, void *data);
        static PyObject *t_SinexLoader_get__fileEpochStartTime(t_SinexLoader *self, void *data);
        static PyObject *t_SinexLoader_get__iTRFVersion(t_SinexLoader *self, void *data);
        static int t_SinexLoader_set__iTRFVersion(t_SinexLoader *self, PyObject *arg, void *data);
        static PyObject *t_SinexLoader_get__parsedEop(t_SinexLoader *self, void *data);
        static PyObject *t_SinexLoader_get__stations(t_SinexLoader *self, void *data);
        static PyGetSetDef t_SinexLoader__fields_[] = {
          DECLARE_GET_FIELD(t_SinexLoader, creationDate),
          DECLARE_GET_FIELD(t_SinexLoader, fileEpochEndTime),
          DECLARE_GET_FIELD(t_SinexLoader, fileEpochStartTime),
          DECLARE_GETSET_FIELD(t_SinexLoader, iTRFVersion),
          DECLARE_GET_FIELD(t_SinexLoader, parsedEop),
          DECLARE_GET_FIELD(t_SinexLoader, stations),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SinexLoader__methods_[] = {
          DECLARE_METHOD(t_SinexLoader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SinexLoader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SinexLoader, fillHistory, METH_VARARGS),
          DECLARE_METHOD(t_SinexLoader, getCreationDate, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, getDcbSatellite, METH_O),
          DECLARE_METHOD(t_SinexLoader, getDcbStation, METH_O),
          DECLARE_METHOD(t_SinexLoader, getFileEpochEndTime, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, getFileEpochStartTime, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, getITRFVersion, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, getParsedEop, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, getStation, METH_O),
          DECLARE_METHOD(t_SinexLoader, getStations, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, setITRFVersion, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SinexLoader)[] = {
          { Py_tp_methods, t_SinexLoader__methods_ },
          { Py_tp_init, (void *) t_SinexLoader_init_ },
          { Py_tp_getset, t_SinexLoader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SinexLoader)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SinexLoader, t_SinexLoader, SinexLoader);

        void t_SinexLoader::install(PyObject *module)
        {
          installType(&PY_TYPE(SinexLoader), &PY_TYPE_DEF(SinexLoader), module, "SinexLoader", 0);
        }

        void t_SinexLoader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexLoader), "class_", make_descriptor(SinexLoader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexLoader), "wrapfn_", make_descriptor(t_SinexLoader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexLoader), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SinexLoader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SinexLoader::initializeClass, 1)))
            return NULL;
          return t_SinexLoader::wrap_Object(SinexLoader(((t_SinexLoader *) arg)->object.this$));
        }
        static PyObject *t_SinexLoader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SinexLoader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SinexLoader_init_(t_SinexLoader *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              SinexLoader object((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                INT_CALL(object = SinexLoader(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              SinexLoader object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                INT_CALL(object = SinexLoader(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              ::org::orekit::time::TimeScales a1((jobject) NULL);
              SinexLoader object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
              {
                INT_CALL(object = SinexLoader(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
              ::org::orekit::time::TimeScales a2((jobject) NULL);
              SinexLoader object((jobject) NULL);

              if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = SinexLoader(a0, a1, a2));
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

        static PyObject *t_SinexLoader_fillHistory(t_SinexLoader *self, PyObject *args)
        {
          ::org::orekit::utils::IERSConventions$NutationCorrectionConverter a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::SortedSet a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::orekit::utils::IERSConventions$NutationCorrectionConverter::initializeClass, ::java::util::SortedSet::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::parameters_, &a1, &p1, ::java::util::t_SortedSet::parameters_))
          {
            OBJ_CALL(self->object.fillHistory(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "fillHistory", args);
          return NULL;
        }

        static PyObject *t_SinexLoader_getCreationDate(t_SinexLoader *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCreationDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SinexLoader_getDcbSatellite(t_SinexLoader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::sinex::DcbSatellite result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getDcbSatellite(a0));
            return ::org::orekit::files::sinex::t_DcbSatellite::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDcbSatellite", arg);
          return NULL;
        }

        static PyObject *t_SinexLoader_getDcbStation(t_SinexLoader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::sinex::DcbStation result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getDcbStation(a0));
            return ::org::orekit::files::sinex::t_DcbStation::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDcbStation", arg);
          return NULL;
        }

        static PyObject *t_SinexLoader_getFileEpochEndTime(t_SinexLoader *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getFileEpochEndTime());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SinexLoader_getFileEpochStartTime(t_SinexLoader *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getFileEpochStartTime());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SinexLoader_getITRFVersion(t_SinexLoader *self)
        {
          ::org::orekit::frames::ITRFVersion result((jobject) NULL);
          OBJ_CALL(result = self->object.getITRFVersion());
          return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
        }

        static PyObject *t_SinexLoader_getParsedEop(t_SinexLoader *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getParsedEop());
          return ::java::util::t_Map::wrap_Object(result, ::org::orekit::time::PY_TYPE(AbsoluteDate), ::org::orekit::files::sinex::PY_TYPE(SinexEopEntry));
        }

        static PyObject *t_SinexLoader_getStation(t_SinexLoader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::sinex::Station result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getStation(a0));
            return ::org::orekit::files::sinex::t_Station::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getStation", arg);
          return NULL;
        }

        static PyObject *t_SinexLoader_getStations(t_SinexLoader *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getStations());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::sinex::PY_TYPE(Station));
        }

        static PyObject *t_SinexLoader_setITRFVersion(t_SinexLoader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setITRFVersion(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setITRFVersion", arg);
          return NULL;
        }

        static PyObject *t_SinexLoader_get__creationDate(t_SinexLoader *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCreationDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SinexLoader_get__fileEpochEndTime(t_SinexLoader *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getFileEpochEndTime());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SinexLoader_get__fileEpochStartTime(t_SinexLoader *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getFileEpochStartTime());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SinexLoader_get__iTRFVersion(t_SinexLoader *self, void *data)
        {
          ::org::orekit::frames::ITRFVersion value((jobject) NULL);
          OBJ_CALL(value = self->object.getITRFVersion());
          return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
        }
        static int t_SinexLoader_set__iTRFVersion(t_SinexLoader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setITRFVersion(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "iTRFVersion", arg);
          return -1;
        }

        static PyObject *t_SinexLoader_get__parsedEop(t_SinexLoader *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getParsedEop());
          return ::java::util::t_Map::wrap_Object(value);
        }

        static PyObject *t_SinexLoader_get__stations(t_SinexLoader *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getStations());
          return ::java::util::t_Map::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TCGScale.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
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
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_b0b988f941da47d8] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_b884068a2c99f6ca] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TCGScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      jdouble TCGScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_b0b988f941da47d8], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TCGScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_b884068a2c99f6ca], a0.this$));
      }

      ::java::lang::String TCGScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
#include "org/hipparchus/analysis/differentiation/FieldDerivative.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldDerivative::class$ = NULL;
        jmethodID *FieldDerivative::mids$ = NULL;
        bool FieldDerivative::live$ = false;

        jclass FieldDerivative::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldDerivative");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getFreeParameters_412668abc8d889e9] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getOrder_412668abc8d889e9] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_12d47fa54f2033ee] = env->getMethodID(cls, "getPartialDerivative", "([I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValue_613c8f46c659f636] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint FieldDerivative::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_412668abc8d889e9]);
        }

        jint FieldDerivative::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_412668abc8d889e9]);
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivative::getPartialDerivative(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPartialDerivative_12d47fa54f2033ee], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivative::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_613c8f46c659f636]));
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
        static PyObject *t_FieldDerivative_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDerivative_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDerivative_of_(t_FieldDerivative *self, PyObject *args);
        static PyObject *t_FieldDerivative_getFreeParameters(t_FieldDerivative *self);
        static PyObject *t_FieldDerivative_getOrder(t_FieldDerivative *self);
        static PyObject *t_FieldDerivative_getPartialDerivative(t_FieldDerivative *self, PyObject *arg);
        static PyObject *t_FieldDerivative_getValue(t_FieldDerivative *self);
        static PyObject *t_FieldDerivative_get__freeParameters(t_FieldDerivative *self, void *data);
        static PyObject *t_FieldDerivative_get__order(t_FieldDerivative *self, void *data);
        static PyObject *t_FieldDerivative_get__value(t_FieldDerivative *self, void *data);
        static PyObject *t_FieldDerivative_get__parameters_(t_FieldDerivative *self, void *data);
        static PyGetSetDef t_FieldDerivative__fields_[] = {
          DECLARE_GET_FIELD(t_FieldDerivative, freeParameters),
          DECLARE_GET_FIELD(t_FieldDerivative, order),
          DECLARE_GET_FIELD(t_FieldDerivative, value),
          DECLARE_GET_FIELD(t_FieldDerivative, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldDerivative__methods_[] = {
          DECLARE_METHOD(t_FieldDerivative, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivative, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivative, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivative, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivative, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivative, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_FieldDerivative, getValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldDerivative)[] = {
          { Py_tp_methods, t_FieldDerivative__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldDerivative__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldDerivative)[] = {
          &PY_TYPE_DEF(::org::hipparchus::CalculusFieldElement),
          NULL
        };

        DEFINE_TYPE(FieldDerivative, t_FieldDerivative, FieldDerivative);
        PyObject *t_FieldDerivative::wrap_Object(const FieldDerivative& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldDerivative::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDerivative *self = (t_FieldDerivative *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldDerivative::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldDerivative::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDerivative *self = (t_FieldDerivative *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldDerivative::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldDerivative), &PY_TYPE_DEF(FieldDerivative), module, "FieldDerivative", 0);
        }

        void t_FieldDerivative::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivative), "class_", make_descriptor(FieldDerivative::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivative), "wrapfn_", make_descriptor(t_FieldDerivative::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivative), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldDerivative_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldDerivative::initializeClass, 1)))
            return NULL;
          return t_FieldDerivative::wrap_Object(FieldDerivative(((t_FieldDerivative *) arg)->object.this$));
        }
        static PyObject *t_FieldDerivative_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldDerivative::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldDerivative_of_(t_FieldDerivative *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldDerivative_getFreeParameters(t_FieldDerivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldDerivative_getOrder(t_FieldDerivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldDerivative_getPartialDerivative(t_FieldDerivative *self, PyObject *arg)
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

        static PyObject *t_FieldDerivative_getValue(t_FieldDerivative *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }
        static PyObject *t_FieldDerivative_get__parameters_(t_FieldDerivative *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldDerivative_get__freeParameters(t_FieldDerivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldDerivative_get__order(t_FieldDerivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldDerivative_get__value(t_FieldDerivative *self, void *data)
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
#include "org/hipparchus/random/UniformRandomGenerator.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *UniformRandomGenerator::class$ = NULL;
      jmethodID *UniformRandomGenerator::mids$ = NULL;
      bool UniformRandomGenerator::live$ = false;

      jclass UniformRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/UniformRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_19e7f6e95a4dc08e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_nextNormalizedDouble_557b8123390d8d0c] = env->getMethodID(cls, "nextNormalizedDouble", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UniformRandomGenerator::UniformRandomGenerator(const ::org::hipparchus::random::RandomGenerator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_19e7f6e95a4dc08e, a0.this$)) {}

      jdouble UniformRandomGenerator::nextNormalizedDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextNormalizedDouble_557b8123390d8d0c]);
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
      static PyObject *t_UniformRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UniformRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UniformRandomGenerator_init_(t_UniformRandomGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UniformRandomGenerator_nextNormalizedDouble(t_UniformRandomGenerator *self);

      static PyMethodDef t_UniformRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_UniformRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UniformRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UniformRandomGenerator, nextNormalizedDouble, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UniformRandomGenerator)[] = {
        { Py_tp_methods, t_UniformRandomGenerator__methods_ },
        { Py_tp_init, (void *) t_UniformRandomGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UniformRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UniformRandomGenerator, t_UniformRandomGenerator, UniformRandomGenerator);

      void t_UniformRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(UniformRandomGenerator), &PY_TYPE_DEF(UniformRandomGenerator), module, "UniformRandomGenerator", 0);
      }

      void t_UniformRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UniformRandomGenerator), "class_", make_descriptor(UniformRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UniformRandomGenerator), "wrapfn_", make_descriptor(t_UniformRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UniformRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UniformRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UniformRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_UniformRandomGenerator::wrap_Object(UniformRandomGenerator(((t_UniformRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_UniformRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UniformRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UniformRandomGenerator_init_(t_UniformRandomGenerator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        UniformRandomGenerator object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          INT_CALL(object = UniformRandomGenerator(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_UniformRandomGenerator_nextNormalizedDouble(t_UniformRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextNormalizedDouble());
        return PyFloat_FromDouble((double) result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/ManeuverKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/ManeuverKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Maneuver.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {

              ::java::lang::Class *ManeuverKey::class$ = NULL;
              jmethodID *ManeuverKey::mids$ = NULL;
              bool ManeuverKey::live$ = false;
              ManeuverKey *ManeuverKey::COMMENT = NULL;
              ManeuverKey *ManeuverKey::MAN_DELTA_MASS = NULL;
              ManeuverKey *ManeuverKey::MAN_DURATION = NULL;
              ManeuverKey *ManeuverKey::MAN_DV_1 = NULL;
              ManeuverKey *ManeuverKey::MAN_DV_2 = NULL;
              ManeuverKey *ManeuverKey::MAN_DV_3 = NULL;
              ManeuverKey *ManeuverKey::MAN_EPOCH_IGNITION = NULL;
              ManeuverKey *ManeuverKey::MAN_REF_FRAME = NULL;

              jclass ManeuverKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/opm/ManeuverKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_1a6f50de2bd3c66a] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/opm/Maneuver;)Z");
                  mids$[mid_valueOf_7cbff2d59973e9b9] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;");
                  mids$[mid_values_43dd919dfd40e5d6] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new ManeuverKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_DELTA_MASS = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DELTA_MASS", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_DURATION = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DURATION", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_DV_1 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DV_1", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_DV_2 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DV_2", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_DV_3 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DV_3", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_EPOCH_IGNITION = new ManeuverKey(env->getStaticObjectField(cls, "MAN_EPOCH_IGNITION", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_REF_FRAME = new ManeuverKey(env->getStaticObjectField(cls, "MAN_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean ManeuverKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_1a6f50de2bd3c66a], a0.this$, a1.this$, a2.this$);
              }

              ManeuverKey ManeuverKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ManeuverKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7cbff2d59973e9b9], a0.this$));
              }

              JArray< ManeuverKey > ManeuverKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ManeuverKey >(env->callStaticObjectMethod(cls, mids$[mid_values_43dd919dfd40e5d6]));
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
            namespace opm {
              static PyObject *t_ManeuverKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverKey_of_(t_ManeuverKey *self, PyObject *args);
              static PyObject *t_ManeuverKey_process(t_ManeuverKey *self, PyObject *args);
              static PyObject *t_ManeuverKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ManeuverKey_values(PyTypeObject *type);
              static PyObject *t_ManeuverKey_get__parameters_(t_ManeuverKey *self, void *data);
              static PyGetSetDef t_ManeuverKey__fields_[] = {
                DECLARE_GET_FIELD(t_ManeuverKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ManeuverKey__methods_[] = {
                DECLARE_METHOD(t_ManeuverKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverKey, process, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ManeuverKey)[] = {
                { Py_tp_methods, t_ManeuverKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ManeuverKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ManeuverKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ManeuverKey, t_ManeuverKey, ManeuverKey);
              PyObject *t_ManeuverKey::wrap_Object(const ManeuverKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverKey *self = (t_ManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ManeuverKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverKey *self = (t_ManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ManeuverKey::install(PyObject *module)
              {
                installType(&PY_TYPE(ManeuverKey), &PY_TYPE_DEF(ManeuverKey), module, "ManeuverKey", 0);
              }

              void t_ManeuverKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "class_", make_descriptor(ManeuverKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "wrapfn_", make_descriptor(t_ManeuverKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(ManeuverKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "COMMENT", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DELTA_MASS", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DELTA_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DURATION", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DURATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DV_1", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DV_1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DV_2", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DV_2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DV_3", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DV_3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_EPOCH_IGNITION", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_EPOCH_IGNITION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_REF_FRAME", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_REF_FRAME)));
              }

              static PyObject *t_ManeuverKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ManeuverKey::initializeClass, 1)))
                  return NULL;
                return t_ManeuverKey::wrap_Object(ManeuverKey(((t_ManeuverKey *) arg)->object.this$));
              }
              static PyObject *t_ManeuverKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ManeuverKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ManeuverKey_of_(t_ManeuverKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ManeuverKey_process(t_ManeuverKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_ManeuverKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ManeuverKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::opm::ManeuverKey::valueOf(a0));
                  return t_ManeuverKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ManeuverKey_values(PyTypeObject *type)
              {
                JArray< ManeuverKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::opm::ManeuverKey::values());
                return JArray<jobject>(result.this$).wrap(t_ManeuverKey::wrap_jobject);
              }
              static PyObject *t_ManeuverKey_get__parameters_(t_ManeuverKey *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$LabeledDoubleConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$LabeledDoubleConsumer::class$ = NULL;
            jmethodID *ParseToken$LabeledDoubleConsumer::mids$ = NULL;
            bool ParseToken$LabeledDoubleConsumer::live$ = false;

            jclass ParseToken$LabeledDoubleConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$LabeledDoubleConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_b8c9c03aaef77ecf] = env->getMethodID(cls, "accept", "(CD)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$LabeledDoubleConsumer::accept(jchar a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_b8c9c03aaef77ecf], a0, a1);
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
            static PyObject *t_ParseToken$LabeledDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$LabeledDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$LabeledDoubleConsumer_accept(t_ParseToken$LabeledDoubleConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$LabeledDoubleConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$LabeledDoubleConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$LabeledDoubleConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$LabeledDoubleConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$LabeledDoubleConsumer)[] = {
              { Py_tp_methods, t_ParseToken$LabeledDoubleConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$LabeledDoubleConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$LabeledDoubleConsumer, t_ParseToken$LabeledDoubleConsumer, ParseToken$LabeledDoubleConsumer);

            void t_ParseToken$LabeledDoubleConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$LabeledDoubleConsumer), &PY_TYPE_DEF(ParseToken$LabeledDoubleConsumer), module, "ParseToken$LabeledDoubleConsumer", 0);
            }

            void t_ParseToken$LabeledDoubleConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$LabeledDoubleConsumer), "class_", make_descriptor(ParseToken$LabeledDoubleConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$LabeledDoubleConsumer), "wrapfn_", make_descriptor(t_ParseToken$LabeledDoubleConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$LabeledDoubleConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$LabeledDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$LabeledDoubleConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$LabeledDoubleConsumer::wrap_Object(ParseToken$LabeledDoubleConsumer(((t_ParseToken$LabeledDoubleConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$LabeledDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$LabeledDoubleConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$LabeledDoubleConsumer_accept(t_ParseToken$LabeledDoubleConsumer *self, PyObject *args)
            {
              jchar a0;
              jdouble a1;

              if (!parseArgs(args, "CD", &a0, &a1))
              {
                OBJ_CALL(self->object.accept(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", args);
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
#include "org/hipparchus/optim/nonlinear/scalar/GradientMultivariateOptimizer.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *GradientMultivariateOptimizer::class$ = NULL;
          jmethodID *GradientMultivariateOptimizer::mids$ = NULL;
          bool GradientMultivariateOptimizer::live$ = false;

          jclass GradientMultivariateOptimizer::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/GradientMultivariateOptimizer");

              mids$ = new jmethodID[max_mid];
              mids$[mid_optimize_428d2547a0c45016] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
              mids$[mid_parseOptimizationData_946a92401917c130] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
              mids$[mid_computeObjectiveGradient_1db7c087750eaffe] = env->getMethodID(cls, "computeObjectiveGradient", "([D)[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::optim::PointValuePair GradientMultivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
          {
            return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_428d2547a0c45016], a0.this$));
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
          static PyObject *t_GradientMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GradientMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GradientMultivariateOptimizer_of_(t_GradientMultivariateOptimizer *self, PyObject *args);
          static PyObject *t_GradientMultivariateOptimizer_optimize(t_GradientMultivariateOptimizer *self, PyObject *args);
          static PyObject *t_GradientMultivariateOptimizer_get__parameters_(t_GradientMultivariateOptimizer *self, void *data);
          static PyGetSetDef t_GradientMultivariateOptimizer__fields_[] = {
            DECLARE_GET_FIELD(t_GradientMultivariateOptimizer, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GradientMultivariateOptimizer__methods_[] = {
            DECLARE_METHOD(t_GradientMultivariateOptimizer, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GradientMultivariateOptimizer, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GradientMultivariateOptimizer, of_, METH_VARARGS),
            DECLARE_METHOD(t_GradientMultivariateOptimizer, optimize, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GradientMultivariateOptimizer)[] = {
            { Py_tp_methods, t_GradientMultivariateOptimizer__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_GradientMultivariateOptimizer__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GradientMultivariateOptimizer)[] = {
            &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer),
            NULL
          };

          DEFINE_TYPE(GradientMultivariateOptimizer, t_GradientMultivariateOptimizer, GradientMultivariateOptimizer);
          PyObject *t_GradientMultivariateOptimizer::wrap_Object(const GradientMultivariateOptimizer& object, PyTypeObject *p0)
          {
            PyObject *obj = t_GradientMultivariateOptimizer::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_GradientMultivariateOptimizer *self = (t_GradientMultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_GradientMultivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_GradientMultivariateOptimizer::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_GradientMultivariateOptimizer *self = (t_GradientMultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_GradientMultivariateOptimizer::install(PyObject *module)
          {
            installType(&PY_TYPE(GradientMultivariateOptimizer), &PY_TYPE_DEF(GradientMultivariateOptimizer), module, "GradientMultivariateOptimizer", 0);
          }

          void t_GradientMultivariateOptimizer::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GradientMultivariateOptimizer), "class_", make_descriptor(GradientMultivariateOptimizer::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GradientMultivariateOptimizer), "wrapfn_", make_descriptor(t_GradientMultivariateOptimizer::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GradientMultivariateOptimizer), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GradientMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GradientMultivariateOptimizer::initializeClass, 1)))
              return NULL;
            return t_GradientMultivariateOptimizer::wrap_Object(GradientMultivariateOptimizer(((t_GradientMultivariateOptimizer *) arg)->object.this$));
          }
          static PyObject *t_GradientMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GradientMultivariateOptimizer::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GradientMultivariateOptimizer_of_(t_GradientMultivariateOptimizer *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_GradientMultivariateOptimizer_optimize(t_GradientMultivariateOptimizer *self, PyObject *args)
          {
            JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
            ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.optimize(a0));
              return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
            }

            return callSuper(PY_TYPE(GradientMultivariateOptimizer), (PyObject *) self, "optimize", args, 2);
          }
          static PyObject *t_GradientMultivariateOptimizer_get__parameters_(t_GradientMultivariateOptimizer *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/EvaluationRmsChecker.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *EvaluationRmsChecker::class$ = NULL;
            jmethodID *EvaluationRmsChecker::mids$ = NULL;
            bool EvaluationRmsChecker::live$ = false;

            jclass EvaluationRmsChecker::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/EvaluationRmsChecker");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
                mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
                mids$[mid_converged_a1dcadd71f86feaa] = env->getMethodID(cls, "converged", "(ILorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            EvaluationRmsChecker::EvaluationRmsChecker(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

            EvaluationRmsChecker::EvaluationRmsChecker(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

            jboolean EvaluationRmsChecker::converged(jint a0, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a1, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_converged_a1dcadd71f86feaa], a0, a1.this$, a2.this$);
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
            static PyObject *t_EvaluationRmsChecker_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_EvaluationRmsChecker_instance_(PyTypeObject *type, PyObject *arg);
            static int t_EvaluationRmsChecker_init_(t_EvaluationRmsChecker *self, PyObject *args, PyObject *kwds);
            static PyObject *t_EvaluationRmsChecker_converged(t_EvaluationRmsChecker *self, PyObject *args);

            static PyMethodDef t_EvaluationRmsChecker__methods_[] = {
              DECLARE_METHOD(t_EvaluationRmsChecker, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_EvaluationRmsChecker, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_EvaluationRmsChecker, converged, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(EvaluationRmsChecker)[] = {
              { Py_tp_methods, t_EvaluationRmsChecker__methods_ },
              { Py_tp_init, (void *) t_EvaluationRmsChecker_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(EvaluationRmsChecker)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(EvaluationRmsChecker, t_EvaluationRmsChecker, EvaluationRmsChecker);

            void t_EvaluationRmsChecker::install(PyObject *module)
            {
              installType(&PY_TYPE(EvaluationRmsChecker), &PY_TYPE_DEF(EvaluationRmsChecker), module, "EvaluationRmsChecker", 0);
            }

            void t_EvaluationRmsChecker::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(EvaluationRmsChecker), "class_", make_descriptor(EvaluationRmsChecker::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(EvaluationRmsChecker), "wrapfn_", make_descriptor(t_EvaluationRmsChecker::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(EvaluationRmsChecker), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_EvaluationRmsChecker_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, EvaluationRmsChecker::initializeClass, 1)))
                return NULL;
              return t_EvaluationRmsChecker::wrap_Object(EvaluationRmsChecker(((t_EvaluationRmsChecker *) arg)->object.this$));
            }
            static PyObject *t_EvaluationRmsChecker_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, EvaluationRmsChecker::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_EvaluationRmsChecker_init_(t_EvaluationRmsChecker *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  jdouble a0;
                  EvaluationRmsChecker object((jobject) NULL);

                  if (!parseArgs(args, "D", &a0))
                  {
                    INT_CALL(object = EvaluationRmsChecker(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  jdouble a0;
                  jdouble a1;
                  EvaluationRmsChecker object((jobject) NULL);

                  if (!parseArgs(args, "DD", &a0, &a1))
                  {
                    INT_CALL(object = EvaluationRmsChecker(a0, a1));
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

            static PyObject *t_EvaluationRmsChecker_converged(t_EvaluationRmsChecker *self, PyObject *args)
            {
              jint a0;
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation a1((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "Ikk", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation::initializeClass, ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.converged(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "converged", args);
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
#include "org/orekit/models/earth/tessellation/ConstantAzimuthAiming.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/tessellation/TileAiming.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *ConstantAzimuthAiming::class$ = NULL;
          jmethodID *ConstantAzimuthAiming::mids$ = NULL;
          bool ConstantAzimuthAiming::live$ = false;

          jclass ConstantAzimuthAiming::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/ConstantAzimuthAiming");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_cee3325573481ef4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
              mids$[mid_alongTileDirection_94d0bf825c02adfa] = env->getMethodID(cls, "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getSingularPoints_0d9551367f7ecdef] = env->getMethodID(cls, "getSingularPoints", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ConstantAzimuthAiming::ConstantAzimuthAiming(const ::org::orekit::bodies::OneAxisEllipsoid & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cee3325573481ef4, a0.this$, a1)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantAzimuthAiming::alongTileDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_alongTileDirection_94d0bf825c02adfa], a0.this$, a1.this$));
          }

          ::java::util::List ConstantAzimuthAiming::getSingularPoints() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSingularPoints_0d9551367f7ecdef]));
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
        namespace tessellation {
          static PyObject *t_ConstantAzimuthAiming_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ConstantAzimuthAiming_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ConstantAzimuthAiming_init_(t_ConstantAzimuthAiming *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ConstantAzimuthAiming_alongTileDirection(t_ConstantAzimuthAiming *self, PyObject *args);
          static PyObject *t_ConstantAzimuthAiming_getSingularPoints(t_ConstantAzimuthAiming *self);
          static PyObject *t_ConstantAzimuthAiming_get__singularPoints(t_ConstantAzimuthAiming *self, void *data);
          static PyGetSetDef t_ConstantAzimuthAiming__fields_[] = {
            DECLARE_GET_FIELD(t_ConstantAzimuthAiming, singularPoints),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ConstantAzimuthAiming__methods_[] = {
            DECLARE_METHOD(t_ConstantAzimuthAiming, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConstantAzimuthAiming, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConstantAzimuthAiming, alongTileDirection, METH_VARARGS),
            DECLARE_METHOD(t_ConstantAzimuthAiming, getSingularPoints, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ConstantAzimuthAiming)[] = {
            { Py_tp_methods, t_ConstantAzimuthAiming__methods_ },
            { Py_tp_init, (void *) t_ConstantAzimuthAiming_init_ },
            { Py_tp_getset, t_ConstantAzimuthAiming__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ConstantAzimuthAiming)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ConstantAzimuthAiming, t_ConstantAzimuthAiming, ConstantAzimuthAiming);

          void t_ConstantAzimuthAiming::install(PyObject *module)
          {
            installType(&PY_TYPE(ConstantAzimuthAiming), &PY_TYPE_DEF(ConstantAzimuthAiming), module, "ConstantAzimuthAiming", 0);
          }

          void t_ConstantAzimuthAiming::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantAzimuthAiming), "class_", make_descriptor(ConstantAzimuthAiming::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantAzimuthAiming), "wrapfn_", make_descriptor(t_ConstantAzimuthAiming::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantAzimuthAiming), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ConstantAzimuthAiming_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ConstantAzimuthAiming::initializeClass, 1)))
              return NULL;
            return t_ConstantAzimuthAiming::wrap_Object(ConstantAzimuthAiming(((t_ConstantAzimuthAiming *) arg)->object.this$));
          }
          static PyObject *t_ConstantAzimuthAiming_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ConstantAzimuthAiming::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ConstantAzimuthAiming_init_(t_ConstantAzimuthAiming *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
            jdouble a1;
            ConstantAzimuthAiming object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ConstantAzimuthAiming(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ConstantAzimuthAiming_alongTileDirection(t_ConstantAzimuthAiming *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.alongTileDirection(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "alongTileDirection", args);
            return NULL;
          }

          static PyObject *t_ConstantAzimuthAiming_getSingularPoints(t_ConstantAzimuthAiming *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::bodies::PY_TYPE(GeodeticPoint));
          }

          static PyObject *t_ConstantAzimuthAiming_get__singularPoints(t_ConstantAzimuthAiming *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/FieldEllipse.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/twod/FieldVector2D.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *FieldEllipse::class$ = NULL;
      jmethodID *FieldEllipse::mids$ = NULL;
      bool FieldEllipse::live$ = false;

      jclass FieldEllipse::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/FieldEllipse");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d08588a8ab820125] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;)V");
          mids$[mid_getA_613c8f46c659f636] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getB_613c8f46c659f636] = env->getMethodID(cls, "getB", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCenter_2d64addf4c3391d9] = env->getMethodID(cls, "getCenter", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getCenterOfCurvature_453f66131fc0f21f] = env->getMethodID(cls, "getCenterOfCurvature", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
          mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getU_2d64addf4c3391d9] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getV_2d64addf4c3391d9] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_pointAt_68e9ce281b70d410] = env->getMethodID(cls, "pointAt", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_projectToEllipse_f6b3fdf5ec92a07f] = env->getMethodID(cls, "projectToEllipse", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_projectToEllipse_453f66131fc0f21f] = env->getMethodID(cls, "projectToEllipse", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
          mids$[mid_toPlane_7f02e62a67dbd97c] = env->getMethodID(cls, "toPlane", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
          mids$[mid_toSpace_695484e81a048fc5] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldEllipse::FieldEllipse(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::orekit::frames::Frame & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d08588a8ab820125, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldEllipse::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEllipse::getB() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getB_613c8f46c659f636]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldEllipse::getCenter() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getCenter_2d64addf4c3391d9]));
      }

      ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldEllipse::getCenterOfCurvature(const ::org::hipparchus::geometry::euclidean::twod::FieldVector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_getCenterOfCurvature_453f66131fc0f21f], a0.this$));
      }

      ::org::orekit::frames::Frame FieldEllipse::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldEllipse::getU() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getU_2d64addf4c3391d9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldEllipse::getV() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getV_2d64addf4c3391d9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldEllipse::pointAt(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_pointAt_68e9ce281b70d410], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldEllipse::projectToEllipse(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_projectToEllipse_f6b3fdf5ec92a07f], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldEllipse::projectToEllipse(const ::org::hipparchus::geometry::euclidean::twod::FieldVector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_projectToEllipse_453f66131fc0f21f], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldEllipse::toPlane(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_toPlane_7f02e62a67dbd97c], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldEllipse::toSpace(const ::org::hipparchus::geometry::euclidean::twod::FieldVector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toSpace_695484e81a048fc5], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_FieldEllipse_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEllipse_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEllipse_of_(t_FieldEllipse *self, PyObject *args);
      static int t_FieldEllipse_init_(t_FieldEllipse *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldEllipse_getA(t_FieldEllipse *self);
      static PyObject *t_FieldEllipse_getB(t_FieldEllipse *self);
      static PyObject *t_FieldEllipse_getCenter(t_FieldEllipse *self);
      static PyObject *t_FieldEllipse_getCenterOfCurvature(t_FieldEllipse *self, PyObject *arg);
      static PyObject *t_FieldEllipse_getFrame(t_FieldEllipse *self);
      static PyObject *t_FieldEllipse_getU(t_FieldEllipse *self);
      static PyObject *t_FieldEllipse_getV(t_FieldEllipse *self);
      static PyObject *t_FieldEllipse_pointAt(t_FieldEllipse *self, PyObject *arg);
      static PyObject *t_FieldEllipse_projectToEllipse(t_FieldEllipse *self, PyObject *args);
      static PyObject *t_FieldEllipse_toPlane(t_FieldEllipse *self, PyObject *arg);
      static PyObject *t_FieldEllipse_toSpace(t_FieldEllipse *self, PyObject *arg);
      static PyObject *t_FieldEllipse_get__a(t_FieldEllipse *self, void *data);
      static PyObject *t_FieldEllipse_get__b(t_FieldEllipse *self, void *data);
      static PyObject *t_FieldEllipse_get__center(t_FieldEllipse *self, void *data);
      static PyObject *t_FieldEllipse_get__frame(t_FieldEllipse *self, void *data);
      static PyObject *t_FieldEllipse_get__u(t_FieldEllipse *self, void *data);
      static PyObject *t_FieldEllipse_get__v(t_FieldEllipse *self, void *data);
      static PyObject *t_FieldEllipse_get__parameters_(t_FieldEllipse *self, void *data);
      static PyGetSetDef t_FieldEllipse__fields_[] = {
        DECLARE_GET_FIELD(t_FieldEllipse, a),
        DECLARE_GET_FIELD(t_FieldEllipse, b),
        DECLARE_GET_FIELD(t_FieldEllipse, center),
        DECLARE_GET_FIELD(t_FieldEllipse, frame),
        DECLARE_GET_FIELD(t_FieldEllipse, u),
        DECLARE_GET_FIELD(t_FieldEllipse, v),
        DECLARE_GET_FIELD(t_FieldEllipse, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldEllipse__methods_[] = {
        DECLARE_METHOD(t_FieldEllipse, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEllipse, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEllipse, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldEllipse, getA, METH_NOARGS),
        DECLARE_METHOD(t_FieldEllipse, getB, METH_NOARGS),
        DECLARE_METHOD(t_FieldEllipse, getCenter, METH_NOARGS),
        DECLARE_METHOD(t_FieldEllipse, getCenterOfCurvature, METH_O),
        DECLARE_METHOD(t_FieldEllipse, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldEllipse, getU, METH_NOARGS),
        DECLARE_METHOD(t_FieldEllipse, getV, METH_NOARGS),
        DECLARE_METHOD(t_FieldEllipse, pointAt, METH_O),
        DECLARE_METHOD(t_FieldEllipse, projectToEllipse, METH_VARARGS),
        DECLARE_METHOD(t_FieldEllipse, toPlane, METH_O),
        DECLARE_METHOD(t_FieldEllipse, toSpace, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldEllipse)[] = {
        { Py_tp_methods, t_FieldEllipse__methods_ },
        { Py_tp_init, (void *) t_FieldEllipse_init_ },
        { Py_tp_getset, t_FieldEllipse__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldEllipse)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldEllipse, t_FieldEllipse, FieldEllipse);
      PyObject *t_FieldEllipse::wrap_Object(const FieldEllipse& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEllipse::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEllipse *self = (t_FieldEllipse *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldEllipse::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEllipse::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEllipse *self = (t_FieldEllipse *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldEllipse::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldEllipse), &PY_TYPE_DEF(FieldEllipse), module, "FieldEllipse", 0);
      }

      void t_FieldEllipse::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEllipse), "class_", make_descriptor(FieldEllipse::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEllipse), "wrapfn_", make_descriptor(t_FieldEllipse::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEllipse), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldEllipse_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldEllipse::initializeClass, 1)))
          return NULL;
        return t_FieldEllipse::wrap_Object(FieldEllipse(((t_FieldEllipse *) arg)->object.this$));
      }
      static PyObject *t_FieldEllipse_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldEllipse::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldEllipse_of_(t_FieldEllipse *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldEllipse_init_(t_FieldEllipse *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
        PyTypeObject **p3;
        ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
        PyTypeObject **p4;
        ::org::orekit::frames::Frame a5((jobject) NULL);
        FieldEllipse object((jobject) NULL);

        if (!parseArgs(args, "KKKKKk", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
        {
          INT_CALL(object = FieldEllipse(a0, a1, a2, a3, a4, a5));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldEllipse_getA(t_FieldEllipse *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getA());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldEllipse_getB(t_FieldEllipse *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getB());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldEllipse_getCenter(t_FieldEllipse *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getCenter());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldEllipse_getCenterOfCurvature(t_FieldEllipse *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::twod::FieldVector2D a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::parameters_))
        {
          OBJ_CALL(result = self->object.getCenterOfCurvature(a0));
          return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getCenterOfCurvature", arg);
        return NULL;
      }

      static PyObject *t_FieldEllipse_getFrame(t_FieldEllipse *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldEllipse_getU(t_FieldEllipse *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getU());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldEllipse_getV(t_FieldEllipse *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldEllipse_pointAt(t_FieldEllipse *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.pointAt(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "pointAt", arg);
        return NULL;
      }

      static PyObject *t_FieldEllipse_projectToEllipse(t_FieldEllipse *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.projectToEllipse(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::twod::FieldVector2D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::parameters_))
            {
              OBJ_CALL(result = self->object.projectToEllipse(a0));
              return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "projectToEllipse", args);
        return NULL;
      }

      static PyObject *t_FieldEllipse_toPlane(t_FieldEllipse *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
        {
          OBJ_CALL(result = self->object.toPlane(a0));
          return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "toPlane", arg);
        return NULL;
      }

      static PyObject *t_FieldEllipse_toSpace(t_FieldEllipse *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::twod::FieldVector2D a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::parameters_))
        {
          OBJ_CALL(result = self->object.toSpace(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "toSpace", arg);
        return NULL;
      }
      static PyObject *t_FieldEllipse_get__parameters_(t_FieldEllipse *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldEllipse_get__a(t_FieldEllipse *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEllipse_get__b(t_FieldEllipse *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getB());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEllipse_get__center(t_FieldEllipse *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getCenter());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldEllipse_get__frame(t_FieldEllipse *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldEllipse_get__u(t_FieldEllipse *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getU());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldEllipse_get__v(t_FieldEllipse *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *SequentialGaussNewtonOptimizer::class$ = NULL;
            jmethodID *SequentialGaussNewtonOptimizer::mids$ = NULL;
            bool SequentialGaussNewtonOptimizer::live$ = false;

            jclass SequentialGaussNewtonOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_2c6bf99d169aafec] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;ZLorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)V");
                mids$[mid_getDecomposer_6715228bb9fc3272] = env->getMethodID(cls, "getDecomposer", "()Lorg/hipparchus/linear/MatrixDecomposer;");
                mids$[mid_getOldEvaluation_b9160dea002527ef] = env->getMethodID(cls, "getOldEvaluation", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;");
                mids$[mid_isFormNormalEquations_89b302893bdbe1f1] = env->getMethodID(cls, "isFormNormalEquations", "()Z");
                mids$[mid_optimize_07184cacaaa6a451] = env->getMethodID(cls, "optimize", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");
                mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                mids$[mid_withAPrioriData_623502691f8621d5] = env->getMethodID(cls, "withAPrioriData", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;");
                mids$[mid_withAPrioriData_4ad66676b7da8c32] = env->getMethodID(cls, "withAPrioriData", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;DD)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;");
                mids$[mid_withDecomposer_30cc4c2c9e87a99d] = env->getMethodID(cls, "withDecomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;");
                mids$[mid_withEvaluation_f0edaddfc0e1df67] = env->getMethodID(cls, "withEvaluation", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;");
                mids$[mid_withFormNormalEquations_1dd66e38a2c693ba] = env->getMethodID(cls, "withFormNormalEquations", "(Z)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SequentialGaussNewtonOptimizer::SequentialGaussNewtonOptimizer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            SequentialGaussNewtonOptimizer::SequentialGaussNewtonOptimizer(const ::org::hipparchus::linear::MatrixDecomposer & a0, jboolean a1, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c6bf99d169aafec, a0.this$, a1, a2.this$)) {}

            ::org::hipparchus::linear::MatrixDecomposer SequentialGaussNewtonOptimizer::getDecomposer() const
            {
              return ::org::hipparchus::linear::MatrixDecomposer(env->callObjectMethod(this$, mids$[mid_getDecomposer_6715228bb9fc3272]));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation SequentialGaussNewtonOptimizer::getOldEvaluation() const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation(env->callObjectMethod(this$, mids$[mid_getOldEvaluation_b9160dea002527ef]));
            }

            jboolean SequentialGaussNewtonOptimizer::isFormNormalEquations() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isFormNormalEquations_89b302893bdbe1f1]);
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum SequentialGaussNewtonOptimizer::optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_optimize_07184cacaaa6a451], a0.this$));
            }

            ::java::lang::String SequentialGaussNewtonOptimizer::toString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
            }

            SequentialGaussNewtonOptimizer SequentialGaussNewtonOptimizer::withAPrioriData(const ::org::hipparchus::linear::RealVector & a0, const ::org::hipparchus::linear::RealMatrix & a1) const
            {
              return SequentialGaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withAPrioriData_623502691f8621d5], a0.this$, a1.this$));
            }

            SequentialGaussNewtonOptimizer SequentialGaussNewtonOptimizer::withAPrioriData(const ::org::hipparchus::linear::RealVector & a0, const ::org::hipparchus::linear::RealMatrix & a1, jdouble a2, jdouble a3) const
            {
              return SequentialGaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withAPrioriData_4ad66676b7da8c32], a0.this$, a1.this$, a2, a3));
            }

            SequentialGaussNewtonOptimizer SequentialGaussNewtonOptimizer::withDecomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
            {
              return SequentialGaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withDecomposer_30cc4c2c9e87a99d], a0.this$));
            }

            SequentialGaussNewtonOptimizer SequentialGaussNewtonOptimizer::withEvaluation(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a0) const
            {
              return SequentialGaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withEvaluation_f0edaddfc0e1df67], a0.this$));
            }

            SequentialGaussNewtonOptimizer SequentialGaussNewtonOptimizer::withFormNormalEquations(jboolean a0) const
            {
              return SequentialGaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withFormNormalEquations_1dd66e38a2c693ba], a0));
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
            static PyObject *t_SequentialGaussNewtonOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SequentialGaussNewtonOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SequentialGaussNewtonOptimizer_init_(t_SequentialGaussNewtonOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SequentialGaussNewtonOptimizer_getDecomposer(t_SequentialGaussNewtonOptimizer *self);
            static PyObject *t_SequentialGaussNewtonOptimizer_getOldEvaluation(t_SequentialGaussNewtonOptimizer *self);
            static PyObject *t_SequentialGaussNewtonOptimizer_isFormNormalEquations(t_SequentialGaussNewtonOptimizer *self);
            static PyObject *t_SequentialGaussNewtonOptimizer_optimize(t_SequentialGaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_SequentialGaussNewtonOptimizer_toString(t_SequentialGaussNewtonOptimizer *self, PyObject *args);
            static PyObject *t_SequentialGaussNewtonOptimizer_withAPrioriData(t_SequentialGaussNewtonOptimizer *self, PyObject *args);
            static PyObject *t_SequentialGaussNewtonOptimizer_withDecomposer(t_SequentialGaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_SequentialGaussNewtonOptimizer_withEvaluation(t_SequentialGaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_SequentialGaussNewtonOptimizer_withFormNormalEquations(t_SequentialGaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_SequentialGaussNewtonOptimizer_get__decomposer(t_SequentialGaussNewtonOptimizer *self, void *data);
            static PyObject *t_SequentialGaussNewtonOptimizer_get__formNormalEquations(t_SequentialGaussNewtonOptimizer *self, void *data);
            static PyObject *t_SequentialGaussNewtonOptimizer_get__oldEvaluation(t_SequentialGaussNewtonOptimizer *self, void *data);
            static PyGetSetDef t_SequentialGaussNewtonOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_SequentialGaussNewtonOptimizer, decomposer),
              DECLARE_GET_FIELD(t_SequentialGaussNewtonOptimizer, formNormalEquations),
              DECLARE_GET_FIELD(t_SequentialGaussNewtonOptimizer, oldEvaluation),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SequentialGaussNewtonOptimizer__methods_[] = {
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, getDecomposer, METH_NOARGS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, getOldEvaluation, METH_NOARGS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, isFormNormalEquations, METH_NOARGS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, optimize, METH_O),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, toString, METH_VARARGS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, withAPrioriData, METH_VARARGS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, withDecomposer, METH_O),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, withEvaluation, METH_O),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, withFormNormalEquations, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SequentialGaussNewtonOptimizer)[] = {
              { Py_tp_methods, t_SequentialGaussNewtonOptimizer__methods_ },
              { Py_tp_init, (void *) t_SequentialGaussNewtonOptimizer_init_ },
              { Py_tp_getset, t_SequentialGaussNewtonOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SequentialGaussNewtonOptimizer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SequentialGaussNewtonOptimizer, t_SequentialGaussNewtonOptimizer, SequentialGaussNewtonOptimizer);

            void t_SequentialGaussNewtonOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(SequentialGaussNewtonOptimizer), &PY_TYPE_DEF(SequentialGaussNewtonOptimizer), module, "SequentialGaussNewtonOptimizer", 0);
            }

            void t_SequentialGaussNewtonOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SequentialGaussNewtonOptimizer), "class_", make_descriptor(SequentialGaussNewtonOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SequentialGaussNewtonOptimizer), "wrapfn_", make_descriptor(t_SequentialGaussNewtonOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SequentialGaussNewtonOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SequentialGaussNewtonOptimizer::initializeClass, 1)))
                return NULL;
              return t_SequentialGaussNewtonOptimizer::wrap_Object(SequentialGaussNewtonOptimizer(((t_SequentialGaussNewtonOptimizer *) arg)->object.this$));
            }
            static PyObject *t_SequentialGaussNewtonOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SequentialGaussNewtonOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SequentialGaussNewtonOptimizer_init_(t_SequentialGaussNewtonOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  SequentialGaussNewtonOptimizer object((jobject) NULL);

                  INT_CALL(object = SequentialGaussNewtonOptimizer());
                  self->object = object;
                  break;
                }
               case 3:
                {
                  ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
                  jboolean a1;
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation a2((jobject) NULL);
                  SequentialGaussNewtonOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "kZk", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation::initializeClass, &a0, &a1, &a2))
                  {
                    INT_CALL(object = SequentialGaussNewtonOptimizer(a0, a1, a2));
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

            static PyObject *t_SequentialGaussNewtonOptimizer_getDecomposer(t_SequentialGaussNewtonOptimizer *self)
            {
              ::org::hipparchus::linear::MatrixDecomposer result((jobject) NULL);
              OBJ_CALL(result = self->object.getDecomposer());
              return ::org::hipparchus::linear::t_MatrixDecomposer::wrap_Object(result);
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_getOldEvaluation(t_SequentialGaussNewtonOptimizer *self)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation result((jobject) NULL);
              OBJ_CALL(result = self->object.getOldEvaluation());
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem$Evaluation::wrap_Object(result);
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_isFormNormalEquations(t_SequentialGaussNewtonOptimizer *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isFormNormalEquations());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_optimize(t_SequentialGaussNewtonOptimizer *self, PyObject *arg)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.optimize(a0));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "optimize", arg);
              return NULL;
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_toString(t_SequentialGaussNewtonOptimizer *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }

              return callSuper(PY_TYPE(SequentialGaussNewtonOptimizer), (PyObject *) self, "toString", args, 2);
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_withAPrioriData(t_SequentialGaussNewtonOptimizer *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::hipparchus::linear::RealVector a0((jobject) NULL);
                  ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
                  SequentialGaussNewtonOptimizer result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.withAPrioriData(a0, a1));
                    return t_SequentialGaussNewtonOptimizer::wrap_Object(result);
                  }
                }
                break;
               case 4:
                {
                  ::org::hipparchus::linear::RealVector a0((jobject) NULL);
                  ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
                  jdouble a2;
                  jdouble a3;
                  SequentialGaussNewtonOptimizer result((jobject) NULL);

                  if (!parseArgs(args, "kkDD", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(result = self->object.withAPrioriData(a0, a1, a2, a3));
                    return t_SequentialGaussNewtonOptimizer::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "withAPrioriData", args);
              return NULL;
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_withDecomposer(t_SequentialGaussNewtonOptimizer *self, PyObject *arg)
            {
              ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
              SequentialGaussNewtonOptimizer result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.withDecomposer(a0));
                return t_SequentialGaussNewtonOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withDecomposer", arg);
              return NULL;
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_withEvaluation(t_SequentialGaussNewtonOptimizer *self, PyObject *arg)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation a0((jobject) NULL);
              SequentialGaussNewtonOptimizer result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.withEvaluation(a0));
                return t_SequentialGaussNewtonOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withEvaluation", arg);
              return NULL;
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_withFormNormalEquations(t_SequentialGaussNewtonOptimizer *self, PyObject *arg)
            {
              jboolean a0;
              SequentialGaussNewtonOptimizer result((jobject) NULL);

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(result = self->object.withFormNormalEquations(a0));
                return t_SequentialGaussNewtonOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withFormNormalEquations", arg);
              return NULL;
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_get__decomposer(t_SequentialGaussNewtonOptimizer *self, void *data)
            {
              ::org::hipparchus::linear::MatrixDecomposer value((jobject) NULL);
              OBJ_CALL(value = self->object.getDecomposer());
              return ::org::hipparchus::linear::t_MatrixDecomposer::wrap_Object(value);
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_get__formNormalEquations(t_SequentialGaussNewtonOptimizer *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isFormNormalEquations());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_get__oldEvaluation(t_SequentialGaussNewtonOptimizer *self, void *data)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation value((jobject) NULL);
              OBJ_CALL(value = self->object.getOldEvaluation());
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem$Evaluation::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedPVCoordinates::class$ = NULL;
      jmethodID *TimeStampedPVCoordinates::mids$ = NULL;
      bool TimeStampedPVCoordinates::live$ = false;

      jclass TimeStampedPVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedPVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8b5236185db73aff] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_a1f5dc554250f77b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_8a280baa525bbe55] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_d1b18387f266ab27] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_cbd37fa90c15dcc5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_06f788959c496621] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_ab5c1802aae2e873] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_c3b70466f3a2d583] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_bfa9bec6e182d19e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_shiftedBy_abc572ee9de7b188] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toString_8873a127a4f312ad] = env->getMethodID(cls, "toString", "(Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toTaylorProvider_2f9a95aa9dd20b18] = env->getMethodID(cls, "toTaylorProvider", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/PVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_8b5236185db73aff, a0.this$, a1.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_a1f5dc554250f77b, a0.this$, a1.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_8a280baa525bbe55, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_d1b18387f266ab27, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_cbd37fa90c15dcc5, a0.this$, a1, a2.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_06f788959c496621, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::PVCoordinates & a2, jdouble a3, const ::org::orekit::utils::PVCoordinates & a4) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_ab5c1802aae2e873, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::PVCoordinates & a2, jdouble a3, const ::org::orekit::utils::PVCoordinates & a4, jdouble a5, const ::org::orekit::utils::PVCoordinates & a6) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_c3b70466f3a2d583, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::PVCoordinates & a2, jdouble a3, const ::org::orekit::utils::PVCoordinates & a4, jdouble a5, const ::org::orekit::utils::PVCoordinates & a6, jdouble a7, const ::org::orekit::utils::PVCoordinates & a8) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_bfa9bec6e182d19e, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$, a7, a8.this$)) {}

      ::org::orekit::time::AbsoluteDate TimeStampedPVCoordinates::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
      }

      TimeStampedPVCoordinates TimeStampedPVCoordinates::shiftedBy(jdouble a0) const
      {
        return TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_abc572ee9de7b188], a0));
      }

      ::java::lang::String TimeStampedPVCoordinates::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }

      ::java::lang::String TimeStampedPVCoordinates::toString(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_8873a127a4f312ad], a0.this$));
      }

      ::org::orekit::utils::PVCoordinatesProvider TimeStampedPVCoordinates::toTaylorProvider(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_toTaylorProvider_2f9a95aa9dd20b18], a0.this$));
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
      static PyObject *t_TimeStampedPVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedPVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TimeStampedPVCoordinates_init_(t_TimeStampedPVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedPVCoordinates_getDate(t_TimeStampedPVCoordinates *self);
      static PyObject *t_TimeStampedPVCoordinates_shiftedBy(t_TimeStampedPVCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedPVCoordinates_toString(t_TimeStampedPVCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedPVCoordinates_toTaylorProvider(t_TimeStampedPVCoordinates *self, PyObject *arg);
      static PyObject *t_TimeStampedPVCoordinates_get__date(t_TimeStampedPVCoordinates *self, void *data);
      static PyGetSetDef t_TimeStampedPVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedPVCoordinates, date),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedPVCoordinates__methods_[] = {
        DECLARE_METHOD(t_TimeStampedPVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPVCoordinates, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedPVCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedPVCoordinates, toString, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedPVCoordinates, toTaylorProvider, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedPVCoordinates)[] = {
        { Py_tp_methods, t_TimeStampedPVCoordinates__methods_ },
        { Py_tp_init, (void *) t_TimeStampedPVCoordinates_init_ },
        { Py_tp_getset, t_TimeStampedPVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedPVCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::PVCoordinates),
        NULL
      };

      DEFINE_TYPE(TimeStampedPVCoordinates, t_TimeStampedPVCoordinates, TimeStampedPVCoordinates);

      void t_TimeStampedPVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedPVCoordinates), &PY_TYPE_DEF(TimeStampedPVCoordinates), module, "TimeStampedPVCoordinates", 0);
      }

      void t_TimeStampedPVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPVCoordinates), "class_", make_descriptor(TimeStampedPVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPVCoordinates), "wrapfn_", make_descriptor(t_TimeStampedPVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPVCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedPVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedPVCoordinates::initializeClass, 1)))
          return NULL;
        return t_TimeStampedPVCoordinates::wrap_Object(TimeStampedPVCoordinates(((t_TimeStampedPVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedPVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedPVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TimeStampedPVCoordinates_init_(t_TimeStampedPVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2));
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
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            jdouble a3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            jdouble a3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            jdouble a5;
            ::org::orekit::utils::PVCoordinates a6((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          goto err;
         case 9:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            jdouble a3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            jdouble a5;
            ::org::orekit::utils::PVCoordinates a6((jobject) NULL);
            jdouble a7;
            ::org::orekit::utils::PVCoordinates a8((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDkDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
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

      static PyObject *t_TimeStampedPVCoordinates_getDate(t_TimeStampedPVCoordinates *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeStampedPVCoordinates_shiftedBy(t_TimeStampedPVCoordinates *self, PyObject *args)
      {
        jdouble a0;
        TimeStampedPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_TimeStampedPVCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(TimeStampedPVCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_TimeStampedPVCoordinates_toString(t_TimeStampedPVCoordinates *self, PyObject *args)
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

        return callSuper(PY_TYPE(TimeStampedPVCoordinates), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TimeStampedPVCoordinates_toTaylorProvider(t_TimeStampedPVCoordinates *self, PyObject *arg)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toTaylorProvider(a0));
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toTaylorProvider", arg);
        return NULL;
      }

      static PyObject *t_TimeStampedPVCoordinates_get__date(t_TimeStampedPVCoordinates *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/DumpReplayer$Result.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *DumpReplayer$Result::class$ = NULL;
        jmethodID *DumpReplayer$Result::mids$ = NULL;
        bool DumpReplayer$Result::live$ = false;

        jclass DumpReplayer$Result::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/DumpReplayer$Result");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getExpected_e661fe3ba2fafb22] = env->getMethodID(cls, "getExpected", "()Ljava/lang/Object;");
            mids$[mid_getReplayed_e661fe3ba2fafb22] = env->getMethodID(cls, "getReplayed", "()Ljava/lang/Object;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::Object DumpReplayer$Result::getExpected() const
        {
          return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getExpected_e661fe3ba2fafb22]));
        }

        ::java::lang::Object DumpReplayer$Result::getReplayed() const
        {
          return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getReplayed_e661fe3ba2fafb22]));
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
        static PyObject *t_DumpReplayer$Result_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpReplayer$Result_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpReplayer$Result_getExpected(t_DumpReplayer$Result *self);
        static PyObject *t_DumpReplayer$Result_getReplayed(t_DumpReplayer$Result *self);
        static PyObject *t_DumpReplayer$Result_get__expected(t_DumpReplayer$Result *self, void *data);
        static PyObject *t_DumpReplayer$Result_get__replayed(t_DumpReplayer$Result *self, void *data);
        static PyGetSetDef t_DumpReplayer$Result__fields_[] = {
          DECLARE_GET_FIELD(t_DumpReplayer$Result, expected),
          DECLARE_GET_FIELD(t_DumpReplayer$Result, replayed),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DumpReplayer$Result__methods_[] = {
          DECLARE_METHOD(t_DumpReplayer$Result, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpReplayer$Result, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpReplayer$Result, getExpected, METH_NOARGS),
          DECLARE_METHOD(t_DumpReplayer$Result, getReplayed, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DumpReplayer$Result)[] = {
          { Py_tp_methods, t_DumpReplayer$Result__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DumpReplayer$Result__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DumpReplayer$Result)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DumpReplayer$Result, t_DumpReplayer$Result, DumpReplayer$Result);

        void t_DumpReplayer$Result::install(PyObject *module)
        {
          installType(&PY_TYPE(DumpReplayer$Result), &PY_TYPE_DEF(DumpReplayer$Result), module, "DumpReplayer$Result", 0);
        }

        void t_DumpReplayer$Result::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer$Result), "class_", make_descriptor(DumpReplayer$Result::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer$Result), "wrapfn_", make_descriptor(t_DumpReplayer$Result::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer$Result), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DumpReplayer$Result_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DumpReplayer$Result::initializeClass, 1)))
            return NULL;
          return t_DumpReplayer$Result::wrap_Object(DumpReplayer$Result(((t_DumpReplayer$Result *) arg)->object.this$));
        }
        static PyObject *t_DumpReplayer$Result_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DumpReplayer$Result::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DumpReplayer$Result_getExpected(t_DumpReplayer$Result *self)
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.getExpected());
          return ::java::lang::t_Object::wrap_Object(result);
        }

        static PyObject *t_DumpReplayer$Result_getReplayed(t_DumpReplayer$Result *self)
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.getReplayed());
          return ::java::lang::t_Object::wrap_Object(result);
        }

        static PyObject *t_DumpReplayer$Result_get__expected(t_DumpReplayer$Result *self, void *data)
        {
          ::java::lang::Object value((jobject) NULL);
          OBJ_CALL(value = self->object.getExpected());
          return ::java::lang::t_Object::wrap_Object(value);
        }

        static PyObject *t_DumpReplayer$Result_get__replayed(t_DumpReplayer$Result *self, void *data)
        {
          ::java::lang::Object value((jobject) NULL);
          OBJ_CALL(value = self->object.getReplayed());
          return ::java::lang::t_Object::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldMatrixDecomposer.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldMatrixDecomposer::class$ = NULL;
      jmethodID *FieldMatrixDecomposer::mids$ = NULL;
      bool FieldMatrixDecomposer::live$ = false;

      jclass FieldMatrixDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldMatrixDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_decompose_b2f65345b24ac236] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldDecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::FieldDecompositionSolver FieldMatrixDecomposer::decompose(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldDecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_b2f65345b24ac236], a0.this$));
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
      static PyObject *t_FieldMatrixDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixDecomposer_of_(t_FieldMatrixDecomposer *self, PyObject *args);
      static PyObject *t_FieldMatrixDecomposer_decompose(t_FieldMatrixDecomposer *self, PyObject *arg);
      static PyObject *t_FieldMatrixDecomposer_get__parameters_(t_FieldMatrixDecomposer *self, void *data);
      static PyGetSetDef t_FieldMatrixDecomposer__fields_[] = {
        DECLARE_GET_FIELD(t_FieldMatrixDecomposer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldMatrixDecomposer__methods_[] = {
        DECLARE_METHOD(t_FieldMatrixDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixDecomposer, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrixDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMatrixDecomposer)[] = {
        { Py_tp_methods, t_FieldMatrixDecomposer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldMatrixDecomposer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMatrixDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMatrixDecomposer, t_FieldMatrixDecomposer, FieldMatrixDecomposer);
      PyObject *t_FieldMatrixDecomposer::wrap_Object(const FieldMatrixDecomposer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixDecomposer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixDecomposer *self = (t_FieldMatrixDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldMatrixDecomposer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixDecomposer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixDecomposer *self = (t_FieldMatrixDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldMatrixDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMatrixDecomposer), &PY_TYPE_DEF(FieldMatrixDecomposer), module, "FieldMatrixDecomposer", 0);
      }

      void t_FieldMatrixDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixDecomposer), "class_", make_descriptor(FieldMatrixDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixDecomposer), "wrapfn_", make_descriptor(t_FieldMatrixDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMatrixDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMatrixDecomposer::initializeClass, 1)))
          return NULL;
        return t_FieldMatrixDecomposer::wrap_Object(FieldMatrixDecomposer(((t_FieldMatrixDecomposer *) arg)->object.this$));
      }
      static PyObject *t_FieldMatrixDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMatrixDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMatrixDecomposer_of_(t_FieldMatrixDecomposer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldMatrixDecomposer_decompose(t_FieldMatrixDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldDecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
      static PyObject *t_FieldMatrixDecomposer_get__parameters_(t_FieldMatrixDecomposer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonAbstractMultipleShooting.h"
#include "java/util/List.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonAbstractMultipleShooting::class$ = NULL;
      jmethodID *PythonAbstractMultipleShooting::mids$ = NULL;
      bool PythonAbstractMultipleShooting::live$ = false;

      jclass PythonAbstractMultipleShooting::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonAbstractMultipleShooting");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_712b854f7aef1aab] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;DIZLjava/lang/String;)V");
          mids$[mid_computeAdditionalConstraints_1122e29f2a25b86f] = env->getMethodID(cls, "computeAdditionalConstraints", "(Ljava/util/List;)[D");
          mids$[mid_computeAdditionalJacobianMatrix_29dc26d4c6c7bd43] = env->getMethodID(cls, "computeAdditionalJacobianMatrix", "(Ljava/util/List;)[[D");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAugmentedInitialState_d91edcd61f36fecc] = env->getMethodID(cls, "getAugmentedInitialState", "(I)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractMultipleShooting::PythonAbstractMultipleShooting(const ::java::util::List & a0, const ::java::util::List & a1, jdouble a2, jint a3, jboolean a4, const ::java::lang::String & a5) : ::org::orekit::utils::AbstractMultipleShooting(env->newObject(initializeClass, &mids$, mid_init$_712b854f7aef1aab, a0.this$, a1.this$, a2, a3, a4, a5.this$)) {}

      void PythonAbstractMultipleShooting::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonAbstractMultipleShooting::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonAbstractMultipleShooting::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_PythonAbstractMultipleShooting_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractMultipleShooting_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractMultipleShooting_init_(t_PythonAbstractMultipleShooting *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractMultipleShooting_finalize(t_PythonAbstractMultipleShooting *self);
      static PyObject *t_PythonAbstractMultipleShooting_pythonExtension(t_PythonAbstractMultipleShooting *self, PyObject *args);
      static jobject JNICALL t_PythonAbstractMultipleShooting_computeAdditionalConstraints0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAbstractMultipleShooting_computeAdditionalJacobianMatrix1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAbstractMultipleShooting_getAugmentedInitialState2(JNIEnv *jenv, jobject jobj, jint a0);
      static void JNICALL t_PythonAbstractMultipleShooting_pythonDecRef3(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractMultipleShooting_get__self(t_PythonAbstractMultipleShooting *self, void *data);
      static PyGetSetDef t_PythonAbstractMultipleShooting__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractMultipleShooting, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractMultipleShooting__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractMultipleShooting, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractMultipleShooting, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractMultipleShooting, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractMultipleShooting, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMultipleShooting)[] = {
        { Py_tp_methods, t_PythonAbstractMultipleShooting__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractMultipleShooting_init_ },
        { Py_tp_getset, t_PythonAbstractMultipleShooting__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractMultipleShooting)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::AbstractMultipleShooting),
        NULL
      };

      DEFINE_TYPE(PythonAbstractMultipleShooting, t_PythonAbstractMultipleShooting, PythonAbstractMultipleShooting);

      void t_PythonAbstractMultipleShooting::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractMultipleShooting), &PY_TYPE_DEF(PythonAbstractMultipleShooting), module, "PythonAbstractMultipleShooting", 1);
      }

      void t_PythonAbstractMultipleShooting::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMultipleShooting), "class_", make_descriptor(PythonAbstractMultipleShooting::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMultipleShooting), "wrapfn_", make_descriptor(t_PythonAbstractMultipleShooting::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMultipleShooting), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractMultipleShooting::initializeClass);
        JNINativeMethod methods[] = {
          { "computeAdditionalConstraints", "(Ljava/util/List;)[D", (void *) t_PythonAbstractMultipleShooting_computeAdditionalConstraints0 },
          { "computeAdditionalJacobianMatrix", "(Ljava/util/List;)[[D", (void *) t_PythonAbstractMultipleShooting_computeAdditionalJacobianMatrix1 },
          { "getAugmentedInitialState", "(I)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonAbstractMultipleShooting_getAugmentedInitialState2 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractMultipleShooting_pythonDecRef3 },
        };
        env->registerNatives(cls, methods, 4);
      }

      static PyObject *t_PythonAbstractMultipleShooting_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractMultipleShooting::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractMultipleShooting::wrap_Object(PythonAbstractMultipleShooting(((t_PythonAbstractMultipleShooting *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractMultipleShooting_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractMultipleShooting::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractMultipleShooting_init_(t_PythonAbstractMultipleShooting *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::List a1((jobject) NULL);
        PyTypeObject **p1;
        jdouble a2;
        jint a3;
        jboolean a4;
        ::java::lang::String a5((jobject) NULL);
        PythonAbstractMultipleShooting object((jobject) NULL);

        if (!parseArgs(args, "KKDIZs", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3, &a4, &a5))
        {
          INT_CALL(object = PythonAbstractMultipleShooting(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_PythonAbstractMultipleShooting_finalize(t_PythonAbstractMultipleShooting *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractMultipleShooting_pythonExtension(t_PythonAbstractMultipleShooting *self, PyObject *args)
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

      static jobject JNICALL t_PythonAbstractMultipleShooting_computeAdditionalConstraints0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMultipleShooting::mids$[PythonAbstractMultipleShooting::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< jdouble > value((jobject) NULL);
        PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
        PyObject *result = PyObject_CallMethod(obj, "computeAdditionalConstraints", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[D", &value))
        {
          throwTypeError("computeAdditionalConstraints", result);
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

      static jobject JNICALL t_PythonAbstractMultipleShooting_computeAdditionalJacobianMatrix1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMultipleShooting::mids$[PythonAbstractMultipleShooting::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< JArray< jdouble > > value((jobject) NULL);
        PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
        PyObject *result = PyObject_CallMethod(obj, "computeAdditionalJacobianMatrix", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[[D", &value))
        {
          throwTypeError("computeAdditionalJacobianMatrix", result);
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

      static jobject JNICALL t_PythonAbstractMultipleShooting_getAugmentedInitialState2(JNIEnv *jenv, jobject jobj, jint a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMultipleShooting::mids$[PythonAbstractMultipleShooting::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAugmentedInitialState", "i", (int) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
        {
          throwTypeError("getAugmentedInitialState", result);
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

      static void JNICALL t_PythonAbstractMultipleShooting_pythonDecRef3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMultipleShooting::mids$[PythonAbstractMultipleShooting::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractMultipleShooting::mids$[PythonAbstractMultipleShooting::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractMultipleShooting_get__self(t_PythonAbstractMultipleShooting *self, void *data)
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
#include "org/hipparchus/random/Well19937c.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well19937c::class$ = NULL;
      jmethodID *Well19937c::mids$ = NULL;
      bool Well19937c::live$ = false;

      jclass Well19937c::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well19937c");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_ec63cb8a58ef5a54] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3cd6a6b354c6aa22] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_412668abc8d889e9] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well19937c::Well19937c() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      Well19937c::Well19937c(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_ec63cb8a58ef5a54, a0.this$)) {}

      Well19937c::Well19937c(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      Well19937c::Well19937c(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_3cd6a6b354c6aa22, a0)) {}

      jint Well19937c::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_412668abc8d889e9]);
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
      static PyObject *t_Well19937c_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well19937c_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well19937c_init_(t_Well19937c *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well19937c_nextInt(t_Well19937c *self, PyObject *args);

      static PyMethodDef t_Well19937c__methods_[] = {
        DECLARE_METHOD(t_Well19937c, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well19937c, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well19937c, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well19937c)[] = {
        { Py_tp_methods, t_Well19937c__methods_ },
        { Py_tp_init, (void *) t_Well19937c_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well19937c)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well19937c, t_Well19937c, Well19937c);

      void t_Well19937c::install(PyObject *module)
      {
        installType(&PY_TYPE(Well19937c), &PY_TYPE_DEF(Well19937c), module, "Well19937c", 0);
      }

      void t_Well19937c::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937c), "class_", make_descriptor(Well19937c::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937c), "wrapfn_", make_descriptor(t_Well19937c::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937c), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well19937c_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well19937c::initializeClass, 1)))
          return NULL;
        return t_Well19937c::wrap_Object(Well19937c(((t_Well19937c *) arg)->object.this$));
      }
      static PyObject *t_Well19937c_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well19937c::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well19937c_init_(t_Well19937c *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well19937c object((jobject) NULL);

            INT_CALL(object = Well19937c());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well19937c object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well19937c(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well19937c object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well19937c(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well19937c object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well19937c(a0));
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

      static PyObject *t_Well19937c_nextInt(t_Well19937c *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well19937c), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/measurements/SensorToGroundMapping.h"
#include "java/util/Map$Entry.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {

          ::java::lang::Class *SensorToGroundMapping::class$ = NULL;
          jmethodID *SensorToGroundMapping::mids$ = NULL;
          bool SensorToGroundMapping::live$ = false;

          jclass SensorToGroundMapping::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/measurements/SensorToGroundMapping");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_630071dd94c59169] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_addMapping_a387caea4998dab3] = env->getMethodID(cls, "addMapping", "(Lorg/orekit/rugged/linesensor/SensorPixel;Lorg/orekit/bodies/GeodeticPoint;)V");
              mids$[mid_getMapping_2dfcbd371d62f4e1] = env->getMethodID(cls, "getMapping", "()Ljava/util/Set;");
              mids$[mid_getRuggedName_3cffd47377eca18a] = env->getMethodID(cls, "getRuggedName", "()Ljava/lang/String;");
              mids$[mid_getSensorName_3cffd47377eca18a] = env->getMethodID(cls, "getSensorName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SensorToGroundMapping::SensorToGroundMapping(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

          SensorToGroundMapping::SensorToGroundMapping(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_630071dd94c59169, a0.this$, a1.this$)) {}

          void SensorToGroundMapping::addMapping(const ::org::orekit::rugged::linesensor::SensorPixel & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addMapping_a387caea4998dab3], a0.this$, a1.this$);
          }

          ::java::util::Set SensorToGroundMapping::getMapping() const
          {
            return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getMapping_2dfcbd371d62f4e1]));
          }

          ::java::lang::String SensorToGroundMapping::getRuggedName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRuggedName_3cffd47377eca18a]));
          }

          ::java::lang::String SensorToGroundMapping::getSensorName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorName_3cffd47377eca18a]));
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
    namespace rugged {
      namespace adjustment {
        namespace measurements {
          static PyObject *t_SensorToGroundMapping_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SensorToGroundMapping_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SensorToGroundMapping_init_(t_SensorToGroundMapping *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SensorToGroundMapping_addMapping(t_SensorToGroundMapping *self, PyObject *args);
          static PyObject *t_SensorToGroundMapping_getMapping(t_SensorToGroundMapping *self);
          static PyObject *t_SensorToGroundMapping_getRuggedName(t_SensorToGroundMapping *self);
          static PyObject *t_SensorToGroundMapping_getSensorName(t_SensorToGroundMapping *self);
          static PyObject *t_SensorToGroundMapping_get__mapping(t_SensorToGroundMapping *self, void *data);
          static PyObject *t_SensorToGroundMapping_get__ruggedName(t_SensorToGroundMapping *self, void *data);
          static PyObject *t_SensorToGroundMapping_get__sensorName(t_SensorToGroundMapping *self, void *data);
          static PyGetSetDef t_SensorToGroundMapping__fields_[] = {
            DECLARE_GET_FIELD(t_SensorToGroundMapping, mapping),
            DECLARE_GET_FIELD(t_SensorToGroundMapping, ruggedName),
            DECLARE_GET_FIELD(t_SensorToGroundMapping, sensorName),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SensorToGroundMapping__methods_[] = {
            DECLARE_METHOD(t_SensorToGroundMapping, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorToGroundMapping, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorToGroundMapping, addMapping, METH_VARARGS),
            DECLARE_METHOD(t_SensorToGroundMapping, getMapping, METH_NOARGS),
            DECLARE_METHOD(t_SensorToGroundMapping, getRuggedName, METH_NOARGS),
            DECLARE_METHOD(t_SensorToGroundMapping, getSensorName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SensorToGroundMapping)[] = {
            { Py_tp_methods, t_SensorToGroundMapping__methods_ },
            { Py_tp_init, (void *) t_SensorToGroundMapping_init_ },
            { Py_tp_getset, t_SensorToGroundMapping__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SensorToGroundMapping)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SensorToGroundMapping, t_SensorToGroundMapping, SensorToGroundMapping);

          void t_SensorToGroundMapping::install(PyObject *module)
          {
            installType(&PY_TYPE(SensorToGroundMapping), &PY_TYPE_DEF(SensorToGroundMapping), module, "SensorToGroundMapping", 0);
          }

          void t_SensorToGroundMapping::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToGroundMapping), "class_", make_descriptor(SensorToGroundMapping::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToGroundMapping), "wrapfn_", make_descriptor(t_SensorToGroundMapping::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToGroundMapping), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SensorToGroundMapping_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SensorToGroundMapping::initializeClass, 1)))
              return NULL;
            return t_SensorToGroundMapping::wrap_Object(SensorToGroundMapping(((t_SensorToGroundMapping *) arg)->object.this$));
          }
          static PyObject *t_SensorToGroundMapping_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SensorToGroundMapping::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SensorToGroundMapping_init_(t_SensorToGroundMapping *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                SensorToGroundMapping object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = SensorToGroundMapping(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                SensorToGroundMapping object((jobject) NULL);

                if (!parseArgs(args, "ss", &a0, &a1))
                {
                  INT_CALL(object = SensorToGroundMapping(a0, a1));
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

          static PyObject *t_SensorToGroundMapping_addMapping(t_SensorToGroundMapping *self, PyObject *args)
          {
            ::org::orekit::rugged::linesensor::SensorPixel a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addMapping(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addMapping", args);
            return NULL;
          }

          static PyObject *t_SensorToGroundMapping_getMapping(t_SensorToGroundMapping *self)
          {
            ::java::util::Set result((jobject) NULL);
            OBJ_CALL(result = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(result);
          }

          static PyObject *t_SensorToGroundMapping_getRuggedName(t_SensorToGroundMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRuggedName());
            return j2p(result);
          }

          static PyObject *t_SensorToGroundMapping_getSensorName(t_SensorToGroundMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSensorName());
            return j2p(result);
          }

          static PyObject *t_SensorToGroundMapping_get__mapping(t_SensorToGroundMapping *self, void *data)
          {
            ::java::util::Set value((jobject) NULL);
            OBJ_CALL(value = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(value);
          }

          static PyObject *t_SensorToGroundMapping_get__ruggedName(t_SensorToGroundMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRuggedName());
            return j2p(value);
          }

          static PyObject *t_SensorToGroundMapping_get__sensorName(t_SensorToGroundMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSensorName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/DescriptiveStatistics.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "java/util/function/DoubleConsumer.h"
#include "org/hipparchus/stat/descriptive/UnivariateStatistic.h"
#include "org/hipparchus/stat/descriptive/DescriptiveStatistics.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *DescriptiveStatistics::class$ = NULL;
        jmethodID *DescriptiveStatistics::mids$ = NULL;
        bool DescriptiveStatistics::live$ = false;

        jclass DescriptiveStatistics::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/DescriptiveStatistics");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_cc18240f4a737f14] = env->getMethodID(cls, "<init>", "([D)V");
            mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_accept_10f281d777284cea] = env->getMethodID(cls, "accept", "(D)V");
            mids$[mid_addValue_10f281d777284cea] = env->getMethodID(cls, "addValue", "(D)V");
            mids$[mid_apply_1fd59dc8c1348e34] = env->getMethodID(cls, "apply", "(Lorg/hipparchus/stat/descriptive/UnivariateStatistic;)D");
            mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_copy_176a899d8f1ce21f] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/DescriptiveStatistics;");
            mids$[mid_getElement_69cfb132c661aca4] = env->getMethodID(cls, "getElement", "(I)D");
            mids$[mid_getGeometricMean_557b8123390d8d0c] = env->getMethodID(cls, "getGeometricMean", "()D");
            mids$[mid_getKurtosis_557b8123390d8d0c] = env->getMethodID(cls, "getKurtosis", "()D");
            mids$[mid_getMax_557b8123390d8d0c] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMean_557b8123390d8d0c] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getMin_557b8123390d8d0c] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getPercentile_7e960cd6eee376d8] = env->getMethodID(cls, "getPercentile", "(D)D");
            mids$[mid_getPopulationVariance_557b8123390d8d0c] = env->getMethodID(cls, "getPopulationVariance", "()D");
            mids$[mid_getQuadraticMean_557b8123390d8d0c] = env->getMethodID(cls, "getQuadraticMean", "()D");
            mids$[mid_getSkewness_557b8123390d8d0c] = env->getMethodID(cls, "getSkewness", "()D");
            mids$[mid_getSortedValues_a53a7513ecedada2] = env->getMethodID(cls, "getSortedValues", "()[D");
            mids$[mid_getStandardDeviation_557b8123390d8d0c] = env->getMethodID(cls, "getStandardDeviation", "()D");
            mids$[mid_getSum_557b8123390d8d0c] = env->getMethodID(cls, "getSum", "()D");
            mids$[mid_getSumOfSquares_557b8123390d8d0c] = env->getMethodID(cls, "getSumOfSquares", "()D");
            mids$[mid_getValues_a53a7513ecedada2] = env->getMethodID(cls, "getValues", "()[D");
            mids$[mid_getVariance_557b8123390d8d0c] = env->getMethodID(cls, "getVariance", "()D");
            mids$[mid_getWindowSize_412668abc8d889e9] = env->getMethodID(cls, "getWindowSize", "()I");
            mids$[mid_removeMostRecentValue_0640e6acf969ed28] = env->getMethodID(cls, "removeMostRecentValue", "()V");
            mids$[mid_replaceMostRecentValue_7e960cd6eee376d8] = env->getMethodID(cls, "replaceMostRecentValue", "(D)D");
            mids$[mid_setWindowSize_a3da1a935cb37f7b] = env->getMethodID(cls, "setWindowSize", "(I)V");
            mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DescriptiveStatistics::DescriptiveStatistics() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        DescriptiveStatistics::DescriptiveStatistics(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cc18240f4a737f14, a0.this$)) {}

        DescriptiveStatistics::DescriptiveStatistics(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

        void DescriptiveStatistics::accept(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_accept_10f281d777284cea], a0);
        }

        void DescriptiveStatistics::addValue(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addValue_10f281d777284cea], a0);
        }

        jdouble DescriptiveStatistics::apply(const ::org::hipparchus::stat::descriptive::UnivariateStatistic & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_apply_1fd59dc8c1348e34], a0.this$);
        }

        void DescriptiveStatistics::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
        }

        DescriptiveStatistics DescriptiveStatistics::copy() const
        {
          return DescriptiveStatistics(env->callObjectMethod(this$, mids$[mid_copy_176a899d8f1ce21f]));
        }

        jdouble DescriptiveStatistics::getElement(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElement_69cfb132c661aca4], a0);
        }

        jdouble DescriptiveStatistics::getGeometricMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getGeometricMean_557b8123390d8d0c]);
        }

        jdouble DescriptiveStatistics::getKurtosis() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getKurtosis_557b8123390d8d0c]);
        }

        jdouble DescriptiveStatistics::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_557b8123390d8d0c]);
        }

        jdouble DescriptiveStatistics::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_557b8123390d8d0c]);
        }

        jdouble DescriptiveStatistics::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_557b8123390d8d0c]);
        }

        jlong DescriptiveStatistics::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
        }

        jdouble DescriptiveStatistics::getPercentile(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPercentile_7e960cd6eee376d8], a0);
        }

        jdouble DescriptiveStatistics::getPopulationVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPopulationVariance_557b8123390d8d0c]);
        }

        jdouble DescriptiveStatistics::getQuadraticMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getQuadraticMean_557b8123390d8d0c]);
        }

        jdouble DescriptiveStatistics::getSkewness() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSkewness_557b8123390d8d0c]);
        }

        JArray< jdouble > DescriptiveStatistics::getSortedValues() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSortedValues_a53a7513ecedada2]));
        }

        jdouble DescriptiveStatistics::getStandardDeviation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStandardDeviation_557b8123390d8d0c]);
        }

        jdouble DescriptiveStatistics::getSum() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSum_557b8123390d8d0c]);
        }

        jdouble DescriptiveStatistics::getSumOfSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumOfSquares_557b8123390d8d0c]);
        }

        JArray< jdouble > DescriptiveStatistics::getValues() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getValues_a53a7513ecedada2]));
        }

        jdouble DescriptiveStatistics::getVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getVariance_557b8123390d8d0c]);
        }

        jint DescriptiveStatistics::getWindowSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getWindowSize_412668abc8d889e9]);
        }

        void DescriptiveStatistics::removeMostRecentValue() const
        {
          env->callVoidMethod(this$, mids$[mid_removeMostRecentValue_0640e6acf969ed28]);
        }

        jdouble DescriptiveStatistics::replaceMostRecentValue(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_replaceMostRecentValue_7e960cd6eee376d8], a0);
        }

        void DescriptiveStatistics::setWindowSize(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setWindowSize_a3da1a935cb37f7b], a0);
        }

        ::java::lang::String DescriptiveStatistics::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
        static PyObject *t_DescriptiveStatistics_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DescriptiveStatistics_init_(t_DescriptiveStatistics *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DescriptiveStatistics_accept(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_addValue(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_apply(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_clear(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_copy(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getElement(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_getGeometricMean(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getKurtosis(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getMax(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getMean(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getMin(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getN(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getPercentile(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_getPopulationVariance(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getQuadraticMean(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getSkewness(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getSortedValues(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getStandardDeviation(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getSum(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getSumOfSquares(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getValues(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getVariance(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getWindowSize(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_removeMostRecentValue(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_replaceMostRecentValue(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_setWindowSize(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_toString(t_DescriptiveStatistics *self, PyObject *args);
        static PyObject *t_DescriptiveStatistics_get__geometricMean(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__kurtosis(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__max(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__mean(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__min(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__n(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__populationVariance(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__quadraticMean(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__skewness(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__sortedValues(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__standardDeviation(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__sum(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__sumOfSquares(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__values(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__variance(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__windowSize(t_DescriptiveStatistics *self, void *data);
        static int t_DescriptiveStatistics_set__windowSize(t_DescriptiveStatistics *self, PyObject *arg, void *data);
        static PyGetSetDef t_DescriptiveStatistics__fields_[] = {
          DECLARE_GET_FIELD(t_DescriptiveStatistics, geometricMean),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, kurtosis),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, max),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, mean),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, min),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, n),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, populationVariance),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, quadraticMean),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, skewness),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, sortedValues),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, standardDeviation),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, sum),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, sumOfSquares),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, values),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, variance),
          DECLARE_GETSET_FIELD(t_DescriptiveStatistics, windowSize),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DescriptiveStatistics__methods_[] = {
          DECLARE_METHOD(t_DescriptiveStatistics, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DescriptiveStatistics, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DescriptiveStatistics, accept, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, addValue, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, apply, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, clear, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, copy, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getElement, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, getGeometricMean, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getKurtosis, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getMax, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getMean, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getMin, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getN, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getPercentile, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, getPopulationVariance, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getQuadraticMean, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getSkewness, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getSortedValues, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getSum, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getSumOfSquares, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getValues, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getVariance, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getWindowSize, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, removeMostRecentValue, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, replaceMostRecentValue, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, setWindowSize, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DescriptiveStatistics)[] = {
          { Py_tp_methods, t_DescriptiveStatistics__methods_ },
          { Py_tp_init, (void *) t_DescriptiveStatistics_init_ },
          { Py_tp_getset, t_DescriptiveStatistics__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DescriptiveStatistics)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DescriptiveStatistics, t_DescriptiveStatistics, DescriptiveStatistics);

        void t_DescriptiveStatistics::install(PyObject *module)
        {
          installType(&PY_TYPE(DescriptiveStatistics), &PY_TYPE_DEF(DescriptiveStatistics), module, "DescriptiveStatistics", 0);
        }

        void t_DescriptiveStatistics::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DescriptiveStatistics), "class_", make_descriptor(DescriptiveStatistics::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DescriptiveStatistics), "wrapfn_", make_descriptor(t_DescriptiveStatistics::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DescriptiveStatistics), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DescriptiveStatistics_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DescriptiveStatistics::initializeClass, 1)))
            return NULL;
          return t_DescriptiveStatistics::wrap_Object(DescriptiveStatistics(((t_DescriptiveStatistics *) arg)->object.this$));
        }
        static PyObject *t_DescriptiveStatistics_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DescriptiveStatistics::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DescriptiveStatistics_init_(t_DescriptiveStatistics *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              DescriptiveStatistics object((jobject) NULL);

              INT_CALL(object = DescriptiveStatistics());
              self->object = object;
              break;
            }
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              DescriptiveStatistics object((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                INT_CALL(object = DescriptiveStatistics(a0));
                self->object = object;
                break;
              }
            }
            {
              jint a0;
              DescriptiveStatistics object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = DescriptiveStatistics(a0));
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

        static PyObject *t_DescriptiveStatistics_accept(t_DescriptiveStatistics *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.accept(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "accept", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_addValue(t_DescriptiveStatistics *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.addValue(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addValue", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_apply(t_DescriptiveStatistics *self, PyObject *arg)
        {
          ::org::hipparchus::stat::descriptive::UnivariateStatistic a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::hipparchus::stat::descriptive::UnivariateStatistic::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.apply(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "apply", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_clear(t_DescriptiveStatistics *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_DescriptiveStatistics_copy(t_DescriptiveStatistics *self)
        {
          DescriptiveStatistics result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return t_DescriptiveStatistics::wrap_Object(result);
        }

        static PyObject *t_DescriptiveStatistics_getElement(t_DescriptiveStatistics *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getElement(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElement", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_getGeometricMean(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getGeometricMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getKurtosis(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getKurtosis());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getMax(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getMean(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getMin(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getN(t_DescriptiveStatistics *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_DescriptiveStatistics_getPercentile(t_DescriptiveStatistics *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getPercentile(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPercentile", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_getPopulationVariance(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPopulationVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getQuadraticMean(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getQuadraticMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getSkewness(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSkewness());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getSortedValues(t_DescriptiveStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSortedValues());
          return result.wrap();
        }

        static PyObject *t_DescriptiveStatistics_getStandardDeviation(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getSum(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSum());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getSumOfSquares(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumOfSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getValues(t_DescriptiveStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getValues());
          return result.wrap();
        }

        static PyObject *t_DescriptiveStatistics_getVariance(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getWindowSize(t_DescriptiveStatistics *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getWindowSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DescriptiveStatistics_removeMostRecentValue(t_DescriptiveStatistics *self)
        {
          OBJ_CALL(self->object.removeMostRecentValue());
          Py_RETURN_NONE;
        }

        static PyObject *t_DescriptiveStatistics_replaceMostRecentValue(t_DescriptiveStatistics *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.replaceMostRecentValue(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "replaceMostRecentValue", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_setWindowSize(t_DescriptiveStatistics *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setWindowSize(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setWindowSize", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_toString(t_DescriptiveStatistics *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(DescriptiveStatistics), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_DescriptiveStatistics_get__geometricMean(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getGeometricMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__kurtosis(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getKurtosis());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__max(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__mean(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__min(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__n(t_DescriptiveStatistics *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_DescriptiveStatistics_get__populationVariance(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPopulationVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__quadraticMean(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getQuadraticMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__skewness(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSkewness());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__sortedValues(t_DescriptiveStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSortedValues());
          return value.wrap();
        }

        static PyObject *t_DescriptiveStatistics_get__standardDeviation(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__sum(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSum());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__sumOfSquares(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumOfSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__values(t_DescriptiveStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getValues());
          return value.wrap();
        }

        static PyObject *t_DescriptiveStatistics_get__variance(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__windowSize(t_DescriptiveStatistics *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getWindowSize());
          return PyLong_FromLong((long) value);
        }
        static int t_DescriptiveStatistics_set__windowSize(t_DescriptiveStatistics *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setWindowSize(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "windowSize", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *AbstractFieldODEStateInterpolator::class$ = NULL;
        jmethodID *AbstractFieldODEStateInterpolator::mids$ = NULL;
        bool AbstractFieldODEStateInterpolator::live$ = false;

        jclass AbstractFieldODEStateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_45f3e0f3929fa6d9] = env->getMethodID(cls, "getCurrentState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getGlobalCurrentState_45f3e0f3929fa6d9] = env->getMethodID(cls, "getGlobalCurrentState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getGlobalPreviousState_45f3e0f3929fa6d9] = env->getMethodID(cls, "getGlobalPreviousState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getInterpolatedState_2c40e49ec2799666] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getPreviousState_45f3e0f3929fa6d9] = env->getMethodID(cls, "getPreviousState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_isCurrentStateInterpolated_89b302893bdbe1f1] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_89b302893bdbe1f1] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_89b302893bdbe1f1] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");
            mids$[mid_restrictStep_c8a7f44dbda6aa98] = env->getMethodID(cls, "restrictStep", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator;");
            mids$[mid_getMapper_9b874f5c7e7ed33f] = env->getMethodID(cls, "getMapper", "()Lorg/hipparchus/ode/FieldEquationsMapper;");
            mids$[mid_computeInterpolatedStateAndDerivatives_468061260e52cfe4] = env->getMethodID(cls, "computeInterpolatedStateAndDerivatives", "(Lorg/hipparchus/ode/FieldEquationsMapper;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_create_d51369df1d005357] = env->getMethodID(cls, "create", "(ZLorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldODEStateInterpolator::getCurrentState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getCurrentState_45f3e0f3929fa6d9]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldODEStateInterpolator::getGlobalCurrentState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getGlobalCurrentState_45f3e0f3929fa6d9]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldODEStateInterpolator::getGlobalPreviousState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getGlobalPreviousState_45f3e0f3929fa6d9]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldODEStateInterpolator::getInterpolatedState(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_2c40e49ec2799666], a0.this$));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldODEStateInterpolator::getPreviousState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getPreviousState_45f3e0f3929fa6d9]));
        }

        jboolean AbstractFieldODEStateInterpolator::isCurrentStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCurrentStateInterpolated_89b302893bdbe1f1]);
        }

        jboolean AbstractFieldODEStateInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_89b302893bdbe1f1]);
        }

        jboolean AbstractFieldODEStateInterpolator::isPreviousStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isPreviousStateInterpolated_89b302893bdbe1f1]);
        }

        AbstractFieldODEStateInterpolator AbstractFieldODEStateInterpolator::restrictStep(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::ode::FieldODEStateAndDerivative & a1) const
        {
          return AbstractFieldODEStateInterpolator(env->callObjectMethod(this$, mids$[mid_restrictStep_c8a7f44dbda6aa98], a0.this$, a1.this$));
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
      namespace sampling {
        static PyObject *t_AbstractFieldODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldODEStateInterpolator_of_(t_AbstractFieldODEStateInterpolator *self, PyObject *args);
        static PyObject *t_AbstractFieldODEStateInterpolator_getCurrentState(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_getGlobalCurrentState(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_getGlobalPreviousState(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_getInterpolatedState(t_AbstractFieldODEStateInterpolator *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEStateInterpolator_getPreviousState(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_isCurrentStateInterpolated(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_isForward(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_isPreviousStateInterpolated(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_restrictStep(t_AbstractFieldODEStateInterpolator *self, PyObject *args);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__currentState(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__currentStateInterpolated(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__forward(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__globalCurrentState(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__globalPreviousState(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__previousState(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__previousStateInterpolated(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__parameters_(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyGetSetDef t_AbstractFieldODEStateInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, currentState),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, currentStateInterpolated),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, forward),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, globalCurrentState),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, globalPreviousState),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, previousState),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, previousStateInterpolated),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractFieldODEStateInterpolator__methods_[] = {
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, getGlobalCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, getGlobalPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, isCurrentStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, isPreviousStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, restrictStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractFieldODEStateInterpolator)[] = {
          { Py_tp_methods, t_AbstractFieldODEStateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractFieldODEStateInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractFieldODEStateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractFieldODEStateInterpolator, t_AbstractFieldODEStateInterpolator, AbstractFieldODEStateInterpolator);
        PyObject *t_AbstractFieldODEStateInterpolator::wrap_Object(const AbstractFieldODEStateInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFieldODEStateInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldODEStateInterpolator *self = (t_AbstractFieldODEStateInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractFieldODEStateInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFieldODEStateInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldODEStateInterpolator *self = (t_AbstractFieldODEStateInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractFieldODEStateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractFieldODEStateInterpolator), &PY_TYPE_DEF(AbstractFieldODEStateInterpolator), module, "AbstractFieldODEStateInterpolator", 0);
        }

        void t_AbstractFieldODEStateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEStateInterpolator), "class_", make_descriptor(AbstractFieldODEStateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEStateInterpolator), "wrapfn_", make_descriptor(t_AbstractFieldODEStateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEStateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractFieldODEStateInterpolator::initializeClass, 1)))
            return NULL;
          return t_AbstractFieldODEStateInterpolator::wrap_Object(AbstractFieldODEStateInterpolator(((t_AbstractFieldODEStateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_AbstractFieldODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractFieldODEStateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_of_(t_AbstractFieldODEStateInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_getCurrentState(t_AbstractFieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_getGlobalCurrentState(t_AbstractFieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getGlobalCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_getGlobalPreviousState(t_AbstractFieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getGlobalPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_getInterpolatedState(t_AbstractFieldODEStateInterpolator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.getInterpolatedState(a0));
            return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_getPreviousState(t_AbstractFieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_isCurrentStateInterpolated(t_AbstractFieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_isForward(t_AbstractFieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_isPreviousStateInterpolated(t_AbstractFieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_restrictStep(t_AbstractFieldODEStateInterpolator *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEStateAndDerivative a1((jobject) NULL);
          PyTypeObject **p1;
          AbstractFieldODEStateInterpolator result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.restrictStep(a0, a1));
            return t_AbstractFieldODEStateInterpolator::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "restrictStep", args);
          return NULL;
        }
        static PyObject *t_AbstractFieldODEStateInterpolator_get__parameters_(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__currentState(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__currentStateInterpolated(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__forward(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__globalCurrentState(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getGlobalCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__globalPreviousState(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getGlobalPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__previousState(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__previousStateInterpolated(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/AbstractRadiationForceModel.h"
#include "org/orekit/utils/OccultationEngine.h"
#include "java/util/List.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *AbstractRadiationForceModel::class$ = NULL;
        jmethodID *AbstractRadiationForceModel::mids$ = NULL;
        bool AbstractRadiationForceModel::live$ = false;

        jclass AbstractRadiationForceModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/AbstractRadiationForceModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addOccultingBody_fee9aa8bf77f755f] = env->getMethodID(cls, "addOccultingBody", "(Lorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_addOccultingBody_b94c0ae4ac2adae8] = env->getMethodID(cls, "addOccultingBody", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;D)V");
            mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getEventDetectors_d7cce92225eb0db2] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_8130af76f6998f44] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getOccultingBodies_0d9551367f7ecdef] = env->getMethodID(cls, "getOccultingBodies", "()Ljava/util/List;");
            mids$[mid_getGeneralEclipseAngles_4c10288a24106aac] = env->getMethodID(cls, "getGeneralEclipseAngles", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getGeneralEclipseAngles_e9034d16e917beab] = env->getMethodID(cls, "getGeneralEclipseAngles", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractRadiationForceModel::addOccultingBody(const ::org::orekit::bodies::OneAxisEllipsoid & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addOccultingBody_fee9aa8bf77f755f], a0.this$);
        }

        void AbstractRadiationForceModel::addOccultingBody(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addOccultingBody_b94c0ae4ac2adae8], a0.this$, a1);
        }

        jboolean AbstractRadiationForceModel::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1]);
        }

        ::java::util::stream::Stream AbstractRadiationForceModel::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_d7cce92225eb0db2]));
        }

        ::java::util::stream::Stream AbstractRadiationForceModel::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_8130af76f6998f44], a0.this$));
        }

        ::java::util::List AbstractRadiationForceModel::getOccultingBodies() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getOccultingBodies_0d9551367f7ecdef]));
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
        static PyObject *t_AbstractRadiationForceModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRadiationForceModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRadiationForceModel_addOccultingBody(t_AbstractRadiationForceModel *self, PyObject *args);
        static PyObject *t_AbstractRadiationForceModel_dependsOnPositionOnly(t_AbstractRadiationForceModel *self);
        static PyObject *t_AbstractRadiationForceModel_getEventDetectors(t_AbstractRadiationForceModel *self);
        static PyObject *t_AbstractRadiationForceModel_getFieldEventDetectors(t_AbstractRadiationForceModel *self, PyObject *arg);
        static PyObject *t_AbstractRadiationForceModel_getOccultingBodies(t_AbstractRadiationForceModel *self);
        static PyObject *t_AbstractRadiationForceModel_get__eventDetectors(t_AbstractRadiationForceModel *self, void *data);
        static PyObject *t_AbstractRadiationForceModel_get__occultingBodies(t_AbstractRadiationForceModel *self, void *data);
        static PyGetSetDef t_AbstractRadiationForceModel__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractRadiationForceModel, eventDetectors),
          DECLARE_GET_FIELD(t_AbstractRadiationForceModel, occultingBodies),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractRadiationForceModel__methods_[] = {
          DECLARE_METHOD(t_AbstractRadiationForceModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRadiationForceModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRadiationForceModel, addOccultingBody, METH_VARARGS),
          DECLARE_METHOD(t_AbstractRadiationForceModel, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRadiationForceModel, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRadiationForceModel, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_AbstractRadiationForceModel, getOccultingBodies, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractRadiationForceModel)[] = {
          { Py_tp_methods, t_AbstractRadiationForceModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractRadiationForceModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractRadiationForceModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractRadiationForceModel, t_AbstractRadiationForceModel, AbstractRadiationForceModel);

        void t_AbstractRadiationForceModel::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractRadiationForceModel), &PY_TYPE_DEF(AbstractRadiationForceModel), module, "AbstractRadiationForceModel", 0);
        }

        void t_AbstractRadiationForceModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRadiationForceModel), "class_", make_descriptor(AbstractRadiationForceModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRadiationForceModel), "wrapfn_", make_descriptor(t_AbstractRadiationForceModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRadiationForceModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractRadiationForceModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractRadiationForceModel::initializeClass, 1)))
            return NULL;
          return t_AbstractRadiationForceModel::wrap_Object(AbstractRadiationForceModel(((t_AbstractRadiationForceModel *) arg)->object.this$));
        }
        static PyObject *t_AbstractRadiationForceModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractRadiationForceModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractRadiationForceModel_addOccultingBody(t_AbstractRadiationForceModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
              {
                OBJ_CALL(self->object.addOccultingBody(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
              jdouble a1;

              if (!parseArgs(args, "kD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.addOccultingBody(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addOccultingBody", args);
          return NULL;
        }

        static PyObject *t_AbstractRadiationForceModel_dependsOnPositionOnly(t_AbstractRadiationForceModel *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractRadiationForceModel_getEventDetectors(t_AbstractRadiationForceModel *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_AbstractRadiationForceModel_getFieldEventDetectors(t_AbstractRadiationForceModel *self, PyObject *arg)
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

        static PyObject *t_AbstractRadiationForceModel_getOccultingBodies(t_AbstractRadiationForceModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getOccultingBodies());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(OccultationEngine));
        }

        static PyObject *t_AbstractRadiationForceModel_get__eventDetectors(t_AbstractRadiationForceModel *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_AbstractRadiationForceModel_get__occultingBodies(t_AbstractRadiationForceModel *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getOccultingBodies());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/StorelessUnivariateStatistic.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/util/function/DoubleConsumer.h"
#include "org/hipparchus/stat/descriptive/StorelessUnivariateStatistic.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StorelessUnivariateStatistic::class$ = NULL;
        jmethodID *StorelessUnivariateStatistic::mids$ = NULL;
        bool StorelessUnivariateStatistic::live$ = false;

        jclass StorelessUnivariateStatistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StorelessUnivariateStatistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_accept_10f281d777284cea] = env->getMethodID(cls, "accept", "(D)V");
            mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_copy_0a0ee925e68176d0] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/StorelessUnivariateStatistic;");
            mids$[mid_evaluate_9eeeb1ae977f525d] = env->getMethodID(cls, "evaluate", "([DII)D");
            mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getResult_557b8123390d8d0c] = env->getMethodID(cls, "getResult", "()D");
            mids$[mid_increment_10f281d777284cea] = env->getMethodID(cls, "increment", "(D)V");
            mids$[mid_incrementAll_cc18240f4a737f14] = env->getMethodID(cls, "incrementAll", "([D)V");
            mids$[mid_incrementAll_91b51b3c05127ead] = env->getMethodID(cls, "incrementAll", "([DII)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void StorelessUnivariateStatistic::accept(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_accept_10f281d777284cea], a0);
        }

        void StorelessUnivariateStatistic::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
        }

        StorelessUnivariateStatistic StorelessUnivariateStatistic::copy() const
        {
          return StorelessUnivariateStatistic(env->callObjectMethod(this$, mids$[mid_copy_0a0ee925e68176d0]));
        }

        jdouble StorelessUnivariateStatistic::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_9eeeb1ae977f525d], a0.this$, a1, a2);
        }

        jlong StorelessUnivariateStatistic::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
        }

        jdouble StorelessUnivariateStatistic::getResult() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getResult_557b8123390d8d0c]);
        }

        void StorelessUnivariateStatistic::increment(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_increment_10f281d777284cea], a0);
        }

        void StorelessUnivariateStatistic::incrementAll(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_incrementAll_cc18240f4a737f14], a0.this$);
        }

        void StorelessUnivariateStatistic::incrementAll(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_incrementAll_91b51b3c05127ead], a0.this$, a1, a2);
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
        static PyObject *t_StorelessUnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StorelessUnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StorelessUnivariateStatistic_accept(t_StorelessUnivariateStatistic *self, PyObject *arg);
        static PyObject *t_StorelessUnivariateStatistic_clear(t_StorelessUnivariateStatistic *self);
        static PyObject *t_StorelessUnivariateStatistic_copy(t_StorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_StorelessUnivariateStatistic_evaluate(t_StorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_StorelessUnivariateStatistic_getN(t_StorelessUnivariateStatistic *self);
        static PyObject *t_StorelessUnivariateStatistic_getResult(t_StorelessUnivariateStatistic *self);
        static PyObject *t_StorelessUnivariateStatistic_increment(t_StorelessUnivariateStatistic *self, PyObject *arg);
        static PyObject *t_StorelessUnivariateStatistic_incrementAll(t_StorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_StorelessUnivariateStatistic_get__n(t_StorelessUnivariateStatistic *self, void *data);
        static PyObject *t_StorelessUnivariateStatistic_get__result(t_StorelessUnivariateStatistic *self, void *data);
        static PyGetSetDef t_StorelessUnivariateStatistic__fields_[] = {
          DECLARE_GET_FIELD(t_StorelessUnivariateStatistic, n),
          DECLARE_GET_FIELD(t_StorelessUnivariateStatistic, result),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StorelessUnivariateStatistic__methods_[] = {
          DECLARE_METHOD(t_StorelessUnivariateStatistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, accept, METH_O),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, clear, METH_NOARGS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, copy, METH_VARARGS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, evaluate, METH_VARARGS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, getN, METH_NOARGS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, getResult, METH_NOARGS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, increment, METH_O),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, incrementAll, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StorelessUnivariateStatistic)[] = {
          { Py_tp_methods, t_StorelessUnivariateStatistic__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StorelessUnivariateStatistic__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StorelessUnivariateStatistic)[] = {
          &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::UnivariateStatistic),
          NULL
        };

        DEFINE_TYPE(StorelessUnivariateStatistic, t_StorelessUnivariateStatistic, StorelessUnivariateStatistic);

        void t_StorelessUnivariateStatistic::install(PyObject *module)
        {
          installType(&PY_TYPE(StorelessUnivariateStatistic), &PY_TYPE_DEF(StorelessUnivariateStatistic), module, "StorelessUnivariateStatistic", 0);
        }

        void t_StorelessUnivariateStatistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessUnivariateStatistic), "class_", make_descriptor(StorelessUnivariateStatistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessUnivariateStatistic), "wrapfn_", make_descriptor(t_StorelessUnivariateStatistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessUnivariateStatistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StorelessUnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StorelessUnivariateStatistic::initializeClass, 1)))
            return NULL;
          return t_StorelessUnivariateStatistic::wrap_Object(StorelessUnivariateStatistic(((t_StorelessUnivariateStatistic *) arg)->object.this$));
        }
        static PyObject *t_StorelessUnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StorelessUnivariateStatistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StorelessUnivariateStatistic_accept(t_StorelessUnivariateStatistic *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.accept(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "accept", arg);
          return NULL;
        }

        static PyObject *t_StorelessUnivariateStatistic_clear(t_StorelessUnivariateStatistic *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_StorelessUnivariateStatistic_copy(t_StorelessUnivariateStatistic *self, PyObject *args)
        {
          StorelessUnivariateStatistic result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_StorelessUnivariateStatistic::wrap_Object(result);
          }

          return callSuper(PY_TYPE(StorelessUnivariateStatistic), (PyObject *) self, "copy", args, 2);
        }

        static PyObject *t_StorelessUnivariateStatistic_evaluate(t_StorelessUnivariateStatistic *self, PyObject *args)
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

          return callSuper(PY_TYPE(StorelessUnivariateStatistic), (PyObject *) self, "evaluate", args, 2);
        }

        static PyObject *t_StorelessUnivariateStatistic_getN(t_StorelessUnivariateStatistic *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_StorelessUnivariateStatistic_getResult(t_StorelessUnivariateStatistic *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getResult());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StorelessUnivariateStatistic_increment(t_StorelessUnivariateStatistic *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.increment(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "increment", arg);
          return NULL;
        }

        static PyObject *t_StorelessUnivariateStatistic_incrementAll(t_StorelessUnivariateStatistic *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(self->object.incrementAll(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jint a2;

              if (!parseArgs(args, "[DII", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.incrementAll(a0, a1, a2));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "incrementAll", args);
          return NULL;
        }

        static PyObject *t_StorelessUnivariateStatistic_get__n(t_StorelessUnivariateStatistic *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_StorelessUnivariateStatistic_get__result(t_StorelessUnivariateStatistic *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getResult());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsFieldIntegrator.h"
#include "org/hipparchus/linear/Array2DRowFieldMatrix.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/FieldExpandableODE.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsFieldIntegrator::class$ = NULL;
        jmethodID *AdamsFieldIntegrator::mids$ = NULL;
        bool AdamsFieldIntegrator::live$ = false;

        jclass AdamsFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_306916b7267d4f8e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;IIDD[D[D)V");
            mids$[mid_init$_314a9b0b74ec2ca2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;IIDDDD)V");
            mids$[mid_integrate_dd582e1c9ef253c9] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_updateHighOrderDerivativesPhase1_9b7147116b9a105f] = env->getMethodID(cls, "updateHighOrderDerivativesPhase1", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase2_227b5b7fcf4fbdd6] = env->getMethodID(cls, "updateHighOrderDerivativesPhase2", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/Array2DRowFieldMatrix;)V");
            mids$[mid_initializeHighOrderDerivatives_688ff0660b77c6d1] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
            mids$[mid_errorEstimation_1fb9f4eb0e32bdff] = env->getMethodID(cls, "errorEstimation", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/FieldMatrix;)D");
            mids$[mid_finalizeStep_a39c6521f8e99c62] = env->getMethodID(cls, "finalizeStep", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/Array2DRowFieldMatrix;ZLorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsFieldIntegrator::AdamsFieldIntegrator(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, jint a2, jint a3, jdouble a4, jdouble a5, const JArray< jdouble > & a6, const JArray< jdouble > & a7) : ::org::hipparchus::ode::MultistepFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_306916b7267d4f8e, a0.this$, a1.this$, a2, a3, a4, a5, a6.this$, a7.this$)) {}

        AdamsFieldIntegrator::AdamsFieldIntegrator(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, jint a2, jint a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::org::hipparchus::ode::MultistepFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_314a9b0b74ec2ca2, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7)) {}

        ::org::hipparchus::ode::FieldODEStateAndDerivative AdamsFieldIntegrator::integrate(const ::org::hipparchus::ode::FieldExpandableODE & a0, const ::org::hipparchus::ode::FieldODEState & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_dd582e1c9ef253c9], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::Array2DRowFieldMatrix AdamsFieldIntegrator::updateHighOrderDerivativesPhase1(const ::org::hipparchus::linear::Array2DRowFieldMatrix & a0) const
        {
          return ::org::hipparchus::linear::Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_updateHighOrderDerivativesPhase1_9b7147116b9a105f], a0.this$));
        }

        void AdamsFieldIntegrator::updateHighOrderDerivativesPhase2(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::hipparchus::linear::Array2DRowFieldMatrix & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_updateHighOrderDerivativesPhase2_227b5b7fcf4fbdd6], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_AdamsFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsFieldIntegrator_of_(t_AdamsFieldIntegrator *self, PyObject *args);
        static int t_AdamsFieldIntegrator_init_(t_AdamsFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsFieldIntegrator_integrate(t_AdamsFieldIntegrator *self, PyObject *args);
        static PyObject *t_AdamsFieldIntegrator_updateHighOrderDerivativesPhase1(t_AdamsFieldIntegrator *self, PyObject *arg);
        static PyObject *t_AdamsFieldIntegrator_updateHighOrderDerivativesPhase2(t_AdamsFieldIntegrator *self, PyObject *args);
        static PyObject *t_AdamsFieldIntegrator_get__parameters_(t_AdamsFieldIntegrator *self, void *data);
        static PyGetSetDef t_AdamsFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_AdamsFieldIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_AdamsFieldIntegrator, updateHighOrderDerivativesPhase1, METH_O),
          DECLARE_METHOD(t_AdamsFieldIntegrator, updateHighOrderDerivativesPhase2, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsFieldIntegrator)[] = {
          { Py_tp_methods, t_AdamsFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsFieldIntegrator_init_ },
          { Py_tp_getset, t_AdamsFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::MultistepFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsFieldIntegrator, t_AdamsFieldIntegrator, AdamsFieldIntegrator);
        PyObject *t_AdamsFieldIntegrator::wrap_Object(const AdamsFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsFieldIntegrator *self = (t_AdamsFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsFieldIntegrator *self = (t_AdamsFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsFieldIntegrator), &PY_TYPE_DEF(AdamsFieldIntegrator), module, "AdamsFieldIntegrator", 0);
        }

        void t_AdamsFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsFieldIntegrator), "class_", make_descriptor(AdamsFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsFieldIntegrator), "wrapfn_", make_descriptor(t_AdamsFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsFieldIntegrator::wrap_Object(AdamsFieldIntegrator(((t_AdamsFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsFieldIntegrator_of_(t_AdamsFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdamsFieldIntegrator_init_(t_AdamsFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 8:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              jint a2;
              jint a3;
              jdouble a4;
              jdouble a5;
              JArray< jdouble > a6((jobject) NULL);
              JArray< jdouble > a7((jobject) NULL);
              AdamsFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KsIIDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = AdamsFieldIntegrator(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              jint a2;
              jint a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              AdamsFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KsIIDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = AdamsFieldIntegrator(a0, a1, a2, a3, a4, a5, a6, a7));
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

        static PyObject *t_AdamsFieldIntegrator_integrate(t_AdamsFieldIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldExpandableODE a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEState a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::ode::FieldExpandableODE::initializeClass, ::org::hipparchus::ode::FieldODEState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldExpandableODE::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2));
            return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(AdamsFieldIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_AdamsFieldIntegrator_updateHighOrderDerivativesPhase1(t_AdamsFieldIntegrator *self, PyObject *arg)
        {
          ::org::hipparchus::linear::Array2DRowFieldMatrix a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::linear::Array2DRowFieldMatrix result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::linear::Array2DRowFieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_Array2DRowFieldMatrix::parameters_))
          {
            OBJ_CALL(result = self->object.updateHighOrderDerivativesPhase1(a0));
            return ::org::hipparchus::linear::t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase1", arg);
          return NULL;
        }

        static PyObject *t_AdamsFieldIntegrator_updateHighOrderDerivativesPhase2(t_AdamsFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::linear::Array2DRowFieldMatrix a2((jobject) NULL);
          PyTypeObject **p2;

          if (!parseArgs(args, "[K[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::linear::Array2DRowFieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::linear::t_Array2DRowFieldMatrix::parameters_))
          {
            OBJ_CALL(self->object.updateHighOrderDerivativesPhase2(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase2", args);
          return NULL;
        }
        static PyObject *t_AdamsFieldIntegrator_get__parameters_(t_AdamsFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Short.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Short.h"
#include "java/lang/String.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Short::class$ = NULL;
    jmethodID *Short::mids$ = NULL;
    bool Short::live$ = false;
    jint Short::BYTES = (jint) 0;
    jshort Short::MAX_VALUE = (jshort) 0;
    jshort Short::MIN_VALUE = (jshort) 0;
    jint Short::SIZE = (jint) 0;
    ::java::lang::Class *Short::TYPE = NULL;

    jclass Short::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Short");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_4dd7cb85dfbe2923] = env->getMethodID(cls, "<init>", "(S)V");
        mids$[mid_byteValue_acadfed42a0dbd0d] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_e0728e8781006baf] = env->getStaticMethodID(cls, "compare", "(SS)I");
        mids$[mid_compareTo_ef6c32dd701634e5] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Short;)I");
        mids$[mid_compareUnsigned_e0728e8781006baf] = env->getStaticMethodID(cls, "compareUnsigned", "(SS)I");
        mids$[mid_decode_0e5c7a54d61db9d3] = env->getStaticMethodID(cls, "decode", "(Ljava/lang/String;)Ljava/lang/Short;");
        mids$[mid_doubleValue_557b8123390d8d0c] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatValue_04fe014f7609dc26] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_84f49866c8454b37] = env->getStaticMethodID(cls, "hashCode", "(S)I");
        mids$[mid_intValue_412668abc8d889e9] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_longValue_9e26256fb0d384a2] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_parseShort_3ca6edc7cfaf0911] = env->getStaticMethodID(cls, "parseShort", "(Ljava/lang/String;)S");
        mids$[mid_parseShort_a3b4680aa28e59ae] = env->getStaticMethodID(cls, "parseShort", "(Ljava/lang/String;I)S");
        mids$[mid_reverseBytes_f2d44bfa48188520] = env->getStaticMethodID(cls, "reverseBytes", "(S)S");
        mids$[mid_shortValue_2554afc868a7ba2a] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_515bf94be63f073f] = env->getStaticMethodID(cls, "toString", "(S)Ljava/lang/String;");
        mids$[mid_toUnsignedInt_84f49866c8454b37] = env->getStaticMethodID(cls, "toUnsignedInt", "(S)I");
        mids$[mid_toUnsignedLong_e65426e48973be4a] = env->getStaticMethodID(cls, "toUnsignedLong", "(S)J");
        mids$[mid_valueOf_0e5c7a54d61db9d3] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Short;");
        mids$[mid_valueOf_194b70819fe4e06e] = env->getStaticMethodID(cls, "valueOf", "(S)Ljava/lang/Short;");
        mids$[mid_valueOf_301de946165195a3] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;I)Ljava/lang/Short;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        MAX_VALUE = env->getStaticShortField(cls, "MAX_VALUE");
        MIN_VALUE = env->getStaticShortField(cls, "MIN_VALUE");
        SIZE = env->getStaticIntField(cls, "SIZE");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Short::Short(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    Short::Short(jshort a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_4dd7cb85dfbe2923, a0)) {}

    jbyte Short::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_acadfed42a0dbd0d]);
    }

    jint Short::compare(jshort a0, jshort a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_e0728e8781006baf], a0, a1);
    }

    jint Short::compareTo(const Short & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_ef6c32dd701634e5], a0.this$);
    }

    jint Short::compareUnsigned(jshort a0, jshort a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_e0728e8781006baf], a0, a1);
    }

    Short Short::decode(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Short(env->callStaticObjectMethod(cls, mids$[mid_decode_0e5c7a54d61db9d3], a0.this$));
    }

    jdouble Short::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_557b8123390d8d0c]);
    }

    jboolean Short::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    jfloat Short::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_04fe014f7609dc26]);
    }

    jint Short::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jint Short::hashCode(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_84f49866c8454b37], a0);
    }

    jint Short::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_412668abc8d889e9]);
    }

    jlong Short::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_9e26256fb0d384a2]);
    }

    jshort Short::parseShort(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticShortMethod(cls, mids$[mid_parseShort_3ca6edc7cfaf0911], a0.this$);
    }

    jshort Short::parseShort(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticShortMethod(cls, mids$[mid_parseShort_a3b4680aa28e59ae], a0.this$, a1);
    }

    jshort Short::reverseBytes(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticShortMethod(cls, mids$[mid_reverseBytes_f2d44bfa48188520], a0);
    }

    jshort Short::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_2554afc868a7ba2a]);
    }

    ::java::lang::String Short::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }

    ::java::lang::String Short::toString(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_515bf94be63f073f], a0));
    }

    jint Short::toUnsignedInt(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toUnsignedInt_84f49866c8454b37], a0);
    }

    jlong Short::toUnsignedLong(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_toUnsignedLong_e65426e48973be4a], a0);
    }

    Short Short::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Short(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0e5c7a54d61db9d3], a0.this$));
    }

    Short Short::valueOf(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Short(env->callStaticObjectMethod(cls, mids$[mid_valueOf_194b70819fe4e06e], a0));
    }

    Short Short::valueOf(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Short(env->callStaticObjectMethod(cls, mids$[mid_valueOf_301de946165195a3], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Short_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Short_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Short_init_(t_Short *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Short_byteValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Short_compareTo(t_Short *self, PyObject *arg);
    static PyObject *t_Short_compareUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Short_decode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Short_doubleValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_equals(t_Short *self, PyObject *args);
    static PyObject *t_Short_floatValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_hashCode(t_Short *self, PyObject *args);
    static PyObject *t_Short_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Short_intValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_longValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_parseShort(PyTypeObject *type, PyObject *args);
    static PyObject *t_Short_reverseBytes(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Short_shortValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_toString(t_Short *self, PyObject *args);
    static PyObject *t_Short_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Short_toUnsignedInt(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Short_toUnsignedLong(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Short_valueOf(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Short__methods_[] = {
      DECLARE_METHOD(t_Short, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, byteValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Short, compareTo, METH_O),
      DECLARE_METHOD(t_Short, compareUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Short, decode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, doubleValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, equals, METH_VARARGS),
      DECLARE_METHOD(t_Short, floatValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Short, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, intValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, longValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, parseShort, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Short, reverseBytes, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, shortValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, toString, METH_VARARGS),
      DECLARE_METHOD(t_Short, toString_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, toUnsignedInt, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, toUnsignedLong, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Short)[] = {
      { Py_tp_methods, t_Short__methods_ },
      { Py_tp_init, (void *) t_Short_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Short)[] = {
      &PY_TYPE_DEF(::java::lang::Number),
      NULL
    };

    DEFINE_TYPE(Short, t_Short, Short);

    void t_Short::install(PyObject *module)
    {
      installType(&PY_TYPE(Short), &PY_TYPE_DEF(Short), module, "Short", 0);
    }

    void t_Short::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "class_", make_descriptor(Short::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "wrapfn_", make_descriptor(unboxShort));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "boxfn_", make_descriptor(boxShort));
      env->getClass(Short::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "BYTES", make_descriptor(Short::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "MAX_VALUE", make_descriptor(Short::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "MIN_VALUE", make_descriptor(Short::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "SIZE", make_descriptor(Short::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Short::TYPE)));
    }

    static PyObject *t_Short_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Short::initializeClass, 1)))
        return NULL;
      return t_Short::wrap_Object(Short(((t_Short *) arg)->object.this$));
    }
    static PyObject *t_Short_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Short::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Short_init_(t_Short *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Short object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Short(a0));
            self->object = object;
            break;
          }
        }
        {
          jshort a0;
          Short object((jobject) NULL);

          if (!parseArgs(args, "S", &a0))
          {
            INT_CALL(object = Short(a0));
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

    static PyObject *t_Short_byteValue(t_Short *self, PyObject *args)
    {
      jbyte result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.byteValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "byteValue", args, 2);
    }

    static PyObject *t_Short_compare(PyTypeObject *type, PyObject *args)
    {
      jshort a0;
      jshort a1;
      jint result;

      if (!parseArgs(args, "SS", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Short::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Short_compareTo(t_Short *self, PyObject *arg)
    {
      Short a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Short), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Short_compareUnsigned(PyTypeObject *type, PyObject *args)
    {
      jshort a0;
      jshort a1;
      jint result;

      if (!parseArgs(args, "SS", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Short::compareUnsigned(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compareUnsigned", args);
      return NULL;
    }

    static PyObject *t_Short_decode(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      Short result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::decode(a0));
        return t_Short::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "decode", arg);
      return NULL;
    }

    static PyObject *t_Short_doubleValue(t_Short *self, PyObject *args)
    {
      jdouble result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "doubleValue", args, 2);
    }

    static PyObject *t_Short_equals(t_Short *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Short_floatValue(t_Short *self, PyObject *args)
    {
      jfloat result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.floatValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "floatValue", args, 2);
    }

    static PyObject *t_Short_hashCode(t_Short *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Short_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jshort a0;
      jint result;

      if (!parseArgs(args, "S", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Short_intValue(t_Short *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "intValue", args, 2);
    }

    static PyObject *t_Short_longValue(t_Short *self, PyObject *args)
    {
      jlong result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.longValue());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "longValue", args, 2);
    }

    static PyObject *t_Short_parseShort(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jshort result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Short::parseShort(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jshort result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Short::parseShort(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "parseShort", args);
      return NULL;
    }

    static PyObject *t_Short_reverseBytes(PyTypeObject *type, PyObject *arg)
    {
      jshort a0;
      jshort result;

      if (!parseArg(arg, "S", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::reverseBytes(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "reverseBytes", arg);
      return NULL;
    }

    static PyObject *t_Short_shortValue(t_Short *self, PyObject *args)
    {
      jshort result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.shortValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "shortValue", args, 2);
    }

    static PyObject *t_Short_toString(t_Short *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Short_toString_(PyTypeObject *type, PyObject *args)
    {
      jshort a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "S", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::toString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Short_toUnsignedInt(PyTypeObject *type, PyObject *arg)
    {
      jshort a0;
      jint result;

      if (!parseArg(arg, "S", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::toUnsignedInt(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "toUnsignedInt", arg);
      return NULL;
    }

    static PyObject *t_Short_toUnsignedLong(PyTypeObject *type, PyObject *arg)
    {
      jshort a0;
      jlong result;

      if (!parseArg(arg, "S", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::toUnsignedLong(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "toUnsignedLong", arg);
      return NULL;
    }

    static PyObject *t_Short_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Short result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Short::valueOf(a0));
            return t_Short::wrap_Object(result);
          }
        }
        {
          jshort a0;
          Short result((jobject) NULL);

          if (!parseArgs(args, "S", &a0))
          {
            OBJ_CALL(result = ::java::lang::Short::valueOf(a0));
            return t_Short::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          Short result((jobject) NULL);

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Short::valueOf(a0, a1));
            return t_Short::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/SignSemantic.h"
#include "org/orekit/estimation/measurements/generation/SignSemantic.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *SignSemantic::class$ = NULL;
          jmethodID *SignSemantic::mids$ = NULL;
          bool SignSemantic::live$ = false;
          SignSemantic *SignSemantic::FEASIBLE_MEASUREMENT_WHEN_NEGATIVE = NULL;
          SignSemantic *SignSemantic::FEASIBLE_MEASUREMENT_WHEN_POSITIVE = NULL;

          jclass SignSemantic::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/SignSemantic");

              mids$ = new jmethodID[max_mid];
              mids$[mid_measurementIsFeasible_dd69c3ab2404bb71] = env->getMethodID(cls, "measurementIsFeasible", "(D)Z");
              mids$[mid_valueOf_6eb2bdb9f9e4160e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/estimation/measurements/generation/SignSemantic;");
              mids$[mid_values_2b60a43b42635daf] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/estimation/measurements/generation/SignSemantic;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              FEASIBLE_MEASUREMENT_WHEN_NEGATIVE = new SignSemantic(env->getStaticObjectField(cls, "FEASIBLE_MEASUREMENT_WHEN_NEGATIVE", "Lorg/orekit/estimation/measurements/generation/SignSemantic;"));
              FEASIBLE_MEASUREMENT_WHEN_POSITIVE = new SignSemantic(env->getStaticObjectField(cls, "FEASIBLE_MEASUREMENT_WHEN_POSITIVE", "Lorg/orekit/estimation/measurements/generation/SignSemantic;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean SignSemantic::measurementIsFeasible(jdouble a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_measurementIsFeasible_dd69c3ab2404bb71], a0);
          }

          SignSemantic SignSemantic::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SignSemantic(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6eb2bdb9f9e4160e], a0.this$));
          }

          JArray< SignSemantic > SignSemantic::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< SignSemantic >(env->callStaticObjectMethod(cls, mids$[mid_values_2b60a43b42635daf]));
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
          static PyObject *t_SignSemantic_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SignSemantic_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SignSemantic_of_(t_SignSemantic *self, PyObject *args);
          static PyObject *t_SignSemantic_measurementIsFeasible(t_SignSemantic *self, PyObject *arg);
          static PyObject *t_SignSemantic_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_SignSemantic_values(PyTypeObject *type);
          static PyObject *t_SignSemantic_get__parameters_(t_SignSemantic *self, void *data);
          static PyGetSetDef t_SignSemantic__fields_[] = {
            DECLARE_GET_FIELD(t_SignSemantic, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SignSemantic__methods_[] = {
            DECLARE_METHOD(t_SignSemantic, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SignSemantic, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SignSemantic, of_, METH_VARARGS),
            DECLARE_METHOD(t_SignSemantic, measurementIsFeasible, METH_O),
            DECLARE_METHOD(t_SignSemantic, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_SignSemantic, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SignSemantic)[] = {
            { Py_tp_methods, t_SignSemantic__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SignSemantic__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SignSemantic)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(SignSemantic, t_SignSemantic, SignSemantic);
          PyObject *t_SignSemantic::wrap_Object(const SignSemantic& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SignSemantic::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SignSemantic *self = (t_SignSemantic *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SignSemantic::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SignSemantic::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SignSemantic *self = (t_SignSemantic *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SignSemantic::install(PyObject *module)
          {
            installType(&PY_TYPE(SignSemantic), &PY_TYPE_DEF(SignSemantic), module, "SignSemantic", 0);
          }

          void t_SignSemantic::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SignSemantic), "class_", make_descriptor(SignSemantic::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SignSemantic), "wrapfn_", make_descriptor(t_SignSemantic::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SignSemantic), "boxfn_", make_descriptor(boxObject));
            env->getClass(SignSemantic::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SignSemantic), "FEASIBLE_MEASUREMENT_WHEN_NEGATIVE", make_descriptor(t_SignSemantic::wrap_Object(*SignSemantic::FEASIBLE_MEASUREMENT_WHEN_NEGATIVE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SignSemantic), "FEASIBLE_MEASUREMENT_WHEN_POSITIVE", make_descriptor(t_SignSemantic::wrap_Object(*SignSemantic::FEASIBLE_MEASUREMENT_WHEN_POSITIVE)));
          }

          static PyObject *t_SignSemantic_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SignSemantic::initializeClass, 1)))
              return NULL;
            return t_SignSemantic::wrap_Object(SignSemantic(((t_SignSemantic *) arg)->object.this$));
          }
          static PyObject *t_SignSemantic_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SignSemantic::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SignSemantic_of_(t_SignSemantic *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_SignSemantic_measurementIsFeasible(t_SignSemantic *self, PyObject *arg)
          {
            jdouble a0;
            jboolean result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.measurementIsFeasible(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "measurementIsFeasible", arg);
            return NULL;
          }

          static PyObject *t_SignSemantic_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            SignSemantic result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::generation::SignSemantic::valueOf(a0));
              return t_SignSemantic::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_SignSemantic_values(PyTypeObject *type)
          {
            JArray< SignSemantic > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::estimation::measurements::generation::SignSemantic::values());
            return JArray<jobject>(result.this$).wrap(t_SignSemantic::wrap_jobject);
          }
          static PyObject *t_SignSemantic_get__parameters_(t_SignSemantic *self, void *data)
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
#include "org/hipparchus/util/FastMath.h"
#include "org/hipparchus/util/SinhCosh.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/util/SinCos.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *FastMath::class$ = NULL;
      jmethodID *FastMath::mids$ = NULL;
      bool FastMath::live$ = false;
      jdouble FastMath::E = (jdouble) 0;
      jdouble FastMath::PI = (jdouble) 0;

      jclass FastMath::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/FastMath");

          mids$ = new jmethodID[max_mid];
          mids$[mid_IEEEremainder_2268d18be49a6087] = env->getStaticMethodID(cls, "IEEEremainder", "(DD)D");
          mids$[mid_IEEEremainder_0c85c14ef225acd0] = env->getStaticMethodID(cls, "IEEEremainder", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_IEEEremainder_d5f58731bcb8a011] = env->getStaticMethodID(cls, "IEEEremainder", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_abs_7e960cd6eee376d8] = env->getStaticMethodID(cls, "abs", "(D)D");
          mids$[mid_abs_d86c73ce94a2219d] = env->getStaticMethodID(cls, "abs", "(F)F");
          mids$[mid_abs_0092017e99012694] = env->getStaticMethodID(cls, "abs", "(I)I");
          mids$[mid_abs_f4ad805a81234b49] = env->getStaticMethodID(cls, "abs", "(J)J");
          mids$[mid_abs_6672ad854985cb64] = env->getStaticMethodID(cls, "abs", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_absExact_0092017e99012694] = env->getStaticMethodID(cls, "absExact", "(I)I");
          mids$[mid_absExact_f4ad805a81234b49] = env->getStaticMethodID(cls, "absExact", "(J)J");
          mids$[mid_acos_7e960cd6eee376d8] = env->getStaticMethodID(cls, "acos", "(D)D");
          mids$[mid_acos_6672ad854985cb64] = env->getStaticMethodID(cls, "acos", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_acosh_7e960cd6eee376d8] = env->getStaticMethodID(cls, "acosh", "(D)D");
          mids$[mid_acosh_6672ad854985cb64] = env->getStaticMethodID(cls, "acosh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_addExact_5625cf3db98dadc1] = env->getStaticMethodID(cls, "addExact", "(II)I");
          mids$[mid_addExact_c18ab8eab0c49f84] = env->getStaticMethodID(cls, "addExact", "(JJ)J");
          mids$[mid_asin_7e960cd6eee376d8] = env->getStaticMethodID(cls, "asin", "(D)D");
          mids$[mid_asin_6672ad854985cb64] = env->getStaticMethodID(cls, "asin", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_asinh_7e960cd6eee376d8] = env->getStaticMethodID(cls, "asinh", "(D)D");
          mids$[mid_asinh_6672ad854985cb64] = env->getStaticMethodID(cls, "asinh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_atan_7e960cd6eee376d8] = env->getStaticMethodID(cls, "atan", "(D)D");
          mids$[mid_atan_6672ad854985cb64] = env->getStaticMethodID(cls, "atan", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_atan2_2268d18be49a6087] = env->getStaticMethodID(cls, "atan2", "(DD)D");
          mids$[mid_atan2_d5f58731bcb8a011] = env->getStaticMethodID(cls, "atan2", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_atanh_7e960cd6eee376d8] = env->getStaticMethodID(cls, "atanh", "(D)D");
          mids$[mid_atanh_6672ad854985cb64] = env->getStaticMethodID(cls, "atanh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_cbrt_7e960cd6eee376d8] = env->getStaticMethodID(cls, "cbrt", "(D)D");
          mids$[mid_cbrt_6672ad854985cb64] = env->getStaticMethodID(cls, "cbrt", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ceil_7e960cd6eee376d8] = env->getStaticMethodID(cls, "ceil", "(D)D");
          mids$[mid_ceil_6672ad854985cb64] = env->getStaticMethodID(cls, "ceil", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ceilDiv_5625cf3db98dadc1] = env->getStaticMethodID(cls, "ceilDiv", "(II)I");
          mids$[mid_ceilDiv_974ee1cf526db4b7] = env->getStaticMethodID(cls, "ceilDiv", "(JI)J");
          mids$[mid_ceilDiv_c18ab8eab0c49f84] = env->getStaticMethodID(cls, "ceilDiv", "(JJ)J");
          mids$[mid_ceilDivExact_5625cf3db98dadc1] = env->getStaticMethodID(cls, "ceilDivExact", "(II)I");
          mids$[mid_ceilDivExact_c18ab8eab0c49f84] = env->getStaticMethodID(cls, "ceilDivExact", "(JJ)J");
          mids$[mid_ceilMod_5625cf3db98dadc1] = env->getStaticMethodID(cls, "ceilMod", "(II)I");
          mids$[mid_ceilMod_78d37ce3ced6fae5] = env->getStaticMethodID(cls, "ceilMod", "(JI)I");
          mids$[mid_ceilMod_c18ab8eab0c49f84] = env->getStaticMethodID(cls, "ceilMod", "(JJ)J");
          mids$[mid_clamp_8d02ba458f22e508] = env->getStaticMethodID(cls, "clamp", "(DDD)D");
          mids$[mid_clamp_ef6fd93d07196376] = env->getStaticMethodID(cls, "clamp", "(FFF)F");
          mids$[mid_clamp_ee4c8761acef5403] = env->getStaticMethodID(cls, "clamp", "(III)I");
          mids$[mid_clamp_ede182ff33d8f114] = env->getStaticMethodID(cls, "clamp", "(JII)I");
          mids$[mid_clamp_5cb98f08c34ba41d] = env->getStaticMethodID(cls, "clamp", "(JJJ)J");
          mids$[mid_copySign_2268d18be49a6087] = env->getStaticMethodID(cls, "copySign", "(DD)D");
          mids$[mid_copySign_cd0283dc4491c41d] = env->getStaticMethodID(cls, "copySign", "(FF)F");
          mids$[mid_copySign_0c85c14ef225acd0] = env->getStaticMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_copySign_d5f58731bcb8a011] = env->getStaticMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_cos_7e960cd6eee376d8] = env->getStaticMethodID(cls, "cos", "(D)D");
          mids$[mid_cos_6672ad854985cb64] = env->getStaticMethodID(cls, "cos", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_cosh_7e960cd6eee376d8] = env->getStaticMethodID(cls, "cosh", "(D)D");
          mids$[mid_cosh_6672ad854985cb64] = env->getStaticMethodID(cls, "cosh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_decrementExact_0092017e99012694] = env->getStaticMethodID(cls, "decrementExact", "(I)I");
          mids$[mid_decrementExact_f4ad805a81234b49] = env->getStaticMethodID(cls, "decrementExact", "(J)J");
          mids$[mid_divideExact_5625cf3db98dadc1] = env->getStaticMethodID(cls, "divideExact", "(II)I");
          mids$[mid_divideExact_c18ab8eab0c49f84] = env->getStaticMethodID(cls, "divideExact", "(JJ)J");
          mids$[mid_exp_7e960cd6eee376d8] = env->getStaticMethodID(cls, "exp", "(D)D");
          mids$[mid_exp_6672ad854985cb64] = env->getStaticMethodID(cls, "exp", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_expm1_7e960cd6eee376d8] = env->getStaticMethodID(cls, "expm1", "(D)D");
          mids$[mid_expm1_6672ad854985cb64] = env->getStaticMethodID(cls, "expm1", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_floor_7e960cd6eee376d8] = env->getStaticMethodID(cls, "floor", "(D)D");
          mids$[mid_floor_6672ad854985cb64] = env->getStaticMethodID(cls, "floor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_floorDiv_5625cf3db98dadc1] = env->getStaticMethodID(cls, "floorDiv", "(II)I");
          mids$[mid_floorDiv_974ee1cf526db4b7] = env->getStaticMethodID(cls, "floorDiv", "(JI)J");
          mids$[mid_floorDiv_c18ab8eab0c49f84] = env->getStaticMethodID(cls, "floorDiv", "(JJ)J");
          mids$[mid_floorDivExact_5625cf3db98dadc1] = env->getStaticMethodID(cls, "floorDivExact", "(II)I");
          mids$[mid_floorDivExact_c18ab8eab0c49f84] = env->getStaticMethodID(cls, "floorDivExact", "(JJ)J");
          mids$[mid_floorMod_5625cf3db98dadc1] = env->getStaticMethodID(cls, "floorMod", "(II)I");
          mids$[mid_floorMod_78d37ce3ced6fae5] = env->getStaticMethodID(cls, "floorMod", "(JI)I");
          mids$[mid_floorMod_c18ab8eab0c49f84] = env->getStaticMethodID(cls, "floorMod", "(JJ)J");
          mids$[mid_fma_8d02ba458f22e508] = env->getStaticMethodID(cls, "fma", "(DDD)D");
          mids$[mid_fma_ef6fd93d07196376] = env->getStaticMethodID(cls, "fma", "(FFF)F");
          mids$[mid_getExponent_abbeb9db7144ca23] = env->getStaticMethodID(cls, "getExponent", "(D)I");
          mids$[mid_getExponent_8654c9c587b855bf] = env->getStaticMethodID(cls, "getExponent", "(F)I");
          mids$[mid_hypot_2268d18be49a6087] = env->getStaticMethodID(cls, "hypot", "(DD)D");
          mids$[mid_hypot_d5f58731bcb8a011] = env->getStaticMethodID(cls, "hypot", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_incrementExact_0092017e99012694] = env->getStaticMethodID(cls, "incrementExact", "(I)I");
          mids$[mid_incrementExact_f4ad805a81234b49] = env->getStaticMethodID(cls, "incrementExact", "(J)J");
          mids$[mid_log_7e960cd6eee376d8] = env->getStaticMethodID(cls, "log", "(D)D");
          mids$[mid_log_6672ad854985cb64] = env->getStaticMethodID(cls, "log", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_log_2268d18be49a6087] = env->getStaticMethodID(cls, "log", "(DD)D");
          mids$[mid_log10_7e960cd6eee376d8] = env->getStaticMethodID(cls, "log10", "(D)D");
          mids$[mid_log10_6672ad854985cb64] = env->getStaticMethodID(cls, "log10", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_log1p_7e960cd6eee376d8] = env->getStaticMethodID(cls, "log1p", "(D)D");
          mids$[mid_log1p_6672ad854985cb64] = env->getStaticMethodID(cls, "log1p", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_max_2268d18be49a6087] = env->getStaticMethodID(cls, "max", "(DD)D");
          mids$[mid_max_cd0283dc4491c41d] = env->getStaticMethodID(cls, "max", "(FF)F");
          mids$[mid_max_5625cf3db98dadc1] = env->getStaticMethodID(cls, "max", "(II)I");
          mids$[mid_max_c18ab8eab0c49f84] = env->getStaticMethodID(cls, "max", "(JJ)J");
          mids$[mid_max_0c85c14ef225acd0] = env->getStaticMethodID(cls, "max", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_max_d5f58731bcb8a011] = env->getStaticMethodID(cls, "max", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_min_2268d18be49a6087] = env->getStaticMethodID(cls, "min", "(DD)D");
          mids$[mid_min_0c85c14ef225acd0] = env->getStaticMethodID(cls, "min", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_min_cd0283dc4491c41d] = env->getStaticMethodID(cls, "min", "(FF)F");
          mids$[mid_min_5625cf3db98dadc1] = env->getStaticMethodID(cls, "min", "(II)I");
          mids$[mid_min_c18ab8eab0c49f84] = env->getStaticMethodID(cls, "min", "(JJ)J");
          mids$[mid_min_d5f58731bcb8a011] = env->getStaticMethodID(cls, "min", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_multiplyExact_5625cf3db98dadc1] = env->getStaticMethodID(cls, "multiplyExact", "(II)I");
          mids$[mid_multiplyExact_974ee1cf526db4b7] = env->getStaticMethodID(cls, "multiplyExact", "(JI)J");
          mids$[mid_multiplyExact_c18ab8eab0c49f84] = env->getStaticMethodID(cls, "multiplyExact", "(JJ)J");
          mids$[mid_multiplyFull_1fba9172e7658368] = env->getStaticMethodID(cls, "multiplyFull", "(II)J");
          mids$[mid_multiplyHigh_c18ab8eab0c49f84] = env->getStaticMethodID(cls, "multiplyHigh", "(JJ)J");
          mids$[mid_negateExact_0092017e99012694] = env->getStaticMethodID(cls, "negateExact", "(I)I");
          mids$[mid_negateExact_f4ad805a81234b49] = env->getStaticMethodID(cls, "negateExact", "(J)J");
          mids$[mid_nextAfter_2268d18be49a6087] = env->getStaticMethodID(cls, "nextAfter", "(DD)D");
          mids$[mid_nextAfter_59ebbb936ec7101a] = env->getStaticMethodID(cls, "nextAfter", "(FD)F");
          mids$[mid_nextDown_7e960cd6eee376d8] = env->getStaticMethodID(cls, "nextDown", "(D)D");
          mids$[mid_nextDown_d86c73ce94a2219d] = env->getStaticMethodID(cls, "nextDown", "(F)F");
          mids$[mid_nextUp_7e960cd6eee376d8] = env->getStaticMethodID(cls, "nextUp", "(D)D");
          mids$[mid_nextUp_d86c73ce94a2219d] = env->getStaticMethodID(cls, "nextUp", "(F)F");
          mids$[mid_norm_11c7b941e8b61f75] = env->getStaticMethodID(cls, "norm", "(Lorg/hipparchus/CalculusFieldElement;)D");
          mids$[mid_pow_2268d18be49a6087] = env->getStaticMethodID(cls, "pow", "(DD)D");
          mids$[mid_pow_0c85c14ef225acd0] = env->getStaticMethodID(cls, "pow", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_pow_156ae9d72f1c8533] = env->getStaticMethodID(cls, "pow", "(DI)D");
          mids$[mid_pow_f51b4310f89ba5f2] = env->getStaticMethodID(cls, "pow", "(DJ)D");
          mids$[mid_pow_a945230069a4182c] = env->getStaticMethodID(cls, "pow", "(Lorg/hipparchus/CalculusFieldElement;I)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_pow_d5f58731bcb8a011] = env->getStaticMethodID(cls, "pow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_random_557b8123390d8d0c] = env->getStaticMethodID(cls, "random", "()D");
          mids$[mid_rint_7e960cd6eee376d8] = env->getStaticMethodID(cls, "rint", "(D)D");
          mids$[mid_rint_6672ad854985cb64] = env->getStaticMethodID(cls, "rint", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_round_9d550dd06216a860] = env->getStaticMethodID(cls, "round", "(D)J");
          mids$[mid_round_8654c9c587b855bf] = env->getStaticMethodID(cls, "round", "(F)I");
          mids$[mid_round_c07ecb10472aff74] = env->getStaticMethodID(cls, "round", "(Lorg/hipparchus/CalculusFieldElement;)J");
          mids$[mid_scalb_156ae9d72f1c8533] = env->getStaticMethodID(cls, "scalb", "(DI)D");
          mids$[mid_scalb_ef306825a01b4f72] = env->getStaticMethodID(cls, "scalb", "(FI)F");
          mids$[mid_scalb_a945230069a4182c] = env->getStaticMethodID(cls, "scalb", "(Lorg/hipparchus/CalculusFieldElement;I)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_sign_6672ad854985cb64] = env->getStaticMethodID(cls, "sign", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_signum_7e960cd6eee376d8] = env->getStaticMethodID(cls, "signum", "(D)D");
          mids$[mid_signum_d86c73ce94a2219d] = env->getStaticMethodID(cls, "signum", "(F)F");
          mids$[mid_sin_7e960cd6eee376d8] = env->getStaticMethodID(cls, "sin", "(D)D");
          mids$[mid_sin_6672ad854985cb64] = env->getStaticMethodID(cls, "sin", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_sinCos_99155ddf2f533f1f] = env->getStaticMethodID(cls, "sinCos", "(D)Lorg/hipparchus/util/SinCos;");
          mids$[mid_sinCos_40a4543daa5bfd7a] = env->getStaticMethodID(cls, "sinCos", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_7e960cd6eee376d8] = env->getStaticMethodID(cls, "sinh", "(D)D");
          mids$[mid_sinh_6672ad854985cb64] = env->getStaticMethodID(cls, "sinh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_sinhCosh_37d68e4c87605c4c] = env->getStaticMethodID(cls, "sinhCosh", "(D)Lorg/hipparchus/util/SinhCosh;");
          mids$[mid_sinhCosh_0d9477952d33d2a8] = env->getStaticMethodID(cls, "sinhCosh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_7e960cd6eee376d8] = env->getStaticMethodID(cls, "sqrt", "(D)D");
          mids$[mid_sqrt_6672ad854985cb64] = env->getStaticMethodID(cls, "sqrt", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_subtractExact_5625cf3db98dadc1] = env->getStaticMethodID(cls, "subtractExact", "(II)I");
          mids$[mid_subtractExact_c18ab8eab0c49f84] = env->getStaticMethodID(cls, "subtractExact", "(JJ)J");
          mids$[mid_tan_7e960cd6eee376d8] = env->getStaticMethodID(cls, "tan", "(D)D");
          mids$[mid_tan_6672ad854985cb64] = env->getStaticMethodID(cls, "tan", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_tanh_7e960cd6eee376d8] = env->getStaticMethodID(cls, "tanh", "(D)D");
          mids$[mid_tanh_6672ad854985cb64] = env->getStaticMethodID(cls, "tanh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toDegrees_7e960cd6eee376d8] = env->getStaticMethodID(cls, "toDegrees", "(D)D");
          mids$[mid_toDegrees_6672ad854985cb64] = env->getStaticMethodID(cls, "toDegrees", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toIntExact_06110d73d878b7ae] = env->getStaticMethodID(cls, "toIntExact", "(J)I");
          mids$[mid_toRadians_7e960cd6eee376d8] = env->getStaticMethodID(cls, "toRadians", "(D)D");
          mids$[mid_toRadians_6672ad854985cb64] = env->getStaticMethodID(cls, "toRadians", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ulp_7e960cd6eee376d8] = env->getStaticMethodID(cls, "ulp", "(D)D");
          mids$[mid_ulp_d86c73ce94a2219d] = env->getStaticMethodID(cls, "ulp", "(F)F");
          mids$[mid_ulp_6672ad854985cb64] = env->getStaticMethodID(cls, "ulp", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_unsignedMultiplyHigh_c18ab8eab0c49f84] = env->getStaticMethodID(cls, "unsignedMultiplyHigh", "(JJ)J");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          E = env->getStaticDoubleField(cls, "E");
          PI = env->getStaticDoubleField(cls, "PI");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble FastMath::IEEEremainder(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_IEEEremainder_2268d18be49a6087], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::IEEEremainder(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_IEEEremainder_0c85c14ef225acd0], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FastMath::IEEEremainder(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_IEEEremainder_d5f58731bcb8a011], a0.this$, a1.this$));
      }

      jdouble FastMath::abs(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_abs_7e960cd6eee376d8], a0);
      }

      jfloat FastMath::abs(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_abs_d86c73ce94a2219d], a0);
      }

      jint FastMath::abs(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_abs_0092017e99012694], a0);
      }

      jlong FastMath::abs(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_abs_f4ad805a81234b49], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::abs(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_abs_6672ad854985cb64], a0.this$));
      }

      jint FastMath::absExact(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_absExact_0092017e99012694], a0);
      }

      jlong FastMath::absExact(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_absExact_f4ad805a81234b49], a0);
      }

      jdouble FastMath::acos(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_acos_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::acos(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_acos_6672ad854985cb64], a0.this$));
      }

      jdouble FastMath::acosh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_acosh_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::acosh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_acosh_6672ad854985cb64], a0.this$));
      }

      jint FastMath::addExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_addExact_5625cf3db98dadc1], a0, a1);
      }

      jlong FastMath::addExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_addExact_c18ab8eab0c49f84], a0, a1);
      }

      jdouble FastMath::asin(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_asin_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::asin(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_asin_6672ad854985cb64], a0.this$));
      }

      jdouble FastMath::asinh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_asinh_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::asinh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_asinh_6672ad854985cb64], a0.this$));
      }

      jdouble FastMath::atan(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_atan_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::atan(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_atan_6672ad854985cb64], a0.this$));
      }

      jdouble FastMath::atan2(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_atan2_2268d18be49a6087], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::atan2(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_atan2_d5f58731bcb8a011], a0.this$, a1.this$));
      }

      jdouble FastMath::atanh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_atanh_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::atanh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_atanh_6672ad854985cb64], a0.this$));
      }

      jdouble FastMath::cbrt(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_cbrt_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::cbrt(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_cbrt_6672ad854985cb64], a0.this$));
      }

      jdouble FastMath::ceil(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ceil_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::ceil(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ceil_6672ad854985cb64], a0.this$));
      }

      jint FastMath::ceilDiv(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_ceilDiv_5625cf3db98dadc1], a0, a1);
      }

      jlong FastMath::ceilDiv(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_ceilDiv_974ee1cf526db4b7], a0, a1);
      }

      jlong FastMath::ceilDiv(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_ceilDiv_c18ab8eab0c49f84], a0, a1);
      }

      jint FastMath::ceilDivExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_ceilDivExact_5625cf3db98dadc1], a0, a1);
      }

      jlong FastMath::ceilDivExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_ceilDivExact_c18ab8eab0c49f84], a0, a1);
      }

      jint FastMath::ceilMod(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_ceilMod_5625cf3db98dadc1], a0, a1);
      }

      jint FastMath::ceilMod(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_ceilMod_78d37ce3ced6fae5], a0, a1);
      }

      jlong FastMath::ceilMod(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_ceilMod_c18ab8eab0c49f84], a0, a1);
      }

      jdouble FastMath::clamp(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_clamp_8d02ba458f22e508], a0, a1, a2);
      }

      jfloat FastMath::clamp(jfloat a0, jfloat a1, jfloat a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_clamp_ef6fd93d07196376], a0, a1, a2);
      }

      jint FastMath::clamp(jint a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_clamp_ee4c8761acef5403], a0, a1, a2);
      }

      jint FastMath::clamp(jlong a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_clamp_ede182ff33d8f114], a0, a1, a2);
      }

      jlong FastMath::clamp(jlong a0, jlong a1, jlong a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_clamp_5cb98f08c34ba41d], a0, a1, a2);
      }

      jdouble FastMath::copySign(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_copySign_2268d18be49a6087], a0, a1);
      }

      jfloat FastMath::copySign(jfloat a0, jfloat a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_copySign_cd0283dc4491c41d], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::copySign(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_copySign_0c85c14ef225acd0], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FastMath::copySign(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_copySign_d5f58731bcb8a011], a0.this$, a1.this$));
      }

      jdouble FastMath::cos(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_cos_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::cos(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_cos_6672ad854985cb64], a0.this$));
      }

      jdouble FastMath::cosh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_cosh_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::cosh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_cosh_6672ad854985cb64], a0.this$));
      }

      jint FastMath::decrementExact(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_decrementExact_0092017e99012694], a0);
      }

      jlong FastMath::decrementExact(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_decrementExact_f4ad805a81234b49], a0);
      }

      jint FastMath::divideExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_divideExact_5625cf3db98dadc1], a0, a1);
      }

      jlong FastMath::divideExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_divideExact_c18ab8eab0c49f84], a0, a1);
      }

      jdouble FastMath::exp(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_exp_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::exp(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_exp_6672ad854985cb64], a0.this$));
      }

      jdouble FastMath::expm1(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_expm1_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::expm1(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_expm1_6672ad854985cb64], a0.this$));
      }

      jdouble FastMath::floor(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_floor_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::floor(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_floor_6672ad854985cb64], a0.this$));
      }

      jint FastMath::floorDiv(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_floorDiv_5625cf3db98dadc1], a0, a1);
      }

      jlong FastMath::floorDiv(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_floorDiv_974ee1cf526db4b7], a0, a1);
      }

      jlong FastMath::floorDiv(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_floorDiv_c18ab8eab0c49f84], a0, a1);
      }

      jint FastMath::floorDivExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_floorDivExact_5625cf3db98dadc1], a0, a1);
      }

      jlong FastMath::floorDivExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_floorDivExact_c18ab8eab0c49f84], a0, a1);
      }

      jint FastMath::floorMod(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_floorMod_5625cf3db98dadc1], a0, a1);
      }

      jint FastMath::floorMod(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_floorMod_78d37ce3ced6fae5], a0, a1);
      }

      jlong FastMath::floorMod(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_floorMod_c18ab8eab0c49f84], a0, a1);
      }

      jdouble FastMath::fma(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_fma_8d02ba458f22e508], a0, a1, a2);
      }

      jfloat FastMath::fma(jfloat a0, jfloat a1, jfloat a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_fma_ef6fd93d07196376], a0, a1, a2);
      }

      jint FastMath::getExponent(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_getExponent_abbeb9db7144ca23], a0);
      }

      jint FastMath::getExponent(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_getExponent_8654c9c587b855bf], a0);
      }

      jdouble FastMath::hypot(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hypot_2268d18be49a6087], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::hypot(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hypot_d5f58731bcb8a011], a0.this$, a1.this$));
      }

      jint FastMath::incrementExact(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_incrementExact_0092017e99012694], a0);
      }

      jlong FastMath::incrementExact(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_incrementExact_f4ad805a81234b49], a0);
      }

      jdouble FastMath::log(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_log_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::log(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_log_6672ad854985cb64], a0.this$));
      }

      jdouble FastMath::log(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_log_2268d18be49a6087], a0, a1);
      }

      jdouble FastMath::log10(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_log10_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::log10(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_log10_6672ad854985cb64], a0.this$));
      }

      jdouble FastMath::log1p(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_log1p_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::log1p(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_log1p_6672ad854985cb64], a0.this$));
      }

      jdouble FastMath::max$(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_max_2268d18be49a6087], a0, a1);
      }

      jfloat FastMath::max$(jfloat a0, jfloat a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_max_cd0283dc4491c41d], a0, a1);
      }

      jint FastMath::max$(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_max_5625cf3db98dadc1], a0, a1);
      }

      jlong FastMath::max$(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_max_c18ab8eab0c49f84], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::max$(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_max_0c85c14ef225acd0], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FastMath::max$(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_max_d5f58731bcb8a011], a0.this$, a1.this$));
      }

      jdouble FastMath::min$(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_min_2268d18be49a6087], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::min$(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_min_0c85c14ef225acd0], a0.this$, a1));
      }

      jfloat FastMath::min$(jfloat a0, jfloat a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_min_cd0283dc4491c41d], a0, a1);
      }

      jint FastMath::min$(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_min_5625cf3db98dadc1], a0, a1);
      }

      jlong FastMath::min$(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_min_c18ab8eab0c49f84], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::min$(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_min_d5f58731bcb8a011], a0.this$, a1.this$));
      }

      jint FastMath::multiplyExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_multiplyExact_5625cf3db98dadc1], a0, a1);
      }

      jlong FastMath::multiplyExact(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_multiplyExact_974ee1cf526db4b7], a0, a1);
      }

      jlong FastMath::multiplyExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_multiplyExact_c18ab8eab0c49f84], a0, a1);
      }

      jlong FastMath::multiplyFull(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_multiplyFull_1fba9172e7658368], a0, a1);
      }

      jlong FastMath::multiplyHigh(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_multiplyHigh_c18ab8eab0c49f84], a0, a1);
      }

      jint FastMath::negateExact(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_negateExact_0092017e99012694], a0);
      }

      jlong FastMath::negateExact(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_negateExact_f4ad805a81234b49], a0);
      }

      jdouble FastMath::nextAfter(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_nextAfter_2268d18be49a6087], a0, a1);
      }

      jfloat FastMath::nextAfter(jfloat a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_nextAfter_59ebbb936ec7101a], a0, a1);
      }

      jdouble FastMath::nextDown(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_nextDown_7e960cd6eee376d8], a0);
      }

      jfloat FastMath::nextDown(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_nextDown_d86c73ce94a2219d], a0);
      }

      jdouble FastMath::nextUp(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_nextUp_7e960cd6eee376d8], a0);
      }

      jfloat FastMath::nextUp(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_nextUp_d86c73ce94a2219d], a0);
      }

      jdouble FastMath::norm(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_norm_11c7b941e8b61f75], a0.this$);
      }

      jdouble FastMath::pow(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_pow_2268d18be49a6087], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::pow(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_pow_0c85c14ef225acd0], a0.this$, a1));
      }

      jdouble FastMath::pow(jdouble a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_pow_156ae9d72f1c8533], a0, a1);
      }

      jdouble FastMath::pow(jdouble a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_pow_f51b4310f89ba5f2], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::pow(const ::org::hipparchus::CalculusFieldElement & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_pow_a945230069a4182c], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FastMath::pow(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_pow_d5f58731bcb8a011], a0.this$, a1.this$));
      }

      jdouble FastMath::random()
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_random_557b8123390d8d0c]);
      }

      jdouble FastMath::rint(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_rint_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::rint(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rint_6672ad854985cb64], a0.this$));
      }

      jlong FastMath::round(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_round_9d550dd06216a860], a0);
      }

      jint FastMath::round(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_round_8654c9c587b855bf], a0);
      }

      jlong FastMath::round(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_round_c07ecb10472aff74], a0.this$);
      }

      jdouble FastMath::scalb(jdouble a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_scalb_156ae9d72f1c8533], a0, a1);
      }

      jfloat FastMath::scalb(jfloat a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_scalb_ef306825a01b4f72], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::scalb(const ::org::hipparchus::CalculusFieldElement & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_scalb_a945230069a4182c], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FastMath::sign(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_sign_6672ad854985cb64], a0.this$));
      }

      jdouble FastMath::signum(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_signum_7e960cd6eee376d8], a0);
      }

      jfloat FastMath::signum(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_signum_d86c73ce94a2219d], a0);
      }

      jdouble FastMath::sin(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sin_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::sin(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_sin_6672ad854985cb64], a0.this$));
      }

      ::org::hipparchus::util::SinCos FastMath::sinCos(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::SinCos(env->callStaticObjectMethod(cls, mids$[mid_sinCos_99155ddf2f533f1f], a0));
      }

      ::org::hipparchus::util::FieldSinCos FastMath::sinCos(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::FieldSinCos(env->callStaticObjectMethod(cls, mids$[mid_sinCos_40a4543daa5bfd7a], a0.this$));
      }

      jdouble FastMath::sinh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sinh_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::sinh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_sinh_6672ad854985cb64], a0.this$));
      }

      ::org::hipparchus::util::SinhCosh FastMath::sinhCosh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::SinhCosh(env->callStaticObjectMethod(cls, mids$[mid_sinhCosh_37d68e4c87605c4c], a0));
      }

      ::org::hipparchus::util::FieldSinhCosh FastMath::sinhCosh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::FieldSinhCosh(env->callStaticObjectMethod(cls, mids$[mid_sinhCosh_0d9477952d33d2a8], a0.this$));
      }

      jdouble FastMath::sqrt(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sqrt_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::sqrt(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_sqrt_6672ad854985cb64], a0.this$));
      }

      jint FastMath::subtractExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_subtractExact_5625cf3db98dadc1], a0, a1);
      }

      jlong FastMath::subtractExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_subtractExact_c18ab8eab0c49f84], a0, a1);
      }

      jdouble FastMath::tan(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_tan_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::tan(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_tan_6672ad854985cb64], a0.this$));
      }

      jdouble FastMath::tanh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_tanh_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::tanh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_tanh_6672ad854985cb64], a0.this$));
      }

      jdouble FastMath::toDegrees(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_toDegrees_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::toDegrees(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_toDegrees_6672ad854985cb64], a0.this$));
      }

      jint FastMath::toIntExact(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_toIntExact_06110d73d878b7ae], a0);
      }

      jdouble FastMath::toRadians(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_toRadians_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::toRadians(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_toRadians_6672ad854985cb64], a0.this$));
      }

      jdouble FastMath::ulp(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ulp_7e960cd6eee376d8], a0);
      }

      jfloat FastMath::ulp(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_ulp_d86c73ce94a2219d], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::ulp(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ulp_6672ad854985cb64], a0.this$));
      }

      jlong FastMath::unsignedMultiplyHigh(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_unsignedMultiplyHigh_c18ab8eab0c49f84], a0, a1);
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
      static PyObject *t_FastMath_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FastMath_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FastMath_IEEEremainder(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_abs(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_absExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_acos(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_acosh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_addExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_asin(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_asinh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_atan(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_atan2(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_atanh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_cbrt(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_ceil(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_ceilDiv(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_ceilDivExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_ceilMod(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_clamp(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_copySign(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_cos(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_cosh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_decrementExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_divideExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_exp(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_expm1(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_floor(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_floorDiv(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_floorDivExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_floorMod(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_fma(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_getExponent(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_hypot(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_incrementExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_log(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_log10(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_log1p(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_max(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_min(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_multiplyExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_multiplyFull(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_multiplyHigh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_negateExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_nextAfter(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_nextDown(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_nextUp(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_norm(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FastMath_pow(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_random(PyTypeObject *type);
      static PyObject *t_FastMath_rint(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_round(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_scalb(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_sign(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FastMath_signum(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_sin(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_sinCos(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_sinh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_sinhCosh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_sqrt(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_subtractExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_tan(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_tanh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_toDegrees(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_toIntExact(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FastMath_toRadians(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_ulp(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_unsignedMultiplyHigh(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_FastMath__methods_[] = {
        DECLARE_METHOD(t_FastMath, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FastMath, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FastMath, IEEEremainder, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, abs, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, absExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, acos, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, acosh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, addExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, asin, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, asinh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, atan, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, atan2, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, atanh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, cbrt, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, ceil, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, ceilDiv, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, ceilDivExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, ceilMod, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, clamp, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, copySign, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, cos, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, cosh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, decrementExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, divideExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, exp, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, expm1, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, floor, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, floorDiv, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, floorDivExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, floorMod, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, fma, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, getExponent, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, hypot, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, incrementExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, log, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, log10, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, log1p, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, max, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, min, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, multiplyExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, multiplyFull, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, multiplyHigh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, negateExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, nextAfter, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, nextDown, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, nextUp, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, norm, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FastMath, pow, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, random, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, rint, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, round, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, scalb, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, sign, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FastMath, signum, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, sin, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, sinCos, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, sinh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, sinhCosh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, sqrt, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, subtractExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, tan, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, tanh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, toDegrees, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, toIntExact, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FastMath, toRadians, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, ulp, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, unsignedMultiplyHigh, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FastMath)[] = {
        { Py_tp_methods, t_FastMath__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FastMath)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FastMath, t_FastMath, FastMath);

      void t_FastMath::install(PyObject *module)
      {
        installType(&PY_TYPE(FastMath), &PY_TYPE_DEF(FastMath), module, "FastMath", 0);
      }

      void t_FastMath::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FastMath), "class_", make_descriptor(FastMath::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FastMath), "wrapfn_", make_descriptor(t_FastMath::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FastMath), "boxfn_", make_descriptor(boxObject));
        env->getClass(FastMath::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(FastMath), "E", make_descriptor(FastMath::E));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FastMath), "PI", make_descriptor(FastMath::PI));
      }

      static PyObject *t_FastMath_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FastMath::initializeClass, 1)))
          return NULL;
        return t_FastMath::wrap_Object(FastMath(((t_FastMath *) arg)->object.this$));
      }
      static PyObject *t_FastMath_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FastMath::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FastMath_IEEEremainder(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::IEEEremainder(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::IEEEremainder(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::IEEEremainder(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "IEEEremainder", args);
        return NULL;
      }

      static PyObject *t_FastMath_abs(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::abs(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::abs(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::abs(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::abs(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::abs(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "abs", args);
        return NULL;
      }

      static PyObject *t_FastMath_absExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::absExact(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::absExact(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "absExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_acos(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::acos(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::acos(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "acos", args);
        return NULL;
      }

      static PyObject *t_FastMath_acosh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::acosh(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::acosh(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "acosh", args);
        return NULL;
      }

      static PyObject *t_FastMath_addExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::addExact(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::addExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "addExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_asin(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::asin(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::asin(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "asin", args);
        return NULL;
      }

      static PyObject *t_FastMath_asinh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::asinh(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::asinh(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "asinh", args);
        return NULL;
      }

      static PyObject *t_FastMath_atan(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::atan(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::atan(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "atan", args);
        return NULL;
      }

      static PyObject *t_FastMath_atan2(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::atan2(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::atan2(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "atan2", args);
        return NULL;
      }

      static PyObject *t_FastMath_atanh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::atanh(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::atanh(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "atanh", args);
        return NULL;
      }

      static PyObject *t_FastMath_cbrt(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::cbrt(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::cbrt(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "cbrt", args);
        return NULL;
      }

      static PyObject *t_FastMath_ceil(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceil(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceil(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "ceil", args);
        return NULL;
      }

      static PyObject *t_FastMath_ceilDiv(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilDiv(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jlong result;

            if (!parseArgs(args, "JI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilDiv(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilDiv(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "ceilDiv", args);
        return NULL;
      }

      static PyObject *t_FastMath_ceilDivExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilDivExact(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilDivExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "ceilDivExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_ceilMod(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilMod(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "JI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilMod(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilMod(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "ceilMod", args);
        return NULL;
      }

      static PyObject *t_FastMath_clamp(PyTypeObject *type, PyObject *args)
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
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::clamp(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat a2;
            jfloat result;

            if (!parseArgs(args, "FFF", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::clamp(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            jint result;

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::clamp(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jint a2;
            jint result;

            if (!parseArgs(args, "JII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::clamp(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong a2;
            jlong result;

            if (!parseArgs(args, "JJJ", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::clamp(a0, a1, a2));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "clamp", args);
        return NULL;
      }

      static PyObject *t_FastMath_copySign(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::copySign(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::copySign(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat result;

            if (!parseArgs(args, "FF", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::copySign(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::copySign(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "copySign", args);
        return NULL;
      }

      static PyObject *t_FastMath_cos(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::cos(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::cos(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "cos", args);
        return NULL;
      }

      static PyObject *t_FastMath_cosh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::cosh(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::cosh(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "cosh", args);
        return NULL;
      }

      static PyObject *t_FastMath_decrementExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::decrementExact(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::decrementExact(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "decrementExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_divideExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::divideExact(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::divideExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "divideExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_exp(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::exp(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::exp(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "exp", args);
        return NULL;
      }

      static PyObject *t_FastMath_expm1(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::expm1(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::expm1(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "expm1", args);
        return NULL;
      }

      static PyObject *t_FastMath_floor(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floor(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floor(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "floor", args);
        return NULL;
      }

      static PyObject *t_FastMath_floorDiv(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorDiv(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jlong result;

            if (!parseArgs(args, "JI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorDiv(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorDiv(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "floorDiv", args);
        return NULL;
      }

      static PyObject *t_FastMath_floorDivExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorDivExact(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorDivExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "floorDivExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_floorMod(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorMod(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "JI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorMod(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorMod(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "floorMod", args);
        return NULL;
      }

      static PyObject *t_FastMath_fma(PyTypeObject *type, PyObject *args)
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
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::fma(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat a2;
            jfloat result;

            if (!parseArgs(args, "FFF", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::fma(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "fma", args);
        return NULL;
      }

      static PyObject *t_FastMath_getExponent(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jint result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::getExponent(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jfloat a0;
            jint result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::getExponent(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "getExponent", args);
        return NULL;
      }

      static PyObject *t_FastMath_hypot(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::hypot(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::hypot(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "hypot", args);
        return NULL;
      }

      static PyObject *t_FastMath_incrementExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::incrementExact(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::incrementExact(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "incrementExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_log(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "log", args);
        return NULL;
      }

      static PyObject *t_FastMath_log10(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log10(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log10(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "log10", args);
        return NULL;
      }

      static PyObject *t_FastMath_log1p(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log1p(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log1p(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "log1p", args);
        return NULL;
      }

      static PyObject *t_FastMath_max(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::max$(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::max$(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat result;

            if (!parseArgs(args, "FF", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::max$(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::max$(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::max$(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::max$(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "max", args);
        return NULL;
      }

      static PyObject *t_FastMath_min(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::min$(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat result;

            if (!parseArgs(args, "FF", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::min$(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::min$(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::min$(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::min$(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::min$(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "min", args);
        return NULL;
      }

      static PyObject *t_FastMath_multiplyExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::multiplyExact(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jlong result;

            if (!parseArgs(args, "JI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::multiplyExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::multiplyExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "multiplyExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_multiplyFull(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jlong result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FastMath::multiplyFull(a0, a1));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "multiplyFull", args);
        return NULL;
      }

      static PyObject *t_FastMath_multiplyHigh(PyTypeObject *type, PyObject *args)
      {
        jlong a0;
        jlong a1;
        jlong result;

        if (!parseArgs(args, "JJ", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FastMath::multiplyHigh(a0, a1));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "multiplyHigh", args);
        return NULL;
      }

      static PyObject *t_FastMath_negateExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::negateExact(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::negateExact(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "negateExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_nextAfter(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::nextAfter(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jdouble a1;
            jfloat result;

            if (!parseArgs(args, "FD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::nextAfter(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "nextAfter", args);
        return NULL;
      }

      static PyObject *t_FastMath_nextDown(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::nextDown(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::nextDown(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "nextDown", args);
        return NULL;
      }

      static PyObject *t_FastMath_nextUp(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::nextUp(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::nextUp(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "nextUp", args);
        return NULL;
      }

      static PyObject *t_FastMath_norm(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FastMath::norm(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "norm", arg);
        return NULL;
      }

      static PyObject *t_FastMath_pow(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::pow(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jdouble a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::pow(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::pow(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            jlong a1;
            jdouble result;

            if (!parseArgs(args, "DJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::pow(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::pow(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::pow(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "pow", args);
        return NULL;
      }

      static PyObject *t_FastMath_random(PyTypeObject *type)
      {
        jdouble result;
        OBJ_CALL(result = ::org::hipparchus::util::FastMath::random());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_FastMath_rint(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::rint(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::rint(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "rint", args);
        return NULL;
      }

      static PyObject *t_FastMath_round(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jlong result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::round(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            jfloat a0;
            jint result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::round(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jlong result;

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::round(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "round", args);
        return NULL;
      }

      static PyObject *t_FastMath_scalb(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::scalb(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jint a1;
            jfloat result;

            if (!parseArgs(args, "FI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::scalb(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::scalb(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "scalb", args);
        return NULL;
      }

      static PyObject *t_FastMath_sign(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FastMath::sign(a0));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sign", arg);
        return NULL;
      }

      static PyObject *t_FastMath_signum(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::signum(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::signum(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "signum", args);
        return NULL;
      }

      static PyObject *t_FastMath_sin(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sin(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sin(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "sin", args);
        return NULL;
      }

      static PyObject *t_FastMath_sinCos(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            ::org::hipparchus::util::SinCos result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sinCos(a0));
              return ::org::hipparchus::util::t_SinCos::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::util::FieldSinCos result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sinCos(a0));
              return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "sinCos", args);
        return NULL;
      }

      static PyObject *t_FastMath_sinh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sinh(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sinh(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "sinh", args);
        return NULL;
      }

      static PyObject *t_FastMath_sinhCosh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            ::org::hipparchus::util::SinhCosh result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sinhCosh(a0));
              return ::org::hipparchus::util::t_SinhCosh::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sinhCosh(a0));
              return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "sinhCosh", args);
        return NULL;
      }

      static PyObject *t_FastMath_sqrt(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sqrt(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sqrt(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "sqrt", args);
        return NULL;
      }

      static PyObject *t_FastMath_subtractExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::subtractExact(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::subtractExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "subtractExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_tan(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::tan(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::tan(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "tan", args);
        return NULL;
      }

      static PyObject *t_FastMath_tanh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::tanh(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::tanh(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "tanh", args);
        return NULL;
      }

      static PyObject *t_FastMath_toDegrees(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::toDegrees(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::toDegrees(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "toDegrees", args);
        return NULL;
      }

      static PyObject *t_FastMath_toIntExact(PyTypeObject *type, PyObject *arg)
      {
        jlong a0;
        jint result;

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FastMath::toIntExact(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError(type, "toIntExact", arg);
        return NULL;
      }

      static PyObject *t_FastMath_toRadians(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::toRadians(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::toRadians(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "toRadians", args);
        return NULL;
      }

      static PyObject *t_FastMath_ulp(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ulp(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ulp(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ulp(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "ulp", args);
        return NULL;
      }

      static PyObject *t_FastMath_unsignedMultiplyHigh(PyTypeObject *type, PyObject *args)
      {
        jlong a0;
        jlong a1;
        jlong result;

        if (!parseArgs(args, "JJ", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FastMath::unsignedMultiplyHigh(a0, a1));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "unsignedMultiplyHigh", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter$BlockWriter.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter.h"
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
            namespace ocm {

              ::java::lang::Class *StreamingOcmWriter$BlockWriter::class$ = NULL;
              jmethodID *StreamingOcmWriter$BlockWriter::mids$ = NULL;
              bool StreamingOcmWriter$BlockWriter::live$ = false;

              jclass StreamingOcmWriter$BlockWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter$BlockWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_8d079afa87086fe2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter;)V");
                  mids$[mid_finish_8655761ebf04b503] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_handleStep_8655761ebf04b503] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_init_a423d7aa7c2fe850] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingOcmWriter$BlockWriter::StreamingOcmWriter$BlockWriter(const ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8d079afa87086fe2, a0.this$)) {}

              void StreamingOcmWriter$BlockWriter::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_finish_8655761ebf04b503], a0.this$);
              }

              void StreamingOcmWriter$BlockWriter::handleStep(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_handleStep_8655761ebf04b503], a0.this$);
              }

              void StreamingOcmWriter$BlockWriter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
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
            namespace ocm {
              static PyObject *t_StreamingOcmWriter$BlockWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingOcmWriter$BlockWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingOcmWriter$BlockWriter_init_(t_StreamingOcmWriter$BlockWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingOcmWriter$BlockWriter_finish(t_StreamingOcmWriter$BlockWriter *self, PyObject *arg);
              static PyObject *t_StreamingOcmWriter$BlockWriter_handleStep(t_StreamingOcmWriter$BlockWriter *self, PyObject *arg);
              static PyObject *t_StreamingOcmWriter$BlockWriter_init(t_StreamingOcmWriter$BlockWriter *self, PyObject *args);

              static PyMethodDef t_StreamingOcmWriter$BlockWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingOcmWriter$BlockWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOcmWriter$BlockWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOcmWriter$BlockWriter, finish, METH_O),
                DECLARE_METHOD(t_StreamingOcmWriter$BlockWriter, handleStep, METH_O),
                DECLARE_METHOD(t_StreamingOcmWriter$BlockWriter, init, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingOcmWriter$BlockWriter)[] = {
                { Py_tp_methods, t_StreamingOcmWriter$BlockWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingOcmWriter$BlockWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingOcmWriter$BlockWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingOcmWriter$BlockWriter, t_StreamingOcmWriter$BlockWriter, StreamingOcmWriter$BlockWriter);

              void t_StreamingOcmWriter$BlockWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingOcmWriter$BlockWriter), &PY_TYPE_DEF(StreamingOcmWriter$BlockWriter), module, "StreamingOcmWriter$BlockWriter", 0);
              }

              void t_StreamingOcmWriter$BlockWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter$BlockWriter), "class_", make_descriptor(StreamingOcmWriter$BlockWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter$BlockWriter), "wrapfn_", make_descriptor(t_StreamingOcmWriter$BlockWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter$BlockWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingOcmWriter$BlockWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingOcmWriter$BlockWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingOcmWriter$BlockWriter::wrap_Object(StreamingOcmWriter$BlockWriter(((t_StreamingOcmWriter$BlockWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingOcmWriter$BlockWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingOcmWriter$BlockWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingOcmWriter$BlockWriter_init_(t_StreamingOcmWriter$BlockWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter a0((jobject) NULL);
                StreamingOcmWriter$BlockWriter object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter::initializeClass, &a0))
                {
                  INT_CALL(object = StreamingOcmWriter$BlockWriter(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_StreamingOcmWriter$BlockWriter_finish(t_StreamingOcmWriter$BlockWriter *self, PyObject *arg)
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

              static PyObject *t_StreamingOcmWriter$BlockWriter_handleStep(t_StreamingOcmWriter$BlockWriter *self, PyObject *arg)
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

              static PyObject *t_StreamingOcmWriter$BlockWriter_init(t_StreamingOcmWriter$BlockWriter *self, PyObject *args)
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
#include "org/hipparchus/ode/nonstiff/GillFieldIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *GillFieldIntegrator::class$ = NULL;
        jmethodID *GillFieldIntegrator::mids$ = NULL;
        bool GillFieldIntegrator::live$ = false;

        jclass GillFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/GillFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c9ae9949e6b74bf6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_f180d140dce78d62] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_41762fd4377ff26e] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_41762fd4377ff26e] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_6fe210429726f2cb] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/GillFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GillFieldIntegrator::GillFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_c9ae9949e6b74bf6, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > GillFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_f180d140dce78d62]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > GillFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_41762fd4377ff26e]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > GillFieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_41762fd4377ff26e]));
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
        static PyObject *t_GillFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillFieldIntegrator_of_(t_GillFieldIntegrator *self, PyObject *args);
        static int t_GillFieldIntegrator_init_(t_GillFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GillFieldIntegrator_getA(t_GillFieldIntegrator *self, PyObject *args);
        static PyObject *t_GillFieldIntegrator_getB(t_GillFieldIntegrator *self, PyObject *args);
        static PyObject *t_GillFieldIntegrator_getC(t_GillFieldIntegrator *self, PyObject *args);
        static PyObject *t_GillFieldIntegrator_get__a(t_GillFieldIntegrator *self, void *data);
        static PyObject *t_GillFieldIntegrator_get__b(t_GillFieldIntegrator *self, void *data);
        static PyObject *t_GillFieldIntegrator_get__c(t_GillFieldIntegrator *self, void *data);
        static PyObject *t_GillFieldIntegrator_get__parameters_(t_GillFieldIntegrator *self, void *data);
        static PyGetSetDef t_GillFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_GillFieldIntegrator, a),
          DECLARE_GET_FIELD(t_GillFieldIntegrator, b),
          DECLARE_GET_FIELD(t_GillFieldIntegrator, c),
          DECLARE_GET_FIELD(t_GillFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GillFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_GillFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_GillFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_GillFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_GillFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GillFieldIntegrator)[] = {
          { Py_tp_methods, t_GillFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_GillFieldIntegrator_init_ },
          { Py_tp_getset, t_GillFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GillFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(GillFieldIntegrator, t_GillFieldIntegrator, GillFieldIntegrator);
        PyObject *t_GillFieldIntegrator::wrap_Object(const GillFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GillFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GillFieldIntegrator *self = (t_GillFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GillFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GillFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GillFieldIntegrator *self = (t_GillFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GillFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(GillFieldIntegrator), &PY_TYPE_DEF(GillFieldIntegrator), module, "GillFieldIntegrator", 0);
        }

        void t_GillFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillFieldIntegrator), "class_", make_descriptor(GillFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillFieldIntegrator), "wrapfn_", make_descriptor(t_GillFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GillFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GillFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_GillFieldIntegrator::wrap_Object(GillFieldIntegrator(((t_GillFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_GillFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GillFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GillFieldIntegrator_of_(t_GillFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_GillFieldIntegrator_init_(t_GillFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          GillFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = GillFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GillFieldIntegrator_getA(t_GillFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(GillFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_GillFieldIntegrator_getB(t_GillFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(GillFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_GillFieldIntegrator_getC(t_GillFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(GillFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_GillFieldIntegrator_get__parameters_(t_GillFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_GillFieldIntegrator_get__a(t_GillFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_GillFieldIntegrator_get__b(t_GillFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_GillFieldIntegrator_get__c(t_GillFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FieldMultivariateMatrixFunction.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/CalculusFieldMultivariateMatrixFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldMultivariateMatrixFunction::class$ = NULL;
      jmethodID *FieldMultivariateMatrixFunction::mids$ = NULL;
      bool FieldMultivariateMatrixFunction::live$ = false;

      jclass FieldMultivariateMatrixFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldMultivariateMatrixFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldMultivariateMatrixFunction_f4ec493ea93fab1a] = env->getMethodID(cls, "toCalculusFieldMultivariateMatrixFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldMultivariateMatrixFunction;");
          mids$[mid_value_bac15fbc2581836b] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldMultivariateMatrixFunction FieldMultivariateMatrixFunction::toCalculusFieldMultivariateMatrixFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldMultivariateMatrixFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldMultivariateMatrixFunction_f4ec493ea93fab1a], a0.this$));
      }

      JArray< JArray< ::org::hipparchus::CalculusFieldElement > > FieldMultivariateMatrixFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_value_bac15fbc2581836b], a0.this$));
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
      static PyObject *t_FieldMultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateMatrixFunction_toCalculusFieldMultivariateMatrixFunction(t_FieldMultivariateMatrixFunction *self, PyObject *arg);
      static PyObject *t_FieldMultivariateMatrixFunction_value(t_FieldMultivariateMatrixFunction *self, PyObject *arg);

      static PyMethodDef t_FieldMultivariateMatrixFunction__methods_[] = {
        DECLARE_METHOD(t_FieldMultivariateMatrixFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateMatrixFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateMatrixFunction, toCalculusFieldMultivariateMatrixFunction, METH_O),
        DECLARE_METHOD(t_FieldMultivariateMatrixFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMultivariateMatrixFunction)[] = {
        { Py_tp_methods, t_FieldMultivariateMatrixFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMultivariateMatrixFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMultivariateMatrixFunction, t_FieldMultivariateMatrixFunction, FieldMultivariateMatrixFunction);

      void t_FieldMultivariateMatrixFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMultivariateMatrixFunction), &PY_TYPE_DEF(FieldMultivariateMatrixFunction), module, "FieldMultivariateMatrixFunction", 0);
      }

      void t_FieldMultivariateMatrixFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateMatrixFunction), "class_", make_descriptor(FieldMultivariateMatrixFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateMatrixFunction), "wrapfn_", make_descriptor(t_FieldMultivariateMatrixFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateMatrixFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMultivariateMatrixFunction::initializeClass, 1)))
          return NULL;
        return t_FieldMultivariateMatrixFunction::wrap_Object(FieldMultivariateMatrixFunction(((t_FieldMultivariateMatrixFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldMultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMultivariateMatrixFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMultivariateMatrixFunction_toCalculusFieldMultivariateMatrixFunction(t_FieldMultivariateMatrixFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldMultivariateMatrixFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldMultivariateMatrixFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldMultivariateMatrixFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldMultivariateMatrixFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldMultivariateMatrixFunction_value(t_FieldMultivariateMatrixFunction *self, PyObject *arg)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
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
#include "org/orekit/time/AbstractTimeInterpolator$InterpolationData.h"
#include "org/orekit/utils/ImmutableTimeStampedCache.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbstractTimeInterpolator$InterpolationData::class$ = NULL;
      jmethodID *AbstractTimeInterpolator$InterpolationData::mids$ = NULL;
      bool AbstractTimeInterpolator$InterpolationData::live$ = false;

      jclass AbstractTimeInterpolator$InterpolationData::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbstractTimeInterpolator$InterpolationData");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCachedSamples_86a357074a1a5ab9] = env->getMethodID(cls, "getCachedSamples", "()Lorg/orekit/utils/ImmutableTimeStampedCache;");
          mids$[mid_getInterpolationDate_7a97f7e149e79afb] = env->getMethodID(cls, "getInterpolationDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getNeighborList_0d9551367f7ecdef] = env->getMethodID(cls, "getNeighborList", "()Ljava/util/List;");
          mids$[mid_getCentralDate_57daf0c769dbd44f] = env->getMethodID(cls, "getCentralDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::ImmutableTimeStampedCache AbstractTimeInterpolator$InterpolationData::getCachedSamples() const
      {
        return ::org::orekit::utils::ImmutableTimeStampedCache(env->callObjectMethod(this$, mids$[mid_getCachedSamples_86a357074a1a5ab9]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeInterpolator$InterpolationData::getInterpolationDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getInterpolationDate_7a97f7e149e79afb]));
      }

      ::java::util::List AbstractTimeInterpolator$InterpolationData::getNeighborList() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNeighborList_0d9551367f7ecdef]));
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
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_of_(t_AbstractTimeInterpolator$InterpolationData *self, PyObject *args);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getCachedSamples(t_AbstractTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getInterpolationDate(t_AbstractTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getNeighborList(t_AbstractTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__cachedSamples(t_AbstractTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__interpolationDate(t_AbstractTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__neighborList(t_AbstractTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__parameters_(t_AbstractTimeInterpolator$InterpolationData *self, void *data);
      static PyGetSetDef t_AbstractTimeInterpolator$InterpolationData__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator$InterpolationData, cachedSamples),
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator$InterpolationData, interpolationDate),
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator$InterpolationData, neighborList),
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator$InterpolationData, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractTimeInterpolator$InterpolationData__methods_[] = {
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, getCachedSamples, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, getInterpolationDate, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, getNeighborList, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractTimeInterpolator$InterpolationData)[] = {
        { Py_tp_methods, t_AbstractTimeInterpolator$InterpolationData__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractTimeInterpolator$InterpolationData__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractTimeInterpolator$InterpolationData)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractTimeInterpolator$InterpolationData, t_AbstractTimeInterpolator$InterpolationData, AbstractTimeInterpolator$InterpolationData);
      PyObject *t_AbstractTimeInterpolator$InterpolationData::wrap_Object(const AbstractTimeInterpolator$InterpolationData& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractTimeInterpolator$InterpolationData::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractTimeInterpolator$InterpolationData *self = (t_AbstractTimeInterpolator$InterpolationData *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractTimeInterpolator$InterpolationData::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractTimeInterpolator$InterpolationData::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractTimeInterpolator$InterpolationData *self = (t_AbstractTimeInterpolator$InterpolationData *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractTimeInterpolator$InterpolationData::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractTimeInterpolator$InterpolationData), &PY_TYPE_DEF(AbstractTimeInterpolator$InterpolationData), module, "AbstractTimeInterpolator$InterpolationData", 0);
      }

      void t_AbstractTimeInterpolator$InterpolationData::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator$InterpolationData), "class_", make_descriptor(AbstractTimeInterpolator$InterpolationData::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator$InterpolationData), "wrapfn_", make_descriptor(t_AbstractTimeInterpolator$InterpolationData::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator$InterpolationData), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractTimeInterpolator$InterpolationData::initializeClass, 1)))
          return NULL;
        return t_AbstractTimeInterpolator$InterpolationData::wrap_Object(AbstractTimeInterpolator$InterpolationData(((t_AbstractTimeInterpolator$InterpolationData *) arg)->object.this$));
      }
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractTimeInterpolator$InterpolationData::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_of_(t_AbstractTimeInterpolator$InterpolationData *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getCachedSamples(t_AbstractTimeInterpolator$InterpolationData *self)
      {
        ::org::orekit::utils::ImmutableTimeStampedCache result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedSamples());
        return ::org::orekit::utils::t_ImmutableTimeStampedCache::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getInterpolationDate(t_AbstractTimeInterpolator$InterpolationData *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getInterpolationDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getNeighborList(t_AbstractTimeInterpolator$InterpolationData *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getNeighborList());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__parameters_(t_AbstractTimeInterpolator$InterpolationData *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__cachedSamples(t_AbstractTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::orekit::utils::ImmutableTimeStampedCache value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedSamples());
        return ::org::orekit::utils::t_ImmutableTimeStampedCache::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__interpolationDate(t_AbstractTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getInterpolationDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__neighborList(t_AbstractTimeInterpolator$InterpolationData *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getNeighborList());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/InputStreamReader.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *InputStreamReader::class$ = NULL;
    jmethodID *InputStreamReader::mids$ = NULL;
    bool InputStreamReader::live$ = false;

    jclass InputStreamReader::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/InputStreamReader");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_115bc9fcd812647a] = env->getMethodID(cls, "<init>", "(Ljava/io/InputStream;)V");
        mids$[mid_init$_15770e8d8949a557] = env->getMethodID(cls, "<init>", "(Ljava/io/InputStream;Ljava/lang/String;)V");
        mids$[mid_close_0640e6acf969ed28] = env->getMethodID(cls, "close", "()V");
        mids$[mid_getEncoding_3cffd47377eca18a] = env->getMethodID(cls, "getEncoding", "()Ljava/lang/String;");
        mids$[mid_read_412668abc8d889e9] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_f0b052b9721148b0] = env->getMethodID(cls, "read", "([CII)I");
        mids$[mid_ready_89b302893bdbe1f1] = env->getMethodID(cls, "ready", "()Z");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InputStreamReader::InputStreamReader(const ::java::io::InputStream & a0) : ::java::io::Reader(env->newObject(initializeClass, &mids$, mid_init$_115bc9fcd812647a, a0.this$)) {}

    InputStreamReader::InputStreamReader(const ::java::io::InputStream & a0, const ::java::lang::String & a1) : ::java::io::Reader(env->newObject(initializeClass, &mids$, mid_init$_15770e8d8949a557, a0.this$, a1.this$)) {}

    void InputStreamReader::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0640e6acf969ed28]);
    }

    ::java::lang::String InputStreamReader::getEncoding() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getEncoding_3cffd47377eca18a]));
    }

    jint InputStreamReader::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_412668abc8d889e9]);
    }

    jint InputStreamReader::read(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_f0b052b9721148b0], a0.this$, a1, a2);
    }

    jboolean InputStreamReader::ready() const
    {
      return env->callBooleanMethod(this$, mids$[mid_ready_89b302893bdbe1f1]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_InputStreamReader_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_InputStreamReader_instance_(PyTypeObject *type, PyObject *arg);
    static int t_InputStreamReader_init_(t_InputStreamReader *self, PyObject *args, PyObject *kwds);
    static PyObject *t_InputStreamReader_close(t_InputStreamReader *self, PyObject *args);
    static PyObject *t_InputStreamReader_getEncoding(t_InputStreamReader *self);
    static PyObject *t_InputStreamReader_read(t_InputStreamReader *self, PyObject *args);
    static PyObject *t_InputStreamReader_ready(t_InputStreamReader *self, PyObject *args);
    static PyObject *t_InputStreamReader_get__encoding(t_InputStreamReader *self, void *data);
    static PyGetSetDef t_InputStreamReader__fields_[] = {
      DECLARE_GET_FIELD(t_InputStreamReader, encoding),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_InputStreamReader__methods_[] = {
      DECLARE_METHOD(t_InputStreamReader, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InputStreamReader, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InputStreamReader, close, METH_VARARGS),
      DECLARE_METHOD(t_InputStreamReader, getEncoding, METH_NOARGS),
      DECLARE_METHOD(t_InputStreamReader, read, METH_VARARGS),
      DECLARE_METHOD(t_InputStreamReader, ready, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(InputStreamReader)[] = {
      { Py_tp_methods, t_InputStreamReader__methods_ },
      { Py_tp_init, (void *) t_InputStreamReader_init_ },
      { Py_tp_getset, t_InputStreamReader__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(InputStreamReader)[] = {
      &PY_TYPE_DEF(::java::io::Reader),
      NULL
    };

    DEFINE_TYPE(InputStreamReader, t_InputStreamReader, InputStreamReader);

    void t_InputStreamReader::install(PyObject *module)
    {
      installType(&PY_TYPE(InputStreamReader), &PY_TYPE_DEF(InputStreamReader), module, "InputStreamReader", 0);
    }

    void t_InputStreamReader::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamReader), "class_", make_descriptor(InputStreamReader::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamReader), "wrapfn_", make_descriptor(t_InputStreamReader::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamReader), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_InputStreamReader_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, InputStreamReader::initializeClass, 1)))
        return NULL;
      return t_InputStreamReader::wrap_Object(InputStreamReader(((t_InputStreamReader *) arg)->object.this$));
    }
    static PyObject *t_InputStreamReader_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, InputStreamReader::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_InputStreamReader_init_(t_InputStreamReader *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::InputStream a0((jobject) NULL);
          InputStreamReader object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::InputStream::initializeClass, &a0))
          {
            INT_CALL(object = InputStreamReader(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::io::InputStream a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          InputStreamReader object((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
          {
            INT_CALL(object = InputStreamReader(a0, a1));
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

    static PyObject *t_InputStreamReader_close(t_InputStreamReader *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(InputStreamReader), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_InputStreamReader_getEncoding(t_InputStreamReader *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getEncoding());
      return j2p(result);
    }

    static PyObject *t_InputStreamReader_read(t_InputStreamReader *self, PyObject *args)
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

      return callSuper(PY_TYPE(InputStreamReader), (PyObject *) self, "read", args, 2);
    }

    static PyObject *t_InputStreamReader_ready(t_InputStreamReader *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.ready());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(InputStreamReader), (PyObject *) self, "ready", args, 2);
    }

    static PyObject *t_InputStreamReader_get__encoding(t_InputStreamReader *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getEncoding());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "java/util/List.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTForceModel::class$ = NULL;
            jmethodID *DSSTForceModel::mids$ = NULL;
            bool DSSTForceModel::live$ = false;

            jclass DSSTForceModel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_extractParameters_2a4cb51cb18e4e8b] = env->getMethodID(cls, "extractParameters", "([DLorg/orekit/time/AbsoluteDate;)[D");
                mids$[mid_extractParameters_32c7759b5aba450d] = env->getMethodID(cls, "extractParameters", "([Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getEventDetectors_d7cce92225eb0db2] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
                mids$[mid_getFieldEventDetectors_8130af76f6998f44] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
                mids$[mid_getMeanElementRate_3573019cca22a7a6] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanElementRate_6930c150caff50e0] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
                mids$[mid_initializeShortPeriodTerms_57b295149dcd4abd] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_0791dbeb06a23554] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_8fa6c0c067ead7b2] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_114c99ef73dfde56] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_a9be3da5be85857d] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< jdouble > DSSTForceModel::extractParameters(const JArray< jdouble > & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractParameters_2a4cb51cb18e4e8b], a0.this$, a1.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTForceModel::extractParameters(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_extractParameters_32c7759b5aba450d], a0.this$, a1.this$));
            }

            ::java::util::stream::Stream DSSTForceModel::getEventDetectors() const
            {
              return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_d7cce92225eb0db2]));
            }

            ::java::util::stream::Stream DSSTForceModel::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
            {
              return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_8130af76f6998f44], a0.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTForceModel::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_3573019cca22a7a6], a0.this$, a1.this$, a2.this$));
            }

            JArray< jdouble > DSSTForceModel::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_6930c150caff50e0], a0.this$, a1.this$, a2.this$));
            }

            void DSSTForceModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
            }

            void DSSTForceModel::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_init_811e49dad2467b67], a0.this$, a1.this$);
            }

            ::java::util::List DSSTForceModel::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_57b295149dcd4abd], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTForceModel::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_0791dbeb06a23554], a0.this$, a1.this$, a2.this$));
            }

            void DSSTForceModel::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_8fa6c0c067ead7b2], a0.this$);
            }

            void DSSTForceModel::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_114c99ef73dfde56], a0.this$, a1.this$);
            }

            void DSSTForceModel::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_a9be3da5be85857d], a0.this$, a1.this$);
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
            static PyObject *t_DSSTForceModel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTForceModel_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTForceModel_extractParameters(t_DSSTForceModel *self, PyObject *args);
            static PyObject *t_DSSTForceModel_getEventDetectors(t_DSSTForceModel *self);
            static PyObject *t_DSSTForceModel_getFieldEventDetectors(t_DSSTForceModel *self, PyObject *arg);
            static PyObject *t_DSSTForceModel_getMeanElementRate(t_DSSTForceModel *self, PyObject *args);
            static PyObject *t_DSSTForceModel_init(t_DSSTForceModel *self, PyObject *args);
            static PyObject *t_DSSTForceModel_initializeShortPeriodTerms(t_DSSTForceModel *self, PyObject *args);
            static PyObject *t_DSSTForceModel_registerAttitudeProvider(t_DSSTForceModel *self, PyObject *arg);
            static PyObject *t_DSSTForceModel_updateShortPeriodTerms(t_DSSTForceModel *self, PyObject *args);
            static PyObject *t_DSSTForceModel_get__eventDetectors(t_DSSTForceModel *self, void *data);
            static PyGetSetDef t_DSSTForceModel__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTForceModel, eventDetectors),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTForceModel__methods_[] = {
              DECLARE_METHOD(t_DSSTForceModel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTForceModel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTForceModel, extractParameters, METH_VARARGS),
              DECLARE_METHOD(t_DSSTForceModel, getEventDetectors, METH_NOARGS),
              DECLARE_METHOD(t_DSSTForceModel, getFieldEventDetectors, METH_O),
              DECLARE_METHOD(t_DSSTForceModel, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTForceModel, init, METH_VARARGS),
              DECLARE_METHOD(t_DSSTForceModel, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTForceModel, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTForceModel, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTForceModel)[] = {
              { Py_tp_methods, t_DSSTForceModel__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_DSSTForceModel__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTForceModel)[] = {
              &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
              NULL
            };

            DEFINE_TYPE(DSSTForceModel, t_DSSTForceModel, DSSTForceModel);

            void t_DSSTForceModel::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTForceModel), &PY_TYPE_DEF(DSSTForceModel), module, "DSSTForceModel", 0);
            }

            void t_DSSTForceModel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTForceModel), "class_", make_descriptor(DSSTForceModel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTForceModel), "wrapfn_", make_descriptor(t_DSSTForceModel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTForceModel), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTForceModel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTForceModel::initializeClass, 1)))
                return NULL;
              return t_DSSTForceModel::wrap_Object(DSSTForceModel(((t_DSSTForceModel *) arg)->object.this$));
            }
            static PyObject *t_DSSTForceModel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTForceModel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_DSSTForceModel_extractParameters(t_DSSTForceModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "[Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.extractParameters(a0, a1));
                    return result.wrap();
                  }
                }
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                  {
                    OBJ_CALL(result = self->object.extractParameters(a0, a1));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "extractParameters", args);
              return NULL;
            }

            static PyObject *t_DSSTForceModel_getEventDetectors(t_DSSTForceModel *self)
            {
              ::java::util::stream::Stream result((jobject) NULL);
              OBJ_CALL(result = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
            }

            static PyObject *t_DSSTForceModel_getFieldEventDetectors(t_DSSTForceModel *self, PyObject *arg)
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

            static PyObject *t_DSSTForceModel_getMeanElementRate(t_DSSTForceModel *self, PyObject *args)
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

            static PyObject *t_DSSTForceModel_init(t_DSSTForceModel *self, PyObject *args)
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

            static PyObject *t_DSSTForceModel_initializeShortPeriodTerms(t_DSSTForceModel *self, PyObject *args)
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

            static PyObject *t_DSSTForceModel_registerAttitudeProvider(t_DSSTForceModel *self, PyObject *arg)
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

            static PyObject *t_DSSTForceModel_updateShortPeriodTerms(t_DSSTForceModel *self, PyObject *args)
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

            static PyObject *t_DSSTForceModel_get__eventDetectors(t_DSSTForceModel *self, void *data)
            {
              ::java::util::stream::Stream value((jobject) NULL);
              OBJ_CALL(value = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}

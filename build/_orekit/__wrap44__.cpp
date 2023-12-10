#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3FileType.h"
#include "java/lang/String.h"
#include "org/orekit/files/sp3/SP3FileType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3FileType::class$ = NULL;
        jmethodID *SP3FileType::mids$ = NULL;
        bool SP3FileType::live$ = false;
        SP3FileType *SP3FileType::COMPASS = NULL;
        SP3FileType *SP3FileType::GALILEO = NULL;
        SP3FileType *SP3FileType::GLONASS = NULL;
        SP3FileType *SP3FileType::GPS = NULL;
        SP3FileType *SP3FileType::IRNSS = NULL;
        SP3FileType *SP3FileType::LEO = NULL;
        SP3FileType *SP3FileType::MIXED = NULL;
        SP3FileType *SP3FileType::QZSS = NULL;
        SP3FileType *SP3FileType::SBAS = NULL;
        SP3FileType *SP3FileType::UNDEFINED = NULL;

        jclass SP3FileType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3FileType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getKey_11b109bd155ca898] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
            mids$[mid_parse_f8b642c646b141dd] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/sp3/SP3FileType;");
            mids$[mid_valueOf_f8b642c646b141dd] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/sp3/SP3FileType;");
            mids$[mid_values_0e6c1ea630c62684] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/sp3/SP3FileType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            COMPASS = new SP3FileType(env->getStaticObjectField(cls, "COMPASS", "Lorg/orekit/files/sp3/SP3FileType;"));
            GALILEO = new SP3FileType(env->getStaticObjectField(cls, "GALILEO", "Lorg/orekit/files/sp3/SP3FileType;"));
            GLONASS = new SP3FileType(env->getStaticObjectField(cls, "GLONASS", "Lorg/orekit/files/sp3/SP3FileType;"));
            GPS = new SP3FileType(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/files/sp3/SP3FileType;"));
            IRNSS = new SP3FileType(env->getStaticObjectField(cls, "IRNSS", "Lorg/orekit/files/sp3/SP3FileType;"));
            LEO = new SP3FileType(env->getStaticObjectField(cls, "LEO", "Lorg/orekit/files/sp3/SP3FileType;"));
            MIXED = new SP3FileType(env->getStaticObjectField(cls, "MIXED", "Lorg/orekit/files/sp3/SP3FileType;"));
            QZSS = new SP3FileType(env->getStaticObjectField(cls, "QZSS", "Lorg/orekit/files/sp3/SP3FileType;"));
            SBAS = new SP3FileType(env->getStaticObjectField(cls, "SBAS", "Lorg/orekit/files/sp3/SP3FileType;"));
            UNDEFINED = new SP3FileType(env->getStaticObjectField(cls, "UNDEFINED", "Lorg/orekit/files/sp3/SP3FileType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::String SP3FileType::getKey() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_11b109bd155ca898]));
        }

        SP3FileType SP3FileType::parse(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SP3FileType(env->callStaticObjectMethod(cls, mids$[mid_parse_f8b642c646b141dd], a0.this$));
        }

        SP3FileType SP3FileType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SP3FileType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f8b642c646b141dd], a0.this$));
        }

        JArray< SP3FileType > SP3FileType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< SP3FileType >(env->callStaticObjectMethod(cls, mids$[mid_values_0e6c1ea630c62684]));
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
        static PyObject *t_SP3FileType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3FileType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3FileType_of_(t_SP3FileType *self, PyObject *args);
        static PyObject *t_SP3FileType_getKey(t_SP3FileType *self);
        static PyObject *t_SP3FileType_parse(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3FileType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_SP3FileType_values(PyTypeObject *type);
        static PyObject *t_SP3FileType_get__key(t_SP3FileType *self, void *data);
        static PyObject *t_SP3FileType_get__parameters_(t_SP3FileType *self, void *data);
        static PyGetSetDef t_SP3FileType__fields_[] = {
          DECLARE_GET_FIELD(t_SP3FileType, key),
          DECLARE_GET_FIELD(t_SP3FileType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3FileType__methods_[] = {
          DECLARE_METHOD(t_SP3FileType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3FileType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3FileType, of_, METH_VARARGS),
          DECLARE_METHOD(t_SP3FileType, getKey, METH_NOARGS),
          DECLARE_METHOD(t_SP3FileType, parse, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3FileType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SP3FileType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3FileType)[] = {
          { Py_tp_methods, t_SP3FileType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SP3FileType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3FileType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(SP3FileType, t_SP3FileType, SP3FileType);
        PyObject *t_SP3FileType::wrap_Object(const SP3FileType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3FileType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3FileType *self = (t_SP3FileType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SP3FileType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3FileType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3FileType *self = (t_SP3FileType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SP3FileType::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3FileType), &PY_TYPE_DEF(SP3FileType), module, "SP3FileType", 0);
        }

        void t_SP3FileType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "class_", make_descriptor(SP3FileType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "wrapfn_", make_descriptor(t_SP3FileType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3FileType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "COMPASS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::COMPASS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "GALILEO", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::GALILEO)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "GLONASS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::GLONASS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "GPS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::GPS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "IRNSS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::IRNSS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "LEO", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::LEO)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "MIXED", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::MIXED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "QZSS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::QZSS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "SBAS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::SBAS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "UNDEFINED", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::UNDEFINED)));
        }

        static PyObject *t_SP3FileType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3FileType::initializeClass, 1)))
            return NULL;
          return t_SP3FileType::wrap_Object(SP3FileType(((t_SP3FileType *) arg)->object.this$));
        }
        static PyObject *t_SP3FileType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3FileType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SP3FileType_of_(t_SP3FileType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SP3FileType_getKey(t_SP3FileType *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getKey());
          return j2p(result);
        }

        static PyObject *t_SP3FileType_parse(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          SP3FileType result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3FileType::parse(a0));
            return t_SP3FileType::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parse", arg);
          return NULL;
        }

        static PyObject *t_SP3FileType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          SP3FileType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3FileType::valueOf(a0));
            return t_SP3FileType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_SP3FileType_values(PyTypeObject *type)
        {
          JArray< SP3FileType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::sp3::SP3FileType::values());
          return JArray<jobject>(result.this$).wrap(t_SP3FileType::wrap_jobject);
        }
        static PyObject *t_SP3FileType_get__parameters_(t_SP3FileType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_SP3FileType_get__key(t_SP3FileType *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getKey());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/OneWayGNSSRangeBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *OneWayGNSSRangeBuilder::class$ = NULL;
          jmethodID *OneWayGNSSRangeBuilder::mids$ = NULL;
          bool OneWayGNSSRangeBuilder::live$ = false;

          jclass OneWayGNSSRangeBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/OneWayGNSSRangeBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_build_e19ea6cda69364bb] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/gnss/OneWayGNSSRange;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::OneWayGNSSRange OneWayGNSSRangeBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::OneWayGNSSRange(env->callObjectMethod(this$, mids$[mid_build_e19ea6cda69364bb], a0.this$, a1.this$));
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
          static PyObject *t_OneWayGNSSRangeBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSRangeBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSRangeBuilder_of_(t_OneWayGNSSRangeBuilder *self, PyObject *args);
          static PyObject *t_OneWayGNSSRangeBuilder_build(t_OneWayGNSSRangeBuilder *self, PyObject *args);
          static PyObject *t_OneWayGNSSRangeBuilder_get__parameters_(t_OneWayGNSSRangeBuilder *self, void *data);
          static PyGetSetDef t_OneWayGNSSRangeBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_OneWayGNSSRangeBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OneWayGNSSRangeBuilder__methods_[] = {
            DECLARE_METHOD(t_OneWayGNSSRangeBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSRangeBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSRangeBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_OneWayGNSSRangeBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OneWayGNSSRangeBuilder)[] = {
            { Py_tp_methods, t_OneWayGNSSRangeBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OneWayGNSSRangeBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OneWayGNSSRangeBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(OneWayGNSSRangeBuilder, t_OneWayGNSSRangeBuilder, OneWayGNSSRangeBuilder);
          PyObject *t_OneWayGNSSRangeBuilder::wrap_Object(const OneWayGNSSRangeBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSRangeBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSRangeBuilder *self = (t_OneWayGNSSRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OneWayGNSSRangeBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSRangeBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSRangeBuilder *self = (t_OneWayGNSSRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OneWayGNSSRangeBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(OneWayGNSSRangeBuilder), &PY_TYPE_DEF(OneWayGNSSRangeBuilder), module, "OneWayGNSSRangeBuilder", 0);
          }

          void t_OneWayGNSSRangeBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRangeBuilder), "class_", make_descriptor(OneWayGNSSRangeBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRangeBuilder), "wrapfn_", make_descriptor(t_OneWayGNSSRangeBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRangeBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OneWayGNSSRangeBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OneWayGNSSRangeBuilder::initializeClass, 1)))
              return NULL;
            return t_OneWayGNSSRangeBuilder::wrap_Object(OneWayGNSSRangeBuilder(((t_OneWayGNSSRangeBuilder *) arg)->object.this$));
          }
          static PyObject *t_OneWayGNSSRangeBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OneWayGNSSRangeBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OneWayGNSSRangeBuilder_of_(t_OneWayGNSSRangeBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OneWayGNSSRangeBuilder_build(t_OneWayGNSSRangeBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::gnss::OneWayGNSSRange result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::gnss::t_OneWayGNSSRange::wrap_Object(result);
            }

            return callSuper(PY_TYPE(OneWayGNSSRangeBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_OneWayGNSSRangeBuilder_get__parameters_(t_OneWayGNSSRangeBuilder *self, void *data)
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
#include "org/orekit/utils/TimeStampedPVCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedPVCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedPVCoordinatesHermiteInterpolator::mids$ = NULL;
      bool TimeStampedPVCoordinatesHermiteInterpolator::live$ = false;

      jclass TimeStampedPVCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedPVCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_297c693ff16234ea] = env->getMethodID(cls, "<init>", "(ILorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_ce04d2837a89861b] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getFilter_16e9a7b5414faf2d] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_interpolate_9ba6099e2bdc7195] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/utils/TimeStampedPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedPVCoordinatesHermiteInterpolator::TimeStampedPVCoordinatesHermiteInterpolator() : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      TimeStampedPVCoordinatesHermiteInterpolator::TimeStampedPVCoordinatesHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      TimeStampedPVCoordinatesHermiteInterpolator::TimeStampedPVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_297c693ff16234ea, a0, a1.this$)) {}

      TimeStampedPVCoordinatesHermiteInterpolator::TimeStampedPVCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_ce04d2837a89861b, a0, a1, a2.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter TimeStampedPVCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_16e9a7b5414faf2d]));
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
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_of_(t_TimeStampedPVCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedPVCoordinatesHermiteInterpolator_init_(t_TimeStampedPVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_getFilter(t_TimeStampedPVCoordinatesHermiteInterpolator *self);
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_get__filter(t_TimeStampedPVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedPVCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedPVCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedPVCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_TimeStampedPVCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedPVCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedPVCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPVCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPVCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedPVCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedPVCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedPVCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedPVCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedPVCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedPVCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedPVCoordinatesHermiteInterpolator, t_TimeStampedPVCoordinatesHermiteInterpolator, TimeStampedPVCoordinatesHermiteInterpolator);
      PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator::wrap_Object(const TimeStampedPVCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedPVCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedPVCoordinatesHermiteInterpolator *self = (t_TimeStampedPVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedPVCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedPVCoordinatesHermiteInterpolator *self = (t_TimeStampedPVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedPVCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedPVCoordinatesHermiteInterpolator), &PY_TYPE_DEF(TimeStampedPVCoordinatesHermiteInterpolator), module, "TimeStampedPVCoordinatesHermiteInterpolator", 0);
      }

      void t_TimeStampedPVCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPVCoordinatesHermiteInterpolator), "class_", make_descriptor(TimeStampedPVCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPVCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedPVCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPVCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedPVCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedPVCoordinatesHermiteInterpolator::wrap_Object(TimeStampedPVCoordinatesHermiteInterpolator(((t_TimeStampedPVCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedPVCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_of_(t_TimeStampedPVCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedPVCoordinatesHermiteInterpolator_init_(t_TimeStampedPVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedPVCoordinatesHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedPVCoordinatesHermiteInterpolator());
            self->object = object;
            self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates);
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedPVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedPVCoordinatesHermiteInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedPVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedPVCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates);
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedPVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDK", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedPVCoordinatesHermiteInterpolator(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates);
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

      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_getFilter(t_TimeStampedPVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedPVCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_get__filter(t_TimeStampedPVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/GammaDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *GammaDistribution::class$ = NULL;
        jmethodID *GammaDistribution::mids$ = NULL;
        bool GammaDistribution::live$ = false;

        jclass GammaDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/GammaDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_dcbc7ce2902fa136] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_dff5885c2c873297] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getShape_dff5885c2c873297] = env->getMethodID(cls, "getShape", "()D");
            mids$[mid_getSupportLowerBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_dcbc7ce2902fa136] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GammaDistribution::GammaDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        GammaDistribution::GammaDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

        jdouble GammaDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jdouble GammaDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_dcbc7ce2902fa136], a0);
        }

        jdouble GammaDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble GammaDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        jdouble GammaDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_dff5885c2c873297]);
        }

        jdouble GammaDistribution::getShape() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getShape_dff5885c2c873297]);
        }

        jdouble GammaDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_dff5885c2c873297]);
        }

        jdouble GammaDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_dff5885c2c873297]);
        }

        jboolean GammaDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
        }

        jdouble GammaDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_dcbc7ce2902fa136], a0);
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
        static PyObject *t_GammaDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GammaDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GammaDistribution_init_(t_GammaDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GammaDistribution_cumulativeProbability(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_density(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_getNumericalMean(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_getNumericalVariance(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_getScale(t_GammaDistribution *self);
        static PyObject *t_GammaDistribution_getShape(t_GammaDistribution *self);
        static PyObject *t_GammaDistribution_getSupportLowerBound(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_getSupportUpperBound(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_isSupportConnected(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_logDensity(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_get__numericalMean(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__numericalVariance(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__scale(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__shape(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__supportConnected(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__supportLowerBound(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__supportUpperBound(t_GammaDistribution *self, void *data);
        static PyGetSetDef t_GammaDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_GammaDistribution, numericalMean),
          DECLARE_GET_FIELD(t_GammaDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_GammaDistribution, scale),
          DECLARE_GET_FIELD(t_GammaDistribution, shape),
          DECLARE_GET_FIELD(t_GammaDistribution, supportConnected),
          DECLARE_GET_FIELD(t_GammaDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_GammaDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GammaDistribution__methods_[] = {
          DECLARE_METHOD(t_GammaDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GammaDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GammaDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_GammaDistribution, getShape, METH_NOARGS),
          DECLARE_METHOD(t_GammaDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GammaDistribution)[] = {
          { Py_tp_methods, t_GammaDistribution__methods_ },
          { Py_tp_init, (void *) t_GammaDistribution_init_ },
          { Py_tp_getset, t_GammaDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GammaDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(GammaDistribution, t_GammaDistribution, GammaDistribution);

        void t_GammaDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(GammaDistribution), &PY_TYPE_DEF(GammaDistribution), module, "GammaDistribution", 0);
        }

        void t_GammaDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GammaDistribution), "class_", make_descriptor(GammaDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GammaDistribution), "wrapfn_", make_descriptor(t_GammaDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GammaDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GammaDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GammaDistribution::initializeClass, 1)))
            return NULL;
          return t_GammaDistribution::wrap_Object(GammaDistribution(((t_GammaDistribution *) arg)->object.this$));
        }
        static PyObject *t_GammaDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GammaDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GammaDistribution_init_(t_GammaDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              GammaDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = GammaDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              GammaDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = GammaDistribution(a0, a1, a2));
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

        static PyObject *t_GammaDistribution_cumulativeProbability(t_GammaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_GammaDistribution_density(t_GammaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_GammaDistribution_getNumericalMean(t_GammaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_GammaDistribution_getNumericalVariance(t_GammaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_GammaDistribution_getScale(t_GammaDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GammaDistribution_getShape(t_GammaDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getShape());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GammaDistribution_getSupportLowerBound(t_GammaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_GammaDistribution_getSupportUpperBound(t_GammaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_GammaDistribution_isSupportConnected(t_GammaDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_GammaDistribution_logDensity(t_GammaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_GammaDistribution_get__numericalMean(t_GammaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GammaDistribution_get__numericalVariance(t_GammaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GammaDistribution_get__scale(t_GammaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GammaDistribution_get__shape(t_GammaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getShape());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GammaDistribution_get__supportConnected(t_GammaDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_GammaDistribution_get__supportLowerBound(t_GammaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GammaDistribution_get__supportUpperBound(t_GammaDistribution *self, void *data)
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
#include "org/hipparchus/util/FastMath.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/util/SinhCosh.h"
#include "org/hipparchus/util/SinCos.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
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
          mids$[mid_IEEEremainder_86ffecc08a63eff0] = env->getStaticMethodID(cls, "IEEEremainder", "(DD)D");
          mids$[mid_IEEEremainder_40cfe74535da4622] = env->getStaticMethodID(cls, "IEEEremainder", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_IEEEremainder_6746cc1cd9210d54] = env->getStaticMethodID(cls, "IEEEremainder", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_abs_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "abs", "(D)D");
          mids$[mid_abs_b0cdbb488a56cf9c] = env->getStaticMethodID(cls, "abs", "(F)F");
          mids$[mid_abs_2235cd056f5a882b] = env->getStaticMethodID(cls, "abs", "(I)I");
          mids$[mid_abs_02b241598e254a3f] = env->getStaticMethodID(cls, "abs", "(J)J");
          mids$[mid_abs_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "abs", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_absExact_2235cd056f5a882b] = env->getStaticMethodID(cls, "absExact", "(I)I");
          mids$[mid_absExact_02b241598e254a3f] = env->getStaticMethodID(cls, "absExact", "(J)J");
          mids$[mid_acos_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "acos", "(D)D");
          mids$[mid_acos_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "acos", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_acosh_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "acosh", "(D)D");
          mids$[mid_acosh_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "acosh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_addExact_819f91eddf220c5b] = env->getStaticMethodID(cls, "addExact", "(II)I");
          mids$[mid_addExact_fe4804b67425641b] = env->getStaticMethodID(cls, "addExact", "(JJ)J");
          mids$[mid_asin_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "asin", "(D)D");
          mids$[mid_asin_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "asin", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_asinh_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "asinh", "(D)D");
          mids$[mid_asinh_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "asinh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_atan_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "atan", "(D)D");
          mids$[mid_atan_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "atan", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_atan2_86ffecc08a63eff0] = env->getStaticMethodID(cls, "atan2", "(DD)D");
          mids$[mid_atan2_6746cc1cd9210d54] = env->getStaticMethodID(cls, "atan2", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_atanh_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "atanh", "(D)D");
          mids$[mid_atanh_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "atanh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_cbrt_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "cbrt", "(D)D");
          mids$[mid_cbrt_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "cbrt", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ceil_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "ceil", "(D)D");
          mids$[mid_ceil_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "ceil", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ceilDiv_819f91eddf220c5b] = env->getStaticMethodID(cls, "ceilDiv", "(II)I");
          mids$[mid_ceilDiv_559895cd752223b6] = env->getStaticMethodID(cls, "ceilDiv", "(JI)J");
          mids$[mid_ceilDiv_fe4804b67425641b] = env->getStaticMethodID(cls, "ceilDiv", "(JJ)J");
          mids$[mid_ceilDivExact_819f91eddf220c5b] = env->getStaticMethodID(cls, "ceilDivExact", "(II)I");
          mids$[mid_ceilDivExact_fe4804b67425641b] = env->getStaticMethodID(cls, "ceilDivExact", "(JJ)J");
          mids$[mid_ceilMod_819f91eddf220c5b] = env->getStaticMethodID(cls, "ceilMod", "(II)I");
          mids$[mid_ceilMod_ebaf2854e1c09ea3] = env->getStaticMethodID(cls, "ceilMod", "(JI)I");
          mids$[mid_ceilMod_fe4804b67425641b] = env->getStaticMethodID(cls, "ceilMod", "(JJ)J");
          mids$[mid_clamp_8c19bdea212fe058] = env->getStaticMethodID(cls, "clamp", "(DDD)D");
          mids$[mid_clamp_7d1f92abaededf20] = env->getStaticMethodID(cls, "clamp", "(FFF)F");
          mids$[mid_clamp_0332a3c43a24cb33] = env->getStaticMethodID(cls, "clamp", "(III)I");
          mids$[mid_clamp_6d92ec28f5cac1cb] = env->getStaticMethodID(cls, "clamp", "(JII)I");
          mids$[mid_clamp_54fdaa0e49c3d6a2] = env->getStaticMethodID(cls, "clamp", "(JJJ)J");
          mids$[mid_copySign_86ffecc08a63eff0] = env->getStaticMethodID(cls, "copySign", "(DD)D");
          mids$[mid_copySign_b2255e57f862a26c] = env->getStaticMethodID(cls, "copySign", "(FF)F");
          mids$[mid_copySign_40cfe74535da4622] = env->getStaticMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_copySign_6746cc1cd9210d54] = env->getStaticMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_cos_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "cos", "(D)D");
          mids$[mid_cos_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "cos", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_cosh_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "cosh", "(D)D");
          mids$[mid_cosh_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "cosh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_decrementExact_2235cd056f5a882b] = env->getStaticMethodID(cls, "decrementExact", "(I)I");
          mids$[mid_decrementExact_02b241598e254a3f] = env->getStaticMethodID(cls, "decrementExact", "(J)J");
          mids$[mid_divideExact_819f91eddf220c5b] = env->getStaticMethodID(cls, "divideExact", "(II)I");
          mids$[mid_divideExact_fe4804b67425641b] = env->getStaticMethodID(cls, "divideExact", "(JJ)J");
          mids$[mid_exp_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "exp", "(D)D");
          mids$[mid_exp_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "exp", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_expm1_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "expm1", "(D)D");
          mids$[mid_expm1_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "expm1", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_floor_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "floor", "(D)D");
          mids$[mid_floor_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "floor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_floorDiv_819f91eddf220c5b] = env->getStaticMethodID(cls, "floorDiv", "(II)I");
          mids$[mid_floorDiv_559895cd752223b6] = env->getStaticMethodID(cls, "floorDiv", "(JI)J");
          mids$[mid_floorDiv_fe4804b67425641b] = env->getStaticMethodID(cls, "floorDiv", "(JJ)J");
          mids$[mid_floorDivExact_819f91eddf220c5b] = env->getStaticMethodID(cls, "floorDivExact", "(II)I");
          mids$[mid_floorDivExact_fe4804b67425641b] = env->getStaticMethodID(cls, "floorDivExact", "(JJ)J");
          mids$[mid_floorMod_819f91eddf220c5b] = env->getStaticMethodID(cls, "floorMod", "(II)I");
          mids$[mid_floorMod_ebaf2854e1c09ea3] = env->getStaticMethodID(cls, "floorMod", "(JI)I");
          mids$[mid_floorMod_fe4804b67425641b] = env->getStaticMethodID(cls, "floorMod", "(JJ)J");
          mids$[mid_fma_8c19bdea212fe058] = env->getStaticMethodID(cls, "fma", "(DDD)D");
          mids$[mid_fma_7d1f92abaededf20] = env->getStaticMethodID(cls, "fma", "(FFF)F");
          mids$[mid_getExponent_4508852644846c83] = env->getStaticMethodID(cls, "getExponent", "(D)I");
          mids$[mid_getExponent_a420854bf0746aa6] = env->getStaticMethodID(cls, "getExponent", "(F)I");
          mids$[mid_hypot_86ffecc08a63eff0] = env->getStaticMethodID(cls, "hypot", "(DD)D");
          mids$[mid_hypot_6746cc1cd9210d54] = env->getStaticMethodID(cls, "hypot", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_incrementExact_2235cd056f5a882b] = env->getStaticMethodID(cls, "incrementExact", "(I)I");
          mids$[mid_incrementExact_02b241598e254a3f] = env->getStaticMethodID(cls, "incrementExact", "(J)J");
          mids$[mid_log_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "log", "(D)D");
          mids$[mid_log_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "log", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_log_86ffecc08a63eff0] = env->getStaticMethodID(cls, "log", "(DD)D");
          mids$[mid_log10_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "log10", "(D)D");
          mids$[mid_log10_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "log10", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_log1p_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "log1p", "(D)D");
          mids$[mid_log1p_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "log1p", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_max_86ffecc08a63eff0] = env->getStaticMethodID(cls, "max", "(DD)D");
          mids$[mid_max_b2255e57f862a26c] = env->getStaticMethodID(cls, "max", "(FF)F");
          mids$[mid_max_819f91eddf220c5b] = env->getStaticMethodID(cls, "max", "(II)I");
          mids$[mid_max_fe4804b67425641b] = env->getStaticMethodID(cls, "max", "(JJ)J");
          mids$[mid_max_40cfe74535da4622] = env->getStaticMethodID(cls, "max", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_max_6746cc1cd9210d54] = env->getStaticMethodID(cls, "max", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_min_86ffecc08a63eff0] = env->getStaticMethodID(cls, "min", "(DD)D");
          mids$[mid_min_40cfe74535da4622] = env->getStaticMethodID(cls, "min", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_min_b2255e57f862a26c] = env->getStaticMethodID(cls, "min", "(FF)F");
          mids$[mid_min_819f91eddf220c5b] = env->getStaticMethodID(cls, "min", "(II)I");
          mids$[mid_min_fe4804b67425641b] = env->getStaticMethodID(cls, "min", "(JJ)J");
          mids$[mid_min_6746cc1cd9210d54] = env->getStaticMethodID(cls, "min", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_multiplyExact_819f91eddf220c5b] = env->getStaticMethodID(cls, "multiplyExact", "(II)I");
          mids$[mid_multiplyExact_559895cd752223b6] = env->getStaticMethodID(cls, "multiplyExact", "(JI)J");
          mids$[mid_multiplyExact_fe4804b67425641b] = env->getStaticMethodID(cls, "multiplyExact", "(JJ)J");
          mids$[mid_multiplyFull_30f7d12d17ddfa28] = env->getStaticMethodID(cls, "multiplyFull", "(II)J");
          mids$[mid_multiplyHigh_fe4804b67425641b] = env->getStaticMethodID(cls, "multiplyHigh", "(JJ)J");
          mids$[mid_negateExact_2235cd056f5a882b] = env->getStaticMethodID(cls, "negateExact", "(I)I");
          mids$[mid_negateExact_02b241598e254a3f] = env->getStaticMethodID(cls, "negateExact", "(J)J");
          mids$[mid_nextAfter_86ffecc08a63eff0] = env->getStaticMethodID(cls, "nextAfter", "(DD)D");
          mids$[mid_nextAfter_407b8c118410863a] = env->getStaticMethodID(cls, "nextAfter", "(FD)F");
          mids$[mid_nextDown_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "nextDown", "(D)D");
          mids$[mid_nextDown_b0cdbb488a56cf9c] = env->getStaticMethodID(cls, "nextDown", "(F)F");
          mids$[mid_nextUp_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "nextUp", "(D)D");
          mids$[mid_nextUp_b0cdbb488a56cf9c] = env->getStaticMethodID(cls, "nextUp", "(F)F");
          mids$[mid_norm_60915becce1cbd8b] = env->getStaticMethodID(cls, "norm", "(Lorg/hipparchus/CalculusFieldElement;)D");
          mids$[mid_pow_86ffecc08a63eff0] = env->getStaticMethodID(cls, "pow", "(DD)D");
          mids$[mid_pow_40cfe74535da4622] = env->getStaticMethodID(cls, "pow", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_pow_948617e69b66e15d] = env->getStaticMethodID(cls, "pow", "(DI)D");
          mids$[mid_pow_50367ad71bdff0f8] = env->getStaticMethodID(cls, "pow", "(DJ)D");
          mids$[mid_pow_7fc015d41da5fb84] = env->getStaticMethodID(cls, "pow", "(Lorg/hipparchus/CalculusFieldElement;I)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_pow_6746cc1cd9210d54] = env->getStaticMethodID(cls, "pow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_random_dff5885c2c873297] = env->getStaticMethodID(cls, "random", "()D");
          mids$[mid_rint_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "rint", "(D)D");
          mids$[mid_rint_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "rint", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_round_cebf7dc9be03a93c] = env->getStaticMethodID(cls, "round", "(D)J");
          mids$[mid_round_a420854bf0746aa6] = env->getStaticMethodID(cls, "round", "(F)I");
          mids$[mid_round_f06b0a67d7f85a65] = env->getStaticMethodID(cls, "round", "(Lorg/hipparchus/CalculusFieldElement;)J");
          mids$[mid_scalb_948617e69b66e15d] = env->getStaticMethodID(cls, "scalb", "(DI)D");
          mids$[mid_scalb_8842c007fabd6574] = env->getStaticMethodID(cls, "scalb", "(FI)F");
          mids$[mid_scalb_7fc015d41da5fb84] = env->getStaticMethodID(cls, "scalb", "(Lorg/hipparchus/CalculusFieldElement;I)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_sign_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "sign", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_signum_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "signum", "(D)D");
          mids$[mid_signum_b0cdbb488a56cf9c] = env->getStaticMethodID(cls, "signum", "(F)F");
          mids$[mid_sin_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "sin", "(D)D");
          mids$[mid_sin_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "sin", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_sinCos_5b68da498d3c3153] = env->getStaticMethodID(cls, "sinCos", "(D)Lorg/hipparchus/util/SinCos;");
          mids$[mid_sinCos_e9c0163cbe21a86f] = env->getStaticMethodID(cls, "sinCos", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "sinh", "(D)D");
          mids$[mid_sinh_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "sinh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_sinhCosh_15df630f2a63a755] = env->getStaticMethodID(cls, "sinhCosh", "(D)Lorg/hipparchus/util/SinhCosh;");
          mids$[mid_sinhCosh_7f302e208b09f1bd] = env->getStaticMethodID(cls, "sinhCosh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "sqrt", "(D)D");
          mids$[mid_sqrt_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "sqrt", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_subtractExact_819f91eddf220c5b] = env->getStaticMethodID(cls, "subtractExact", "(II)I");
          mids$[mid_subtractExact_fe4804b67425641b] = env->getStaticMethodID(cls, "subtractExact", "(JJ)J");
          mids$[mid_tan_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "tan", "(D)D");
          mids$[mid_tan_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "tan", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_tanh_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "tanh", "(D)D");
          mids$[mid_tanh_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "tanh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toDegrees_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "toDegrees", "(D)D");
          mids$[mid_toDegrees_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "toDegrees", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toIntExact_d0f2acf0c955e055] = env->getStaticMethodID(cls, "toIntExact", "(J)I");
          mids$[mid_toRadians_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "toRadians", "(D)D");
          mids$[mid_toRadians_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "toRadians", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ulp_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "ulp", "(D)D");
          mids$[mid_ulp_b0cdbb488a56cf9c] = env->getStaticMethodID(cls, "ulp", "(F)F");
          mids$[mid_ulp_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "ulp", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_unsignedMultiplyHigh_fe4804b67425641b] = env->getStaticMethodID(cls, "unsignedMultiplyHigh", "(JJ)J");

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
        return env->callStaticDoubleMethod(cls, mids$[mid_IEEEremainder_86ffecc08a63eff0], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::IEEEremainder(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_IEEEremainder_40cfe74535da4622], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FastMath::IEEEremainder(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_IEEEremainder_6746cc1cd9210d54], a0.this$, a1.this$));
      }

      jdouble FastMath::abs(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_abs_dcbc7ce2902fa136], a0);
      }

      jfloat FastMath::abs(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_abs_b0cdbb488a56cf9c], a0);
      }

      jint FastMath::abs(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_abs_2235cd056f5a882b], a0);
      }

      jlong FastMath::abs(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_abs_02b241598e254a3f], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::abs(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_abs_a4b1871f4d29e58b], a0.this$));
      }

      jint FastMath::absExact(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_absExact_2235cd056f5a882b], a0);
      }

      jlong FastMath::absExact(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_absExact_02b241598e254a3f], a0);
      }

      jdouble FastMath::acos(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_acos_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::acos(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_acos_a4b1871f4d29e58b], a0.this$));
      }

      jdouble FastMath::acosh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_acosh_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::acosh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_acosh_a4b1871f4d29e58b], a0.this$));
      }

      jint FastMath::addExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_addExact_819f91eddf220c5b], a0, a1);
      }

      jlong FastMath::addExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_addExact_fe4804b67425641b], a0, a1);
      }

      jdouble FastMath::asin(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_asin_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::asin(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_asin_a4b1871f4d29e58b], a0.this$));
      }

      jdouble FastMath::asinh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_asinh_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::asinh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_asinh_a4b1871f4d29e58b], a0.this$));
      }

      jdouble FastMath::atan(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_atan_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::atan(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_atan_a4b1871f4d29e58b], a0.this$));
      }

      jdouble FastMath::atan2(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_atan2_86ffecc08a63eff0], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::atan2(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_atan2_6746cc1cd9210d54], a0.this$, a1.this$));
      }

      jdouble FastMath::atanh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_atanh_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::atanh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_atanh_a4b1871f4d29e58b], a0.this$));
      }

      jdouble FastMath::cbrt(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_cbrt_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::cbrt(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_cbrt_a4b1871f4d29e58b], a0.this$));
      }

      jdouble FastMath::ceil(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ceil_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::ceil(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ceil_a4b1871f4d29e58b], a0.this$));
      }

      jint FastMath::ceilDiv(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_ceilDiv_819f91eddf220c5b], a0, a1);
      }

      jlong FastMath::ceilDiv(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_ceilDiv_559895cd752223b6], a0, a1);
      }

      jlong FastMath::ceilDiv(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_ceilDiv_fe4804b67425641b], a0, a1);
      }

      jint FastMath::ceilDivExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_ceilDivExact_819f91eddf220c5b], a0, a1);
      }

      jlong FastMath::ceilDivExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_ceilDivExact_fe4804b67425641b], a0, a1);
      }

      jint FastMath::ceilMod(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_ceilMod_819f91eddf220c5b], a0, a1);
      }

      jint FastMath::ceilMod(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_ceilMod_ebaf2854e1c09ea3], a0, a1);
      }

      jlong FastMath::ceilMod(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_ceilMod_fe4804b67425641b], a0, a1);
      }

      jdouble FastMath::clamp(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_clamp_8c19bdea212fe058], a0, a1, a2);
      }

      jfloat FastMath::clamp(jfloat a0, jfloat a1, jfloat a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_clamp_7d1f92abaededf20], a0, a1, a2);
      }

      jint FastMath::clamp(jint a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_clamp_0332a3c43a24cb33], a0, a1, a2);
      }

      jint FastMath::clamp(jlong a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_clamp_6d92ec28f5cac1cb], a0, a1, a2);
      }

      jlong FastMath::clamp(jlong a0, jlong a1, jlong a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_clamp_54fdaa0e49c3d6a2], a0, a1, a2);
      }

      jdouble FastMath::copySign(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_copySign_86ffecc08a63eff0], a0, a1);
      }

      jfloat FastMath::copySign(jfloat a0, jfloat a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_copySign_b2255e57f862a26c], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::copySign(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_copySign_40cfe74535da4622], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FastMath::copySign(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_copySign_6746cc1cd9210d54], a0.this$, a1.this$));
      }

      jdouble FastMath::cos(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_cos_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::cos(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_cos_a4b1871f4d29e58b], a0.this$));
      }

      jdouble FastMath::cosh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_cosh_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::cosh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_cosh_a4b1871f4d29e58b], a0.this$));
      }

      jint FastMath::decrementExact(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_decrementExact_2235cd056f5a882b], a0);
      }

      jlong FastMath::decrementExact(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_decrementExact_02b241598e254a3f], a0);
      }

      jint FastMath::divideExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_divideExact_819f91eddf220c5b], a0, a1);
      }

      jlong FastMath::divideExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_divideExact_fe4804b67425641b], a0, a1);
      }

      jdouble FastMath::exp(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_exp_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::exp(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_exp_a4b1871f4d29e58b], a0.this$));
      }

      jdouble FastMath::expm1(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_expm1_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::expm1(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_expm1_a4b1871f4d29e58b], a0.this$));
      }

      jdouble FastMath::floor(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_floor_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::floor(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_floor_a4b1871f4d29e58b], a0.this$));
      }

      jint FastMath::floorDiv(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_floorDiv_819f91eddf220c5b], a0, a1);
      }

      jlong FastMath::floorDiv(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_floorDiv_559895cd752223b6], a0, a1);
      }

      jlong FastMath::floorDiv(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_floorDiv_fe4804b67425641b], a0, a1);
      }

      jint FastMath::floorDivExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_floorDivExact_819f91eddf220c5b], a0, a1);
      }

      jlong FastMath::floorDivExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_floorDivExact_fe4804b67425641b], a0, a1);
      }

      jint FastMath::floorMod(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_floorMod_819f91eddf220c5b], a0, a1);
      }

      jint FastMath::floorMod(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_floorMod_ebaf2854e1c09ea3], a0, a1);
      }

      jlong FastMath::floorMod(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_floorMod_fe4804b67425641b], a0, a1);
      }

      jdouble FastMath::fma(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_fma_8c19bdea212fe058], a0, a1, a2);
      }

      jfloat FastMath::fma(jfloat a0, jfloat a1, jfloat a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_fma_7d1f92abaededf20], a0, a1, a2);
      }

      jint FastMath::getExponent(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_getExponent_4508852644846c83], a0);
      }

      jint FastMath::getExponent(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_getExponent_a420854bf0746aa6], a0);
      }

      jdouble FastMath::hypot(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hypot_86ffecc08a63eff0], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::hypot(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hypot_6746cc1cd9210d54], a0.this$, a1.this$));
      }

      jint FastMath::incrementExact(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_incrementExact_2235cd056f5a882b], a0);
      }

      jlong FastMath::incrementExact(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_incrementExact_02b241598e254a3f], a0);
      }

      jdouble FastMath::log(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_log_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::log(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_log_a4b1871f4d29e58b], a0.this$));
      }

      jdouble FastMath::log(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_log_86ffecc08a63eff0], a0, a1);
      }

      jdouble FastMath::log10(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_log10_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::log10(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_log10_a4b1871f4d29e58b], a0.this$));
      }

      jdouble FastMath::log1p(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_log1p_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::log1p(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_log1p_a4b1871f4d29e58b], a0.this$));
      }

      jdouble FastMath::max$(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_max_86ffecc08a63eff0], a0, a1);
      }

      jfloat FastMath::max$(jfloat a0, jfloat a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_max_b2255e57f862a26c], a0, a1);
      }

      jint FastMath::max$(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_max_819f91eddf220c5b], a0, a1);
      }

      jlong FastMath::max$(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_max_fe4804b67425641b], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::max$(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_max_40cfe74535da4622], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FastMath::max$(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_max_6746cc1cd9210d54], a0.this$, a1.this$));
      }

      jdouble FastMath::min$(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_min_86ffecc08a63eff0], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::min$(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_min_40cfe74535da4622], a0.this$, a1));
      }

      jfloat FastMath::min$(jfloat a0, jfloat a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_min_b2255e57f862a26c], a0, a1);
      }

      jint FastMath::min$(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_min_819f91eddf220c5b], a0, a1);
      }

      jlong FastMath::min$(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_min_fe4804b67425641b], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::min$(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_min_6746cc1cd9210d54], a0.this$, a1.this$));
      }

      jint FastMath::multiplyExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_multiplyExact_819f91eddf220c5b], a0, a1);
      }

      jlong FastMath::multiplyExact(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_multiplyExact_559895cd752223b6], a0, a1);
      }

      jlong FastMath::multiplyExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_multiplyExact_fe4804b67425641b], a0, a1);
      }

      jlong FastMath::multiplyFull(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_multiplyFull_30f7d12d17ddfa28], a0, a1);
      }

      jlong FastMath::multiplyHigh(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_multiplyHigh_fe4804b67425641b], a0, a1);
      }

      jint FastMath::negateExact(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_negateExact_2235cd056f5a882b], a0);
      }

      jlong FastMath::negateExact(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_negateExact_02b241598e254a3f], a0);
      }

      jdouble FastMath::nextAfter(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_nextAfter_86ffecc08a63eff0], a0, a1);
      }

      jfloat FastMath::nextAfter(jfloat a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_nextAfter_407b8c118410863a], a0, a1);
      }

      jdouble FastMath::nextDown(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_nextDown_dcbc7ce2902fa136], a0);
      }

      jfloat FastMath::nextDown(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_nextDown_b0cdbb488a56cf9c], a0);
      }

      jdouble FastMath::nextUp(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_nextUp_dcbc7ce2902fa136], a0);
      }

      jfloat FastMath::nextUp(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_nextUp_b0cdbb488a56cf9c], a0);
      }

      jdouble FastMath::norm(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_norm_60915becce1cbd8b], a0.this$);
      }

      jdouble FastMath::pow(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_pow_86ffecc08a63eff0], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::pow(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_pow_40cfe74535da4622], a0.this$, a1));
      }

      jdouble FastMath::pow(jdouble a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_pow_948617e69b66e15d], a0, a1);
      }

      jdouble FastMath::pow(jdouble a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_pow_50367ad71bdff0f8], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::pow(const ::org::hipparchus::CalculusFieldElement & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_pow_7fc015d41da5fb84], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FastMath::pow(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_pow_6746cc1cd9210d54], a0.this$, a1.this$));
      }

      jdouble FastMath::random()
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_random_dff5885c2c873297]);
      }

      jdouble FastMath::rint(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_rint_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::rint(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rint_a4b1871f4d29e58b], a0.this$));
      }

      jlong FastMath::round(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_round_cebf7dc9be03a93c], a0);
      }

      jint FastMath::round(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_round_a420854bf0746aa6], a0);
      }

      jlong FastMath::round(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_round_f06b0a67d7f85a65], a0.this$);
      }

      jdouble FastMath::scalb(jdouble a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_scalb_948617e69b66e15d], a0, a1);
      }

      jfloat FastMath::scalb(jfloat a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_scalb_8842c007fabd6574], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::scalb(const ::org::hipparchus::CalculusFieldElement & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_scalb_7fc015d41da5fb84], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FastMath::sign(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_sign_a4b1871f4d29e58b], a0.this$));
      }

      jdouble FastMath::signum(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_signum_dcbc7ce2902fa136], a0);
      }

      jfloat FastMath::signum(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_signum_b0cdbb488a56cf9c], a0);
      }

      jdouble FastMath::sin(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sin_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::sin(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_sin_a4b1871f4d29e58b], a0.this$));
      }

      ::org::hipparchus::util::SinCos FastMath::sinCos(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::SinCos(env->callStaticObjectMethod(cls, mids$[mid_sinCos_5b68da498d3c3153], a0));
      }

      ::org::hipparchus::util::FieldSinCos FastMath::sinCos(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::FieldSinCos(env->callStaticObjectMethod(cls, mids$[mid_sinCos_e9c0163cbe21a86f], a0.this$));
      }

      jdouble FastMath::sinh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sinh_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::sinh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_sinh_a4b1871f4d29e58b], a0.this$));
      }

      ::org::hipparchus::util::SinhCosh FastMath::sinhCosh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::SinhCosh(env->callStaticObjectMethod(cls, mids$[mid_sinhCosh_15df630f2a63a755], a0));
      }

      ::org::hipparchus::util::FieldSinhCosh FastMath::sinhCosh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::FieldSinhCosh(env->callStaticObjectMethod(cls, mids$[mid_sinhCosh_7f302e208b09f1bd], a0.this$));
      }

      jdouble FastMath::sqrt(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sqrt_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::sqrt(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_sqrt_a4b1871f4d29e58b], a0.this$));
      }

      jint FastMath::subtractExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_subtractExact_819f91eddf220c5b], a0, a1);
      }

      jlong FastMath::subtractExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_subtractExact_fe4804b67425641b], a0, a1);
      }

      jdouble FastMath::tan(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_tan_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::tan(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_tan_a4b1871f4d29e58b], a0.this$));
      }

      jdouble FastMath::tanh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_tanh_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::tanh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_tanh_a4b1871f4d29e58b], a0.this$));
      }

      jdouble FastMath::toDegrees(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_toDegrees_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::toDegrees(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_toDegrees_a4b1871f4d29e58b], a0.this$));
      }

      jint FastMath::toIntExact(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_toIntExact_d0f2acf0c955e055], a0);
      }

      jdouble FastMath::toRadians(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_toRadians_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::toRadians(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_toRadians_a4b1871f4d29e58b], a0.this$));
      }

      jdouble FastMath::ulp(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ulp_dcbc7ce2902fa136], a0);
      }

      jfloat FastMath::ulp(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_ulp_b0cdbb488a56cf9c], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::ulp(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ulp_a4b1871f4d29e58b], a0.this$));
      }

      jlong FastMath::unsignedMultiplyHigh(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_unsignedMultiplyHigh_fe4804b67425641b], a0, a1);
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
#include "org/hipparchus/util/CombinatoricsUtils$FactorialLog.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/CombinatoricsUtils$FactorialLog.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *CombinatoricsUtils$FactorialLog::class$ = NULL;
      jmethodID *CombinatoricsUtils$FactorialLog::mids$ = NULL;
      bool CombinatoricsUtils$FactorialLog::live$ = false;

      jclass CombinatoricsUtils$FactorialLog::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/CombinatoricsUtils$FactorialLog");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_dc43b77eb3ad10f3] = env->getStaticMethodID(cls, "create", "()Lorg/hipparchus/util/CombinatoricsUtils$FactorialLog;");
          mids$[mid_value_46f85b53d9aedd96] = env->getMethodID(cls, "value", "(I)D");
          mids$[mid_withCache_fd83fd97a5b95624] = env->getMethodID(cls, "withCache", "(I)Lorg/hipparchus/util/CombinatoricsUtils$FactorialLog;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CombinatoricsUtils$FactorialLog CombinatoricsUtils$FactorialLog::create()
      {
        jclass cls = env->getClass(initializeClass);
        return CombinatoricsUtils$FactorialLog(env->callStaticObjectMethod(cls, mids$[mid_create_dc43b77eb3ad10f3]));
      }

      jdouble CombinatoricsUtils$FactorialLog::value(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_46f85b53d9aedd96], a0);
      }

      CombinatoricsUtils$FactorialLog CombinatoricsUtils$FactorialLog::withCache(jint a0) const
      {
        return CombinatoricsUtils$FactorialLog(env->callObjectMethod(this$, mids$[mid_withCache_fd83fd97a5b95624], a0));
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
      static PyObject *t_CombinatoricsUtils$FactorialLog_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils$FactorialLog_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils$FactorialLog_create(PyTypeObject *type);
      static PyObject *t_CombinatoricsUtils$FactorialLog_value(t_CombinatoricsUtils$FactorialLog *self, PyObject *arg);
      static PyObject *t_CombinatoricsUtils$FactorialLog_withCache(t_CombinatoricsUtils$FactorialLog *self, PyObject *arg);

      static PyMethodDef t_CombinatoricsUtils$FactorialLog__methods_[] = {
        DECLARE_METHOD(t_CombinatoricsUtils$FactorialLog, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils$FactorialLog, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils$FactorialLog, create, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils$FactorialLog, value, METH_O),
        DECLARE_METHOD(t_CombinatoricsUtils$FactorialLog, withCache, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CombinatoricsUtils$FactorialLog)[] = {
        { Py_tp_methods, t_CombinatoricsUtils$FactorialLog__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CombinatoricsUtils$FactorialLog)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CombinatoricsUtils$FactorialLog, t_CombinatoricsUtils$FactorialLog, CombinatoricsUtils$FactorialLog);

      void t_CombinatoricsUtils$FactorialLog::install(PyObject *module)
      {
        installType(&PY_TYPE(CombinatoricsUtils$FactorialLog), &PY_TYPE_DEF(CombinatoricsUtils$FactorialLog), module, "CombinatoricsUtils$FactorialLog", 0);
      }

      void t_CombinatoricsUtils$FactorialLog::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils$FactorialLog), "class_", make_descriptor(CombinatoricsUtils$FactorialLog::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils$FactorialLog), "wrapfn_", make_descriptor(t_CombinatoricsUtils$FactorialLog::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils$FactorialLog), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CombinatoricsUtils$FactorialLog_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CombinatoricsUtils$FactorialLog::initializeClass, 1)))
          return NULL;
        return t_CombinatoricsUtils$FactorialLog::wrap_Object(CombinatoricsUtils$FactorialLog(((t_CombinatoricsUtils$FactorialLog *) arg)->object.this$));
      }
      static PyObject *t_CombinatoricsUtils$FactorialLog_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CombinatoricsUtils$FactorialLog::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CombinatoricsUtils$FactorialLog_create(PyTypeObject *type)
      {
        CombinatoricsUtils$FactorialLog result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils$FactorialLog::create());
        return t_CombinatoricsUtils$FactorialLog::wrap_Object(result);
      }

      static PyObject *t_CombinatoricsUtils$FactorialLog_value(t_CombinatoricsUtils$FactorialLog *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils$FactorialLog_withCache(t_CombinatoricsUtils$FactorialLog *self, PyObject *arg)
      {
        jint a0;
        CombinatoricsUtils$FactorialLog result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withCache(a0));
          return t_CombinatoricsUtils$FactorialLog::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withCache", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fitting/HarmonicCurveFitter$ParameterGuesser.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/hipparchus/fitting/WeightedObservedPoint.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *HarmonicCurveFitter$ParameterGuesser::class$ = NULL;
      jmethodID *HarmonicCurveFitter$ParameterGuesser::mids$ = NULL;
      bool HarmonicCurveFitter$ParameterGuesser::live$ = false;

      jclass HarmonicCurveFitter$ParameterGuesser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/HarmonicCurveFitter$ParameterGuesser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f72f53318f80c525] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
          mids$[mid_guess_60c7040667a7dc5c] = env->getMethodID(cls, "guess", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HarmonicCurveFitter$ParameterGuesser::HarmonicCurveFitter$ParameterGuesser(const ::java::util::Collection & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f72f53318f80c525, a0.this$)) {}

      JArray< jdouble > HarmonicCurveFitter$ParameterGuesser::guess() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_guess_60c7040667a7dc5c]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_HarmonicCurveFitter$ParameterGuesser_init_(t_HarmonicCurveFitter$ParameterGuesser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_guess(t_HarmonicCurveFitter$ParameterGuesser *self);

      static PyMethodDef t_HarmonicCurveFitter$ParameterGuesser__methods_[] = {
        DECLARE_METHOD(t_HarmonicCurveFitter$ParameterGuesser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HarmonicCurveFitter$ParameterGuesser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HarmonicCurveFitter$ParameterGuesser, guess, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HarmonicCurveFitter$ParameterGuesser)[] = {
        { Py_tp_methods, t_HarmonicCurveFitter$ParameterGuesser__methods_ },
        { Py_tp_init, (void *) t_HarmonicCurveFitter$ParameterGuesser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HarmonicCurveFitter$ParameterGuesser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(HarmonicCurveFitter$ParameterGuesser, t_HarmonicCurveFitter$ParameterGuesser, HarmonicCurveFitter$ParameterGuesser);

      void t_HarmonicCurveFitter$ParameterGuesser::install(PyObject *module)
      {
        installType(&PY_TYPE(HarmonicCurveFitter$ParameterGuesser), &PY_TYPE_DEF(HarmonicCurveFitter$ParameterGuesser), module, "HarmonicCurveFitter$ParameterGuesser", 0);
      }

      void t_HarmonicCurveFitter$ParameterGuesser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter$ParameterGuesser), "class_", make_descriptor(HarmonicCurveFitter$ParameterGuesser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter$ParameterGuesser), "wrapfn_", make_descriptor(t_HarmonicCurveFitter$ParameterGuesser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter$ParameterGuesser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HarmonicCurveFitter$ParameterGuesser::initializeClass, 1)))
          return NULL;
        return t_HarmonicCurveFitter$ParameterGuesser::wrap_Object(HarmonicCurveFitter$ParameterGuesser(((t_HarmonicCurveFitter$ParameterGuesser *) arg)->object.this$));
      }
      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HarmonicCurveFitter$ParameterGuesser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_HarmonicCurveFitter$ParameterGuesser_init_(t_HarmonicCurveFitter$ParameterGuesser *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::Collection a0((jobject) NULL);
        PyTypeObject **p0;
        HarmonicCurveFitter$ParameterGuesser object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
        {
          INT_CALL(object = HarmonicCurveFitter$ParameterGuesser(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_guess(t_HarmonicCurveFitter$ParameterGuesser *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.guess());
        return result.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/parsing/PythonAbstractConstituentParser.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *PythonAbstractConstituentParser::class$ = NULL;
            jmethodID *PythonAbstractConstituentParser::mids$ = NULL;
            bool PythonAbstractConstituentParser::live$ = false;

            jclass PythonAbstractConstituentParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/PythonAbstractConstituentParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_3204eef28de879bb] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;");
                mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_finalizeData_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getHeader_0e1b4a5061fb71d6] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/section/Header;");
                mids$[mid_inData_b108b35ef48e27bd] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_b108b35ef48e27bd] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_prepareData_b108b35ef48e27bd] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_b108b35ef48e27bd] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "prepareMetadata", "()Z");
                mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_reset_e250621f009e45db] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void PythonAbstractConstituentParser::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
            }

            jlong PythonAbstractConstituentParser::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
            }

            void PythonAbstractConstituentParser::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
          namespace parsing {
            static PyObject *t_PythonAbstractConstituentParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractConstituentParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractConstituentParser_of_(t_PythonAbstractConstituentParser *self, PyObject *args);
            static PyObject *t_PythonAbstractConstituentParser_finalize(t_PythonAbstractConstituentParser *self);
            static PyObject *t_PythonAbstractConstituentParser_pythonExtension(t_PythonAbstractConstituentParser *self, PyObject *args);
            static jobject JNICALL t_PythonAbstractConstituentParser_build0(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeData1(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeHeader2(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonAbstractConstituentParser_getHeader4(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_inData5(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_inHeader6(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_inMetadata7(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareData8(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareHeader9(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareMetadata10(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractConstituentParser_pythonDecRef11(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractConstituentParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonAbstractConstituentParser_get__self(t_PythonAbstractConstituentParser *self, void *data);
            static PyObject *t_PythonAbstractConstituentParser_get__parameters_(t_PythonAbstractConstituentParser *self, void *data);
            static PyGetSetDef t_PythonAbstractConstituentParser__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractConstituentParser, self),
              DECLARE_GET_FIELD(t_PythonAbstractConstituentParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractConstituentParser__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractConstituentParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractConstituentParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractConstituentParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonAbstractConstituentParser, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractConstituentParser, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractConstituentParser)[] = {
              { Py_tp_methods, t_PythonAbstractConstituentParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_PythonAbstractConstituentParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractConstituentParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser),
              NULL
            };

            DEFINE_TYPE(PythonAbstractConstituentParser, t_PythonAbstractConstituentParser, PythonAbstractConstituentParser);
            PyObject *t_PythonAbstractConstituentParser::wrap_Object(const PythonAbstractConstituentParser& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonAbstractConstituentParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractConstituentParser *self = (t_PythonAbstractConstituentParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_PythonAbstractConstituentParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonAbstractConstituentParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractConstituentParser *self = (t_PythonAbstractConstituentParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_PythonAbstractConstituentParser::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractConstituentParser), &PY_TYPE_DEF(PythonAbstractConstituentParser), module, "PythonAbstractConstituentParser", 1);
            }

            void t_PythonAbstractConstituentParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstituentParser), "class_", make_descriptor(PythonAbstractConstituentParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstituentParser), "wrapfn_", make_descriptor(t_PythonAbstractConstituentParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstituentParser), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractConstituentParser::initializeClass);
              JNINativeMethod methods[] = {
                { "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;", (void *) t_PythonAbstractConstituentParser_build0 },
                { "finalizeData", "()Z", (void *) t_PythonAbstractConstituentParser_finalizeData1 },
                { "finalizeHeader", "()Z", (void *) t_PythonAbstractConstituentParser_finalizeHeader2 },
                { "finalizeMetadata", "()Z", (void *) t_PythonAbstractConstituentParser_finalizeMetadata3 },
                { "getHeader", "()Lorg/orekit/files/ccsds/section/Header;", (void *) t_PythonAbstractConstituentParser_getHeader4 },
                { "inData", "()Z", (void *) t_PythonAbstractConstituentParser_inData5 },
                { "inHeader", "()Z", (void *) t_PythonAbstractConstituentParser_inHeader6 },
                { "inMetadata", "()Z", (void *) t_PythonAbstractConstituentParser_inMetadata7 },
                { "prepareData", "()Z", (void *) t_PythonAbstractConstituentParser_prepareData8 },
                { "prepareHeader", "()Z", (void *) t_PythonAbstractConstituentParser_prepareHeader9 },
                { "prepareMetadata", "()Z", (void *) t_PythonAbstractConstituentParser_prepareMetadata10 },
                { "pythonDecRef", "()V", (void *) t_PythonAbstractConstituentParser_pythonDecRef11 },
                { "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V", (void *) t_PythonAbstractConstituentParser_reset12 },
              };
              env->registerNatives(cls, methods, 13);
            }

            static PyObject *t_PythonAbstractConstituentParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractConstituentParser::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractConstituentParser::wrap_Object(PythonAbstractConstituentParser(((t_PythonAbstractConstituentParser *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractConstituentParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractConstituentParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonAbstractConstituentParser_of_(t_PythonAbstractConstituentParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_PythonAbstractConstituentParser_finalize(t_PythonAbstractConstituentParser *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractConstituentParser_pythonExtension(t_PythonAbstractConstituentParser *self, PyObject *args)
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

            static jobject JNICALL t_PythonAbstractConstituentParser_build0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::ndm::NdmConstituent value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "build", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::ndm::NdmConstituent::initializeClass, &value))
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

            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeData1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeHeader2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jobject JNICALL t_PythonAbstractConstituentParser_getHeader4(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::section::Header value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::section::Header::initializeClass, &value))
              {
                throwTypeError("getHeader", result);
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

            static jboolean JNICALL t_PythonAbstractConstituentParser_inData5(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_inHeader6(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_inMetadata7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareData8(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareHeader9(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareMetadata10(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static void JNICALL t_PythonAbstractConstituentParser_pythonDecRef11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonAbstractConstituentParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(::org::orekit::files::ccsds::utils::FileFormat(a0));
              PyObject *result = PyObject_CallMethod(obj, "reset", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonAbstractConstituentParser_get__self(t_PythonAbstractConstituentParser *self, void *data)
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
            static PyObject *t_PythonAbstractConstituentParser_get__parameters_(t_PythonAbstractConstituentParser *self, void *data)
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
#include "org/hipparchus/ode/ParametersController.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ParametersController::class$ = NULL;
      jmethodID *ParametersController::mids$ = NULL;
      bool ParametersController::live$ = false;

      jclass ParametersController::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ParametersController");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getParameter_b36dde1444e08956] = env->getMethodID(cls, "getParameter", "(Ljava/lang/String;)D");
          mids$[mid_setParameter_1b3f5cad10162d50] = env->getMethodID(cls, "setParameter", "(Ljava/lang/String;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble ParametersController::getParameter(const ::java::lang::String & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getParameter_b36dde1444e08956], a0.this$);
      }

      void ParametersController::setParameter(const ::java::lang::String & a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setParameter_1b3f5cad10162d50], a0.this$, a1);
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
      static PyObject *t_ParametersController_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParametersController_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParametersController_getParameter(t_ParametersController *self, PyObject *arg);
      static PyObject *t_ParametersController_setParameter(t_ParametersController *self, PyObject *args);

      static PyMethodDef t_ParametersController__methods_[] = {
        DECLARE_METHOD(t_ParametersController, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParametersController, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParametersController, getParameter, METH_O),
        DECLARE_METHOD(t_ParametersController, setParameter, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParametersController)[] = {
        { Py_tp_methods, t_ParametersController__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParametersController)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::Parameterizable),
        NULL
      };

      DEFINE_TYPE(ParametersController, t_ParametersController, ParametersController);

      void t_ParametersController::install(PyObject *module)
      {
        installType(&PY_TYPE(ParametersController), &PY_TYPE_DEF(ParametersController), module, "ParametersController", 0);
      }

      void t_ParametersController::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParametersController), "class_", make_descriptor(ParametersController::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParametersController), "wrapfn_", make_descriptor(t_ParametersController::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParametersController), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParametersController_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParametersController::initializeClass, 1)))
          return NULL;
        return t_ParametersController::wrap_Object(ParametersController(((t_ParametersController *) arg)->object.this$));
      }
      static PyObject *t_ParametersController_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParametersController::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParametersController_getParameter(t_ParametersController *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getParameter(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getParameter", arg);
        return NULL;
      }

      static PyObject *t_ParametersController_setParameter(t_ParametersController *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        jdouble a1;

        if (!parseArgs(args, "sD", &a0, &a1))
        {
          OBJ_CALL(self->object.setParameter(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setParameter", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/PVCoordinates.h"
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
          mids$[mid_init$_dce00f1bb2a9b447] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/TimeStampedPVCoordinates;)V");
          mids$[mid_init$_fdb43bfa6d43366f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_468ba0bc6c5bf070] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_ffeb9db3a56160f3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_714680d7f2f36231] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_dad60168652e571f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_94e86b986601fe86] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_9ff58311d7400e04] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_ce537fff2eb7dd83] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_5b99a056028b24a3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_a77b68499c2a150f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_988f6932842e45aa] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_fc453dab701d245e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_22c42e194d2f9e41] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_5dbf64d84deeb0bb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_46f6fdcb314b59b0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_8b9453b84e578c27] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_b21aea609d95b4cb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_85f69d1090230023] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_4d38f0699df00596] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_8c6df58dbf1792d4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_4d3d873e2f48d623] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_80c668a1a390999a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_d6e3c4b90386d014] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_1e4eb190a274ece1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_413cfd58be4a8f36] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_e9cecda3f72174e4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_2f69f97ab801d697] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_54db1fbb29425a19] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_f43979ec1613a752] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_d2d95c9364c6998f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_8904b988a7471757] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_getDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_shiftedBy_357c4c67143fefb2] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_shiftedBy_653eb1a4934a2f6b] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toString_e3ec59f6a2ed4d7c] = env->getMethodID(cls, "toString", "(Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toTimeStampedPVCoordinates_c204436deca11d94] = env->getMethodID(cls, "toTimeStampedPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::TimeStampedPVCoordinates & a1) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_dce00f1bb2a9b447, a0.this$, a1.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_fdb43bfa6d43366f, a0.this$, a1.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_468ba0bc6c5bf070, a0.this$, a1.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_ffeb9db3a56160f3, a0.this$, a1.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_714680d7f2f36231, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_dad60168652e571f, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_94e86b986601fe86, a0.this$, a1, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_9ff58311d7400e04, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_ce537fff2eb7dd83, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_5b99a056028b24a3, a0.this$, a1, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_a77b68499c2a150f, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_988f6932842e45aa, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_fc453dab701d245e, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_22c42e194d2f9e41, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_5dbf64d84deeb0bb, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_46f6fdcb314b59b0, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_8b9453b84e578c27, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_b21aea609d95b4cb, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_85f69d1090230023, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_4d38f0699df00596, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5, const ::org::orekit::utils::FieldPVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_8c6df58dbf1792d4, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5, const ::org::orekit::utils::FieldPVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_4d3d873e2f48d623, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::FieldPVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_80c668a1a390999a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::FieldPVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_d6e3c4b90386d014, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::PVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_1e4eb190a274ece1, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::PVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_413cfd58be4a8f36, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5, const ::org::orekit::utils::FieldPVCoordinates & a6, jdouble a7, const ::org::orekit::utils::FieldPVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_e9cecda3f72174e4, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$, a7, a8.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::FieldPVCoordinates & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::orekit::utils::FieldPVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_2f69f97ab801d697, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::FieldPVCoordinates & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::orekit::utils::FieldPVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_54db1fbb29425a19, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::PVCoordinates & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::orekit::utils::PVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_f43979ec1613a752, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5, const ::org::orekit::utils::FieldPVCoordinates & a6, jdouble a7, const ::org::orekit::utils::FieldPVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_d2d95c9364c6998f, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$, a7, a8.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::PVCoordinates & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::orekit::utils::PVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_8904b988a7471757, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

      ::org::orekit::time::FieldAbsoluteDate TimeStampedFieldPVCoordinates::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_51da00d5b8a3b5df]));
      }

      TimeStampedFieldPVCoordinates TimeStampedFieldPVCoordinates::shiftedBy(jdouble a0) const
      {
        return TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_357c4c67143fefb2], a0));
      }

      TimeStampedFieldPVCoordinates TimeStampedFieldPVCoordinates::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_653eb1a4934a2f6b], a0.this$));
      }

      ::java::lang::String TimeStampedFieldPVCoordinates::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }

      ::java::lang::String TimeStampedFieldPVCoordinates::toString(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_e3ec59f6a2ed4d7c], a0.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates TimeStampedFieldPVCoordinates::toTimeStampedPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_toTimeStampedPVCoordinates_c204436deca11d94]));
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
#include "org/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *BeidouLegacyNavigationMessage::class$ = NULL;
            jmethodID *BeidouLegacyNavigationMessage::mids$ = NULL;
            bool BeidouLegacyNavigationMessage::live$ = false;
            ::java::lang::String *BeidouLegacyNavigationMessage::D1 = NULL;
            ::java::lang::String *BeidouLegacyNavigationMessage::D2 = NULL;

            jclass BeidouLegacyNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getAODC_570ce0828f81a2c1] = env->getMethodID(cls, "getAODC", "()I");
                mids$[mid_getAODE_570ce0828f81a2c1] = env->getMethodID(cls, "getAODE", "()I");
                mids$[mid_getSvAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getSvAccuracy", "()D");
                mids$[mid_getTGD1_dff5885c2c873297] = env->getMethodID(cls, "getTGD1", "()D");
                mids$[mid_getTGD2_dff5885c2c873297] = env->getMethodID(cls, "getTGD2", "()D");
                mids$[mid_setAODC_17db3a65980d3441] = env->getMethodID(cls, "setAODC", "(D)V");
                mids$[mid_setAODE_17db3a65980d3441] = env->getMethodID(cls, "setAODE", "(D)V");
                mids$[mid_setSvAccuracy_17db3a65980d3441] = env->getMethodID(cls, "setSvAccuracy", "(D)V");
                mids$[mid_setTGD1_17db3a65980d3441] = env->getMethodID(cls, "setTGD1", "(D)V");
                mids$[mid_setTGD2_17db3a65980d3441] = env->getMethodID(cls, "setTGD2", "(D)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                D1 = new ::java::lang::String(env->getStaticObjectField(cls, "D1", "Ljava/lang/String;"));
                D2 = new ::java::lang::String(env->getStaticObjectField(cls, "D2", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            BeidouLegacyNavigationMessage::BeidouLegacyNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            jint BeidouLegacyNavigationMessage::getAODC() const
            {
              return env->callIntMethod(this$, mids$[mid_getAODC_570ce0828f81a2c1]);
            }

            jint BeidouLegacyNavigationMessage::getAODE() const
            {
              return env->callIntMethod(this$, mids$[mid_getAODE_570ce0828f81a2c1]);
            }

            jdouble BeidouLegacyNavigationMessage::getSvAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSvAccuracy_dff5885c2c873297]);
            }

            jdouble BeidouLegacyNavigationMessage::getTGD1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD1_dff5885c2c873297]);
            }

            jdouble BeidouLegacyNavigationMessage::getTGD2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD2_dff5885c2c873297]);
            }

            void BeidouLegacyNavigationMessage::setAODC(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAODC_17db3a65980d3441], a0);
            }

            void BeidouLegacyNavigationMessage::setAODE(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAODE_17db3a65980d3441], a0);
            }

            void BeidouLegacyNavigationMessage::setSvAccuracy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvAccuracy_17db3a65980d3441], a0);
            }

            void BeidouLegacyNavigationMessage::setTGD1(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTGD1_17db3a65980d3441], a0);
            }

            void BeidouLegacyNavigationMessage::setTGD2(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTGD2_17db3a65980d3441], a0);
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
            static PyObject *t_BeidouLegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BeidouLegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_BeidouLegacyNavigationMessage_init_(t_BeidouLegacyNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_BeidouLegacyNavigationMessage_getAODC(t_BeidouLegacyNavigationMessage *self);
            static PyObject *t_BeidouLegacyNavigationMessage_getAODE(t_BeidouLegacyNavigationMessage *self);
            static PyObject *t_BeidouLegacyNavigationMessage_getSvAccuracy(t_BeidouLegacyNavigationMessage *self);
            static PyObject *t_BeidouLegacyNavigationMessage_getTGD1(t_BeidouLegacyNavigationMessage *self);
            static PyObject *t_BeidouLegacyNavigationMessage_getTGD2(t_BeidouLegacyNavigationMessage *self);
            static PyObject *t_BeidouLegacyNavigationMessage_setAODC(t_BeidouLegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouLegacyNavigationMessage_setAODE(t_BeidouLegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouLegacyNavigationMessage_setSvAccuracy(t_BeidouLegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouLegacyNavigationMessage_setTGD1(t_BeidouLegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouLegacyNavigationMessage_setTGD2(t_BeidouLegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouLegacyNavigationMessage_get__aODC(t_BeidouLegacyNavigationMessage *self, void *data);
            static int t_BeidouLegacyNavigationMessage_set__aODC(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouLegacyNavigationMessage_get__aODE(t_BeidouLegacyNavigationMessage *self, void *data);
            static int t_BeidouLegacyNavigationMessage_set__aODE(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouLegacyNavigationMessage_get__svAccuracy(t_BeidouLegacyNavigationMessage *self, void *data);
            static int t_BeidouLegacyNavigationMessage_set__svAccuracy(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouLegacyNavigationMessage_get__tGD1(t_BeidouLegacyNavigationMessage *self, void *data);
            static int t_BeidouLegacyNavigationMessage_set__tGD1(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouLegacyNavigationMessage_get__tGD2(t_BeidouLegacyNavigationMessage *self, void *data);
            static int t_BeidouLegacyNavigationMessage_set__tGD2(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_BeidouLegacyNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_BeidouLegacyNavigationMessage, aODC),
              DECLARE_GETSET_FIELD(t_BeidouLegacyNavigationMessage, aODE),
              DECLARE_GETSET_FIELD(t_BeidouLegacyNavigationMessage, svAccuracy),
              DECLARE_GETSET_FIELD(t_BeidouLegacyNavigationMessage, tGD1),
              DECLARE_GETSET_FIELD(t_BeidouLegacyNavigationMessage, tGD2),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_BeidouLegacyNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, getAODC, METH_NOARGS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, getAODE, METH_NOARGS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, getSvAccuracy, METH_NOARGS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, getTGD1, METH_NOARGS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, getTGD2, METH_NOARGS),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, setAODC, METH_O),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, setAODE, METH_O),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, setSvAccuracy, METH_O),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, setTGD1, METH_O),
              DECLARE_METHOD(t_BeidouLegacyNavigationMessage, setTGD2, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(BeidouLegacyNavigationMessage)[] = {
              { Py_tp_methods, t_BeidouLegacyNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_BeidouLegacyNavigationMessage_init_ },
              { Py_tp_getset, t_BeidouLegacyNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(BeidouLegacyNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage),
              NULL
            };

            DEFINE_TYPE(BeidouLegacyNavigationMessage, t_BeidouLegacyNavigationMessage, BeidouLegacyNavigationMessage);

            void t_BeidouLegacyNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(BeidouLegacyNavigationMessage), &PY_TYPE_DEF(BeidouLegacyNavigationMessage), module, "BeidouLegacyNavigationMessage", 0);
            }

            void t_BeidouLegacyNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouLegacyNavigationMessage), "class_", make_descriptor(BeidouLegacyNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouLegacyNavigationMessage), "wrapfn_", make_descriptor(t_BeidouLegacyNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouLegacyNavigationMessage), "boxfn_", make_descriptor(boxObject));
              env->getClass(BeidouLegacyNavigationMessage::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouLegacyNavigationMessage), "D1", make_descriptor(j2p(*BeidouLegacyNavigationMessage::D1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouLegacyNavigationMessage), "D2", make_descriptor(j2p(*BeidouLegacyNavigationMessage::D2)));
            }

            static PyObject *t_BeidouLegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, BeidouLegacyNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_BeidouLegacyNavigationMessage::wrap_Object(BeidouLegacyNavigationMessage(((t_BeidouLegacyNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_BeidouLegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, BeidouLegacyNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_BeidouLegacyNavigationMessage_init_(t_BeidouLegacyNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              BeidouLegacyNavigationMessage object((jobject) NULL);

              INT_CALL(object = BeidouLegacyNavigationMessage());
              self->object = object;

              return 0;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_getAODC(t_BeidouLegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getAODC());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouLegacyNavigationMessage_getAODE(t_BeidouLegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getAODE());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouLegacyNavigationMessage_getSvAccuracy(t_BeidouLegacyNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSvAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouLegacyNavigationMessage_getTGD1(t_BeidouLegacyNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouLegacyNavigationMessage_getTGD2(t_BeidouLegacyNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouLegacyNavigationMessage_setAODC(t_BeidouLegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAODC(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAODC", arg);
              return NULL;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_setAODE(t_BeidouLegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAODE(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAODE", arg);
              return NULL;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_setSvAccuracy(t_BeidouLegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSvAccuracy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSvAccuracy", arg);
              return NULL;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_setTGD1(t_BeidouLegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTGD1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTGD1", arg);
              return NULL;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_setTGD2(t_BeidouLegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTGD2(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTGD2", arg);
              return NULL;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_get__aODC(t_BeidouLegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getAODC());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouLegacyNavigationMessage_set__aODC(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAODC(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "aODC", arg);
              return -1;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_get__aODE(t_BeidouLegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getAODE());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouLegacyNavigationMessage_set__aODE(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAODE(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "aODE", arg);
              return -1;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_get__svAccuracy(t_BeidouLegacyNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSvAccuracy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouLegacyNavigationMessage_set__svAccuracy(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSvAccuracy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "svAccuracy", arg);
              return -1;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_get__tGD1(t_BeidouLegacyNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD1());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouLegacyNavigationMessage_set__tGD1(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTGD1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tGD1", arg);
              return -1;
            }

            static PyObject *t_BeidouLegacyNavigationMessage_get__tGD2(t_BeidouLegacyNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD2());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouLegacyNavigationMessage_set__tGD2(t_BeidouLegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTGD2(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tGD2", arg);
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
#include "org/hipparchus/geometry/spherical/oned/LimitAngle.h"
#include "org/hipparchus/geometry/spherical/oned/S1Point.h"
#include "org/hipparchus/geometry/spherical/oned/LimitAngle.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/oned/SubLimitAngle.h"
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
              mids$[mid_init$_82536b2cb42ed7f9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/spherical/oned/S1Point;ZD)V");
              mids$[mid_copySelf_01001ad942f10976] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/spherical/oned/LimitAngle;");
              mids$[mid_emptyHyperplane_21c05dc3dd28ffae] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/spherical/oned/SubLimitAngle;");
              mids$[mid_getLocation_ad9f612e40949328] = env->getMethodID(cls, "getLocation", "()Lorg/hipparchus/geometry/spherical/oned/S1Point;");
              mids$[mid_getOffset_07bb97c2794cf6b1] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_getReverse_01001ad942f10976] = env->getMethodID(cls, "getReverse", "()Lorg/hipparchus/geometry/spherical/oned/LimitAngle;");
              mids$[mid_getTolerance_dff5885c2c873297] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_isDirect_b108b35ef48e27bd] = env->getMethodID(cls, "isDirect", "()Z");
              mids$[mid_project_c48805c2dda937c6] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
              mids$[mid_sameOrientationAs_5bc340c02d9ac484] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
              mids$[mid_wholeHyperplane_21c05dc3dd28ffae] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/spherical/oned/SubLimitAngle;");
              mids$[mid_wholeSpace_9a4d6a36c117a959] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/spherical/oned/ArcsSet;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LimitAngle::LimitAngle(const ::org::hipparchus::geometry::spherical::oned::S1Point & a0, jboolean a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_82536b2cb42ed7f9, a0.this$, a1, a2)) {}

          LimitAngle LimitAngle::copySelf() const
          {
            return LimitAngle(env->callObjectMethod(this$, mids$[mid_copySelf_01001ad942f10976]));
          }

          ::org::hipparchus::geometry::spherical::oned::SubLimitAngle LimitAngle::emptyHyperplane() const
          {
            return ::org::hipparchus::geometry::spherical::oned::SubLimitAngle(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_21c05dc3dd28ffae]));
          }

          ::org::hipparchus::geometry::spherical::oned::S1Point LimitAngle::getLocation() const
          {
            return ::org::hipparchus::geometry::spherical::oned::S1Point(env->callObjectMethod(this$, mids$[mid_getLocation_ad9f612e40949328]));
          }

          jdouble LimitAngle::getOffset(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_07bb97c2794cf6b1], a0.this$);
          }

          LimitAngle LimitAngle::getReverse() const
          {
            return LimitAngle(env->callObjectMethod(this$, mids$[mid_getReverse_01001ad942f10976]));
          }

          jdouble LimitAngle::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_dff5885c2c873297]);
          }

          jboolean LimitAngle::isDirect() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isDirect_b108b35ef48e27bd]);
          }

          ::org::hipparchus::geometry::Point LimitAngle::project(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_c48805c2dda937c6], a0.this$));
          }

          jboolean LimitAngle::sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_5bc340c02d9ac484], a0.this$);
          }

          ::org::hipparchus::geometry::spherical::oned::SubLimitAngle LimitAngle::wholeHyperplane() const
          {
            return ::org::hipparchus::geometry::spherical::oned::SubLimitAngle(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_21c05dc3dd28ffae]));
          }

          ::org::hipparchus::geometry::spherical::oned::ArcsSet LimitAngle::wholeSpace() const
          {
            return ::org::hipparchus::geometry::spherical::oned::ArcsSet(env->callObjectMethod(this$, mids$[mid_wholeSpace_9a4d6a36c117a959]));
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
#include "org/orekit/estimation/measurements/gnss/NarrowLaneCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *NarrowLaneCombination::class$ = NULL;
          jmethodID *NarrowLaneCombination::mids$ = NULL;
          bool NarrowLaneCombination::live$ = false;

          jclass NarrowLaneCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/NarrowLaneCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_e0f2baaf2a2ab093] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedFrequency_6baf140b93832af8] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");

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
          static PyObject *t_NarrowLaneCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NarrowLaneCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_NarrowLaneCombination__methods_[] = {
            DECLARE_METHOD(t_NarrowLaneCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NarrowLaneCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NarrowLaneCombination)[] = {
            { Py_tp_methods, t_NarrowLaneCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NarrowLaneCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(NarrowLaneCombination, t_NarrowLaneCombination, NarrowLaneCombination);

          void t_NarrowLaneCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(NarrowLaneCombination), &PY_TYPE_DEF(NarrowLaneCombination), module, "NarrowLaneCombination", 0);
          }

          void t_NarrowLaneCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NarrowLaneCombination), "class_", make_descriptor(NarrowLaneCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NarrowLaneCombination), "wrapfn_", make_descriptor(t_NarrowLaneCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NarrowLaneCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NarrowLaneCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NarrowLaneCombination::initializeClass, 1)))
              return NULL;
            return t_NarrowLaneCombination::wrap_Object(NarrowLaneCombination(((t_NarrowLaneCombination *) arg)->object.this$));
          }
          static PyObject *t_NarrowLaneCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NarrowLaneCombination::initializeClass, 0))
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
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/TCBScale.h"
#include "org/orekit/time/GMSTScale.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/time/GalileoScale.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/TTScale.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/IRNSSScale.h"
#include "java/lang/Class.h"
#include "org/orekit/time/BDTScale.h"
#include "java/util/Collection.h"
#include "org/orekit/time/OffsetModel.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/time/TCGScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeScales::class$ = NULL;
      jmethodID *TimeScales::mids$ = NULL;
      bool TimeScales::live$ = false;

      jclass TimeScales::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeScales");

          mids$ = new jmethodID[max_mid];
          mids$[mid_createBesselianEpoch_149a9211a037d799] = env->getMethodID(cls, "createBesselianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createJulianEpoch_149a9211a037d799] = env->getMethodID(cls, "createJulianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getBDT_fc0e10255fdb9359] = env->getMethodID(cls, "getBDT", "()Lorg/orekit/time/BDTScale;");
          mids$[mid_getBeidouEpoch_85703d13e302437e] = env->getMethodID(cls, "getBeidouEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getCcsdsEpoch_85703d13e302437e] = env->getMethodID(cls, "getCcsdsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFiftiesEpoch_85703d13e302437e] = env->getMethodID(cls, "getFiftiesEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFutureInfinity_85703d13e302437e] = env->getMethodID(cls, "getFutureInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGLONASS_2b4079449103a541] = env->getMethodID(cls, "getGLONASS", "()Lorg/orekit/time/GLONASSScale;");
          mids$[mid_getGMST_17da19434c6eaf77] = env->getMethodID(cls, "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;");
          mids$[mid_getGPS_9e1c13089038a5fa] = env->getMethodID(cls, "getGPS", "()Lorg/orekit/time/GPSScale;");
          mids$[mid_getGST_0569916ae20da9e6] = env->getMethodID(cls, "getGST", "()Lorg/orekit/time/GalileoScale;");
          mids$[mid_getGalileoEpoch_85703d13e302437e] = env->getMethodID(cls, "getGalileoEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGlonassEpoch_85703d13e302437e] = env->getMethodID(cls, "getGlonassEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGpsEpoch_85703d13e302437e] = env->getMethodID(cls, "getGpsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getIRNSS_acc0c9657c1b3fab] = env->getMethodID(cls, "getIRNSS", "()Lorg/orekit/time/IRNSSScale;");
          mids$[mid_getIrnssEpoch_85703d13e302437e] = env->getMethodID(cls, "getIrnssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJ2000Epoch_85703d13e302437e] = env->getMethodID(cls, "getJ2000Epoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJavaEpoch_85703d13e302437e] = env->getMethodID(cls, "getJavaEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJulianEpoch_85703d13e302437e] = env->getMethodID(cls, "getJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getModifiedJulianEpoch_85703d13e302437e] = env->getMethodID(cls, "getModifiedJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getPastInfinity_85703d13e302437e] = env->getMethodID(cls, "getPastInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getQZSS_b61358961d42527b] = env->getMethodID(cls, "getQZSS", "()Lorg/orekit/time/QZSSScale;");
          mids$[mid_getQzssEpoch_85703d13e302437e] = env->getMethodID(cls, "getQzssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getTAI_542013db907f5b2d] = env->getMethodID(cls, "getTAI", "()Lorg/orekit/time/TAIScale;");
          mids$[mid_getTCB_a36a736c24a84bc8] = env->getMethodID(cls, "getTCB", "()Lorg/orekit/time/TCBScale;");
          mids$[mid_getTCG_bc03267fa6cc0068] = env->getMethodID(cls, "getTCG", "()Lorg/orekit/time/TCGScale;");
          mids$[mid_getTDB_01a9b50b4c9899e0] = env->getMethodID(cls, "getTDB", "()Lorg/orekit/time/TDBScale;");
          mids$[mid_getTT_1cee2d27f65b3e44] = env->getMethodID(cls, "getTT", "()Lorg/orekit/time/TTScale;");
          mids$[mid_getUT1_03564ba2f50e6e3b] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUTC_4611f4f4ac7b3711] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/UTCScale;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::AbsoluteDate TimeScales::createBesselianEpoch(jdouble a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_createBesselianEpoch_149a9211a037d799], a0));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::createJulianEpoch(jdouble a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_createJulianEpoch_149a9211a037d799], a0));
      }

      ::org::orekit::time::BDTScale TimeScales::getBDT() const
      {
        return ::org::orekit::time::BDTScale(env->callObjectMethod(this$, mids$[mid_getBDT_fc0e10255fdb9359]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getBeidouEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getBeidouEpoch_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getCcsdsEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCcsdsEpoch_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getFiftiesEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFiftiesEpoch_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getFutureInfinity() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFutureInfinity_85703d13e302437e]));
      }

      ::org::orekit::time::GLONASSScale TimeScales::getGLONASS() const
      {
        return ::org::orekit::time::GLONASSScale(env->callObjectMethod(this$, mids$[mid_getGLONASS_2b4079449103a541]));
      }

      ::org::orekit::time::GMSTScale TimeScales::getGMST(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::GMSTScale(env->callObjectMethod(this$, mids$[mid_getGMST_17da19434c6eaf77], a0.this$, a1));
      }

      ::org::orekit::time::GPSScale TimeScales::getGPS() const
      {
        return ::org::orekit::time::GPSScale(env->callObjectMethod(this$, mids$[mid_getGPS_9e1c13089038a5fa]));
      }

      ::org::orekit::time::GalileoScale TimeScales::getGST() const
      {
        return ::org::orekit::time::GalileoScale(env->callObjectMethod(this$, mids$[mid_getGST_0569916ae20da9e6]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getGalileoEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGalileoEpoch_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getGlonassEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGlonassEpoch_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getGpsEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGpsEpoch_85703d13e302437e]));
      }

      ::org::orekit::time::IRNSSScale TimeScales::getIRNSS() const
      {
        return ::org::orekit::time::IRNSSScale(env->callObjectMethod(this$, mids$[mid_getIRNSS_acc0c9657c1b3fab]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getIrnssEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getIrnssEpoch_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getJ2000Epoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJ2000Epoch_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getJavaEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJavaEpoch_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getJulianEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJulianEpoch_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getModifiedJulianEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getModifiedJulianEpoch_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getPastInfinity() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getPastInfinity_85703d13e302437e]));
      }

      ::org::orekit::time::QZSSScale TimeScales::getQZSS() const
      {
        return ::org::orekit::time::QZSSScale(env->callObjectMethod(this$, mids$[mid_getQZSS_b61358961d42527b]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getQzssEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getQzssEpoch_85703d13e302437e]));
      }

      ::org::orekit::time::TAIScale TimeScales::getTAI() const
      {
        return ::org::orekit::time::TAIScale(env->callObjectMethod(this$, mids$[mid_getTAI_542013db907f5b2d]));
      }

      ::org::orekit::time::TCBScale TimeScales::getTCB() const
      {
        return ::org::orekit::time::TCBScale(env->callObjectMethod(this$, mids$[mid_getTCB_a36a736c24a84bc8]));
      }

      ::org::orekit::time::TCGScale TimeScales::getTCG() const
      {
        return ::org::orekit::time::TCGScale(env->callObjectMethod(this$, mids$[mid_getTCG_bc03267fa6cc0068]));
      }

      ::org::orekit::time::TDBScale TimeScales::getTDB() const
      {
        return ::org::orekit::time::TDBScale(env->callObjectMethod(this$, mids$[mid_getTDB_01a9b50b4c9899e0]));
      }

      ::org::orekit::time::TTScale TimeScales::getTT() const
      {
        return ::org::orekit::time::TTScale(env->callObjectMethod(this$, mids$[mid_getTT_1cee2d27f65b3e44]));
      }

      ::org::orekit::time::UT1Scale TimeScales::getUT1(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getUT1_03564ba2f50e6e3b], a0.this$, a1));
      }

      ::org::orekit::time::UTCScale TimeScales::getUTC() const
      {
        return ::org::orekit::time::UTCScale(env->callObjectMethod(this$, mids$[mid_getUTC_4611f4f4ac7b3711]));
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
      static PyObject *t_TimeScales_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScales_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScales_createBesselianEpoch(t_TimeScales *self, PyObject *arg);
      static PyObject *t_TimeScales_createJulianEpoch(t_TimeScales *self, PyObject *arg);
      static PyObject *t_TimeScales_getBDT(t_TimeScales *self);
      static PyObject *t_TimeScales_getBeidouEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getCcsdsEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getFiftiesEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getFutureInfinity(t_TimeScales *self);
      static PyObject *t_TimeScales_getGLONASS(t_TimeScales *self);
      static PyObject *t_TimeScales_getGMST(t_TimeScales *self, PyObject *args);
      static PyObject *t_TimeScales_getGPS(t_TimeScales *self);
      static PyObject *t_TimeScales_getGST(t_TimeScales *self);
      static PyObject *t_TimeScales_getGalileoEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getGlonassEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getGpsEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getIRNSS(t_TimeScales *self);
      static PyObject *t_TimeScales_getIrnssEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getJ2000Epoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getJavaEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getJulianEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getModifiedJulianEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getPastInfinity(t_TimeScales *self);
      static PyObject *t_TimeScales_getQZSS(t_TimeScales *self);
      static PyObject *t_TimeScales_getQzssEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getTAI(t_TimeScales *self);
      static PyObject *t_TimeScales_getTCB(t_TimeScales *self);
      static PyObject *t_TimeScales_getTCG(t_TimeScales *self);
      static PyObject *t_TimeScales_getTDB(t_TimeScales *self);
      static PyObject *t_TimeScales_getTT(t_TimeScales *self);
      static PyObject *t_TimeScales_getUT1(t_TimeScales *self, PyObject *args);
      static PyObject *t_TimeScales_getUTC(t_TimeScales *self);
      static PyObject *t_TimeScales_get__bDT(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__beidouEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__ccsdsEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__fiftiesEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__futureInfinity(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__gLONASS(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__gPS(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__gST(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__galileoEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__glonassEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__gpsEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__iRNSS(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__irnssEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__j2000Epoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__javaEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__julianEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__modifiedJulianEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__pastInfinity(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__qZSS(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__qzssEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__tAI(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__tCB(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__tCG(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__tDB(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__tT(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__uTC(t_TimeScales *self, void *data);
      static PyGetSetDef t_TimeScales__fields_[] = {
        DECLARE_GET_FIELD(t_TimeScales, bDT),
        DECLARE_GET_FIELD(t_TimeScales, beidouEpoch),
        DECLARE_GET_FIELD(t_TimeScales, ccsdsEpoch),
        DECLARE_GET_FIELD(t_TimeScales, fiftiesEpoch),
        DECLARE_GET_FIELD(t_TimeScales, futureInfinity),
        DECLARE_GET_FIELD(t_TimeScales, gLONASS),
        DECLARE_GET_FIELD(t_TimeScales, gPS),
        DECLARE_GET_FIELD(t_TimeScales, gST),
        DECLARE_GET_FIELD(t_TimeScales, galileoEpoch),
        DECLARE_GET_FIELD(t_TimeScales, glonassEpoch),
        DECLARE_GET_FIELD(t_TimeScales, gpsEpoch),
        DECLARE_GET_FIELD(t_TimeScales, iRNSS),
        DECLARE_GET_FIELD(t_TimeScales, irnssEpoch),
        DECLARE_GET_FIELD(t_TimeScales, j2000Epoch),
        DECLARE_GET_FIELD(t_TimeScales, javaEpoch),
        DECLARE_GET_FIELD(t_TimeScales, julianEpoch),
        DECLARE_GET_FIELD(t_TimeScales, modifiedJulianEpoch),
        DECLARE_GET_FIELD(t_TimeScales, pastInfinity),
        DECLARE_GET_FIELD(t_TimeScales, qZSS),
        DECLARE_GET_FIELD(t_TimeScales, qzssEpoch),
        DECLARE_GET_FIELD(t_TimeScales, tAI),
        DECLARE_GET_FIELD(t_TimeScales, tCB),
        DECLARE_GET_FIELD(t_TimeScales, tCG),
        DECLARE_GET_FIELD(t_TimeScales, tDB),
        DECLARE_GET_FIELD(t_TimeScales, tT),
        DECLARE_GET_FIELD(t_TimeScales, uTC),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeScales__methods_[] = {
        DECLARE_METHOD(t_TimeScales, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScales, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScales, createBesselianEpoch, METH_O),
        DECLARE_METHOD(t_TimeScales, createJulianEpoch, METH_O),
        DECLARE_METHOD(t_TimeScales, getBDT, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getBeidouEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getCcsdsEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getFiftiesEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getFutureInfinity, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGLONASS, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGMST, METH_VARARGS),
        DECLARE_METHOD(t_TimeScales, getGPS, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGST, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGalileoEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGlonassEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGpsEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getIRNSS, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getIrnssEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getJ2000Epoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getJavaEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getJulianEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getModifiedJulianEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getPastInfinity, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getQZSS, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getQzssEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getTAI, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getTCB, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getTCG, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getTDB, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getTT, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getUT1, METH_VARARGS),
        DECLARE_METHOD(t_TimeScales, getUTC, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeScales)[] = {
        { Py_tp_methods, t_TimeScales__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeScales__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeScales)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeScales, t_TimeScales, TimeScales);

      void t_TimeScales::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeScales), &PY_TYPE_DEF(TimeScales), module, "TimeScales", 0);
      }

      void t_TimeScales::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScales), "class_", make_descriptor(TimeScales::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScales), "wrapfn_", make_descriptor(t_TimeScales::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScales), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeScales_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeScales::initializeClass, 1)))
          return NULL;
        return t_TimeScales::wrap_Object(TimeScales(((t_TimeScales *) arg)->object.this$));
      }
      static PyObject *t_TimeScales_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeScales::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeScales_createBesselianEpoch(t_TimeScales *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.createBesselianEpoch(a0));
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "createBesselianEpoch", arg);
        return NULL;
      }

      static PyObject *t_TimeScales_createJulianEpoch(t_TimeScales *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.createJulianEpoch(a0));
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "createJulianEpoch", arg);
        return NULL;
      }

      static PyObject *t_TimeScales_getBDT(t_TimeScales *self)
      {
        ::org::orekit::time::BDTScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getBDT());
        return ::org::orekit::time::t_BDTScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getBeidouEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getBeidouEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getCcsdsEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getCcsdsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getFiftiesEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFiftiesEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getFutureInfinity(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFutureInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGLONASS(t_TimeScales *self)
      {
        ::org::orekit::time::GLONASSScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getGLONASS());
        return ::org::orekit::time::t_GLONASSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGMST(t_TimeScales *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::GMSTScale result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getGMST(a0, a1));
          return ::org::orekit::time::t_GMSTScale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getGMST", args);
        return NULL;
      }

      static PyObject *t_TimeScales_getGPS(t_TimeScales *self)
      {
        ::org::orekit::time::GPSScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getGPS());
        return ::org::orekit::time::t_GPSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGST(t_TimeScales *self)
      {
        ::org::orekit::time::GalileoScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getGST());
        return ::org::orekit::time::t_GalileoScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGalileoEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGalileoEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGlonassEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGlonassEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGpsEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGpsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getIRNSS(t_TimeScales *self)
      {
        ::org::orekit::time::IRNSSScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getIRNSS());
        return ::org::orekit::time::t_IRNSSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getIrnssEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getIrnssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getJ2000Epoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJ2000Epoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getJavaEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJavaEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getJulianEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getModifiedJulianEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getModifiedJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getPastInfinity(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getPastInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getQZSS(t_TimeScales *self)
      {
        ::org::orekit::time::QZSSScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getQZSS());
        return ::org::orekit::time::t_QZSSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getQzssEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getQzssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getTAI(t_TimeScales *self)
      {
        ::org::orekit::time::TAIScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getTAI());
        return ::org::orekit::time::t_TAIScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getTCB(t_TimeScales *self)
      {
        ::org::orekit::time::TCBScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getTCB());
        return ::org::orekit::time::t_TCBScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getTCG(t_TimeScales *self)
      {
        ::org::orekit::time::TCGScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getTCG());
        return ::org::orekit::time::t_TCGScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getTDB(t_TimeScales *self)
      {
        ::org::orekit::time::TDBScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getTDB());
        return ::org::orekit::time::t_TDBScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getTT(t_TimeScales *self)
      {
        ::org::orekit::time::TTScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getTT());
        return ::org::orekit::time::t_TTScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getUT1(t_TimeScales *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::UT1Scale result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getUT1(a0, a1));
          return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getUT1", args);
        return NULL;
      }

      static PyObject *t_TimeScales_getUTC(t_TimeScales *self)
      {
        ::org::orekit::time::UTCScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getUTC());
        return ::org::orekit::time::t_UTCScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_get__bDT(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::BDTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getBDT());
        return ::org::orekit::time::t_BDTScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__beidouEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getBeidouEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__ccsdsEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getCcsdsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__fiftiesEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFiftiesEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__futureInfinity(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFutureInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__gLONASS(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::GLONASSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGLONASS());
        return ::org::orekit::time::t_GLONASSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__gPS(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::GPSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGPS());
        return ::org::orekit::time::t_GPSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__gST(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::GalileoScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGST());
        return ::org::orekit::time::t_GalileoScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__galileoEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGalileoEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__glonassEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGlonassEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__gpsEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGpsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__iRNSS(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::IRNSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getIRNSS());
        return ::org::orekit::time::t_IRNSSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__irnssEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getIrnssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__j2000Epoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJ2000Epoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__javaEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJavaEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__julianEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__modifiedJulianEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getModifiedJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__pastInfinity(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getPastInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__qZSS(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::QZSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getQZSS());
        return ::org::orekit::time::t_QZSSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__qzssEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getQzssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__tAI(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::TAIScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTAI());
        return ::org::orekit::time::t_TAIScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__tCB(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::TCBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCB());
        return ::org::orekit::time::t_TCBScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__tCG(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::TCGScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCG());
        return ::org::orekit::time::t_TCGScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__tDB(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::TDBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTDB());
        return ::org::orekit::time::t_TDBScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__tT(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::TTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTT());
        return ::org::orekit::time::t_TTScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__uTC(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::UTCScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getUTC());
        return ::org::orekit::time::t_UTCScale::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/ECOM2.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *ECOM2::class$ = NULL;
        jmethodID *ECOM2::mids$ = NULL;
        bool ECOM2::live$ = false;
        ::java::lang::String *ECOM2::ECOM_COEFFICIENT = NULL;

        jclass ECOM2::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/ECOM2");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_889cc26bb5fea56c] = env->getMethodID(cls, "<init>", "(IIDLorg/orekit/utils/ExtendedPVCoordinatesProvider;D)V");
            mids$[mid_acceleration_b42ac4b5bfb80fab] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_8954761face5e1a7] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ECOM_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "ECOM_COEFFICIENT", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ECOM2::ECOM2(jint a0, jint a1, jdouble a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, jdouble a4) : ::org::orekit::forces::radiation::AbstractRadiationForceModel(env->newObject(initializeClass, &mids$, mid_init$_889cc26bb5fea56c, a0, a1, a2, a3.this$, a4)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ECOM2::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b42ac4b5bfb80fab], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ECOM2::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_8954761face5e1a7], a0.this$, a1.this$));
        }

        ::java::util::List ECOM2::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
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
        static PyObject *t_ECOM2_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ECOM2_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ECOM2_init_(t_ECOM2 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ECOM2_acceleration(t_ECOM2 *self, PyObject *args);
        static PyObject *t_ECOM2_getParametersDrivers(t_ECOM2 *self, PyObject *args);
        static PyObject *t_ECOM2_get__parametersDrivers(t_ECOM2 *self, void *data);
        static PyGetSetDef t_ECOM2__fields_[] = {
          DECLARE_GET_FIELD(t_ECOM2, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ECOM2__methods_[] = {
          DECLARE_METHOD(t_ECOM2, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ECOM2, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ECOM2, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_ECOM2, getParametersDrivers, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ECOM2)[] = {
          { Py_tp_methods, t_ECOM2__methods_ },
          { Py_tp_init, (void *) t_ECOM2_init_ },
          { Py_tp_getset, t_ECOM2__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ECOM2)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::radiation::AbstractRadiationForceModel),
          NULL
        };

        DEFINE_TYPE(ECOM2, t_ECOM2, ECOM2);

        void t_ECOM2::install(PyObject *module)
        {
          installType(&PY_TYPE(ECOM2), &PY_TYPE_DEF(ECOM2), module, "ECOM2", 0);
        }

        void t_ECOM2::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ECOM2), "class_", make_descriptor(ECOM2::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ECOM2), "wrapfn_", make_descriptor(t_ECOM2::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ECOM2), "boxfn_", make_descriptor(boxObject));
          env->getClass(ECOM2::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(ECOM2), "ECOM_COEFFICIENT", make_descriptor(j2p(*ECOM2::ECOM_COEFFICIENT)));
        }

        static PyObject *t_ECOM2_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ECOM2::initializeClass, 1)))
            return NULL;
          return t_ECOM2::wrap_Object(ECOM2(((t_ECOM2 *) arg)->object.this$));
        }
        static PyObject *t_ECOM2_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ECOM2::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ECOM2_init_(t_ECOM2 *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jint a1;
          jdouble a2;
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
          jdouble a4;
          ECOM2 object((jobject) NULL);

          if (!parseArgs(args, "IIDkD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = ECOM2(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ECOM2_acceleration(t_ECOM2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
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
          }

          return callSuper(PY_TYPE(ECOM2), (PyObject *) self, "acceleration", args, 2);
        }

        static PyObject *t_ECOM2_getParametersDrivers(t_ECOM2 *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(ECOM2), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_ECOM2_get__parametersDrivers(t_ECOM2 *self, void *data)
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
#include "java/io/FileOutputStream.h"
#include "java/io/FileNotFoundException.h"
#include "java/io/IOException.h"
#include "java/io/File.h"
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
        mids$[mid_init$_0613af62f2ba5dba] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
        mids$[mid_init$_9d90d2b41ddf88a5] = env->getMethodID(cls, "<init>", "(Ljava/io/FileDescriptor;)V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_b98d6d989298aaff] = env->getMethodID(cls, "<init>", "(Ljava/io/File;Z)V");
        mids$[mid_init$_d6df10f4e35ef1e8] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
        mids$[mid_close_0fa09c18fee449d5] = env->getMethodID(cls, "close", "()V");
        mids$[mid_getFD_1b2c26fd91c09af1] = env->getMethodID(cls, "getFD", "()Ljava/io/FileDescriptor;");
        mids$[mid_write_20012b3010a39c05] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_99803b0791f320ff] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_d7af9aedcdd3845b] = env->getMethodID(cls, "write", "([BII)V");
        mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FileOutputStream::FileOutputStream(const ::java::io::File & a0) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_0613af62f2ba5dba, a0.this$)) {}

    FileOutputStream::FileOutputStream(const ::java::io::FileDescriptor & a0) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_9d90d2b41ddf88a5, a0.this$)) {}

    FileOutputStream::FileOutputStream(const ::java::lang::String & a0) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    FileOutputStream::FileOutputStream(const ::java::io::File & a0, jboolean a1) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_b98d6d989298aaff, a0.this$, a1)) {}

    FileOutputStream::FileOutputStream(const ::java::lang::String & a0, jboolean a1) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_d6df10f4e35ef1e8, a0.this$, a1)) {}

    void FileOutputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0fa09c18fee449d5]);
    }

    ::java::io::FileDescriptor FileOutputStream::getFD() const
    {
      return ::java::io::FileDescriptor(env->callObjectMethod(this$, mids$[mid_getFD_1b2c26fd91c09af1]));
    }

    void FileOutputStream::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_20012b3010a39c05], a0.this$);
    }

    void FileOutputStream::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_99803b0791f320ff], a0);
    }

    void FileOutputStream::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_d7af9aedcdd3845b], a0.this$, a1, a2);
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
#include "org/orekit/forces/gravity/potential/GravityFieldFactory.h"
#include "org/orekit/forces/gravity/potential/OceanTidesReader.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/PotentialCoefficientsReader.h"
#include "org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/LazyLoadedGravityFields.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "java/lang/String.h"
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
              mids$[mid_addDefaultOceanTidesReaders_0fa09c18fee449d5] = env->getStaticMethodID(cls, "addDefaultOceanTidesReaders", "()V");
              mids$[mid_addDefaultPotentialCoefficientsReaders_0fa09c18fee449d5] = env->getStaticMethodID(cls, "addDefaultPotentialCoefficientsReaders", "()V");
              mids$[mid_addOceanTidesReader_aaf944cdf3a65ca7] = env->getStaticMethodID(cls, "addOceanTidesReader", "(Lorg/orekit/forces/gravity/potential/OceanTidesReader;)V");
              mids$[mid_addPotentialCoefficientsReader_bb91501de12fc9cd] = env->getStaticMethodID(cls, "addPotentialCoefficientsReader", "(Lorg/orekit/forces/gravity/potential/PotentialCoefficientsReader;)V");
              mids$[mid_clearOceanTidesReaders_0fa09c18fee449d5] = env->getStaticMethodID(cls, "clearOceanTidesReaders", "()V");
              mids$[mid_clearPotentialCoefficientsReaders_0fa09c18fee449d5] = env->getStaticMethodID(cls, "clearPotentialCoefficientsReaders", "()V");
              mids$[mid_configureOceanLoadDeformationCoefficients_1f277f0c1fb1d25f] = env->getStaticMethodID(cls, "configureOceanLoadDeformationCoefficients", "(Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;)V");
              mids$[mid_getConstantNormalizedProvider_8be9acc0db722a5e] = env->getStaticMethodID(cls, "getConstantNormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getConstantUnnormalizedProvider_1a4f51636cfaa7fe] = env->getStaticMethodID(cls, "getConstantUnnormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getGravityFields_6e6081b92fd46837] = env->getStaticMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/LazyLoadedGravityFields;");
              mids$[mid_getNormalizedProvider_85db78a69810583e] = env->getStaticMethodID(cls, "getNormalizedProvider", "(Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getNormalizedProvider_0fdcb0a280e1e598] = env->getStaticMethodID(cls, "getNormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getNormalizedProvider_7e4305b432a52ae3] = env->getStaticMethodID(cls, "getNormalizedProvider", "(DDLorg/orekit/forces/gravity/potential/TideSystem;[[D[[D)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getOceanLoadDeformationCoefficients_ed8ed7679d88de0a] = env->getStaticMethodID(cls, "getOceanLoadDeformationCoefficients", "()Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;");
              mids$[mid_getOceanTidesWaves_10d7c0f6de166543] = env->getStaticMethodID(cls, "getOceanTidesWaves", "(II)Ljava/util/List;");
              mids$[mid_getUnnormalizationFactors_5f8b4bdc912abcfa] = env->getStaticMethodID(cls, "getUnnormalizationFactors", "(II)[[D");
              mids$[mid_getUnnormalizedProvider_95cc2006b0da2544] = env->getStaticMethodID(cls, "getUnnormalizedProvider", "(Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getUnnormalizedProvider_c2f412128b078525] = env->getStaticMethodID(cls, "getUnnormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getUnnormalizedProvider_05607b190f3105e2] = env->getStaticMethodID(cls, "getUnnormalizedProvider", "(DDLorg/orekit/forces/gravity/potential/TideSystem;[[D[[D)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_readGravityField_59c1b784e0263abd] = env->getStaticMethodID(cls, "readGravityField", "(II)Lorg/orekit/forces/gravity/potential/PotentialCoefficientsReader;");

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
            env->callStaticVoidMethod(cls, mids$[mid_addDefaultOceanTidesReaders_0fa09c18fee449d5]);
          }

          void GravityFieldFactory::addDefaultPotentialCoefficientsReaders()
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_addDefaultPotentialCoefficientsReaders_0fa09c18fee449d5]);
          }

          void GravityFieldFactory::addOceanTidesReader(const ::org::orekit::forces::gravity::potential::OceanTidesReader & a0)
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_addOceanTidesReader_aaf944cdf3a65ca7], a0.this$);
          }

          void GravityFieldFactory::addPotentialCoefficientsReader(const ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader & a0)
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_addPotentialCoefficientsReader_bb91501de12fc9cd], a0.this$);
          }

          void GravityFieldFactory::clearOceanTidesReaders()
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_clearOceanTidesReaders_0fa09c18fee449d5]);
          }

          void GravityFieldFactory::clearPotentialCoefficientsReaders()
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_clearPotentialCoefficientsReaders_0fa09c18fee449d5]);
          }

          void GravityFieldFactory::configureOceanLoadDeformationCoefficients(const ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients & a0)
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_configureOceanLoadDeformationCoefficients_1f277f0c1fb1d25f], a0.this$);
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFieldFactory::getConstantNormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getConstantNormalizedProvider_8be9acc0db722a5e], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFieldFactory::getConstantUnnormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getConstantUnnormalizedProvider_1a4f51636cfaa7fe], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields GravityFieldFactory::getGravityFields()
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields(env->callStaticObjectMethod(cls, mids$[mid_getGravityFields_6e6081b92fd46837]));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFieldFactory::getNormalizedProvider(const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getNormalizedProvider_85db78a69810583e], a0.this$));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFieldFactory::getNormalizedProvider(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getNormalizedProvider_0fdcb0a280e1e598], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFieldFactory::getNormalizedProvider(jdouble a0, jdouble a1, const ::org::orekit::forces::gravity::potential::TideSystem & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getNormalizedProvider_7e4305b432a52ae3], a0, a1, a2.this$, a3.this$, a4.this$));
          }

          ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients GravityFieldFactory::getOceanLoadDeformationCoefficients()
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients(env->callStaticObjectMethod(cls, mids$[mid_getOceanLoadDeformationCoefficients_ed8ed7679d88de0a]));
          }

          ::java::util::List GravityFieldFactory::getOceanTidesWaves(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_getOceanTidesWaves_10d7c0f6de166543], a0, a1));
          }

          JArray< JArray< jdouble > > GravityFieldFactory::getUnnormalizationFactors(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_getUnnormalizationFactors_5f8b4bdc912abcfa], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFieldFactory::getUnnormalizedProvider(const ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getUnnormalizedProvider_95cc2006b0da2544], a0.this$));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFieldFactory::getUnnormalizedProvider(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getUnnormalizedProvider_c2f412128b078525], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFieldFactory::getUnnormalizedProvider(jdouble a0, jdouble a1, const ::org::orekit::forces::gravity::potential::TideSystem & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getUnnormalizedProvider_05607b190f3105e2], a0, a1, a2.this$, a3.this$, a4.this$));
          }

          ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader GravityFieldFactory::readGravityField(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->callStaticObjectMethod(cls, mids$[mid_readGravityField_59c1b784e0263abd], a0, a1));
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
#include "org/hipparchus/ode/events/FieldDetectorBasedEventState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/events/FieldEventState.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/ode/events/FieldEventOccurrence.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldDetectorBasedEventState::class$ = NULL;
        jmethodID *FieldDetectorBasedEventState::mids$ = NULL;
        bool FieldDetectorBasedEventState::live$ = false;

        jclass FieldDetectorBasedEventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldDetectorBasedEventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_cdac85baa1ddabb0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/FieldODEEventDetector;)V");
            mids$[mid_doEvent_bdf842cbe214f2d2] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/events/FieldEventOccurrence;");
            mids$[mid_evaluateStep_92ced200eac51ce8] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)Z");
            mids$[mid_getEventDetector_ef99357700ee5799] = env->getMethodID(cls, "getEventDetector", "()Lorg/hipparchus/ode/events/FieldODEEventDetector;");
            mids$[mid_getEventTime_eba8e72a22c984ac] = env->getMethodID(cls, "getEventTime", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_81b5dd1fb920fdc1] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_reinitializeBegin_f31e7e3a46e05334] = env->getMethodID(cls, "reinitializeBegin", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)V");
            mids$[mid_tryAdvance_228f4f91cc03b520] = env->getMethodID(cls, "tryAdvance", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldDetectorBasedEventState::FieldDetectorBasedEventState(const ::org::hipparchus::ode::events::FieldODEEventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cdac85baa1ddabb0, a0.this$)) {}

        ::org::hipparchus::ode::events::FieldEventOccurrence FieldDetectorBasedEventState::doEvent(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::FieldEventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_bdf842cbe214f2d2], a0.this$));
        }

        jboolean FieldDetectorBasedEventState::evaluateStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_92ced200eac51ce8], a0.this$);
        }

        ::org::hipparchus::ode::events::FieldODEEventDetector FieldDetectorBasedEventState::getEventDetector() const
        {
          return ::org::hipparchus::ode::events::FieldODEEventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_ef99357700ee5799]));
        }

        ::org::hipparchus::CalculusFieldElement FieldDetectorBasedEventState::getEventTime() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEventTime_eba8e72a22c984ac]));
        }

        void FieldDetectorBasedEventState::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_81b5dd1fb920fdc1], a0.this$, a1.this$);
        }

        void FieldDetectorBasedEventState::reinitializeBegin(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reinitializeBegin_f31e7e3a46e05334], a0.this$);
        }

        jboolean FieldDetectorBasedEventState::tryAdvance(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tryAdvance_228f4f91cc03b520], a0.this$, a1.this$);
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
        static PyObject *t_FieldDetectorBasedEventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDetectorBasedEventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDetectorBasedEventState_of_(t_FieldDetectorBasedEventState *self, PyObject *args);
        static int t_FieldDetectorBasedEventState_init_(t_FieldDetectorBasedEventState *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldDetectorBasedEventState_doEvent(t_FieldDetectorBasedEventState *self, PyObject *arg);
        static PyObject *t_FieldDetectorBasedEventState_evaluateStep(t_FieldDetectorBasedEventState *self, PyObject *arg);
        static PyObject *t_FieldDetectorBasedEventState_getEventDetector(t_FieldDetectorBasedEventState *self);
        static PyObject *t_FieldDetectorBasedEventState_getEventTime(t_FieldDetectorBasedEventState *self);
        static PyObject *t_FieldDetectorBasedEventState_init(t_FieldDetectorBasedEventState *self, PyObject *args);
        static PyObject *t_FieldDetectorBasedEventState_reinitializeBegin(t_FieldDetectorBasedEventState *self, PyObject *arg);
        static PyObject *t_FieldDetectorBasedEventState_tryAdvance(t_FieldDetectorBasedEventState *self, PyObject *args);
        static PyObject *t_FieldDetectorBasedEventState_get__eventDetector(t_FieldDetectorBasedEventState *self, void *data);
        static PyObject *t_FieldDetectorBasedEventState_get__eventTime(t_FieldDetectorBasedEventState *self, void *data);
        static PyObject *t_FieldDetectorBasedEventState_get__parameters_(t_FieldDetectorBasedEventState *self, void *data);
        static PyGetSetDef t_FieldDetectorBasedEventState__fields_[] = {
          DECLARE_GET_FIELD(t_FieldDetectorBasedEventState, eventDetector),
          DECLARE_GET_FIELD(t_FieldDetectorBasedEventState, eventTime),
          DECLARE_GET_FIELD(t_FieldDetectorBasedEventState, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldDetectorBasedEventState__methods_[] = {
          DECLARE_METHOD(t_FieldDetectorBasedEventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, doEvent, METH_O),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, getEventTime, METH_NOARGS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, reinitializeBegin, METH_O),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, tryAdvance, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldDetectorBasedEventState)[] = {
          { Py_tp_methods, t_FieldDetectorBasedEventState__methods_ },
          { Py_tp_init, (void *) t_FieldDetectorBasedEventState_init_ },
          { Py_tp_getset, t_FieldDetectorBasedEventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldDetectorBasedEventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldDetectorBasedEventState, t_FieldDetectorBasedEventState, FieldDetectorBasedEventState);
        PyObject *t_FieldDetectorBasedEventState::wrap_Object(const FieldDetectorBasedEventState& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDetectorBasedEventState::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDetectorBasedEventState *self = (t_FieldDetectorBasedEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldDetectorBasedEventState::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDetectorBasedEventState::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDetectorBasedEventState *self = (t_FieldDetectorBasedEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldDetectorBasedEventState::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldDetectorBasedEventState), &PY_TYPE_DEF(FieldDetectorBasedEventState), module, "FieldDetectorBasedEventState", 0);
        }

        void t_FieldDetectorBasedEventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDetectorBasedEventState), "class_", make_descriptor(FieldDetectorBasedEventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDetectorBasedEventState), "wrapfn_", make_descriptor(t_FieldDetectorBasedEventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDetectorBasedEventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldDetectorBasedEventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldDetectorBasedEventState::initializeClass, 1)))
            return NULL;
          return t_FieldDetectorBasedEventState::wrap_Object(FieldDetectorBasedEventState(((t_FieldDetectorBasedEventState *) arg)->object.this$));
        }
        static PyObject *t_FieldDetectorBasedEventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldDetectorBasedEventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldDetectorBasedEventState_of_(t_FieldDetectorBasedEventState *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldDetectorBasedEventState_init_(t_FieldDetectorBasedEventState *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDetectorBasedEventState object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_))
          {
            INT_CALL(object = FieldDetectorBasedEventState(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldDetectorBasedEventState_doEvent(t_FieldDetectorBasedEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::events::FieldEventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::hipparchus::ode::events::t_FieldEventOccurrence::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_FieldDetectorBasedEventState_evaluateStep(t_FieldDetectorBasedEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_FieldDetectorBasedEventState_getEventDetector(t_FieldDetectorBasedEventState *self)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return ::org::hipparchus::ode::events::t_FieldODEEventDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDetectorBasedEventState_getEventTime(t_FieldDetectorBasedEventState *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventTime());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldDetectorBasedEventState_init(t_FieldDetectorBasedEventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_FieldDetectorBasedEventState_reinitializeBegin(t_FieldDetectorBasedEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(self->object.reinitializeBegin(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reinitializeBegin", arg);
          return NULL;
        }

        static PyObject *t_FieldDetectorBasedEventState_tryAdvance(t_FieldDetectorBasedEventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean result;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.tryAdvance(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "tryAdvance", args);
          return NULL;
        }
        static PyObject *t_FieldDetectorBasedEventState_get__parameters_(t_FieldDetectorBasedEventState *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldDetectorBasedEventState_get__eventDetector(t_FieldDetectorBasedEventState *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::hipparchus::ode::events::t_FieldODEEventDetector::wrap_Object(value);
        }

        static PyObject *t_FieldDetectorBasedEventState_get__eventTime(t_FieldDetectorBasedEventState *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventTime());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EclipticProvider.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EclipticProvider::class$ = NULL;
      jmethodID *EclipticProvider::mids$ = NULL;
      bool EclipticProvider::live$ = false;

      jclass EclipticProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EclipticProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7762a3bbe4c9b5d5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;)V");
          mids$[mid_init$_840415639e18784b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_getTransform_687985c59478d29c] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_f7bf3269025b86c3] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EclipticProvider::EclipticProvider(const ::org::orekit::utils::IERSConventions & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7762a3bbe4c9b5d5, a0.this$)) {}

      EclipticProvider::EclipticProvider(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::time::TimeScales & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_840415639e18784b, a0.this$, a1.this$)) {}

      ::org::orekit::frames::Transform EclipticProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_687985c59478d29c], a0.this$));
      }

      ::org::orekit::frames::FieldTransform EclipticProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_f7bf3269025b86c3], a0.this$));
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
      static PyObject *t_EclipticProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EclipticProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EclipticProvider_init_(t_EclipticProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EclipticProvider_getTransform(t_EclipticProvider *self, PyObject *args);

      static PyMethodDef t_EclipticProvider__methods_[] = {
        DECLARE_METHOD(t_EclipticProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EclipticProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EclipticProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EclipticProvider)[] = {
        { Py_tp_methods, t_EclipticProvider__methods_ },
        { Py_tp_init, (void *) t_EclipticProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EclipticProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EclipticProvider, t_EclipticProvider, EclipticProvider);

      void t_EclipticProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(EclipticProvider), &PY_TYPE_DEF(EclipticProvider), module, "EclipticProvider", 0);
      }

      void t_EclipticProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EclipticProvider), "class_", make_descriptor(EclipticProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EclipticProvider), "wrapfn_", make_descriptor(t_EclipticProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EclipticProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EclipticProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EclipticProvider::initializeClass, 1)))
          return NULL;
        return t_EclipticProvider::wrap_Object(EclipticProvider(((t_EclipticProvider *) arg)->object.this$));
      }
      static PyObject *t_EclipticProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EclipticProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EclipticProvider_init_(t_EclipticProvider *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            EclipticProvider object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              INT_CALL(object = EclipticProvider(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            EclipticProvider object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              INT_CALL(object = EclipticProvider(a0, a1));
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

      static PyObject *t_EclipticProvider_getTransform(t_EclipticProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/ComplexComparator.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
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
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_compare_1d8244b3a91ad75b] = env->getMethodID(cls, "compare", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexComparator::ComplexComparator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      jint ComplexComparator::compare(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1) const
      {
        return env->callIntMethod(this$, mids$[mid_compare_1d8244b3a91ad75b], a0.this$, a1.this$);
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/FixedNumberInterpolationGrid.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/InterpolationGrid.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FixedNumberInterpolationGrid::class$ = NULL;
            jmethodID *FixedNumberInterpolationGrid::mids$ = NULL;
            bool FixedNumberInterpolationGrid::live$ = false;

            jclass FixedNumberInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FixedNumberInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getGridPoints_432c7f020b618085] = env->getMethodID(cls, "getGridPoints", "(DD)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FixedNumberInterpolationGrid::FixedNumberInterpolationGrid(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

            JArray< jdouble > FixedNumberInterpolationGrid::getGridPoints(jdouble a0, jdouble a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGridPoints_432c7f020b618085], a0, a1));
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
            static PyObject *t_FixedNumberInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FixedNumberInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static int t_FixedNumberInterpolationGrid_init_(t_FixedNumberInterpolationGrid *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FixedNumberInterpolationGrid_getGridPoints(t_FixedNumberInterpolationGrid *self, PyObject *args);

            static PyMethodDef t_FixedNumberInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_FixedNumberInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FixedNumberInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FixedNumberInterpolationGrid, getGridPoints, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FixedNumberInterpolationGrid)[] = {
              { Py_tp_methods, t_FixedNumberInterpolationGrid__methods_ },
              { Py_tp_init, (void *) t_FixedNumberInterpolationGrid_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FixedNumberInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FixedNumberInterpolationGrid, t_FixedNumberInterpolationGrid, FixedNumberInterpolationGrid);

            void t_FixedNumberInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(FixedNumberInterpolationGrid), &PY_TYPE_DEF(FixedNumberInterpolationGrid), module, "FixedNumberInterpolationGrid", 0);
            }

            void t_FixedNumberInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedNumberInterpolationGrid), "class_", make_descriptor(FixedNumberInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedNumberInterpolationGrid), "wrapfn_", make_descriptor(t_FixedNumberInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedNumberInterpolationGrid), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FixedNumberInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FixedNumberInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_FixedNumberInterpolationGrid::wrap_Object(FixedNumberInterpolationGrid(((t_FixedNumberInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_FixedNumberInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FixedNumberInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_FixedNumberInterpolationGrid_init_(t_FixedNumberInterpolationGrid *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              FixedNumberInterpolationGrid object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = FixedNumberInterpolationGrid(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FixedNumberInterpolationGrid_getGridPoints(t_FixedNumberInterpolationGrid *self, PyObject *args)
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getGridPoints(a0, a1));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "getGridPoints", args);
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
#include "org/orekit/time/GalileoScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *GalileoScale::class$ = NULL;
      jmethodID *GalileoScale::mids$ = NULL;
      bool GalileoScale::live$ = false;

      jclass GalileoScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/GalileoScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_bf1d7732f1acb697] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_2a5f05be83ff251d] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_56358b00ba005b52] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String GalileoScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      jdouble GalileoScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_bf1d7732f1acb697], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement GalileoScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_2a5f05be83ff251d], a0.this$));
      }

      jdouble GalileoScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_56358b00ba005b52], a0.this$, a1.this$);
      }

      ::java::lang::String GalileoScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
      static PyObject *t_GalileoScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GalileoScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GalileoScale_getName(t_GalileoScale *self);
      static PyObject *t_GalileoScale_offsetFromTAI(t_GalileoScale *self, PyObject *args);
      static PyObject *t_GalileoScale_offsetToTAI(t_GalileoScale *self, PyObject *args);
      static PyObject *t_GalileoScale_toString(t_GalileoScale *self, PyObject *args);
      static PyObject *t_GalileoScale_get__name(t_GalileoScale *self, void *data);
      static PyGetSetDef t_GalileoScale__fields_[] = {
        DECLARE_GET_FIELD(t_GalileoScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GalileoScale__methods_[] = {
        DECLARE_METHOD(t_GalileoScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GalileoScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GalileoScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_GalileoScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_GalileoScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_GalileoScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GalileoScale)[] = {
        { Py_tp_methods, t_GalileoScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GalileoScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GalileoScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GalileoScale, t_GalileoScale, GalileoScale);

      void t_GalileoScale::install(PyObject *module)
      {
        installType(&PY_TYPE(GalileoScale), &PY_TYPE_DEF(GalileoScale), module, "GalileoScale", 0);
      }

      void t_GalileoScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoScale), "class_", make_descriptor(GalileoScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoScale), "wrapfn_", make_descriptor(t_GalileoScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GalileoScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GalileoScale::initializeClass, 1)))
          return NULL;
        return t_GalileoScale::wrap_Object(GalileoScale(((t_GalileoScale *) arg)->object.this$));
      }
      static PyObject *t_GalileoScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GalileoScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GalileoScale_getName(t_GalileoScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_GalileoScale_offsetFromTAI(t_GalileoScale *self, PyObject *args)
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

      static PyObject *t_GalileoScale_offsetToTAI(t_GalileoScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_GalileoScale_toString(t_GalileoScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(GalileoScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_GalileoScale_get__name(t_GalileoScale *self, void *data)
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
#include "org/orekit/gnss/metric/messages/rtcm/RtcmMessage.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {

            ::java::lang::Class *RtcmMessage::class$ = NULL;
            jmethodID *RtcmMessage::mids$ = NULL;
            bool RtcmMessage::live$ = false;

            jclass RtcmMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/RtcmMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_b5f42653137ed96d] = env->getMethodID(cls, "<init>", "(ILjava/util/List;)V");
                mids$[mid_getData_2afa36052df4765d] = env->getMethodID(cls, "getData", "()Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RtcmMessage::RtcmMessage(jint a0, const ::java::util::List & a1) : ::org::orekit::gnss::metric::messages::ParsedMessage(env->newObject(initializeClass, &mids$, mid_init$_b5f42653137ed96d, a0, a1.this$)) {}

            ::java::util::List RtcmMessage::getData() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getData_2afa36052df4765d]));
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
            static PyObject *t_RtcmMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RtcmMessage_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RtcmMessage_of_(t_RtcmMessage *self, PyObject *args);
            static int t_RtcmMessage_init_(t_RtcmMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_RtcmMessage_getData(t_RtcmMessage *self);
            static PyObject *t_RtcmMessage_get__data(t_RtcmMessage *self, void *data);
            static PyObject *t_RtcmMessage_get__parameters_(t_RtcmMessage *self, void *data);
            static PyGetSetDef t_RtcmMessage__fields_[] = {
              DECLARE_GET_FIELD(t_RtcmMessage, data),
              DECLARE_GET_FIELD(t_RtcmMessage, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_RtcmMessage__methods_[] = {
              DECLARE_METHOD(t_RtcmMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RtcmMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RtcmMessage, of_, METH_VARARGS),
              DECLARE_METHOD(t_RtcmMessage, getData, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RtcmMessage)[] = {
              { Py_tp_methods, t_RtcmMessage__methods_ },
              { Py_tp_init, (void *) t_RtcmMessage_init_ },
              { Py_tp_getset, t_RtcmMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RtcmMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ParsedMessage),
              NULL
            };

            DEFINE_TYPE(RtcmMessage, t_RtcmMessage, RtcmMessage);
            PyObject *t_RtcmMessage::wrap_Object(const RtcmMessage& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RtcmMessage::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RtcmMessage *self = (t_RtcmMessage *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_RtcmMessage::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RtcmMessage::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RtcmMessage *self = (t_RtcmMessage *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_RtcmMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(RtcmMessage), &PY_TYPE_DEF(RtcmMessage), module, "RtcmMessage", 0);
            }

            void t_RtcmMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessage), "class_", make_descriptor(RtcmMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessage), "wrapfn_", make_descriptor(t_RtcmMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RtcmMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RtcmMessage::initializeClass, 1)))
                return NULL;
              return t_RtcmMessage::wrap_Object(RtcmMessage(((t_RtcmMessage *) arg)->object.this$));
            }
            static PyObject *t_RtcmMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RtcmMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RtcmMessage_of_(t_RtcmMessage *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_RtcmMessage_init_(t_RtcmMessage *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              RtcmMessage object((jobject) NULL);

              if (!parseArgs(args, "IK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = RtcmMessage(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_RtcmMessage_getData(t_RtcmMessage *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getData());
              return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
            }
            static PyObject *t_RtcmMessage_get__parameters_(t_RtcmMessage *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_RtcmMessage_get__data(t_RtcmMessage *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getData());
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
#include "org/hipparchus/analysis/differentiation/UnivariateFunctionDifferentiator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateFunctionDifferentiator::class$ = NULL;
        jmethodID *UnivariateFunctionDifferentiator::mids$ = NULL;
        bool UnivariateFunctionDifferentiator::live$ = false;

        jclass UnivariateFunctionDifferentiator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateFunctionDifferentiator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_differentiate_0f70e8683b12e576] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction UnivariateFunctionDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callObjectMethod(this$, mids$[mid_differentiate_0f70e8683b12e576], a0.this$));
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
        static PyObject *t_UnivariateFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateFunctionDifferentiator_differentiate(t_UnivariateFunctionDifferentiator *self, PyObject *arg);

        static PyMethodDef t_UnivariateFunctionDifferentiator__methods_[] = {
          DECLARE_METHOD(t_UnivariateFunctionDifferentiator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateFunctionDifferentiator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateFunctionDifferentiator, differentiate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateFunctionDifferentiator)[] = {
          { Py_tp_methods, t_UnivariateFunctionDifferentiator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateFunctionDifferentiator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateFunctionDifferentiator, t_UnivariateFunctionDifferentiator, UnivariateFunctionDifferentiator);

        void t_UnivariateFunctionDifferentiator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateFunctionDifferentiator), &PY_TYPE_DEF(UnivariateFunctionDifferentiator), module, "UnivariateFunctionDifferentiator", 0);
        }

        void t_UnivariateFunctionDifferentiator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateFunctionDifferentiator), "class_", make_descriptor(UnivariateFunctionDifferentiator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateFunctionDifferentiator), "wrapfn_", make_descriptor(t_UnivariateFunctionDifferentiator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateFunctionDifferentiator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateFunctionDifferentiator::initializeClass, 1)))
            return NULL;
          return t_UnivariateFunctionDifferentiator::wrap_Object(UnivariateFunctionDifferentiator(((t_UnivariateFunctionDifferentiator *) arg)->object.this$));
        }
        static PyObject *t_UnivariateFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateFunctionDifferentiator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateFunctionDifferentiator_differentiate(t_UnivariateFunctionDifferentiator *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.differentiate(a0));
            return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "differentiate", arg);
          return NULL;
        }
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
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getNbSensorNoiseCovariance_570ce0828f81a2c1] = env->getMethodID(cls, "getNbSensorNoiseCovariance", "()I");
                  mids$[mid_getSensorFrequency_dff5885c2c873297] = env->getMethodID(cls, "getSensorFrequency", "()D");
                  mids$[mid_getSensorNoiseCovariance_60c7040667a7dc5c] = env->getMethodID(cls, "getSensorNoiseCovariance", "()[D");
                  mids$[mid_getSensorNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getSensorNumber", "()I");
                  mids$[mid_getSensorUsed_11b109bd155ca898] = env->getMethodID(cls, "getSensorUsed", "()Ljava/lang/String;");
                  mids$[mid_setNbSensorNoiseCovariance_99803b0791f320ff] = env->getMethodID(cls, "setNbSensorNoiseCovariance", "(I)V");
                  mids$[mid_setSensorFrequency_17db3a65980d3441] = env->getMethodID(cls, "setSensorFrequency", "(D)V");
                  mids$[mid_setSensorNoiseCovariance_fa9d415d19f69361] = env->getMethodID(cls, "setSensorNoiseCovariance", "([D)V");
                  mids$[mid_setSensorNumber_99803b0791f320ff] = env->getMethodID(cls, "setSensorNumber", "(I)V");
                  mids$[mid_setSensorUsed_d0bc48d5b00dc40c] = env->getMethodID(cls, "setSensorUsed", "(Ljava/lang/String;)V");
                  mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeDeterminationSensor::AttitudeDeterminationSensor() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              jint AttitudeDeterminationSensor::getNbSensorNoiseCovariance() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbSensorNoiseCovariance_570ce0828f81a2c1]);
              }

              jdouble AttitudeDeterminationSensor::getSensorFrequency() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSensorFrequency_dff5885c2c873297]);
              }

              JArray< jdouble > AttitudeDeterminationSensor::getSensorNoiseCovariance() const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSensorNoiseCovariance_60c7040667a7dc5c]));
              }

              jint AttitudeDeterminationSensor::getSensorNumber() const
              {
                return env->callIntMethod(this$, mids$[mid_getSensorNumber_570ce0828f81a2c1]);
              }

              ::java::lang::String AttitudeDeterminationSensor::getSensorUsed() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorUsed_11b109bd155ca898]));
              }

              void AttitudeDeterminationSensor::setNbSensorNoiseCovariance(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNbSensorNoiseCovariance_99803b0791f320ff], a0);
              }

              void AttitudeDeterminationSensor::setSensorFrequency(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensorFrequency_17db3a65980d3441], a0);
              }

              void AttitudeDeterminationSensor::setSensorNoiseCovariance(const JArray< jdouble > & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensorNoiseCovariance_fa9d415d19f69361], a0.this$);
              }

              void AttitudeDeterminationSensor::setSensorNumber(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensorNumber_99803b0791f320ff], a0);
              }

              void AttitudeDeterminationSensor::setSensorUsed(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensorUsed_d0bc48d5b00dc40c], a0.this$);
              }

              void AttitudeDeterminationSensor::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
#include "org/orekit/orbits/FieldCircularOrbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/FieldCircularOrbit.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/orekit/orbits/CircularOrbit.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldCircularOrbit::class$ = NULL;
      jmethodID *FieldCircularOrbit::mids$ = NULL;
      bool FieldCircularOrbit::live$ = false;

      jclass FieldCircularOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldCircularOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1cbcb2601e7d1334] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
          mids$[mid_init$_43de9e369fe637a1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/CircularOrbit;)V");
          mids$[mid_init$_726dc2bf140240a1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_a1d831f131e24bc0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_960ad4c09c9f5686] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_b6f9c400578e2bc2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_2a14969bf128ed41] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_addKeplerContribution_4e49f6ed48591ef2] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_eccentricToMean_ff4594b9dc2244a3] = env->getStaticMethodID(cls, "eccentricToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_eccentricToTrue_ff4594b9dc2244a3] = env->getStaticMethodID(cls, "eccentricToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getA_eba8e72a22c984ac] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getADot_eba8e72a22c984ac] = env->getMethodID(cls, "getADot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlpha_aefb08df7a137c22] = env->getMethodID(cls, "getAlpha", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaDot_aefb08df7a137c22] = env->getMethodID(cls, "getAlphaDot", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaE_eba8e72a22c984ac] = env->getMethodID(cls, "getAlphaE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaEDot_eba8e72a22c984ac] = env->getMethodID(cls, "getAlphaEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaM_eba8e72a22c984ac] = env->getMethodID(cls, "getAlphaM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaMDot_eba8e72a22c984ac] = env->getMethodID(cls, "getAlphaMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaV_eba8e72a22c984ac] = env->getMethodID(cls, "getAlphaV", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaVDot_eba8e72a22c984ac] = env->getMethodID(cls, "getAlphaVDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCachedPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getCircularEx_eba8e72a22c984ac] = env->getMethodID(cls, "getCircularEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCircularExDot_eba8e72a22c984ac] = env->getMethodID(cls, "getCircularExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCircularEy_eba8e72a22c984ac] = env->getMethodID(cls, "getCircularEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCircularEyDot_eba8e72a22c984ac] = env->getMethodID(cls, "getCircularEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getE_eba8e72a22c984ac] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEDot_eba8e72a22c984ac] = env->getMethodID(cls, "getEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_eba8e72a22c984ac] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialExDot_eba8e72a22c984ac] = env->getMethodID(cls, "getEquinoctialExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_eba8e72a22c984ac] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEyDot_eba8e72a22c984ac] = env->getMethodID(cls, "getEquinoctialEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHx_eba8e72a22c984ac] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHxDot_eba8e72a22c984ac] = env->getMethodID(cls, "getHxDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_eba8e72a22c984ac] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHyDot_eba8e72a22c984ac] = env->getMethodID(cls, "getHyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_eba8e72a22c984ac] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getIDot_eba8e72a22c984ac] = env->getMethodID(cls, "getIDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_eba8e72a22c984ac] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_eba8e72a22c984ac] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_eba8e72a22c984ac] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMDot_eba8e72a22c984ac] = env->getMethodID(cls, "getLMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_eba8e72a22c984ac] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLvDot_eba8e72a22c984ac] = env->getMethodID(cls, "getLvDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRightAscensionOfAscendingNode_eba8e72a22c984ac] = env->getMethodID(cls, "getRightAscensionOfAscendingNode", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRightAscensionOfAscendingNodeDot_eba8e72a22c984ac] = env->getMethodID(cls, "getRightAscensionOfAscendingNodeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getType_e29360d311dc0e20] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_b108b35ef48e27bd] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_hasRates_b108b35ef48e27bd] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_meanToEccentric_ff4594b9dc2244a3] = env->getStaticMethodID(cls, "meanToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_removeRates_15694ecc16add3b8] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/FieldCircularOrbit;");
          mids$[mid_shiftedBy_0b5db429e645864d] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/FieldCircularOrbit;");
          mids$[mid_shiftedBy_773fa8c9777ed86e] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldCircularOrbit;");
          mids$[mid_toOrbit_25661094a9b1d547] = env->getMethodID(cls, "toOrbit", "()Lorg/orekit/orbits/CircularOrbit;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_trueToEccentric_ff4594b9dc2244a3] = env->getStaticMethodID(cls, "trueToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_initPVCoordinates_f89522ff77904397] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_initPosition_716f50c86ffc8da7] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_computeJacobianMeanWrtCartesian_1b3ae884bec31e6d] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianEccentricWrtCartesian_1b3ae884bec31e6d] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianTrueWrtCartesian_1b3ae884bec31e6d] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldCircularOrbit::FieldCircularOrbit(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_1cbcb2601e7d1334, a0.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::CircularOrbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_43de9e369fe637a1, a0.this$, a1.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_726dc2bf140240a1, a0.this$, a1.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_a1d831f131e24bc0, a0.this$, a1.this$, a2.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_960ad4c09c9f5686, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::FieldAbsoluteDate & a8, const ::org::hipparchus::CalculusFieldElement & a9) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_b6f9c400578e2bc2, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::FieldAbsoluteDate & a14, const ::org::hipparchus::CalculusFieldElement & a15) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_2a14969bf128ed41, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$)) {}

      void FieldCircularOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_4e49f6ed48591ef2], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::eccentricToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_eccentricToMean_ff4594b9dc2244a3], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::eccentricToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_eccentricToTrue_ff4594b9dc2244a3], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getADot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getADot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlpha(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlpha_aefb08df7a137c22], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaDot_aefb08df7a137c22], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaE_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaEDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaM_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaMDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaV() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaV_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaVDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaVDot_eba8e72a22c984ac]));
      }

      ::org::orekit::orbits::PositionAngleType FieldCircularOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_8f17e83e5a86217c]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getCircularEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCircularEx_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getCircularExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCircularExDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getCircularEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCircularEy_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getCircularEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCircularEyDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getEquinoctialExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialExDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getEquinoctialEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEyDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getHxDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHxDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getHyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHyDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getIDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLvDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLvDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getRightAscensionOfAscendingNode() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightAscensionOfAscendingNode_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getRightAscensionOfAscendingNodeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightAscensionOfAscendingNodeDot_eba8e72a22c984ac]));
      }

      ::org::orekit::orbits::OrbitType FieldCircularOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_e29360d311dc0e20]));
      }

      jboolean FieldCircularOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_b108b35ef48e27bd]);
      }

      jboolean FieldCircularOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_b108b35ef48e27bd]);
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::meanToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_meanToEccentric_ff4594b9dc2244a3], a0.this$, a1.this$, a2.this$));
      }

      FieldCircularOrbit FieldCircularOrbit::removeRates() const
      {
        return FieldCircularOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_15694ecc16add3b8]));
      }

      FieldCircularOrbit FieldCircularOrbit::shiftedBy(jdouble a0) const
      {
        return FieldCircularOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_0b5db429e645864d], a0));
      }

      FieldCircularOrbit FieldCircularOrbit::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldCircularOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_773fa8c9777ed86e], a0.this$));
      }

      ::org::orekit::orbits::CircularOrbit FieldCircularOrbit::toOrbit() const
      {
        return ::org::orekit::orbits::CircularOrbit(env->callObjectMethod(this$, mids$[mid_toOrbit_25661094a9b1d547]));
      }

      ::java::lang::String FieldCircularOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::trueToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_trueToEccentric_ff4594b9dc2244a3], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_FieldCircularOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldCircularOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldCircularOrbit_of_(t_FieldCircularOrbit *self, PyObject *args);
      static int t_FieldCircularOrbit_init_(t_FieldCircularOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldCircularOrbit_addKeplerContribution(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_eccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldCircularOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getA(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getADot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getAlpha(t_FieldCircularOrbit *self, PyObject *arg);
      static PyObject *t_FieldCircularOrbit_getAlphaDot(t_FieldCircularOrbit *self, PyObject *arg);
      static PyObject *t_FieldCircularOrbit_getAlphaE(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getAlphaEDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getAlphaM(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getAlphaMDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getAlphaV(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getAlphaVDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getCachedPositionAngleType(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getCircularEx(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getCircularExDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getCircularEy(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getCircularEyDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getE(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getEDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getEquinoctialEx(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getEquinoctialExDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getEquinoctialEy(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getEquinoctialEyDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getHx(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getHxDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getHy(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getHyDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getI(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getIDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLE(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLEDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLM(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLMDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLv(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLvDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getRightAscensionOfAscendingNode(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getRightAscensionOfAscendingNodeDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getType(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_hasDerivatives(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_hasRates(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_meanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldCircularOrbit_removeRates(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_shiftedBy(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_toOrbit(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_toString(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_trueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldCircularOrbit_get__a(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__aDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaE(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaEDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaM(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaMDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaV(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaVDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__cachedPositionAngleType(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__circularEx(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__circularExDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__circularEy(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__circularEyDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__e(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__eDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__equinoctialEx(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__equinoctialExDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__equinoctialEy(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__equinoctialEyDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__hx(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__hxDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__hy(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__hyDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__i(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__iDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lE(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lEDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lM(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lMDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lv(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lvDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__rightAscensionOfAscendingNode(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__rightAscensionOfAscendingNodeDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__type(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__parameters_(t_FieldCircularOrbit *self, void *data);
      static PyGetSetDef t_FieldCircularOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_FieldCircularOrbit, a),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, aDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaE),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaEDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaM),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaMDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaV),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaVDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, circularEx),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, circularExDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, circularEy),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, circularEyDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, e),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, eDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, hx),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, hxDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, hy),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, hyDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, i),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, iDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lE),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lEDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lM),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lMDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lv),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lvDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, rightAscensionOfAscendingNode),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, rightAscensionOfAscendingNodeDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, type),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldCircularOrbit__methods_[] = {
        DECLARE_METHOD(t_FieldCircularOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldCircularOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldCircularOrbit, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, eccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldCircularOrbit, eccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldCircularOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlpha, METH_O),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaDot, METH_O),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaE, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaEDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaM, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaMDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaV, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaVDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getCircularEx, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getCircularExDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getCircularEy, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getCircularEyDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getRightAscensionOfAscendingNode, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getRightAscensionOfAscendingNodeDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, hasDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, meanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldCircularOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, toOrbit, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, trueToEccentric, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldCircularOrbit)[] = {
        { Py_tp_methods, t_FieldCircularOrbit__methods_ },
        { Py_tp_init, (void *) t_FieldCircularOrbit_init_ },
        { Py_tp_getset, t_FieldCircularOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldCircularOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::FieldOrbit),
        NULL
      };

      DEFINE_TYPE(FieldCircularOrbit, t_FieldCircularOrbit, FieldCircularOrbit);
      PyObject *t_FieldCircularOrbit::wrap_Object(const FieldCircularOrbit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldCircularOrbit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldCircularOrbit *self = (t_FieldCircularOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldCircularOrbit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldCircularOrbit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldCircularOrbit *self = (t_FieldCircularOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldCircularOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldCircularOrbit), &PY_TYPE_DEF(FieldCircularOrbit), module, "FieldCircularOrbit", 0);
      }

      void t_FieldCircularOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCircularOrbit), "class_", make_descriptor(FieldCircularOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCircularOrbit), "wrapfn_", make_descriptor(t_FieldCircularOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCircularOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldCircularOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldCircularOrbit::initializeClass, 1)))
          return NULL;
        return t_FieldCircularOrbit::wrap_Object(FieldCircularOrbit(((t_FieldCircularOrbit *) arg)->object.this$));
      }
      static PyObject *t_FieldCircularOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldCircularOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldCircularOrbit_of_(t_FieldCircularOrbit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldCircularOrbit_init_(t_FieldCircularOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              INT_CALL(object = FieldCircularOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::CircularOrbit a1((jobject) NULL);
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::CircularOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 10:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
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
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::frames::Frame a7((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a8((jobject) NULL);
            PyTypeObject **p8;
            ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
            PyTypeObject **p9;
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &p8, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
              self->object = object;
              break;
            }
          }
          goto err;
         case 16:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
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
            ::org::orekit::orbits::PositionAngleType a12((jobject) NULL);
            PyTypeObject **p12;
            ::org::orekit::frames::Frame a13((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a14((jobject) NULL);
            PyTypeObject **p14;
            ::org::hipparchus::CalculusFieldElement a15((jobject) NULL);
            PyTypeObject **p15;
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &p14, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_FieldCircularOrbit_addKeplerContribution(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "KK[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_eccentricToMean(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldCircularOrbit::eccentricToMean(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "eccentricToMean", args);
        return NULL;
      }

      static PyObject *t_FieldCircularOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldCircularOrbit::eccentricToTrue(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "eccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_FieldCircularOrbit_getA(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getADot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getAlpha(t_FieldCircularOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAlpha(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAlpha", arg);
        return NULL;
      }

      static PyObject *t_FieldCircularOrbit_getAlphaDot(t_FieldCircularOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAlphaDot(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAlphaDot", arg);
        return NULL;
      }

      static PyObject *t_FieldCircularOrbit_getAlphaE(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getAlphaEDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaEDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getAlphaM(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaM());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getAlphaMDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaMDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getAlphaV(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaV());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getAlphaVDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaVDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getCachedPositionAngleType(t_FieldCircularOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getCircularEx(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCircularEx());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getCircularExDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCircularExDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getCircularEy(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCircularEy());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getCircularEyDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCircularEyDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getE(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getEDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getEquinoctialEx(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getEquinoctialExDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getEquinoctialEy(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getEquinoctialEyDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getHx(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getHxDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getHy(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getHyDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getI(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getIDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLE(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLEDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLM(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLMDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLv(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLvDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getRightAscensionOfAscendingNode(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNode());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getRightAscensionOfAscendingNodeDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNodeDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getType(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_hasDerivatives(t_FieldCircularOrbit *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hasDerivatives());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "hasDerivatives", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_hasRates(t_FieldCircularOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldCircularOrbit_meanToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldCircularOrbit::meanToEccentric(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "meanToEccentric", args);
        return NULL;
      }

      static PyObject *t_FieldCircularOrbit_removeRates(t_FieldCircularOrbit *self)
      {
        FieldCircularOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_FieldCircularOrbit::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldCircularOrbit_shiftedBy(t_FieldCircularOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldCircularOrbit result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldCircularOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldCircularOrbit result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldCircularOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_toOrbit(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::CircularOrbit result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toOrbit());
          return ::org::orekit::orbits::t_CircularOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "toOrbit", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_toString(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_trueToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldCircularOrbit::trueToEccentric(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "trueToEccentric", args);
        return NULL;
      }
      static PyObject *t_FieldCircularOrbit_get__parameters_(t_FieldCircularOrbit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldCircularOrbit_get__a(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__aDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getADot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaE(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaEDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaM(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaMDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaV(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaV());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaVDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaVDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__cachedPositionAngleType(t_FieldCircularOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__circularEx(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCircularEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__circularExDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCircularExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__circularEy(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCircularEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__circularEyDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCircularEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__e(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__eDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__equinoctialEx(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__equinoctialExDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__equinoctialEy(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__equinoctialEyDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__hx(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__hxDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHxDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__hy(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__hyDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__i(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__iDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getIDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lE(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lEDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lM(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lMDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lv(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lvDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLvDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__rightAscensionOfAscendingNode(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNode());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__rightAscensionOfAscendingNodeDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNodeDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__type(t_FieldCircularOrbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/PythonKalmanEstimation.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonKalmanEstimation::class$ = NULL;
        jmethodID *PythonKalmanEstimation::mids$ = NULL;
        bool PythonKalmanEstimation::live$ = false;

        jclass PythonKalmanEstimation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonKalmanEstimation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getCorrectedMeasurement_5a90ceef60f482f1] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_fa9cea0faefb9a31] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_85703d13e302437e] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimatedMeasurementsParameters_bd51074bfd9d41da] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_bd51074bfd9d41da] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_bd51074bfd9d41da] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_688b496048ff947b] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_aab4fbf77867daa8] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_688b496048ff947b] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_688b496048ff947b] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_688b496048ff947b] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_688b496048ff947b] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_5a90ceef60f482f1] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedSpacecraftStates_fa9cea0faefb9a31] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonKalmanEstimation::PythonKalmanEstimation() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonKalmanEstimation::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonKalmanEstimation::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonKalmanEstimation::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        static PyObject *t_PythonKalmanEstimation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonKalmanEstimation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonKalmanEstimation_init_(t_PythonKalmanEstimation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonKalmanEstimation_finalize(t_PythonKalmanEstimation *self);
        static PyObject *t_PythonKalmanEstimation_pythonExtension(t_PythonKalmanEstimation *self, PyObject *args);
        static jobject JNICALL t_PythonKalmanEstimation_getCorrectedMeasurement0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getCorrectedSpacecraftStates1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getCurrentDate2(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonKalmanEstimation_getCurrentMeasurementNumber3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getEstimatedMeasurementsParameters4(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getEstimatedOrbitalParameters5(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getEstimatedPropagationParameters6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalEstimatedCovarianceMatrix7(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalEstimatedState8(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalInnovationCovarianceMatrix9(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalKalmanGain10(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalMeasurementJacobian11(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalStateTransitionMatrix12(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPredictedMeasurement13(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonKalmanEstimation_getPredictedSpacecraftStates14(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonKalmanEstimation_pythonDecRef15(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonKalmanEstimation_get__self(t_PythonKalmanEstimation *self, void *data);
        static PyGetSetDef t_PythonKalmanEstimation__fields_[] = {
          DECLARE_GET_FIELD(t_PythonKalmanEstimation, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonKalmanEstimation__methods_[] = {
          DECLARE_METHOD(t_PythonKalmanEstimation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonKalmanEstimation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonKalmanEstimation, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonKalmanEstimation, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonKalmanEstimation)[] = {
          { Py_tp_methods, t_PythonKalmanEstimation__methods_ },
          { Py_tp_init, (void *) t_PythonKalmanEstimation_init_ },
          { Py_tp_getset, t_PythonKalmanEstimation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonKalmanEstimation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonKalmanEstimation, t_PythonKalmanEstimation, PythonKalmanEstimation);

        void t_PythonKalmanEstimation::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonKalmanEstimation), &PY_TYPE_DEF(PythonKalmanEstimation), module, "PythonKalmanEstimation", 1);
        }

        void t_PythonKalmanEstimation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonKalmanEstimation), "class_", make_descriptor(PythonKalmanEstimation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonKalmanEstimation), "wrapfn_", make_descriptor(t_PythonKalmanEstimation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonKalmanEstimation), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonKalmanEstimation::initializeClass);
          JNINativeMethod methods[] = {
            { "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;", (void *) t_PythonKalmanEstimation_getCorrectedMeasurement0 },
            { "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonKalmanEstimation_getCorrectedSpacecraftStates1 },
            { "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonKalmanEstimation_getCurrentDate2 },
            { "getCurrentMeasurementNumber", "()I", (void *) t_PythonKalmanEstimation_getCurrentMeasurementNumber3 },
            { "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;", (void *) t_PythonKalmanEstimation_getEstimatedMeasurementsParameters4 },
            { "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;", (void *) t_PythonKalmanEstimation_getEstimatedOrbitalParameters5 },
            { "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;", (void *) t_PythonKalmanEstimation_getEstimatedPropagationParameters6 },
            { "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonKalmanEstimation_getPhysicalEstimatedCovarianceMatrix7 },
            { "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;", (void *) t_PythonKalmanEstimation_getPhysicalEstimatedState8 },
            { "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonKalmanEstimation_getPhysicalInnovationCovarianceMatrix9 },
            { "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonKalmanEstimation_getPhysicalKalmanGain10 },
            { "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonKalmanEstimation_getPhysicalMeasurementJacobian11 },
            { "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonKalmanEstimation_getPhysicalStateTransitionMatrix12 },
            { "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;", (void *) t_PythonKalmanEstimation_getPredictedMeasurement13 },
            { "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonKalmanEstimation_getPredictedSpacecraftStates14 },
            { "pythonDecRef", "()V", (void *) t_PythonKalmanEstimation_pythonDecRef15 },
          };
          env->registerNatives(cls, methods, 16);
        }

        static PyObject *t_PythonKalmanEstimation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonKalmanEstimation::initializeClass, 1)))
            return NULL;
          return t_PythonKalmanEstimation::wrap_Object(PythonKalmanEstimation(((t_PythonKalmanEstimation *) arg)->object.this$));
        }
        static PyObject *t_PythonKalmanEstimation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonKalmanEstimation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonKalmanEstimation_init_(t_PythonKalmanEstimation *self, PyObject *args, PyObject *kwds)
        {
          PythonKalmanEstimation object((jobject) NULL);

          INT_CALL(object = PythonKalmanEstimation());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonKalmanEstimation_finalize(t_PythonKalmanEstimation *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonKalmanEstimation_pythonExtension(t_PythonKalmanEstimation *self, PyObject *args)
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

        static jobject JNICALL t_PythonKalmanEstimation_getCorrectedMeasurement0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getCorrectedMeasurement", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &value))
          {
            throwTypeError("getCorrectedMeasurement", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getCorrectedSpacecraftStates1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getCorrectedSpacecraftStates", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            throwTypeError("getCorrectedSpacecraftStates", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getCurrentDate2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getCurrentDate", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getCurrentDate", result);
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

        static jint JNICALL t_PythonKalmanEstimation_getCurrentMeasurementNumber3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getCurrentMeasurementNumber", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getCurrentMeasurementNumber", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonKalmanEstimation_getEstimatedMeasurementsParameters4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getEstimatedMeasurementsParameters", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriversList::initializeClass, &value))
          {
            throwTypeError("getEstimatedMeasurementsParameters", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getEstimatedOrbitalParameters5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getEstimatedOrbitalParameters", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriversList::initializeClass, &value))
          {
            throwTypeError("getEstimatedOrbitalParameters", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getEstimatedPropagationParameters6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getEstimatedPropagationParameters", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriversList::initializeClass, &value))
          {
            throwTypeError("getEstimatedPropagationParameters", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalEstimatedCovarianceMatrix7(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPhysicalEstimatedCovarianceMatrix", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getPhysicalEstimatedCovarianceMatrix", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalEstimatedState8(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPhysicalEstimatedState", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealVector::initializeClass, &value))
          {
            throwTypeError("getPhysicalEstimatedState", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalInnovationCovarianceMatrix9(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPhysicalInnovationCovarianceMatrix", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getPhysicalInnovationCovarianceMatrix", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalKalmanGain10(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPhysicalKalmanGain", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getPhysicalKalmanGain", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalMeasurementJacobian11(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPhysicalMeasurementJacobian", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getPhysicalMeasurementJacobian", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPhysicalStateTransitionMatrix12(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPhysicalStateTransitionMatrix", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getPhysicalStateTransitionMatrix", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPredictedMeasurement13(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPredictedMeasurement", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &value))
          {
            throwTypeError("getPredictedMeasurement", result);
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

        static jobject JNICALL t_PythonKalmanEstimation_getPredictedSpacecraftStates14(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPredictedSpacecraftStates", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            throwTypeError("getPredictedSpacecraftStates", result);
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

        static void JNICALL t_PythonKalmanEstimation_pythonDecRef15(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonKalmanEstimation::mids$[PythonKalmanEstimation::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonKalmanEstimation_get__self(t_PythonKalmanEstimation *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/tdm/Observation.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *Observation::class$ = NULL;
            jmethodID *Observation::mids$ = NULL;
            bool Observation::live$ = false;

            jclass Observation::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/Observation");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_2d550fb141a705f2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;Lorg/orekit/time/AbsoluteDate;D)V");
                mids$[mid_getEpoch_85703d13e302437e] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMeasurement_dff5885c2c873297] = env->getMethodID(cls, "getMeasurement", "()D");
                mids$[mid_getType_e58593622c19a861] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            Observation::Observation(const ::org::orekit::files::ccsds::ndm::tdm::ObservationType & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2d550fb141a705f2, a0.this$, a1.this$, a2)) {}

            ::org::orekit::time::AbsoluteDate Observation::getEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_85703d13e302437e]));
            }

            jdouble Observation::getMeasurement() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeasurement_dff5885c2c873297]);
            }

            ::org::orekit::files::ccsds::ndm::tdm::ObservationType Observation::getType() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::ObservationType(env->callObjectMethod(this$, mids$[mid_getType_e58593622c19a861]));
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
            static PyObject *t_Observation_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Observation_instance_(PyTypeObject *type, PyObject *arg);
            static int t_Observation_init_(t_Observation *self, PyObject *args, PyObject *kwds);
            static PyObject *t_Observation_getEpoch(t_Observation *self);
            static PyObject *t_Observation_getMeasurement(t_Observation *self);
            static PyObject *t_Observation_getType(t_Observation *self);
            static PyObject *t_Observation_get__epoch(t_Observation *self, void *data);
            static PyObject *t_Observation_get__measurement(t_Observation *self, void *data);
            static PyObject *t_Observation_get__type(t_Observation *self, void *data);
            static PyGetSetDef t_Observation__fields_[] = {
              DECLARE_GET_FIELD(t_Observation, epoch),
              DECLARE_GET_FIELD(t_Observation, measurement),
              DECLARE_GET_FIELD(t_Observation, type),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_Observation__methods_[] = {
              DECLARE_METHOD(t_Observation, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Observation, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Observation, getEpoch, METH_NOARGS),
              DECLARE_METHOD(t_Observation, getMeasurement, METH_NOARGS),
              DECLARE_METHOD(t_Observation, getType, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Observation)[] = {
              { Py_tp_methods, t_Observation__methods_ },
              { Py_tp_init, (void *) t_Observation_init_ },
              { Py_tp_getset, t_Observation__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Observation)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(Observation, t_Observation, Observation);

            void t_Observation::install(PyObject *module)
            {
              installType(&PY_TYPE(Observation), &PY_TYPE_DEF(Observation), module, "Observation", 0);
            }

            void t_Observation::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Observation), "class_", make_descriptor(Observation::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Observation), "wrapfn_", make_descriptor(t_Observation::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Observation), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_Observation_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Observation::initializeClass, 1)))
                return NULL;
              return t_Observation::wrap_Object(Observation(((t_Observation *) arg)->object.this$));
            }
            static PyObject *t_Observation_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Observation::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_Observation_init_(t_Observation *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::tdm::ObservationType a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jdouble a2;
              Observation object((jobject) NULL);

              if (!parseArgs(args, "KkD", ::org::orekit::files::ccsds::ndm::tdm::ObservationType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_ObservationType::parameters_, &a1, &a2))
              {
                INT_CALL(object = Observation(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_Observation_getEpoch(t_Observation *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_Observation_getMeasurement(t_Observation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeasurement());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_Observation_getType(t_Observation *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::ObservationType result((jobject) NULL);
              OBJ_CALL(result = self->object.getType());
              return ::org::orekit::files::ccsds::ndm::tdm::t_ObservationType::wrap_Object(result);
            }

            static PyObject *t_Observation_get__epoch(t_Observation *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_Observation_get__measurement(t_Observation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeasurement());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_Observation_get__type(t_Observation *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::ObservationType value((jobject) NULL);
              OBJ_CALL(value = self->object.getType());
              return ::org::orekit::files::ccsds::ndm::tdm::t_ObservationType::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/function/Supplier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace function {

      ::java::lang::Class *Supplier::class$ = NULL;
      jmethodID *Supplier::mids$ = NULL;
      bool Supplier::live$ = false;

      jclass Supplier::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/function/Supplier");

          mids$ = new jmethodID[max_mid];
          mids$[mid_get_4d26fd885228c716] = env->getMethodID(cls, "get", "()Ljava/lang/Object;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::Object Supplier::get$() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_4d26fd885228c716]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    namespace function {
      static PyObject *t_Supplier_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Supplier_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Supplier_of_(t_Supplier *self, PyObject *args);
      static PyObject *t_Supplier_get(t_Supplier *self);
      static PyObject *t_Supplier_get__parameters_(t_Supplier *self, void *data);
      static PyGetSetDef t_Supplier__fields_[] = {
        DECLARE_GET_FIELD(t_Supplier, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Supplier__methods_[] = {
        DECLARE_METHOD(t_Supplier, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Supplier, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Supplier, of_, METH_VARARGS),
        DECLARE_METHOD(t_Supplier, get, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Supplier)[] = {
        { Py_tp_methods, t_Supplier__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Supplier__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Supplier)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Supplier, t_Supplier, Supplier);
      PyObject *t_Supplier::wrap_Object(const Supplier& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Supplier::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Supplier *self = (t_Supplier *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Supplier::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Supplier::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Supplier *self = (t_Supplier *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Supplier::install(PyObject *module)
      {
        installType(&PY_TYPE(Supplier), &PY_TYPE_DEF(Supplier), module, "Supplier", 0);
      }

      void t_Supplier::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Supplier), "class_", make_descriptor(Supplier::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Supplier), "wrapfn_", make_descriptor(t_Supplier::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Supplier), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Supplier_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Supplier::initializeClass, 1)))
          return NULL;
        return t_Supplier::wrap_Object(Supplier(((t_Supplier *) arg)->object.this$));
      }
      static PyObject *t_Supplier_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Supplier::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Supplier_of_(t_Supplier *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Supplier_get(t_Supplier *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.get$());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }
      static PyObject *t_Supplier_get__parameters_(t_Supplier *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}

#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealVectorFormat.h"
#include "java/text/FieldPosition.h"
#include "java/util/Locale.h"
#include "java/text/ParsePosition.h"
#include "java/text/NumberFormat.h"
#include "java/lang/StringBuffer.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/ArrayRealVector.h"
#include "org/hipparchus/linear/RealVectorFormat.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealVectorFormat::class$ = NULL;
      jmethodID *RealVectorFormat::mids$ = NULL;
      bool RealVectorFormat::live$ = false;

      jclass RealVectorFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealVectorFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_b7f3d50b51ef7518] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_ee9345b4af8c40df] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_init$_d047b7641facca84] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/text/NumberFormat;)V");
          mids$[mid_format_f977a35aa156a8cf] = env->getMethodID(cls, "format", "(Lorg/hipparchus/linear/RealVector;)Ljava/lang/String;");
          mids$[mid_format_abe2e36bc146cee2] = env->getMethodID(cls, "format", "(Lorg/hipparchus/linear/RealVector;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getAvailableLocales_8d2cd0b971cc7b85] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getFormat_87ffffc449cd25a5] = env->getMethodID(cls, "getFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getPrefix_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getPrefix", "()Ljava/lang/String;");
          mids$[mid_getRealVectorFormat_66f031d367cbb5ab] = env->getStaticMethodID(cls, "getRealVectorFormat", "()Lorg/hipparchus/linear/RealVectorFormat;");
          mids$[mid_getRealVectorFormat_b8faa7141586f40a] = env->getStaticMethodID(cls, "getRealVectorFormat", "(Ljava/util/Locale;)Lorg/hipparchus/linear/RealVectorFormat;");
          mids$[mid_getSeparator_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSeparator", "()Ljava/lang/String;");
          mids$[mid_getSuffix_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSuffix", "()Ljava/lang/String;");
          mids$[mid_parse_73de0b2a5c7b5aad] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_parse_b466216443db2b86] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/linear/ArrayRealVector;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RealVectorFormat::RealVectorFormat() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      RealVectorFormat::RealVectorFormat(const ::java::text::NumberFormat & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b7f3d50b51ef7518, a0.this$)) {}

      RealVectorFormat::RealVectorFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ee9345b4af8c40df, a0.this$, a1.this$, a2.this$)) {}

      RealVectorFormat::RealVectorFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::text::NumberFormat & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d047b7641facca84, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      ::java::lang::String RealVectorFormat::format(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_f977a35aa156a8cf], a0.this$));
      }

      ::java::lang::StringBuffer RealVectorFormat::format(const ::org::hipparchus::linear::RealVector & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_abe2e36bc146cee2], a0.this$, a1.this$, a2.this$));
      }

      JArray< ::java::util::Locale > RealVectorFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_8d2cd0b971cc7b85]));
      }

      ::java::text::NumberFormat RealVectorFormat::getFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getFormat_87ffffc449cd25a5]));
      }

      ::java::lang::String RealVectorFormat::getPrefix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrefix_1c1fa1e935d6cdcf]));
      }

      RealVectorFormat RealVectorFormat::getRealVectorFormat()
      {
        jclass cls = env->getClass(initializeClass);
        return RealVectorFormat(env->callStaticObjectMethod(cls, mids$[mid_getRealVectorFormat_66f031d367cbb5ab]));
      }

      RealVectorFormat RealVectorFormat::getRealVectorFormat(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return RealVectorFormat(env->callStaticObjectMethod(cls, mids$[mid_getRealVectorFormat_b8faa7141586f40a], a0.this$));
      }

      ::java::lang::String RealVectorFormat::getSeparator() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSeparator_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String RealVectorFormat::getSuffix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSuffix_1c1fa1e935d6cdcf]));
      }

      ::org::hipparchus::linear::ArrayRealVector RealVectorFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::linear::ArrayRealVector(env->callObjectMethod(this$, mids$[mid_parse_73de0b2a5c7b5aad], a0.this$));
      }

      ::org::hipparchus::linear::ArrayRealVector RealVectorFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::linear::ArrayRealVector(env->callObjectMethod(this$, mids$[mid_parse_b466216443db2b86], a0.this$, a1.this$));
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
      static PyObject *t_RealVectorFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVectorFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RealVectorFormat_init_(t_RealVectorFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RealVectorFormat_format(t_RealVectorFormat *self, PyObject *args);
      static PyObject *t_RealVectorFormat_getAvailableLocales(PyTypeObject *type);
      static PyObject *t_RealVectorFormat_getFormat(t_RealVectorFormat *self);
      static PyObject *t_RealVectorFormat_getPrefix(t_RealVectorFormat *self);
      static PyObject *t_RealVectorFormat_getRealVectorFormat(PyTypeObject *type, PyObject *args);
      static PyObject *t_RealVectorFormat_getSeparator(t_RealVectorFormat *self);
      static PyObject *t_RealVectorFormat_getSuffix(t_RealVectorFormat *self);
      static PyObject *t_RealVectorFormat_parse(t_RealVectorFormat *self, PyObject *args);
      static PyObject *t_RealVectorFormat_get__availableLocales(t_RealVectorFormat *self, void *data);
      static PyObject *t_RealVectorFormat_get__prefix(t_RealVectorFormat *self, void *data);
      static PyObject *t_RealVectorFormat_get__realVectorFormat(t_RealVectorFormat *self, void *data);
      static PyObject *t_RealVectorFormat_get__separator(t_RealVectorFormat *self, void *data);
      static PyObject *t_RealVectorFormat_get__suffix(t_RealVectorFormat *self, void *data);
      static PyGetSetDef t_RealVectorFormat__fields_[] = {
        DECLARE_GET_FIELD(t_RealVectorFormat, availableLocales),
        DECLARE_GET_FIELD(t_RealVectorFormat, prefix),
        DECLARE_GET_FIELD(t_RealVectorFormat, realVectorFormat),
        DECLARE_GET_FIELD(t_RealVectorFormat, separator),
        DECLARE_GET_FIELD(t_RealVectorFormat, suffix),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealVectorFormat__methods_[] = {
        DECLARE_METHOD(t_RealVectorFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_RealVectorFormat, getAvailableLocales, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_RealVectorFormat, getFormat, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorFormat, getPrefix, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorFormat, getRealVectorFormat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_RealVectorFormat, getSeparator, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorFormat, getSuffix, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealVectorFormat)[] = {
        { Py_tp_methods, t_RealVectorFormat__methods_ },
        { Py_tp_init, (void *) t_RealVectorFormat_init_ },
        { Py_tp_getset, t_RealVectorFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealVectorFormat)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealVectorFormat, t_RealVectorFormat, RealVectorFormat);

      void t_RealVectorFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(RealVectorFormat), &PY_TYPE_DEF(RealVectorFormat), module, "RealVectorFormat", 0);
      }

      void t_RealVectorFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorFormat), "class_", make_descriptor(RealVectorFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorFormat), "wrapfn_", make_descriptor(t_RealVectorFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealVectorFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealVectorFormat::initializeClass, 1)))
          return NULL;
        return t_RealVectorFormat::wrap_Object(RealVectorFormat(((t_RealVectorFormat *) arg)->object.this$));
      }
      static PyObject *t_RealVectorFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealVectorFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RealVectorFormat_init_(t_RealVectorFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            RealVectorFormat object((jobject) NULL);

            INT_CALL(object = RealVectorFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            RealVectorFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = RealVectorFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            RealVectorFormat object((jobject) NULL);

            if (!parseArgs(args, "sss", &a0, &a1, &a2))
            {
              INT_CALL(object = RealVectorFormat(a0, a1, a2));
              self->object = object;
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
            RealVectorFormat object((jobject) NULL);

            if (!parseArgs(args, "sssk", ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = RealVectorFormat(a0, a1, a2, a3));
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

      static PyObject *t_RealVectorFormat_format(t_RealVectorFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.format(a0));
              return j2p(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealVector::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "format", args);
        return NULL;
      }

      static PyObject *t_RealVectorFormat_getAvailableLocales(PyTypeObject *type)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::linear::RealVectorFormat::getAvailableLocales());
        return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_RealVectorFormat_getFormat(t_RealVectorFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_RealVectorFormat_getPrefix(t_RealVectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrefix());
        return j2p(result);
      }

      static PyObject *t_RealVectorFormat_getRealVectorFormat(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            RealVectorFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::linear::RealVectorFormat::getRealVectorFormat());
            return t_RealVectorFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            RealVectorFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::RealVectorFormat::getRealVectorFormat(a0));
              return t_RealVectorFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getRealVectorFormat", args);
        return NULL;
      }

      static PyObject *t_RealVectorFormat_getSeparator(t_RealVectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSeparator());
        return j2p(result);
      }

      static PyObject *t_RealVectorFormat_getSuffix(t_RealVectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSuffix());
        return j2p(result);
      }

      static PyObject *t_RealVectorFormat_parse(t_RealVectorFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::linear::ArrayRealVector result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::linear::t_ArrayRealVector::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::linear::ArrayRealVector result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::linear::t_ArrayRealVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }

      static PyObject *t_RealVectorFormat_get__availableLocales(t_RealVectorFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_RealVectorFormat_get__prefix(t_RealVectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrefix());
        return j2p(value);
      }

      static PyObject *t_RealVectorFormat_get__realVectorFormat(t_RealVectorFormat *self, void *data)
      {
        RealVectorFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getRealVectorFormat());
        return t_RealVectorFormat::wrap_Object(value);
      }

      static PyObject *t_RealVectorFormat_get__separator(t_RealVectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSeparator());
        return j2p(value);
      }

      static PyObject *t_RealVectorFormat_get__suffix(t_RealVectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSuffix());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/observation/PhaseShiftCorrection.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/ObservationType.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/SatInSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *PhaseShiftCorrection::class$ = NULL;
          jmethodID *PhaseShiftCorrection::mids$ = NULL;
          bool PhaseShiftCorrection::live$ = false;

          jclass PhaseShiftCorrection::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/PhaseShiftCorrection");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_125d8c5f455d179a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/ObservationType;DLjava/util/List;)V");
              mids$[mid_getCorrection_b74f83833fdad017] = env->getMethodID(cls, "getCorrection", "()D");
              mids$[mid_getSatelliteSystem_21bd759cc4a81606] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
              mids$[mid_getSatsCorrected_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSatsCorrected", "()Ljava/util/List;");
              mids$[mid_getTypeObs_eeb5027d2516140e] = env->getMethodID(cls, "getTypeObs", "()Lorg/orekit/gnss/ObservationType;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseShiftCorrection::PhaseShiftCorrection(const ::org::orekit::gnss::SatelliteSystem & a0, const ::org::orekit::gnss::ObservationType & a1, jdouble a2, const ::java::util::List & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_125d8c5f455d179a, a0.this$, a1.this$, a2, a3.this$)) {}

          jdouble PhaseShiftCorrection::getCorrection() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCorrection_b74f83833fdad017]);
          }

          ::org::orekit::gnss::SatelliteSystem PhaseShiftCorrection::getSatelliteSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_21bd759cc4a81606]));
          }

          ::java::util::List PhaseShiftCorrection::getSatsCorrected() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatsCorrected_e62d3bb06d56d7e3]));
          }

          ::org::orekit::gnss::ObservationType PhaseShiftCorrection::getTypeObs() const
          {
            return ::org::orekit::gnss::ObservationType(env->callObjectMethod(this$, mids$[mid_getTypeObs_eeb5027d2516140e]));
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
        namespace observation {
          static PyObject *t_PhaseShiftCorrection_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseShiftCorrection_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseShiftCorrection_init_(t_PhaseShiftCorrection *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseShiftCorrection_getCorrection(t_PhaseShiftCorrection *self);
          static PyObject *t_PhaseShiftCorrection_getSatelliteSystem(t_PhaseShiftCorrection *self);
          static PyObject *t_PhaseShiftCorrection_getSatsCorrected(t_PhaseShiftCorrection *self);
          static PyObject *t_PhaseShiftCorrection_getTypeObs(t_PhaseShiftCorrection *self);
          static PyObject *t_PhaseShiftCorrection_get__correction(t_PhaseShiftCorrection *self, void *data);
          static PyObject *t_PhaseShiftCorrection_get__satelliteSystem(t_PhaseShiftCorrection *self, void *data);
          static PyObject *t_PhaseShiftCorrection_get__satsCorrected(t_PhaseShiftCorrection *self, void *data);
          static PyObject *t_PhaseShiftCorrection_get__typeObs(t_PhaseShiftCorrection *self, void *data);
          static PyGetSetDef t_PhaseShiftCorrection__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseShiftCorrection, correction),
            DECLARE_GET_FIELD(t_PhaseShiftCorrection, satelliteSystem),
            DECLARE_GET_FIELD(t_PhaseShiftCorrection, satsCorrected),
            DECLARE_GET_FIELD(t_PhaseShiftCorrection, typeObs),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseShiftCorrection__methods_[] = {
            DECLARE_METHOD(t_PhaseShiftCorrection, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseShiftCorrection, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseShiftCorrection, getCorrection, METH_NOARGS),
            DECLARE_METHOD(t_PhaseShiftCorrection, getSatelliteSystem, METH_NOARGS),
            DECLARE_METHOD(t_PhaseShiftCorrection, getSatsCorrected, METH_NOARGS),
            DECLARE_METHOD(t_PhaseShiftCorrection, getTypeObs, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseShiftCorrection)[] = {
            { Py_tp_methods, t_PhaseShiftCorrection__methods_ },
            { Py_tp_init, (void *) t_PhaseShiftCorrection_init_ },
            { Py_tp_getset, t_PhaseShiftCorrection__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseShiftCorrection)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseShiftCorrection, t_PhaseShiftCorrection, PhaseShiftCorrection);

          void t_PhaseShiftCorrection::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseShiftCorrection), &PY_TYPE_DEF(PhaseShiftCorrection), module, "PhaseShiftCorrection", 0);
          }

          void t_PhaseShiftCorrection::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseShiftCorrection), "class_", make_descriptor(PhaseShiftCorrection::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseShiftCorrection), "wrapfn_", make_descriptor(t_PhaseShiftCorrection::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseShiftCorrection), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseShiftCorrection_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseShiftCorrection::initializeClass, 1)))
              return NULL;
            return t_PhaseShiftCorrection::wrap_Object(PhaseShiftCorrection(((t_PhaseShiftCorrection *) arg)->object.this$));
          }
          static PyObject *t_PhaseShiftCorrection_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseShiftCorrection::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseShiftCorrection_init_(t_PhaseShiftCorrection *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::ObservationType a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            ::java::util::List a3((jobject) NULL);
            PyTypeObject **p3;
            PhaseShiftCorrection object((jobject) NULL);

            if (!parseArgs(args, "KKDK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &p1, ::org::orekit::gnss::t_ObservationType::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = PhaseShiftCorrection(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseShiftCorrection_getCorrection(t_PhaseShiftCorrection *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCorrection());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_PhaseShiftCorrection_getSatelliteSystem(t_PhaseShiftCorrection *self)
          {
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
          }

          static PyObject *t_PhaseShiftCorrection_getSatsCorrected(t_PhaseShiftCorrection *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatsCorrected());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(SatInSystem));
          }

          static PyObject *t_PhaseShiftCorrection_getTypeObs(t_PhaseShiftCorrection *self)
          {
            ::org::orekit::gnss::ObservationType result((jobject) NULL);
            OBJ_CALL(result = self->object.getTypeObs());
            return ::org::orekit::gnss::t_ObservationType::wrap_Object(result);
          }

          static PyObject *t_PhaseShiftCorrection_get__correction(t_PhaseShiftCorrection *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCorrection());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_PhaseShiftCorrection_get__satelliteSystem(t_PhaseShiftCorrection *self, void *data)
          {
            ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
          }

          static PyObject *t_PhaseShiftCorrection_get__satsCorrected(t_PhaseShiftCorrection *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatsCorrected());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_PhaseShiftCorrection_get__typeObs(t_PhaseShiftCorrection *self, void *data)
          {
            ::org::orekit::gnss::ObservationType value((jobject) NULL);
            OBJ_CALL(value = self->object.getTypeObs());
            return ::org::orekit::gnss::t_ObservationType::wrap_Object(value);
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
          mids$[mid_get_541690f9ee81d3ad] = env->getMethodID(cls, "get", "()Ljava/lang/Object;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::Object Supplier::get$() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_541690f9ee81d3ad]));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RangeRateTroposphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeRateTroposphericDelayModifier::class$ = NULL;
          jmethodID *RangeRateTroposphericDelayModifier::mids$ = NULL;
          bool RangeRateTroposphericDelayModifier::live$ = false;

          jclass RangeRateTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeRateTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4aec4a8aa42e6a4d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;Z)V");
              mids$[mid_modify_f784f7724d44a90a] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_rangeRateErrorTroposphericModel_b8971448fff75978] = env->getMethodID(cls, "rangeRateErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_rangeRateErrorTroposphericModel_9a2cbda6eb51ddd8] = env->getMethodID(cls, "rangeRateErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeRateTroposphericDelayModifier::RangeRateTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0, jboolean a1) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateTroposphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_4aec4a8aa42e6a4d, a0.this$, a1)) {}

          void RangeRateTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_f784f7724d44a90a], a0.this$);
          }

          void RangeRateTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
          }

          jdouble RangeRateTroposphericDelayModifier::rangeRateErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_rangeRateErrorTroposphericModel_b8971448fff75978], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement RangeRateTroposphericDelayModifier::rangeRateErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::FieldSpacecraftState & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_rangeRateErrorTroposphericModel_9a2cbda6eb51ddd8], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_RangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RangeRateTroposphericDelayModifier_init_(t_RangeRateTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeRateTroposphericDelayModifier_modify(t_RangeRateTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_RangeRateTroposphericDelayModifier_modifyWithoutDerivatives(t_RangeRateTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_RangeRateTroposphericDelayModifier_rangeRateErrorTroposphericModel(t_RangeRateTroposphericDelayModifier *self, PyObject *args);

          static PyMethodDef t_RangeRateTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_RangeRateTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_RangeRateTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            DECLARE_METHOD(t_RangeRateTroposphericDelayModifier, rangeRateErrorTroposphericModel, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeRateTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_RangeRateTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_RangeRateTroposphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeRateTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeRateTroposphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(RangeRateTroposphericDelayModifier, t_RangeRateTroposphericDelayModifier, RangeRateTroposphericDelayModifier);

          void t_RangeRateTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeRateTroposphericDelayModifier), &PY_TYPE_DEF(RangeRateTroposphericDelayModifier), module, "RangeRateTroposphericDelayModifier", 0);
          }

          void t_RangeRateTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateTroposphericDelayModifier), "class_", make_descriptor(RangeRateTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateTroposphericDelayModifier), "wrapfn_", make_descriptor(t_RangeRateTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeRateTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_RangeRateTroposphericDelayModifier::wrap_Object(RangeRateTroposphericDelayModifier(((t_RangeRateTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_RangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeRateTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RangeRateTroposphericDelayModifier_init_(t_RangeRateTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            jboolean a1;
            RangeRateTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kZ", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = RangeRateTroposphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeRateTroposphericDelayModifier_modify(t_RangeRateTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_RangeRateTroposphericDelayModifier_modifyWithoutDerivatives(t_RangeRateTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_RangeRateTroposphericDelayModifier_rangeRateErrorTroposphericModel(t_RangeRateTroposphericDelayModifier *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.rangeRateErrorTroposphericModel(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::FieldSpacecraftState a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK[K", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.rangeRateErrorTroposphericModel(a0, a1, a2));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(RangeRateTroposphericDelayModifier), (PyObject *) self, "rangeRateErrorTroposphericModel", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Minus.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Minus::class$ = NULL;
        jmethodID *Minus::mids$ = NULL;
        bool Minus::live$ = false;

        jclass Minus::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Minus");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Minus::Minus() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Minus::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Minus::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_a5332de4d4d64b08], a0.this$));
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
        static PyObject *t_Minus_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Minus_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Minus_init_(t_Minus *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Minus_value(t_Minus *self, PyObject *args);

        static PyMethodDef t_Minus__methods_[] = {
          DECLARE_METHOD(t_Minus, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Minus, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Minus, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Minus)[] = {
          { Py_tp_methods, t_Minus__methods_ },
          { Py_tp_init, (void *) t_Minus_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Minus)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Minus, t_Minus, Minus);

        void t_Minus::install(PyObject *module)
        {
          installType(&PY_TYPE(Minus), &PY_TYPE_DEF(Minus), module, "Minus", 0);
        }

        void t_Minus::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Minus), "class_", make_descriptor(Minus::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Minus), "wrapfn_", make_descriptor(t_Minus::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Minus), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Minus_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Minus::initializeClass, 1)))
            return NULL;
          return t_Minus::wrap_Object(Minus(((t_Minus *) arg)->object.this$));
        }
        static PyObject *t_Minus_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Minus::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Minus_init_(t_Minus *self, PyObject *args, PyObject *kwds)
        {
          Minus object((jobject) NULL);

          INT_CALL(object = Minus());
          self->object = object;

          return 0;
        }

        static PyObject *t_Minus_value(t_Minus *self, PyObject *args)
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
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile.h"
#include "java/util/Map.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *OrekitAttitudeEphemerisFile::class$ = NULL;
        jmethodID *OrekitAttitudeEphemerisFile::mids$ = NULL;
        bool OrekitAttitudeEphemerisFile::live$ = false;

        jclass OrekitAttitudeEphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/OrekitAttitudeEphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addSatellite_e9e7f3c1a12ef622] = env->getMethodID(cls, "addSatellite", "(Ljava/lang/String;)Lorg/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris;");
            mids$[mid_getSatellites_810bed48fafb0b9a] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitAttitudeEphemerisFile::OrekitAttitudeEphemerisFile() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris OrekitAttitudeEphemerisFile::addSatellite(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris(env->callObjectMethod(this$, mids$[mid_addSatellite_e9e7f3c1a12ef622], a0.this$));
        }

        ::java::util::Map OrekitAttitudeEphemerisFile::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_810bed48fafb0b9a]));
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
        static PyObject *t_OrekitAttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitAttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitAttitudeEphemerisFile_init_(t_OrekitAttitudeEphemerisFile *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitAttitudeEphemerisFile_addSatellite(t_OrekitAttitudeEphemerisFile *self, PyObject *arg);
        static PyObject *t_OrekitAttitudeEphemerisFile_getSatellites(t_OrekitAttitudeEphemerisFile *self);
        static PyObject *t_OrekitAttitudeEphemerisFile_get__satellites(t_OrekitAttitudeEphemerisFile *self, void *data);
        static PyGetSetDef t_OrekitAttitudeEphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile, satellites),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitAttitudeEphemerisFile__methods_[] = {
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile, addSatellite, METH_O),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile, getSatellites, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitAttitudeEphemerisFile)[] = {
          { Py_tp_methods, t_OrekitAttitudeEphemerisFile__methods_ },
          { Py_tp_init, (void *) t_OrekitAttitudeEphemerisFile_init_ },
          { Py_tp_getset, t_OrekitAttitudeEphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitAttitudeEphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitAttitudeEphemerisFile, t_OrekitAttitudeEphemerisFile, OrekitAttitudeEphemerisFile);

        void t_OrekitAttitudeEphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitAttitudeEphemerisFile), &PY_TYPE_DEF(OrekitAttitudeEphemerisFile), module, "OrekitAttitudeEphemerisFile", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile), "OrekitSatelliteAttitudeEphemeris", make_descriptor(&PY_TYPE_DEF(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile), "OrekitAttitudeEphemerisSegment", make_descriptor(&PY_TYPE_DEF(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment)));
        }

        void t_OrekitAttitudeEphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile), "class_", make_descriptor(OrekitAttitudeEphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile), "wrapfn_", make_descriptor(t_OrekitAttitudeEphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitAttitudeEphemerisFile::initializeClass, 1)))
            return NULL;
          return t_OrekitAttitudeEphemerisFile::wrap_Object(OrekitAttitudeEphemerisFile(((t_OrekitAttitudeEphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_OrekitAttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitAttitudeEphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitAttitudeEphemerisFile_init_(t_OrekitAttitudeEphemerisFile *self, PyObject *args, PyObject *kwds)
        {
          OrekitAttitudeEphemerisFile object((jobject) NULL);

          INT_CALL(object = OrekitAttitudeEphemerisFile());
          self->object = object;

          return 0;
        }

        static PyObject *t_OrekitAttitudeEphemerisFile_addSatellite(t_OrekitAttitudeEphemerisFile *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.addSatellite(a0));
            return ::org::orekit::files::general::t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addSatellite", arg);
          return NULL;
        }

        static PyObject *t_OrekitAttitudeEphemerisFile_getSatellites(t_OrekitAttitudeEphemerisFile *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::general::PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile_get__satellites(t_OrekitAttitudeEphemerisFile *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/StepEndEventState.h"
#include "org/hipparchus/ode/events/ODEStepEndHandler.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/EventState.h"
#include "org/hipparchus/ode/events/EventOccurrence.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *StepEndEventState::class$ = NULL;
        jmethodID *StepEndEventState::mids$ = NULL;
        bool StepEndEventState::live$ = false;

        jclass StepEndEventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/StepEndEventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_00cecfec8aa9403e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/ODEStepEndHandler;)V");
            mids$[mid_doEvent_1eca994d89f760c7] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/events/EventOccurrence;");
            mids$[mid_evaluateStep_f2bd5620f6269916] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)Z");
            mids$[mid_getEventTime_b74f83833fdad017] = env->getMethodID(cls, "getEventTime", "()D");
            mids$[mid_getHandler_67df44026d6b5e99] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/ODEStepEndHandler;");
            mids$[mid_init_a7556bd72cab73f1] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");
            mids$[mid_setStepEnd_8ba9fe7a847cecad] = env->getMethodID(cls, "setStepEnd", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepEndEventState::StepEndEventState(const ::org::hipparchus::ode::events::ODEStepEndHandler & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_00cecfec8aa9403e, a0.this$)) {}

        ::org::hipparchus::ode::events::EventOccurrence StepEndEventState::doEvent(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::EventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_1eca994d89f760c7], a0.this$));
        }

        jboolean StepEndEventState::evaluateStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_f2bd5620f6269916], a0.this$);
        }

        jdouble StepEndEventState::getEventTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEventTime_b74f83833fdad017]);
        }

        ::org::hipparchus::ode::events::ODEStepEndHandler StepEndEventState::getHandler() const
        {
          return ::org::hipparchus::ode::events::ODEStepEndHandler(env->callObjectMethod(this$, mids$[mid_getHandler_67df44026d6b5e99]));
        }

        void StepEndEventState::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_a7556bd72cab73f1], a0.this$, a1);
        }

        void StepEndEventState::setStepEnd(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepEnd_8ba9fe7a847cecad], a0);
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
        static PyObject *t_StepEndEventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepEndEventState_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StepEndEventState_init_(t_StepEndEventState *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StepEndEventState_doEvent(t_StepEndEventState *self, PyObject *arg);
        static PyObject *t_StepEndEventState_evaluateStep(t_StepEndEventState *self, PyObject *arg);
        static PyObject *t_StepEndEventState_getEventTime(t_StepEndEventState *self);
        static PyObject *t_StepEndEventState_getHandler(t_StepEndEventState *self);
        static PyObject *t_StepEndEventState_init(t_StepEndEventState *self, PyObject *args);
        static PyObject *t_StepEndEventState_setStepEnd(t_StepEndEventState *self, PyObject *arg);
        static PyObject *t_StepEndEventState_get__eventTime(t_StepEndEventState *self, void *data);
        static PyObject *t_StepEndEventState_get__handler(t_StepEndEventState *self, void *data);
        static int t_StepEndEventState_set__stepEnd(t_StepEndEventState *self, PyObject *arg, void *data);
        static PyGetSetDef t_StepEndEventState__fields_[] = {
          DECLARE_GET_FIELD(t_StepEndEventState, eventTime),
          DECLARE_GET_FIELD(t_StepEndEventState, handler),
          DECLARE_SET_FIELD(t_StepEndEventState, stepEnd),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StepEndEventState__methods_[] = {
          DECLARE_METHOD(t_StepEndEventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepEndEventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepEndEventState, doEvent, METH_O),
          DECLARE_METHOD(t_StepEndEventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_StepEndEventState, getEventTime, METH_NOARGS),
          DECLARE_METHOD(t_StepEndEventState, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_StepEndEventState, init, METH_VARARGS),
          DECLARE_METHOD(t_StepEndEventState, setStepEnd, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepEndEventState)[] = {
          { Py_tp_methods, t_StepEndEventState__methods_ },
          { Py_tp_init, (void *) t_StepEndEventState_init_ },
          { Py_tp_getset, t_StepEndEventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepEndEventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StepEndEventState, t_StepEndEventState, StepEndEventState);

        void t_StepEndEventState::install(PyObject *module)
        {
          installType(&PY_TYPE(StepEndEventState), &PY_TYPE_DEF(StepEndEventState), module, "StepEndEventState", 0);
        }

        void t_StepEndEventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepEndEventState), "class_", make_descriptor(StepEndEventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepEndEventState), "wrapfn_", make_descriptor(t_StepEndEventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepEndEventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StepEndEventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepEndEventState::initializeClass, 1)))
            return NULL;
          return t_StepEndEventState::wrap_Object(StepEndEventState(((t_StepEndEventState *) arg)->object.this$));
        }
        static PyObject *t_StepEndEventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepEndEventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StepEndEventState_init_(t_StepEndEventState *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::ODEStepEndHandler a0((jobject) NULL);
          StepEndEventState object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::ode::events::ODEStepEndHandler::initializeClass, &a0))
          {
            INT_CALL(object = StepEndEventState(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_StepEndEventState_doEvent(t_StepEndEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::events::EventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::hipparchus::ode::events::t_EventOccurrence::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_StepEndEventState_evaluateStep(t_StepEndEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_StepEndEventState_getEventTime(t_StepEndEventState *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getEventTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StepEndEventState_getHandler(t_StepEndEventState *self)
        {
          ::org::hipparchus::ode::events::ODEStepEndHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_ODEStepEndHandler::wrap_Object(result);
        }

        static PyObject *t_StepEndEventState_init(t_StepEndEventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_StepEndEventState_setStepEnd(t_StepEndEventState *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setStepEnd(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStepEnd", arg);
          return NULL;
        }

        static PyObject *t_StepEndEventState_get__eventTime(t_StepEndEventState *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getEventTime());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StepEndEventState_get__handler(t_StepEndEventState *self, void *data)
        {
          ::org::hipparchus::ode::events::ODEStepEndHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_ODEStepEndHandler::wrap_Object(value);
        }

        static int t_StepEndEventState_set__stepEnd(t_StepEndEventState *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setStepEnd(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "stepEnd", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/FieldInertiaAxis.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/attitudes/FieldInertiaAxis.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FieldInertiaAxis::class$ = NULL;
      jmethodID *FieldInertiaAxis::mids$ = NULL;
      bool FieldInertiaAxis::live$ = false;

      jclass FieldInertiaAxis::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FieldInertiaAxis");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0602f39e097cca02] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_getA_ff5ac73a7b43eddd] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getI_81520b552cb3fa26] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_negate_4039efd27b3cc788] = env->getMethodID(cls, "negate", "()Lorg/orekit/attitudes/FieldInertiaAxis;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldInertiaAxis::FieldInertiaAxis(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0602f39e097cca02, a0.this$, a1.this$)) {}

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldInertiaAxis::getA() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getA_ff5ac73a7b43eddd]));
      }

      ::org::hipparchus::CalculusFieldElement FieldInertiaAxis::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_81520b552cb3fa26]));
      }

      FieldInertiaAxis FieldInertiaAxis::negate() const
      {
        return FieldInertiaAxis(env->callObjectMethod(this$, mids$[mid_negate_4039efd27b3cc788]));
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
      static PyObject *t_FieldInertiaAxis_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldInertiaAxis_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldInertiaAxis_of_(t_FieldInertiaAxis *self, PyObject *args);
      static int t_FieldInertiaAxis_init_(t_FieldInertiaAxis *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldInertiaAxis_getA(t_FieldInertiaAxis *self);
      static PyObject *t_FieldInertiaAxis_getI(t_FieldInertiaAxis *self);
      static PyObject *t_FieldInertiaAxis_negate(t_FieldInertiaAxis *self);
      static PyObject *t_FieldInertiaAxis_get__a(t_FieldInertiaAxis *self, void *data);
      static PyObject *t_FieldInertiaAxis_get__i(t_FieldInertiaAxis *self, void *data);
      static PyObject *t_FieldInertiaAxis_get__parameters_(t_FieldInertiaAxis *self, void *data);
      static PyGetSetDef t_FieldInertiaAxis__fields_[] = {
        DECLARE_GET_FIELD(t_FieldInertiaAxis, a),
        DECLARE_GET_FIELD(t_FieldInertiaAxis, i),
        DECLARE_GET_FIELD(t_FieldInertiaAxis, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldInertiaAxis__methods_[] = {
        DECLARE_METHOD(t_FieldInertiaAxis, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldInertiaAxis, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldInertiaAxis, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldInertiaAxis, getA, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertiaAxis, getI, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertiaAxis, negate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldInertiaAxis)[] = {
        { Py_tp_methods, t_FieldInertiaAxis__methods_ },
        { Py_tp_init, (void *) t_FieldInertiaAxis_init_ },
        { Py_tp_getset, t_FieldInertiaAxis__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldInertiaAxis)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldInertiaAxis, t_FieldInertiaAxis, FieldInertiaAxis);
      PyObject *t_FieldInertiaAxis::wrap_Object(const FieldInertiaAxis& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldInertiaAxis::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldInertiaAxis *self = (t_FieldInertiaAxis *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldInertiaAxis::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldInertiaAxis::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldInertiaAxis *self = (t_FieldInertiaAxis *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldInertiaAxis::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldInertiaAxis), &PY_TYPE_DEF(FieldInertiaAxis), module, "FieldInertiaAxis", 0);
      }

      void t_FieldInertiaAxis::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertiaAxis), "class_", make_descriptor(FieldInertiaAxis::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertiaAxis), "wrapfn_", make_descriptor(t_FieldInertiaAxis::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertiaAxis), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldInertiaAxis_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldInertiaAxis::initializeClass, 1)))
          return NULL;
        return t_FieldInertiaAxis::wrap_Object(FieldInertiaAxis(((t_FieldInertiaAxis *) arg)->object.this$));
      }
      static PyObject *t_FieldInertiaAxis_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldInertiaAxis::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldInertiaAxis_of_(t_FieldInertiaAxis *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldInertiaAxis_init_(t_FieldInertiaAxis *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
        PyTypeObject **p1;
        FieldInertiaAxis object((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
        {
          INT_CALL(object = FieldInertiaAxis(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldInertiaAxis_getA(t_FieldInertiaAxis *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getA());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertiaAxis_getI(t_FieldInertiaAxis *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getI());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldInertiaAxis_negate(t_FieldInertiaAxis *self)
      {
        FieldInertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_FieldInertiaAxis::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldInertiaAxis_get__parameters_(t_FieldInertiaAxis *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldInertiaAxis_get__a(t_FieldInertiaAxis *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldInertiaAxis_get__i(t_FieldInertiaAxis *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/AbstractWriter.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/lang/Class.h"
#include "java/io/IOException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *AbstractWriter::class$ = NULL;
          jmethodID *AbstractWriter::mids$ = NULL;
          bool AbstractWriter::live$ = false;

          jclass AbstractWriter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/AbstractWriter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_enterSection_fb222e851cd27682] = env->getMethodID(cls, "enterSection", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
              mids$[mid_exitSection_fb222e851cd27682] = env->getMethodID(cls, "exitSection", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
              mids$[mid_write_fb222e851cd27682] = env->getMethodID(cls, "write", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
              mids$[mid_intArrayToString_e06025bc23ba70af] = env->getMethodID(cls, "intArrayToString", "([I)Ljava/lang/String;");
              mids$[mid_writeContent_fb222e851cd27682] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void AbstractWriter::enterSection(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_enterSection_fb222e851cd27682], a0.this$);
          }

          void AbstractWriter::exitSection(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_exitSection_fb222e851cd27682], a0.this$);
          }

          void AbstractWriter::write(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_write_fb222e851cd27682], a0.this$);
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
        namespace section {
          static PyObject *t_AbstractWriter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractWriter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractWriter_enterSection(t_AbstractWriter *self, PyObject *arg);
          static PyObject *t_AbstractWriter_exitSection(t_AbstractWriter *self, PyObject *arg);
          static PyObject *t_AbstractWriter_write(t_AbstractWriter *self, PyObject *arg);

          static PyMethodDef t_AbstractWriter__methods_[] = {
            DECLARE_METHOD(t_AbstractWriter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractWriter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractWriter, enterSection, METH_O),
            DECLARE_METHOD(t_AbstractWriter, exitSection, METH_O),
            DECLARE_METHOD(t_AbstractWriter, write, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractWriter)[] = {
            { Py_tp_methods, t_AbstractWriter__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractWriter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractWriter, t_AbstractWriter, AbstractWriter);

          void t_AbstractWriter::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractWriter), &PY_TYPE_DEF(AbstractWriter), module, "AbstractWriter", 0);
          }

          void t_AbstractWriter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWriter), "class_", make_descriptor(AbstractWriter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWriter), "wrapfn_", make_descriptor(t_AbstractWriter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWriter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractWriter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractWriter::initializeClass, 1)))
              return NULL;
            return t_AbstractWriter::wrap_Object(AbstractWriter(((t_AbstractWriter *) arg)->object.this$));
          }
          static PyObject *t_AbstractWriter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractWriter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractWriter_enterSection(t_AbstractWriter *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0))
            {
              OBJ_CALL(self->object.enterSection(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "enterSection", arg);
            return NULL;
          }

          static PyObject *t_AbstractWriter_exitSection(t_AbstractWriter *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0))
            {
              OBJ_CALL(self->object.exitSection(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "exitSection", arg);
            return NULL;
          }

          static PyObject *t_AbstractWriter_write(t_AbstractWriter *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0))
            {
              OBJ_CALL(self->object.write(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "write", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/PythonObservedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/estimation/measurements/ComparableMeasurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonObservedMeasurement::class$ = NULL;
        jmethodID *PythonObservedMeasurement::mids$ = NULL;
        bool PythonObservedMeasurement::live$ = false;

        jclass PythonObservedMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonObservedMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addModifier_cb38ed914ba48f20] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
            mids$[mid_compareTo_6343361fedc17b25] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/estimation/measurements/ComparableMeasurement;)I");
            mids$[mid_estimate_d598991c5cac8ab0] = env->getMethodID(cls, "estimate", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_estimateWithoutDerivatives_9347cf3b1f0dd85a] = env->getMethodID(cls, "estimateWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getBaseWeight_25e1757a36c4dde2] = env->getMethodID(cls, "getBaseWeight", "()[D");
            mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getMeasurementType_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getMeasurementType", "()Ljava/lang/String;");
            mids$[mid_getModifiers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
            mids$[mid_getObservedValue_25e1757a36c4dde2] = env->getMethodID(cls, "getObservedValue", "()[D");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getSatellites_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSatellites", "()Ljava/util/List;");
            mids$[mid_getTheoreticalStandardDeviation_25e1757a36c4dde2] = env->getMethodID(cls, "getTheoreticalStandardDeviation", "()[D");
            mids$[mid_isEnabled_9ab94ac1dc23b105] = env->getMethodID(cls, "isEnabled", "()Z");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_setEnabled_fcb96c98de6fad04] = env->getMethodID(cls, "setEnabled", "(Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonObservedMeasurement::PythonObservedMeasurement() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonObservedMeasurement::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonObservedMeasurement::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonObservedMeasurement::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        static PyObject *t_PythonObservedMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonObservedMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonObservedMeasurement_of_(t_PythonObservedMeasurement *self, PyObject *args);
        static int t_PythonObservedMeasurement_init_(t_PythonObservedMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonObservedMeasurement_finalize(t_PythonObservedMeasurement *self);
        static PyObject *t_PythonObservedMeasurement_pythonExtension(t_PythonObservedMeasurement *self, PyObject *args);
        static void JNICALL t_PythonObservedMeasurement_addModifier0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jint JNICALL t_PythonObservedMeasurement_compareTo1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonObservedMeasurement_estimate2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static jobject JNICALL t_PythonObservedMeasurement_estimateWithoutDerivatives3(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static jobject JNICALL t_PythonObservedMeasurement_getBaseWeight4(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getDate5(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonObservedMeasurement_getDimension6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getMeasurementType7(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getModifiers8(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getObservedValue9(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getParametersDrivers10(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getSatellites11(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getTheoreticalStandardDeviation12(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonObservedMeasurement_isEnabled13(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonObservedMeasurement_pythonDecRef14(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonObservedMeasurement_setEnabled15(JNIEnv *jenv, jobject jobj, jboolean a0);
        static PyObject *t_PythonObservedMeasurement_get__self(t_PythonObservedMeasurement *self, void *data);
        static PyObject *t_PythonObservedMeasurement_get__parameters_(t_PythonObservedMeasurement *self, void *data);
        static PyGetSetDef t_PythonObservedMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_PythonObservedMeasurement, self),
          DECLARE_GET_FIELD(t_PythonObservedMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonObservedMeasurement__methods_[] = {
          DECLARE_METHOD(t_PythonObservedMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonObservedMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonObservedMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonObservedMeasurement, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonObservedMeasurement, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonObservedMeasurement)[] = {
          { Py_tp_methods, t_PythonObservedMeasurement__methods_ },
          { Py_tp_init, (void *) t_PythonObservedMeasurement_init_ },
          { Py_tp_getset, t_PythonObservedMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonObservedMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonObservedMeasurement, t_PythonObservedMeasurement, PythonObservedMeasurement);
        PyObject *t_PythonObservedMeasurement::wrap_Object(const PythonObservedMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonObservedMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonObservedMeasurement *self = (t_PythonObservedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonObservedMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonObservedMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonObservedMeasurement *self = (t_PythonObservedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonObservedMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonObservedMeasurement), &PY_TYPE_DEF(PythonObservedMeasurement), module, "PythonObservedMeasurement", 1);
        }

        void t_PythonObservedMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonObservedMeasurement), "class_", make_descriptor(PythonObservedMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonObservedMeasurement), "wrapfn_", make_descriptor(t_PythonObservedMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonObservedMeasurement), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonObservedMeasurement::initializeClass);
          JNINativeMethod methods[] = {
            { "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V", (void *) t_PythonObservedMeasurement_addModifier0 },
            { "compareTo", "(Lorg/orekit/estimation/measurements/ComparableMeasurement;)I", (void *) t_PythonObservedMeasurement_compareTo1 },
            { "estimate", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;", (void *) t_PythonObservedMeasurement_estimate2 },
            { "estimateWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;", (void *) t_PythonObservedMeasurement_estimateWithoutDerivatives3 },
            { "getBaseWeight", "()[D", (void *) t_PythonObservedMeasurement_getBaseWeight4 },
            { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonObservedMeasurement_getDate5 },
            { "getDimension", "()I", (void *) t_PythonObservedMeasurement_getDimension6 },
            { "getMeasurementType", "()Ljava/lang/String;", (void *) t_PythonObservedMeasurement_getMeasurementType7 },
            { "getModifiers", "()Ljava/util/List;", (void *) t_PythonObservedMeasurement_getModifiers8 },
            { "getObservedValue", "()[D", (void *) t_PythonObservedMeasurement_getObservedValue9 },
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonObservedMeasurement_getParametersDrivers10 },
            { "getSatellites", "()Ljava/util/List;", (void *) t_PythonObservedMeasurement_getSatellites11 },
            { "getTheoreticalStandardDeviation", "()[D", (void *) t_PythonObservedMeasurement_getTheoreticalStandardDeviation12 },
            { "isEnabled", "()Z", (void *) t_PythonObservedMeasurement_isEnabled13 },
            { "pythonDecRef", "()V", (void *) t_PythonObservedMeasurement_pythonDecRef14 },
            { "setEnabled", "(Z)V", (void *) t_PythonObservedMeasurement_setEnabled15 },
          };
          env->registerNatives(cls, methods, 16);
        }

        static PyObject *t_PythonObservedMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonObservedMeasurement::initializeClass, 1)))
            return NULL;
          return t_PythonObservedMeasurement::wrap_Object(PythonObservedMeasurement(((t_PythonObservedMeasurement *) arg)->object.this$));
        }
        static PyObject *t_PythonObservedMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonObservedMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonObservedMeasurement_of_(t_PythonObservedMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonObservedMeasurement_init_(t_PythonObservedMeasurement *self, PyObject *args, PyObject *kwds)
        {
          PythonObservedMeasurement object((jobject) NULL);

          INT_CALL(object = PythonObservedMeasurement());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonObservedMeasurement_finalize(t_PythonObservedMeasurement *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonObservedMeasurement_pythonExtension(t_PythonObservedMeasurement *self, PyObject *args)
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

        static void JNICALL t_PythonObservedMeasurement_addModifier0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimationModifier::wrap_Object(::org::orekit::estimation::measurements::EstimationModifier(a0));
          PyObject *result = PyObject_CallMethod(obj, "addModifier", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static jint JNICALL t_PythonObservedMeasurement_compareTo1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *o0 = ::org::orekit::estimation::measurements::t_ComparableMeasurement::wrap_Object(::org::orekit::estimation::measurements::ComparableMeasurement(a0));
          PyObject *result = PyObject_CallMethod(obj, "compareTo", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("compareTo", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonObservedMeasurement_estimate2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "estimate", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &value))
          {
            throwTypeError("estimate", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_estimateWithoutDerivatives3(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "estimateWithoutDerivatives", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &value))
          {
            throwTypeError("estimateWithoutDerivatives", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getBaseWeight4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< jdouble > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getBaseWeight", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[D", &value))
          {
            throwTypeError("getBaseWeight", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getDate5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getDate", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getDate", result);
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

        static jint JNICALL t_PythonObservedMeasurement_getDimension6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getDimension", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getDimension", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonObservedMeasurement_getMeasurementType7(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::lang::String value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getMeasurementType", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "s", &value))
          {
            throwTypeError("getMeasurementType", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getModifiers8(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getModifiers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getModifiers", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getObservedValue9(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< jdouble > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getObservedValue", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[D", &value))
          {
            throwTypeError("getObservedValue", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getParametersDrivers10(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_6c0ce7e438e5ded4]);
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

        static jobject JNICALL t_PythonObservedMeasurement_getSatellites11(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSatellites", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getSatellites", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getTheoreticalStandardDeviation12(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< jdouble > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getTheoreticalStandardDeviation", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[D", &value))
          {
            throwTypeError("getTheoreticalStandardDeviation", result);
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

        static jboolean JNICALL t_PythonObservedMeasurement_isEnabled13(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "isEnabled", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("isEnabled", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonObservedMeasurement_pythonDecRef14(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonObservedMeasurement_setEnabled15(JNIEnv *jenv, jobject jobj, jboolean a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = (a0 ? Py_True : Py_False);
          PyObject *result = PyObject_CallMethod(obj, "setEnabled", "O", o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonObservedMeasurement_get__self(t_PythonObservedMeasurement *self, void *data)
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
        static PyObject *t_PythonObservedMeasurement_get__parameters_(t_PythonObservedMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/ObservationTimeScale.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *SatelliteSystem::class$ = NULL;
      jmethodID *SatelliteSystem::mids$ = NULL;
      bool SatelliteSystem::live$ = false;
      SatelliteSystem *SatelliteSystem::BEIDOU = NULL;
      SatelliteSystem *SatelliteSystem::GALILEO = NULL;
      SatelliteSystem *SatelliteSystem::GLONASS = NULL;
      SatelliteSystem *SatelliteSystem::GPS = NULL;
      SatelliteSystem *SatelliteSystem::IRNSS = NULL;
      SatelliteSystem *SatelliteSystem::MIXED = NULL;
      SatelliteSystem *SatelliteSystem::QZSS = NULL;
      SatelliteSystem *SatelliteSystem::SBAS = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_A = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_B = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_D = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_F = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_H = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_K = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_L = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_N = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_O = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_P = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_Q = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_T = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_U = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_V = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_W = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_X = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_Y = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_Z = NULL;

      jclass SatelliteSystem::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/SatelliteSystem");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getKey_5e2f8fc4d7c03fbd] = env->getMethodID(cls, "getKey", "()C");
          mids$[mid_getObservationTimeScale_5d38f72c5e775c9f] = env->getMethodID(cls, "getObservationTimeScale", "()Lorg/orekit/gnss/ObservationTimeScale;");
          mids$[mid_parseSatelliteSystem_7a28fea3a0cdf75b] = env->getStaticMethodID(cls, "parseSatelliteSystem", "(Ljava/lang/String;)Lorg/orekit/gnss/SatelliteSystem;");
          mids$[mid_parseSatelliteSystemWithGPSDefault_7a28fea3a0cdf75b] = env->getStaticMethodID(cls, "parseSatelliteSystemWithGPSDefault", "(Ljava/lang/String;)Lorg/orekit/gnss/SatelliteSystem;");
          mids$[mid_valueOf_7a28fea3a0cdf75b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/SatelliteSystem;");
          mids$[mid_values_c7603d4d5e059202] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/SatelliteSystem;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BEIDOU = new SatelliteSystem(env->getStaticObjectField(cls, "BEIDOU", "Lorg/orekit/gnss/SatelliteSystem;"));
          GALILEO = new SatelliteSystem(env->getStaticObjectField(cls, "GALILEO", "Lorg/orekit/gnss/SatelliteSystem;"));
          GLONASS = new SatelliteSystem(env->getStaticObjectField(cls, "GLONASS", "Lorg/orekit/gnss/SatelliteSystem;"));
          GPS = new SatelliteSystem(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/gnss/SatelliteSystem;"));
          IRNSS = new SatelliteSystem(env->getStaticObjectField(cls, "IRNSS", "Lorg/orekit/gnss/SatelliteSystem;"));
          MIXED = new SatelliteSystem(env->getStaticObjectField(cls, "MIXED", "Lorg/orekit/gnss/SatelliteSystem;"));
          QZSS = new SatelliteSystem(env->getStaticObjectField(cls, "QZSS", "Lorg/orekit/gnss/SatelliteSystem;"));
          SBAS = new SatelliteSystem(env->getStaticObjectField(cls, "SBAS", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_A = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_A", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_B = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_B", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_D = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_D", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_F = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_F", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_H = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_H", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_K = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_K", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_L = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_L", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_N = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_N", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_O = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_O", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_P = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_P", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_Q = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_Q", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_T = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_T", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_U = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_U", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_V = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_V", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_W = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_W", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_X = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_X", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_Y = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_Y", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_Z = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_Z", "Lorg/orekit/gnss/SatelliteSystem;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jchar SatelliteSystem::getKey() const
      {
        return env->callCharMethod(this$, mids$[mid_getKey_5e2f8fc4d7c03fbd]);
      }

      ::org::orekit::gnss::ObservationTimeScale SatelliteSystem::getObservationTimeScale() const
      {
        return ::org::orekit::gnss::ObservationTimeScale(env->callObjectMethod(this$, mids$[mid_getObservationTimeScale_5d38f72c5e775c9f]));
      }

      SatelliteSystem SatelliteSystem::parseSatelliteSystem(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return SatelliteSystem(env->callStaticObjectMethod(cls, mids$[mid_parseSatelliteSystem_7a28fea3a0cdf75b], a0.this$));
      }

      SatelliteSystem SatelliteSystem::parseSatelliteSystemWithGPSDefault(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return SatelliteSystem(env->callStaticObjectMethod(cls, mids$[mid_parseSatelliteSystemWithGPSDefault_7a28fea3a0cdf75b], a0.this$));
      }

      SatelliteSystem SatelliteSystem::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return SatelliteSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7a28fea3a0cdf75b], a0.this$));
      }

      JArray< SatelliteSystem > SatelliteSystem::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< SatelliteSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_c7603d4d5e059202]));
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
      static PyObject *t_SatelliteSystem_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatelliteSystem_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatelliteSystem_of_(t_SatelliteSystem *self, PyObject *args);
      static PyObject *t_SatelliteSystem_getKey(t_SatelliteSystem *self);
      static PyObject *t_SatelliteSystem_getObservationTimeScale(t_SatelliteSystem *self);
      static PyObject *t_SatelliteSystem_parseSatelliteSystem(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatelliteSystem_parseSatelliteSystemWithGPSDefault(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatelliteSystem_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_SatelliteSystem_values(PyTypeObject *type);
      static PyObject *t_SatelliteSystem_get__key(t_SatelliteSystem *self, void *data);
      static PyObject *t_SatelliteSystem_get__observationTimeScale(t_SatelliteSystem *self, void *data);
      static PyObject *t_SatelliteSystem_get__parameters_(t_SatelliteSystem *self, void *data);
      static PyGetSetDef t_SatelliteSystem__fields_[] = {
        DECLARE_GET_FIELD(t_SatelliteSystem, key),
        DECLARE_GET_FIELD(t_SatelliteSystem, observationTimeScale),
        DECLARE_GET_FIELD(t_SatelliteSystem, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SatelliteSystem__methods_[] = {
        DECLARE_METHOD(t_SatelliteSystem, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteSystem, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteSystem, of_, METH_VARARGS),
        DECLARE_METHOD(t_SatelliteSystem, getKey, METH_NOARGS),
        DECLARE_METHOD(t_SatelliteSystem, getObservationTimeScale, METH_NOARGS),
        DECLARE_METHOD(t_SatelliteSystem, parseSatelliteSystem, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteSystem, parseSatelliteSystemWithGPSDefault, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteSystem, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SatelliteSystem, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SatelliteSystem)[] = {
        { Py_tp_methods, t_SatelliteSystem__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_SatelliteSystem__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SatelliteSystem)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(SatelliteSystem, t_SatelliteSystem, SatelliteSystem);
      PyObject *t_SatelliteSystem::wrap_Object(const SatelliteSystem& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SatelliteSystem::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SatelliteSystem *self = (t_SatelliteSystem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SatelliteSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SatelliteSystem::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SatelliteSystem *self = (t_SatelliteSystem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SatelliteSystem::install(PyObject *module)
      {
        installType(&PY_TYPE(SatelliteSystem), &PY_TYPE_DEF(SatelliteSystem), module, "SatelliteSystem", 0);
      }

      void t_SatelliteSystem::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "class_", make_descriptor(SatelliteSystem::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "wrapfn_", make_descriptor(t_SatelliteSystem::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "boxfn_", make_descriptor(boxObject));
        env->getClass(SatelliteSystem::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "BEIDOU", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::BEIDOU)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "GALILEO", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::GALILEO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "GLONASS", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::GLONASS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "GPS", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::GPS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "IRNSS", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::IRNSS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "MIXED", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::MIXED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "QZSS", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::QZSS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "SBAS", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::SBAS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_A", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_B", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_D", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_F", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_F)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_H", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_H)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_K", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_K)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_L", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_N", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_O", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_O)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_P", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_Q", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_T", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_T)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_U", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_U)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_V", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_V)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_W", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_X", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_Y", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_Z", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_Z)));
      }

      static PyObject *t_SatelliteSystem_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SatelliteSystem::initializeClass, 1)))
          return NULL;
        return t_SatelliteSystem::wrap_Object(SatelliteSystem(((t_SatelliteSystem *) arg)->object.this$));
      }
      static PyObject *t_SatelliteSystem_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SatelliteSystem::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SatelliteSystem_of_(t_SatelliteSystem *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_SatelliteSystem_getKey(t_SatelliteSystem *self)
      {
        jchar result;
        OBJ_CALL(result = self->object.getKey());
        return c2p(result);
      }

      static PyObject *t_SatelliteSystem_getObservationTimeScale(t_SatelliteSystem *self)
      {
        ::org::orekit::gnss::ObservationTimeScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getObservationTimeScale());
        return ::org::orekit::gnss::t_ObservationTimeScale::wrap_Object(result);
      }

      static PyObject *t_SatelliteSystem_parseSatelliteSystem(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        SatelliteSystem result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::SatelliteSystem::parseSatelliteSystem(a0));
          return t_SatelliteSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseSatelliteSystem", arg);
        return NULL;
      }

      static PyObject *t_SatelliteSystem_parseSatelliteSystemWithGPSDefault(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        SatelliteSystem result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::SatelliteSystem::parseSatelliteSystemWithGPSDefault(a0));
          return t_SatelliteSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseSatelliteSystemWithGPSDefault", arg);
        return NULL;
      }

      static PyObject *t_SatelliteSystem_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        SatelliteSystem result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::SatelliteSystem::valueOf(a0));
          return t_SatelliteSystem::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_SatelliteSystem_values(PyTypeObject *type)
      {
        JArray< SatelliteSystem > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::SatelliteSystem::values());
        return JArray<jobject>(result.this$).wrap(t_SatelliteSystem::wrap_jobject);
      }
      static PyObject *t_SatelliteSystem_get__parameters_(t_SatelliteSystem *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_SatelliteSystem_get__key(t_SatelliteSystem *self, void *data)
      {
        jchar value;
        OBJ_CALL(value = self->object.getKey());
        return c2p(value);
      }

      static PyObject *t_SatelliteSystem_get__observationTimeScale(t_SatelliteSystem *self, void *data)
      {
        ::org::orekit::gnss::ObservationTimeScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getObservationTimeScale());
        return ::org::orekit::gnss::t_ObservationTimeScale::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/OutputStream.h"
#include "java/io/Flushable.h"
#include "java/io/OutputStream.h"
#include "java/io/IOException.h"
#include "java/io/Closeable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *OutputStream::class$ = NULL;
    jmethodID *OutputStream::mids$ = NULL;
    bool OutputStream::live$ = false;

    jclass OutputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/OutputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_close_a1fa5dae97ea5ed2] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_a1fa5dae97ea5ed2] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_nullOutputStream_488b91a3cbd7f201] = env->getStaticMethodID(cls, "nullOutputStream", "()Ljava/io/OutputStream;");
        mids$[mid_write_459771b03534868e] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_44ed599e93e8a30c] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_a9fddc59b07ce512] = env->getMethodID(cls, "write", "([BII)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    OutputStream::OutputStream() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    void OutputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_a1fa5dae97ea5ed2]);
    }

    void OutputStream::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_a1fa5dae97ea5ed2]);
    }

    OutputStream OutputStream::nullOutputStream()
    {
      jclass cls = env->getClass(initializeClass);
      return OutputStream(env->callStaticObjectMethod(cls, mids$[mid_nullOutputStream_488b91a3cbd7f201]));
    }

    void OutputStream::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_459771b03534868e], a0.this$);
    }

    void OutputStream::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_44ed599e93e8a30c], a0);
    }

    void OutputStream::write(const JArray< jbyte > & a0, jint a1, jint a2) const
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
    static PyObject *t_OutputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_OutputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_OutputStream_init_(t_OutputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_OutputStream_close(t_OutputStream *self);
    static PyObject *t_OutputStream_flush(t_OutputStream *self);
    static PyObject *t_OutputStream_nullOutputStream(PyTypeObject *type);
    static PyObject *t_OutputStream_write(t_OutputStream *self, PyObject *args);

    static PyMethodDef t_OutputStream__methods_[] = {
      DECLARE_METHOD(t_OutputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_OutputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_OutputStream, close, METH_NOARGS),
      DECLARE_METHOD(t_OutputStream, flush, METH_NOARGS),
      DECLARE_METHOD(t_OutputStream, nullOutputStream, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_OutputStream, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(OutputStream)[] = {
      { Py_tp_methods, t_OutputStream__methods_ },
      { Py_tp_init, (void *) t_OutputStream_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(OutputStream)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(OutputStream, t_OutputStream, OutputStream);

    void t_OutputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(OutputStream), &PY_TYPE_DEF(OutputStream), module, "OutputStream", 0);
    }

    void t_OutputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(OutputStream), "class_", make_descriptor(OutputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(OutputStream), "wrapfn_", make_descriptor(t_OutputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(OutputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_OutputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, OutputStream::initializeClass, 1)))
        return NULL;
      return t_OutputStream::wrap_Object(OutputStream(((t_OutputStream *) arg)->object.this$));
    }
    static PyObject *t_OutputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, OutputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_OutputStream_init_(t_OutputStream *self, PyObject *args, PyObject *kwds)
    {
      OutputStream object((jobject) NULL);

      INT_CALL(object = OutputStream());
      self->object = object;

      return 0;
    }

    static PyObject *t_OutputStream_close(t_OutputStream *self)
    {
      OBJ_CALL(self->object.close());
      Py_RETURN_NONE;
    }

    static PyObject *t_OutputStream_flush(t_OutputStream *self)
    {
      OBJ_CALL(self->object.flush());
      Py_RETURN_NONE;
    }

    static PyObject *t_OutputStream_nullOutputStream(PyTypeObject *type)
    {
      OutputStream result((jobject) NULL);
      OBJ_CALL(result = ::java::io::OutputStream::nullOutputStream());
      return t_OutputStream::wrap_Object(result);
    }

    static PyObject *t_OutputStream_write(t_OutputStream *self, PyObject *args)
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

      PyErr_SetArgsError((PyObject *) self, "write", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Data.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Header.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm06::class$ = NULL;
              jmethodID *SsrIgm06::mids$ = NULL;
              bool SsrIgm06::live$ = false;

              jclass SsrIgm06::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_467f0a20fb04a218] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm06Data_810bed48fafb0b9a] = env->getMethodID(cls, "getSsrIgm06Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm06::SsrIgm06(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm06Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_467f0a20fb04a218, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm06::getSsrIgm06Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm06Data_810bed48fafb0b9a]));
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
              static PyObject *t_SsrIgm06_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm06_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm06_of_(t_SsrIgm06 *self, PyObject *args);
              static int t_SsrIgm06_init_(t_SsrIgm06 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm06_getSsrIgm06Data(t_SsrIgm06 *self);
              static PyObject *t_SsrIgm06_get__ssrIgm06Data(t_SsrIgm06 *self, void *data);
              static PyObject *t_SsrIgm06_get__parameters_(t_SsrIgm06 *self, void *data);
              static PyGetSetDef t_SsrIgm06__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm06, ssrIgm06Data),
                DECLARE_GET_FIELD(t_SsrIgm06, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm06__methods_[] = {
                DECLARE_METHOD(t_SsrIgm06, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm06, getSsrIgm06Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm06)[] = {
                { Py_tp_methods, t_SsrIgm06__methods_ },
                { Py_tp_init, (void *) t_SsrIgm06_init_ },
                { Py_tp_getset, t_SsrIgm06__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm06)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm06, t_SsrIgm06, SsrIgm06);
              PyObject *t_SsrIgm06::wrap_Object(const SsrIgm06& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm06::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm06 *self = (t_SsrIgm06 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm06::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm06::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm06 *self = (t_SsrIgm06 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm06::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm06), &PY_TYPE_DEF(SsrIgm06), module, "SsrIgm06", 0);
              }

              void t_SsrIgm06::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06), "class_", make_descriptor(SsrIgm06::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06), "wrapfn_", make_descriptor(t_SsrIgm06::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm06_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm06::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm06::wrap_Object(SsrIgm06(((t_SsrIgm06 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm06_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm06::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm06_of_(t_SsrIgm06 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm06_init_(t_SsrIgm06 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm06Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm06 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm06Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm06(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm06Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm06Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm06_getSsrIgm06Data(t_SsrIgm06 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm06Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm06_get__parameters_(t_SsrIgm06 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm06_get__ssrIgm06Data(t_SsrIgm06 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm06Data());
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
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *OrdinaryDifferentialEquation::class$ = NULL;
      jmethodID *OrdinaryDifferentialEquation::mids$ = NULL;
      bool OrdinaryDifferentialEquation::live$ = false;

      jclass OrdinaryDifferentialEquation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/OrdinaryDifferentialEquation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_91fbb4072ae7ce9a] = env->getMethodID(cls, "computeDerivatives", "(D[D)[D");
          mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_aa54f77f8b71901d] = env->getMethodID(cls, "init", "(D[DD)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > OrdinaryDifferentialEquation::computeDerivatives(jdouble a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_91fbb4072ae7ce9a], a0, a1.this$));
      }

      jint OrdinaryDifferentialEquation::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
      }

      void OrdinaryDifferentialEquation::init(jdouble a0, const JArray< jdouble > & a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_init_aa54f77f8b71901d], a0, a1.this$, a2);
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
      static PyObject *t_OrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrdinaryDifferentialEquation_computeDerivatives(t_OrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_OrdinaryDifferentialEquation_getDimension(t_OrdinaryDifferentialEquation *self);
      static PyObject *t_OrdinaryDifferentialEquation_init(t_OrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_OrdinaryDifferentialEquation_get__dimension(t_OrdinaryDifferentialEquation *self, void *data);
      static PyGetSetDef t_OrdinaryDifferentialEquation__fields_[] = {
        DECLARE_GET_FIELD(t_OrdinaryDifferentialEquation, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrdinaryDifferentialEquation__methods_[] = {
        DECLARE_METHOD(t_OrdinaryDifferentialEquation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrdinaryDifferentialEquation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrdinaryDifferentialEquation, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_OrdinaryDifferentialEquation, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_OrdinaryDifferentialEquation, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrdinaryDifferentialEquation)[] = {
        { Py_tp_methods, t_OrdinaryDifferentialEquation__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OrdinaryDifferentialEquation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrdinaryDifferentialEquation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OrdinaryDifferentialEquation, t_OrdinaryDifferentialEquation, OrdinaryDifferentialEquation);

      void t_OrdinaryDifferentialEquation::install(PyObject *module)
      {
        installType(&PY_TYPE(OrdinaryDifferentialEquation), &PY_TYPE_DEF(OrdinaryDifferentialEquation), module, "OrdinaryDifferentialEquation", 0);
      }

      void t_OrdinaryDifferentialEquation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrdinaryDifferentialEquation), "class_", make_descriptor(OrdinaryDifferentialEquation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrdinaryDifferentialEquation), "wrapfn_", make_descriptor(t_OrdinaryDifferentialEquation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrdinaryDifferentialEquation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrdinaryDifferentialEquation::initializeClass, 1)))
          return NULL;
        return t_OrdinaryDifferentialEquation::wrap_Object(OrdinaryDifferentialEquation(((t_OrdinaryDifferentialEquation *) arg)->object.this$));
      }
      static PyObject *t_OrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrdinaryDifferentialEquation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrdinaryDifferentialEquation_computeDerivatives(t_OrdinaryDifferentialEquation *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_OrdinaryDifferentialEquation_getDimension(t_OrdinaryDifferentialEquation *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_OrdinaryDifferentialEquation_init(t_OrdinaryDifferentialEquation *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        jdouble a2;

        if (!parseArgs(args, "D[DD", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.init(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_OrdinaryDifferentialEquation_get__dimension(t_OrdinaryDifferentialEquation *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistory.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovariance.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitCovarianceHistory::class$ = NULL;
              jmethodID *OrbitCovarianceHistory::mids$ = NULL;
              bool OrbitCovarianceHistory::live$ = false;

              jclass OrbitCovarianceHistory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_43e7708d26a0c556] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata;Ljava/util/List;)V");
                  mids$[mid_getCovariances_e62d3bb06d56d7e3] = env->getMethodID(cls, "getCovariances", "()Ljava/util/List;");
                  mids$[mid_getMetadata_7f62477a13ef3bfb] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitCovarianceHistory::OrbitCovarianceHistory(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_43e7708d26a0c556, a0.this$, a1.this$)) {}

              ::java::util::List OrbitCovarianceHistory::getCovariances() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovariances_e62d3bb06d56d7e3]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata OrbitCovarianceHistory::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_7f62477a13ef3bfb]));
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
              static PyObject *t_OrbitCovarianceHistory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistory_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitCovarianceHistory_init_(t_OrbitCovarianceHistory *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitCovarianceHistory_getCovariances(t_OrbitCovarianceHistory *self);
              static PyObject *t_OrbitCovarianceHistory_getMetadata(t_OrbitCovarianceHistory *self);
              static PyObject *t_OrbitCovarianceHistory_get__covariances(t_OrbitCovarianceHistory *self, void *data);
              static PyObject *t_OrbitCovarianceHistory_get__metadata(t_OrbitCovarianceHistory *self, void *data);
              static PyGetSetDef t_OrbitCovarianceHistory__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitCovarianceHistory, covariances),
                DECLARE_GET_FIELD(t_OrbitCovarianceHistory, metadata),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitCovarianceHistory__methods_[] = {
                DECLARE_METHOD(t_OrbitCovarianceHistory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistory, getCovariances, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistory, getMetadata, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitCovarianceHistory)[] = {
                { Py_tp_methods, t_OrbitCovarianceHistory__methods_ },
                { Py_tp_init, (void *) t_OrbitCovarianceHistory_init_ },
                { Py_tp_getset, t_OrbitCovarianceHistory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitCovarianceHistory)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OrbitCovarianceHistory, t_OrbitCovarianceHistory, OrbitCovarianceHistory);

              void t_OrbitCovarianceHistory::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitCovarianceHistory), &PY_TYPE_DEF(OrbitCovarianceHistory), module, "OrbitCovarianceHistory", 0);
              }

              void t_OrbitCovarianceHistory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistory), "class_", make_descriptor(OrbitCovarianceHistory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistory), "wrapfn_", make_descriptor(t_OrbitCovarianceHistory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistory), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitCovarianceHistory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitCovarianceHistory::initializeClass, 1)))
                  return NULL;
                return t_OrbitCovarianceHistory::wrap_Object(OrbitCovarianceHistory(((t_OrbitCovarianceHistory *) arg)->object.this$));
              }
              static PyObject *t_OrbitCovarianceHistory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitCovarianceHistory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitCovarianceHistory_init_(t_OrbitCovarianceHistory *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                OrbitCovarianceHistory object((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = OrbitCovarianceHistory(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitCovarianceHistory_getCovariances(t_OrbitCovarianceHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovariances());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OrbitCovariance));
              }

              static PyObject *t_OrbitCovarianceHistory_getMetadata(t_OrbitCovarianceHistory *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitCovarianceHistoryMetadata::wrap_Object(result);
              }

              static PyObject *t_OrbitCovarianceHistory_get__covariances(t_OrbitCovarianceHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovariances());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OrbitCovarianceHistory_get__metadata(t_OrbitCovarianceHistory *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitCovarianceHistoryMetadata::wrap_Object(value);
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
#include "org/hipparchus/analysis/integration/MidPointIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *MidPointIntegrator::class$ = NULL;
        jmethodID *MidPointIntegrator::mids$ = NULL;
        bool MidPointIntegrator::live$ = false;
        jint MidPointIntegrator::MIDPOINT_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass MidPointIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/MidPointIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_3313c75e3e16c428] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_init$_5408957787adf55f] = env->getMethodID(cls, "<init>", "(DDII)V");
            mids$[mid_doIntegrate_b74f83833fdad017] = env->getMethodID(cls, "doIntegrate", "()D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MIDPOINT_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "MIDPOINT_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MidPointIntegrator::MidPointIntegrator() : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        MidPointIntegrator::MidPointIntegrator(jint a0, jint a1) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_3313c75e3e16c428, a0, a1)) {}

        MidPointIntegrator::MidPointIntegrator(jdouble a0, jdouble a1, jint a2, jint a3) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_5408957787adf55f, a0, a1, a2, a3)) {}
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
        static PyObject *t_MidPointIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidPointIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MidPointIntegrator_init_(t_MidPointIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_MidPointIntegrator__methods_[] = {
          DECLARE_METHOD(t_MidPointIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidPointIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MidPointIntegrator)[] = {
          { Py_tp_methods, t_MidPointIntegrator__methods_ },
          { Py_tp_init, (void *) t_MidPointIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MidPointIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(MidPointIntegrator, t_MidPointIntegrator, MidPointIntegrator);

        void t_MidPointIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(MidPointIntegrator), &PY_TYPE_DEF(MidPointIntegrator), module, "MidPointIntegrator", 0);
        }

        void t_MidPointIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidPointIntegrator), "class_", make_descriptor(MidPointIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidPointIntegrator), "wrapfn_", make_descriptor(t_MidPointIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidPointIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(MidPointIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidPointIntegrator), "MIDPOINT_MAX_ITERATIONS_COUNT", make_descriptor(MidPointIntegrator::MIDPOINT_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_MidPointIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MidPointIntegrator::initializeClass, 1)))
            return NULL;
          return t_MidPointIntegrator::wrap_Object(MidPointIntegrator(((t_MidPointIntegrator *) arg)->object.this$));
        }
        static PyObject *t_MidPointIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MidPointIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MidPointIntegrator_init_(t_MidPointIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              MidPointIntegrator object((jobject) NULL);

              INT_CALL(object = MidPointIntegrator());
              self->object = object;
              break;
            }
           case 2:
            {
              jint a0;
              jint a1;
              MidPointIntegrator object((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                INT_CALL(object = MidPointIntegrator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              jint a3;
              MidPointIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = MidPointIntegrator(a0, a1, a2, a3));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/NelderMeadSimplex.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *NelderMeadSimplex::class$ = NULL;
            jmethodID *NelderMeadSimplex::mids$ = NULL;
            bool NelderMeadSimplex::live$ = false;

            jclass NelderMeadSimplex::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/NelderMeadSimplex");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ab69da052b88f50c] = env->getMethodID(cls, "<init>", "([D)V");
                mids$[mid_init$_07adb42ffaa97d31] = env->getMethodID(cls, "<init>", "([[D)V");
                mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_init$_d5322b8b512aeb26] = env->getMethodID(cls, "<init>", "(ID)V");
                mids$[mid_init$_4a296642ea3db7d7] = env->getMethodID(cls, "<init>", "([DDDDD)V");
                mids$[mid_init$_05d8adfe90de18ea] = env->getMethodID(cls, "<init>", "([[DDDDD)V");
                mids$[mid_init$_f688d28255ba75ab] = env->getMethodID(cls, "<init>", "(IDDDD)V");
                mids$[mid_init$_83f8fa9221fe9dc2] = env->getMethodID(cls, "<init>", "(IDDDDD)V");
                mids$[mid_iterate_7c5f20de6989de35] = env->getMethodID(cls, "iterate", "(Lorg/hipparchus/analysis/MultivariateFunction;Ljava/util/Comparator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            NelderMeadSimplex::NelderMeadSimplex(const JArray< jdouble > & a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_ab69da052b88f50c, a0.this$)) {}

            NelderMeadSimplex::NelderMeadSimplex(const JArray< JArray< jdouble > > & a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_07adb42ffaa97d31, a0.this$)) {}

            NelderMeadSimplex::NelderMeadSimplex(jint a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

            NelderMeadSimplex::NelderMeadSimplex(jint a0, jdouble a1) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_d5322b8b512aeb26, a0, a1)) {}

            NelderMeadSimplex::NelderMeadSimplex(const JArray< jdouble > & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_4a296642ea3db7d7, a0.this$, a1, a2, a3, a4)) {}

            NelderMeadSimplex::NelderMeadSimplex(const JArray< JArray< jdouble > > & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_05d8adfe90de18ea, a0.this$, a1, a2, a3, a4)) {}

            NelderMeadSimplex::NelderMeadSimplex(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_f688d28255ba75ab, a0, a1, a2, a3, a4)) {}

            NelderMeadSimplex::NelderMeadSimplex(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_83f8fa9221fe9dc2, a0, a1, a2, a3, a4, a5)) {}

            void NelderMeadSimplex::iterate(const ::org::hipparchus::analysis::MultivariateFunction & a0, const ::java::util::Comparator & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_iterate_7c5f20de6989de35], a0.this$, a1.this$);
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
        namespace scalar {
          namespace noderiv {
            static PyObject *t_NelderMeadSimplex_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NelderMeadSimplex_instance_(PyTypeObject *type, PyObject *arg);
            static int t_NelderMeadSimplex_init_(t_NelderMeadSimplex *self, PyObject *args, PyObject *kwds);
            static PyObject *t_NelderMeadSimplex_iterate(t_NelderMeadSimplex *self, PyObject *args);

            static PyMethodDef t_NelderMeadSimplex__methods_[] = {
              DECLARE_METHOD(t_NelderMeadSimplex, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NelderMeadSimplex, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NelderMeadSimplex, iterate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(NelderMeadSimplex)[] = {
              { Py_tp_methods, t_NelderMeadSimplex__methods_ },
              { Py_tp_init, (void *) t_NelderMeadSimplex_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(NelderMeadSimplex)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex),
              NULL
            };

            DEFINE_TYPE(NelderMeadSimplex, t_NelderMeadSimplex, NelderMeadSimplex);

            void t_NelderMeadSimplex::install(PyObject *module)
            {
              installType(&PY_TYPE(NelderMeadSimplex), &PY_TYPE_DEF(NelderMeadSimplex), module, "NelderMeadSimplex", 0);
            }

            void t_NelderMeadSimplex::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(NelderMeadSimplex), "class_", make_descriptor(NelderMeadSimplex::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NelderMeadSimplex), "wrapfn_", make_descriptor(t_NelderMeadSimplex::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NelderMeadSimplex), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_NelderMeadSimplex_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, NelderMeadSimplex::initializeClass, 1)))
                return NULL;
              return t_NelderMeadSimplex::wrap_Object(NelderMeadSimplex(((t_NelderMeadSimplex *) arg)->object.this$));
            }
            static PyObject *t_NelderMeadSimplex_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, NelderMeadSimplex::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_NelderMeadSimplex_init_(t_NelderMeadSimplex *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[D", &a0))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                {
                  JArray< JArray< jdouble > > a0((jobject) NULL);
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[[D", &a0))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                {
                  jint a0;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "I", &a0))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  jint a0;
                  jdouble a1;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "ID", &a0, &a1))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0, a1));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 5:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[DDDDD", &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0, a1, a2, a3, a4));
                    self->object = object;
                    break;
                  }
                }
                {
                  JArray< JArray< jdouble > > a0((jobject) NULL);
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[[DDDDD", &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0, a1, a2, a3, a4));
                    self->object = object;
                    break;
                  }
                }
                {
                  jint a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "IDDDD", &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0, a1, a2, a3, a4));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 6:
                {
                  jint a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  jdouble a5;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "IDDDDD", &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0, a1, a2, a3, a4, a5));
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

            static PyObject *t_NelderMeadSimplex_iterate(t_NelderMeadSimplex *self, PyObject *args)
            {
              ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
              ::java::util::Comparator a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
              {
                OBJ_CALL(self->object.iterate(a0, a1));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(NelderMeadSimplex), (PyObject *) self, "iterate", args, 2);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *RangeRate::class$ = NULL;
        jmethodID *RangeRate::mids$ = NULL;
        bool RangeRate::live$ = false;
        ::java::lang::String *RangeRate::MEASUREMENT_TYPE = NULL;

        jclass RangeRate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/RangeRate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_094c77c85f18295e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDZLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_9347cf3b1f0dd85a] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_d598991c5cac8ab0] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RangeRate::RangeRate(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, jdouble a3, jdouble a4, jboolean a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_094c77c85f18295e, a0.this$, a1.this$, a2, a3, a4, a5, a6.this$)) {}
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
        static PyObject *t_RangeRate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RangeRate_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RangeRate_of_(t_RangeRate *self, PyObject *args);
        static int t_RangeRate_init_(t_RangeRate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RangeRate_get__parameters_(t_RangeRate *self, void *data);
        static PyGetSetDef t_RangeRate__fields_[] = {
          DECLARE_GET_FIELD(t_RangeRate, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RangeRate__methods_[] = {
          DECLARE_METHOD(t_RangeRate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RangeRate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RangeRate, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RangeRate)[] = {
          { Py_tp_methods, t_RangeRate__methods_ },
          { Py_tp_init, (void *) t_RangeRate_init_ },
          { Py_tp_getset, t_RangeRate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RangeRate)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(RangeRate, t_RangeRate, RangeRate);
        PyObject *t_RangeRate::wrap_Object(const RangeRate& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RangeRate::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RangeRate *self = (t_RangeRate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RangeRate::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RangeRate::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RangeRate *self = (t_RangeRate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RangeRate::install(PyObject *module)
        {
          installType(&PY_TYPE(RangeRate), &PY_TYPE_DEF(RangeRate), module, "RangeRate", 0);
        }

        void t_RangeRate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRate), "class_", make_descriptor(RangeRate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRate), "wrapfn_", make_descriptor(t_RangeRate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRate), "boxfn_", make_descriptor(boxObject));
          env->getClass(RangeRate::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRate), "MEASUREMENT_TYPE", make_descriptor(j2p(*RangeRate::MEASUREMENT_TYPE)));
        }

        static PyObject *t_RangeRate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RangeRate::initializeClass, 1)))
            return NULL;
          return t_RangeRate::wrap_Object(RangeRate(((t_RangeRate *) arg)->object.this$));
        }
        static PyObject *t_RangeRate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RangeRate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RangeRate_of_(t_RangeRate *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_RangeRate_init_(t_RangeRate *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble a4;
          jboolean a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          RangeRate object((jobject) NULL);

          if (!parseArgs(args, "kkDDDZk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = RangeRate(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(RangeRate);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
        static PyObject *t_RangeRate_get__parameters_(t_RangeRate *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MathArrays$OrderDirection.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/MathArrays$OrderDirection.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathArrays$OrderDirection::class$ = NULL;
      jmethodID *MathArrays$OrderDirection::mids$ = NULL;
      bool MathArrays$OrderDirection::live$ = false;
      MathArrays$OrderDirection *MathArrays$OrderDirection::DECREASING = NULL;
      MathArrays$OrderDirection *MathArrays$OrderDirection::INCREASING = NULL;

      jclass MathArrays$OrderDirection::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathArrays$OrderDirection");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_81c61d1c0647dcec] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/util/MathArrays$OrderDirection;");
          mids$[mid_values_999fb29f019cb7c4] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/util/MathArrays$OrderDirection;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DECREASING = new MathArrays$OrderDirection(env->getStaticObjectField(cls, "DECREASING", "Lorg/hipparchus/util/MathArrays$OrderDirection;"));
          INCREASING = new MathArrays$OrderDirection(env->getStaticObjectField(cls, "INCREASING", "Lorg/hipparchus/util/MathArrays$OrderDirection;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MathArrays$OrderDirection MathArrays$OrderDirection::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return MathArrays$OrderDirection(env->callStaticObjectMethod(cls, mids$[mid_valueOf_81c61d1c0647dcec], a0.this$));
      }

      JArray< MathArrays$OrderDirection > MathArrays$OrderDirection::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< MathArrays$OrderDirection >(env->callStaticObjectMethod(cls, mids$[mid_values_999fb29f019cb7c4]));
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
      static PyObject *t_MathArrays$OrderDirection_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays$OrderDirection_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays$OrderDirection_of_(t_MathArrays$OrderDirection *self, PyObject *args);
      static PyObject *t_MathArrays$OrderDirection_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays$OrderDirection_values(PyTypeObject *type);
      static PyObject *t_MathArrays$OrderDirection_get__parameters_(t_MathArrays$OrderDirection *self, void *data);
      static PyGetSetDef t_MathArrays$OrderDirection__fields_[] = {
        DECLARE_GET_FIELD(t_MathArrays$OrderDirection, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MathArrays$OrderDirection__methods_[] = {
        DECLARE_METHOD(t_MathArrays$OrderDirection, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$OrderDirection, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$OrderDirection, of_, METH_VARARGS),
        DECLARE_METHOD(t_MathArrays$OrderDirection, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$OrderDirection, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathArrays$OrderDirection)[] = {
        { Py_tp_methods, t_MathArrays$OrderDirection__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MathArrays$OrderDirection__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathArrays$OrderDirection)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(MathArrays$OrderDirection, t_MathArrays$OrderDirection, MathArrays$OrderDirection);
      PyObject *t_MathArrays$OrderDirection::wrap_Object(const MathArrays$OrderDirection& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MathArrays$OrderDirection::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MathArrays$OrderDirection *self = (t_MathArrays$OrderDirection *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_MathArrays$OrderDirection::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MathArrays$OrderDirection::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MathArrays$OrderDirection *self = (t_MathArrays$OrderDirection *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_MathArrays$OrderDirection::install(PyObject *module)
      {
        installType(&PY_TYPE(MathArrays$OrderDirection), &PY_TYPE_DEF(MathArrays$OrderDirection), module, "MathArrays$OrderDirection", 0);
      }

      void t_MathArrays$OrderDirection::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$OrderDirection), "class_", make_descriptor(MathArrays$OrderDirection::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$OrderDirection), "wrapfn_", make_descriptor(t_MathArrays$OrderDirection::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$OrderDirection), "boxfn_", make_descriptor(boxObject));
        env->getClass(MathArrays$OrderDirection::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$OrderDirection), "DECREASING", make_descriptor(t_MathArrays$OrderDirection::wrap_Object(*MathArrays$OrderDirection::DECREASING)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$OrderDirection), "INCREASING", make_descriptor(t_MathArrays$OrderDirection::wrap_Object(*MathArrays$OrderDirection::INCREASING)));
      }

      static PyObject *t_MathArrays$OrderDirection_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathArrays$OrderDirection::initializeClass, 1)))
          return NULL;
        return t_MathArrays$OrderDirection::wrap_Object(MathArrays$OrderDirection(((t_MathArrays$OrderDirection *) arg)->object.this$));
      }
      static PyObject *t_MathArrays$OrderDirection_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathArrays$OrderDirection::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathArrays$OrderDirection_of_(t_MathArrays$OrderDirection *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_MathArrays$OrderDirection_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        MathArrays$OrderDirection result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays$OrderDirection::valueOf(a0));
          return t_MathArrays$OrderDirection::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_MathArrays$OrderDirection_values(PyTypeObject *type)
      {
        JArray< MathArrays$OrderDirection > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::MathArrays$OrderDirection::values());
        return JArray<jobject>(result.this$).wrap(t_MathArrays$OrderDirection::wrap_jobject);
      }
      static PyObject *t_MathArrays$OrderDirection_get__parameters_(t_MathArrays$OrderDirection *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/ClassicalRungeKuttaIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *ClassicalRungeKuttaIntegratorBuilder::class$ = NULL;
        jmethodID *ClassicalRungeKuttaIntegratorBuilder::mids$ = NULL;
        bool ClassicalRungeKuttaIntegratorBuilder::live$ = false;

        jclass ClassicalRungeKuttaIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/ClassicalRungeKuttaIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_916fa199ca08d656] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ClassicalRungeKuttaIntegratorBuilder::ClassicalRungeKuttaIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator ClassicalRungeKuttaIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_916fa199ca08d656], a0.this$, a1.this$));
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
        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ClassicalRungeKuttaIntegratorBuilder_init_(t_ClassicalRungeKuttaIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_buildIntegrator(t_ClassicalRungeKuttaIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_ClassicalRungeKuttaIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ClassicalRungeKuttaIntegratorBuilder)[] = {
          { Py_tp_methods, t_ClassicalRungeKuttaIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_ClassicalRungeKuttaIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ClassicalRungeKuttaIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ClassicalRungeKuttaIntegratorBuilder, t_ClassicalRungeKuttaIntegratorBuilder, ClassicalRungeKuttaIntegratorBuilder);

        void t_ClassicalRungeKuttaIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(ClassicalRungeKuttaIntegratorBuilder), &PY_TYPE_DEF(ClassicalRungeKuttaIntegratorBuilder), module, "ClassicalRungeKuttaIntegratorBuilder", 0);
        }

        void t_ClassicalRungeKuttaIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegratorBuilder), "class_", make_descriptor(ClassicalRungeKuttaIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegratorBuilder), "wrapfn_", make_descriptor(t_ClassicalRungeKuttaIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ClassicalRungeKuttaIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_ClassicalRungeKuttaIntegratorBuilder::wrap_Object(ClassicalRungeKuttaIntegratorBuilder(((t_ClassicalRungeKuttaIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ClassicalRungeKuttaIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ClassicalRungeKuttaIntegratorBuilder_init_(t_ClassicalRungeKuttaIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ClassicalRungeKuttaIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ClassicalRungeKuttaIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_buildIntegrator(t_ClassicalRungeKuttaIntegratorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::OrbitType a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::AbstractIntegrator result((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
            return ::org::hipparchus::ode::t_AbstractIntegrator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealVectorChangingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealVectorChangingVisitor::class$ = NULL;
      jmethodID *RealVectorChangingVisitor::mids$ = NULL;
      bool RealVectorChangingVisitor::live$ = false;

      jclass RealVectorChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealVectorChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_b74f83833fdad017] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_a0df4b8e4ed3805e] = env->getMethodID(cls, "start", "(III)V");
          mids$[mid_visit_98e10c261c066ee7] = env->getMethodID(cls, "visit", "(ID)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble RealVectorChangingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_b74f83833fdad017]);
      }

      void RealVectorChangingVisitor::start(jint a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_start_a0df4b8e4ed3805e], a0, a1, a2);
      }

      jdouble RealVectorChangingVisitor::visit(jint a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_visit_98e10c261c066ee7], a0, a1);
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
      static PyObject *t_RealVectorChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVectorChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVectorChangingVisitor_end(t_RealVectorChangingVisitor *self);
      static PyObject *t_RealVectorChangingVisitor_start(t_RealVectorChangingVisitor *self, PyObject *args);
      static PyObject *t_RealVectorChangingVisitor_visit(t_RealVectorChangingVisitor *self, PyObject *args);

      static PyMethodDef t_RealVectorChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_RealVectorChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_RealVectorChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealVectorChangingVisitor)[] = {
        { Py_tp_methods, t_RealVectorChangingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealVectorChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealVectorChangingVisitor, t_RealVectorChangingVisitor, RealVectorChangingVisitor);

      void t_RealVectorChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(RealVectorChangingVisitor), &PY_TYPE_DEF(RealVectorChangingVisitor), module, "RealVectorChangingVisitor", 0);
      }

      void t_RealVectorChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorChangingVisitor), "class_", make_descriptor(RealVectorChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorChangingVisitor), "wrapfn_", make_descriptor(t_RealVectorChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealVectorChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealVectorChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_RealVectorChangingVisitor::wrap_Object(RealVectorChangingVisitor(((t_RealVectorChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_RealVectorChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealVectorChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealVectorChangingVisitor_end(t_RealVectorChangingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVectorChangingVisitor_start(t_RealVectorChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "III", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.start(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_RealVectorChangingVisitor_visit(t_RealVectorChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(result = self->object.visit(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
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
          mids$[mid_getLocalizedString_26070c28e6ea354d] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String Localizable::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_26070c28e6ea354d], a0.this$));
      }

      ::java::lang::String Localizable::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_1c1fa1e935d6cdcf]));
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
#include "org/orekit/propagation/events/EventsLogger$LoggedEvent.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventsLogger$LoggedEvent::class$ = NULL;
        jmethodID *EventsLogger$LoggedEvent::mids$ = NULL;
        bool EventsLogger$LoggedEvent::live$ = false;

        jclass EventsLogger$LoggedEvent::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventsLogger$LoggedEvent");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getEventDetector_9ada55f07f5a223c] = env->getMethodID(cls, "getEventDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_getState_9d155cc8314c99cf] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_isIncreasing_9ab94ac1dc23b105] = env->getMethodID(cls, "isIncreasing", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::time::AbsoluteDate EventsLogger$LoggedEvent::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
        }

        ::org::orekit::propagation::events::EventDetector EventsLogger$LoggedEvent::getEventDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_9ada55f07f5a223c]));
        }

        ::org::orekit::propagation::SpacecraftState EventsLogger$LoggedEvent::getState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_9d155cc8314c99cf]));
        }

        jboolean EventsLogger$LoggedEvent::isIncreasing() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isIncreasing_9ab94ac1dc23b105]);
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
        static PyObject *t_EventsLogger$LoggedEvent_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventsLogger$LoggedEvent_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventsLogger$LoggedEvent_getDate(t_EventsLogger$LoggedEvent *self);
        static PyObject *t_EventsLogger$LoggedEvent_getEventDetector(t_EventsLogger$LoggedEvent *self);
        static PyObject *t_EventsLogger$LoggedEvent_getState(t_EventsLogger$LoggedEvent *self);
        static PyObject *t_EventsLogger$LoggedEvent_isIncreasing(t_EventsLogger$LoggedEvent *self);
        static PyObject *t_EventsLogger$LoggedEvent_get__date(t_EventsLogger$LoggedEvent *self, void *data);
        static PyObject *t_EventsLogger$LoggedEvent_get__eventDetector(t_EventsLogger$LoggedEvent *self, void *data);
        static PyObject *t_EventsLogger$LoggedEvent_get__increasing(t_EventsLogger$LoggedEvent *self, void *data);
        static PyObject *t_EventsLogger$LoggedEvent_get__state(t_EventsLogger$LoggedEvent *self, void *data);
        static PyGetSetDef t_EventsLogger$LoggedEvent__fields_[] = {
          DECLARE_GET_FIELD(t_EventsLogger$LoggedEvent, date),
          DECLARE_GET_FIELD(t_EventsLogger$LoggedEvent, eventDetector),
          DECLARE_GET_FIELD(t_EventsLogger$LoggedEvent, increasing),
          DECLARE_GET_FIELD(t_EventsLogger$LoggedEvent, state),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventsLogger$LoggedEvent__methods_[] = {
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, getDate, METH_NOARGS),
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, getState, METH_NOARGS),
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, isIncreasing, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventsLogger$LoggedEvent)[] = {
          { Py_tp_methods, t_EventsLogger$LoggedEvent__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EventsLogger$LoggedEvent__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventsLogger$LoggedEvent)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventsLogger$LoggedEvent, t_EventsLogger$LoggedEvent, EventsLogger$LoggedEvent);

        void t_EventsLogger$LoggedEvent::install(PyObject *module)
        {
          installType(&PY_TYPE(EventsLogger$LoggedEvent), &PY_TYPE_DEF(EventsLogger$LoggedEvent), module, "EventsLogger$LoggedEvent", 0);
        }

        void t_EventsLogger$LoggedEvent::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger$LoggedEvent), "class_", make_descriptor(EventsLogger$LoggedEvent::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger$LoggedEvent), "wrapfn_", make_descriptor(t_EventsLogger$LoggedEvent::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger$LoggedEvent), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventsLogger$LoggedEvent_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventsLogger$LoggedEvent::initializeClass, 1)))
            return NULL;
          return t_EventsLogger$LoggedEvent::wrap_Object(EventsLogger$LoggedEvent(((t_EventsLogger$LoggedEvent *) arg)->object.this$));
        }
        static PyObject *t_EventsLogger$LoggedEvent_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventsLogger$LoggedEvent::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventsLogger$LoggedEvent_getDate(t_EventsLogger$LoggedEvent *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_EventsLogger$LoggedEvent_getEventDetector(t_EventsLogger$LoggedEvent *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_EventsLogger$LoggedEvent_getState(t_EventsLogger$LoggedEvent *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_EventsLogger$LoggedEvent_isIncreasing(t_EventsLogger$LoggedEvent *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isIncreasing());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_EventsLogger$LoggedEvent_get__date(t_EventsLogger$LoggedEvent *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_EventsLogger$LoggedEvent_get__eventDetector(t_EventsLogger$LoggedEvent *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }

        static PyObject *t_EventsLogger$LoggedEvent_get__increasing(t_EventsLogger$LoggedEvent *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isIncreasing());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_EventsLogger$LoggedEvent_get__state(t_EventsLogger$LoggedEvent *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *BodyShape::class$ = NULL;
      jmethodID *BodyShape::mids$ = NULL;
      bool BodyShape::live$ = false;

      jclass BodyShape::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/BodyShape");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getBodyFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getIntersectionPoint_66b39d6d84447197] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_getIntersectionPoint_f1db6d4c78519d48] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_projectToGround_3cbe213b2c291f18] = env->getMethodID(cls, "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_projectToGround_feded476b8bdfcfc] = env->getMethodID(cls, "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_transform_6aa36b82e3b80b58] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transform_a840d9913a98925f] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_transform_93de77ed9854e321] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_transform_f67fa82bac3192f0] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::Frame BodyShape::getBodyFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyFrame_2c51111cc6894ba1]));
      }

      ::org::orekit::bodies::FieldGeodeticPoint BodyShape::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::FieldLine & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_66b39d6d84447197], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::orekit::bodies::GeodeticPoint BodyShape::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::Line & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::AbsoluteDate & a3) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_f1db6d4c78519d48], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates BodyShape::projectToGround(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_projectToGround_3cbe213b2c291f18], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D BodyShape::projectToGround(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToGround_feded476b8bdfcfc], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D BodyShape::transform(const ::org::orekit::bodies::FieldGeodeticPoint & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transform_6aa36b82e3b80b58], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D BodyShape::transform(const ::org::orekit::bodies::GeodeticPoint & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transform_a840d9913a98925f], a0.this$));
      }

      ::org::orekit::bodies::FieldGeodeticPoint BodyShape::transform(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_93de77ed9854e321], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::bodies::GeodeticPoint BodyShape::transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_f67fa82bac3192f0], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_BodyShape_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BodyShape_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BodyShape_getBodyFrame(t_BodyShape *self);
      static PyObject *t_BodyShape_getIntersectionPoint(t_BodyShape *self, PyObject *args);
      static PyObject *t_BodyShape_projectToGround(t_BodyShape *self, PyObject *args);
      static PyObject *t_BodyShape_transform(t_BodyShape *self, PyObject *args);
      static PyObject *t_BodyShape_get__bodyFrame(t_BodyShape *self, void *data);
      static PyGetSetDef t_BodyShape__fields_[] = {
        DECLARE_GET_FIELD(t_BodyShape, bodyFrame),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BodyShape__methods_[] = {
        DECLARE_METHOD(t_BodyShape, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BodyShape, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BodyShape, getBodyFrame, METH_NOARGS),
        DECLARE_METHOD(t_BodyShape, getIntersectionPoint, METH_VARARGS),
        DECLARE_METHOD(t_BodyShape, projectToGround, METH_VARARGS),
        DECLARE_METHOD(t_BodyShape, transform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BodyShape)[] = {
        { Py_tp_methods, t_BodyShape__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BodyShape__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BodyShape)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(BodyShape, t_BodyShape, BodyShape);

      void t_BodyShape::install(PyObject *module)
      {
        installType(&PY_TYPE(BodyShape), &PY_TYPE_DEF(BodyShape), module, "BodyShape", 0);
      }

      void t_BodyShape::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodyShape), "class_", make_descriptor(BodyShape::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodyShape), "wrapfn_", make_descriptor(t_BodyShape::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodyShape), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BodyShape_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BodyShape::initializeClass, 1)))
          return NULL;
        return t_BodyShape::wrap_Object(BodyShape(((t_BodyShape *) arg)->object.this$));
      }
      static PyObject *t_BodyShape_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BodyShape::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BodyShape_getBodyFrame(t_BodyShape *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_BodyShape_getIntersectionPoint(t_BodyShape *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getIntersectionPoint(a0, a1, a2, a3));
              return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "KKkK", ::org::hipparchus::geometry::euclidean::threed::FieldLine::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getIntersectionPoint(a0, a1, a2, a3));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getIntersectionPoint", args);
        return NULL;
      }

      static PyObject *t_BodyShape_projectToGround(t_BodyShape *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.projectToGround(a0, a1));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.projectToGround(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "projectToGround", args);
        return NULL;
      }

      static PyObject *t_BodyShape_transform(t_BodyShape *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_))
            {
              OBJ_CALL(result = self->object.transform(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
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
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.transform(a0, a1, a2));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transform", args);
        return NULL;
      }

      static PyObject *t_BodyShape_get__bodyFrame(t_BodyShape *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/SemiVariance$Direction.h"
#include "java/lang/String.h"
#include "org/hipparchus/stat/descriptive/moment/SemiVariance$Direction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *SemiVariance$Direction::class$ = NULL;
          jmethodID *SemiVariance$Direction::mids$ = NULL;
          bool SemiVariance$Direction::live$ = false;
          SemiVariance$Direction *SemiVariance$Direction::DOWNSIDE = NULL;
          SemiVariance$Direction *SemiVariance$Direction::UPSIDE = NULL;

          jclass SemiVariance$Direction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/SemiVariance$Direction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_bad4b1a3bfe90c20] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;");
              mids$[mid_values_2bb00b08e21b8191] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DOWNSIDE = new SemiVariance$Direction(env->getStaticObjectField(cls, "DOWNSIDE", "Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;"));
              UPSIDE = new SemiVariance$Direction(env->getStaticObjectField(cls, "UPSIDE", "Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SemiVariance$Direction SemiVariance$Direction::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SemiVariance$Direction(env->callStaticObjectMethod(cls, mids$[mid_valueOf_bad4b1a3bfe90c20], a0.this$));
          }

          JArray< SemiVariance$Direction > SemiVariance$Direction::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< SemiVariance$Direction >(env->callStaticObjectMethod(cls, mids$[mid_values_2bb00b08e21b8191]));
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
          static PyObject *t_SemiVariance$Direction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SemiVariance$Direction_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SemiVariance$Direction_of_(t_SemiVariance$Direction *self, PyObject *args);
          static PyObject *t_SemiVariance$Direction_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_SemiVariance$Direction_values(PyTypeObject *type);
          static PyObject *t_SemiVariance$Direction_get__parameters_(t_SemiVariance$Direction *self, void *data);
          static PyGetSetDef t_SemiVariance$Direction__fields_[] = {
            DECLARE_GET_FIELD(t_SemiVariance$Direction, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SemiVariance$Direction__methods_[] = {
            DECLARE_METHOD(t_SemiVariance$Direction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SemiVariance$Direction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SemiVariance$Direction, of_, METH_VARARGS),
            DECLARE_METHOD(t_SemiVariance$Direction, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_SemiVariance$Direction, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SemiVariance$Direction)[] = {
            { Py_tp_methods, t_SemiVariance$Direction__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SemiVariance$Direction__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SemiVariance$Direction)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(SemiVariance$Direction, t_SemiVariance$Direction, SemiVariance$Direction);
          PyObject *t_SemiVariance$Direction::wrap_Object(const SemiVariance$Direction& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SemiVariance$Direction::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SemiVariance$Direction *self = (t_SemiVariance$Direction *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SemiVariance$Direction::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SemiVariance$Direction::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SemiVariance$Direction *self = (t_SemiVariance$Direction *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SemiVariance$Direction::install(PyObject *module)
          {
            installType(&PY_TYPE(SemiVariance$Direction), &PY_TYPE_DEF(SemiVariance$Direction), module, "SemiVariance$Direction", 0);
          }

          void t_SemiVariance$Direction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance$Direction), "class_", make_descriptor(SemiVariance$Direction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance$Direction), "wrapfn_", make_descriptor(t_SemiVariance$Direction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance$Direction), "boxfn_", make_descriptor(boxObject));
            env->getClass(SemiVariance$Direction::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance$Direction), "DOWNSIDE", make_descriptor(t_SemiVariance$Direction::wrap_Object(*SemiVariance$Direction::DOWNSIDE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance$Direction), "UPSIDE", make_descriptor(t_SemiVariance$Direction::wrap_Object(*SemiVariance$Direction::UPSIDE)));
          }

          static PyObject *t_SemiVariance$Direction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SemiVariance$Direction::initializeClass, 1)))
              return NULL;
            return t_SemiVariance$Direction::wrap_Object(SemiVariance$Direction(((t_SemiVariance$Direction *) arg)->object.this$));
          }
          static PyObject *t_SemiVariance$Direction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SemiVariance$Direction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SemiVariance$Direction_of_(t_SemiVariance$Direction *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_SemiVariance$Direction_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            SemiVariance$Direction result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::valueOf(a0));
              return t_SemiVariance$Direction::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_SemiVariance$Direction_values(PyTypeObject *type)
          {
            JArray< SemiVariance$Direction > result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::values());
            return JArray<jobject>(result.this$).wrap(t_SemiVariance$Direction::wrap_jobject);
          }
          static PyObject *t_SemiVariance$Direction_get__parameters_(t_SemiVariance$Direction *self, void *data)
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
#include "org/orekit/forces/gravity/OceanTides.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *OceanTides::class$ = NULL;
        jmethodID *OceanTides::mids$ = NULL;
        bool OceanTides::live$ = false;
        jint OceanTides::DEFAULT_POINTS = (jint) 0;
        jdouble OceanTides::DEFAULT_STEP = (jdouble) 0;

        jclass OceanTides::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/OceanTides");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b969bee9b70083a9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDIILorg/orekit/utils/IERSConventions;Lorg/orekit/time/UT1Scale;)V");
            mids$[mid_init$_068d507e061d4ea6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDZDIIILorg/orekit/utils/IERSConventions;Lorg/orekit/time/UT1Scale;)V");
            mids$[mid_init$_1dd2a1faf37eb57e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDZDIIILorg/orekit/utils/IERSConventions;Lorg/orekit/time/UT1Scale;Lorg/orekit/forces/gravity/potential/GravityFields;)V");
            mids$[mid_acceleration_0ce449c67b5ffd9c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_20bded0292328743] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getEventDetectors_14e21bf777ff0ccf] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_283ad33581c047a0] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_POINTS = env->getStaticIntField(cls, "DEFAULT_POINTS");
            DEFAULT_STEP = env->getStaticDoubleField(cls, "DEFAULT_STEP");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OceanTides::OceanTides(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, jint a3, jint a4, const ::org::orekit::utils::IERSConventions & a5, const ::org::orekit::time::UT1Scale & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b969bee9b70083a9, a0.this$, a1, a2, a3, a4, a5.this$, a6.this$)) {}

        OceanTides::OceanTides(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, jboolean a3, jdouble a4, jint a5, jint a6, jint a7, const ::org::orekit::utils::IERSConventions & a8, const ::org::orekit::time::UT1Scale & a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_068d507e061d4ea6, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8.this$, a9.this$)) {}

        OceanTides::OceanTides(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, jboolean a3, jdouble a4, jint a5, jint a6, jint a7, const ::org::orekit::utils::IERSConventions & a8, const ::org::orekit::time::UT1Scale & a9, const ::org::orekit::forces::gravity::potential::GravityFields & a10) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1dd2a1faf37eb57e, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8.this$, a9.this$, a10.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D OceanTides::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_0ce449c67b5ffd9c], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D OceanTides::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_20bded0292328743], a0.this$, a1.this$));
        }

        jboolean OceanTides::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105]);
        }

        ::java::util::stream::Stream OceanTides::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_14e21bf777ff0ccf]));
        }

        ::java::util::stream::Stream OceanTides::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_283ad33581c047a0], a0.this$));
        }

        ::java::util::List OceanTides::getParametersDrivers() const
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
        static PyObject *t_OceanTides_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OceanTides_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OceanTides_init_(t_OceanTides *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OceanTides_acceleration(t_OceanTides *self, PyObject *args);
        static PyObject *t_OceanTides_dependsOnPositionOnly(t_OceanTides *self);
        static PyObject *t_OceanTides_getEventDetectors(t_OceanTides *self);
        static PyObject *t_OceanTides_getFieldEventDetectors(t_OceanTides *self, PyObject *arg);
        static PyObject *t_OceanTides_getParametersDrivers(t_OceanTides *self);
        static PyObject *t_OceanTides_get__eventDetectors(t_OceanTides *self, void *data);
        static PyObject *t_OceanTides_get__parametersDrivers(t_OceanTides *self, void *data);
        static PyGetSetDef t_OceanTides__fields_[] = {
          DECLARE_GET_FIELD(t_OceanTides, eventDetectors),
          DECLARE_GET_FIELD(t_OceanTides, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OceanTides__methods_[] = {
          DECLARE_METHOD(t_OceanTides, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OceanTides, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OceanTides, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_OceanTides, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_OceanTides, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_OceanTides, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_OceanTides, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OceanTides)[] = {
          { Py_tp_methods, t_OceanTides__methods_ },
          { Py_tp_init, (void *) t_OceanTides_init_ },
          { Py_tp_getset, t_OceanTides__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OceanTides)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OceanTides, t_OceanTides, OceanTides);

        void t_OceanTides::install(PyObject *module)
        {
          installType(&PY_TYPE(OceanTides), &PY_TYPE_DEF(OceanTides), module, "OceanTides", 0);
        }

        void t_OceanTides::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTides), "class_", make_descriptor(OceanTides::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTides), "wrapfn_", make_descriptor(t_OceanTides::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTides), "boxfn_", make_descriptor(boxObject));
          env->getClass(OceanTides::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTides), "DEFAULT_POINTS", make_descriptor(OceanTides::DEFAULT_POINTS));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTides), "DEFAULT_STEP", make_descriptor(OceanTides::DEFAULT_STEP));
        }

        static PyObject *t_OceanTides_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OceanTides::initializeClass, 1)))
            return NULL;
          return t_OceanTides::wrap_Object(OceanTides(((t_OceanTides *) arg)->object.this$));
        }
        static PyObject *t_OceanTides_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OceanTides::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OceanTides_init_(t_OceanTides *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 7:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              ::org::orekit::utils::IERSConventions a5((jobject) NULL);
              PyTypeObject **p5;
              ::org::orekit::time::UT1Scale a6((jobject) NULL);
              OceanTides object((jobject) NULL);

              if (!parseArgs(args, "kDDIIKk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::UT1Scale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::orekit::utils::t_IERSConventions::parameters_, &a6))
              {
                INT_CALL(object = OceanTides(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            goto err;
           case 10:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jboolean a3;
              jdouble a4;
              jint a5;
              jint a6;
              jint a7;
              ::org::orekit::utils::IERSConventions a8((jobject) NULL);
              PyTypeObject **p8;
              ::org::orekit::time::UT1Scale a9((jobject) NULL);
              OceanTides object((jobject) NULL);

              if (!parseArgs(args, "kDDZDIIIKk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::UT1Scale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &p8, ::org::orekit::utils::t_IERSConventions::parameters_, &a9))
              {
                INT_CALL(object = OceanTides(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                self->object = object;
                break;
              }
            }
            goto err;
           case 11:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jboolean a3;
              jdouble a4;
              jint a5;
              jint a6;
              jint a7;
              ::org::orekit::utils::IERSConventions a8((jobject) NULL);
              PyTypeObject **p8;
              ::org::orekit::time::UT1Scale a9((jobject) NULL);
              ::org::orekit::forces::gravity::potential::GravityFields a10((jobject) NULL);
              OceanTides object((jobject) NULL);

              if (!parseArgs(args, "kDDZDIIIKkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::UT1Scale::initializeClass, ::org::orekit::forces::gravity::potential::GravityFields::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &p8, ::org::orekit::utils::t_IERSConventions::parameters_, &a9, &a10))
              {
                INT_CALL(object = OceanTides(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
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

        static PyObject *t_OceanTides_acceleration(t_OceanTides *self, PyObject *args)
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

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_OceanTides_dependsOnPositionOnly(t_OceanTides *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_OceanTides_getEventDetectors(t_OceanTides *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_OceanTides_getFieldEventDetectors(t_OceanTides *self, PyObject *arg)
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

        static PyObject *t_OceanTides_getParametersDrivers(t_OceanTides *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_OceanTides_get__eventDetectors(t_OceanTides *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_OceanTides_get__parametersDrivers(t_OceanTides *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/PhaseCentersRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseCentersRangeModifier::class$ = NULL;
          jmethodID *PhaseCentersRangeModifier::mids$ = NULL;
          bool PhaseCentersRangeModifier::live$ = false;

          jclass PhaseCentersRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseCentersRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c749d199d359fa63] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/antenna/FrequencyPattern;Lorg/orekit/gnss/antenna/FrequencyPattern;)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseCentersRangeModifier::PhaseCentersRangeModifier(const ::org::orekit::gnss::antenna::FrequencyPattern & a0, const ::org::orekit::gnss::antenna::FrequencyPattern & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c749d199d359fa63, a0.this$, a1.this$)) {}

          ::java::util::List PhaseCentersRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void PhaseCentersRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_PhaseCentersRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseCentersRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseCentersRangeModifier_init_(t_PhaseCentersRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseCentersRangeModifier_getParametersDrivers(t_PhaseCentersRangeModifier *self);
          static PyObject *t_PhaseCentersRangeModifier_modifyWithoutDerivatives(t_PhaseCentersRangeModifier *self, PyObject *arg);
          static PyObject *t_PhaseCentersRangeModifier_get__parametersDrivers(t_PhaseCentersRangeModifier *self, void *data);
          static PyGetSetDef t_PhaseCentersRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseCentersRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseCentersRangeModifier__methods_[] = {
            DECLARE_METHOD(t_PhaseCentersRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_PhaseCentersRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseCentersRangeModifier)[] = {
            { Py_tp_methods, t_PhaseCentersRangeModifier__methods_ },
            { Py_tp_init, (void *) t_PhaseCentersRangeModifier_init_ },
            { Py_tp_getset, t_PhaseCentersRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseCentersRangeModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseCentersRangeModifier, t_PhaseCentersRangeModifier, PhaseCentersRangeModifier);

          void t_PhaseCentersRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseCentersRangeModifier), &PY_TYPE_DEF(PhaseCentersRangeModifier), module, "PhaseCentersRangeModifier", 0);
          }

          void t_PhaseCentersRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersRangeModifier), "class_", make_descriptor(PhaseCentersRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersRangeModifier), "wrapfn_", make_descriptor(t_PhaseCentersRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseCentersRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseCentersRangeModifier::initializeClass, 1)))
              return NULL;
            return t_PhaseCentersRangeModifier::wrap_Object(PhaseCentersRangeModifier(((t_PhaseCentersRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_PhaseCentersRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseCentersRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseCentersRangeModifier_init_(t_PhaseCentersRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::antenna::FrequencyPattern a0((jobject) NULL);
            ::org::orekit::gnss::antenna::FrequencyPattern a1((jobject) NULL);
            PhaseCentersRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PhaseCentersRangeModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseCentersRangeModifier_getParametersDrivers(t_PhaseCentersRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_PhaseCentersRangeModifier_modifyWithoutDerivatives(t_PhaseCentersRangeModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseCentersRangeModifier_get__parametersDrivers(t_PhaseCentersRangeModifier *self, void *data)
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
#include "org/hipparchus/geometry/spherical/twod/Vertex.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/twod/Edge.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *Vertex::class$ = NULL;
          jmethodID *Vertex::mids$ = NULL;
          bool Vertex::live$ = false;

          jclass Vertex::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/Vertex");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getIncoming_e042a987ddce5121] = env->getMethodID(cls, "getIncoming", "()Lorg/hipparchus/geometry/spherical/twod/Edge;");
              mids$[mid_getLocation_cf0fa877996d1fcc] = env->getMethodID(cls, "getLocation", "()Lorg/hipparchus/geometry/spherical/twod/S2Point;");
              mids$[mid_getOutgoing_e042a987ddce5121] = env->getMethodID(cls, "getOutgoing", "()Lorg/hipparchus/geometry/spherical/twod/Edge;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::spherical::twod::Edge Vertex::getIncoming() const
          {
            return ::org::hipparchus::geometry::spherical::twod::Edge(env->callObjectMethod(this$, mids$[mid_getIncoming_e042a987ddce5121]));
          }

          ::org::hipparchus::geometry::spherical::twod::S2Point Vertex::getLocation() const
          {
            return ::org::hipparchus::geometry::spherical::twod::S2Point(env->callObjectMethod(this$, mids$[mid_getLocation_cf0fa877996d1fcc]));
          }

          ::org::hipparchus::geometry::spherical::twod::Edge Vertex::getOutgoing() const
          {
            return ::org::hipparchus::geometry::spherical::twod::Edge(env->callObjectMethod(this$, mids$[mid_getOutgoing_e042a987ddce5121]));
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
        namespace twod {
          static PyObject *t_Vertex_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vertex_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vertex_getIncoming(t_Vertex *self);
          static PyObject *t_Vertex_getLocation(t_Vertex *self);
          static PyObject *t_Vertex_getOutgoing(t_Vertex *self);
          static PyObject *t_Vertex_get__incoming(t_Vertex *self, void *data);
          static PyObject *t_Vertex_get__location(t_Vertex *self, void *data);
          static PyObject *t_Vertex_get__outgoing(t_Vertex *self, void *data);
          static PyGetSetDef t_Vertex__fields_[] = {
            DECLARE_GET_FIELD(t_Vertex, incoming),
            DECLARE_GET_FIELD(t_Vertex, location),
            DECLARE_GET_FIELD(t_Vertex, outgoing),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vertex__methods_[] = {
            DECLARE_METHOD(t_Vertex, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vertex, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vertex, getIncoming, METH_NOARGS),
            DECLARE_METHOD(t_Vertex, getLocation, METH_NOARGS),
            DECLARE_METHOD(t_Vertex, getOutgoing, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vertex)[] = {
            { Py_tp_methods, t_Vertex__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Vertex__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vertex)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Vertex, t_Vertex, Vertex);

          void t_Vertex::install(PyObject *module)
          {
            installType(&PY_TYPE(Vertex), &PY_TYPE_DEF(Vertex), module, "Vertex", 0);
          }

          void t_Vertex::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vertex), "class_", make_descriptor(Vertex::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vertex), "wrapfn_", make_descriptor(t_Vertex::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vertex), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Vertex_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vertex::initializeClass, 1)))
              return NULL;
            return t_Vertex::wrap_Object(Vertex(((t_Vertex *) arg)->object.this$));
          }
          static PyObject *t_Vertex_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vertex::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Vertex_getIncoming(t_Vertex *self)
          {
            ::org::hipparchus::geometry::spherical::twod::Edge result((jobject) NULL);
            OBJ_CALL(result = self->object.getIncoming());
            return ::org::hipparchus::geometry::spherical::twod::t_Edge::wrap_Object(result);
          }

          static PyObject *t_Vertex_getLocation(t_Vertex *self)
          {
            ::org::hipparchus::geometry::spherical::twod::S2Point result((jobject) NULL);
            OBJ_CALL(result = self->object.getLocation());
            return ::org::hipparchus::geometry::spherical::twod::t_S2Point::wrap_Object(result);
          }

          static PyObject *t_Vertex_getOutgoing(t_Vertex *self)
          {
            ::org::hipparchus::geometry::spherical::twod::Edge result((jobject) NULL);
            OBJ_CALL(result = self->object.getOutgoing());
            return ::org::hipparchus::geometry::spherical::twod::t_Edge::wrap_Object(result);
          }

          static PyObject *t_Vertex_get__incoming(t_Vertex *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::Edge value((jobject) NULL);
            OBJ_CALL(value = self->object.getIncoming());
            return ::org::hipparchus::geometry::spherical::twod::t_Edge::wrap_Object(value);
          }

          static PyObject *t_Vertex_get__location(t_Vertex *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::S2Point value((jobject) NULL);
            OBJ_CALL(value = self->object.getLocation());
            return ::org::hipparchus::geometry::spherical::twod::t_S2Point::wrap_Object(value);
          }

          static PyObject *t_Vertex_get__outgoing(t_Vertex *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::Edge value((jobject) NULL);
            OBJ_CALL(value = self->object.getOutgoing());
            return ::org::hipparchus::geometry::spherical::twod::t_Edge::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/ExceptionalDataContext.h"
#include "org/orekit/forces/gravity/potential/LazyLoadedGravityFields.h"
#include "org/orekit/time/LazyLoadedTimeScales.h"
#include "org/orekit/frames/LazyLoadedFrames.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/LazyLoadedCelestialBodies.h"
#include "org/orekit/models/earth/LazyLoadedGeoMagneticFields.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *ExceptionalDataContext::class$ = NULL;
      jmethodID *ExceptionalDataContext::mids$ = NULL;
      bool ExceptionalDataContext::live$ = false;

      jclass ExceptionalDataContext::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/ExceptionalDataContext");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_getCelestialBodies_6bb03bd1907ccb0e] = env->getMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/LazyLoadedCelestialBodies;");
          mids$[mid_getFrames_5dce20e74866c277] = env->getMethodID(cls, "getFrames", "()Lorg/orekit/frames/LazyLoadedFrames;");
          mids$[mid_getGeoMagneticFields_d89697effe31d95a] = env->getMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/LazyLoadedGeoMagneticFields;");
          mids$[mid_getGravityFields_7edff6ac38775a4d] = env->getMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/LazyLoadedGravityFields;");
          mids$[mid_getTimeScales_aca7b99124f1f289] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/LazyLoadedTimeScales;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ExceptionalDataContext::ExceptionalDataContext() : ::org::orekit::data::LazyLoadedDataContext(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      ::org::orekit::bodies::LazyLoadedCelestialBodies ExceptionalDataContext::getCelestialBodies() const
      {
        return ::org::orekit::bodies::LazyLoadedCelestialBodies(env->callObjectMethod(this$, mids$[mid_getCelestialBodies_6bb03bd1907ccb0e]));
      }

      ::org::orekit::frames::LazyLoadedFrames ExceptionalDataContext::getFrames() const
      {
        return ::org::orekit::frames::LazyLoadedFrames(env->callObjectMethod(this$, mids$[mid_getFrames_5dce20e74866c277]));
      }

      ::org::orekit::models::earth::LazyLoadedGeoMagneticFields ExceptionalDataContext::getGeoMagneticFields() const
      {
        return ::org::orekit::models::earth::LazyLoadedGeoMagneticFields(env->callObjectMethod(this$, mids$[mid_getGeoMagneticFields_d89697effe31d95a]));
      }

      ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields ExceptionalDataContext::getGravityFields() const
      {
        return ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields(env->callObjectMethod(this$, mids$[mid_getGravityFields_7edff6ac38775a4d]));
      }

      ::org::orekit::time::LazyLoadedTimeScales ExceptionalDataContext::getTimeScales() const
      {
        return ::org::orekit::time::LazyLoadedTimeScales(env->callObjectMethod(this$, mids$[mid_getTimeScales_aca7b99124f1f289]));
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
      static PyObject *t_ExceptionalDataContext_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ExceptionalDataContext_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ExceptionalDataContext_init_(t_ExceptionalDataContext *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ExceptionalDataContext_getCelestialBodies(t_ExceptionalDataContext *self, PyObject *args);
      static PyObject *t_ExceptionalDataContext_getFrames(t_ExceptionalDataContext *self, PyObject *args);
      static PyObject *t_ExceptionalDataContext_getGeoMagneticFields(t_ExceptionalDataContext *self, PyObject *args);
      static PyObject *t_ExceptionalDataContext_getGravityFields(t_ExceptionalDataContext *self, PyObject *args);
      static PyObject *t_ExceptionalDataContext_getTimeScales(t_ExceptionalDataContext *self, PyObject *args);
      static PyObject *t_ExceptionalDataContext_get__celestialBodies(t_ExceptionalDataContext *self, void *data);
      static PyObject *t_ExceptionalDataContext_get__frames(t_ExceptionalDataContext *self, void *data);
      static PyObject *t_ExceptionalDataContext_get__geoMagneticFields(t_ExceptionalDataContext *self, void *data);
      static PyObject *t_ExceptionalDataContext_get__gravityFields(t_ExceptionalDataContext *self, void *data);
      static PyObject *t_ExceptionalDataContext_get__timeScales(t_ExceptionalDataContext *self, void *data);
      static PyGetSetDef t_ExceptionalDataContext__fields_[] = {
        DECLARE_GET_FIELD(t_ExceptionalDataContext, celestialBodies),
        DECLARE_GET_FIELD(t_ExceptionalDataContext, frames),
        DECLARE_GET_FIELD(t_ExceptionalDataContext, geoMagneticFields),
        DECLARE_GET_FIELD(t_ExceptionalDataContext, gravityFields),
        DECLARE_GET_FIELD(t_ExceptionalDataContext, timeScales),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ExceptionalDataContext__methods_[] = {
        DECLARE_METHOD(t_ExceptionalDataContext, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExceptionalDataContext, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExceptionalDataContext, getCelestialBodies, METH_VARARGS),
        DECLARE_METHOD(t_ExceptionalDataContext, getFrames, METH_VARARGS),
        DECLARE_METHOD(t_ExceptionalDataContext, getGeoMagneticFields, METH_VARARGS),
        DECLARE_METHOD(t_ExceptionalDataContext, getGravityFields, METH_VARARGS),
        DECLARE_METHOD(t_ExceptionalDataContext, getTimeScales, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ExceptionalDataContext)[] = {
        { Py_tp_methods, t_ExceptionalDataContext__methods_ },
        { Py_tp_init, (void *) t_ExceptionalDataContext_init_ },
        { Py_tp_getset, t_ExceptionalDataContext__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ExceptionalDataContext)[] = {
        &PY_TYPE_DEF(::org::orekit::data::LazyLoadedDataContext),
        NULL
      };

      DEFINE_TYPE(ExceptionalDataContext, t_ExceptionalDataContext, ExceptionalDataContext);

      void t_ExceptionalDataContext::install(PyObject *module)
      {
        installType(&PY_TYPE(ExceptionalDataContext), &PY_TYPE_DEF(ExceptionalDataContext), module, "ExceptionalDataContext", 0);
      }

      void t_ExceptionalDataContext::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExceptionalDataContext), "class_", make_descriptor(ExceptionalDataContext::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExceptionalDataContext), "wrapfn_", make_descriptor(t_ExceptionalDataContext::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExceptionalDataContext), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ExceptionalDataContext_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ExceptionalDataContext::initializeClass, 1)))
          return NULL;
        return t_ExceptionalDataContext::wrap_Object(ExceptionalDataContext(((t_ExceptionalDataContext *) arg)->object.this$));
      }
      static PyObject *t_ExceptionalDataContext_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ExceptionalDataContext::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ExceptionalDataContext_init_(t_ExceptionalDataContext *self, PyObject *args, PyObject *kwds)
      {
        ExceptionalDataContext object((jobject) NULL);

        INT_CALL(object = ExceptionalDataContext());
        self->object = object;

        return 0;
      }

      static PyObject *t_ExceptionalDataContext_getCelestialBodies(t_ExceptionalDataContext *self, PyObject *args)
      {
        ::org::orekit::bodies::LazyLoadedCelestialBodies result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getCelestialBodies());
          return ::org::orekit::bodies::t_LazyLoadedCelestialBodies::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ExceptionalDataContext), (PyObject *) self, "getCelestialBodies", args, 2);
      }

      static PyObject *t_ExceptionalDataContext_getFrames(t_ExceptionalDataContext *self, PyObject *args)
      {
        ::org::orekit::frames::LazyLoadedFrames result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getFrames());
          return ::org::orekit::frames::t_LazyLoadedFrames::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ExceptionalDataContext), (PyObject *) self, "getFrames", args, 2);
      }

      static PyObject *t_ExceptionalDataContext_getGeoMagneticFields(t_ExceptionalDataContext *self, PyObject *args)
      {
        ::org::orekit::models::earth::LazyLoadedGeoMagneticFields result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getGeoMagneticFields());
          return ::org::orekit::models::earth::t_LazyLoadedGeoMagneticFields::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ExceptionalDataContext), (PyObject *) self, "getGeoMagneticFields", args, 2);
      }

      static PyObject *t_ExceptionalDataContext_getGravityFields(t_ExceptionalDataContext *self, PyObject *args)
      {
        ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getGravityFields());
          return ::org::orekit::forces::gravity::potential::t_LazyLoadedGravityFields::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ExceptionalDataContext), (PyObject *) self, "getGravityFields", args, 2);
      }

      static PyObject *t_ExceptionalDataContext_getTimeScales(t_ExceptionalDataContext *self, PyObject *args)
      {
        ::org::orekit::time::LazyLoadedTimeScales result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTimeScales());
          return ::org::orekit::time::t_LazyLoadedTimeScales::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ExceptionalDataContext), (PyObject *) self, "getTimeScales", args, 2);
      }

      static PyObject *t_ExceptionalDataContext_get__celestialBodies(t_ExceptionalDataContext *self, void *data)
      {
        ::org::orekit::bodies::LazyLoadedCelestialBodies value((jobject) NULL);
        OBJ_CALL(value = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_LazyLoadedCelestialBodies::wrap_Object(value);
      }

      static PyObject *t_ExceptionalDataContext_get__frames(t_ExceptionalDataContext *self, void *data)
      {
        ::org::orekit::frames::LazyLoadedFrames value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrames());
        return ::org::orekit::frames::t_LazyLoadedFrames::wrap_Object(value);
      }

      static PyObject *t_ExceptionalDataContext_get__geoMagneticFields(t_ExceptionalDataContext *self, void *data)
      {
        ::org::orekit::models::earth::LazyLoadedGeoMagneticFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_LazyLoadedGeoMagneticFields::wrap_Object(value);
      }

      static PyObject *t_ExceptionalDataContext_get__gravityFields(t_ExceptionalDataContext *self, void *data)
      {
        ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_LazyLoadedGravityFields::wrap_Object(value);
      }

      static PyObject *t_ExceptionalDataContext_get__timeScales(t_ExceptionalDataContext *self, void *data)
      {
        ::org::orekit::time::LazyLoadedTimeScales value((jobject) NULL);
        OBJ_CALL(value = self->object.getTimeScales());
        return ::org::orekit::time::t_LazyLoadedTimeScales::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FieldUnivariateVectorFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateVectorFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldUnivariateVectorFunction::class$ = NULL;
      jmethodID *FieldUnivariateVectorFunction::mids$ = NULL;
      bool FieldUnivariateVectorFunction::live$ = false;

      jclass FieldUnivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldUnivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldUnivariateVectorFunction_2dd73075b344a4c2] = env->getMethodID(cls, "toCalculusFieldUnivariateVectorFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldUnivariateVectorFunction;");
          mids$[mid_value_178e06dface5c0c9] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldUnivariateVectorFunction FieldUnivariateVectorFunction::toCalculusFieldUnivariateVectorFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldUnivariateVectorFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldUnivariateVectorFunction_2dd73075b344a4c2], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldUnivariateVectorFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_178e06dface5c0c9], a0.this$));
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
      static PyObject *t_FieldUnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateVectorFunction_toCalculusFieldUnivariateVectorFunction(t_FieldUnivariateVectorFunction *self, PyObject *arg);
      static PyObject *t_FieldUnivariateVectorFunction_value(t_FieldUnivariateVectorFunction *self, PyObject *arg);

      static PyMethodDef t_FieldUnivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_FieldUnivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateVectorFunction, toCalculusFieldUnivariateVectorFunction, METH_O),
        DECLARE_METHOD(t_FieldUnivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateVectorFunction)[] = {
        { Py_tp_methods, t_FieldUnivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldUnivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldUnivariateVectorFunction, t_FieldUnivariateVectorFunction, FieldUnivariateVectorFunction);

      void t_FieldUnivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldUnivariateVectorFunction), &PY_TYPE_DEF(FieldUnivariateVectorFunction), module, "FieldUnivariateVectorFunction", 0);
      }

      void t_FieldUnivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateVectorFunction), "class_", make_descriptor(FieldUnivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateVectorFunction), "wrapfn_", make_descriptor(t_FieldUnivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldUnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldUnivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_FieldUnivariateVectorFunction::wrap_Object(FieldUnivariateVectorFunction(((t_FieldUnivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldUnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldUnivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldUnivariateVectorFunction_toCalculusFieldUnivariateVectorFunction(t_FieldUnivariateVectorFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldUnivariateVectorFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldUnivariateVectorFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldUnivariateVectorFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldUnivariateVectorFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldUnivariateVectorFunction_value(t_FieldUnivariateVectorFunction *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
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
#include "org/orekit/propagation/analytical/gnss/data/SBASNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/SBASPropagator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *SBASNavigationMessage::class$ = NULL;
            jmethodID *SBASNavigationMessage::mids$ = NULL;
            bool SBASNavigationMessage::live$ = false;

            jclass SBASNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/SBASNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getAGf0_b74f83833fdad017] = env->getMethodID(cls, "getAGf0", "()D");
                mids$[mid_getAGf1_b74f83833fdad017] = env->getMethodID(cls, "getAGf1", "()D");
                mids$[mid_getIODN_55546ef6a647f39b] = env->getMethodID(cls, "getIODN", "()I");
                mids$[mid_getPropagator_52115c132377a3e0] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/analytical/gnss/SBASPropagator;");
                mids$[mid_getPropagator_1ec3450f4d22f991] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/frames/Frames;)Lorg/orekit/propagation/analytical/gnss/SBASPropagator;");
                mids$[mid_getPropagator_eee280a13363e1ef] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/frames/Frames;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;DD)Lorg/orekit/propagation/analytical/gnss/SBASPropagator;");
                mids$[mid_getTime_b74f83833fdad017] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getURA_b74f83833fdad017] = env->getMethodID(cls, "getURA", "()D");
                mids$[mid_getWeek_55546ef6a647f39b] = env->getMethodID(cls, "getWeek", "()I");
                mids$[mid_setAGf0_8ba9fe7a847cecad] = env->getMethodID(cls, "setAGf0", "(D)V");
                mids$[mid_setAGf1_8ba9fe7a847cecad] = env->getMethodID(cls, "setAGf1", "(D)V");
                mids$[mid_setIODN_8ba9fe7a847cecad] = env->getMethodID(cls, "setIODN", "(D)V");
                mids$[mid_setTime_8ba9fe7a847cecad] = env->getMethodID(cls, "setTime", "(D)V");
                mids$[mid_setURA_8ba9fe7a847cecad] = env->getMethodID(cls, "setURA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SBASNavigationMessage::SBASNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::AbstractEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            jdouble SBASNavigationMessage::getAGf0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAGf0_b74f83833fdad017]);
            }

            jdouble SBASNavigationMessage::getAGf1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAGf1_b74f83833fdad017]);
            }

            jint SBASNavigationMessage::getIODN() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODN_55546ef6a647f39b]);
            }

            ::org::orekit::propagation::analytical::gnss::SBASPropagator SBASNavigationMessage::getPropagator() const
            {
              return ::org::orekit::propagation::analytical::gnss::SBASPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_52115c132377a3e0]));
            }

            ::org::orekit::propagation::analytical::gnss::SBASPropagator SBASNavigationMessage::getPropagator(const ::org::orekit::frames::Frames & a0) const
            {
              return ::org::orekit::propagation::analytical::gnss::SBASPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_1ec3450f4d22f991], a0.this$));
            }

            ::org::orekit::propagation::analytical::gnss::SBASPropagator SBASNavigationMessage::getPropagator(const ::org::orekit::frames::Frames & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3, jdouble a4, jdouble a5) const
            {
              return ::org::orekit::propagation::analytical::gnss::SBASPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_eee280a13363e1ef], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
            }

            jdouble SBASNavigationMessage::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_b74f83833fdad017]);
            }

            jdouble SBASNavigationMessage::getURA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getURA_b74f83833fdad017]);
            }

            jint SBASNavigationMessage::getWeek() const
            {
              return env->callIntMethod(this$, mids$[mid_getWeek_55546ef6a647f39b]);
            }

            void SBASNavigationMessage::setAGf0(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAGf0_8ba9fe7a847cecad], a0);
            }

            void SBASNavigationMessage::setAGf1(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAGf1_8ba9fe7a847cecad], a0);
            }

            void SBASNavigationMessage::setIODN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODN_8ba9fe7a847cecad], a0);
            }

            void SBASNavigationMessage::setTime(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTime_8ba9fe7a847cecad], a0);
            }

            void SBASNavigationMessage::setURA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setURA_8ba9fe7a847cecad], a0);
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
            static PyObject *t_SBASNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SBASNavigationMessage_init_(t_SBASNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SBASNavigationMessage_getAGf0(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_getAGf1(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_getIODN(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_getPropagator(t_SBASNavigationMessage *self, PyObject *args);
            static PyObject *t_SBASNavigationMessage_getTime(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_getURA(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_getWeek(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_setAGf0(t_SBASNavigationMessage *self, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_setAGf1(t_SBASNavigationMessage *self, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_setIODN(t_SBASNavigationMessage *self, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_setTime(t_SBASNavigationMessage *self, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_setURA(t_SBASNavigationMessage *self, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_get__aGf0(t_SBASNavigationMessage *self, void *data);
            static int t_SBASNavigationMessage_set__aGf0(t_SBASNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_SBASNavigationMessage_get__aGf1(t_SBASNavigationMessage *self, void *data);
            static int t_SBASNavigationMessage_set__aGf1(t_SBASNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_SBASNavigationMessage_get__iODN(t_SBASNavigationMessage *self, void *data);
            static int t_SBASNavigationMessage_set__iODN(t_SBASNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_SBASNavigationMessage_get__propagator(t_SBASNavigationMessage *self, void *data);
            static PyObject *t_SBASNavigationMessage_get__time(t_SBASNavigationMessage *self, void *data);
            static int t_SBASNavigationMessage_set__time(t_SBASNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_SBASNavigationMessage_get__uRA(t_SBASNavigationMessage *self, void *data);
            static int t_SBASNavigationMessage_set__uRA(t_SBASNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_SBASNavigationMessage_get__week(t_SBASNavigationMessage *self, void *data);
            static PyGetSetDef t_SBASNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_SBASNavigationMessage, aGf0),
              DECLARE_GETSET_FIELD(t_SBASNavigationMessage, aGf1),
              DECLARE_GETSET_FIELD(t_SBASNavigationMessage, iODN),
              DECLARE_GET_FIELD(t_SBASNavigationMessage, propagator),
              DECLARE_GETSET_FIELD(t_SBASNavigationMessage, time),
              DECLARE_GETSET_FIELD(t_SBASNavigationMessage, uRA),
              DECLARE_GET_FIELD(t_SBASNavigationMessage, week),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SBASNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_SBASNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SBASNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SBASNavigationMessage, getAGf0, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getAGf1, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getIODN, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getPropagator, METH_VARARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getTime, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getURA, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getWeek, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, setAGf0, METH_O),
              DECLARE_METHOD(t_SBASNavigationMessage, setAGf1, METH_O),
              DECLARE_METHOD(t_SBASNavigationMessage, setIODN, METH_O),
              DECLARE_METHOD(t_SBASNavigationMessage, setTime, METH_O),
              DECLARE_METHOD(t_SBASNavigationMessage, setURA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SBASNavigationMessage)[] = {
              { Py_tp_methods, t_SBASNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_SBASNavigationMessage_init_ },
              { Py_tp_getset, t_SBASNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SBASNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractEphemerisMessage),
              NULL
            };

            DEFINE_TYPE(SBASNavigationMessage, t_SBASNavigationMessage, SBASNavigationMessage);

            void t_SBASNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(SBASNavigationMessage), &PY_TYPE_DEF(SBASNavigationMessage), module, "SBASNavigationMessage", 0);
            }

            void t_SBASNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASNavigationMessage), "class_", make_descriptor(SBASNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASNavigationMessage), "wrapfn_", make_descriptor(t_SBASNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SBASNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SBASNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_SBASNavigationMessage::wrap_Object(SBASNavigationMessage(((t_SBASNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_SBASNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SBASNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SBASNavigationMessage_init_(t_SBASNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              SBASNavigationMessage object((jobject) NULL);

              INT_CALL(object = SBASNavigationMessage());
              self->object = object;

              return 0;
            }

            static PyObject *t_SBASNavigationMessage_getAGf0(t_SBASNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAGf0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASNavigationMessage_getAGf1(t_SBASNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAGf1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASNavigationMessage_getIODN(t_SBASNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SBASNavigationMessage_getPropagator(t_SBASNavigationMessage *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  ::org::orekit::propagation::analytical::gnss::SBASPropagator result((jobject) NULL);
                  OBJ_CALL(result = self->object.getPropagator());
                  return ::org::orekit::propagation::analytical::gnss::t_SBASPropagator::wrap_Object(result);
                }
                break;
               case 1:
                {
                  ::org::orekit::frames::Frames a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::gnss::SBASPropagator result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::frames::Frames::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0));
                    return ::org::orekit::propagation::analytical::gnss::t_SBASPropagator::wrap_Object(result);
                  }
                }
                break;
               case 6:
                {
                  ::org::orekit::frames::Frames a0((jobject) NULL);
                  ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                  ::org::orekit::frames::Frame a2((jobject) NULL);
                  ::org::orekit::frames::Frame a3((jobject) NULL);
                  jdouble a4;
                  jdouble a5;
                  ::org::orekit::propagation::analytical::gnss::SBASPropagator result((jobject) NULL);

                  if (!parseArgs(args, "kkkkDD", ::org::orekit::frames::Frames::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0, a1, a2, a3, a4, a5));
                    return ::org::orekit::propagation::analytical::gnss::t_SBASPropagator::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
              return NULL;
            }

            static PyObject *t_SBASNavigationMessage_getTime(t_SBASNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASNavigationMessage_getURA(t_SBASNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getURA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASNavigationMessage_getWeek(t_SBASNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getWeek());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SBASNavigationMessage_setAGf0(t_SBASNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAGf0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAGf0", arg);
              return NULL;
            }

            static PyObject *t_SBASNavigationMessage_setAGf1(t_SBASNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAGf1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAGf1", arg);
              return NULL;
            }

            static PyObject *t_SBASNavigationMessage_setIODN(t_SBASNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIODN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODN", arg);
              return NULL;
            }

            static PyObject *t_SBASNavigationMessage_setTime(t_SBASNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTime", arg);
              return NULL;
            }

            static PyObject *t_SBASNavigationMessage_setURA(t_SBASNavigationMessage *self, PyObject *arg)
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

            static PyObject *t_SBASNavigationMessage_get__aGf0(t_SBASNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAGf0());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SBASNavigationMessage_set__aGf0(t_SBASNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAGf0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "aGf0", arg);
              return -1;
            }

            static PyObject *t_SBASNavigationMessage_get__aGf1(t_SBASNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAGf1());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SBASNavigationMessage_set__aGf1(t_SBASNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAGf1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "aGf1", arg);
              return -1;
            }

            static PyObject *t_SBASNavigationMessage_get__iODN(t_SBASNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODN());
              return PyLong_FromLong((long) value);
            }
            static int t_SBASNavigationMessage_set__iODN(t_SBASNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIODN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODN", arg);
              return -1;
            }

            static PyObject *t_SBASNavigationMessage_get__propagator(t_SBASNavigationMessage *self, void *data)
            {
              ::org::orekit::propagation::analytical::gnss::SBASPropagator value((jobject) NULL);
              OBJ_CALL(value = self->object.getPropagator());
              return ::org::orekit::propagation::analytical::gnss::t_SBASPropagator::wrap_Object(value);
            }

            static PyObject *t_SBASNavigationMessage_get__time(t_SBASNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SBASNavigationMessage_set__time(t_SBASNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "time", arg);
              return -1;
            }

            static PyObject *t_SBASNavigationMessage_get__uRA(t_SBASNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getURA());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SBASNavigationMessage_set__uRA(t_SBASNavigationMessage *self, PyObject *arg, void *data)
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

            static PyObject *t_SBASNavigationMessage_get__week(t_SBASNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getWeek());
              return PyLong_FromLong((long) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/StateCovarianceMatrixProvider.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *StateCovarianceMatrixProvider::class$ = NULL;
      jmethodID *StateCovarianceMatrixProvider::mids$ = NULL;
      bool StateCovarianceMatrixProvider::live$ = false;

      jclass StateCovarianceMatrixProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/StateCovarianceMatrixProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_90fa80224dcaf333] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/StateCovariance;)V");
          mids$[mid_getAdditionalState_f227e5f48720b798] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
          mids$[mid_getCovarianceOrbitType_c7d4737d7afca612] = env->getMethodID(cls, "getCovarianceOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getStateCovariance_5ea89205db4401ed] = env->getMethodID(cls, "getStateCovariance", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_getStateCovariance_7a8ee61937bdd116] = env->getMethodID(cls, "getStateCovariance", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_getStateCovariance_f0b5e49ce5f194b1] = env->getMethodID(cls, "getStateCovariance", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_yields_97df9017614a1945] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StateCovarianceMatrixProvider::StateCovarianceMatrixProvider(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::propagation::MatricesHarvester & a2, const ::org::orekit::propagation::StateCovariance & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_90fa80224dcaf333, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      JArray< jdouble > StateCovarianceMatrixProvider::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_f227e5f48720b798], a0.this$));
      }

      ::org::orekit::orbits::OrbitType StateCovarianceMatrixProvider::getCovarianceOrbitType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getCovarianceOrbitType_c7d4737d7afca612]));
      }

      ::java::lang::String StateCovarianceMatrixProvider::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      ::org::orekit::propagation::StateCovariance StateCovarianceMatrixProvider::getStateCovariance(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_getStateCovariance_5ea89205db4401ed], a0.this$));
      }

      ::org::orekit::propagation::StateCovariance StateCovarianceMatrixProvider::getStateCovariance(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_getStateCovariance_7a8ee61937bdd116], a0.this$, a1.this$));
      }

      ::org::orekit::propagation::StateCovariance StateCovarianceMatrixProvider::getStateCovariance(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::orbits::OrbitType & a1, const ::org::orekit::orbits::PositionAngleType & a2) const
      {
        return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_getStateCovariance_f0b5e49ce5f194b1], a0.this$, a1.this$, a2.this$));
      }

      void StateCovarianceMatrixProvider::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
      }

      jboolean StateCovarianceMatrixProvider::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_yields_97df9017614a1945], a0.this$);
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
      static PyObject *t_StateCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_StateCovarianceMatrixProvider_init_(t_StateCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_StateCovarianceMatrixProvider_getAdditionalState(t_StateCovarianceMatrixProvider *self, PyObject *arg);
      static PyObject *t_StateCovarianceMatrixProvider_getCovarianceOrbitType(t_StateCovarianceMatrixProvider *self);
      static PyObject *t_StateCovarianceMatrixProvider_getName(t_StateCovarianceMatrixProvider *self);
      static PyObject *t_StateCovarianceMatrixProvider_getStateCovariance(t_StateCovarianceMatrixProvider *self, PyObject *args);
      static PyObject *t_StateCovarianceMatrixProvider_init(t_StateCovarianceMatrixProvider *self, PyObject *args);
      static PyObject *t_StateCovarianceMatrixProvider_yields(t_StateCovarianceMatrixProvider *self, PyObject *arg);
      static PyObject *t_StateCovarianceMatrixProvider_get__covarianceOrbitType(t_StateCovarianceMatrixProvider *self, void *data);
      static PyObject *t_StateCovarianceMatrixProvider_get__name(t_StateCovarianceMatrixProvider *self, void *data);
      static PyGetSetDef t_StateCovarianceMatrixProvider__fields_[] = {
        DECLARE_GET_FIELD(t_StateCovarianceMatrixProvider, covarianceOrbitType),
        DECLARE_GET_FIELD(t_StateCovarianceMatrixProvider, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_StateCovarianceMatrixProvider__methods_[] = {
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, getAdditionalState, METH_O),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, getCovarianceOrbitType, METH_NOARGS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, getName, METH_NOARGS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, getStateCovariance, METH_VARARGS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, init, METH_VARARGS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, yields, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateCovarianceMatrixProvider)[] = {
        { Py_tp_methods, t_StateCovarianceMatrixProvider__methods_ },
        { Py_tp_init, (void *) t_StateCovarianceMatrixProvider_init_ },
        { Py_tp_getset, t_StateCovarianceMatrixProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateCovarianceMatrixProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StateCovarianceMatrixProvider, t_StateCovarianceMatrixProvider, StateCovarianceMatrixProvider);

      void t_StateCovarianceMatrixProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(StateCovarianceMatrixProvider), &PY_TYPE_DEF(StateCovarianceMatrixProvider), module, "StateCovarianceMatrixProvider", 0);
      }

      void t_StateCovarianceMatrixProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceMatrixProvider), "class_", make_descriptor(StateCovarianceMatrixProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceMatrixProvider), "wrapfn_", make_descriptor(t_StateCovarianceMatrixProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceMatrixProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StateCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateCovarianceMatrixProvider::initializeClass, 1)))
          return NULL;
        return t_StateCovarianceMatrixProvider::wrap_Object(StateCovarianceMatrixProvider(((t_StateCovarianceMatrixProvider *) arg)->object.this$));
      }
      static PyObject *t_StateCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateCovarianceMatrixProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_StateCovarianceMatrixProvider_init_(t_StateCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::org::orekit::propagation::MatricesHarvester a2((jobject) NULL);
        ::org::orekit::propagation::StateCovariance a3((jobject) NULL);
        StateCovarianceMatrixProvider object((jobject) NULL);

        if (!parseArgs(args, "sskk", ::org::orekit::propagation::MatricesHarvester::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = StateCovarianceMatrixProvider(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_StateCovarianceMatrixProvider_getAdditionalState(t_StateCovarianceMatrixProvider *self, PyObject *arg)
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

      static PyObject *t_StateCovarianceMatrixProvider_getCovarianceOrbitType(t_StateCovarianceMatrixProvider *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCovarianceOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_StateCovarianceMatrixProvider_getName(t_StateCovarianceMatrixProvider *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_StateCovarianceMatrixProvider_getStateCovariance(t_StateCovarianceMatrixProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::StateCovariance result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStateCovariance(a0));
              return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::propagation::StateCovariance result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getStateCovariance(a0, a1));
              return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::orbits::OrbitType a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::propagation::StateCovariance result((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              OBJ_CALL(result = self->object.getStateCovariance(a0, a1, a2));
              return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStateCovariance", args);
        return NULL;
      }

      static PyObject *t_StateCovarianceMatrixProvider_init(t_StateCovarianceMatrixProvider *self, PyObject *args)
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

      static PyObject *t_StateCovarianceMatrixProvider_yields(t_StateCovarianceMatrixProvider *self, PyObject *arg)
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

      static PyObject *t_StateCovarianceMatrixProvider_get__covarianceOrbitType(t_StateCovarianceMatrixProvider *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCovarianceOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }

      static PyObject *t_StateCovarianceMatrixProvider_get__name(t_StateCovarianceMatrixProvider *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
